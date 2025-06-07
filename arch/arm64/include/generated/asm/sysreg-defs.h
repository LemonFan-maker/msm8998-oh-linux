#ifndef __ASM_SYSREG_DEFS_H
#define __ASM_SYSREG_DEFS_H

/* Generated file - do not edit */

#define REG_ID_AA64ZFR0_EL1                     S3_0_C0_C4_4
#define SYS_ID_AA64ZFR0_EL1                     sys_reg(3, 0, 0, 4, 4)
#define SYS_ID_AA64ZFR0_EL1_Op0                 3
#define SYS_ID_AA64ZFR0_EL1_Op1                 0
#define SYS_ID_AA64ZFR0_EL1_CRn                 0
#define SYS_ID_AA64ZFR0_EL1_CRm                 4
#define SYS_ID_AA64ZFR0_EL1_Op2                 4

#define ID_AA64ZFR0_EL1_F64MM                   GENMASK(59, 56)
#define ID_AA64ZFR0_EL1_F64MM_MASK              GENMASK(59, 56)
#define ID_AA64ZFR0_EL1_F64MM_SHIFT             56
#define ID_AA64ZFR0_EL1_F64MM_WIDTH             4
#define ID_AA64ZFR0_EL1_F64MM_NI                UL(0b0000)
#define ID_AA64ZFR0_EL1_F64MM_IMP               UL(0b0001)

#define ID_AA64ZFR0_EL1_F32MM                   GENMASK(55, 52)
#define ID_AA64ZFR0_EL1_F32MM_MASK              GENMASK(55, 52)
#define ID_AA64ZFR0_EL1_F32MM_SHIFT             52
#define ID_AA64ZFR0_EL1_F32MM_WIDTH             4
#define ID_AA64ZFR0_EL1_F32MM_NI                UL(0b0000)
#define ID_AA64ZFR0_EL1_F32MM_IMP               UL(0b0001)

#define ID_AA64ZFR0_EL1_I8MM                    GENMASK(47, 44)
#define ID_AA64ZFR0_EL1_I8MM_MASK               GENMASK(47, 44)
#define ID_AA64ZFR0_EL1_I8MM_SHIFT              44
#define ID_AA64ZFR0_EL1_I8MM_WIDTH              4
#define ID_AA64ZFR0_EL1_I8MM_NI                 UL(0b0000)
#define ID_AA64ZFR0_EL1_I8MM_IMP                UL(0b0001)

#define ID_AA64ZFR0_EL1_SM4                     GENMASK(43, 40)
#define ID_AA64ZFR0_EL1_SM4_MASK                GENMASK(43, 40)
#define ID_AA64ZFR0_EL1_SM4_SHIFT               40
#define ID_AA64ZFR0_EL1_SM4_WIDTH               4
#define ID_AA64ZFR0_EL1_SM4_NI                  UL(0b0000)
#define ID_AA64ZFR0_EL1_SM4_IMP                 UL(0b0001)

#define ID_AA64ZFR0_EL1_SHA3                    GENMASK(35, 32)
#define ID_AA64ZFR0_EL1_SHA3_MASK               GENMASK(35, 32)
#define ID_AA64ZFR0_EL1_SHA3_SHIFT              32
#define ID_AA64ZFR0_EL1_SHA3_WIDTH              4
#define ID_AA64ZFR0_EL1_SHA3_NI                 UL(0b0000)
#define ID_AA64ZFR0_EL1_SHA3_IMP                UL(0b0001)

#define ID_AA64ZFR0_EL1_BF16                    GENMASK(23, 20)
#define ID_AA64ZFR0_EL1_BF16_MASK               GENMASK(23, 20)
#define ID_AA64ZFR0_EL1_BF16_SHIFT              20
#define ID_AA64ZFR0_EL1_BF16_WIDTH              4
#define ID_AA64ZFR0_EL1_BF16_NI                 UL(0b0000)
#define ID_AA64ZFR0_EL1_BF16_IMP                UL(0b0001)
#define ID_AA64ZFR0_EL1_BF16_EBF16              UL(0b0010)

#define ID_AA64ZFR0_EL1_BitPerm                 GENMASK(19, 16)
#define ID_AA64ZFR0_EL1_BitPerm_MASK            GENMASK(19, 16)
#define ID_AA64ZFR0_EL1_BitPerm_SHIFT           16
#define ID_AA64ZFR0_EL1_BitPerm_WIDTH           4
#define ID_AA64ZFR0_EL1_BitPerm_NI              UL(0b0000)
#define ID_AA64ZFR0_EL1_BitPerm_IMP             UL(0b0001)

#define ID_AA64ZFR0_EL1_AES                     GENMASK(7, 4)
#define ID_AA64ZFR0_EL1_AES_MASK                GENMASK(7, 4)
#define ID_AA64ZFR0_EL1_AES_SHIFT               4
#define ID_AA64ZFR0_EL1_AES_WIDTH               4
#define ID_AA64ZFR0_EL1_AES_NI                  UL(0b0000)
#define ID_AA64ZFR0_EL1_AES_IMP                 UL(0b0001)
#define ID_AA64ZFR0_EL1_AES_PMULL128            UL(0b0010)

#define ID_AA64ZFR0_EL1_SVEver                  GENMASK(3, 0)
#define ID_AA64ZFR0_EL1_SVEver_MASK             GENMASK(3, 0)
#define ID_AA64ZFR0_EL1_SVEver_SHIFT            0
#define ID_AA64ZFR0_EL1_SVEver_WIDTH            4
#define ID_AA64ZFR0_EL1_SVEver_IMP              UL(0b0000)
#define ID_AA64ZFR0_EL1_SVEver_SVE2             UL(0b0001)

#define ID_AA64ZFR0_EL1_RES0                    (UL(0) | GENMASK_ULL(63, 60) | GENMASK_ULL(51, 48) | GENMASK_ULL(39, 36) | GENMASK_ULL(31, 24) | GENMASK_ULL(15, 8))
#define ID_AA64ZFR0_EL1_RES1                    (UL(0))

#define REG_ID_AA64SMFR0_EL1                    S3_0_C0_C4_5
#define SYS_ID_AA64SMFR0_EL1                    sys_reg(3, 0, 0, 4, 5)
#define SYS_ID_AA64SMFR0_EL1_Op0                3
#define SYS_ID_AA64SMFR0_EL1_Op1                0
#define SYS_ID_AA64SMFR0_EL1_CRn                0
#define SYS_ID_AA64SMFR0_EL1_CRm                4
#define SYS_ID_AA64SMFR0_EL1_Op2                5

#define ID_AA64SMFR0_EL1_FA64                   GENMASK(63, 63)
#define ID_AA64SMFR0_EL1_FA64_MASK              GENMASK(63, 63)
#define ID_AA64SMFR0_EL1_FA64_SHIFT             63
#define ID_AA64SMFR0_EL1_FA64_WIDTH             1
#define ID_AA64SMFR0_EL1_FA64_NI                UL(0b0)
#define ID_AA64SMFR0_EL1_FA64_IMP               UL(0b1)

#define ID_AA64SMFR0_EL1_SMEver                 GENMASK(59, 56)
#define ID_AA64SMFR0_EL1_SMEver_MASK            GENMASK(59, 56)
#define ID_AA64SMFR0_EL1_SMEver_SHIFT           56
#define ID_AA64SMFR0_EL1_SMEver_WIDTH           4

#define ID_AA64SMFR0_EL1_I16I64                 GENMASK(55, 52)
#define ID_AA64SMFR0_EL1_I16I64_MASK            GENMASK(55, 52)
#define ID_AA64SMFR0_EL1_I16I64_SHIFT           52
#define ID_AA64SMFR0_EL1_I16I64_WIDTH           4
#define ID_AA64SMFR0_EL1_I16I64_NI              UL(0b0000)
#define ID_AA64SMFR0_EL1_I16I64_IMP             UL(0b1111)

#define ID_AA64SMFR0_EL1_F64F64                 GENMASK(48, 48)
#define ID_AA64SMFR0_EL1_F64F64_MASK            GENMASK(48, 48)
#define ID_AA64SMFR0_EL1_F64F64_SHIFT           48
#define ID_AA64SMFR0_EL1_F64F64_WIDTH           1
#define ID_AA64SMFR0_EL1_F64F64_NI              UL(0b0)
#define ID_AA64SMFR0_EL1_F64F64_IMP             UL(0b1)

#define ID_AA64SMFR0_EL1_I8I32                  GENMASK(39, 36)
#define ID_AA64SMFR0_EL1_I8I32_MASK             GENMASK(39, 36)
#define ID_AA64SMFR0_EL1_I8I32_SHIFT            36
#define ID_AA64SMFR0_EL1_I8I32_WIDTH            4
#define ID_AA64SMFR0_EL1_I8I32_NI               UL(0b0000)
#define ID_AA64SMFR0_EL1_I8I32_IMP              UL(0b1111)

#define ID_AA64SMFR0_EL1_F16F32                 GENMASK(35, 35)
#define ID_AA64SMFR0_EL1_F16F32_MASK            GENMASK(35, 35)
#define ID_AA64SMFR0_EL1_F16F32_SHIFT           35
#define ID_AA64SMFR0_EL1_F16F32_WIDTH           1
#define ID_AA64SMFR0_EL1_F16F32_NI              UL(0b0)
#define ID_AA64SMFR0_EL1_F16F32_IMP             UL(0b1)

#define ID_AA64SMFR0_EL1_B16F32                 GENMASK(34, 34)
#define ID_AA64SMFR0_EL1_B16F32_MASK            GENMASK(34, 34)
#define ID_AA64SMFR0_EL1_B16F32_SHIFT           34
#define ID_AA64SMFR0_EL1_B16F32_WIDTH           1
#define ID_AA64SMFR0_EL1_B16F32_NI              UL(0b0)
#define ID_AA64SMFR0_EL1_B16F32_IMP             UL(0b1)

#define ID_AA64SMFR0_EL1_F32F32                 GENMASK(32, 32)
#define ID_AA64SMFR0_EL1_F32F32_MASK            GENMASK(32, 32)
#define ID_AA64SMFR0_EL1_F32F32_SHIFT           32
#define ID_AA64SMFR0_EL1_F32F32_WIDTH           1
#define ID_AA64SMFR0_EL1_F32F32_NI              UL(0b0)
#define ID_AA64SMFR0_EL1_F32F32_IMP             UL(0b1)

#define ID_AA64SMFR0_EL1_RES0                   (UL(0) | GENMASK_ULL(62, 60) | GENMASK_ULL(51, 49) | GENMASK_ULL(47, 40) | GENMASK_ULL(33, 33) | GENMASK_ULL(31, 0))
#define ID_AA64SMFR0_EL1_RES1                   (UL(0))

#define REG_ID_AA64ISAR0_EL1                    S3_0_C0_C6_0
#define SYS_ID_AA64ISAR0_EL1                    sys_reg(3, 0, 0, 6, 0)
#define SYS_ID_AA64ISAR0_EL1_Op0                3
#define SYS_ID_AA64ISAR0_EL1_Op1                0
#define SYS_ID_AA64ISAR0_EL1_CRn                0
#define SYS_ID_AA64ISAR0_EL1_CRm                6
#define SYS_ID_AA64ISAR0_EL1_Op2                0

#define ID_AA64ISAR0_EL1_RNDR                   GENMASK(63, 60)
#define ID_AA64ISAR0_EL1_RNDR_MASK              GENMASK(63, 60)
#define ID_AA64ISAR0_EL1_RNDR_SHIFT             60
#define ID_AA64ISAR0_EL1_RNDR_WIDTH             4
#define ID_AA64ISAR0_EL1_RNDR_NI                UL(0b0000)
#define ID_AA64ISAR0_EL1_RNDR_IMP               UL(0b0001)

