#ifndef __BLIB_INSTRUCTIONDETAILS_INCLUDED__
#define __BLIB_INSTRUCTIONDETAILS_INCLUDED__

#ifndef __BLIB_UTILS_INCLUDED__
#include <blib/utils/Utils.hpp>
#endif
#ifndef BOOST_TYPE_TRAITS_HPP
#include <boost/type_traits.hpp>
#endif
#ifndef BOOST_ATOMIC_HPP
#include <boost/atomic.hpp>
#endif

#define MAKE_INST(code, name, group, flags, oflags0, oflags1, opReg, opCode0, opCode1) \
  { InstructionTraitsEnums::code, code##_INDEX, group, flags, { oflags0, oflags1 }, opReg, { opCode0, opCode1 } }

#define G(g) InstructionTraitsEnums::kInstGrp##g
#define F(f) InstructionTraitsEnums::kInstFlg##f
#define O(o) InstructionTraitsEnums::kInstOpr##o

#define INST_ADC_INDEX 0
#define INST_ADD_INDEX 4
#define INST_ADDPD_INDEX 8
#define INST_ADDPS_INDEX 14
#define INST_ADDSD_INDEX 20
#define INST_ADDSS_INDEX 26
#define INST_ADDSUBPD_INDEX 32
#define INST_ADDSUBPS_INDEX 41
#define INST_AMD_PREFETCH_INDEX 50
#define INST_AMD_PREFETCHW_INDEX 63
#define INST_AND_INDEX 77
#define INST_ANDNPD_INDEX 81
#define INST_ANDNPS_INDEX 88
#define INST_ANDPD_INDEX 95
#define INST_ANDPS_INDEX 101
#define INST_BLENDPD_INDEX 107
#define INST_BLENDPS_INDEX 115
#define INST_BLENDVPD_INDEX 123
#define INST_BLENDVPS_INDEX 132
#define INST_BSF_INDEX 141
#define INST_BSR_INDEX 145
#define INST_BSWAP_INDEX 149
#define INST_BT_INDEX 155
#define INST_BTC_INDEX 158
#define INST_BTR_INDEX 162
#define INST_BTS_INDEX 166
#define INST_CALL_INDEX 170
#define INST_CBW_INDEX 175
#define INST_CDQE_INDEX 179
#define INST_CLC_INDEX 184
#define INST_CLD_INDEX 188
#define INST_CLFLUSH_INDEX 192
#define INST_CMC_INDEX 200
#define INST_CMOVA_INDEX 204
#define INST_CMOVAE_INDEX 210
#define INST_CMOVB_INDEX 217
#define INST_CMOVBE_INDEX 223
#define INST_CMOVC_INDEX 230
#define INST_CMOVE_INDEX 236
#define INST_CMOVG_INDEX 242
#define INST_CMOVGE_INDEX 248
#define INST_CMOVL_INDEX 255
#define INST_CMOVLE_INDEX 261
#define INST_CMOVNA_INDEX 268
#define INST_CMOVNAE_INDEX 275
#define INST_CMOVNB_INDEX 283
#define INST_CMOVNBE_INDEX 290
#define INST_CMOVNC_INDEX 298
#define INST_CMOVNE_INDEX 305
#define INST_CMOVNG_INDEX 312
#define INST_CMOVNGE_INDEX 319
#define INST_CMOVNL_INDEX 327
#define INST_CMOVNLE_INDEX 334
#define INST_CMOVNO_INDEX 342
#define INST_CMOVNP_INDEX 349
#define INST_CMOVNS_INDEX 356
#define INST_CMOVNZ_INDEX 363
#define INST_CMOVO_INDEX 370
#define INST_CMOVP_INDEX 376
#define INST_CMOVPE_INDEX 382
#define INST_CMOVPO_INDEX 389
#define INST_CMOVS_INDEX 396
#define INST_CMOVZ_INDEX 402
#define INST_CMP_INDEX 408
#define INST_CMPPD_INDEX 412
#define INST_CMPPS_INDEX 418
#define INST_CMPSD_INDEX 424
#define INST_CMPSS_INDEX 430
#define INST_CMPXCHG_INDEX 436
#define INST_CMPXCHG16B_INDEX 444
#define INST_CMPXCHG8B_INDEX 455
#define INST_COMISD_INDEX 465
#define INST_COMISS_INDEX 472
#define INST_CPUID_INDEX 479
#define INST_CRC32_INDEX 485
#define INST_CVTDQ2PD_INDEX 491
#define INST_CVTDQ2PS_INDEX 500
#define INST_CVTPD2DQ_INDEX 509
#define INST_CVTPD2PI_INDEX 518
#define INST_CVTPD2PS_INDEX 527
#define INST_CVTPI2PD_INDEX 536
#define INST_CVTPI2PS_INDEX 545
#define INST_CVTPS2DQ_INDEX 554
#define INST_CVTPS2PD_INDEX 563
#define INST_CVTPS2PI_INDEX 572
#define INST_CVTSD2SI_INDEX 581
#define INST_CVTSD2SS_INDEX 590
#define INST_CVTSI2SD_INDEX 599
#define INST_CVTSI2SS_INDEX 608
#define INST_CVTSS2SD_INDEX 617
#define INST_CVTSS2SI_INDEX 626
#define INST_CVTTPD2DQ_INDEX 635
#define INST_CVTTPD2PI_INDEX 645
#define INST_CVTTPS2DQ_INDEX 655
#define INST_CVTTPS2PI_INDEX 665
#define INST_CVTTSD2SI_INDEX 675
#define INST_CVTTSS2SI_INDEX 685
#define INST_CWDE_INDEX 695
#define INST_DAA_INDEX 700
#define INST_DAS_INDEX 704
#define INST_DEC_INDEX 708
#define INST_DIV_INDEX 712
#define INST_DIVPD_INDEX 716
#define INST_DIVPS_INDEX 722
#define INST_DIVSD_INDEX 728
#define INST_DIVSS_INDEX 734
#define INST_DPPD_INDEX 740
#define INST_DPPS_INDEX 745
#define INST_EMMS_INDEX 750
#define INST_ENTER_INDEX 755
#define INST_EXTRACTPS_INDEX 761
#define INST_F2XM1_INDEX 771
#define INST_FABS_INDEX 777
#define INST_FADD_INDEX 782
#define INST_FADDP_INDEX 787
#define INST_FBLD_INDEX 793
#define INST_FBSTP_INDEX 798
#define INST_FCHS_INDEX 804
#define INST_FCLEX_INDEX 809
#define INST_FCMOVB_INDEX 815
#define INST_FCMOVBE_INDEX 822
#define INST_FCMOVE_INDEX 830
#define INST_FCMOVNB_INDEX 837
#define INST_FCMOVNBE_INDEX 845
#define INST_FCMOVNE_INDEX 854
#define INST_FCMOVNU_INDEX 862
#define INST_FCMOVU_INDEX 870
#define INST_FCOM_INDEX 877
#define INST_FCOMI_INDEX 882
#define INST_FCOMIP_INDEX 888
#define INST_FCOMP_INDEX 895
#define INST_FCOMPP_INDEX 901
#define INST_FCOS_INDEX 908
#define INST_FDECSTP_INDEX 913
#define INST_FDIV_INDEX 921
#define INST_FDIVP_INDEX 926
#define INST_FDIVR_INDEX 932
#define INST_FDIVRP_INDEX 938
#define INST_FEMMS_INDEX 945
#define INST_FFREE_INDEX 951
#define INST_FIADD_INDEX 957
#define INST_FICOM_INDEX 963
#define INST_FICOMP_INDEX 969
#define INST_FIDIV_INDEX 976
#define INST_FIDIVR_INDEX 982
#define INST_FILD_INDEX 989
#define INST_FIMUL_INDEX 994
#define INST_FINCSTP_INDEX 1000
#define INST_FINIT_INDEX 1008
#define INST_FIST_INDEX 1014
#define INST_FISTP_INDEX 1019
#define INST_FISTTP_INDEX 1025
#define INST_FISUB_INDEX 1032
#define INST_FISUBR_INDEX 1038
#define INST_FLD_INDEX 1045
#define INST_FLD1_INDEX 1049
#define INST_FLDCW_INDEX 1054
#define INST_FLDENV_INDEX 1060
#define INST_FLDL2E_INDEX 1067
#define INST_FLDL2T_INDEX 1074
#define INST_FLDLG2_INDEX 1081
#define INST_FLDLN2_INDEX 1088
#define INST_FLDPI_INDEX 1095
#define INST_FLDZ_INDEX 1101
#define INST_FMUL_INDEX 1106
#define INST_FMULP_INDEX 1111
#define INST_FNCLEX_INDEX 1117
#define INST_FNINIT_INDEX 1124
#define INST_FNOP_INDEX 1131
#define INST_FNSAVE_INDEX 1136
#define INST_FNSTCW_INDEX 1143
#define INST_FNSTENV_INDEX 1150
#define INST_FNSTSW_INDEX 1158
#define INST_FPATAN_INDEX 1165
#define INST_FPREM_INDEX 1172
#define INST_FPREM1_INDEX 1178
#define INST_FPTAN_INDEX 1185
#define INST_FRNDINT_INDEX 1191
#define INST_FRSTOR_INDEX 1199
#define INST_FSAVE_INDEX 1206
#define INST_FSCALE_INDEX 1212
#define INST_FSIN_INDEX 1219
#define INST_FSINCOS_INDEX 1224
#define INST_FSQRT_INDEX 1232
#define INST_FST_INDEX 1238
#define INST_FSTCW_INDEX 1242
#define INST_FSTENV_INDEX 1248
#define INST_FSTP_INDEX 1255
#define INST_FSTSW_INDEX 1260
#define INST_FSUB_INDEX 1266
#define INST_FSUBP_INDEX 1271
#define INST_FSUBR_INDEX 1277
#define INST_FSUBRP_INDEX 1283
#define INST_FTST_INDEX 1290
#define INST_FUCOM_INDEX 1295
#define INST_FUCOMI_INDEX 1301
#define INST_FUCOMIP_INDEX 1308
#define INST_FUCOMP_INDEX 1316
#define INST_FUCOMPP_INDEX 1323
#define INST_FWAIT_INDEX 1331
#define INST_FXAM_INDEX 1337
#define INST_FXCH_INDEX 1342
#define INST_FXRSTOR_INDEX 1347
#define INST_FXSAVE_INDEX 1355
#define INST_FXTRACT_INDEX 1362
#define INST_FYL2X_INDEX 1370
#define INST_FYL2XP1_INDEX 1376
#define INST_HADDPD_INDEX 1384
#define INST_HADDPS_INDEX 1391
#define INST_HSUBPD_INDEX 1398
#define INST_HSUBPS_INDEX 1405
#define INST_IDIV_INDEX 1412
#define INST_IMUL_INDEX 1417
#define INST_INC_INDEX 1422
#define INST_INT3_INDEX 1426
#define INST_JA_INDEX 1431
#define INST_JAE_INDEX 1434
#define INST_JB_INDEX 1438
#define INST_JBE_INDEX 1441
#define INST_JC_INDEX 1445
#define INST_JE_INDEX 1448
#define INST_JG_INDEX 1451
#define INST_JGE_INDEX 1454
#define INST_JL_INDEX 1458
#define INST_JLE_INDEX 1461
#define INST_JNA_INDEX 1465
#define INST_JNAE_INDEX 1469
#define INST_JNB_INDEX 1474
#define INST_JNBE_INDEX 1478
#define INST_JNC_INDEX 1483
#define INST_JNE_INDEX 1487
#define INST_JNG_INDEX 1491
#define INST_JNGE_INDEX 1495
#define INST_JNL_INDEX 1500
#define INST_JNLE_INDEX 1504
#define INST_JNO_INDEX 1509
#define INST_JNP_INDEX 1513
#define INST_JNS_INDEX 1517
#define INST_JNZ_INDEX 1521
#define INST_JO_INDEX 1525
#define INST_JP_INDEX 1528
#define INST_JPE_INDEX 1531
#define INST_JPO_INDEX 1535
#define INST_JS_INDEX 1539
#define INST_JZ_INDEX 1542
#define INST_JMP_INDEX 1545
#define INST_LDDQU_INDEX 1549
#define INST_LDMXCSR_INDEX 1555
#define INST_LAHF_INDEX 1563
#define INST_LEA_INDEX 1568
#define INST_LEAVE_INDEX 1572
#define INST_LFENCE_INDEX 1578
#define INST_MASKMOVDQU_INDEX 1585
#define INST_MASKMOVQ_INDEX 1596
#define INST_MAXPD_INDEX 1605
#define INST_MAXPS_INDEX 1611
#define INST_MAXSD_INDEX 1617
#define INST_MAXSS_INDEX 1623
#define INST_MFENCE_INDEX 1629
#define INST_MINPD_INDEX 1636
#define INST_MINPS_INDEX 1642
#define INST_MINSD_INDEX 1648
#define INST_MINSS_INDEX 1654
#define INST_MONITOR_INDEX 1660
#define INST_MOV_INDEX 1668
#define INST_MOVAPD_INDEX 1672
#define INST_MOVAPS_INDEX 1679
#define INST_MOVBE_INDEX 1686
#define INST_MOVD_INDEX 1692
#define INST_MOVDDUP_INDEX 1697
#define INST_MOVDQ2Q_INDEX 1705
#define INST_MOVDQA_INDEX 1713
#define INST_MOVDQU_INDEX 1720
#define INST_MOVHLPS_INDEX 1727
#define INST_MOVHPD_INDEX 1735
#define INST_MOVHPS_INDEX 1742
#define INST_MOVLHPS_INDEX 1749
#define INST_MOVLPD_INDEX 1757
#define INST_MOVLPS_INDEX 1764
#define INST_MOVMSKPD_INDEX 1771
#define INST_MOVMSKPS_INDEX 1780
#define INST_MOVNTDQ_INDEX 1789
#define INST_MOVNTDQA_INDEX 1797
#define INST_MOVNTI_INDEX 1806
#define INST_MOVNTPD_INDEX 1813
#define INST_MOVNTPS_INDEX 1821
#define INST_MOVNTQ_INDEX 1829
#define INST_MOVQ_INDEX 1836
#define INST_MOVQ2DQ_INDEX 1841
#define INST_MOVSD_INDEX 1849
#define INST_MOVSHDUP_INDEX 1855
#define INST_MOVSLDUP_INDEX 1864
#define INST_MOVSS_INDEX 1873
#define INST_MOVSX_INDEX 1879
#define INST_MOVSXD_INDEX 1885
#define INST_MOVUPD_INDEX 1892
#define INST_MOVUPS_INDEX 1899
#define INST_MOVZX_INDEX 1906
#define INST_MOV_PTR_INDEX 1912
#define INST_MPSADBW_INDEX 1920
#define INST_MUL_INDEX 1928
#define INST_MULPD_INDEX 1932
#define INST_MULPS_INDEX 1938
#define INST_MULSD_INDEX 1944
#define INST_MULSS_INDEX 1950
#define INST_MWAIT_INDEX 1956
#define INST_NEG_INDEX 1962
#define INST_NOP_INDEX 1966
#define INST_NOT_INDEX 1970
#define INST_OR_INDEX 1974
#define INST_ORPD_INDEX 1977
#define INST_ORPS_INDEX 1982
#define INST_PABSB_INDEX 1987
#define INST_PABSD_INDEX 1993
#define INST_PABSW_INDEX 1999
#define INST_PACKSSDW_INDEX 2005
#define INST_PACKSSWB_INDEX 2014
#define INST_PACKUSDW_INDEX 2023
#define INST_PACKUSWB_INDEX 2032
#define INST_PADDB_INDEX 2041
#define INST_PADDD_INDEX 2047
#define INST_PADDQ_INDEX 2053
#define INST_PADDSB_INDEX 2059
#define INST_PADDSW_INDEX 2066
#define INST_PADDUSB_INDEX 2073
#define INST_PADDUSW_INDEX 2081
#define INST_PADDW_INDEX 2089
#define INST_PALIGNR_INDEX 2095
#define INST_PAND_INDEX 2103
#define INST_PANDN_INDEX 2108
#define INST_PAUSE_INDEX 2114
#define INST_PAVGB_INDEX 2120
#define INST_PAVGW_INDEX 2126
#define INST_PBLENDVB_INDEX 2132
#define INST_PBLENDW_INDEX 2141
#define INST_PCMPEQB_INDEX 2149
#define INST_PCMPEQD_INDEX 2157
#define INST_PCMPEQQ_INDEX 2165
#define INST_PCMPEQW_INDEX 2173
#define INST_PCMPESTRI_INDEX 2181
#define INST_PCMPESTRM_INDEX 2191
#define INST_PCMPGTB_INDEX 2201
#define INST_PCMPGTD_INDEX 2209
#define INST_PCMPGTQ_INDEX 2217
#define INST_PCMPGTW_INDEX 2225
#define INST_PCMPISTRI_INDEX 2233
#define INST_PCMPISTRM_INDEX 2243
#define INST_PEXTRB_INDEX 2253
#define INST_PEXTRD_INDEX 2260
#define INST_PEXTRQ_INDEX 2267
#define INST_PEXTRW_INDEX 2274
#define INST_PF2ID_INDEX 2281
#define INST_PF2IW_INDEX 2287
#define INST_PFACC_INDEX 2293
#define INST_PFADD_INDEX 2299
#define INST_PFCMPEQ_INDEX 2305
#define INST_PFCMPGE_INDEX 2313
#define INST_PFCMPGT_INDEX 2321
#define INST_PFMAX_INDEX 2329
#define INST_PFMIN_INDEX 2335
#define INST_PFMUL_INDEX 2341
#define INST_PFNACC_INDEX 2347
#define INST_PFPNACC_INDEX 2354
#define INST_PFRCP_INDEX 2362
#define INST_PFRCPIT1_INDEX 2368
#define INST_PFRCPIT2_INDEX 2377
#define INST_PFRSQIT1_INDEX 2386
#define INST_PFRSQRT_INDEX 2395
#define INST_PFSUB_INDEX 2403
#define INST_PFSUBR_INDEX 2409
#define INST_PHADDD_INDEX 2416
#define INST_PHADDSW_INDEX 2423
#define INST_PHADDW_INDEX 2431
#define INST_PHMINPOSUW_INDEX 2438
#define INST_PHSUBD_INDEX 2449
#define INST_PHSUBSW_INDEX 2456
#define INST_PHSUBW_INDEX 2464
#define INST_PI2FD_INDEX 2471
#define INST_PI2FW_INDEX 2477
#define INST_PINSRB_INDEX 2483
#define INST_PINSRD_INDEX 2490
#define INST_PINSRQ_INDEX 2497
#define INST_PINSRW_INDEX 2504
#define INST_PMADDUBSW_INDEX 2511
#define INST_PMADDWD_INDEX 2521
#define INST_PMAXSB_INDEX 2529
#define INST_PMAXSD_INDEX 2536
#define INST_PMAXSW_INDEX 2543
#define INST_PMAXUB_INDEX 2550
#define INST_PMAXUD_INDEX 2557
#define INST_PMAXUW_INDEX 2564
#define INST_PMINSB_INDEX 2571
#define INST_PMINSD_INDEX 2578
#define INST_PMINSW_INDEX 2585
#define INST_PMINUB_INDEX 2592
#define INST_PMINUD_INDEX 2599
#define INST_PMINUW_INDEX 2606
#define INST_PMOVMSKB_INDEX 2613
#define INST_PMOVSXBD_INDEX 2622
#define INST_PMOVSXBQ_INDEX 2631
#define INST_PMOVSXBW_INDEX 2640
#define INST_PMOVSXDQ_INDEX 2649
#define INST_PMOVSXWD_INDEX 2658
#define INST_PMOVSXWQ_INDEX 2667
#define INST_PMOVZXBD_INDEX 2676
#define INST_PMOVZXBQ_INDEX 2685
#define INST_PMOVZXBW_INDEX 2694
#define INST_PMOVZXDQ_INDEX 2703
#define INST_PMOVZXWD_INDEX 2712
#define INST_PMOVZXWQ_INDEX 2721
#define INST_PMULDQ_INDEX 2730
#define INST_PMULHRSW_INDEX 2737
#define INST_PMULHUW_INDEX 2746
#define INST_PMULHW_INDEX 2754
#define INST_PMULLD_INDEX 2761
#define INST_PMULLW_INDEX 2768
#define INST_PMULUDQ_INDEX 2775
#define INST_POP_INDEX 2783
#define INST_POPAD_INDEX 2787
#define INST_POPCNT_INDEX 2793
#define INST_POPFD_INDEX 2800
#define INST_POPFQ_INDEX 2806
#define INST_POR_INDEX 2812
#define INST_PREFETCH_INDEX 2816
#define INST_PSADBW_INDEX 2825
#define INST_PSHUFB_INDEX 2832
#define INST_PSHUFD_INDEX 2839
#define INST_PSHUFW_INDEX 2846
#define INST_PSHUFHW_INDEX 2853
#define INST_PSHUFLW_INDEX 2861
#define INST_PSIGNB_INDEX 2869
#define INST_PSIGND_INDEX 2876
#define INST_PSIGNW_INDEX 2883
#define INST_PSLLD_INDEX 2890
#define INST_PSLLDQ_INDEX 2896
#define INST_PSLLQ_INDEX 2903
#define INST_PSLLW_INDEX 2909
#define INST_PSRAD_INDEX 2915
#define INST_PSRAW_INDEX 2921
#define INST_PSRLD_INDEX 2927
#define INST_PSRLDQ_INDEX 2933
#define INST_PSRLQ_INDEX 2940
#define INST_PSRLW_INDEX 2946
#define INST_PSUBB_INDEX 2952
#define INST_PSUBD_INDEX 2958
#define INST_PSUBQ_INDEX 2964
#define INST_PSUBSB_INDEX 2970
#define INST_PSUBSW_INDEX 2977
#define INST_PSUBUSB_INDEX 2984
#define INST_PSUBUSW_INDEX 2992
#define INST_PSUBW_INDEX 3000
#define INST_PSWAPD_INDEX 3006
#define INST_PTEST_INDEX 3013
#define INST_PUNPCKHBW_INDEX 3019
#define INST_PUNPCKHDQ_INDEX 3029
#define INST_PUNPCKHQDQ_INDEX 3039
#define INST_PUNPCKHWD_INDEX 3050
#define INST_PUNPCKLBW_INDEX 3060
#define INST_PUNPCKLDQ_INDEX 3070
#define INST_PUNPCKLQDQ_INDEX 3080
#define INST_PUNPCKLWD_INDEX 3091
#define INST_PUSH_INDEX 3101
#define INST_PUSHAD_INDEX 3106
#define INST_PUSHFD_INDEX 3113
#define INST_PUSHFQ_INDEX 3120
#define INST_PXOR_INDEX 3127
#define INST_RCL_INDEX 3132
#define INST_RCPPS_INDEX 3136
#define INST_RCPSS_INDEX 3142
#define INST_RCR_INDEX 3148
#define INST_RDTSC_INDEX 3152
#define INST_RDTSCP_INDEX 3158
#define INST_REP_LODSB_INDEX 3165
#define INST_REP_LODSD_INDEX 3175
#define INST_REP_LODSQ_INDEX 3185
#define INST_REP_LODSW_INDEX 3195
#define INST_REP_MOVSB_INDEX 3205
#define INST_REP_MOVSD_INDEX 3215
#define INST_REP_MOVSQ_INDEX 3225
#define INST_REP_MOVSW_INDEX 3235
#define INST_REP_STOSB_INDEX 3245
#define INST_REP_STOSD_INDEX 3255
#define INST_REP_STOSQ_INDEX 3265
#define INST_REP_STOSW_INDEX 3275
#define INST_REPE_CMPSB_INDEX 3285
#define INST_REPE_CMPSD_INDEX 3296
#define INST_REPE_CMPSQ_INDEX 3307
#define INST_REPE_CMPSW_INDEX 3318
#define INST_REPE_SCASB_INDEX 3329
#define INST_REPE_SCASD_INDEX 3340
#define INST_REPE_SCASQ_INDEX 3351
#define INST_REPE_SCASW_INDEX 3362
#define INST_REPNE_CMPSB_INDEX 3373
#define INST_REPNE_CMPSD_INDEX 3385
#define INST_REPNE_CMPSQ_INDEX 3397
#define INST_REPNE_CMPSW_INDEX 3409
#define INST_REPNE_SCASB_INDEX 3421
#define INST_REPNE_SCASD_INDEX 3433
#define INST_REPNE_SCASQ_INDEX 3445
#define INST_REPNE_SCASW_INDEX 3457
#define INST_RET_INDEX 3469
#define INST_ROL_INDEX 3473
#define INST_ROR_INDEX 3477
#define INST_ROUNDPD_INDEX 3481
#define INST_ROUNDPS_INDEX 3489
#define INST_ROUNDSD_INDEX 3497
#define INST_ROUNDSS_INDEX 3505
#define INST_RSQRTPS_INDEX 3513
#define INST_RSQRTSS_INDEX 3521
#define INST_SAHF_INDEX 3529
#define INST_SAL_INDEX 3534
#define INST_SAR_INDEX 3538
#define INST_SBB_INDEX 3542
#define INST_SETA_INDEX 3546
#define INST_SETAE_INDEX 3551
#define INST_SETB_INDEX 3557
#define INST_SETBE_INDEX 3562
#define INST_SETC_INDEX 3568
#define INST_SETE_INDEX 3573
#define INST_SETG_INDEX 3578
#define INST_SETGE_INDEX 3583
#define INST_SETL_INDEX 3589
#define INST_SETLE_INDEX 3594
#define INST_SETNA_INDEX 3600
#define INST_SETNAE_INDEX 3606
#define INST_SETNB_INDEX 3613
#define INST_SETNBE_INDEX 3619
#define INST_SETNC_INDEX 3626
#define INST_SETNE_INDEX 3632
#define INST_SETNG_INDEX 3638
#define INST_SETNGE_INDEX 3644
#define INST_SETNL_INDEX 3651
#define INST_SETNLE_INDEX 3657
#define INST_SETNO_INDEX 3664
#define INST_SETNP_INDEX 3670
#define INST_SETNS_INDEX 3676
#define INST_SETNZ_INDEX 3682
#define INST_SETO_INDEX 3688
#define INST_SETP_INDEX 3693
#define INST_SETPE_INDEX 3698
#define INST_SETPO_INDEX 3704
#define INST_SETS_INDEX 3710
#define INST_SETZ_INDEX 3715
#define INST_SFENCE_INDEX 3720
#define INST_SHL_INDEX 3727
#define INST_SHLD_INDEX 3731
#define INST_SHR_INDEX 3736
#define INST_SHRD_INDEX 3740
#define INST_SHUFPD_INDEX 3745
#define INST_SHUFPS_INDEX 3752
#define INST_SQRTPD_INDEX 3759
#define INST_SQRTPS_INDEX 3766
#define INST_SQRTSD_INDEX 3773
#define INST_SQRTSS_INDEX 3780
#define INST_STC_INDEX 3787
#define INST_STD_INDEX 3791
#define INST_STMXCSR_INDEX 3795
#define INST_SUB_INDEX 3803
#define INST_SUBPD_INDEX 3807
#define INST_SUBPS_INDEX 3813
#define INST_SUBSD_INDEX 3819
#define INST_SUBSS_INDEX 3825
#define INST_TEST_INDEX 3831
#define INST_UCOMISD_INDEX 3836
#define INST_UCOMISS_INDEX 3844
#define INST_UD2_INDEX 3852
#define INST_UNPCKHPD_INDEX 3856
#define INST_UNPCKHPS_INDEX 3865
#define INST_UNPCKLPD_INDEX 3874
#define INST_UNPCKLPS_INDEX 3883
#define INST_XADD_INDEX 3892
#define INST_XCHG_INDEX 3897
#define INST_XOR_INDEX 3902
#define INST_XORPD_INDEX 3906
#define INST_XORPS_INDEX 3912

namespace blib{namespace odra{namespace instruction_details{

   namespace register_details{
      using namespace blib::utils;
      template<typename T>
      T invalid_value();
      /// Physical register ID
      enum EPhysicalRegID
      {
         EAX=0, ECX, EDX, EBX, ESP, EBP, ESI, EDI, R8D, R9D, R10D, R11D, R12D, R13D, R14D, R15D,
         AL, CL, DL, BL, AH, CH, DH, BH, R8B, R9B, R10B, R11B, R12B, R13B, R14B, R15B,
         AX0, CX, DX, BX, SP, BP, SI, DI, R8W, R9W, R10W, R11W, R12W, R13W, R14W, R15W,
         RAX0, RCX, RDX, RBX, RSP, RBP, RSI, RDI, R8, R9, R10, R11, R12, R13, R14, R15,
         ST00, ST1, ST2, ST3, ST4, ST5, ST6, ST7,
         MM0, MM1, MM2, MM3, MM4, MM5, MM6, MM7,
         XMM0, XMM1, XMM2, XMM3, XMM4, XMM5, XMM6, XMM7, XMM8, XMM9, XMM10, XMM11, XMM12, XMM13, XMM14, XMM15,
         YMM0, YMM1, YMM2, YMM3, YMM4, YMM5, YMM6, YMM7, YMM8, YMM9, YMM10, YMM11, YMM12, YMM13, YMM14, YMM15,
         kPhysicalRegIdMax,
         kInvalidRegId =666
      };
      template<>
      EPhysicalRegID invalid_value<EPhysicalRegID>()
      {
         return kInvalidRegId;
      }
      /// Register type
      enum ERegType
      {
         kRegGP,        ///< General purpose register
         kRegMMX,        ///< MMX register
         kRegXMM,        ///< XMM register
         kRegYMM,        ///< YMM register
         kRegFPU,        ///< FPU register
         kRegSymbolicGP,    ///< Symbolic general purpose register
         kRegSymbolicMMX,  ///< Symbolic MMX register
         kRegSymbolicXMM,  ///< Symbolic XMM register
         kRegSymbolicMM,    ///< Symbolic YMM register
         kRegSymbolicMax,
         kRegTypeInvalid = 666
      };
      template<>
      ERegType invalid_value<ERegType>()
      {
         return kRegTypeInvalid;
      }


      /// Operand type
      enum EOperandType
      {
         kOpTypeNone,
         kOpTypeReg,
         kOpTypeMem,
         kOpTypeImm,
         kOpTypeMask = 0x03,

         kOpTypeDummy = 1 << 2, ///< The operand which has this flag is not encoded. This is for register allocator.
         kOpTypeRead = 1 << 3, ///< The operand is used for reading.
         kOpTypeWrite = 1 << 4, ///< The operand is used for writing.
         kOpInvalid = 666
      };
      template<>
      EOperandType invalid_value<EOperandType>()
      {
         return kOpInvalid;
      }

      struct PlatformTraits
      {
         /** \var NUM_OkInsFlagPHYSICAL_REG
         * Number of physical register
         */
         /** \var SIZkEncodeOkInsFlagGP_REG
         * Size of general-purpose register
         */
#ifdef __PLATFORM64__
         static const int numOfPhysicalRegs = 16;
         static const int gpRegSize = 8;
         static const int platformSize = 64;
#else
         static const int numOfPhysicalRegs = 8;
         static const int gpRegSize = 4;
         static const int platformSize = 32;
#endif
      };

      template<>
      boost::int64_t invalid_value<boost::int64_t>()
      {
         return 0;
      }
      template<bool kIsSymbolic>
      class RegId
      {
         typedef RegId MyType;
         typedef typename boost::conditional<kIsSymbolic, boost::int64_t,EPhysicalRegID>::type RegIdType;
      private:
         RegIdType _regId;
         ERegType _regType;
      public:
         RegId()
            :_regId(invalid_value<RegIdType>()),_regType(invalid_value<ERegType>())
         {
            if(kIsSymbolic)
            {
               initRegId<kIsSymbolic>();
            }
         }
         RegId(const RegId& aRhs)
            :_regId(invalid_value<RegIdType>()),_regType(aRhs._regType)
         {
            if(kIsSymbolic)
            {
               initRegId<kIsSymbolic>();
            }
         }
         RegId(const RegIdType aRegId, const ERegType aRegType)
            :_regId(invalid_value<RegIdType>()),_regType(aRegType)
         {    
            if(isSymbolic)
            {
               initRegId<kIsSymbolic>();
            }
         }
         bool operator==(const RegId& aRegId)const
         {
            return (_regId == aRegId._regId) && (_regType == aRegId._regType);
         }
         bool operator!=(const RegId& aRegId)const
         {
            return !(*this == aRegId);
         }

         bool isInvalid()const
         {
            return (invalid_value<RegIdType>() == _regId) || (invalid_value<ERegType>() == _regType);
         }

         bool isSymbolic()const
         {
            return kIsSymbolic;
         }
      private:
         template<bool isSym>
         void initRegId();

         template<>
         void initRegId<true>()
         {
            static mutable boost::atomic<RegIdType> _nextId(1);
            _regId = _nextId.fetch_add(1, boost::memory_order_relaxed);
         }
      };

      // Register
      struct Reg
      {
         RegId<false> _regId;
         bool _isReassignable;
         Reg()
            :_isReassignable(false)
         {}
      };

      // Memory
      struct Mem
      {
         RegId<false> _base;
         RegId<false> _index;
         boost::int64_t _scale;
         boost::int64_t _disp;
         boost::uint8_t _baseSize; // OpdSize
         boost::uint8_t _indexSize; // OpdSize
         Mem()
            :_scale(0),_disp(0),_baseSize(0),_indexSize(0)
         {}
      };

      // Immediate
      struct Immediate
      {
         typedef boost::int64_t ValueType;
         ValueType _value;
         Immediate(const ValueType aValue)
            :_value(aValue)
         {}
      };

      struct OperandTraits
      {
         typedef Immediate ImmediateType;
         typedef Mem MemType;
         typedef Reg RegType;
         template<EOperandType kIn>
         struct SelectOperandType
         {
            typename boost::conditional<kOpTypeReg == kIn
               ,RegType, typename boost::conditional<kOpTypeMem == kIn
               ,MemType, ImmediateType>::type>::type OperandType;
         };
      };

      template<EOperandType kOperandType,typename OperandTraits,typename TPlatformTraits = PlatformTraits>
      class Operand : public OperandTraits::SelectOperandType<kOperandType>::OperandType
      {
      public:
         typedef typename OperandTraits::SelectOperandType<kOperandType>::OperandType OperandType;
         typedef boost::uint16_t SizeType;
         EOperandType operandType()const
         {
            return kOperandType;
         }
         SizeType operandSize()const
         {
            return _operandSize;
         }
         OperandType& operand()
         {
            return _operand;
         }
      private:
         OperandType _operand;
         SizeType _operandSize;
      };

   } // namespace register_details

   /// Instruction ID
   enum EInstrID
   {
      kInstADC, kInstADD, kInstAND,
      kInstBSF, kInstBSR, kInstBSWAP, kInstBT, kInstBTC, kInstBTR, kInstBTS,
      kInstCALL, kInstCBW, kInstCLC, kInstCLD, kInstCLI, kInstCLTS, kInstCMC, kInstCMOVCC, kInstCMP, kInstCMPS_B, kInstCMPS_W, kInstCMPS_D, kInstCMPS_Q, kInstCMPXCHG,
      kInstCMPXCHG8B, kInstCMPXCHG16B, kInstCPUID, kInstCWD, kInstCDQ, kInstCQO,
      kInstDEC, kInstDIV,
      kInstENTER,
      kInstHLT,
      kInstIDIV, kInstIMUL, kInstIN, kInstINC, kInstINS_B, kInstINS_W, kInstINS_D, kInstINVD, kInstINVLPG, kInstINT3, kInstINTN, kInstINTO, kInstIRET, kInstIRETD, kInstIRETQ,
      kInstJMP, kInstJCC,
      kInstLAR, kInstLEA, kInstLEAVE, kInstLLDT, kInstLMSW, kInstLSL, kInstLTR, kInstLODS_B, kInstLODS_W, kInstLODS_D, kInstLODS_Q, kInstLOOP,
      kInstMOV, kInstMOVBE, kInstMOVS_B, kInstMOVS_W, kInstMOVS_D, kInstMOVS_Q, kInstMOVZX, kInstMOVSX, kInstMOVSXD, kInstMUL,
      kInstNEG, kInstNOP, kInstNOT,
      kInstOR, kInstOUT, kInstOUTS_B, kInstOUTS_W, kInstOUTS_D,
      kInstPOP, kInstPOPAD, kInstPOPF, kInstPOPFD, kInstPOPFQ, kInstPUSH, kInstPUSHAD, kInstPUSHF, kInstPUSHFD, kInstPUSHFQ,
      kInstRDMSR, kInstRDPMC, kInstRDTSC, kInstRET, kInstRCL, kInstRCR, kInstROL, kInstROR, kInstRSM,
      kInstSAR, kInstSHL, kInstSHR, kInstSBB, kInstSCAS_B, kInstSCAS_W, kInstSCAS_D, kInstSCAS_Q, kInstSETCC, kInstSHLD, kInstSHRD, kInstSGDT, kInstSIDT, kInstSLDT, kInstSMSW, kInstSTC, kInstSTD, kInstSTI,
      kInstSTOS_B, kInstSTOS_W, kInstSTOS_D, kInstSTOS_Q, kInstSUB, kInstSWAPGS, kInstSYSCALL, kInstSYSENTER, kInstSYSEXIT, kInstSYSRET,
      kInstTEST,
      kInstUD2,
      kInstVERR, kInstVERW,
      kInstWAIT, kInstWBINVD, kInstWRMSR,
      kInstXADD, kInstXCHG, kInstXGETBV, kInstXLATB, kInstXOR,

      kInstF2XM1, kInstFABS, kInstFADD, kInstFADDP, kInstFIADD,
      kInstFBLD, kInstFBSTP, kInstFCHS, kInstFCLEX, kInstFNCLEX, kInstFCMOVCC, kInstFCOM, kInstFCOMP, kInstFCOMPP, kInstFCOMI, kInstFCOMIP, kInstFCOS,
      kInstFDECSTP, kInstFDIV, kInstFDIVP, kInstFIDIV, kInstFDIVR, kInstFDIVRP, kInstFIDIVR,
      kInstFFREE,
      kInstFICOM, kInstFICOMP, kInstFILD, kInstFINCSTP, kInstFINIT, kInstFNINIT, kInstFIST, kInstFISTP,
      kInstFLD, kInstFLD1, kInstFLDCW, kInstFLDENV, kInstFLDL2E, kInstFLDL2T, kInstFLDLG2, kInstFLDLN2, kInstFLDPI, kInstFLDZ,
      kInstFMUL, kInstFMULP, kInstFIMUL,
      kInstFNOP,
      kInstFPATAN, kInstFPREM, kInstFPREM1, kInstFPTAN,
      kInstFRNDINT, kInstFRSTOR,
      kInstFSAVE, kInstFNSAVE, kInstFSCALE, kInstFSIN, kInstFSINCOS, kInstFSQRT, kInstFST, kInstFSTP, kInstFSTCW, kInstFNSTCW, kInstFSTENV, kInstFNSTENV, kInstFSTSW, kInstFNSTSW,
      kInstFSUB, kInstFSUBP, kInstFISUB, kInstFSUBR, kInstFSUBRP, kInstFISUBR,
      kInstFTST,
      kInstFUCOM, kInstFUCOMP, kInstFUCOMPP, kInstFUCOMI, kInstFUCOMIP,
      kInstFXAM, kInstFXCH, kInstFXRSTOR, kInstFXSAVE, kInstFXTRACT,
      kInstFYL2X, kInstFYL2XP1,

      kInstADDPS, kInstADDSS, kInstADDPD, kInstADDSD, kInstADDSUBPS, kInstADDSUBPD, kInstANDPS, kInstANDPD, kInstANDNPS, kInstANDNPD,
      kInstBLENDPS, kInstBLENDPD, kInstBLENDVPS, kInstBLENDVPD,
      kInstCLFLUSH, kInstCMPPS, kInstCMPSS, kInstCMPPD, kInstCMPSD, kInstCOMISS, kInstCOMISD, kInstCRC32,
      kInstCVTDQ2PD, kInstCVTDQ2PS, kInstCVTPD2DQ, kInstCVTPD2PI, kInstCVTPD2PS, kInstCVTPI2PD, kInstCVTPI2PS, kInstCVTPS2DQ, kInstCVTPS2PD, kInstCVTPS2PI, kInstCVTSD2SI,
      kInstCVTSD2SS, kInstCVTSI2SD, kInstCVTSI2SS, kInstCVTSS2SD, kInstCVTSS2SI, kInstCVTTPD2DQ, kInstCVTTPD2PI, kInstCVTTPS2DQ, kInstCVTTPS2PI, kInstCVTTSD2SI, kInstCVTTSS2SI,
      kInstDIVPS, kInstDIVSS, kInstDIVPD, kInstDIVSD, kInstDPPS, kInstDPPD,
      kInstEMMS, kInstEXTRACTPS,
      kInstFISTTP,
      kInstHADDPS, kInstHADDPD, kInstHSUBPS, kInstHSUBPD,
      kInstINSERTPS,
      kInstLDDQU, kInstLDMXCSR, kInstLFENCE,
      kInstMASKMOVDQU, kInstMASKMOVQ, kInstMAXPS, kInstMAXSS, kInstMAXPD, kInstMAXSD, kInstMFENCE, kInstMINPS, kInstMINSS, kInstMINPD, kInstMINSD, kInstMONITOR,
      kInstMOVAPD, kInstMOVAPS, kInstMOVD, kInstMOVDDUP, kInstMOVDQA, kInstMOVDQU, kInstMOVDQ2Q, kInstMOVHLPS, kInstMOVLHPS, kInstMOVHPS, kInstMOVHPD, kInstMOVLPS, kInstMOVLPD,
      kInstMOVMSKPS, kInstMOVMSKPD, kInstMOVNTDQ, kInstMOVNTDQA, kInstMOVNTI, kInstMOVNTPD, kInstMOVNTPS, kInstMOVNTQ, kInstMOVQ, kInstMOVQ2DQ, kInstMOVSD, kInstMOVSS,
      kInstMOVSHDUP, kInstMOVSLDUP, kInstMOVUPS, kInstMOVUPD, kInstMPSADBW, kInstMULPS, kInstMULSS, kInstMULPD, kInstMULSD, kInstMWAIT,
      kInstORPS, kInstORPD,
      kInstPABSB, kInstPABSD, kInstPABSW, kInstPACKSSDW, kInstPACKSSWB, kInstPACKUSDW, kInstPACKUSWB, kInstPADDB, kInstPADDD, kInstPADDQ, kInstPADDSB, kInstPADDSW, kInstPADDUSB,
      kInstPADDUSW, kInstPADDW, kInstPALIGNR, kInstPAND, kInstPANDN, kInstPAUSE, kInstPAVGB, kInstPAVGW,
      kInstPBLENDVB, kInstPBLENDW,
      kInstPCMPEQB, kInstPCMPEQW, kInstPCMPEQD, kInstPCMPEQQ, kInstPCMPESTRI, kInstPCMPESTRM, kInstPCMPISTRI, kInstPCMPISTRM, kInstPCMPGTB, kInstPCMPGTW, kInstPCMPGTD, kInstPCMPGTQ,
      kInstPEXTRB, kInstPEXTRW, kInstPEXTRD, kInstPEXTRQ,
      kInstPHADDW, kInstPHADDD, kInstPHADDSW, kInstPHMINPOSUW, kInstPHSUBW, kInstPHSUBD, kInstPHSUBSW,
      kInstPINSRB, kInstPINSRW, kInstPINSRD, kInstPINSRQ,
      kInstPMADDUBSW, kInstPMADDWD, kInstPMAXSB, kInstPMAXSW, kInstPMAXSD, kInstPMAXUB, kInstPMAXUW, kInstPMAXUD, kInstPMINSB, kInstPMINSW, kInstPMINSD, kInstPMINUB, kInstPMINUW,
      kInstPMINUD, kInstPMOVMSKB, kInstPMOVSXBW, kInstPMOVSXBD, kInstPMOVSXBQ, kInstPMOVSXWD, kInstPMOVSXWQ, kInstPMOVSXDQ, kInstPMOVZXBW, kInstPMOVZXBD, kInstPMOVZXBQ, kInstPMOVZXWD,
      kInstPMOVZXWQ, kInstPMOVZXDQ, kInstPMULDQ, kInstPMULHRSW, kInstPMULHUW, kInstPMULHW, kInstPMULLW, kInstPMULLD, kInstPMULUDQ,
      kInstPOPCNT, kInstPOR,
      kInstPREFETCH,
      kInstPSADBW, kInstPSHUFB, kInstPSHUFD, kInstPSHUFHW, kInstPSHUFLW, kInstPSHUFW, kInstPSIGNB, kInstPSIGNW, kInstPSIGND, kInstPSLLW, kInstPSLLD, kInstPSLLQ, kInstPSLLDQ, kInstPSRAW,
      kInstPSRAD, kInstPSRLW, kInstPSRLD, kInstPSRLQ, kInstPSRLDQ, kInstPSUBB, kInstPSUBW, kInstPSUBD, kInstPSUBQ, kInstPSUBSB, kInstPSUBSW, kInstPSUBUSB, kInstPSUBUSW,
      kInstPTEST,
      kInstPUNPCKHBW, kInstPUNPCKHWD, kInstPUNPCKHDQ, kInstPUNPCKHQDQ, kInstPUNPCKLBW, kInstPUNPCKLWD, kInstPUNPCKLDQ, kInstPUNPCKLQDQ,
      kInstPXOR,
      kInstRCPPS, kInstRCPSS, kInstROUNDPS, kInstROUNDPD, kInstROUNDSS, kInstROUNDSD, kInstRSQRTPS, kInstRSQRTSS,
      kInstSFENCE, kInstSHUFPS, kInstSHUFPD, kInstSQRTPS, kInstSQRTSS, kInstSQRTPD, kInstSQRTSD, kInstSTMXCSR, kInstSUBPS, kInstSUBSS, kInstSUBPD, kInstSUBSD,
      kInstUCOMISS, kInstUCOMISD, kInstUNPCKHPS, kInstUNPCKHPD, kInstUNPCKLPS, kInstUNPCKLPD,
      kInstXORPS, kInstXORPD,

      kInstVBROADCASTSS, kInstVBROADCASTSD, kInstVBROADCASTF128,
      kInstVEXTRACTF128,
      kInstVINSERTF128,
      kInstVMASKMOVPS, kInstVMASKMOVPD,
      kInstVPERMILPD, kInstVPERMILPS, kInstVPERM2F128,
      kInstVTESTPS, kInstVTESTPD,
      kInstVZEROALL, kInstVZEROUPPER,

      kInstAESENC, kInstAESENCLAST, kInstAESDEC, kInstAESDECLAST, kInstAESIMC, kInstAESKEYGENASSIST,
      kInstPCLMULQDQ,

      // FMA
      kInstVFMADD132PD, kInstVFMADD213PD, kInstVFMADD231PD, kInstVFMADD132PS, kInstVFMADD213PS, kInstVFMADD231PS,
      kInstVFMADD132SD, kInstVFMADD213SD, kInstVFMADD231SD, kInstVFMADD132SS, kInstVFMADD213SS, kInstVFMADD231SS,
      kInstVFMADDSUB132PD, kInstVFMADDSUB213PD, kInstVFMADDSUB231PD, kInstVFMADDSUB132PS, kInstVFMADDSUB213PS, kInstVFMADDSUB231PS,
      kInstVFMSUBADD132PD, kInstVFMSUBADD213PD, kInstVFMSUBADD231PD, kInstVFMSUBADD132PS, kInstVFMSUBADD213PS, kInstVFMSUBADD231PS,
      kInstVFMSUB132PD, kInstVFMSUB213PD, kInstVFMSUB231PD, kInstVFMSUB132PS, kInstVFMSUB213PS, kInstVFMSUB231PS,
      kInstVFMSUB132SD, kInstVFMSUB213SD, kInstVFMSUB231SD, kInstVFMSUB132SS, kInstVFMSUB213SS, kInstVFMSUB231SS,
      kInstVFNMADD132PD, kInstVFNMADD213PD, kInstVFNMADD231PD, kInstVFNMADD132PS, kInstVFNMADD213PS, kInstVFNMADD231PS,
      kInstVFNMADD132SD, kInstVFNMADD213SD, kInstVFNMADD231SD, kInstVFNMADD132SS, kInstVFNMADD213SS, kInstVFNMADD231SS,
      kInstVFNMSUB132PD, kInstVFNMSUB213PD, kInstVFNMSUB231PD, kInstVFNMSUB132PS, kInstVFNMSUB213PS, kInstVFNMSUB231PS,
      kInstVFNMSUB132SD, kInstVFNMSUB213SD, kInstVFNMSUB231SD, kInstVFNMSUB132SS, kInstVFNMSUB213SS, kInstVFNMSUB231SS,

      // F16C
      kInstRDFSBASE, kInstRDGSBASE, kInstRDRAND, kInstWRFSBASE, kInstWRGSBASE, kInstVCVTPH2PS, kInstVCVTPS2PH,

      // BMI
      kInstANDN, kInstBEXTR, kInstBLSI, kInstBLSMSK, kInstBLSR, kInstBZHI, kInstLZCNT, kInstMULX, kInstPDEP, kInstPEXT, kInstRORX, kInstSARX, kInstSHLX, kInstSHRX, kInstTZCNT, kInstINVPCID,

      // XOP
      kInstVFRCZPD, kInstVFRCZPS, kInstVFRCZSD, kInstVFRCZSS,
      kInstVPCMOV, kInstVPCOMB, kInstVPCOMD, kInstVPCOMQ, kInstVPCOMUB, kInstVPCOMUD, kInstVPCOMUQ, kInstVPCOMUW, kInstVPCOMW, kInstVPERMIL2PD, kInstVPERMIL2PS,
      kInstVPHADDBD, kInstVPHADDBQ, kInstVPHADDBW, kInstVPHADDDQ, kInstVPHADDUBD, kInstVPHADDUBQ, kInstVPHADDUBW, kInstVPHADDUDQ, kInstVPHADDUWD, kInstVPHADDUWQ,
      kInstVPHADDWD, kInstVPHADDWQ, kInstVPHSUBBW, kInstVPHSUBDQ, kInstVPHSUBWD,
      kInstVPMACSDD, kInstVPMACSDQH, kInstVPMACSDQL, kInstVPMACSSDD, kInstVPMACSSDQH, kInstVPMACSSDQL, kInstVPMACSSWD, kInstVPMACSSWW, kInstVPMACSWD, kInstVPMACSWW,
      kInstVPMADCSSWD, kInstVPMADCSWD,
      kInstVPPERM, kInstVPROTB, kInstVPROTD, kInstVPROTQ, kInstVPROTW, kInstVPSHAB, kInstVPSHAD, kInstVPSHAQ, kInstVPSHAW, kInstVPSHLB, kInstVPSHLD, kInstVPSHLQ, kInstVPSHLW,

      // FMA4
      kInstVFMADDPD, kInstVFMADDPS, kInstVFMADDSD, kInstVFMADDSS,
      kInstVFMADDSUBPD, kInstVFMADDSUBPS,
      kInstVFMSUBADDPD, kInstVFMSUBADDPS,
      kInstVFMSUBPD, kInstVFMSUBPS, kInstVFMSUBSD, kInstVFMSUBSS,
      kInstVFNMADDPD, kInstVFNMADDPS, kInstVFNMADDSD, kInstVFNMADDSS,
      kInstVFNMSUBPD, kInstVFNMSUBPS, kInstVFNMSUBSD, kInstVFNMSUBSS,

      // AVX2
      kInstVBROADCASTI128, kInstVPBROADCASTB, kInstVPBROADCASTW, kInstVPBROADCASTD, kInstVPBROADCASTQ,
      kInstPBLENDD, kInstVPERMD, kInstVPERMQ, kInstVPERMPS, kInstVPERMPD, kInstVPERM2I128,
      kInstVEXTRACTI128, kInstVINSERTI128, kInstVMASKMOVD, kInstVMASKMOVQ, kInstVPSLLVD, kInstVPSLLVQ, kInstVPSRAVD, kInstVPSRLVD, kInstVPSRLVQ,
      kInstVGATHERDPS, kInstVGATHERQPS, kInstVGATHERDPD, kInstVGATHERQPD, kInstVPGATHERDD, kInstVPGATHERQD, kInstVPGATHERDQ, kInstVPGATHERQQ,

      // jitasm compiler instructions
      kInstCOMPILER_DECLARkEncodeREkInsGrpARG, ///< Declare register argument
      kInstCOMPILER_DECLARkEncodeSTACK_ARG, ///< Declare stack argument
      kInstCOMPILER_DECLARkEncodeRESULT_REG, ///< Declare result register (eax/rax/xmm0)
      kInstCOMPILER_PROLOG, ///< Function prolog
      kInstCOMPILER_EPILOG ///< Function epilog
   };// enum InstrID

   enum eJumpCondition
   {
      kJmpO, kJmpNO, kJmpB, kJmpAE, kJmpE, kJmpNE, kJmpBE, kJmpA, kJmpS, kJmpNS, kJmpP, kJmpNP, kJmpL, kJmpGE, kJmpLE, kJmpG,
      kJmpCXZ, kJmpECXZ, kJmpRCXZ,
   };// enum JumpCondition

   enum EEncodingFlags
   {
      kEncodeSPECIAL = 1 << 0,
      kEncodeOPERAND_SIZkEncodePREFIX = 1 << 1, ///< Operand-size override prefix
      kEncodeREP_PREFIX = 1 << 2, ///< REP prefix
      kEncodeREXW_PREFIX = 1 << 3, ///< REX.W
      kEncodeMANDATORY_PREFIX_66 = 1 << 4, ///< Mandatory prefix 66
      kEncodeMANDATORY_PREFIX_F2 = 1 << 5, ///< Mandatory prefix F2
      kEncodeMANDATORY_PREFIX_F3 = 1 << 6, ///< Mandatory prefix F3
      kEncodeVEX = 1 << 7,
      kEncodeXOP = 1 << 8,
      kEncodeVEX_L = 1 << 9,
      kEncodeVEX_W = 1 << 10,
      kEncodeVEX_MMMMM_SHIFT = 11,
      kEncodeVEX_MMMMM_MASK = 0x1F << kEncodeVEX_MMMMM_SHIFT,
      kEncodeVEX_0F = 1 << kEncodeVEX_MMMMM_SHIFT,
      kEncodeVEX_0F38 = 2 << kEncodeVEX_MMMMM_SHIFT,
      kEncodeVEX_0F3A = 3 << kEncodeVEX_MMMMM_SHIFT,
      kEncodeXOP_M00011 = 3 << kEncodeVEX_MMMMM_SHIFT,
      kEncodeXOP_M01000 = 8 << kEncodeVEX_MMMMM_SHIFT,
      kEncodeXOP_M01001 = 9 << kEncodeVEX_MMMMM_SHIFT,
      kEncodeVEX_PP_SHIFT = 16,
      kEncodeVEX_PP_MASK = 0x3 << kEncodeVEX_PP_SHIFT,
      kEncodeVEX_66 = 1 << kEncodeVEX_PP_SHIFT,
      kEncodeVEX_F3 = 2 << kEncodeVEX_PP_SHIFT,
      kEncodeVEX_F2 = 3 << kEncodeVEX_PP_SHIFT,
      kEncodeXOP_P00 = 0 << kEncodeVEX_PP_SHIFT,
      kEncodeXOP_P01 = 1 << kEncodeVEX_PP_SHIFT,

      kEncodeVEX_128 = kEncodeVEX,
      kEncodeVEX_256 = kEncodeVEX | kEncodeVEX_L,
      kEncodeVEX_LIG = kEncodeVEX,
      kEncodeVEX_LZ = kEncodeVEX,
      kEncodeVEX_66_0F = kEncodeVEX_66 | kEncodeVEX_0F,
      kEncodeVEX_66_0F38 = kEncodeVEX_66 | kEncodeVEX_0F38,
      kEncodeVEX_66_0F3A = kEncodeVEX_66 | kEncodeVEX_0F3A,
      kEncodeVEX_F2_0F = kEncodeVEX_F2 | kEncodeVEX_0F,
      kEncodeVEX_F2_0F38 = kEncodeVEX_F2 | kEncodeVEX_0F38,
      kEncodeVEX_F2_0F3A = kEncodeVEX_F2 | kEncodeVEX_0F3A,
      kEncodeVEX_F3_0F = kEncodeVEX_F3 | kEncodeVEX_0F,
      kEncodeVEX_F3_0F38 = kEncodeVEX_F3 | kEncodeVEX_0F38,
      kEncodeVEX_F3_0F3A = kEncodeVEX_F3 | kEncodeVEX_0F3A,
      kEncodeVEX_W0 = 0,
      kEncodeVEX_W1 = kEncodeVEX_W,
      kEncodeVEX_WIG = 0,
      kEncodeXOP_128 = kEncodeXOP,
      kEncodeXOP_256 = kEncodeXOP | kEncodeVEX_L,
      kEncodeXOP_W0 = 0,
      kEncodeXOP_W1 = kEncodeVEX_W,

      // Aliases
      kEncodeVEX_128_0kInsFlagWIG = kEncodeVEX_128 | kEncodeVEX_0F | kEncodeVEX_WIG,
      kEncodeVEX_256_0kInsFlagWIG = kEncodeVEX_256 | kEncodeVEX_0F | kEncodeVEX_WIG,
      kEncodeVEX_128_66_0kInsFlagWIG = kEncodeVEX_128 | kEncodeVEX_66_0F | kEncodeVEX_WIG,
      kEncodeVEX_256_66_0kInsFlagWIG = kEncodeVEX_256 | kEncodeVEX_66_0F | kEncodeVEX_WIG,
      kEncodeVEX_128_66_0F38_WIG = kEncodeVEX_128 | kEncodeVEX_66_0F38 | kEncodeVEX_WIG,
      kEncodeVEX_256_66_0F38_WIG = kEncodeVEX_256 | kEncodeVEX_66_0F38 | kEncodeVEX_WIG,
      kEncodeVEX_128_66_0F38_W0 = kEncodeVEX_128 | kEncodeVEX_66_0F38 | kEncodeVEX_W0,
      kEncodeVEX_256_66_0F38_W0 = kEncodeVEX_256 | kEncodeVEX_66_0F38 | kEncodeVEX_W0,
      kEncodeVEX_128_66_0F38_W1 = kEncodeVEX_128 | kEncodeVEX_66_0F38 | kEncodeVEX_W1,
      kEncodeVEX_256_66_0F38_W1 = kEncodeVEX_256 | kEncodeVEX_66_0F38 | kEncodeVEX_W1,
      kEncodeVEX_128_66_0F3A_W0 = kEncodeVEX_128 | kEncodeVEX_66_0F3A | kEncodeVEX_W0,
      kEncodeVEX_256_66_0F3A_W0 = kEncodeVEX_256 | kEncodeVEX_66_0F3A | kEncodeVEX_W0,
   };// enum EncodingFlags



   struct InstructionTraitsEnums
   {
      // --------------------------------------------------------------------------
      // [Instruction Groups]
      // --------------------------------------------------------------------------

      //! @brief Instruction groups.
      //!
      //! This should be only used by assembler, because it's @c AsmJit::Assembler
      //! specific grouping. Each group represents one 'case' in the Assembler's 
      //! main emit method.
      enum EInstrGroup
      {
         // Group categories.
         kInstGrpEMIT,

         kInstGrpALU,
         kInstGrpBSWAP,
         kInstGrpBT,
         kInstGrpCALL,
         kInstGrpCRC32,
         kInstGrpENTER,
         kInstGrpIMUL,
         kInstGrpINC_DEC,
         kInstGrpJ,
         kInstGrpJMP,
         kInstGrpLEA,
         kInstGrpM,
         kInstGrpMOV,
         kInstGrpMOV_PTR,
         kInstGrpMOVSX_MOVZX,
         kInstGrpMOVSXD,
         kInstGrpPUSH, // I_PUSH is implemented before I_POP
         kInstGrpPOP,
         kInstGrpR_RM,
         kInstGrpRM_B,
         kInstGrpRM,
         kInstGrpRM_R,
         kInstGrpREP,
         kInstGrpRET,
         kInstGrpROT,
         kInstGrpSHLD_SHRD,
         kInstGrpTEST,
         kInstGrpXCHG,

         // Group for x87 FP instructions in format mem or st(i), st(i) (fadd, fsub, fdiv, ...)
         kInstGrpX87_FPU,
         // Group for x87 FP instructions in format st(i), st(i)
         kInstGrpX87_STI,
         // Group for fld/fst/fstp instruction, internally uses I_X87_MEM group.
         kInstGrpX87_MEM_STI,
         // Group for x87 FP instructions that uses Word, DWord, QWord or TWord memory pointer.
         kInstGrpX87_MEM,
         // Group for x87 FSTSW/FNSTSW instructions
         kInstGrpX87_FSTSW,

         // Group for movbe instruction
         kInstGrpMOVBE,

         // Group for MMX/SSE instructions in format (X)MM|Reg|Mem <- (X)MM|Reg|Mem,
         // 0x66 prefix must be set manually in opcodes.
         // - Primary opcode is used for instructions in (X)MM <- (X)MM/Mem format,
         // - Secondary opcode is used for instructions in (X)MM/Mem <- (X)MM format.
         kInstGrpMMU_MOV,

         // Group for movd and movq instructions.
         kInstGrpMMU_MOVD,
         kInstGrpMMU_MOVQ,

         // Group for pextrd, pextrq and pextrw instructions (it's special instruction
         // not similar to others)
         kInstGrpMMU_PEXTR,

         // Group for prefetch instruction
         kInstGrpMMU_PREFETCH,

         // Group for MMX/SSE instructions in format (X)MM|Reg <- (X)MM|Reg|Mem|Imm,
         // 0x66 prefix is added for MMX instructions that used by SSE2 registers.
         // - Primary opcode is used for instructions in (X)MM|Reg <- (X)MM|Reg|Mem format,
         // - Secondary opcode is iused for instructions in (X)MM|Reg <- Imm format.
         kInstGrpMMU_RMI,
         kInstGrpMMU_RM_IMM8,

         // Group for 3dNow instructions
         kInstGrpMMU_RM_3DNOW
      };

      // --------------------------------------------------------------------------
      // [Instruction Core Flags]
      // --------------------------------------------------------------------------

      //! @brief Instruction core flags.
      enum EInstrFlags
      {
         //! @brief No flags.
         kInstFlgNONE = 0x00,
         //! @brief Instruction is jump, conditional jump, call or ret.
         kInstFlgJUMP = 0x01,
         //! @brief Instruction will overwrite first operand - o[0].
         kInstFlgMOV = 0x02,
         //! @brief Instruction is X87 FPU.
         kInstFlgFPU = 0x04,
         //! @brief Instruction can be prepended using LOCK prefix
         //! (usable for multithreaded applications).
         kInstFlgLOCKABLE = 0x08,

         //! @brief Instruction is special, this is for @c Compiler.
         kInstFlgSPECIAL = 0x10,
         //! @brief Instruction always performs memory access.
         //!
         //! This flag is always combined with @c kInstFlgSPECIAL and signalizes that
         //! there is implicit address which is accessed (usually EDI/RDI or ESI/EDI).
         kInstFlgSPECIAL_MEM = 0x20
      };

      // --------------------------------------------------------------------------
      // [Instruction Operand Flags]
      // --------------------------------------------------------------------------

      //! @brief Instruction operand flags.
      enum EInstrOperand
      {
         // X86, MM, XMM
         kInstOprGB          = 0x0001,
         kInstOprGW          = 0x0002,
         kInstOprGD          = 0x0004,
         kInstOprGQ          = 0x0008,
         kInstOprMM          = 0x0010,
         kInstOprXMM         = 0x0020,
         kInstOprMEM         = 0x0040,
         kInstOprIMM         = 0x0080,


         kInstOprGB_MEM      = kInstOprGB    | kInstOprMEM,
         kInstOprGW_MEM      = kInstOprGW    | kInstOprMEM,
         kInstOprGD_MEM      = kInstOprGD    | kInstOprMEM,
         kInstOprGQ_MEM      = kInstOprGQ    | kInstOprMEM,

         kInstOprGQDWB       = kInstOprGQ    | kInstOprGD    | kInstOprGW    | kInstOprGB,
         kInstOprGQDW        = kInstOprGQ    | kInstOprGD    | kInstOprGW,
         kInstOprGQD         = kInstOprGQ    | kInstOprGD,
         kInstOprGWB         = kInstOprGW    | kInstOprGB,

         kInstOprGQDWB_MEM   = kInstOprGQDWB | kInstOprMEM,
         kInstOprGQDW_MEM    = kInstOprGQDW  | kInstOprMEM,
         kInstOprGQD_MEM     = kInstOprGQD   | kInstOprMEM,
         kInstOprGWB_MEM     = kInstOprGWB   | kInstOprMEM,

         kInstOprMM_MEM      = kInstOprMM    | kInstOprMEM,
         kInstOprXMM_MEM     = kInstOprXMM   | kInstOprMEM,
         kInstOprMM_XMM      = kInstOprMM    | kInstOprXMM,
         kInstOprMM_XMM_MEM  = kInstOprMM    | kInstOprXMM   | kInstOprMEM,

         // X87
         kInstOprFM_2        = kInstOprMEM   | 0x0100,
         kInstOprFM_4        = kInstOprMEM   | 0x0200,
         kInstOprFM_8        = kInstOprMEM   | 0x0400,
         kInstOprFM_10       = kInstOprMEM   | 0x0800,

         kInstOprFM_2_4      = kInstOprFM_2  | kInstOprFM_4,
         kInstOprFM_2_4_8    = kInstOprFM_2  | kInstOprFM_4  | kInstOprFM_8,
         kInstOprFM_4_8      = kInstOprFM_4  | kInstOprFM_8,
         kInstOprFM_4_8_10   = kInstOprFM_4  | kInstOprFM_8  | kInstOprFM_10,

         // Don't emit REX prefix.
         kInstOprNOREX       = 0x2000
      };

      // ============================================================================
      // [AsmJit::INST_CODE]
      // ============================================================================

      //! @brief Instruction codes.
      //!
      //! Note that these instruction codes are AsmJit specific. Each instruction is
      //! unique ID into AsmJit instruction table. Instruction codes are used together
      //! with AsmJit::Assembler and you can also use instruction codes to serialize
      //! instructions by @ref AssemblerCore::_emitInstruction() or
      //! @ref CompilerCore::_emitInstruction()
      enum INST_CODE
      {
         INST_ADC,           // X86/X64
         INST_ADD,           // X86/X64
         INST_ADDPD,         // SSE2
         INST_ADDPS,         // SSE
         INST_ADDSD,         // SSE2
         INST_ADDSS,         // SSE
         INST_ADDSUBPD,      // SSE3
         INST_ADDSUBPS,      // SSE3
         INST_AMD_PREFETCH,
         INST_AMD_PREFETCHW,
         INST_AND,           // X86/X64
         INST_ANDNPD,        // SSE2
         INST_ANDNPS,        // SSE
         INST_ANDPD,         // SSE2
         INST_ANDPS,         // SSE
         INST_BLENDPD,       // SSE4.1
         INST_BLENDPS,       // SSE4.1
         INST_BLENDVPD,      // SSE4.1
         INST_BLENDVPS,      // SSE4.1
         INST_BSF,           // X86/X64
         INST_BSR,           // X86/X64
         INST_BSWAP,         // X86/X64 (i486)
         INST_BT,            // X86/X64
         INST_BTC,           // X86/X64
         INST_BTR,           // X86/X64
         INST_BTS,           // X86/X64
         INST_CALL,          // X86/X64
         INST_CBW,           // X86/X64
         INST_CDQE,          // X64 only
         INST_CLC,           // X86/X64
         INST_CLD,           // X86/X64
         INST_CLFLUSH,       // SSE2
         INST_CMC,           // X86/X64

         INST_CMOV,          // Begin (cmovcc) (i586)
         INST_CMOVA = INST_CMOV, //X86/X64 (cmovcc) (i586)
         INST_CMOVAE,        // X86/X64 (cmovcc) (i586)
         INST_CMOVB,         // X86/X64 (cmovcc) (i586)
         INST_CMOVBE,        // X86/X64 (cmovcc) (i586)
         INST_CMOVC,         // X86/X64 (cmovcc) (i586)
         INST_CMOVE,         // X86/X64 (cmovcc) (i586)
         INST_CMOVG,         // X86/X64 (cmovcc) (i586)
         INST_CMOVGE,        // X86/X64 (cmovcc) (i586)
         INST_CMOVL,         // X86/X64 (cmovcc) (i586)
         INST_CMOVLE,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNA,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNAE,       // X86/X64 (cmovcc) (i586)
         INST_CMOVNB,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNBE,       // X86/X64 (cmovcc) (i586)
         INST_CMOVNC,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNE,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNG,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNGE,       // X86/X64 (cmovcc) (i586)
         INST_CMOVNL,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNLE,       // X86/X64 (cmovcc) (i586)
         INST_CMOVNO,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNP,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNS,        // X86/X64 (cmovcc) (i586)
         INST_CMOVNZ,        // X86/X64 (cmovcc) (i586)
         INST_CMOVO,         // X86/X64 (cmovcc) (i586)
         INST_CMOVP,         // X86/X64 (cmovcc) (i586)
         INST_CMOVPE,        // X86/X64 (cmovcc) (i586)
         INST_CMOVPO,        // X86/X64 (cmovcc) (i586)
         INST_CMOVS,         // X86/X64 (cmovcc) (i586)
         INST_CMOVZ,         // X86/X64 (cmovcc) (i586)

         INST_CMP,           // X86/X64
         INST_CMPPD,         // SSE2
         INST_CMPPS,         // SSE
         INST_CMPSD,         // SSE2
         INST_CMPSS,         // SSE
         INST_CMPXCHG,       // X86/X64 (i486)
         INST_CMPXCHG16B,    // X64 only
         INST_CMPXCHG8B,     // X86/X64 (i586)
         INST_COMISD,        // SSE2
         INST_COMISS,        // SSE
         INST_CPUID,         // X86/X64 (i486)
         INST_CRC32,         // SSE4.2
         INST_CVTDQ2PD,      // SSE2
         INST_CVTDQ2PS,      // SSE2
         INST_CVTPD2DQ,      // SSE2
         INST_CVTPD2PI,      // SSE2
         INST_CVTPD2PS,      // SSE2
         INST_CVTPI2PD,      // SSE2
         INST_CVTPI2PS,      // SSE
         INST_CVTPS2DQ,      // SSE2
         INST_CVTPS2PD,      // SSE2
         INST_CVTPS2PI,      // SSE
         INST_CVTSD2SI,      // SSE2
         INST_CVTSD2SS,      // SSE2
         INST_CVTSI2SD,      // SSE2
         INST_CVTSI2SS,      // SSE
         INST_CVTSS2SD,      // SSE2
         INST_CVTSS2SI,      // SSE
         INST_CVTTPD2DQ,     // SSE2
         INST_CVTTPD2PI,     // SSE2
         INST_CVTTPS2DQ,     // SSE2
         INST_CVTTPS2PI,     // SSE
         INST_CVTTSD2SI,     // SSE2
         INST_CVTTSS2SI,     // SSE
         INST_CWDE,          // X86/X64
         INST_DAA,           // X86 only
         INST_DAS,           // X86 only
         INST_DEC,           // X86/X64
         INST_DIV,           // X86/X64
         INST_DIVPD,         // SSE2
         INST_DIVPS,         // SSE
         INST_DIVSD,         // SSE2
         INST_DIVSS,         // SSE
         INST_DPPD,          // SSE4.1
         INST_DPPS,          // SSE4.1
         INST_EMMS,          // MMX
         INST_ENTER,         // X86/X64
         INST_EXTRACTPS,     // SSE4.1
         INST_F2XM1,         // X87
         INST_FABS,          // X87
         INST_FADD,          // X87
         INST_FADDP,         // X87
         INST_FBLD,          // X87
         INST_FBSTP,         // X87
         INST_FCHS,          // X87
         INST_FCLEX,         // X87
         INST_FCMOVB,        // X87
         INST_FCMOVBE,       // X87
         INST_FCMOVE,        // X87
         INST_FCMOVNB,       // X87
         INST_FCMOVNBE,      // X87
         INST_FCMOVNE,       // X87
         INST_FCMOVNU,       // X87
         INST_FCMOVU,        // X87
         INST_FCOM,          // X87
         INST_FCOMI,         // X87
         INST_FCOMIP,        // X87
         INST_FCOMP,         // X87
         INST_FCOMPP,        // X87
         INST_FCOS,          // X87
         INST_FDECSTP,       // X87
         INST_FDIV,          // X87
         INST_FDIVP,         // X87
         INST_FDIVR,         // X87
         INST_FDIVRP,        // X87
         INST_FEMMS,         // 3dNow!
         INST_FFREE,         // X87
         INST_FIADD,         // X87
         INST_FICOM,         // X87
         INST_FICOMP,        // X87
         INST_FIDIV,         // X87
         INST_FIDIVR,        // X87
         INST_FILD,          // X87
         INST_FIMUL,         // X87
         INST_FINCSTP,       // X87
         INST_FINIT,         // X87
         INST_FIST,          // X87
         INST_FISTP,         // X87
         INST_FISTTP,        // SSE3
         INST_FISUB,         // X87
         INST_FISUBR,        // X87
         INST_FLD,           // X87
         INST_FLD1,          // X87
         INST_FLDCW,         // X87
         INST_FLDENV,        // X87
         INST_FLDL2E,        // X87
         INST_FLDL2T,        // X87
         INST_FLDLG2,        // X87
         INST_FLDLN2,        // X87
         INST_FLDPI,         // X87
         INST_FLDZ,          // X87
         INST_FMUL,          // X87
         INST_FMULP,         // X87
         INST_FNCLEX,        // X87
         INST_FNINIT,        // X87
         INST_FNOP,          // X87
         INST_FNSAVE,        // X87
         INST_FNSTCW,        // X87
         INST_FNSTENV,       // X87
         INST_FNSTSW,        // X87
         INST_FPATAN,        // X87
         INST_FPREM,         // X87
         INST_FPREM1,        // X87
         INST_FPTAN,         // X87
         INST_FRNDINT,       // X87
         INST_FRSTOR,        // X87
         INST_FSAVE,         // X87
         INST_FSCALE,        // X87
         INST_FSIN,          // X87
         INST_FSINCOS,       // X87
         INST_FSQRT,         // X87
         INST_FST,           // X87
         INST_FSTCW,         // X87
         INST_FSTENV,        // X87
         INST_FSTP,          // X87
         INST_FSTSW,         // X87
         INST_FSUB,          // X87
         INST_FSUBP,         // X87
         INST_FSUBR,         // X87
         INST_FSUBRP,        // X87
         INST_FTST,          // X87
         INST_FUCOM,         // X87
         INST_FUCOMI,        // X87
         INST_FUCOMIP,       // X87
         INST_FUCOMP,        // X87
         INST_FUCOMPP,       // X87
         INST_FWAIT,         // X87
         INST_FXAM,          // X87
         INST_FXCH,          // X87
         INST_FXRSTOR,       // X87
         INST_FXSAVE,        // X87
         INST_FXTRACT,       // X87
         INST_FYL2X,         // X87
         INST_FYL2XP1,       // X87
         INST_HADDPD,        // SSE3
         INST_HADDPS,        // SSE3
         INST_HSUBPD,        // SSE3
         INST_HSUBPS,        // SSE3
         INST_IDIV,          // X86/X64
         INST_IMUL,          // X86/X64
         INST_INC,           // X86/X64
         INST_INT3,          // X86/X64
         INST_J,             // Begin (jcc)
         INST_JA = 
         INST_J,           // X86/X64 (jcc)
         INST_JAE,           // X86/X64 (jcc)
         INST_JB,            // X86/X64 (jcc)
         INST_JBE,           // X86/X64 (jcc)
         INST_JC,            // X86/X64 (jcc)
         INST_JE,            // X86/X64 (jcc)
         INST_JG,            // X86/X64 (jcc)
         INST_JGE,           // X86/X64 (jcc)
         INST_JL,            // X86/X64 (jcc)
         INST_JLE,           // X86/X64 (jcc)
         INST_JNA,           // X86/X64 (jcc)
         INST_JNAE,          // X86/X64 (jcc)
         INST_JNB,           // X86/X64 (jcc)
         INST_JNBE,          // X86/X64 (jcc)
         INST_JNC,           // X86/X64 (jcc)
         INST_JNE,           // X86/X64 (jcc)
         INST_JNG,           // X86/X64 (jcc)
         INST_JNGE,          // X86/X64 (jcc)
         INST_JNL,           // X86/X64 (jcc)
         INST_JNLE,          // X86/X64 (jcc)
         INST_JNO,           // X86/X64 (jcc)
         INST_JNP,           // X86/X64 (jcc)
         INST_JNS,           // X86/X64 (jcc)
         INST_JNZ,           // X86/X64 (jcc)
         INST_JO,            // X86/X64 (jcc)
         INST_JP,            // X86/X64 (jcc)
         INST_JPE,           // X86/X64 (jcc)
         INST_JPO,           // X86/X64 (jcc)
         INST_JS,            // X86/X64 (jcc)
         INST_JZ,            // X86/X64 (jcc)
         INST_JMP,           // X86/X64 (jmp)
         INST_LDDQU,         // SSE3
         INST_LDMXCSR,       // SSE
         INST_LAHF,          // X86/X64 (CPUID NEEDED)
         INST_LEA,           // X86/X64
         INST_LEAVE,         // X86/X64
         INST_LFENCE,        // SSE2
         INST_MASKMOVDQU,    // SSE2
         INST_MASKMOVQ,      // MMX-Ext
         INST_MAXPD,         // SSE2
         INST_MAXPS,         // SSE
         INST_MAXSD,         // SSE2
         INST_MAXSS,         // SSE
         INST_MFENCE,        // SSE2
         INST_MINPD,         // SSE2
         INST_MINPS,         // SSE
         INST_MINSD,         // SSE2
         INST_MINSS,         // SSE
         INST_MONITOR,       // SSE3
         INST_MOV,           // X86/X64
         INST_MOVAPD,        // SSE2
         INST_MOVAPS,        // SSE
         INST_MOVBE,         // SSE3 - Intel-Atom
         INST_MOVD,          // MMX/SSE2
         INST_MOVDDUP,       // SSE3
         INST_MOVDQ2Q,       // SSE2
         INST_MOVDQA,        // SSE2
         INST_MOVDQU,        // SSE2
         INST_MOVHLPS,       // SSE
         INST_MOVHPD,        // SSE2
         INST_MOVHPS,        // SSE
         INST_MOVLHPS,       // SSE
         INST_MOVLPD,        // SSE2
         INST_MOVLPS,        // SSE
         INST_MOVMSKPD,      // SSE2
         INST_MOVMSKPS,      // SSE2
         INST_MOVNTDQ,       // SSE2
         INST_MOVNTDQA,      // SSE4.1
         INST_MOVNTI,        // SSE2
         INST_MOVNTPD,       // SSE2
         INST_MOVNTPS,       // SSE
         INST_MOVNTQ,        // MMX-Ext
         INST_MOVQ,          // MMX/SSE/SSE2
         INST_MOVQ2DQ,       // SSE2
         INST_MOVSD,         // SSE2
         INST_MOVSHDUP,      // SSE3
         INST_MOVSLDUP,      // SSE3
         INST_MOVSS,         // SSE
         INST_MOVSX,         // X86/X64
         INST_MOVSXD,        // X86/X64
         INST_MOVUPD,        // SSE2
         INST_MOVUPS,        // SSE
         INST_MOVZX,         // X86/X64
         INST_MOV_PTR,       // X86/X64
         INST_MPSADBW,       // SSE4.1
         INST_MUL,           // X86/X64
         INST_MULPD,         // SSE2
         INST_MULPS,         // SSE
         INST_MULSD,         // SSE2
         INST_MULSS,         // SSE
         INST_MWAIT,         // SSE3
         INST_NEG,           // X86/X64
         INST_NOP,           // X86/X64
         INST_NOT,           // X86/X64
         INST_OR,            // X86/X64
         INST_ORPD,          // SSE2
         INST_ORPS,          // SSE
         INST_PABSB,         // SSSE3
         INST_PABSD,         // SSSE3
         INST_PABSW,         // SSSE3
         INST_PACKSSDW,      // MMX/SSE2
         INST_PACKSSWB,      // MMX/SSE2
         INST_PACKUSDW,      // SSE4.1
         INST_PACKUSWB,      // MMX/SSE2
         INST_PADDB,         // MMX/SSE2
         INST_PADDD,         // MMX/SSE2
         INST_PADDQ,         // SSE2
         INST_PADDSB,        // MMX/SSE2
         INST_PADDSW,        // MMX/SSE2
         INST_PADDUSB,       // MMX/SSE2
         INST_PADDUSW,       // MMX/SSE2
         INST_PADDW,         // MMX/SSE2
         INST_PALIGNR,       // SSSE3
         INST_PAND,          // MMX/SSE2
         INST_PANDN,         // MMX/SSE2
         INST_PAUSE,         // SSE2.
         INST_PAVGB,         // MMX-Ext
         INST_PAVGW,         // MMX-Ext
         INST_PBLENDVB,      // SSE4.1
         INST_PBLENDW,       // SSE4.1
         INST_PCMPEQB,       // MMX/SSE2
         INST_PCMPEQD,       // MMX/SSE2
         INST_PCMPEQQ,       // SSE4.1
         INST_PCMPEQW,       // MMX/SSE2    
         INST_PCMPESTRI,     // SSE4.2
         INST_PCMPESTRM,     // SSE4.2
         INST_PCMPGTB,       // MMX/SSE2
         INST_PCMPGTD,       // MMX/SSE2
         INST_PCMPGTQ,       // SSE4.2
         INST_PCMPGTW,       // MMX/SSE2
         INST_PCMPISTRI,     // SSE4.2
         INST_PCMPISTRM,     // SSE4.2
         INST_PEXTRB,        // SSE4.1
         INST_PEXTRD,        // SSE4.1        
         INST_PEXTRQ,        // SSE4.1
         INST_PEXTRW,        // MMX-Ext/SSE2
         INST_PF2ID,         // 3dNow!
         INST_PF2IW,         // Enhanced 3dNow!
         INST_PFACC,         // 3dNow!
         INST_PFADD,         // 3dNow!
         INST_PFCMPEQ,       // 3dNow!
         INST_PFCMPGE,       // 3dNow!
         INST_PFCMPGT,       // 3dNow!
         INST_PFMAX,         // 3dNow!
         INST_PFMIN,         // 3dNow!
         INST_PFMUL,         // 3dNow!
         INST_PFNACC,        // Enhanced 3dNow!
         INST_PFPNACC,       // Enhanced 3dNow!
         INST_PFRCP,         // 3dNow!
         INST_PFRCPIT1,      // 3dNow!
         INST_PFRCPIT2,      // 3dNow!
         INST_PFRSQIT1,      // 3dNow!
         INST_PFRSQRT,       // 3dNow!
         INST_PFSUB,         // 3dNow!
         INST_PFSUBR,        // 3dNow!
         INST_PHADDD,        // SSSE3
         INST_PHADDSW,       // SSSE3
         INST_PHADDW,        // SSSE3
         INST_PHMINPOSUW,    // SSE4.1
         INST_PHSUBD,        // SSSE3
         INST_PHSUBSW,       // SSSE3
         INST_PHSUBW,        // SSSE3
         INST_PI2FD,         // 3dNow!
         INST_PI2FW,         // Enhanced 3dNow!
         INST_PINSRB,        // SSE4.1
         INST_PINSRD,        // SSE4.1
         INST_PINSRQ,        // SSE4.1
         INST_PINSRW,        // MMX-Ext
         INST_PMADDUBSW,     // SSSE3
         INST_PMADDWD,       // MMX/SSE2
         INST_PMAXSB,        // SSE4.1
         INST_PMAXSD,        // SSE4.1
         INST_PMAXSW,        // MMX-Ext
         INST_PMAXUB,        // MMX-Ext
         INST_PMAXUD,        // SSE4.1
         INST_PMAXUW,        // SSE4.1
         INST_PMINSB,        // SSE4.1
         INST_PMINSD,        // SSE4.1
         INST_PMINSW,        // MMX-Ext
         INST_PMINUB,        // MMX-Ext
         INST_PMINUD,        // SSE4.1
         INST_PMINUW,        // SSE4.1
         INST_PMOVMSKB,      // MMX-Ext
         INST_PMOVSXBD,      // SSE4.1
         INST_PMOVSXBQ,      // SSE4.1
         INST_PMOVSXBW,      // SSE4.1
         INST_PMOVSXDQ,      // SSE4.1
         INST_PMOVSXWD,      // SSE4.1
         INST_PMOVSXWQ,      // SSE4.1
         INST_PMOVZXBD,      // SSE4.1
         INST_PMOVZXBQ,      // SSE4.1
         INST_PMOVZXBW,      // SSE4.1
         INST_PMOVZXDQ,      // SSE4.1
         INST_PMOVZXWD,      // SSE4.1
         INST_PMOVZXWQ,      // SSE4.1
         INST_PMULDQ,        // SSE4.1
         INST_PMULHRSW,      // SSSE3
         INST_PMULHUW,       // MMX-Ext
         INST_PMULHW,        // MMX/SSE2
         INST_PMULLD,        // SSE4.1
         INST_PMULLW,        // MMX/SSE2
         INST_PMULUDQ,       // SSE2
         INST_POP,           // X86/X64
         INST_POPAD,         // X86 only
         INST_POPCNT,        // SSE4.2
         INST_POPFD,         // X86 only
         INST_POPFQ,         // X64 only
         INST_POR,           // MMX/SSE2
         INST_PREFETCH,      // MMX-Ext
         INST_PSADBW,        // MMX-Ext
         INST_PSHUFB,        // SSSE3
         INST_PSHUFD,        // SSE2
         INST_PSHUFW,        // MMX-Ext
         INST_PSHUFHW,       // SSE2
         INST_PSHUFLW,       // SSE2
         INST_PSIGNB,        // SSSE3
         INST_PSIGND,        // SSSE3
         INST_PSIGNW,        // SSSE3
         INST_PSLLD,         // MMX/SSE2
         INST_PSLLDQ,        // SSE2
         INST_PSLLQ,         // MMX/SSE2
         INST_PSLLW,         // MMX/SSE2
         INST_PSRAD,         // MMX/SSE2
         INST_PSRAW,         // MMX/SSE2
         INST_PSRLD,         // MMX/SSE2
         INST_PSRLDQ,        // SSE2
         INST_PSRLQ,         // MMX/SSE2
         INST_PSRLW,         // MMX/SSE2
         INST_PSUBB,         // MMX/SSE2
         INST_PSUBD,         // MMX/SSE2
         INST_PSUBQ,         // SSE2
         INST_PSUBSB,        // MMX/SSE2
         INST_PSUBSW,        // MMX/SSE2
         INST_PSUBUSB,       // MMX/SSE2
         INST_PSUBUSW,       // MMX/SSE2
         INST_PSUBW,         // MMX/SSE2
         INST_PSWAPD,        // Enhanced 3dNow!
         INST_PTEST,         // SSE4.1
         INST_PUNPCKHBW,     // MMX/SSE2
         INST_PUNPCKHDQ,     // MMX/SSE2
         INST_PUNPCKHQDQ,    // SSE2
         INST_PUNPCKHWD,     // MMX/SSE2
         INST_PUNPCKLBW,     // MMX/SSE2
         INST_PUNPCKLDQ,     // MMX/SSE2
         INST_PUNPCKLQDQ,    // SSE2
         INST_PUNPCKLWD,     // MMX/SSE2
         INST_PUSH,          // X86/X64
         INST_PUSHAD,        // X86 only
         INST_PUSHFD,        // X86 only
         INST_PUSHFQ,        // X64 only
         INST_PXOR,          // MMX/SSE2
         INST_RCL,           // X86/X64
         INST_RCPPS,         // SSE
         INST_RCPSS,         // SSE
         INST_RCR,           // X86/X64
         INST_RDTSC,         // X86/X64
         INST_RDTSCP,        // X86/X64
         INST_REP_LODSB,     // X86/X64 (REP)
         INST_REP_LODSD,     // X86/X64 (REP)
         INST_REP_LODSQ,     // X64 only (REP)
         INST_REP_LODSW,     // X86/X64 (REP)
         INST_REP_MOVSB,     // X86/X64 (REP)
         INST_REP_MOVSD,     // X86/X64 (REP)
         INST_REP_MOVSQ,     // X64 only (REP)
         INST_REP_MOVSW,     // X86/X64 (REP)
         INST_REP_STOSB,     // X86/X64 (REP)
         INST_REP_STOSD,     // X86/X64 (REP)
         INST_REP_STOSQ,     // X64 only (REP)
         INST_REP_STOSW,     // X86/X64 (REP)
         INST_REPE_CMPSB,    // X86/X64 (REP)
         INST_REPE_CMPSD,    // X86/X64 (REP)
         INST_REPE_CMPSQ,    // X64 only (REP)
         INST_REPE_CMPSW,    // X86/X64 (REP)
         INST_REPE_SCASB,    // X86/X64 (REP)
         INST_REPE_SCASD,    // X86/X64 (REP)
         INST_REPE_SCASQ,    // X64 only (REP)
         INST_REPE_SCASW,    // X86/X64 (REP)
         INST_REPNE_CMPSB,   // X86/X64 (REP)
         INST_REPNE_CMPSD,   // X86/X64 (REP)
         INST_REPNE_CMPSQ,   // X64 only (REP)
         INST_REPNE_CMPSW,   // X86/X64 (REP)
         INST_REPNE_SCASB,   // X86/X64 (REP)
         INST_REPNE_SCASD,   // X86/X64 (REP)
         INST_REPNE_SCASQ,   // X64 only (REP)
         INST_REPNE_SCASW,   // X86/X64 (REP)
         INST_RET,           // X86/X64
         INST_ROL,           // X86/X64
         INST_ROR,           // X86/X64
         INST_ROUNDPD,       // SSE4.1
         INST_ROUNDPS,       // SSE4.1
         INST_ROUNDSD,       // SSE4.1
         INST_ROUNDSS,       // SSE4.1
         INST_RSQRTPS,       // SSE
         INST_RSQRTSS,       // SSE
         INST_SAHF,          // X86/X64 (CPUID NEEDED)
         INST_SAL,           // X86/X64
         INST_SAR,           // X86/X64
         INST_SBB,           // X86/X64
         INST_SET,           // Begin (setcc)
         INST_SETA=INST_SET, // X86/X64 (setcc)
         INST_SETAE,         // X86/X64 (setcc)
         INST_SETB,          // X86/X64 (setcc)
         INST_SETBE,         // X86/X64 (setcc)
         INST_SETC,          // X86/X64 (setcc)
         INST_SETE,          // X86/X64 (setcc)
         INST_SETG,          // X86/X64 (setcc)
         INST_SETGE,         // X86/X64 (setcc)
         INST_SETL,          // X86/X64 (setcc)
         INST_SETLE,         // X86/X64 (setcc)
         INST_SETNA,         // X86/X64 (setcc)
         INST_SETNAE,        // X86/X64 (setcc)
         INST_SETNB,         // X86/X64 (setcc)
         INST_SETNBE,        // X86/X64 (setcc)
         INST_SETNC,         // X86/X64 (setcc)
         INST_SETNE,         // X86/X64 (setcc)
         INST_SETNG,         // X86/X64 (setcc)
         INST_SETNGE,        // X86/X64 (setcc)
         INST_SETNL,         // X86/X64 (setcc)
         INST_SETNLE,        // X86/X64 (setcc)
         INST_SETNO,         // X86/X64 (setcc)
         INST_SETNP,         // X86/X64 (setcc)
         INST_SETNS,         // X86/X64 (setcc)
         INST_SETNZ,         // X86/X64 (setcc)
         INST_SETO,          // X86/X64 (setcc)
         INST_SETP,          // X86/X64 (setcc)
         INST_SETPE,         // X86/X64 (setcc)
         INST_SETPO,         // X86/X64 (setcc)
         INST_SETS,          // X86/X64 (setcc)
         INST_SETZ,          // X86/X64 (setcc)
         INST_SFENCE,        // MMX-Ext/SSE
         INST_SHL,           // X86/X64
         INST_SHLD,          // X86/X64
         INST_SHR,           // X86/X64
         INST_SHRD,          // X86/X64
         INST_SHUFPD,        // SSE2
         INST_SHUFPS,        // SSE
         INST_SQRTPD,        // SSE2
         INST_SQRTPS,        // SSE
         INST_SQRTSD,        // SSE2
         INST_SQRTSS,        // SSE
         INST_STC,           // X86/X64
         INST_STD,           // X86/X64
         INST_STMXCSR,       // SSE
         INST_SUB,           // X86/X64
         INST_SUBPD,         // SSE2
         INST_SUBPS,         // SSE
         INST_SUBSD,         // SSE2
         INST_SUBSS,         // SSE
         INST_TEST,          // X86/X64
         INST_UCOMISD,       // SSE2
         INST_UCOMISS,       // SSE
         INST_UD2,           // X86/X64
         INST_UNPCKHPD,      // SSE2
         INST_UNPCKHPS,      // SSE
         INST_UNPCKLPD,      // SSE2
         INST_UNPCKLPS,      // SSE
         INST_XADD,          // X86/X64 (i486)
         INST_XCHG,          // X86/X64 (i386)
         INST_XOR,           // X86/X64
         INST_XORPD,         // SSE2
         INST_XORPS,         // SSE

         _INST_COUNT,

         _INST_J_BEGIN = INST_J,
         _INST_J_END = INST_JMP
      };

   };//struct InstructionTraitsEnums

   // ============================================================================
   // [AsmJit::Instruction Traits]
   // ============================================================================

   struct InstructionDetails
   {
      // --------------------------------------------------------------------------
      // [Members]
      // --------------------------------------------------------------------------

      //! @brief Instruction code.
      boost::uint16_t _code;
      //! @brief Instruction name index in instructionName[] array.
      boost::uint16_t _nameIndex;
      //! @brief Instruction group, used also by @c Compiler.
      boost::uint8_t _group;
      //! @brief Instruction type flags.
      boost::uint8_t _flags;
      //! @brief First and second operand flags (some groups depends on these settings, used also by @c Compiler).
      boost::uint16_t _oflags[2];
      //! @brief If instruction has only memory operand, this is register opcode.
      boost::uint16_t _opCodeR;
      //! @brief Primary and secondary opcodes.
      boost::uint32_t opCode[2];

      //! @brief Get the instruction name (null terminated string).
      const char* getName()const
      { 
         return _instructionName + _nameIndex;
      }

      //! @brief Get whether the instruction is conditional or standard jump.
      bool isJump()const 
      { 
         return (_flags & InstructionTraitsEnums::kInstFlgJUMP) != 0;
      }
      //! @brief Get whether the instruction is MOV type.
      bool isMov()const 
      { 
         return (_flags & InstructionTraitsEnums::kInstFlgMOV) != 0;
      }
      //! @brief Get whether the instruction is X87 FPU type.
      bool isFPU()const
      { 
         return (_flags & InstructionTraitsEnums::kInstFlgFPU) != 0;
      }
      //! @brief Get whether the instruction can be prefixed by LOCK prefix.
      bool isLockable()const
      { 
         return (_flags & InstructionTraitsEnums::kInstFlgLOCKABLE) != 0; 
      }

      //! @brief Get whether the instruction is special type (this is used by
      //! @c Compiler to manage additional variables or functionality).
      bool isSpecial()const 
      { 
         return (_flags & InstructionTraitsEnums::kInstFlgSPECIAL) != 0; 
      }
      //! @brief Get whether the instruction is special type and it performs
      //! memory access.
      bool isSpecialMem()const 
      { 
         return (_flags & InstructionTraitsEnums::kInstFlgSPECIAL_MEM) != 0; 
      }

      // ============================================================================
      // [Instruction Name]
      // ============================================================================

      // Following {DATA SECTION} is auto-generated using InstructionDetails data.
      //
      // ${INSTRUCTION_DATA_BEGIN}
      static const char* _instructionName;
   };
   const char* InstructionDetails::_instructionName = 
      "adc\0"
      "add\0"
      "addpd\0"
      "addps\0"
      "addsd\0"
      "addss\0"
      "addsubpd\0"
      "addsubps\0"
      "amd_prefetch\0"
      "amd_prefetchw\0"
      "and\0"
      "andnpd\0"
      "andnps\0"
      "andpd\0"
      "andps\0"
      "blendpd\0"
      "blendps\0"
      "blendvpd\0"
      "blendvps\0"
      "bsf\0"
      "bsr\0"
      "bswap\0"
      "bt\0"
      "btc\0"
      "btr\0"
      "bts\0"
      "call\0"
      "cbw\0"
      "cdqe\0"
      "clc\0"
      "cld\0"
      "clflush\0"
      "cmc\0"
      "cmova\0"
      "cmovae\0"
      "cmovb\0"
      "cmovbe\0"
      "cmovc\0"
      "cmove\0"
      "cmovg\0"
      "cmovge\0"
      "cmovl\0"
      "cmovle\0"
      "cmovna\0"
      "cmovnae\0"
      "cmovnb\0"
      "cmovnbe\0"
      "cmovnc\0"
      "cmovne\0"
      "cmovng\0"
      "cmovnge\0"
      "cmovnl\0"
      "cmovnle\0"
      "cmovno\0"
      "cmovnp\0"
      "cmovns\0"
      "cmovnz\0"
      "cmovo\0"
      "cmovp\0"
      "cmovpe\0"
      "cmovpo\0"
      "cmovs\0"
      "cmovz\0"
      "cmp\0"
      "cmppd\0"
      "cmpps\0"
      "cmpsd\0"
      "cmpss\0"
      "cmpxchg\0"
      "cmpxchg16b\0"
      "cmpxchg8b\0"
      "comisd\0"
      "comiss\0"
      "cpuid\0"
      "crc32\0"
      "cvtdq2pd\0"
      "cvtdq2ps\0"
      "cvtpd2dq\0"
      "cvtpd2pi\0"
      "cvtpd2ps\0"
      "cvtpi2pd\0"
      "cvtpi2ps\0"
      "cvtps2dq\0"
      "cvtps2pd\0"
      "cvtps2pi\0"
      "cvtsd2si\0"
      "cvtsd2ss\0"
      "cvtsi2sd\0"
      "cvtsi2ss\0"
      "cvtss2sd\0"
      "cvtss2si\0"
      "cvttpd2dq\0"
      "cvttpd2pi\0"
      "cvttps2dq\0"
      "cvttps2pi\0"
      "cvttsd2si\0"
      "cvttss2si\0"
      "cwde\0"
      "daa\0"
      "das\0"
      "dec\0"
      "div\0"
      "divpd\0"
      "divps\0"
      "divsd\0"
      "divss\0"
      "dppd\0"
      "dpps\0"
      "emms\0"
      "enter\0"
      "extractps\0"
      "f2xm1\0"
      "fabs\0"
      "fadd\0"
      "faddp\0"
      "fbld\0"
      "fbstp\0"
      "fchs\0"
      "fclex\0"
      "fcmovb\0"
      "fcmovbe\0"
      "fcmove\0"
      "fcmovnb\0"
      "fcmovnbe\0"
      "fcmovne\0"
      "fcmovnu\0"
      "fcmovu\0"
      "fcom\0"
      "fcomi\0"
      "fcomip\0"
      "fcomp\0"
      "fcompp\0"
      "fcos\0"
      "fdecstp\0"
      "fdiv\0"
      "fdivp\0"
      "fdivr\0"
      "fdivrp\0"
      "femms\0"
      "ffree\0"
      "fiadd\0"
      "ficom\0"
      "ficomp\0"
      "fidiv\0"
      "fidivr\0"
      "fild\0"
      "fimul\0"
      "fincstp\0"
      "finit\0"
      "fist\0"
      "fistp\0"
      "fisttp\0"
      "fisub\0"
      "fisubr\0"
      "fld\0"
      "fld1\0"
      "fldcw\0"
      "fldenv\0"
      "fldl2e\0"
      "fldl2t\0"
      "fldlg2\0"
      "fldln2\0"
      "fldpi\0"
      "fldz\0"
      "fmul\0"
      "fmulp\0"
      "fnclex\0"
      "fninit\0"
      "fnop\0"
      "fnsave\0"
      "fnstcw\0"
      "fnstenv\0"
      "fnstsw\0"
      "fpatan\0"
      "fprem\0"
      "fprem1\0"
      "fptan\0"
      "frndint\0"
      "frstor\0"
      "fsave\0"
      "fscale\0"
      "fsin\0"
      "fsincos\0"
      "fsqrt\0"
      "fst\0"
      "fstcw\0"
      "fstenv\0"
      "fstp\0"
      "fstsw\0"
      "fsub\0"
      "fsubp\0"
      "fsubr\0"
      "fsubrp\0"
      "ftst\0"
      "fucom\0"
      "fucomi\0"
      "fucomip\0"
      "fucomp\0"
      "fucompp\0"
      "fwait\0"
      "fxam\0"
      "fxch\0"
      "fxrstor\0"
      "fxsave\0"
      "fxtract\0"
      "fyl2x\0"
      "fyl2xp1\0"
      "haddpd\0"
      "haddps\0"
      "hsubpd\0"
      "hsubps\0"
      "idiv\0"
      "imul\0"
      "inc\0"
      "int3\0"
      "ja\0"
      "jae\0"
      "jb\0"
      "jbe\0"
      "jc\0"
      "je\0"
      "jg\0"
      "jge\0"
      "jl\0"
      "jle\0"
      "jna\0"
      "jnae\0"
      "jnb\0"
      "jnbe\0"
      "jnc\0"
      "jne\0"
      "jng\0"
      "jnge\0"
      "jnl\0"
      "jnle\0"
      "jno\0"
      "jnp\0"
      "jns\0"
      "jnz\0"
      "jo\0"
      "jp\0"
      "jpe\0"
      "jpo\0"
      "js\0"
      "jz\0"
      "jmp\0"
      "lddqu\0"
      "ldmxcsr\0"
      "lahf\0"
      "lea\0"
      "leave\0"
      "lfence\0"
      "maskmovdqu\0"
      "maskmovq\0"
      "maxpd\0"
      "maxps\0"
      "maxsd\0"
      "maxss\0"
      "mfence\0"
      "minpd\0"
      "minps\0"
      "minsd\0"
      "minss\0"
      "monitor\0"
      "mov\0"
      "movapd\0"
      "movaps\0"
      "movbe\0"
      "movd\0"
      "movddup\0"
      "movdq2q\0"
      "movdqa\0"
      "movdqu\0"
      "movhlps\0"
      "movhpd\0"
      "movhps\0"
      "movlhps\0"
      "movlpd\0"
      "movlps\0"
      "movmskpd\0"
      "movmskps\0"
      "movntdq\0"
      "movntdqa\0"
      "movnti\0"
      "movntpd\0"
      "movntps\0"
      "movntq\0"
      "movq\0"
      "movq2dq\0"
      "movsd\0"
      "movshdup\0"
      "movsldup\0"
      "movss\0"
      "movsx\0"
      "movsxd\0"
      "movupd\0"
      "movups\0"
      "movzx\0"
      "mov_ptr\0"
      "mpsadbw\0"
      "mul\0"
      "mulpd\0"
      "mulps\0"
      "mulsd\0"
      "mulss\0"
      "mwait\0"
      "neg\0"
      "nop\0"
      "not\0"
      "or\0"
      "orpd\0"
      "orps\0"
      "pabsb\0"
      "pabsd\0"
      "pabsw\0"
      "packssdw\0"
      "packsswb\0"
      "packusdw\0"
      "packuswb\0"
      "paddb\0"
      "paddd\0"
      "paddq\0"
      "paddsb\0"
      "paddsw\0"
      "paddusb\0"
      "paddusw\0"
      "paddw\0"
      "palignr\0"
      "pand\0"
      "pandn\0"
      "pause\0"
      "pavgb\0"
      "pavgw\0"
      "pblendvb\0"
      "pblendw\0"
      "pcmpeqb\0"
      "pcmpeqd\0"
      "pcmpeqq\0"
      "pcmpeqw\0"
      "pcmpestri\0"
      "pcmpestrm\0"
      "pcmpgtb\0"
      "pcmpgtd\0"
      "pcmpgtq\0"
      "pcmpgtw\0"
      "pcmpistri\0"
      "pcmpistrm\0"
      "pextrb\0"
      "pextrd\0"
      "pextrq\0"
      "pextrw\0"
      "pf2id\0"
      "pf2iw\0"
      "pfacc\0"
      "pfadd\0"
      "pfcmpeq\0"
      "pfcmpge\0"
      "pfcmpgt\0"
      "pfmax\0"
      "pfmin\0"
      "pfmul\0"
      "pfnacc\0"
      "pfpnacc\0"
      "pfrcp\0"
      "pfrcpit1\0"
      "pfrcpit2\0"
      "pfrsqit1\0"
      "pfrsqrt\0"
      "pfsub\0"
      "pfsubr\0"
      "phaddd\0"
      "phaddsw\0"
      "phaddw\0"
      "phminposuw\0"
      "phsubd\0"
      "phsubsw\0"
      "phsubw\0"
      "pi2fd\0"
      "pi2fw\0"
      "pinsrb\0"
      "pinsrd\0"
      "pinsrq\0"
      "pinsrw\0"
      "pmaddubsw\0"
      "pmaddwd\0"
      "pmaxsb\0"
      "pmaxsd\0"
      "pmaxsw\0"
      "pmaxub\0"
      "pmaxud\0"
      "pmaxuw\0"
      "pminsb\0"
      "pminsd\0"
      "pminsw\0"
      "pminub\0"
      "pminud\0"
      "pminuw\0"
      "pmovmskb\0"
      "pmovsxbd\0"
      "pmovsxbq\0"
      "pmovsxbw\0"
      "pmovsxdq\0"
      "pmovsxwd\0"
      "pmovsxwq\0"
      "pmovzxbd\0"
      "pmovzxbq\0"
      "pmovzxbw\0"
      "pmovzxdq\0"
      "pmovzxwd\0"
      "pmovzxwq\0"
      "pmuldq\0"
      "pmulhrsw\0"
      "pmulhuw\0"
      "pmulhw\0"
      "pmulld\0"
      "pmullw\0"
      "pmuludq\0"
      "pop\0"
      "popad\0"
      "popcnt\0"
      "popfd\0"
      "popfq\0"
      "por\0"
      "prefetch\0"
      "psadbw\0"
      "pshufb\0"
      "pshufd\0"
      "pshufw\0"
      "pshufhw\0"
      "pshuflw\0"
      "psignb\0"
      "psignd\0"
      "psignw\0"
      "pslld\0"
      "pslldq\0"
      "psllq\0"
      "psllw\0"
      "psrad\0"
      "psraw\0"
      "psrld\0"
      "psrldq\0"
      "psrlq\0"
      "psrlw\0"
      "psubb\0"
      "psubd\0"
      "psubq\0"
      "psubsb\0"
      "psubsw\0"
      "psubusb\0"
      "psubusw\0"
      "psubw\0"
      "pswapd\0"
      "ptest\0"
      "punpckhbw\0"
      "punpckhdq\0"
      "punpckhqdq\0"
      "punpckhwd\0"
      "punpcklbw\0"
      "punpckldq\0"
      "punpcklqdq\0"
      "punpcklwd\0"
      "push\0"
      "pushad\0"
      "pushfd\0"
      "pushfq\0"
      "pxor\0"
      "rcl\0"
      "rcpps\0"
      "rcpss\0"
      "rcr\0"
      "rdtsc\0"
      "rdtscp\0"
      "rep lodsb\0"
      "rep lodsd\0"
      "rep lodsq\0"
      "rep lodsw\0"
      "rep movsb\0"
      "rep movsd\0"
      "rep movsq\0"
      "rep movsw\0"
      "rep stosb\0"
      "rep stosd\0"
      "rep stosq\0"
      "rep stosw\0"
      "repe cmpsb\0"
      "repe cmpsd\0"
      "repe cmpsq\0"
      "repe cmpsw\0"
      "repe scasb\0"
      "repe scasd\0"
      "repe scasq\0"
      "repe scasw\0"
      "repne cmpsb\0"
      "repne cmpsd\0"
      "repne cmpsq\0"
      "repne cmpsw\0"
      "repne scasb\0"
      "repne scasd\0"
      "repne scasq\0"
      "repne scasw\0"
      "ret\0"
      "rol\0"
      "ror\0"
      "roundpd\0"
      "roundps\0"
      "roundsd\0"
      "roundss\0"
      "rsqrtps\0"
      "rsqrtss\0"
      "sahf\0"
      "sal\0"
      "sar\0"
      "sbb\0"
      "seta\0"
      "setae\0"
      "setb\0"
      "setbe\0"
      "setc\0"
      "sete\0"
      "setg\0"
      "setge\0"
      "setl\0"
      "setle\0"
      "setna\0"
      "setnae\0"
      "setnb\0"
      "setnbe\0"
      "setnc\0"
      "setne\0"
      "setng\0"
      "setnge\0"
      "setnl\0"
      "setnle\0"
      "setno\0"
      "setnp\0"
      "setns\0"
      "setnz\0"
      "seto\0"
      "setp\0"
      "setpe\0"
      "setpo\0"
      "sets\0"
      "setz\0"
      "sfence\0"
      "shl\0"
      "shld\0"
      "shr\0"
      "shrd\0"
      "shufpd\0"
      "shufps\0"
      "sqrtpd\0"
      "sqrtps\0"
      "sqrtsd\0"
      "sqrtss\0"
      "stc\0"
      "std\0"
      "stmxcsr\0"
      "sub\0"
      "subpd\0"
      "subps\0"
      "subsd\0"
      "subss\0"
      "test\0"
      "ucomisd\0"
      "ucomiss\0"
      "ud2\0"
      "unpckhpd\0"
      "unpckhps\0"
      "unpcklpd\0"
      "unpcklps\0"
      "xadd\0"
      "xchg\0"
      "xor\0"
      "xorpd\0"
      "xorps\0"
      ;

   struct InstructionTraits
   {
      const static InstructionDetails _instructionDetails[];
   };

   const InstructionDetails InstructionTraits::_instructionDetails[] =
   {
      // Instruction code (enum)      | instruction name   | instruction group| instruction flags| oflags[0]           | oflags[1]           | r| opCode[0] | opcode[1]
      MAKE_INST(INST_ADC              , "adc"              , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 2, 0x00000010, 0x00000080),
      MAKE_INST(INST_ADD              , "add"              , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 0, 0x00000000, 0x00000080),
      MAKE_INST(INST_ADDPD            , "addpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F58, 0),
      MAKE_INST(INST_ADDPS            , "addps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F58, 0),
      MAKE_INST(INST_ADDSD            , "addsd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F58, 0),
      MAKE_INST(INST_ADDSS            , "addss"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F58, 0),
      MAKE_INST(INST_ADDSUBPD         , "addsubpd"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000FD0, 0),
      MAKE_INST(INST_ADDSUBPS         , "addsubps"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000FD0, 0),
      MAKE_INST(INST_AMD_PREFETCH     , "amd_prefetch"     , G(M)             , F(NONE)          , O(MEM)              , 0                   , 0, 0x00000F0D, 0),
      MAKE_INST(INST_AMD_PREFETCHW    , "amd_prefetchw"    , G(M)             , F(NONE)          , O(MEM)              , 0                   , 1, 0x00000F0D, 0),
      MAKE_INST(INST_AND              , "and"              , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 4, 0x00000020, 0x00000080),
      MAKE_INST(INST_ANDNPD           , "andnpd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F55, 0),
      MAKE_INST(INST_ANDNPS           , "andnps"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F55, 0),
      MAKE_INST(INST_ANDPD            , "andpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F54, 0),
      MAKE_INST(INST_ANDPS            , "andps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F54, 0),
      MAKE_INST(INST_BLENDPD          , "blendpd"          , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A0D, 0),
      MAKE_INST(INST_BLENDPS          , "blendps"          , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A0C, 0),
      MAKE_INST(INST_BLENDVPD         , "blendvpd"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3815, 0),
      MAKE_INST(INST_BLENDVPS         , "blendvps"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3814, 0),
      MAKE_INST(INST_BSF              , "bsf"              , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000FBC, 0),
      MAKE_INST(INST_BSR              , "bsr"              , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000FBD, 0),
      MAKE_INST(INST_BSWAP            , "bswap"            , G(BSWAP)         , F(NONE)          , O(GQD)              , 0                   , 0, 0         , 0),
      MAKE_INST(INST_BT               , "bt"               , G(BT)            , F(NONE)          , O(GQDW)|O(MEM)      , O(GQDW)|O(IMM)      , 4, 0x00000FA3, 0x00000FBA),
      MAKE_INST(INST_BTC              , "btc"              , G(BT)            , F(LOCKABLE)      , O(GQDW)|O(MEM)      , O(GQDW)|O(IMM)      , 7, 0x00000FBB, 0x00000FBA),
      MAKE_INST(INST_BTR              , "btr"              , G(BT)            , F(LOCKABLE)      , O(GQDW)|O(MEM)      , O(GQDW)|O(IMM)      , 6, 0x00000FB3, 0x00000FBA),
      MAKE_INST(INST_BTS              , "bts"              , G(BT)            , F(LOCKABLE)      , O(GQDW)|O(MEM)      , O(GQDW)|O(IMM)      , 5, 0x00000FAB, 0x00000FBA),
      MAKE_INST(INST_CALL             , "call"             , G(CALL)          , F(JUMP)          , O(GQD)|O(MEM)       , 0                   , 0, 0         , 0),
      MAKE_INST(INST_CBW              , "cbw"              , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x66000099, 0),
      MAKE_INST(INST_CDQE             , "cdqe"             , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x48000099, 0),
      MAKE_INST(INST_CLC              , "clc"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000000F8, 0),
      MAKE_INST(INST_CLD              , "cld"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000000FC, 0),
      MAKE_INST(INST_CLFLUSH          , "clflush"          , G(M)             , F(NONE)          , O(MEM)              , 0                   , 7, 0x00000FAE, 0),
      MAKE_INST(INST_CMC              , "cmc"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000000F5, 0),
      MAKE_INST(INST_CMOVA            , "cmova"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F47, 0),
      MAKE_INST(INST_CMOVAE           , "cmovae"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F43, 0),
      MAKE_INST(INST_CMOVB            , "cmovb"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F42, 0),
      MAKE_INST(INST_CMOVBE           , "cmovbe"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F46, 0),
      MAKE_INST(INST_CMOVC            , "cmovc"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F42, 0),
      MAKE_INST(INST_CMOVE            , "cmove"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F44, 0),
      MAKE_INST(INST_CMOVG            , "cmovg"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4F, 0),
      MAKE_INST(INST_CMOVGE           , "cmovge"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4D, 0),
      MAKE_INST(INST_CMOVL            , "cmovl"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4C, 0),
      MAKE_INST(INST_CMOVLE           , "cmovle"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4E, 0),
      MAKE_INST(INST_CMOVNA           , "cmovna"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F46, 0),
      MAKE_INST(INST_CMOVNAE          , "cmovnae"          , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F42, 0),
      MAKE_INST(INST_CMOVNB           , "cmovnb"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F43, 0),
      MAKE_INST(INST_CMOVNBE          , "cmovnbe"          , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F47, 0),
      MAKE_INST(INST_CMOVNC           , "cmovnc"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F43, 0),
      MAKE_INST(INST_CMOVNE           , "cmovne"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F45, 0),
      MAKE_INST(INST_CMOVNG           , "cmovng"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4E, 0),
      MAKE_INST(INST_CMOVNGE          , "cmovnge"          , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4C, 0),
      MAKE_INST(INST_CMOVNL           , "cmovnl"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4D, 0),
      MAKE_INST(INST_CMOVNLE          , "cmovnle"          , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4F, 0),
      MAKE_INST(INST_CMOVNO           , "cmovno"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F41, 0),
      MAKE_INST(INST_CMOVNP           , "cmovnp"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4B, 0),
      MAKE_INST(INST_CMOVNS           , "cmovns"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F49, 0),
      MAKE_INST(INST_CMOVNZ           , "cmovnz"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F45, 0),
      MAKE_INST(INST_CMOVO            , "cmovo"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F40, 0),
      MAKE_INST(INST_CMOVP            , "cmovp"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4A, 0),
      MAKE_INST(INST_CMOVPE           , "cmovpe"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4A, 0),
      MAKE_INST(INST_CMOVPO           , "cmovpo"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F4B, 0),
      MAKE_INST(INST_CMOVS            , "cmovs"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F48, 0),
      MAKE_INST(INST_CMOVZ            , "cmovz"            , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0x00000F44, 0),
      MAKE_INST(INST_CMP              , "cmp"              , G(ALU)           , F(NONE)          , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 7, 0x00000038, 0x00000080),
      MAKE_INST(INST_CMPPD            , "cmppd"            , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000FC2, 0),
      MAKE_INST(INST_CMPPS            , "cmpps"            , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000FC2, 0),
      MAKE_INST(INST_CMPSD            , "cmpsd"            , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000FC2, 0),
      MAKE_INST(INST_CMPSS            , "cmpss"            , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000FC2, 0),
      MAKE_INST(INST_CMPXCHG          , "cmpxchg"          , G(RM_R)          , F(SPECIAL)|F(LOCKABLE), 0              , 0                   , 0, 0x00000FB0, 0),
      MAKE_INST(INST_CMPXCHG16B       , "cmpxchg16b"       , G(M)             , F(SPECIAL)       , O(MEM)              , 0                   , 1, 0x00000FC7, 1 /* RexW */),
      MAKE_INST(INST_CMPXCHG8B        , "cmpxchg8b"        , G(M)             , F(SPECIAL)       , O(MEM)              , 0                   , 1, 0x00000FC7, 0),
      MAKE_INST(INST_COMISD           , "comisd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F2F, 0),
      MAKE_INST(INST_COMISS           , "comiss"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F2F, 0),
      MAKE_INST(INST_CPUID            , "cpuid"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000FA2, 0),
      MAKE_INST(INST_CRC32            , "crc32"            , G(CRC32)         , F(NONE)          , O(GQD)              , O(GQDWB_MEM)        , 0, 0xF20F38F0, 0),
      MAKE_INST(INST_CVTDQ2PD         , "cvtdq2pd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000FE6, 0),
      MAKE_INST(INST_CVTDQ2PS         , "cvtdq2ps"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F5B, 0),
      MAKE_INST(INST_CVTPD2DQ         , "cvtpd2dq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000FE6, 0),
      MAKE_INST(INST_CVTPD2PI         , "cvtpd2pi"         , G(MMU_RMI)       , F(MOV)           , O(MM)               , O(XMM_MEM)          , 0, 0x66000F2D, 0),
      MAKE_INST(INST_CVTPD2PS         , "cvtpd2ps"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F5A, 0),
      MAKE_INST(INST_CVTPI2PD         , "cvtpi2pd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(MM_MEM)           , 0, 0x66000F2A, 0),
      MAKE_INST(INST_CVTPI2PS         , "cvtpi2ps"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(MM_MEM)           , 0, 0x00000F2A, 0),
      MAKE_INST(INST_CVTPS2DQ         , "cvtps2dq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F5B, 0),
      MAKE_INST(INST_CVTPS2PD         , "cvtps2pd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F5A, 0),
      MAKE_INST(INST_CVTPS2PI         , "cvtps2pi"         , G(MMU_RMI)       , F(MOV)           , O(MM)               , O(XMM_MEM)          , 0, 0x00000F2D, 0),
      MAKE_INST(INST_CVTSD2SI         , "cvtsd2si"         , G(MMU_RMI)       , F(MOV)           , O(GQD)              , O(XMM_MEM)          , 0, 0xF2000F2D, 0),
      MAKE_INST(INST_CVTSD2SS         , "cvtsd2ss"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F5A, 0),
      MAKE_INST(INST_CVTSI2SD         , "cvtsi2sd"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(GQD)|O(MEM)       , 0, 0xF2000F2A, 0),
      MAKE_INST(INST_CVTSI2SS         , "cvtsi2ss"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(GQD)|O(MEM)       , 0, 0xF3000F2A, 0),
      MAKE_INST(INST_CVTSS2SD         , "cvtss2sd"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F5A, 0),
      MAKE_INST(INST_CVTSS2SI         , "cvtss2si"         , G(MMU_RMI)       , F(NONE)          , O(GQD)              , O(XMM_MEM)          , 0, 0xF3000F2D, 0),
      MAKE_INST(INST_CVTTPD2DQ        , "cvttpd2dq"        , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x66000FE6, 0),
      MAKE_INST(INST_CVTTPD2PI        , "cvttpd2pi"        , G(MMU_RMI)       , F(MOV)           , O(MM)               , O(XMM_MEM)          , 0, 0x66000F2C, 0),
      MAKE_INST(INST_CVTTPS2DQ        , "cvttps2dq"        , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F5B, 0),
      MAKE_INST(INST_CVTTPS2PI        , "cvttps2pi"        , G(MMU_RMI)       , F(MOV)           , O(MM)               , O(XMM_MEM)          , 0, 0x00000F2C, 0),
      MAKE_INST(INST_CVTTSD2SI        , "cvttsd2si"        , G(MMU_RMI)       , F(NONE)          , O(GQD)              , O(XMM_MEM)          , 0, 0xF2000F2C, 0),
      MAKE_INST(INST_CVTTSS2SI        , "cvttss2si"        , G(MMU_RMI)       , F(NONE)          , O(GQD)              , O(XMM_MEM)          , 0, 0xF3000F2C, 0),
      MAKE_INST(INST_CWDE             , "cwde"             , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000099, 0),
      MAKE_INST(INST_DAA              , "daa"              , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000027, 0),
      MAKE_INST(INST_DAS              , "das"              , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000002F, 0),
      MAKE_INST(INST_DEC              , "dec"              , G(INC_DEC)       , F(LOCKABLE)      , O(GQDWB_MEM)        , 0                   , 1, 0x00000048, 0x000000FE),
      MAKE_INST(INST_DIV              , "div"              , G(RM)            , F(SPECIAL)       , 0                   , 0                   , 6, 0x000000F6, 0),
      MAKE_INST(INST_DIVPD            , "divpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F5E, 0),
      MAKE_INST(INST_DIVPS            , "divps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F5E, 0),
      MAKE_INST(INST_DIVSD            , "divsd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F5E, 0),
      MAKE_INST(INST_DIVSS            , "divss"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F5E, 0),
      MAKE_INST(INST_DPPD             , "dppd"             , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A41, 0),
      MAKE_INST(INST_DPPS             , "dpps"             , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A40, 0),
      MAKE_INST(INST_EMMS             , "emms"             , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x00000F77, 0),
      MAKE_INST(INST_ENTER            , "enter"            , G(ENTER)         , F(SPECIAL)       , 0                   , 0                   , 0, 0x000000C8, 0),
      MAKE_INST(INST_EXTRACTPS        , "extractps"        , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A17, 0),
      MAKE_INST(INST_F2XM1            , "f2xm1"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F0, 0),
      MAKE_INST(INST_FABS             , "fabs"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9E1, 0),
      MAKE_INST(INST_FADD             , "fadd"             , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 0, 0xD8DCC0C0, 0),
      MAKE_INST(INST_FADDP            , "faddp"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DEC0, 0),
      MAKE_INST(INST_FBLD             , "fbld"             , G(M)             , F(FPU)           , O(MEM)              , 0                   , 4, 0x000000DF, 0),
      MAKE_INST(INST_FBSTP            , "fbstp"            , G(M)             , F(FPU)           , O(MEM)              , 0                   , 6, 0x000000DF, 0),
      MAKE_INST(INST_FCHS             , "fchs"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9E0, 0),
      MAKE_INST(INST_FCLEX            , "fclex"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x9B00DBE2, 0),
      MAKE_INST(INST_FCMOVB           , "fcmovb"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DAC0, 0),
      MAKE_INST(INST_FCMOVBE          , "fcmovbe"          , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DAD0, 0),
      MAKE_INST(INST_FCMOVE           , "fcmove"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DAC8, 0),
      MAKE_INST(INST_FCMOVNB          , "fcmovnb"          , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DBC0, 0),
      MAKE_INST(INST_FCMOVNBE         , "fcmovnbe"         , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DBD0, 0),
      MAKE_INST(INST_FCMOVNE          , "fcmovne"          , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DBC8, 0),
      MAKE_INST(INST_FCMOVNU          , "fcmovnu"          , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DBD8, 0),
      MAKE_INST(INST_FCMOVU           , "fcmovu"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DAD8, 0),
      MAKE_INST(INST_FCOM             , "fcom"             , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 2, 0xD8DCD0D0, 0),
      MAKE_INST(INST_FCOMI            , "fcomi"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DBF0, 0),
      MAKE_INST(INST_FCOMIP           , "fcomip"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DFF0, 0),
      MAKE_INST(INST_FCOMP            , "fcomp"            , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 3, 0xD8DCD8D8, 0),
      MAKE_INST(INST_FCOMPP           , "fcompp"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000DED9, 0),
      MAKE_INST(INST_FCOS             , "fcos"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9FF, 0),
      MAKE_INST(INST_FDECSTP          , "fdecstp"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F6, 0),
      MAKE_INST(INST_FDIV             , "fdiv"             , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 6, 0xD8DCF0F8, 0),
      MAKE_INST(INST_FDIVP            , "fdivp"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DEF8, 0),
      MAKE_INST(INST_FDIVR            , "fdivr"            , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 7, 0xD8DCF8F0, 0),
      MAKE_INST(INST_FDIVRP           , "fdivrp"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DEF0, 0),
      MAKE_INST(INST_FEMMS            , "femms"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x00000F0E, 0),
      MAKE_INST(INST_FFREE            , "ffree"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DDC0, 0),
      MAKE_INST(INST_FIADD            , "fiadd"            , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 0, 0xDEDA0000, 0),
      MAKE_INST(INST_FICOM            , "ficom"            , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 2, 0xDEDA0000, 0),
      MAKE_INST(INST_FICOMP           , "ficomp"           , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 3, 0xDEDA0000, 0),
      MAKE_INST(INST_FIDIV            , "fidiv"            , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 6, 0xDEDA0000, 0),
      MAKE_INST(INST_FIDIVR           , "fidivr"           , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 7, 0xDEDA0000, 0),
      MAKE_INST(INST_FILD             , "fild"             , G(X87_MEM)       , F(FPU)           , O(FM_2_4_8)         , 0                   , 0, 0xDFDBDF05, 0),
      MAKE_INST(INST_FIMUL            , "fimul"            , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 1, 0xDEDA0000, 0),
      MAKE_INST(INST_FINCSTP          , "fincstp"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F7, 0),
      MAKE_INST(INST_FINIT            , "finit"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x9B00DBE3, 0),
      MAKE_INST(INST_FIST             , "fist"             , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 2, 0xDFDB0000, 0),
      MAKE_INST(INST_FISTP            , "fistp"            , G(X87_MEM)       , F(FPU)           , O(FM_2_4_8)         , 0                   , 3, 0xDFDBDF07, 0),
      MAKE_INST(INST_FISTTP           , "fisttp"           , G(X87_MEM)       , F(FPU)           , O(FM_2_4_8)         , 0                   , 1, 0xDFDBDD01, 0),
      MAKE_INST(INST_FISUB            , "fisub"            , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 4, 0xDEDA0000, 0),
      MAKE_INST(INST_FISUBR           , "fisubr"           , G(X87_MEM)       , F(FPU)           , O(FM_2_4)           , 0                   , 5, 0xDEDA0000, 0),
      MAKE_INST(INST_FLD              , "fld"              , G(X87_MEM_STI)   , F(FPU)           , O(FM_4_8_10)        , 0                   , 0, 0x00D9DD00, 0xD9C0DB05),
      MAKE_INST(INST_FLD1             , "fld1"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9E8, 0),
      MAKE_INST(INST_FLDCW            , "fldcw"            , G(M)             , F(FPU)           , O(MEM)              , 0                   , 5, 0x000000D9, 0),
      MAKE_INST(INST_FLDENV           , "fldenv"           , G(M)             , F(FPU)           , O(MEM)              , 0                   , 4, 0x000000D9, 0),
      MAKE_INST(INST_FLDL2E           , "fldl2e"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9EA, 0),
      MAKE_INST(INST_FLDL2T           , "fldl2t"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9E9, 0),
      MAKE_INST(INST_FLDLG2           , "fldlg2"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9EC, 0),
      MAKE_INST(INST_FLDLN2           , "fldln2"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9ED, 0),
      MAKE_INST(INST_FLDPI            , "fldpi"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9EB, 0),
      MAKE_INST(INST_FLDZ             , "fldz"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9EE, 0),
      MAKE_INST(INST_FMUL             , "fmul"             , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 1, 0xD8DCC8C8, 0),
      MAKE_INST(INST_FMULP            , "fmulp"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DEC8, 0),
      MAKE_INST(INST_FNCLEX           , "fnclex"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000DBE2, 0),
      MAKE_INST(INST_FNINIT           , "fninit"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000DBE3, 0),
      MAKE_INST(INST_FNOP             , "fnop"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9D0, 0),
      MAKE_INST(INST_FNSAVE           , "fnsave"           , G(M)             , F(FPU)           , O(MEM)              , 0                   , 6, 0x000000DD, 0),
      MAKE_INST(INST_FNSTCW           , "fnstcw"           , G(M)             , F(FPU)           , O(MEM)              , 0                   , 7, 0x000000D9, 0),
      MAKE_INST(INST_FNSTENV          , "fnstenv"          , G(M)             , F(FPU)           , O(MEM)              , 0                   , 6, 0x000000D9, 0),
      MAKE_INST(INST_FNSTSW           , "fnstsw"           , G(X87_FSTSW)     , F(FPU)           , O(MEM)              , 0                   , 7, 0x000000DD, 0x0000DFE0),
      MAKE_INST(INST_FPATAN           , "fpatan"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F3, 0),
      MAKE_INST(INST_FPREM            , "fprem"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F8, 0),
      MAKE_INST(INST_FPREM1           , "fprem1"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F5, 0),
      MAKE_INST(INST_FPTAN            , "fptan"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F2, 0),
      MAKE_INST(INST_FRNDINT          , "frndint"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9FC, 0),
      MAKE_INST(INST_FRSTOR           , "frstor"           , G(M)             , F(FPU)           , O(MEM)              , 0                   , 4, 0x000000DD, 0),
      MAKE_INST(INST_FSAVE            , "fsave"            , G(M)             , F(FPU)           , O(MEM)              , 0                   , 6, 0x9B0000DD, 0),
      MAKE_INST(INST_FSCALE           , "fscale"           , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9FD, 0),
      MAKE_INST(INST_FSIN             , "fsin"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9FE, 0),
      MAKE_INST(INST_FSINCOS          , "fsincos"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9FB, 0),
      MAKE_INST(INST_FSQRT            , "fsqrt"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9FA, 0),
      MAKE_INST(INST_FST              , "fst"              , G(X87_MEM_STI)   , F(FPU)           , O(FM_4_8)           , 0                   , 2, 0x00D9DD02, 0xDDD00000),
      MAKE_INST(INST_FSTCW            , "fstcw"            , G(M)             , F(FPU)           , O(MEM)              , 0                   , 7, 0x9B0000D9, 0),
      MAKE_INST(INST_FSTENV           , "fstenv"           , G(M)             , F(FPU)           , O(MEM)              , 0                   , 6, 0x9B0000D9, 0),
      MAKE_INST(INST_FSTP             , "fstp"             , G(X87_MEM_STI)   , F(FPU)           , O(FM_4_8_10)        , 0                   , 3, 0x00D9DD03, 0xDDD8DB07),
      MAKE_INST(INST_FSTSW            , "fstsw"            , G(X87_FSTSW)     , F(FPU)           , O(MEM)              , 0                   , 7, 0x9B0000DD, 0x9B00DFE0),
      MAKE_INST(INST_FSUB             , "fsub"             , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 4, 0xD8DCE0E8, 0),
      MAKE_INST(INST_FSUBP            , "fsubp"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DEE8, 0),
      MAKE_INST(INST_FSUBR            , "fsubr"            , G(X87_FPU)       , F(FPU)           , 0                   , 0                   , 5, 0xD8DCE8E0, 0),
      MAKE_INST(INST_FSUBRP           , "fsubrp"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DEE0, 0),
      MAKE_INST(INST_FTST             , "ftst"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9E4, 0),
      MAKE_INST(INST_FUCOM            , "fucom"            , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DDE0, 0),
      MAKE_INST(INST_FUCOMI           , "fucomi"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DBE8, 0),
      MAKE_INST(INST_FUCOMIP          , "fucomip"          , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DFE8, 0),
      MAKE_INST(INST_FUCOMP           , "fucomp"           , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000DDE8, 0),
      MAKE_INST(INST_FUCOMPP          , "fucompp"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000DAE9, 0),
      MAKE_INST(INST_FWAIT            , "fwait"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x000000DB, 0),
      MAKE_INST(INST_FXAM             , "fxam"             , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9E5, 0),
      MAKE_INST(INST_FXCH             , "fxch"             , G(X87_STI)       , F(FPU)           , 0                   , 0                   , 0, 0x0000D9C8, 0),
      MAKE_INST(INST_FXRSTOR          , "fxrstor"          , G(M)             , F(FPU)           , 0                   , 0                   , 1, 0x00000FAE, 0),
      MAKE_INST(INST_FXSAVE           , "fxsave"           , G(M)             , F(FPU)           , 0                   , 0                   , 0, 0x00000FAE, 0),
      MAKE_INST(INST_FXTRACT          , "fxtract"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F4, 0),
      MAKE_INST(INST_FYL2X            , "fyl2x"            , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F1, 0),
      MAKE_INST(INST_FYL2XP1          , "fyl2xp1"          , G(EMIT)          , F(FPU)           , 0                   , 0                   , 0, 0x0000D9F9, 0),
      MAKE_INST(INST_HADDPD           , "haddpd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F7C, 0),
      MAKE_INST(INST_HADDPS           , "haddps"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F7C, 0),
      MAKE_INST(INST_HSUBPD           , "hsubpd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F7D, 0),
      MAKE_INST(INST_HSUBPS           , "hsubps"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F7D, 0),
      MAKE_INST(INST_IDIV             , "idiv"             , G(RM)            , F(SPECIAL)       , 0                   , 0                   , 7, 0x000000F6, 0),
      MAKE_INST(INST_IMUL             , "imul"             , G(IMUL)          , F(SPECIAL)       , 0                   , 0                   , 0, 0         , 0),
      MAKE_INST(INST_INC              , "inc"              , G(INC_DEC)       , F(LOCKABLE)      , O(GQDWB_MEM)        , 0                   , 0, 0x00000040, 0x000000FE),
      MAKE_INST(INST_INT3             , "int3"             , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000000CC, 0),
      MAKE_INST(INST_JA               , "ja"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x7       , 0),
      MAKE_INST(INST_JAE              , "jae"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x3       , 0),
      MAKE_INST(INST_JB               , "jb"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x2       , 0),
      MAKE_INST(INST_JBE              , "jbe"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x6       , 0),
      MAKE_INST(INST_JC               , "jc"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x2       , 0),
      MAKE_INST(INST_JE               , "je"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x4       , 0),
      MAKE_INST(INST_JG               , "jg"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xF       , 0),
      MAKE_INST(INST_JGE              , "jge"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xD       , 0),
      MAKE_INST(INST_JL               , "jl"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xC       , 0),
      MAKE_INST(INST_JLE              , "jle"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xE       , 0),
      MAKE_INST(INST_JNA              , "jna"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x6       , 0),
      MAKE_INST(INST_JNAE             , "jnae"             , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x2       , 0),
      MAKE_INST(INST_JNB              , "jnb"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x3       , 0),
      MAKE_INST(INST_JNBE             , "jnbe"             , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x7       , 0),
      MAKE_INST(INST_JNC              , "jnc"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x3       , 0),
      MAKE_INST(INST_JNE              , "jne"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x5       , 0),
      MAKE_INST(INST_JNG              , "jng"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xE       , 0),
      MAKE_INST(INST_JNGE             , "jnge"             , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xC       , 0),
      MAKE_INST(INST_JNL              , "jnl"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xD       , 0),
      MAKE_INST(INST_JNLE             , "jnle"             , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xF       , 0),
      MAKE_INST(INST_JNO              , "jno"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x1       , 0),
      MAKE_INST(INST_JNP              , "jnp"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xB       , 0),
      MAKE_INST(INST_JNS              , "jns"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x9       , 0),
      MAKE_INST(INST_JNZ              , "jnz"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x5       , 0),
      MAKE_INST(INST_JO               , "jo"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x0       , 0),
      MAKE_INST(INST_JP               , "jp"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xA       , 0),
      MAKE_INST(INST_JPE              , "jpe"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xA       , 0),
      MAKE_INST(INST_JPO              , "jpo"              , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0xB       , 0),
      MAKE_INST(INST_JS               , "js"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x8       , 0),
      MAKE_INST(INST_JZ               , "jz"               , G(J)             , F(JUMP)          , 0                   , 0                   , 0, 0x4       , 0),
      MAKE_INST(INST_JMP              , "jmp"              , G(JMP)           , F(JUMP)          , 0                   , 0                   , 0, 0         , 0),
      MAKE_INST(INST_LDDQU            , "lddqu"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(MEM)              , 0, 0xF2000FF0, 0),
      MAKE_INST(INST_LDMXCSR          , "ldmxcsr"          , G(M)             , F(NONE)          , O(MEM)              , 0                   , 2, 0x00000FAE, 0),
      MAKE_INST(INST_LAHF             , "lahf"             , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000009F, 0),
      MAKE_INST(INST_LEA              , "lea"              , G(LEA)           , F(NONE)          , O(GQD)              , O(MEM)              , 0, 0         , 0),
      MAKE_INST(INST_LEAVE            , "leave"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x000000C9, 0),
      MAKE_INST(INST_LFENCE           , "lfence"           , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000FAEE8, 0),
      MAKE_INST(INST_MASKMOVDQU       , "maskmovdqu"       , G(MMU_RMI)       , F(SPECIAL)       , O(XMM)              , O(XMM)              , 0, 0x66000F57, 0),
      MAKE_INST(INST_MASKMOVQ         , "maskmovq"         , G(MMU_RMI)       , F(SPECIAL)       , O(MM)               , O(MM)               , 0, 0x00000FF7, 0),
      MAKE_INST(INST_MAXPD            , "maxpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F5F, 0),
      MAKE_INST(INST_MAXPS            , "maxps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F5F, 0),
      MAKE_INST(INST_MAXSD            , "maxsd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F5F, 0),
      MAKE_INST(INST_MAXSS            , "maxss"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F5F, 0),
      MAKE_INST(INST_MFENCE           , "mfence"           , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000FAEF0, 0),
      MAKE_INST(INST_MINPD            , "minpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F5D, 0),
      MAKE_INST(INST_MINPS            , "minps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F5D, 0),
      MAKE_INST(INST_MINSD            , "minsd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F5D, 0),
      MAKE_INST(INST_MINSS            , "minss"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F5D, 0),
      MAKE_INST(INST_MONITOR          , "monitor"          , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x000F01C8, 0),
      MAKE_INST(INST_MOV              , "mov"              , G(MOV)           , F(MOV)           , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 0, 0         , 0),
      MAKE_INST(INST_MOVAPD           , "movapd"           , G(MMU_MOV)       , F(MOV)           , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x66000F28, 0x66000F29),
      MAKE_INST(INST_MOVAPS           , "movaps"           , G(MMU_MOV)       , F(MOV)           , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x00000F28, 0x00000F29),
      MAKE_INST(INST_MOVBE            , "movbe"            , G(MOVBE)         , F(MOV)           , O(GQDW)|O(MEM)      , O(GQDW)|O(MEM)      , 0, 0x000F38F0, 0x000F38F1),
      MAKE_INST(INST_MOVD             , "movd"             , G(MMU_MOVD)      , F(MOV)           , O(GD)|O(MM_XMM_MEM) , O(GD)|O(MM_XMM_MEM) , 0, 0         , 0),
      MAKE_INST(INST_MOVDDUP          , "movddup"          , G(MMU_MOV)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F12, 0),
      MAKE_INST(INST_MOVDQ2Q          , "movdq2q"          , G(MMU_MOV)       , F(MOV)           , O(MM)               , O(XMM)              , 0, 0xF2000FD6, 0),
      MAKE_INST(INST_MOVDQA           , "movdqa"           , G(MMU_MOV)       , F(MOV)           , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x66000F6F, 0x66000F7F),
      MAKE_INST(INST_MOVDQU           , "movdqu"           , G(MMU_MOV)       , F(MOV)           , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0xF3000F6F, 0xF3000F7F),
      MAKE_INST(INST_MOVHLPS          , "movhlps"          , G(MMU_MOV)       , F(NONE)          , O(XMM)              , O(XMM)              , 0, 0x00000F12, 0),
      MAKE_INST(INST_MOVHPD           , "movhpd"           , G(MMU_MOV)       , F(NONE)          , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x66000F16, 0x66000F17),
      MAKE_INST(INST_MOVHPS           , "movhps"           , G(MMU_MOV)       , F(NONE)          , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x00000F16, 0x00000F17),
      MAKE_INST(INST_MOVLHPS          , "movlhps"          , G(MMU_MOV)       , F(NONE)          , O(XMM)              , O(XMM)              , 0, 0x00000F16, 0),
      MAKE_INST(INST_MOVLPD           , "movlpd"           , G(MMU_MOV)       , F(NONE)          , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x66000F12, 0x66000F13),
      MAKE_INST(INST_MOVLPS           , "movlps"           , G(MMU_MOV)       , F(NONE)          , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x00000F12, 0x00000F13),
      MAKE_INST(INST_MOVMSKPD         , "movmskpd"         , G(MMU_MOV)       , F(MOV)           , O(GQD)|O(NOREX)     , O(XMM)              , 0, 0x66000F50, 0),
      MAKE_INST(INST_MOVMSKPS         , "movmskps"         , G(MMU_MOV)       , F(MOV)           , O(GQD)|O(NOREX)     , O(XMM)              , 0, 0x00000F50, 0),
      MAKE_INST(INST_MOVNTDQ          , "movntdq"          , G(MMU_MOV)       , F(NONE)          , O(MEM)              , O(XMM)              , 0, 0         , 0x66000FE7),
      MAKE_INST(INST_MOVNTDQA         , "movntdqa"         , G(MMU_MOV)       , F(MOV)           , O(XMM)              , O(MEM)              , 0, 0x660F382A, 0),
      MAKE_INST(INST_MOVNTI           , "movnti"           , G(MMU_MOV)       , F(MOV)           , O(MEM)              , O(GQD)              , 0, 0         , 0x00000FC3),
      MAKE_INST(INST_MOVNTPD          , "movntpd"          , G(MMU_MOV)       , F(NONE)          , O(MEM)              , O(XMM)              , 0, 0         , 0x66000F2B),
      MAKE_INST(INST_MOVNTPS          , "movntps"          , G(MMU_MOV)       , F(NONE)          , O(MEM)              , O(XMM)              , 0, 0         , 0x00000F2B),
      MAKE_INST(INST_MOVNTQ           , "movntq"           , G(MMU_MOV)       , F(NONE)          , O(MEM)              , O(MM)               , 0, 0         , 0x00000FE7),
      MAKE_INST(INST_MOVQ             , "movq"             , G(MMU_MOVQ)      , F(MOV)           , O(GQ)|O(MM_XMM_MEM) , O(GQ)|O(MM_XMM_MEM) , 0, 0         , 0),
      MAKE_INST(INST_MOVQ2DQ          , "movq2dq"          , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(MM)               , 0, 0xF3000FD6, 0),
      MAKE_INST(INST_MOVSD            , "movsd"            , G(MMU_MOV)       , F(NONE)          , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0xF2000F10, 0xF2000F11),
      MAKE_INST(INST_MOVSHDUP         , "movshdup"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F16, 0),
      MAKE_INST(INST_MOVSLDUP         , "movsldup"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F12, 0),
      MAKE_INST(INST_MOVSS            , "movss"            , G(MMU_MOV)       , F(NONE)          , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0xF3000F10, 0xF3000F11),
      MAKE_INST(INST_MOVSX            , "movsx"            , G(MOVSX_MOVZX)   , F(NONE)          , O(GQDW)             , O(GWB_MEM)          , 0, 0x00000FBE, 0),
      MAKE_INST(INST_MOVSXD           , "movsxd"           , G(MOVSXD)        , F(NONE)          , O(GQ)               , O(GD_MEM)           , 0, 0         , 0),
      MAKE_INST(INST_MOVUPD           , "movupd"           , G(MMU_MOV)       , F(MOV)           , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x66000F10, 0x66000F11),
      MAKE_INST(INST_MOVUPS           , "movups"           , G(MMU_MOV)       , F(MOV)           , O(XMM_MEM)          , O(XMM_MEM)          , 0, 0x00000F10, 0x00000F11),
      MAKE_INST(INST_MOVZX            , "movzx"            , G(MOVSX_MOVZX)   , F(MOV)           , O(GQDW)             , O(GWB_MEM)          , 0, 0x00000FB6, 0),
      MAKE_INST(INST_MOV_PTR          , "mov_ptr"          , G(MOV_PTR)       , F(MOV)|F(SPECIAL), O(GQDWB)            , O(IMM)              , 0, 0         , 0),
      MAKE_INST(INST_MPSADBW          , "mpsadbw"          , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A42, 0),
      MAKE_INST(INST_MUL              , "mul"              , G(RM)            , F(SPECIAL)       , 0                   , 0                   , 4, 0x000000F6, 0),
      MAKE_INST(INST_MULPD            , "mulpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F59, 0),
      MAKE_INST(INST_MULPS            , "mulps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F59, 0),
      MAKE_INST(INST_MULSD            , "mulsd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F59, 0),
      MAKE_INST(INST_MULSS            , "mulss"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F59, 0),
      MAKE_INST(INST_MWAIT            , "mwait"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x000F01C9, 0),
      MAKE_INST(INST_NEG              , "neg"              , G(RM)            , F(LOCKABLE)      , O(GQDWB_MEM)        , 0                   , 3, 0x000000F6, 0),
      MAKE_INST(INST_NOP              , "nop"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x00000090, 0),
      MAKE_INST(INST_NOT              , "not"              , G(RM)            , F(LOCKABLE)      , O(GQDWB_MEM)        , 0                   , 2, 0x000000F6, 0),
      MAKE_INST(INST_OR               , "or"               , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 1, 0x00000008, 0x00000080),
      MAKE_INST(INST_ORPD             , "orpd"             , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F56, 0),
      MAKE_INST(INST_ORPS             , "orps"             , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F56, 0),
      MAKE_INST(INST_PABSB            , "pabsb"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F381C, 0),
      MAKE_INST(INST_PABSD            , "pabsd"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F381E, 0),
      MAKE_INST(INST_PABSW            , "pabsw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F381D, 0),
      MAKE_INST(INST_PACKSSDW         , "packssdw"         , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F6B, 0),
      MAKE_INST(INST_PACKSSWB         , "packsswb"         , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F63, 0),
      MAKE_INST(INST_PACKUSDW         , "packusdw"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F382B, 0),
      MAKE_INST(INST_PACKUSWB         , "packuswb"         , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F67, 0),
      MAKE_INST(INST_PADDB            , "paddb"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FFC, 0),
      MAKE_INST(INST_PADDD            , "paddd"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FFE, 0),
      MAKE_INST(INST_PADDQ            , "paddq"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FD4, 0),
      MAKE_INST(INST_PADDSB           , "paddsb"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FEC, 0),
      MAKE_INST(INST_PADDSW           , "paddsw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FED, 0),
      MAKE_INST(INST_PADDUSB          , "paddusb"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FDC, 0),
      MAKE_INST(INST_PADDUSW          , "paddusw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FDD, 0),
      MAKE_INST(INST_PADDW            , "paddw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FFD, 0),
      MAKE_INST(INST_PALIGNR          , "palignr"          , G(MMU_RM_IMM8)   , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3A0F, 0),
      MAKE_INST(INST_PAND             , "pand"             , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FDB, 0),
      MAKE_INST(INST_PANDN            , "pandn"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FDF, 0),
      MAKE_INST(INST_PAUSE            , "pause"            , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0xF3000090, 0),
      MAKE_INST(INST_PAVGB            , "pavgb"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FE0, 0),
      MAKE_INST(INST_PAVGW            , "pavgw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FE3, 0),
      MAKE_INST(INST_PBLENDVB         , "pblendvb"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3810, 0),
      MAKE_INST(INST_PBLENDW          , "pblendw"          , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A0E, 0),
      MAKE_INST(INST_PCMPEQB          , "pcmpeqb"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F74, 0),
      MAKE_INST(INST_PCMPEQD          , "pcmpeqd"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F76, 0),
      MAKE_INST(INST_PCMPEQQ          , "pcmpeqq"          , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3829, 0),
      MAKE_INST(INST_PCMPEQW          , "pcmpeqw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F75, 0),
      MAKE_INST(INST_PCMPESTRI        , "pcmpestri"        , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A61, 0),
      MAKE_INST(INST_PCMPESTRM        , "pcmpestrm"        , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A60, 0),
      MAKE_INST(INST_PCMPGTB          , "pcmpgtb"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F64, 0),
      MAKE_INST(INST_PCMPGTD          , "pcmpgtd"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F66, 0),
      MAKE_INST(INST_PCMPGTQ          , "pcmpgtq"          , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3837, 0),
      MAKE_INST(INST_PCMPGTW          , "pcmpgtw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F65, 0),
      MAKE_INST(INST_PCMPISTRI        , "pcmpistri"        , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A63, 0),
      MAKE_INST(INST_PCMPISTRM        , "pcmpistrm"        , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A62, 0),
      MAKE_INST(INST_PEXTRB           , "pextrb"           , G(MMU_PEXTR)     , F(NONE)          , O(GD)|O(GB)|O(MEM)  , O(XMM)              , 0, 0x000F3A14, 0),
      MAKE_INST(INST_PEXTRD           , "pextrd"           , G(MMU_PEXTR)     , F(NONE)          , O(GD)      |O(MEM)  , O(XMM)              , 0, 0x000F3A16, 0),
      MAKE_INST(INST_PEXTRQ           , "pextrq"           , G(MMU_PEXTR)     , F(NONE)          , O(GQD)     |O(MEM)  , O(XMM)              , 1, 0x000F3A16, 0),
      MAKE_INST(INST_PEXTRW           , "pextrw"           , G(MMU_PEXTR)     , F(NONE)          , O(GD)      |O(MEM)  , O(XMM) | O(MM)      , 0, 0x000F3A15, 0),
      MAKE_INST(INST_PF2ID            , "pf2id"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x1D),
      MAKE_INST(INST_PF2IW            , "pf2iw"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x1C),
      MAKE_INST(INST_PFACC            , "pfacc"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xAE),
      MAKE_INST(INST_PFADD            , "pfadd"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x9E),
      MAKE_INST(INST_PFCMPEQ          , "pfcmpeq"          , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xB0),
      MAKE_INST(INST_PFCMPGE          , "pfcmpge"          , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x90),
      MAKE_INST(INST_PFCMPGT          , "pfcmpgt"          , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xA0),
      MAKE_INST(INST_PFMAX            , "pfmax"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xA4),
      MAKE_INST(INST_PFMIN            , "pfmin"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x94),
      MAKE_INST(INST_PFMUL            , "pfmul"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xB4),
      MAKE_INST(INST_PFNACC           , "pfnacc"           , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x8A),
      MAKE_INST(INST_PFPNACC          , "pfpnacc"          , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x8E),
      MAKE_INST(INST_PFRCP            , "pfrcp"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x96),
      MAKE_INST(INST_PFRCPIT1         , "pfrcpit1"         , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xA6),
      MAKE_INST(INST_PFRCPIT2         , "pfrcpit2"         , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xB6),
      MAKE_INST(INST_PFRSQIT1         , "pfrsqit1"         , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xA7),
      MAKE_INST(INST_PFRSQRT          , "pfrsqrt"          , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x97),
      MAKE_INST(INST_PFSUB            , "pfsub"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x9A),
      MAKE_INST(INST_PFSUBR           , "pfsubr"           , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xAA),
      MAKE_INST(INST_PHADDD           , "phaddd"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3802, 0),
      MAKE_INST(INST_PHADDSW          , "phaddsw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3803, 0),
      MAKE_INST(INST_PHADDW           , "phaddw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3801, 0),
      MAKE_INST(INST_PHMINPOSUW       , "phminposuw"       , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3841, 0),
      MAKE_INST(INST_PHSUBD           , "phsubd"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3806, 0),
      MAKE_INST(INST_PHSUBSW          , "phsubsw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3807, 0),
      MAKE_INST(INST_PHSUBW           , "phsubw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3805, 0),
      MAKE_INST(INST_PI2FD            , "pi2fd"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x0D),
      MAKE_INST(INST_PI2FW            , "pi2fw"            , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0x0C),
      MAKE_INST(INST_PINSRB           , "pinsrb"           , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(GD) | O(MEM)      , 0, 0x660F3A20, 0),
      MAKE_INST(INST_PINSRD           , "pinsrd"           , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(GD) | O(MEM)      , 0, 0x660F3A22, 0),
      MAKE_INST(INST_PINSRQ           , "pinsrq"           , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(GQ) | O(MEM)      , 0, 0x660F3A22, 0),
      MAKE_INST(INST_PINSRW           , "pinsrw"           , G(MMU_RM_IMM8)   , F(NONE)          , O(MM_XMM)           , O(GD) | O(MEM)      , 0, 0x00000FC4, 0),
      MAKE_INST(INST_PMADDUBSW        , "pmaddubsw"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3804, 0),
      MAKE_INST(INST_PMADDWD          , "pmaddwd"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FF5, 0),
      MAKE_INST(INST_PMAXSB           , "pmaxsb"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F383C, 0),
      MAKE_INST(INST_PMAXSD           , "pmaxsd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F383D, 0),
      MAKE_INST(INST_PMAXSW           , "pmaxsw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FEE, 0),
      MAKE_INST(INST_PMAXUB           , "pmaxub"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FDE, 0),
      MAKE_INST(INST_PMAXUD           , "pmaxud"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F383F, 0),
      MAKE_INST(INST_PMAXUW           , "pmaxuw"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F383E, 0),
      MAKE_INST(INST_PMINSB           , "pminsb"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3838, 0),
      MAKE_INST(INST_PMINSD           , "pminsd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3839, 0),
      MAKE_INST(INST_PMINSW           , "pminsw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FEA, 0),
      MAKE_INST(INST_PMINUB           , "pminub"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FDA, 0),
      MAKE_INST(INST_PMINUD           , "pminud"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F383B, 0),
      MAKE_INST(INST_PMINUW           , "pminuw"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F383A, 0),
      MAKE_INST(INST_PMOVMSKB         , "pmovmskb"         , G(MMU_RMI)       , F(MOV)           , O(GQD)              , O(MM_XMM)           , 0, 0x00000FD7, 0),
      MAKE_INST(INST_PMOVSXBD         , "pmovsxbd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3821, 0),
      MAKE_INST(INST_PMOVSXBQ         , "pmovsxbq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3822, 0),
      MAKE_INST(INST_PMOVSXBW         , "pmovsxbw"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3820, 0),
      MAKE_INST(INST_PMOVSXDQ         , "pmovsxdq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3825, 0),
      MAKE_INST(INST_PMOVSXWD         , "pmovsxwd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3823, 0),
      MAKE_INST(INST_PMOVSXWQ         , "pmovsxwq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3824, 0),
      MAKE_INST(INST_PMOVZXBD         , "pmovzxbd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3831, 0),
      MAKE_INST(INST_PMOVZXBQ         , "pmovzxbq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3832, 0),
      MAKE_INST(INST_PMOVZXBW         , "pmovzxbw"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3830, 0),
      MAKE_INST(INST_PMOVZXDQ         , "pmovzxdq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3835, 0),
      MAKE_INST(INST_PMOVZXWD         , "pmovzxwd"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3833, 0),
      MAKE_INST(INST_PMOVZXWQ         , "pmovzxwq"         , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3834, 0),
      MAKE_INST(INST_PMULDQ           , "pmuldq"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3828, 0),
      MAKE_INST(INST_PMULHRSW         , "pmulhrsw"         , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F380B, 0),
      MAKE_INST(INST_PMULHUW          , "pmulhuw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FE4, 0),
      MAKE_INST(INST_PMULHW           , "pmulhw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FE5, 0),
      MAKE_INST(INST_PMULLD           , "pmulld"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3840, 0),
      MAKE_INST(INST_PMULLW           , "pmullw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FD5, 0),
      MAKE_INST(INST_PMULUDQ          , "pmuludq"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FF4, 0),
      MAKE_INST(INST_POP              , "pop"              , G(POP)           , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000058, 0x0000008F),
      MAKE_INST(INST_POPAD            , "popad"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000061, 0),
      MAKE_INST(INST_POPCNT           , "popcnt"           , G(R_RM)          , F(NONE)          , O(GQDW)             , O(GQDW_MEM)         , 0, 0xF3000FB8, 0),
      MAKE_INST(INST_POPFD            , "popfd"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000009D, 0),
      MAKE_INST(INST_POPFQ            , "popfq"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000009D, 0),
      MAKE_INST(INST_POR              , "por"              , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FEB, 0),
      MAKE_INST(INST_PREFETCH         , "prefetch"         , G(MMU_PREFETCH)  , F(NONE)          , O(MEM)              , O(IMM)              , 0, 0         , 0),
      MAKE_INST(INST_PSADBW           , "psadbw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FF6, 0),
      MAKE_INST(INST_PSHUFB           , "pshufb"           , G(MMU_RMI)       , F(MOV)           , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3800, 0),
      MAKE_INST(INST_PSHUFD           , "pshufd"           , G(MMU_RM_IMM8)   , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F70, 0),
      MAKE_INST(INST_PSHUFW           , "pshufw"           , G(MMU_RM_IMM8)   , F(MOV)           , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F70, 0),
      MAKE_INST(INST_PSHUFHW          , "pshufhw"          , G(MMU_RM_IMM8)   , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F70, 0),
      MAKE_INST(INST_PSHUFLW          , "pshuflw"          , G(MMU_RM_IMM8)   , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F70, 0),
      MAKE_INST(INST_PSIGNB           , "psignb"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3808, 0),
      MAKE_INST(INST_PSIGND           , "psignd"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F380A, 0),
      MAKE_INST(INST_PSIGNW           , "psignw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x000F3809, 0),
      MAKE_INST(INST_PSLLD            , "pslld"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 6, 0x00000FF2, 0x00000F72),
      MAKE_INST(INST_PSLLDQ           , "pslldq"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(IMM)              , 7, 0         , 0x66000F73),
      MAKE_INST(INST_PSLLQ            , "psllq"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 6, 0x00000FF3, 0x00000F73),
      MAKE_INST(INST_PSLLW            , "psllw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 6, 0x00000FF1, 0x00000F71),
      MAKE_INST(INST_PSRAD            , "psrad"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 4, 0x00000FE2, 0x00000F72),
      MAKE_INST(INST_PSRAW            , "psraw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 4, 0x00000FE1, 0x00000F71),
      MAKE_INST(INST_PSRLD            , "psrld"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 2, 0x00000FD2, 0x00000F72),
      MAKE_INST(INST_PSRLDQ           , "psrldq"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(IMM)              , 3, 0         , 0x66000F73),
      MAKE_INST(INST_PSRLQ            , "psrlq"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 2, 0x00000FD3, 0x00000F73),
      MAKE_INST(INST_PSRLW            , "psrlw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)|O(IMM), 2, 0x00000FD1, 0x00000F71),
      MAKE_INST(INST_PSUBB            , "psubb"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FF8, 0),
      MAKE_INST(INST_PSUBD            , "psubd"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FFA, 0),
      MAKE_INST(INST_PSUBQ            , "psubq"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FFB, 0),
      MAKE_INST(INST_PSUBSB           , "psubsb"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FE8, 0),
      MAKE_INST(INST_PSUBSW           , "psubsw"           , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FE9, 0),
      MAKE_INST(INST_PSUBUSB          , "psubusb"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FD8, 0),
      MAKE_INST(INST_PSUBUSW          , "psubusw"          , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FD9, 0),
      MAKE_INST(INST_PSUBW            , "psubw"            , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FF9, 0),
      MAKE_INST(INST_PSWAPD           , "pswapd"           , G(MMU_RM_3DNOW)  , F(NONE)          , O(MM)               , O(MM_MEM)           , 0, 0x00000F0F, 0xBB),
      MAKE_INST(INST_PTEST            , "ptest"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3817, 0),
      MAKE_INST(INST_PUNPCKHBW        , "punpckhbw"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F68, 0),
      MAKE_INST(INST_PUNPCKHDQ        , "punpckhdq"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F6A, 0),
      MAKE_INST(INST_PUNPCKHQDQ       , "punpckhqdq"       , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F6D, 0),
      MAKE_INST(INST_PUNPCKHWD        , "punpckhwd"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F69, 0),
      MAKE_INST(INST_PUNPCKLBW        , "punpcklbw"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F60, 0),
      MAKE_INST(INST_PUNPCKLDQ        , "punpckldq"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F62, 0),
      MAKE_INST(INST_PUNPCKLQDQ       , "punpcklqdq"       , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F6C, 0),
      MAKE_INST(INST_PUNPCKLWD        , "punpcklwd"        , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000F61, 0),
      MAKE_INST(INST_PUSH             , "push"             , G(PUSH)          , F(SPECIAL)       , 0                   , 0                   , 6, 0x00000050, 0x000000FF),
      MAKE_INST(INST_PUSHAD           , "pushad"           , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000060, 0),
      MAKE_INST(INST_PUSHFD           , "pushfd"           , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000009C, 0),
      MAKE_INST(INST_PUSHFQ           , "pushfq"           , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000009C, 0),
      MAKE_INST(INST_PXOR             , "pxor"             , G(MMU_RMI)       , F(NONE)          , O(MM_XMM)           , O(MM_XMM_MEM)       , 0, 0x00000FEF, 0),
      MAKE_INST(INST_RCL              , "rcl"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 2, 0         , 0),
      MAKE_INST(INST_RCPPS            , "rcpps"            , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F53, 0),
      MAKE_INST(INST_RCPSS            , "rcpss"            , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F53, 0),
      MAKE_INST(INST_RCR              , "rcr"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 3, 0         , 0),
      MAKE_INST(INST_RDTSC            , "rdtsc"            , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x00000F31, 0),
      MAKE_INST(INST_RDTSCP           , "rdtscp"           , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x000F01F9, 0),
      MAKE_INST(INST_REP_LODSB        , "rep lodsb"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AC, 1 /* Size of mem */),
      MAKE_INST(INST_REP_LODSD        , "rep lodsd"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AC, 4 /* Size of mem */),
      MAKE_INST(INST_REP_LODSQ        , "rep lodsq"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AC, 8 /* Size of mem */),
      MAKE_INST(INST_REP_LODSW        , "rep lodsw"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AC, 2 /* Size of mem */),
      MAKE_INST(INST_REP_MOVSB        , "rep movsb"        , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A4, 1 /* Size of mem */),
      MAKE_INST(INST_REP_MOVSD        , "rep movsd"        , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A4, 4 /* Size of mem */),
      MAKE_INST(INST_REP_MOVSQ        , "rep movsq"        , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A4, 8 /* Size of mem */),
      MAKE_INST(INST_REP_MOVSW        , "rep movsw"        , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A4, 2 /* Size of mem */),
      MAKE_INST(INST_REP_STOSB        , "rep stosb"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AA, 1 /* Size of mem */),
      MAKE_INST(INST_REP_STOSD        , "rep stosd"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AA, 4 /* Size of mem */),
      MAKE_INST(INST_REP_STOSQ        , "rep stosq"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AA, 8 /* Size of mem */),
      MAKE_INST(INST_REP_STOSW        , "rep stosw"        , G(REP)           , F(SPECIAL)       , O(MEM)              , 0                   , 0, 0xF30000AA, 2 /* Size of mem */),
      MAKE_INST(INST_REPE_CMPSB       , "repe cmpsb"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A6, 1 /* Size of mem */),
      MAKE_INST(INST_REPE_CMPSD       , "repe cmpsd"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A6, 4 /* Size of mem */),
      MAKE_INST(INST_REPE_CMPSQ       , "repe cmpsq"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A6, 8 /* Size of mem */),
      MAKE_INST(INST_REPE_CMPSW       , "repe cmpsw"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000A6, 2 /* Size of mem */),
      MAKE_INST(INST_REPE_SCASB       , "repe scasb"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000AE, 1 /* Size of mem */),
      MAKE_INST(INST_REPE_SCASD       , "repe scasd"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000AE, 4 /* Size of mem */),
      MAKE_INST(INST_REPE_SCASQ       , "repe scasq"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000AE, 8 /* Size of mem */),
      MAKE_INST(INST_REPE_SCASW       , "repe scasw"       , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF30000AE, 2 /* Size of mem */),
      MAKE_INST(INST_REPNE_CMPSB      , "repne cmpsb"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000A6, 1 /* Size of mem */),
      MAKE_INST(INST_REPNE_CMPSD      , "repne cmpsd"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000A6, 4 /* Size of mem */),
      MAKE_INST(INST_REPNE_CMPSQ      , "repne cmpsq"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000A6, 8 /* Size of mem */),
      MAKE_INST(INST_REPNE_CMPSW      , "repne cmpsw"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000A6, 2 /* Size of mem */),
      MAKE_INST(INST_REPNE_SCASB      , "repne scasb"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000AE, 1 /* Size of mem */),
      MAKE_INST(INST_REPNE_SCASD      , "repne scasd"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000AE, 4 /* Size of mem */),
      MAKE_INST(INST_REPNE_SCASQ      , "repne scasq"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000AE, 8 /* Size of mem */),
      MAKE_INST(INST_REPNE_SCASW      , "repne scasw"      , G(REP)           , F(SPECIAL)       , O(MEM)              , O(MEM)              , 0, 0xF20000AE, 2 /* Size of mem */),
      MAKE_INST(INST_RET              , "ret"              , G(RET)           , F(SPECIAL)       , 0                   , 0                   , 0, 0         , 0),
      MAKE_INST(INST_ROL              , "rol"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 0, 0         , 0),
      MAKE_INST(INST_ROR              , "ror"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 1, 0         , 0),
      MAKE_INST(INST_ROUNDPD          , "roundpd"          , G(MMU_RM_IMM8)   , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A09, 0),
      MAKE_INST(INST_ROUNDPS          , "roundps"          , G(MMU_RM_IMM8)   , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A08, 0),
      MAKE_INST(INST_ROUNDSD          , "roundsd"          , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A0B, 0),
      MAKE_INST(INST_ROUNDSS          , "roundss"          , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x660F3A0A, 0),
      MAKE_INST(INST_RSQRTPS          , "rsqrtps"          , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F52, 0),
      MAKE_INST(INST_RSQRTSS          , "rsqrtss"          , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F52, 0),
      MAKE_INST(INST_SAHF             , "sahf"             , G(EMIT)          , F(SPECIAL)       , 0                   , 0                   , 0, 0x0000009E, 0),
      MAKE_INST(INST_SAL              , "sal"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 4, 0         , 0),
      MAKE_INST(INST_SAR              , "sar"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 7, 0         , 0),
      MAKE_INST(INST_SBB              , "sbb"              , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 3, 0x00000018, 0x00000080),
      MAKE_INST(INST_SETA             , "seta"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F97, 0),
      MAKE_INST(INST_SETAE            , "setae"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F93, 0),
      MAKE_INST(INST_SETB             , "setb"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F92, 0),
      MAKE_INST(INST_SETBE            , "setbe"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F96, 0),
      MAKE_INST(INST_SETC             , "setc"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F92, 0),
      MAKE_INST(INST_SETE             , "sete"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F94, 0),
      MAKE_INST(INST_SETG             , "setg"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9F, 0),
      MAKE_INST(INST_SETGE            , "setge"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9D, 0),
      MAKE_INST(INST_SETL             , "setl"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9C, 0),
      MAKE_INST(INST_SETLE            , "setle"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9E, 0),
      MAKE_INST(INST_SETNA            , "setna"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F96, 0),
      MAKE_INST(INST_SETNAE           , "setnae"           , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F92, 0),
      MAKE_INST(INST_SETNB            , "setnb"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F93, 0),
      MAKE_INST(INST_SETNBE           , "setnbe"           , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F97, 0),
      MAKE_INST(INST_SETNC            , "setnc"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F93, 0),
      MAKE_INST(INST_SETNE            , "setne"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F95, 0),
      MAKE_INST(INST_SETNG            , "setng"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9E, 0),
      MAKE_INST(INST_SETNGE           , "setnge"           , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9C, 0),
      MAKE_INST(INST_SETNL            , "setnl"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9D, 0),
      MAKE_INST(INST_SETNLE           , "setnle"           , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9F, 0),
      MAKE_INST(INST_SETNO            , "setno"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F91, 0),
      MAKE_INST(INST_SETNP            , "setnp"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9B, 0),
      MAKE_INST(INST_SETNS            , "setns"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F99, 0),
      MAKE_INST(INST_SETNZ            , "setnz"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F95, 0),
      MAKE_INST(INST_SETO             , "seto"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F90, 0),
      MAKE_INST(INST_SETP             , "setp"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9A, 0),
      MAKE_INST(INST_SETPE            , "setpe"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9A, 0),
      MAKE_INST(INST_SETPO            , "setpo"            , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F9B, 0),
      MAKE_INST(INST_SETS             , "sets"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F98, 0),
      MAKE_INST(INST_SETZ             , "setz"             , G(RM_B)          , F(NONE)          , O(GB_MEM)           , 0                   , 0, 0x00000F94, 0),
      MAKE_INST(INST_SFENCE           , "sfence"           , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000FAEF8, 0),
      MAKE_INST(INST_SHL              , "shl"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 4, 0         , 0),
      MAKE_INST(INST_SHLD             , "shld"             , G(SHLD_SHRD)     , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)               , 0, 0x00000FA4, 0),
      MAKE_INST(INST_SHR              , "shr"              , G(ROT)           , F(SPECIAL)       , O(GQDWB_MEM)        , O(GB)|O(IMM)        , 5, 0         , 0),
      MAKE_INST(INST_SHRD             , "shrd"             , G(SHLD_SHRD)     , F(SPECIAL)       , O(GQDWB_MEM)        , O(GQDWB)            , 0, 0x00000FAC, 0),
      MAKE_INST(INST_SHUFPD           , "shufpd"           , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000FC6, 0),
      MAKE_INST(INST_SHUFPS           , "shufps"           , G(MMU_RM_IMM8)   , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000FC6, 0),
      MAKE_INST(INST_SQRTPD           , "sqrtpd"           , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F51, 0),
      MAKE_INST(INST_SQRTPS           , "sqrtps"           , G(MMU_RMI)       , F(MOV)           , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F51, 0),
      MAKE_INST(INST_SQRTSD           , "sqrtsd"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F51, 0),
      MAKE_INST(INST_SQRTSS           , "sqrtss"           , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F51, 0),
      MAKE_INST(INST_STC              , "stc"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000000F9, 0),
      MAKE_INST(INST_STD              , "std"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x000000FD, 0),
      MAKE_INST(INST_STMXCSR          , "stmxcsr"          , G(M)             , F(NONE)          , O(MEM)              , 0                   , 3, 0x00000FAE, 0),
      MAKE_INST(INST_SUB              , "sub"              , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 5, 0x00000028, 0x00000080),
      MAKE_INST(INST_SUBPD            , "subpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F5C, 0),
      MAKE_INST(INST_SUBPS            , "subps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F5C, 0),
      MAKE_INST(INST_SUBSD            , "subsd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF2000F5C, 0),
      MAKE_INST(INST_SUBSS            , "subss"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0xF3000F5C, 0),
      MAKE_INST(INST_TEST             , "test"             , G(TEST)          , F(NONE)          , O(GQDWB_MEM)        , O(GQDWB)|O(IMM)     , 0, 0         , 0),
      MAKE_INST(INST_UCOMISD          , "ucomisd"          , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F2E, 0),
      MAKE_INST(INST_UCOMISS          , "ucomiss"          , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F2E, 0),
      MAKE_INST(INST_UD2              , "ud2"              , G(EMIT)          , F(NONE)          , 0                   , 0                   , 0, 0x00000F0B, 0),
      MAKE_INST(INST_UNPCKHPD         , "unpckhpd"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F15, 0),
      MAKE_INST(INST_UNPCKHPS         , "unpckhps"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F15, 0),
      MAKE_INST(INST_UNPCKLPD         , "unpcklpd"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F14, 0),
      MAKE_INST(INST_UNPCKLPS         , "unpcklps"         , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F14, 0),
      MAKE_INST(INST_XADD             , "xadd"             , G(RM_R)          , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB)            , 0, 0x00000FC0, 0),
      MAKE_INST(INST_XCHG             , "xchg"             , G(XCHG)          , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB)            , 0, 0         , 0),
      MAKE_INST(INST_XOR              , "xor"              , G(ALU)           , F(LOCKABLE)      , O(GQDWB_MEM)        , O(GQDWB_MEM)|O(IMM) , 6, 0x00000030, 0x00000080),
      MAKE_INST(INST_XORPD            , "xorpd"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x66000F57, 0),
      MAKE_INST(INST_XORPS            , "xorps"            , G(MMU_RMI)       , F(NONE)          , O(XMM)              , O(XMM_MEM)          , 0, 0x00000F57, 0)
   };

#undef G
#undef F
#undef O

#undef MAKE_INST
   /// Instruction
   struct Instr
   {
      //static const size_t _maxOperandCount = 6;
      EInstrID _instrId; ///< Instruction ID
      boost::uint32_t _opcode; ///< Opcode
      boost::uint32_t _encodingFlags; ///< EncodingFlags
      //register_details::Operand _operand[_maxOperandCount]; ///< Operands

      Instr(const EInstrID id,const boost::uint32_t opcode, boost::uint32_t encodinkInsGrpflag
         /*            ,const register_details::Operand& opd1 = register_details::Operand(), const register_details::Operand& opd2 = register_details::Operand()
         ,const register_details::Operand& opd3 = register_details::Operand(), const register_details::Operand& opd4 = register_details::Operand()
         ,const register_details::Operand& opd5 = register_details::Operand(), const register_details::Operand& opd6 = register_details::Operand()*/)
         :_instrId(id), _opcode(opcode), _encodingFlags(encodinkInsGrpflag) 
      {
         //_operand[0] = opd1;
         //_operand[1] = opd2;
         //_operand[2] = opd3;
         //_operand[3] = opd4;
         //_operand[4] = opd5;
         //_operand[5] = opd6;
      }

      EInstrID instrId()const
      {
         return _instrId;
      }
      boost::uint32_t opcode()const
      {
         return _opcode;
      }

      boost::uint32_t encodingFlags()const
      {
         return _encodingFlags;
      }
      //const register_details::Operand& GetOpd(size_t index) const {return opd_[index];}
      //register_details::Operand& GetOpd(size_t index) {return opd_[index];}
   };

}  // instruction_details
}  // namespace odra
}  // namespace blib

#endif// __BLIB_INSTRUCTIONDETAILS_INCLUDED__
