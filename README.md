# MSM8998-OH-KERNEL-6.0
这是自己~~闲得没事干~~为Nubia Z17(nx563j)移植的OpenHarmony系统内核

目前测试可以编译通过，也可以生成对应的vmlinux文件。

## 【目前进度】

- [x] OH内核态层 = OH Linux内核 + OH内核态特性（可选特性或者必选特性，如必选特性HDF，今后的可选特性HMDFS等）

- [x] OH Linux内核 = 标准LTS Linux 内核 + 三方SoC芯片平台代码 + OH内核态基础代码（支撑OH用户态层运行的最基础代码）

~~- [ ] OH内核态层 = 标准LTS Linux 内核 + 三方SoC芯片平台代码 + OH内核态基础代码 + OH内核态特性（如HDF）~~

**我之后又详细阅读了OH的代码仓库，发现HDF的集成已经被放弃了，所以暂时不考虑集成OH内核态特性**

## 【上游】

内核上游来自[https://gitlab.com/Rikivt/linux/-/tree/nx563j/6.0](https://gitlab.com/Rikivt/linux/-/tree/nx563j/6.0)

## 【特点】

- 开启了完整的Docker内核选项(*鸿蒙系统仍在移植中，故无法测试*)
- 开启了`usb ssh`模式(*鸿蒙系统仍在移植中，故无法测试*)
- 其他的?~~编不下去了~~

## 【如何编译】

1. 导入一堆环境
```bash
export PATH="$PATH:WorkingDir/prebuilts/clang/ohos/linux-x86_64/llvm/bin"
```

2. 准备config文件
```bash
make ARCH=arm64 nx563j_oh_defconfig
```

3. 开始编译
```bash
make ARCH=arm64 LLVM=1 \                                                                                               
    LD="WorkingDir/prebuilts/clang/ohos/linux-x86_64/llvm/bin/ld.lld" \
    CROSS_COMPILE=".WorkingDir/prebuilts/gcc/linux-x86/aarch64/gcc-linaro-7.5.0-2019.12-x86_64_aarch64-linux-gnu/bin/aarch64-linux-gnu-" \
    CC="ccache WorkingDir/prebuilts/clang/ohos/linux-x86_64/llvm/bin/clang" \
    HOSTCC="ccache WorkingDir/prebuilts/clang/ohos/linux-x86_64/llvm/bin/clang" \
    PERL=/usr/bin/perl \
    -j12
```

4. 等我把系统移植完刷内核就成
:-)