#define ID_AA64ISAR0_EL1_TLB                    GENMASK(59, 56)
#define ID_AA64ISAR0_EL1_TLB_MASK               GENMASK(59, 56)
#define ID_AA64ISAR0_EL1_TLB_SHIFT              56
#define ID_AA64ISAR0_EL1_TLB_WIDTH              4
#define ID_AA64ISAR0_EL1_TLB_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_TLB_OS                 UL(0b0001)
#define ID_AA64ISAR0_EL1_TLB_RANGE              UL(0b0010)

#define ID_AA64ISAR0_EL1_TS                     GENMASK(55, 52)
#define ID_AA64ISAR0_EL1_TS_MASK                GENMASK(55, 52)
#define ID_AA64ISAR0_EL1_TS_SHIFT               52
#define ID_AA64ISAR0_EL1_TS_WIDTH               4
#define ID_AA64ISAR0_EL1_TS_NI                  UL(0b0000)
#define ID_AA64ISAR0_EL1_TS_FLAGM               UL(0b0001)
#define ID_AA64ISAR0_EL1_TS_FLAGM2              UL(0b0010)

#define ID_AA64ISAR0_EL1_FHM                    GENMASK(51, 48)
#define ID_AA64ISAR0_EL1_FHM_MASK               GENMASK(51, 48)
#define ID_AA64ISAR0_EL1_FHM_SHIFT              48
#define ID_AA64ISAR0_EL1_FHM_WIDTH              4
#define ID_AA64ISAR0_EL1_FHM_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_FHM_IMP                UL(0b0001)

#define ID_AA64ISAR0_EL1_DP                     GENMASK(47, 44)
#define ID_AA64ISAR0_EL1_DP_MASK                GENMASK(47, 44)
#define ID_AA64ISAR0_EL1_DP_SHIFT               44
#define ID_AA64ISAR0_EL1_DP_WIDTH               4
#define ID_AA64ISAR0_EL1_DP_NI                  UL(0b0000)
#define ID_AA64ISAR0_EL1_DP_IMP                 UL(0b0001)

#define ID_AA64ISAR0_EL1_SM4                    GENMASK(43, 40)
#define ID_AA64ISAR0_EL1_SM4_MASK               GENMASK(43, 40)
#define ID_AA64ISAR0_EL1_SM4_SHIFT              40
#define ID_AA64ISAR0_EL1_SM4_WIDTH              4
#define ID_AA64ISAR0_EL1_SM4_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_SM4_IMP                UL(0b0001)

#define ID_AA64ISAR0_EL1_SM3                    GENMASK(39, 36)
#define ID_AA64ISAR0_EL1_SM3_MASK               GENMASK(39, 36)
#define ID_AA64ISAR0_EL1_SM3_SHIFT              36
#define ID_AA64ISAR0_EL1_SM3_WIDTH              4
#define ID_AA64ISAR0_EL1_SM3_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_SM3_IMP                UL(0b0001)

#define ID_AA64ISAR0_EL1_SHA3                   GENMASK(35, 32)
#define ID_AA64ISAR0_EL1_SHA3_MASK              GENMASK(35, 32)
#define ID_AA64ISAR0_EL1_SHA3_SHIFT             32
#define ID_AA64ISAR0_EL1_SHA3_WIDTH             4
#define ID_AA64ISAR0_EL1_SHA3_NI                UL(0b0000)
#define ID_AA64ISAR0_EL1_SHA3_IMP               UL(0b0001)

#define ID_AA64ISAR0_EL1_RDM                    GENMASK(31, 28)
#define ID_AA64ISAR0_EL1_RDM_MASK               GENMASK(31, 28)
#define ID_AA64ISAR0_EL1_RDM_SHIFT              28
#define ID_AA64ISAR0_EL1_RDM_WIDTH              4
#define ID_AA64ISAR0_EL1_RDM_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_RDM_IMP                UL(0b0001)

#define ID_AA64ISAR0_EL1_TME                    GENMASK(27, 24)
#define ID_AA64ISAR0_EL1_TME_MASK               GENMASK(27, 24)
#define ID_AA64ISAR0_EL1_TME_SHIFT              24
#define ID_AA64ISAR0_EL1_TME_WIDTH              4
#define ID_AA64ISAR0_EL1_TME_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_TME_IMP                UL(0b0001)

#define ID_AA64ISAR0_EL1_ATOMIC                 GENMASK(23, 20)
#define ID_AA64ISAR0_EL1_ATOMIC_MASK            GENMASK(23, 20)
#define ID_AA64ISAR0_EL1_ATOMIC_SHIFT           20
#define ID_AA64ISAR0_EL1_ATOMIC_WIDTH           4
#define ID_AA64ISAR0_EL1_ATOMIC_NI              UL(0b0000)
#define ID_AA64ISAR0_EL1_ATOMIC_IMP             UL(0b0010)

#define ID_AA64ISAR0_EL1_CRC32                  GENMASK(19, 16)
#define ID_AA64ISAR0_EL1_CRC32_MASK             GENMASK(19, 16)
#define ID_AA64ISAR0_EL1_CRC32_SHIFT            16
#define ID_AA64ISAR0_EL1_CRC32_WIDTH            4
#define ID_AA64ISAR0_EL1_CRC32_NI               UL(0b0000)
#define ID_AA64ISAR0_EL1_CRC32_IMP              UL(0b0001)

#define ID_AA64ISAR0_EL1_SHA2                   GENMASK(15, 12)
#define ID_AA64ISAR0_EL1_SHA2_MASK              GENMASK(15, 12)
#define ID_AA64ISAR0_EL1_SHA2_SHIFT             12
#define ID_AA64ISAR0_EL1_SHA2_WIDTH             4
#define ID_AA64ISAR0_EL1_SHA2_NI                UL(0b0000)
#define ID_AA64ISAR0_EL1_SHA2_SHA256            UL(0b0001)
#define ID_AA64ISAR0_EL1_SHA2_SHA512            UL(0b0010)

#define ID_AA64ISAR0_EL1_SHA1                   GENMASK(11, 8)
#define ID_AA64ISAR0_EL1_SHA1_MASK              GENMASK(11, 8)
#define ID_AA64ISAR0_EL1_SHA1_SHIFT             8
#define ID_AA64ISAR0_EL1_SHA1_WIDTH             4
#define ID_AA64ISAR0_EL1_SHA1_NI                UL(0b0000)
#define ID_AA64ISAR0_EL1_SHA1_IMP               UL(0b0001)

#define ID_AA64ISAR0_EL1_AES                    GENMASK(7, 4)
#define ID_AA64ISAR0_EL1_AES_MASK               GENMASK(7, 4)
#define ID_AA64ISAR0_EL1_AES_SHIFT              4
#define ID_AA64ISAR0_EL1_AES_WIDTH              4
#define ID_AA64ISAR0_EL1_AES_NI                 UL(0b0000)
#define ID_AA64ISAR0_EL1_AES_AES                UL(0b0001)
#define ID_AA64ISAR0_EL1_AES_PMULL              UL(0b0010)

#define ID_AA64ISAR0_EL1_RES0                   (UL(0) | GENMASK_ULL(3, 0))
#define ID_AA64ISAR0_EL1_RES1                   (UL(0))

#define REG_ID_AA64ISAR1_EL1                    S3_0_C0_C6_1
#define SYS_ID_AA64ISAR1_EL1                    sys_reg(3, 0, 0, 6, 1)
#define SYS_ID_AA64ISAR1_EL1_Op0                3
#define SYS_ID_AA64ISAR1_EL1_Op1                0
#define SYS_ID_AA64ISAR1_EL1_CRn                0
#define SYS_ID_AA64ISAR1_EL1_CRm                6
#define SYS_ID_AA64ISAR1_EL1_Op2                1

#define ID_AA64ISAR1_EL1_LS64                   GENMASK(63, 60)
#define ID_AA64ISAR1_EL1_LS64_MASK              GENMASK(63, 60)
#define ID_AA64ISAR1_EL1_LS64_SHIFT             60
#define ID_AA64ISAR1_EL1_LS64_WIDTH             4
#define ID_AA64ISAR1_EL1_LS64_NI                UL(0b0000)
#define ID_AA64ISAR1_EL1_LS64_LS64              UL(0b0001)
#define ID_AA64ISAR1_EL1_LS64_LS64_V            UL(0b0010)
#define ID_AA64ISAR1_EL1_LS64_LS64_ACCDATA      UL(0b0011)

#define ID_AA64ISAR1_EL1_XS                     GENMASK(59, 56)
#define ID_AA64ISAR1_EL1_XS_MASK                GENMASK(59, 56)
#define ID_AA64ISAR1_EL1_XS_SHIFT               56
#define ID_AA64ISAR1_EL1_XS_WIDTH               4
#define ID_AA64ISAR1_EL1_XS_NI                  UL(0b0000)
#define ID_AA64ISAR1_EL1_XS_IMP                 UL(0b0001)

#define ID_AA64ISAR1_EL1_I8MM                   GENMASK(55, 52)
#define ID_AA64ISAR1_EL1_I8MM_MASK              GENMASK(55, 52)
#define ID_AA64ISAR1_EL1_I8MM_SHIFT             52
#define ID_AA64ISAR1_EL1_I8MM_WIDTH             4
#define ID_AA64ISAR1_EL1_I8MM_NI                UL(0b0000)
#define ID_AA64ISAR1_EL1_I8MM_IMP               UL(0b0001)

#define ID_AA64ISAR1_EL1_DGH                    GENMASK(51, 48)
#define ID_AA64ISAR1_EL1_DGH_MASK               GENMASK(51, 48)
#define ID_AA64ISAR1_EL1_DGH_SHIFT              48
#define ID_AA64ISAR1_EL1_DGH_WIDTH              4
#define ID_AA64ISAR1_EL1_DGH_NI                 UL(0b0000)
#define ID_AA64ISAR1_EL1_DGH_IMP                UL(0b0001)

#define ID_AA64ISAR1_EL1_BF16                   GENMASK(47, 44)
#define ID_AA64ISAR1_EL1_BF16_MASK              GENMASK(47, 44)
#define ID_AA64ISAR1_EL1_BF16_SHIFT             44
#define ID_AA64ISAR1_EL1_BF16_WIDTH             4
#define ID_AA64ISAR1_EL1_BF16_NI                UL(0b0000)
#define ID_AA64ISAR1_EL1_BF16_IMP               UL(0b0001)
#define ID_AA64ISAR1_EL1_BF16_EBF16             UL(0b0010)

#define ID_AA64ISAR1_EL1_SPECRES                GENMASK(43, 40)
#define ID_AA64ISAR1_EL1_SPECRES_MASK           GENMASK(43, 40)
#define ID_AA64ISAR1_EL1_SPECRES_SHIFT          40
#define ID_AA64ISAR1_EL1_SPECRES_WIDTH          4
#define ID_AA64ISAR1_EL1_SPECRES_NI             UL(0b0000)
#define ID_AA64ISAR1_EL1_SPECRES_IMP            UL(0b0001)

#define ID_AA64ISAR1_EL1_SB                     GENMASK(39, 36)
#define ID_AA64ISAR1_EL1_SB_MASK                GENMASK(39, 36)
#define ID_AA64ISAR1_EL1_SB_SHIFT               36
#define ID_AA64ISAR1_EL1_SB_WIDTH               4
#define ID_AA64ISAR1_EL1_SB_NI                  UL(0b0000)
#define ID_AA64ISAR1_EL1_SB_IMP                 UL(0b0001)

#define ID_AA64ISAR1_EL1_FRINTTS                GENMASK(35, 32)
#define ID_AA64ISAR1_EL1_FRINTTS_MASK           GENMASK(35, 32)
#define ID_AA64ISAR1_EL1_FRINTTS_SHIFT          32
#define ID_AA64ISAR1_EL1_FRINTTS_WIDTH          4
#define ID_AA64ISAR1_EL1_FRINTTS_NI             UL(0b0000)
#define ID_AA64ISAR1_EL1_FRINTTS_IMP            UL(0b0001)

#define ID_AA64ISAR1_EL1_GPI                    GENMASK(31, 28)
#define ID_AA64ISAR1_EL1_GPI_MASK               GENMASK(31, 28)
#define ID_AA64ISAR1_EL1_GPI_SHIFT              28
#define ID_AA64ISAR1_EL1_GPI_WIDTH              4
#define ID_AA64ISAR1_EL1_GPI_NI                 UL(0b0000)
#define ID_AA64ISAR1_EL1_GPI_IMP                UL(0b0001)

#define ID_AA64ISAR1_EL1_GPA                    GENMASK(27, 24)
#define ID_AA64ISAR1_EL1_GPA_MASK               GENMASK(27, 24)
#define ID_AA64ISAR1_EL1_GPA_SHIFT              24
#define ID_AA64ISAR1_EL1_GPA_WIDTH              4
#define ID_AA64ISAR1_EL1_GPA_NI                 UL(0b0000)
#define ID_AA64ISAR1_EL1_GPA_IMP                UL(0b0001)

#define ID_AA64ISAR1_EL1_LRCPC                  GENMASK(23, 20)
#define ID_AA64ISAR1_EL1_LRCPC_MASK             GENMASK(23, 20)
#define ID_AA64ISAR1_EL1_LRCPC_SHIFT            20
#define ID_AA64ISAR1_EL1_LRCPC_WIDTH            4
#define ID_AA64ISAR1_EL1_LRCPC_NI               UL(0b0000)
#define ID_AA64ISAR1_EL1_LRCPC_IMP              UL(0b0001)
#define ID_AA64ISAR1_EL1_LRCPC_LRCPC2           UL(0b0010)

#define ID_AA64ISAR1_EL1_FCMA                   GENMASK(19, 16)
#define ID_AA64ISAR1_EL1_FCMA_MASK              GENMASK(19, 16)
#define ID_AA64ISAR1_EL1_FCMA_SHIFT             16
#define ID_AA64ISAR1_EL1_FCMA_WIDTH             4
#define ID_AA64ISAR1_EL1_FCMA_NI                UL(0b0000)
#define ID_AA64ISAR1_EL1_FCMA_IMP               UL(0b0001)

#define ID_AA64ISAR1_EL1_JSCVT                  GENMASK(15, 12)
#define ID_AA64ISAR1_EL1_JSCVT_MASK             GENMASK(15, 12)
#define ID_AA64ISAR1_EL1_JSCVT_SHIFT            12
#define ID_AA64ISAR1_EL1_JSCVT_WIDTH            4
#define ID_AA64ISAR1_EL1_JSCVT_NI               UL(0b0000)
#define ID_AA64ISAR1_EL1_JSCVT_IMP              UL(0b0001)

#define ID_AA64ISAR1_EL1_API                    GENMASK(11, 8)
#define ID_AA64ISAR1_EL1_API_MASK               GENMASK(11, 8)
#define ID_AA64ISAR1_EL1_API_SHIFT              8
#define ID_AA64ISAR1_EL1_API_WIDTH              4
#define ID_AA64ISAR1_EL1_API_NI                 UL(0b0000)
#define ID_AA64ISAR1_EL1_API_PAuth              UL(0b0001)
#define ID_AA64ISAR1_EL1_API_EPAC               UL(0b0010)
#define ID_AA64ISAR1_EL1_API_PAuth2             UL(0b0011)
#define ID_AA64ISAR1_EL1_API_FPAC               UL(0b0100)
#define ID_AA64ISAR1_EL1_API_FPACCOMBINE        UL(0b0101)

#define ID_AA64ISAR1_EL1_APA                    GENMASK(7, 4)
#define ID_AA64ISAR1_EL1_APA_MASK               GENMASK(7, 4)
#define ID_AA64ISAR1_EL1_APA_SHIFT              4
#define ID_AA64ISAR1_EL1_APA_WIDTH              4
#define ID_AA64ISAR1_EL1_APA_NI                 UL(0b0000)
#define ID_AA64ISAR1_EL1_APA_PAuth              UL(0b0001)
#define ID_AA64ISAR1_EL1_APA_EPAC               UL(0b0010)
#define ID_AA64ISAR1_EL1_APA_PAuth2             UL(0b0011)
#define ID_AA64ISAR1_EL1_APA_FPAC               UL(0b0100)
#define ID_AA64ISAR1_EL1_APA_FPACCOMBINE        UL(0b0101)

#define ID_AA64ISAR1_EL1_DPB                    GENMASK(3, 0)
#define ID_AA64ISAR1_EL1_DPB_MASK               GENMASK(3, 0)
#define ID_AA64ISAR1_EL1_DPB_SHIFT              0
#define ID_AA64ISAR1_EL1_DPB_WIDTH              4
#define ID_AA64ISAR1_EL1_DPB_NI                 UL(0b0000)
#define ID_AA64ISAR1_EL1_DPB_IMP                UL(0b0001)
#define ID_AA64ISAR1_EL1_DPB_DPB2               UL(0b0010)

#define ID_AA64ISAR1_EL1_RES0                   (UL(0))
#define ID_AA64ISAR1_EL1_RES1                   (UL(0))

#define REG_ID_AA64ISAR2_EL1                    S3_0_C0_C6_2
#define SYS_ID_AA64ISAR2_EL1                    sys_reg(3, 0, 0, 6, 2)
#define SYS_ID_AA64ISAR2_EL1_Op0                3
#define SYS_ID_AA64ISAR2_EL1_Op1                0
#define SYS_ID_AA64ISAR2_EL1_CRn                0
#define SYS_ID_AA64ISAR2_EL1_CRm                6
#define SYS_ID_AA64ISAR2_EL1_Op2                2

#define ID_AA64ISAR2_EL1_PAC_frac               GENMASK(27, 24)
#define ID_AA64ISAR2_EL1_PAC_frac_MASK          GENMASK(27, 24)
#define ID_AA64ISAR2_EL1_PAC_frac_SHIFT         24
#define ID_AA64ISAR2_EL1_PAC_frac_WIDTH         4
#define ID_AA64ISAR2_EL1_PAC_frac_NI            UL(0b0000)
#define ID_AA64ISAR2_EL1_PAC_frac_IMP           UL(0b0001)

#define ID_AA64ISAR2_EL1_BC                     GENMASK(23, 20)
#define ID_AA64ISAR2_EL1_BC_MASK                GENMASK(23, 20)
#define ID_AA64ISAR2_EL1_BC_SHIFT               20
#define ID_AA64ISAR2_EL1_BC_WIDTH               4
#define ID_AA64ISAR2_EL1_BC_NI                  UL(0b0000)
#define ID_AA64ISAR2_EL1_BC_IMP                 UL(0b0001)

#define ID_AA64ISAR2_EL1_MOPS                   GENMASK(19, 16)
#define ID_AA64ISAR2_EL1_MOPS_MASK              GENMASK(19, 16)
#define ID_AA64ISAR2_EL1_MOPS_SHIFT             16
#define ID_AA64ISAR2_EL1_MOPS_WIDTH             4
#define ID_AA64ISAR2_EL1_MOPS_NI                UL(0b0000)
#define ID_AA64ISAR2_EL1_MOPS_IMP               UL(0b0001)

#define ID_AA64ISAR2_EL1_APA3                   GENMASK(15, 12)
#define ID_AA64ISAR2_EL1_APA3_MASK              GENMASK(15, 12)
#define ID_AA64ISAR2_EL1_APA3_SHIFT             12
#define ID_AA64ISAR2_EL1_APA3_WIDTH             4
#define ID_AA64ISAR2_EL1_APA3_NI                UL(0b0000)
#define ID_AA64ISAR2_EL1_APA3_PAuth             UL(0b0001)
#define ID_AA64ISAR2_EL1_APA3_EPAC              UL(0b0010)
#define ID_AA64ISAR2_EL1_APA3_PAuth2            UL(0b0011)
#define ID_AA64ISAR2_EL1_APA3_FPAC              UL(0b0100)
#define ID_AA64ISAR2_EL1_APA3_FPACCOMBINE       UL(0b0101)

#define ID_AA64ISAR2_EL1_GPA3                   GENMASK(11, 8)
#define ID_AA64ISAR2_EL1_GPA3_MASK              GENMASK(11, 8)
#define ID_AA64ISAR2_EL1_GPA3_SHIFT             8
#define ID_AA64ISAR2_EL1_GPA3_WIDTH             4
#define ID_AA64ISAR2_EL1_GPA3_NI                UL(0b0000)
#define ID_AA64ISAR2_EL1_GPA3_IMP               UL(0b0001)

#define ID_AA64ISAR2_EL1_RPRES                  GENMASK(7, 4)
#define ID_AA64ISAR2_EL1_RPRES_MASK             GENMASK(7, 4)
#define ID_AA64ISAR2_EL1_RPRES_SHIFT            4
#define ID_AA64ISAR2_EL1_RPRES_WIDTH            4
#define ID_AA64ISAR2_EL1_RPRES_NI               UL(0b0000)
#define ID_AA64ISAR2_EL1_RPRES_IMP              UL(0b0001)

#define ID_AA64ISAR2_EL1_WFxT                   GENMASK(3, 0)
#define ID_AA64ISAR2_EL1_WFxT_MASK              GENMASK(3, 0)
#define ID_AA64ISAR2_EL1_WFxT_SHIFT             0
#define ID_AA64ISAR2_EL1_WFxT_WIDTH             4
#define ID_AA64ISAR2_EL1_WFxT_NI                UL(0b0000)
#define ID_AA64ISAR2_EL1_WFxT_IMP               UL(0b0010)

#define ID_AA64ISAR2_EL1_RES0                   (UL(0) | GENMASK_ULL(63, 28))
#define ID_AA64ISAR2_EL1_RES1                   (UL(0))

#define REG_SCTLR_EL1                           S3_0_C1_C0_0
#define SYS_SCTLR_EL1                           sys_reg(3, 0, 1, 0, 0)
#define SYS_SCTLR_EL1_Op0                       3
#define SYS_SCTLR_EL1_Op1                       0
#define SYS_SCTLR_EL1_CRn                       1
#define SYS_SCTLR_EL1_CRm                       0
#define SYS_SCTLR_EL1_Op2                       0

#define SCTLR_EL1_TIDCP                         GENMASK(63, 63)
#define SCTLR_EL1_TIDCP_MASK                    GENMASK(63, 63)
#define SCTLR_EL1_TIDCP_SHIFT                   63
#define SCTLR_EL1_TIDCP_WIDTH                   1

#define SCTLR_EL1_SPINMASK                      GENMASK(62, 62)
#define SCTLR_EL1_SPINMASK_MASK                 GENMASK(62, 62)
#define SCTLR_EL1_SPINMASK_SHIFT                62
#define SCTLR_EL1_SPINMASK_WIDTH                1

#define SCTLR_EL1_NMI                           GENMASK(61, 61)
#define SCTLR_EL1_NMI_MASK                      GENMASK(61, 61)
#define SCTLR_EL1_NMI_SHIFT                     61
#define SCTLR_EL1_NMI_WIDTH                     1

#define SCTLR_EL1_EnTP2                         GENMASK(60, 60)
#define SCTLR_EL1_EnTP2_MASK                    GENMASK(60, 60)
#define SCTLR_EL1_EnTP2_SHIFT                   60
#define SCTLR_EL1_EnTP2_WIDTH                   1

#define SCTLR_EL1_EPAN                          GENMASK(57, 57)
#define SCTLR_EL1_EPAN_MASK                     GENMASK(57, 57)
#define SCTLR_EL1_EPAN_SHIFT                    57
#define SCTLR_EL1_EPAN_WIDTH                    1

#define SCTLR_EL1_EnALS                         GENMASK(56, 56)
#define SCTLR_EL1_EnALS_MASK                    GENMASK(56, 56)
#define SCTLR_EL1_EnALS_SHIFT                   56
#define SCTLR_EL1_EnALS_WIDTH                   1

#define SCTLR_EL1_EnAS0                         GENMASK(55, 55)
#define SCTLR_EL1_EnAS0_MASK                    GENMASK(55, 55)
#define SCTLR_EL1_EnAS0_SHIFT                   55
#define SCTLR_EL1_EnAS0_WIDTH                   1

#define SCTLR_EL1_EnASR                         GENMASK(54, 54)
#define SCTLR_EL1_EnASR_MASK                    GENMASK(54, 54)
#define SCTLR_EL1_EnASR_SHIFT                   54
#define SCTLR_EL1_EnASR_WIDTH                   1

#define SCTLR_EL1_TME                           GENMASK(53, 53)
#define SCTLR_EL1_TME_MASK                      GENMASK(53, 53)
#define SCTLR_EL1_TME_SHIFT                     53
#define SCTLR_EL1_TME_WIDTH                     1

#define SCTLR_EL1_TME0                          GENMASK(52, 52)
#define SCTLR_EL1_TME0_MASK                     GENMASK(52, 52)
#define SCTLR_EL1_TME0_SHIFT                    52
#define SCTLR_EL1_TME0_WIDTH                    1

#define SCTLR_EL1_TMT                           GENMASK(51, 51)
#define SCTLR_EL1_TMT_MASK                      GENMASK(51, 51)
#define SCTLR_EL1_TMT_SHIFT                     51
#define SCTLR_EL1_TMT_WIDTH                     1

#define SCTLR_EL1_TMT0                          GENMASK(50, 50)
#define SCTLR_EL1_TMT0_MASK                     GENMASK(50, 50)
#define SCTLR_EL1_TMT0_SHIFT                    50
#define SCTLR_EL1_TMT0_WIDTH                    1

#define SCTLR_EL1_TWEDEL                        GENMASK(49, 46)
#define SCTLR_EL1_TWEDEL_MASK                   GENMASK(49, 46)
#define SCTLR_EL1_TWEDEL_SHIFT                  46
#define SCTLR_EL1_TWEDEL_WIDTH                  4

#define SCTLR_EL1_TWEDEn                        GENMASK(45, 45)
#define SCTLR_EL1_TWEDEn_MASK                   GENMASK(45, 45)
#define SCTLR_EL1_TWEDEn_SHIFT                  45
#define SCTLR_EL1_TWEDEn_WIDTH                  1

#define SCTLR_EL1_DSSBS                         GENMASK(44, 44)
#define SCTLR_EL1_DSSBS_MASK                    GENMASK(44, 44)
#define SCTLR_EL1_DSSBS_SHIFT                   44
#define SCTLR_EL1_DSSBS_WIDTH                   1

#define SCTLR_EL1_ATA                           GENMASK(43, 43)
#define SCTLR_EL1_ATA_MASK                      GENMASK(43, 43)
#define SCTLR_EL1_ATA_SHIFT                     43
#define SCTLR_EL1_ATA_WIDTH                     1

#define SCTLR_EL1_ATA0                          GENMASK(42, 42)
#define SCTLR_EL1_ATA0_MASK                     GENMASK(42, 42)
#define SCTLR_EL1_ATA0_SHIFT                    42
#define SCTLR_EL1_ATA0_WIDTH                    1

#define SCTLR_EL1_TCF                           GENMASK(41, 40)
#define SCTLR_EL1_TCF_MASK                      GENMASK(41, 40)
#define SCTLR_EL1_TCF_SHIFT                     40
#define SCTLR_EL1_TCF_WIDTH                     2
#define SCTLR_EL1_TCF_NONE                      UL(0b00)
#define SCTLR_EL1_TCF_SYNC                      UL(0b01)
#define SCTLR_EL1_TCF_ASYNC                     UL(0b10)
#define SCTLR_EL1_TCF_ASYMM                     UL(0b11)

#define SCTLR_EL1_TCF0                          GENMASK(39, 38)
#define SCTLR_EL1_TCF0_MASK                     GENMASK(39, 38)
#define SCTLR_EL1_TCF0_SHIFT                    38
#define SCTLR_EL1_TCF0_WIDTH                    2
#define SCTLR_EL1_TCF0_NONE                     UL(0b00)
#define SCTLR_EL1_TCF0_SYNC                     UL(0b01)
#define SCTLR_EL1_TCF0_ASYNC                    UL(0b10)
#define SCTLR_EL1_TCF0_ASYMM                    UL(0b11)

#define SCTLR_EL1_ITFSB                         GENMASK(37, 37)
#define SCTLR_EL1_ITFSB_MASK                    GENMASK(37, 37)
#define SCTLR_EL1_ITFSB_SHIFT                   37
#define SCTLR_EL1_ITFSB_WIDTH                   1

#define SCTLR_EL1_BT1                           GENMASK(36, 36)
#define SCTLR_EL1_BT1_MASK                      GENMASK(36, 36)
#define SCTLR_EL1_BT1_SHIFT                     36
#define SCTLR_EL1_BT1_WIDTH                     1

#define SCTLR_EL1_BT0                           GENMASK(35, 35)
#define SCTLR_EL1_BT0_MASK                      GENMASK(35, 35)
#define SCTLR_EL1_BT0_SHIFT                     35
#define SCTLR_EL1_BT0_WIDTH                     1

#define SCTLR_EL1_MSCEn                         GENMASK(33, 33)
#define SCTLR_EL1_MSCEn_MASK                    GENMASK(33, 33)
#define SCTLR_EL1_MSCEn_SHIFT                   33
#define SCTLR_EL1_MSCEn_WIDTH                   1

#define SCTLR_EL1_CMOW                          GENMASK(32, 32)
#define SCTLR_EL1_CMOW_MASK                     GENMASK(32, 32)
#define SCTLR_EL1_CMOW_SHIFT                    32
#define SCTLR_EL1_CMOW_WIDTH                    1

#define SCTLR_EL1_EnIA                          GENMASK(31, 31)
#define SCTLR_EL1_EnIA_MASK                     GENMASK(31, 31)
#define SCTLR_EL1_EnIA_SHIFT                    31
#define SCTLR_EL1_EnIA_WIDTH                    1

#define SCTLR_EL1_EnIB                          GENMASK(30, 30)
#define SCTLR_EL1_EnIB_MASK                     GENMASK(30, 30)
#define SCTLR_EL1_EnIB_SHIFT                    30
#define SCTLR_EL1_EnIB_WIDTH                    1

#define SCTLR_EL1_LSMAOE                        GENMASK(29, 29)
#define SCTLR_EL1_LSMAOE_MASK                   GENMASK(29, 29)
#define SCTLR_EL1_LSMAOE_SHIFT                  29
#define SCTLR_EL1_LSMAOE_WIDTH                  1

#define SCTLR_EL1_nTLSMD                        GENMASK(28, 28)
#define SCTLR_EL1_nTLSMD_MASK                   GENMASK(28, 28)
#define SCTLR_EL1_nTLSMD_SHIFT                  28
#define SCTLR_EL1_nTLSMD_WIDTH                  1

#define SCTLR_EL1_EnDA                          GENMASK(27, 27)
#define SCTLR_EL1_EnDA_MASK                     GENMASK(27, 27)
#define SCTLR_EL1_EnDA_SHIFT                    27
#define SCTLR_EL1_EnDA_WIDTH                    1

#define SCTLR_EL1_UCI                           GENMASK(26, 26)
#define SCTLR_EL1_UCI_MASK                      GENMASK(26, 26)
#define SCTLR_EL1_UCI_SHIFT                     26
#define SCTLR_EL1_UCI_WIDTH                     1

#define SCTLR_EL1_EE                            GENMASK(25, 25)
#define SCTLR_EL1_EE_MASK                       GENMASK(25, 25)
#define SCTLR_EL1_EE_SHIFT                      25
#define SCTLR_EL1_EE_WIDTH                      1

#define SCTLR_EL1_E0E                           GENMASK(24, 24)
#define SCTLR_EL1_E0E_MASK                      GENMASK(24, 24)
#define SCTLR_EL1_E0E_SHIFT                     24
#define SCTLR_EL1_E0E_WIDTH                     1

#define SCTLR_EL1_SPAN                          GENMASK(23, 23)
#define SCTLR_EL1_SPAN_MASK                     GENMASK(23, 23)
#define SCTLR_EL1_SPAN_SHIFT                    23
#define SCTLR_EL1_SPAN_WIDTH                    1

#define SCTLR_EL1_EIS                           GENMASK(22, 22)
#define SCTLR_EL1_EIS_MASK                      GENMASK(22, 22)
#define SCTLR_EL1_EIS_SHIFT                     22
#define SCTLR_EL1_EIS_WIDTH                     1

#define SCTLR_EL1_IESB                          GENMASK(21, 21)
#define SCTLR_EL1_IESB_MASK                     GENMASK(21, 21)
#define SCTLR_EL1_IESB_SHIFT                    21
#define SCTLR_EL1_IESB_WIDTH                    1

#define SCTLR_EL1_TSCXT                         GENMASK(20, 20)
#define SCTLR_EL1_TSCXT_MASK                    GENMASK(20, 20)
#define SCTLR_EL1_TSCXT_SHIFT                   20
#define SCTLR_EL1_TSCXT_WIDTH                   1

#define SCTLR_EL1_WXN                           GENMASK(19, 19)
#define SCTLR_EL1_WXN_MASK                      GENMASK(19, 19)
#define SCTLR_EL1_WXN_SHIFT                     19
#define SCTLR_EL1_WXN_WIDTH                     1

#define SCTLR_EL1_nTWE                          GENMASK(18, 18)
#define SCTLR_EL1_nTWE_MASK                     GENMASK(18, 18)
#define SCTLR_EL1_nTWE_SHIFT                    18
#define SCTLR_EL1_nTWE_WIDTH                    1

#define SCTLR_EL1_nTWI                          GENMASK(16, 16)
#define SCTLR_EL1_nTWI_MASK                     GENMASK(16, 16)
#define SCTLR_EL1_nTWI_SHIFT                    16
#define SCTLR_EL1_nTWI_WIDTH                    1

#define SCTLR_EL1_UCT                           GENMASK(15, 15)
#define SCTLR_EL1_UCT_MASK                      GENMASK(15, 15)
#define SCTLR_EL1_UCT_SHIFT                     15
#define SCTLR_EL1_UCT_WIDTH                     1

#define SCTLR_EL1_DZE                           GENMASK(14, 14)
#define SCTLR_EL1_DZE_MASK                      GENMASK(14, 14)
#define SCTLR_EL1_DZE_SHIFT                     14
#define SCTLR_EL1_DZE_WIDTH                     1

#define SCTLR_EL1_EnDB                          GENMASK(13, 13)
#define SCTLR_EL1_EnDB_MASK                     GENMASK(13, 13)
#define SCTLR_EL1_EnDB_SHIFT                    13
#define SCTLR_EL1_EnDB_WIDTH                    1

#define SCTLR_EL1_I                             GENMASK(12, 12)
#define SCTLR_EL1_I_MASK                        GENMASK(12, 12)
#define SCTLR_EL1_I_SHIFT                       12
#define SCTLR_EL1_I_WIDTH                       1

#define SCTLR_EL1_EOS                           GENMASK(11, 11)
#define SCTLR_EL1_EOS_MASK                      GENMASK(11, 11)
#define SCTLR_EL1_EOS_SHIFT                     11
#define SCTLR_EL1_EOS_WIDTH                     1

#define SCTLR_EL1_EnRCTX                        GENMASK(10, 10)
#define SCTLR_EL1_EnRCTX_MASK                   GENMASK(10, 10)
#define SCTLR_EL1_EnRCTX_SHIFT                  10
#define SCTLR_EL1_EnRCTX_WIDTH                  1

#define SCTLR_EL1_UMA                           GENMASK(9, 9)
#define SCTLR_EL1_UMA_MASK                      GENMASK(9, 9)
#define SCTLR_EL1_UMA_SHIFT                     9
#define SCTLR_EL1_UMA_WIDTH                     1

#define SCTLR_EL1_SED                           GENMASK(8, 8)
#define SCTLR_EL1_SED_MASK                      GENMASK(8, 8)
#define SCTLR_EL1_SED_SHIFT                     8
#define SCTLR_EL1_SED_WIDTH                     1

#define SCTLR_EL1_ITD                           GENMASK(7, 7)
#define SCTLR_EL1_ITD_MASK                      GENMASK(7, 7)
#define SCTLR_EL1_ITD_SHIFT                     7
#define SCTLR_EL1_ITD_WIDTH                     1

#define SCTLR_EL1_nAA                           GENMASK(6, 6)
#define SCTLR_EL1_nAA_MASK                      GENMASK(6, 6)
#define SCTLR_EL1_nAA_SHIFT                     6
#define SCTLR_EL1_nAA_WIDTH                     1

#define SCTLR_EL1_CP15BEN                       GENMASK(5, 5)
#define SCTLR_EL1_CP15BEN_MASK                  GENMASK(5, 5)
#define SCTLR_EL1_CP15BEN_SHIFT                 5
#define SCTLR_EL1_CP15BEN_WIDTH                 1

#define SCTLR_EL1_SA0                           GENMASK(4, 4)
#define SCTLR_EL1_SA0_MASK                      GENMASK(4, 4)
#define SCTLR_EL1_SA0_SHIFT                     4
#define SCTLR_EL1_SA0_WIDTH                     1

#define SCTLR_EL1_SA                            GENMASK(3, 3)
#define SCTLR_EL1_SA_MASK                       GENMASK(3, 3)
#define SCTLR_EL1_SA_SHIFT                      3
#define SCTLR_EL1_SA_WIDTH                      1

#define SCTLR_EL1_C                             GENMASK(2, 2)
#define SCTLR_EL1_C_MASK                        GENMASK(2, 2)
#define SCTLR_EL1_C_SHIFT                       2
#define SCTLR_EL1_C_WIDTH                       1

#define SCTLR_EL1_A                             GENMASK(1, 1)
#define SCTLR_EL1_A_MASK                        GENMASK(1, 1)
#define SCTLR_EL1_A_SHIFT                       1
#define SCTLR_EL1_A_WIDTH                       1

#define SCTLR_EL1_M                             GENMASK(0, 0)
#define SCTLR_EL1_M_MASK                        GENMASK(0, 0)
#define SCTLR_EL1_M_SHIFT                       0
#define SCTLR_EL1_M_WIDTH                       1

#define SCTLR_EL1_RES0                          (UL(0) | GENMASK_ULL(59, 58) | GENMASK_ULL(34, 34) | GENMASK_ULL(17, 17))
#define SCTLR_EL1_RES1                          (UL(0))

#define CPACR_ELx_TTA                           GENMASK(28, 28)
#define CPACR_ELx_TTA_MASK                      GENMASK(28, 28)
#define CPACR_ELx_TTA_SHIFT                     28
#define CPACR_ELx_TTA_WIDTH                     1

#define CPACR_ELx_SMEN                          GENMASK(25, 24)
#define CPACR_ELx_SMEN_MASK                     GENMASK(25, 24)
#define CPACR_ELx_SMEN_SHIFT                    24
#define CPACR_ELx_SMEN_WIDTH                    2

#define CPACR_ELx_FPEN                          GENMASK(21, 20)
#define CPACR_ELx_FPEN_MASK                     GENMASK(21, 20)
#define CPACR_ELx_FPEN_SHIFT                    20
#define CPACR_ELx_FPEN_WIDTH                    2

#define CPACR_ELx_ZEN                           GENMASK(17, 16)
#define CPACR_ELx_ZEN_MASK                      GENMASK(17, 16)
#define CPACR_ELx_ZEN_SHIFT                     16
#define CPACR_ELx_ZEN_WIDTH                     2

#define CPACR_ELx_RES0                          (UL(0) | GENMASK_ULL(63, 29) | GENMASK_ULL(27, 26) | GENMASK_ULL(23, 22) | GENMASK_ULL(19, 18) | GENMASK_ULL(15, 0))
#define CPACR_ELx_RES1                          (UL(0))

#define REG_CPACR_EL1                           S3_0_C1_C0_2
#define SYS_CPACR_EL1                           sys_reg(3, 0, 1, 0, 2)
#define SYS_CPACR_EL1_Op0                       3
#define SYS_CPACR_EL1_Op1                       0
#define SYS_CPACR_EL1_CRn                       1
#define SYS_CPACR_EL1_CRm                       0
#define SYS_CPACR_EL1_Op2                       2

/* For CPACR_EL1 fields see CPACR_ELx */

#define REG_SMPRI_EL1                           S3_0_C1_C2_4
#define SYS_SMPRI_EL1                           sys_reg(3, 0, 1, 2, 4)
#define SYS_SMPRI_EL1_Op0                       3
#define SYS_SMPRI_EL1_Op1                       0
#define SYS_SMPRI_EL1_CRn                       1
#define SYS_SMPRI_EL1_CRm                       2
#define SYS_SMPRI_EL1_Op2                       4

#define SMPRI_EL1_PRIORITY                      GENMASK(3, 0)
#define SMPRI_EL1_PRIORITY_MASK                 GENMASK(3, 0)
#define SMPRI_EL1_PRIORITY_SHIFT                0
#define SMPRI_EL1_PRIORITY_WIDTH                4

#define SMPRI_EL1_RES0                          (UL(0) | GENMASK_ULL(63, 4))
#define SMPRI_EL1_RES1                          (UL(0))

#define ZCR_ELx_LEN                             GENMASK(3, 0)
#define ZCR_ELx_LEN_MASK                        GENMASK(3, 0)
#define ZCR_ELx_LEN_SHIFT                       0
#define ZCR_ELx_LEN_WIDTH                       4

#define ZCR_ELx_RES0                            (UL(0) | GENMASK_ULL(63, 9))
#define ZCR_ELx_RES1                            (UL(0))

#define REG_ZCR_EL1                             S3_0_C1_C2_0
#define SYS_ZCR_EL1                             sys_reg(3, 0, 1, 2, 0)
#define SYS_ZCR_EL1_Op0                         3
#define SYS_ZCR_EL1_Op1                         0
#define SYS_ZCR_EL1_CRn                         1
#define SYS_ZCR_EL1_CRm                         2
#define SYS_ZCR_EL1_Op2                         0

/* For ZCR_EL1 fields see ZCR_ELx */

#define SMCR_ELx_FA64                           GENMASK(31, 31)
#define SMCR_ELx_FA64_MASK                      GENMASK(31, 31)
#define SMCR_ELx_FA64_SHIFT                     31
#define SMCR_ELx_FA64_WIDTH                     1

#define SMCR_ELx_LEN                            GENMASK(3, 0)
#define SMCR_ELx_LEN_MASK                       GENMASK(3, 0)
#define SMCR_ELx_LEN_SHIFT                      0
#define SMCR_ELx_LEN_WIDTH                      4

#define SMCR_ELx_RES0                           (UL(0) | GENMASK_ULL(63, 32) | GENMASK_ULL(30, 9))
#define SMCR_ELx_RES1                           (UL(0))

#define REG_SMCR_EL1                            S3_0_C1_C2_6
#define SYS_SMCR_EL1                            sys_reg(3, 0, 1, 2, 6)
#define SYS_SMCR_EL1_Op0                        3
#define SYS_SMCR_EL1_Op1                        0
#define SYS_SMCR_EL1_CRn                        1
#define SYS_SMCR_EL1_CRm                        2
#define SYS_SMCR_EL1_Op2                        6

/* For SMCR_EL1 fields see SMCR_ELx */

#define REG_FAR_EL1                             S3_0_C6_C0_0
#define SYS_FAR_EL1                             sys_reg(3, 0, 6, 0, 0)
#define SYS_FAR_EL1_Op0                         3
#define SYS_FAR_EL1_Op1                         0
#define SYS_FAR_EL1_CRn                         6
#define SYS_FAR_EL1_CRm                         0
#define SYS_FAR_EL1_Op2                         0

#define FAR_EL1_ADDR                            GENMASK(63, 0)
#define FAR_EL1_ADDR_MASK                       GENMASK(63, 0)
#define FAR_EL1_ADDR_SHIFT                      0
#define FAR_EL1_ADDR_WIDTH                      64

#define FAR_EL1_RES0                            (UL(0))
#define FAR_EL1_RES1                            (UL(0))

#define CONTEXTIDR_ELx_PROCID                   GENMASK(31, 0)
#define CONTEXTIDR_ELx_PROCID_MASK              GENMASK(31, 0)
#define CONTEXTIDR_ELx_PROCID_SHIFT             0
#define CONTEXTIDR_ELx_PROCID_WIDTH             32

#define CONTEXTIDR_ELx_RES0                     (UL(0) | GENMASK_ULL(63, 32))
#define CONTEXTIDR_ELx_RES1                     (UL(0))

#define REG_CONTEXTIDR_EL1                      S3_0_C13_C0_1
#define SYS_CONTEXTIDR_EL1                      sys_reg(3, 0, 13, 0, 1)
#define SYS_CONTEXTIDR_EL1_Op0                  3
#define SYS_CONTEXTIDR_EL1_Op1                  0
#define SYS_CONTEXTIDR_EL1_CRn                  13
#define SYS_CONTEXTIDR_EL1_CRm                  0
#define SYS_CONTEXTIDR_EL1_Op2                  1

/* For CONTEXTIDR_EL1 fields see CONTEXTIDR_ELx */

#define REG_CLIDR_EL1                           S3_1_C0_C0_1
#define SYS_CLIDR_EL1                           sys_reg(3, 1, 0, 0, 1)
#define SYS_CLIDR_EL1_Op0                       3
#define SYS_CLIDR_EL1_Op1                       1
#define SYS_CLIDR_EL1_CRn                       0
#define SYS_CLIDR_EL1_CRm                       0
#define SYS_CLIDR_EL1_Op2                       1

#define CLIDR_EL1_Ttypen                        GENMASK(46, 33)
#define CLIDR_EL1_Ttypen_MASK                   GENMASK(46, 33)
#define CLIDR_EL1_Ttypen_SHIFT                  33
#define CLIDR_EL1_Ttypen_WIDTH                  14

#define CLIDR_EL1_ICB                           GENMASK(32, 30)
#define CLIDR_EL1_ICB_MASK                      GENMASK(32, 30)
#define CLIDR_EL1_ICB_SHIFT                     30
#define CLIDR_EL1_ICB_WIDTH                     3

#define CLIDR_EL1_LoUU                          GENMASK(29, 27)
#define CLIDR_EL1_LoUU_MASK                     GENMASK(29, 27)
#define CLIDR_EL1_LoUU_SHIFT                    27
#define CLIDR_EL1_LoUU_WIDTH                    3

#define CLIDR_EL1_LoC                           GENMASK(26, 24)
#define CLIDR_EL1_LoC_MASK                      GENMASK(26, 24)
#define CLIDR_EL1_LoC_SHIFT                     24
#define CLIDR_EL1_LoC_WIDTH                     3

#define CLIDR_EL1_LoUIS                         GENMASK(23, 21)
#define CLIDR_EL1_LoUIS_MASK                    GENMASK(23, 21)
#define CLIDR_EL1_LoUIS_SHIFT                   21
#define CLIDR_EL1_LoUIS_WIDTH                   3

#define CLIDR_EL1_Ctype7                        GENMASK(20, 18)
#define CLIDR_EL1_Ctype7_MASK                   GENMASK(20, 18)
#define CLIDR_EL1_Ctype7_SHIFT                  18
#define CLIDR_EL1_Ctype7_WIDTH                  3

#define CLIDR_EL1_Ctype6                        GENMASK(17, 15)
#define CLIDR_EL1_Ctype6_MASK                   GENMASK(17, 15)
#define CLIDR_EL1_Ctype6_SHIFT                  15
#define CLIDR_EL1_Ctype6_WIDTH                  3

#define CLIDR_EL1_Ctype5                        GENMASK(14, 12)
#define CLIDR_EL1_Ctype5_MASK                   GENMASK(14, 12)
#define CLIDR_EL1_Ctype5_SHIFT                  12
#define CLIDR_EL1_Ctype5_WIDTH                  3

#define CLIDR_EL1_Ctype4                        GENMASK(11, 9)
#define CLIDR_EL1_Ctype4_MASK                   GENMASK(11, 9)
#define CLIDR_EL1_Ctype4_SHIFT                  9
#define CLIDR_EL1_Ctype4_WIDTH                  3

#define CLIDR_EL1_Ctype3                        GENMASK(8, 6)
#define CLIDR_EL1_Ctype3_MASK                   GENMASK(8, 6)
#define CLIDR_EL1_Ctype3_SHIFT                  6
#define CLIDR_EL1_Ctype3_WIDTH                  3

#define CLIDR_EL1_Ctype2                        GENMASK(5, 3)
#define CLIDR_EL1_Ctype2_MASK                   GENMASK(5, 3)
#define CLIDR_EL1_Ctype2_SHIFT                  3
#define CLIDR_EL1_Ctype2_WIDTH                  3

#define CLIDR_EL1_Ctype1                        GENMASK(2, 0)
#define CLIDR_EL1_Ctype1_MASK                   GENMASK(2, 0)
#define CLIDR_EL1_Ctype1_SHIFT                  0
#define CLIDR_EL1_Ctype1_WIDTH                  3

#define CLIDR_EL1_RES0                          (UL(0) | GENMASK_ULL(63, 47))
#define CLIDR_EL1_RES1                          (UL(0))

#define REG_GMID_EL1                            S3_1_C0_C0_4
#define SYS_GMID_EL1                            sys_reg(3, 1, 0, 0, 4)
#define SYS_GMID_EL1_Op0                        3
#define SYS_GMID_EL1_Op1                        1
#define SYS_GMID_EL1_CRn                        0
#define SYS_GMID_EL1_CRm                        0
#define SYS_GMID_EL1_Op2                        4

#define GMID_EL1_BS                             GENMASK(3, 0)
#define GMID_EL1_BS_MASK                        GENMASK(3, 0)
#define GMID_EL1_BS_SHIFT                       0
#define GMID_EL1_BS_WIDTH                       4

#define GMID_EL1_RES0                           (UL(0) | GENMASK_ULL(63, 4))
#define GMID_EL1_RES1                           (UL(0))

#define REG_SMIDR_EL1                           S3_1_C0_C0_6
#define SYS_SMIDR_EL1                           sys_reg(3, 1, 0, 0, 6)
#define SYS_SMIDR_EL1_Op0                       3
#define SYS_SMIDR_EL1_Op1                       1
#define SYS_SMIDR_EL1_CRn                       0
#define SYS_SMIDR_EL1_CRm                       0
#define SYS_SMIDR_EL1_Op2                       6

#define SMIDR_EL1_IMPLEMENTER                   GENMASK(31, 24)
#define SMIDR_EL1_IMPLEMENTER_MASK              GENMASK(31, 24)
#define SMIDR_EL1_IMPLEMENTER_SHIFT             24
#define SMIDR_EL1_IMPLEMENTER_WIDTH             8

#define SMIDR_EL1_REVISION                      GENMASK(23, 16)
#define SMIDR_EL1_REVISION_MASK                 GENMASK(23, 16)
#define SMIDR_EL1_REVISION_SHIFT                16
#define SMIDR_EL1_REVISION_WIDTH                8

#define SMIDR_EL1_SMPS                          GENMASK(15, 15)
#define SMIDR_EL1_SMPS_MASK                     GENMASK(15, 15)
#define SMIDR_EL1_SMPS_SHIFT                    15
#define SMIDR_EL1_SMPS_WIDTH                    1

#define SMIDR_EL1_AFFINITY                      GENMASK(11, 0)
#define SMIDR_EL1_AFFINITY_MASK                 GENMASK(11, 0)
#define SMIDR_EL1_AFFINITY_SHIFT                0
#define SMIDR_EL1_AFFINITY_WIDTH                12

#define SMIDR_EL1_RES0                          (UL(0) | GENMASK_ULL(63, 32) | GENMASK_ULL(14, 12))
#define SMIDR_EL1_RES1                          (UL(0))

#define REG_CSSELR_EL1                          S3_2_C0_C0_0
#define SYS_CSSELR_EL1                          sys_reg(3, 2, 0, 0, 0)
#define SYS_CSSELR_EL1_Op0                      3
#define SYS_CSSELR_EL1_Op1                      2
#define SYS_CSSELR_EL1_CRn                      0
#define SYS_CSSELR_EL1_CRm                      0
#define SYS_CSSELR_EL1_Op2                      0

#define CSSELR_EL1_TnD                          GENMASK(4, 4)
#define CSSELR_EL1_TnD_MASK                     GENMASK(4, 4)
#define CSSELR_EL1_TnD_SHIFT                    4
#define CSSELR_EL1_TnD_WIDTH                    1

#define CSSELR_EL1_Level                        GENMASK(3, 1)
#define CSSELR_EL1_Level_MASK                   GENMASK(3, 1)
#define CSSELR_EL1_Level_SHIFT                  1
#define CSSELR_EL1_Level_WIDTH                  3

#define CSSELR_EL1_InD                          GENMASK(0, 0)
#define CSSELR_EL1_InD_MASK                     GENMASK(0, 0)
#define CSSELR_EL1_InD_SHIFT                    0
#define CSSELR_EL1_InD_WIDTH                    1

#define CSSELR_EL1_RES0                         (UL(0) | GENMASK_ULL(63, 5))
#define CSSELR_EL1_RES1                         (UL(0))

#define REG_CTR_EL0                             S3_3_C0_C0_1
#define SYS_CTR_EL0                             sys_reg(3, 3, 0, 0, 1)
#define SYS_CTR_EL0_Op0                         3
#define SYS_CTR_EL0_Op1                         3
#define SYS_CTR_EL0_CRn                         0
#define SYS_CTR_EL0_CRm                         0
#define SYS_CTR_EL0_Op2                         1

#define CTR_EL0_TminLine                        GENMASK(37, 32)
#define CTR_EL0_TminLine_MASK                   GENMASK(37, 32)
#define CTR_EL0_TminLine_SHIFT                  32
#define CTR_EL0_TminLine_WIDTH                  6

#define CTR_EL0_DIC                             GENMASK(29, 29)
#define CTR_EL0_DIC_MASK                        GENMASK(29, 29)
#define CTR_EL0_DIC_SHIFT                       29
#define CTR_EL0_DIC_WIDTH                       1

#define CTR_EL0_IDC                             GENMASK(28, 28)
#define CTR_EL0_IDC_MASK                        GENMASK(28, 28)
#define CTR_EL0_IDC_SHIFT                       28
#define CTR_EL0_IDC_WIDTH                       1

#define CTR_EL0_CWG                             GENMASK(27, 24)
#define CTR_EL0_CWG_MASK                        GENMASK(27, 24)
#define CTR_EL0_CWG_SHIFT                       24
#define CTR_EL0_CWG_WIDTH                       4

#define CTR_EL0_ERG                             GENMASK(23, 20)
#define CTR_EL0_ERG_MASK                        GENMASK(23, 20)
#define CTR_EL0_ERG_SHIFT                       20
#define CTR_EL0_ERG_WIDTH                       4

#define CTR_EL0_DminLine                        GENMASK(19, 16)
#define CTR_EL0_DminLine_MASK                   GENMASK(19, 16)
#define CTR_EL0_DminLine_SHIFT                  16
#define CTR_EL0_DminLine_WIDTH                  4

#define CTR_EL0_L1Ip                            GENMASK(15, 14)
#define CTR_EL0_L1Ip_MASK                       GENMASK(15, 14)
#define CTR_EL0_L1Ip_SHIFT                      14
#define CTR_EL0_L1Ip_WIDTH                      2
#define CTR_EL0_L1Ip_VPIPT                      UL(0b00)
#define CTR_EL0_L1Ip_RESERVED                   UL(0b01)
#define CTR_EL0_L1Ip_VIPT                       UL(0b10)
#define CTR_EL0_L1Ip_PIPT                       UL(0b11)

#define CTR_EL0_IminLine                        GENMASK(3, 0)
#define CTR_EL0_IminLine_MASK                   GENMASK(3, 0)
#define CTR_EL0_IminLine_SHIFT                  0
#define CTR_EL0_IminLine_WIDTH                  4

#define CTR_EL0_RES0                            (UL(0) | GENMASK_ULL(63, 38) | GENMASK_ULL(30, 30) | GENMASK_ULL(13, 4))
#define CTR_EL0_RES1                            (UL(0) | GENMASK_ULL(31, 31))

#define REG_DCZID_EL0                           S3_3_C0_C0_7
#define SYS_DCZID_EL0                           sys_reg(3, 3, 0, 0, 7)
#define SYS_DCZID_EL0_Op0                       3
#define SYS_DCZID_EL0_Op1                       3
#define SYS_DCZID_EL0_CRn                       0
#define SYS_DCZID_EL0_CRm                       0
#define SYS_DCZID_EL0_Op2                       7

#define DCZID_EL0_DZP                           GENMASK(4, 4)
#define DCZID_EL0_DZP_MASK                      GENMASK(4, 4)
#define DCZID_EL0_DZP_SHIFT                     4
#define DCZID_EL0_DZP_WIDTH                     1

#define DCZID_EL0_BS                            GENMASK(3, 0)
#define DCZID_EL0_BS_MASK                       GENMASK(3, 0)
#define DCZID_EL0_BS_SHIFT                      0
#define DCZID_EL0_BS_WIDTH                      4

#define DCZID_EL0_RES0                          (UL(0) | GENMASK_ULL(63, 5))
#define DCZID_EL0_RES1                          (UL(0))

#define REG_SVCR                                S3_3_C4_C2_2
#define SYS_SVCR                                sys_reg(3, 3, 4, 2, 2)
#define SYS_SVCR_Op0                            3
#define SYS_SVCR_Op1                            3
#define SYS_SVCR_CRn                            4
#define SYS_SVCR_CRm                            2
#define SYS_SVCR_Op2                            2

#define SVCR_ZA                                 GENMASK(1, 1)
#define SVCR_ZA_MASK                            GENMASK(1, 1)
#define SVCR_ZA_SHIFT                           1
#define SVCR_ZA_WIDTH                           1

#define SVCR_SM                                 GENMASK(0, 0)
#define SVCR_SM_MASK                            GENMASK(0, 0)
#define SVCR_SM_SHIFT                           0
#define SVCR_SM_WIDTH                           1

#define SVCR_RES0                               (UL(0) | GENMASK_ULL(63, 2))
#define SVCR_RES1                               (UL(0))

#define REG_ZCR_EL2                             S3_4_C1_C2_0
#define SYS_ZCR_EL2                             sys_reg(3, 4, 1, 2, 0)
#define SYS_ZCR_EL2_Op0                         3
#define SYS_ZCR_EL2_Op1                         4
#define SYS_ZCR_EL2_CRn                         1
#define SYS_ZCR_EL2_CRm                         2
#define SYS_ZCR_EL2_Op2                         0

/* For ZCR_EL2 fields see ZCR_ELx */

#define REG_SMPRIMAP_EL2                        S3_4_C1_C2_5
#define SYS_SMPRIMAP_EL2                        sys_reg(3, 4, 1, 2, 5)
#define SYS_SMPRIMAP_EL2_Op0                    3
#define SYS_SMPRIMAP_EL2_Op1                    4
#define SYS_SMPRIMAP_EL2_CRn                    1
#define SYS_SMPRIMAP_EL2_CRm                    2
#define SYS_SMPRIMAP_EL2_Op2                    5

#define SMPRIMAP_EL2_P15                        GENMASK(63, 60)
#define SMPRIMAP_EL2_P15_MASK                   GENMASK(63, 60)
#define SMPRIMAP_EL2_P15_SHIFT                  60
#define SMPRIMAP_EL2_P15_WIDTH                  4

#define SMPRIMAP_EL2_P14                        GENMASK(59, 56)
#define SMPRIMAP_EL2_P14_MASK                   GENMASK(59, 56)
#define SMPRIMAP_EL2_P14_SHIFT                  56
#define SMPRIMAP_EL2_P14_WIDTH                  4

#define SMPRIMAP_EL2_P13                        GENMASK(55, 52)
#define SMPRIMAP_EL2_P13_MASK                   GENMASK(55, 52)
#define SMPRIMAP_EL2_P13_SHIFT                  52
#define SMPRIMAP_EL2_P13_WIDTH                  4

#define SMPRIMAP_EL2_P12                        GENMASK(51, 48)
#define SMPRIMAP_EL2_P12_MASK                   GENMASK(51, 48)
#define SMPRIMAP_EL2_P12_SHIFT                  48
#define SMPRIMAP_EL2_P12_WIDTH                  4

#define SMPRIMAP_EL2_P11                        GENMASK(47, 44)
#define SMPRIMAP_EL2_P11_MASK                   GENMASK(47, 44)
#define SMPRIMAP_EL2_P11_SHIFT                  44
#define SMPRIMAP_EL2_P11_WIDTH                  4

#define SMPRIMAP_EL2_P10                        GENMASK(43, 40)
#define SMPRIMAP_EL2_P10_MASK                   GENMASK(43, 40)
#define SMPRIMAP_EL2_P10_SHIFT                  40
#define SMPRIMAP_EL2_P10_WIDTH                  4

#define SMPRIMAP_EL2_F9                         GENMASK(39, 36)
#define SMPRIMAP_EL2_F9_MASK                    GENMASK(39, 36)
#define SMPRIMAP_EL2_F9_SHIFT                   36
#define SMPRIMAP_EL2_F9_WIDTH                   4

#define SMPRIMAP_EL2_P8                         GENMASK(35, 32)
#define SMPRIMAP_EL2_P8_MASK                    GENMASK(35, 32)
#define SMPRIMAP_EL2_P8_SHIFT                   32
#define SMPRIMAP_EL2_P8_WIDTH                   4

#define SMPRIMAP_EL2_P7                         GENMASK(31, 28)
#define SMPRIMAP_EL2_P7_MASK                    GENMASK(31, 28)
#define SMPRIMAP_EL2_P7_SHIFT                   28
#define SMPRIMAP_EL2_P7_WIDTH                   4

#define SMPRIMAP_EL2_P6                         GENMASK(27, 24)
#define SMPRIMAP_EL2_P6_MASK                    GENMASK(27, 24)
#define SMPRIMAP_EL2_P6_SHIFT                   24
#define SMPRIMAP_EL2_P6_WIDTH                   4

#define SMPRIMAP_EL2_P5                         GENMASK(23, 20)
#define SMPRIMAP_EL2_P5_MASK                    GENMASK(23, 20)
#define SMPRIMAP_EL2_P5_SHIFT                   20
#define SMPRIMAP_EL2_P5_WIDTH                   4

#define SMPRIMAP_EL2_P4                         GENMASK(19, 16)
#define SMPRIMAP_EL2_P4_MASK                    GENMASK(19, 16)
#define SMPRIMAP_EL2_P4_SHIFT                   16
#define SMPRIMAP_EL2_P4_WIDTH                   4

#define SMPRIMAP_EL2_P3                         GENMASK(15, 12)
#define SMPRIMAP_EL2_P3_MASK                    GENMASK(15, 12)
#define SMPRIMAP_EL2_P3_SHIFT                   12
#define SMPRIMAP_EL2_P3_WIDTH                   4

#define SMPRIMAP_EL2_P2                         GENMASK(11, 8)
#define SMPRIMAP_EL2_P2_MASK                    GENMASK(11, 8)
#define SMPRIMAP_EL2_P2_SHIFT                   8
#define SMPRIMAP_EL2_P2_WIDTH                   4

#define SMPRIMAP_EL2_P1                         GENMASK(7, 4)
#define SMPRIMAP_EL2_P1_MASK                    GENMASK(7, 4)
#define SMPRIMAP_EL2_P1_SHIFT                   4
#define SMPRIMAP_EL2_P1_WIDTH                   4

#define SMPRIMAP_EL2_P0                         GENMASK(3, 0)
#define SMPRIMAP_EL2_P0_MASK                    GENMASK(3, 0)
#define SMPRIMAP_EL2_P0_SHIFT                   0
#define SMPRIMAP_EL2_P0_WIDTH                   4

#define SMPRIMAP_EL2_RES0                       (UL(0))
#define SMPRIMAP_EL2_RES1                       (UL(0))

#define REG_SMCR_EL2                            S3_4_C1_C2_6
#define SYS_SMCR_EL2                            sys_reg(3, 4, 1, 2, 6)
#define SYS_SMCR_EL2_Op0                        3
#define SYS_SMCR_EL2_Op1                        4
#define SYS_SMCR_EL2_CRn                        1
#define SYS_SMCR_EL2_CRm                        2
#define SYS_SMCR_EL2_Op2                        6

/* For SMCR_EL2 fields see SMCR_ELx */

#define REG_DACR32_EL2                          S3_4_C3_C0_0
#define SYS_DACR32_EL2                          sys_reg(3, 4, 3, 0, 0)
#define SYS_DACR32_EL2_Op0                      3
#define SYS_DACR32_EL2_Op1                      4
#define SYS_DACR32_EL2_CRn                      3
#define SYS_DACR32_EL2_CRm                      0
#define SYS_DACR32_EL2_Op2                      0

#define DACR32_EL2_D15                          GENMASK(31, 30)
#define DACR32_EL2_D15_MASK                     GENMASK(31, 30)
#define DACR32_EL2_D15_SHIFT                    30
#define DACR32_EL2_D15_WIDTH                    2

#define DACR32_EL2_D14                          GENMASK(29, 28)
#define DACR32_EL2_D14_MASK                     GENMASK(29, 28)
#define DACR32_EL2_D14_SHIFT                    28
#define DACR32_EL2_D14_WIDTH                    2

#define DACR32_EL2_D13                          GENMASK(27, 26)
#define DACR32_EL2_D13_MASK                     GENMASK(27, 26)
#define DACR32_EL2_D13_SHIFT                    26
#define DACR32_EL2_D13_WIDTH                    2

#define DACR32_EL2_D12                          GENMASK(25, 24)
#define DACR32_EL2_D12_MASK                     GENMASK(25, 24)
#define DACR32_EL2_D12_SHIFT                    24
#define DACR32_EL2_D12_WIDTH                    2

#define DACR32_EL2_D11                          GENMASK(23, 22)
#define DACR32_EL2_D11_MASK                     GENMASK(23, 22)
#define DACR32_EL2_D11_SHIFT                    22
#define DACR32_EL2_D11_WIDTH                    2

#define DACR32_EL2_D10                          GENMASK(21, 20)
#define DACR32_EL2_D10_MASK                     GENMASK(21, 20)
#define DACR32_EL2_D10_SHIFT                    20
#define DACR32_EL2_D10_WIDTH                    2

#define DACR32_EL2_D9                           GENMASK(19, 18)
#define DACR32_EL2_D9_MASK                      GENMASK(19, 18)
#define DACR32_EL2_D9_SHIFT                     18
#define DACR32_EL2_D9_WIDTH                     2

#define DACR32_EL2_D8                           GENMASK(17, 16)
#define DACR32_EL2_D8_MASK                      GENMASK(17, 16)
#define DACR32_EL2_D8_SHIFT                     16
#define DACR32_EL2_D8_WIDTH                     2

#define DACR32_EL2_D7                           GENMASK(15, 14)
#define DACR32_EL2_D7_MASK                      GENMASK(15, 14)
#define DACR32_EL2_D7_SHIFT                     14
#define DACR32_EL2_D7_WIDTH                     2

#define DACR32_EL2_D6                           GENMASK(13, 12)
#define DACR32_EL2_D6_MASK                      GENMASK(13, 12)
#define DACR32_EL2_D6_SHIFT                     12
#define DACR32_EL2_D6_WIDTH                     2

#define DACR32_EL2_D5                           GENMASK(11, 10)
#define DACR32_EL2_D5_MASK                      GENMASK(11, 10)
#define DACR32_EL2_D5_SHIFT                     10
#define DACR32_EL2_D5_WIDTH                     2

#define DACR32_EL2_D4                           GENMASK(9, 8)
#define DACR32_EL2_D4_MASK                      GENMASK(9, 8)
#define DACR32_EL2_D4_SHIFT                     8
#define DACR32_EL2_D4_WIDTH                     2

#define DACR32_EL2_D3                           GENMASK(7, 6)
#define DACR32_EL2_D3_MASK                      GENMASK(7, 6)
#define DACR32_EL2_D3_SHIFT                     6
#define DACR32_EL2_D3_WIDTH                     2

#define DACR32_EL2_D2                           GENMASK(5, 4)
#define DACR32_EL2_D2_MASK                      GENMASK(5, 4)
#define DACR32_EL2_D2_SHIFT                     4
#define DACR32_EL2_D2_WIDTH                     2

#define DACR32_EL2_D1                           GENMASK(3, 2)
#define DACR32_EL2_D1_MASK                      GENMASK(3, 2)
#define DACR32_EL2_D1_SHIFT                     2
#define DACR32_EL2_D1_WIDTH                     2

#define DACR32_EL2_D0                           GENMASK(1, 0)
#define DACR32_EL2_D0_MASK                      GENMASK(1, 0)
#define DACR32_EL2_D0_SHIFT                     0
#define DACR32_EL2_D0_WIDTH                     2

#define DACR32_EL2_RES0                         (UL(0) | GENMASK_ULL(63, 32))
#define DACR32_EL2_RES1                         (UL(0))

#define REG_FAR_EL2                             S3_4_C6_C0_0
#define SYS_FAR_EL2                             sys_reg(3, 4, 6, 0, 0)
#define SYS_FAR_EL2_Op0                         3
#define SYS_FAR_EL2_Op1                         4
#define SYS_FAR_EL2_CRn                         6
#define SYS_FAR_EL2_CRm                         0
#define SYS_FAR_EL2_Op2                         0

#define FAR_EL2_ADDR                            GENMASK(63, 0)
#define FAR_EL2_ADDR_MASK                       GENMASK(63, 0)
#define FAR_EL2_ADDR_SHIFT                      0
#define FAR_EL2_ADDR_WIDTH                      64

#define FAR_EL2_RES0                            (UL(0))
#define FAR_EL2_RES1                            (UL(0))

#define REG_CONTEXTIDR_EL2                      S3_4_C13_C0_1
#define SYS_CONTEXTIDR_EL2                      sys_reg(3, 4, 13, 0, 1)
#define SYS_CONTEXTIDR_EL2_Op0                  3
#define SYS_CONTEXTIDR_EL2_Op1                  4
#define SYS_CONTEXTIDR_EL2_CRn                  13
#define SYS_CONTEXTIDR_EL2_CRm                  0
#define SYS_CONTEXTIDR_EL2_Op2                  1

/* For CONTEXTIDR_EL2 fields see CONTEXTIDR_ELx */

#define REG_CPACR_EL12                          S3_5_C1_C0_2
#define SYS_CPACR_EL12                          sys_reg(3, 5, 1, 0, 2)
#define SYS_CPACR_EL12_Op0                      3
#define SYS_CPACR_EL12_Op1                      5
#define SYS_CPACR_EL12_CRn                      1
#define SYS_CPACR_EL12_CRm                      0
#define SYS_CPACR_EL12_Op2                      2

/* For CPACR_EL12 fields see CPACR_ELx */

#define REG_ZCR_EL12                            S3_5_C1_C2_0
#define SYS_ZCR_EL12                            sys_reg(3, 5, 1, 2, 0)
#define SYS_ZCR_EL12_Op0                        3
#define SYS_ZCR_EL12_Op1                        5
#define SYS_ZCR_EL12_CRn                        1
#define SYS_ZCR_EL12_CRm                        2
#define SYS_ZCR_EL12_Op2                        0

/* For ZCR_EL12 fields see ZCR_ELx */

#define REG_SMCR_EL12                           S3_5_C1_C2_6
#define SYS_SMCR_EL12                           sys_reg(3, 5, 1, 2, 6)
#define SYS_SMCR_EL12_Op0                       3
#define SYS_SMCR_EL12_Op1                       5
#define SYS_SMCR_EL12_CRn                       1
#define SYS_SMCR_EL12_CRm                       2
#define SYS_SMCR_EL12_Op2                       6

/* For SMCR_EL12 fields see SMCR_ELx */

#define REG_FAR_EL12                            S3_5_C6_C0_0
#define SYS_FAR_EL12                            sys_reg(3, 5, 6, 0, 0)
#define SYS_FAR_EL12_Op0                        3
#define SYS_FAR_EL12_Op1                        5
#define SYS_FAR_EL12_CRn                        6
#define SYS_FAR_EL12_CRm                        0
#define SYS_FAR_EL12_Op2                        0

#define FAR_EL12_ADDR                           GENMASK(63, 0)
#define FAR_EL12_ADDR_MASK                      GENMASK(63, 0)
#define FAR_EL12_ADDR_SHIFT                     0
#define FAR_EL12_ADDR_WIDTH                     64

#define FAR_EL12_RES0                           (UL(0))
#define FAR_EL12_RES1                           (UL(0))

#define REG_CONTEXTIDR_EL12                     S3_5_C13_C0_1
#define SYS_CONTEXTIDR_EL12                     sys_reg(3, 5, 13, 0, 1)
#define SYS_CONTEXTIDR_EL12_Op0                 3
#define SYS_CONTEXTIDR_EL12_Op1                 5
#define SYS_CONTEXTIDR_EL12_CRn                 13
#define SYS_CONTEXTIDR_EL12_CRm                 0
#define SYS_CONTEXTIDR_EL12_Op2                 1

/* For CONTEXTIDR_EL12 fields see CONTEXTIDR_ELx */

#define TTBRx_EL1_ASID                          GENMASK(63, 48)
#define TTBRx_EL1_ASID_MASK                     GENMASK(63, 48)
#define TTBRx_EL1_ASID_SHIFT                    48
#define TTBRx_EL1_ASID_WIDTH                    16

#define TTBRx_EL1_BADDR                         GENMASK(47, 1)
#define TTBRx_EL1_BADDR_MASK                    GENMASK(47, 1)
#define TTBRx_EL1_BADDR_SHIFT                   1
#define TTBRx_EL1_BADDR_WIDTH                   47

#define TTBRx_EL1_CnP                           GENMASK(0, 0)
#define TTBRx_EL1_CnP_MASK                      GENMASK(0, 0)
#define TTBRx_EL1_CnP_SHIFT                     0
#define TTBRx_EL1_CnP_WIDTH                     1

#define TTBRx_EL1_RES0                          (UL(0))
#define TTBRx_EL1_RES1                          (UL(0))

#define REG_TTBR0_EL1                           S3_0_C2_C0_0
#define SYS_TTBR0_EL1                           sys_reg(3, 0, 2, 0, 0)
#define SYS_TTBR0_EL1_Op0                       3
#define SYS_TTBR0_EL1_Op1                       0
#define SYS_TTBR0_EL1_CRn                       2
#define SYS_TTBR0_EL1_CRm                       0
#define SYS_TTBR0_EL1_Op2                       0

/* For TTBR0_EL1 fields see TTBRx_EL1 */

#define REG_TTBR1_EL1                           S3_0_C2_C0_1
#define SYS_TTBR1_EL1                           sys_reg(3, 0, 2, 0, 1)
#define SYS_TTBR1_EL1_Op0                       3
#define SYS_TTBR1_EL1_Op1                       0
#define SYS_TTBR1_EL1_CRn                       2
#define SYS_TTBR1_EL1_CRm                       0
#define SYS_TTBR1_EL1_Op2                       1

/* For TTBR1_EL1 fields see TTBRx_EL1 */

#define REG_LORSA_EL1                           S3_0_C10_C4_0
#define SYS_LORSA_EL1                           sys_reg(3, 0, 10, 4, 0)
#define SYS_LORSA_EL1_Op0                       3
#define SYS_LORSA_EL1_Op1                       0
#define SYS_LORSA_EL1_CRn                       10
#define SYS_LORSA_EL1_CRm                       4
#define SYS_LORSA_EL1_Op2                       0

#define LORSA_EL1_SA                            GENMASK(51, 16)
#define LORSA_EL1_SA_MASK                       GENMASK(51, 16)
#define LORSA_EL1_SA_SHIFT                      16
#define LORSA_EL1_SA_WIDTH                      36

#define LORSA_EL1_Valid                         GENMASK(0, 0)
#define LORSA_EL1_Valid_MASK                    GENMASK(0, 0)
#define LORSA_EL1_Valid_SHIFT                   0
#define LORSA_EL1_Valid_WIDTH                   1

#define LORSA_EL1_RES0                          (UL(0) | GENMASK_ULL(63, 52) | GENMASK_ULL(15, 1))
#define LORSA_EL1_RES1                          (UL(0))

#define REG_LOREA_EL1                           S3_0_C10_C4_1
#define SYS_LOREA_EL1                           sys_reg(3, 0, 10, 4, 1)
#define SYS_LOREA_EL1_Op0                       3
#define SYS_LOREA_EL1_Op1                       0
#define SYS_LOREA_EL1_CRn                       10
#define SYS_LOREA_EL1_CRm                       4
#define SYS_LOREA_EL1_Op2                       1

#define LOREA_EL1_EA_51_48                      GENMASK(51, 48)
#define LOREA_EL1_EA_51_48_MASK                 GENMASK(51, 48)
#define LOREA_EL1_EA_51_48_SHIFT                48
#define LOREA_EL1_EA_51_48_WIDTH                4

#define LOREA_EL1_EA_47_16                      GENMASK(47, 16)
#define LOREA_EL1_EA_47_16_MASK                 GENMASK(47, 16)
#define LOREA_EL1_EA_47_16_SHIFT                16
#define LOREA_EL1_EA_47_16_WIDTH                32

#define LOREA_EL1_RES0                          (UL(0) | GENMASK_ULL(63, 52) | GENMASK_ULL(15, 0))
#define LOREA_EL1_RES1                          (UL(0))

#define REG_LORN_EL1                            S3_0_C10_C4_2
#define SYS_LORN_EL1                            sys_reg(3, 0, 10, 4, 2)
#define SYS_LORN_EL1_Op0                        3
#define SYS_LORN_EL1_Op1                        0
#define SYS_LORN_EL1_CRn                        10
#define SYS_LORN_EL1_CRm                        4
#define SYS_LORN_EL1_Op2                        2

#define LORN_EL1_Num                            GENMASK(7, 0)
#define LORN_EL1_Num_MASK                       GENMASK(7, 0)
#define LORN_EL1_Num_SHIFT                      0
#define LORN_EL1_Num_WIDTH                      8

#define LORN_EL1_RES0                           (UL(0) | GENMASK_ULL(63, 8))
#define LORN_EL1_RES1                           (UL(0))

#define REG_LORC_EL1                            S3_0_C10_C4_3
#define SYS_LORC_EL1                            sys_reg(3, 0, 10, 4, 3)
#define SYS_LORC_EL1_Op0                        3
#define SYS_LORC_EL1_Op1                        0
#define SYS_LORC_EL1_CRn                        10
#define SYS_LORC_EL1_CRm                        4
#define SYS_LORC_EL1_Op2                        3

#define LORC_EL1_DS                             GENMASK(9, 2)
#define LORC_EL1_DS_MASK                        GENMASK(9, 2)
#define LORC_EL1_DS_SHIFT                       2
#define LORC_EL1_DS_WIDTH                       8

#define LORC_EL1_EN                             GENMASK(0, 0)
#define LORC_EL1_EN_MASK                        GENMASK(0, 0)
#define LORC_EL1_EN_SHIFT                       0
#define LORC_EL1_EN_WIDTH                       1

#define LORC_EL1_RES0                           (UL(0) | GENMASK_ULL(63, 10) | GENMASK_ULL(1, 1))
#define LORC_EL1_RES1                           (UL(0))

#define REG_LORID_EL1                           S3_0_C10_C4_7
#define SYS_LORID_EL1                           sys_reg(3, 0, 10, 4, 7)
#define SYS_LORID_EL1_Op0                       3
#define SYS_LORID_EL1_Op1                       0
#define SYS_LORID_EL1_CRn                       10
#define SYS_LORID_EL1_CRm                       4
#define SYS_LORID_EL1_Op2                       7

#define LORID_EL1_LD                            GENMASK(23, 16)
#define LORID_EL1_LD_MASK                       GENMASK(23, 16)
#define LORID_EL1_LD_SHIFT                      16
#define LORID_EL1_LD_WIDTH                      8

#define LORID_EL1_LR                            GENMASK(7, 0)
#define LORID_EL1_LR_MASK                       GENMASK(7, 0)
#define LORID_EL1_LR_SHIFT                      0
#define LORID_EL1_LR_WIDTH                      8

#define LORID_EL1_RES0                          (UL(0) | GENMASK_ULL(63, 24) | GENMASK_ULL(15, 8))
#define LORID_EL1_RES1                          (UL(0))

#endif /* __ASM_SYSREG_DEFS_H */
