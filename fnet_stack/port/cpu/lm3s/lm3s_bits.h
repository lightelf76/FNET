#ifndef __H_BITS_LM3S__
#define __H_BITS_LM3S__

//**************************************************************************************************
// SYSCTL
//**************************************************************************************************
#define SYSCTL_DID0_VER_M              0x70000000  // DID0 Version
#define SYSCTL_DID0_VER_0              0x00000000  // Initial DID0 register format for Sandstorm
#define SYSCTL_DID0_VER_1              0x10000000  // Second version of the DID0 register format
#define SYSCTL_DID0_CLASS_M            0x00FF0000  // Device Class
#define SYSCTL_DID0_CLASS_SANDSTORM    0x00000000  // Sandstorm-class Device
#define SYSCTL_DID0_CLASS_FURY         0x00010000  // Stellaris(R) Fury-class devices
#define SYSCTL_DID0_CLASS_DUSTDEVIL    0x00030000  // Stellaris(R) DustDevil-class devices
#define SYSCTL_DID0_CLASS_TEMPEST      0x00040000  // Stellaris(R) Tempest-class microcontrollers
#define SYSCTL_DID0_CLASS_BLIZZARD     0x00050000  // Stellaris(R) Blizzard-class microcontrollers
#define SYSCTL_DID0_CLASS_FIRESTORM    0x00060000  // Stellaris(R) Firestorm-class microcontrollers
#define SYSCTL_DID0_MAJ_M              0x0000FF00  // Major Revision
#define SYSCTL_DID0_MAJ_REVA           0x00000000  // Revision A (initial device)
#define SYSCTL_DID0_MAJ_REVB           0x00000100  // Revision B (first base layer revision)
#define SYSCTL_DID0_MAJ_REVC           0x00000200  // Revision C (second base layer revision)
#define SYSCTL_DID0_MIN_M              0x000000FF  // Minor Revision
#define SYSCTL_DID0_MIN_0              0x00000000  // Initial device, or a major revision update
#define SYSCTL_DID0_MIN_1              0x00000001  // First metal layer change
#define SYSCTL_DID0_MIN_2              0x00000002  // Second metal layer change
#define SYSCTL_DID0_MIN_3              0x00000003  // Minor revision 3
#define SYSCTL_DID0_MIN_4              0x00000004  // Minor revision 4
#define SYSCTL_DID0_MIN_5              0x00000005  // Minor revision 5

#define SYSCTL_DID1_VER_M              0xF0000000  // DID1 Version
#define SYSCTL_DID1_VER_0              0x00000000  // Initial DID1 register format, Stellaris LM3Snnn device
#define SYSCTL_DID1_VER_1              0x10000000  // Second version of the DID1 register format
#define SYSCTL_DID1_FAM_M              0x0F000000  // Family
#define SYSCTL_DID1_FAM_STELLARIS      0x00000000  // Stellaris family of microcontollers
#define SYSCTL_DID1_PRTNO_M            0x00FF0000  // Part Number
#define SYSCTL_DID1_PRTNO_M            0x00FF0000  // Part Number
#define SYSCTL_DID1_PRTNO_101          0x00010000  // LM3S101
#define SYSCTL_DID1_PRTNO_102          0x00020000  // LM3S102
#define SYSCTL_DID1_PRTNO_300          0x00190000  // LM3S300
#define SYSCTL_DID1_PRTNO_301          0x00110000  // LM3S301
#define SYSCTL_DID1_PRTNO_308          0x001A0000  // LM3S308
#define SYSCTL_DID1_PRTNO_310          0x00120000  // LM3S310
#define SYSCTL_DID1_PRTNO_315          0x00130000  // LM3S315
#define SYSCTL_DID1_PRTNO_316          0x00140000  // LM3S316
#define SYSCTL_DID1_PRTNO_317          0x00170000  // LM3S317
#define SYSCTL_DID1_PRTNO_328          0x00150000  // LM3S328
#define SYSCTL_DID1_PRTNO_600          0x002A0000  // LM3S600
#define SYSCTL_DID1_PRTNO_601          0x00210000  // LM3S601
#define SYSCTL_DID1_PRTNO_608          0x002B0000  // LM3S608
#define SYSCTL_DID1_PRTNO_610          0x00220000  // LM3S610
#define SYSCTL_DID1_PRTNO_611          0x00230000  // LM3S611
#define SYSCTL_DID1_PRTNO_612          0x00240000  // LM3S612
#define SYSCTL_DID1_PRTNO_613          0x00250000  // LM3S613
#define SYSCTL_DID1_PRTNO_615          0x00260000  // LM3S615
#define SYSCTL_DID1_PRTNO_617          0x00280000  // LM3S617
#define SYSCTL_DID1_PRTNO_618          0x00290000  // LM3S618
#define SYSCTL_DID1_PRTNO_628          0x00270000  // LM3S628
#define SYSCTL_DID1_PRTNO_800          0x00380000  // LM3S800
#define SYSCTL_DID1_PRTNO_801          0x00310000  // LM3S801
#define SYSCTL_DID1_PRTNO_808          0x00390000  // LM3S808
#define SYSCTL_DID1_PRTNO_811          0x00320000  // LM3S811
#define SYSCTL_DID1_PRTNO_812          0x00330000  // LM3S812
#define SYSCTL_DID1_PRTNO_815          0x00340000  // LM3S815
#define SYSCTL_DID1_PRTNO_817          0x00360000  // LM3S817
#define SYSCTL_DID1_PRTNO_818          0x00370000  // LM3S818
#define SYSCTL_DID1_PRTNO_828          0x00350000  // LM3S828
#define SYSCTL_DID1_PRTNO_1110         0x00BF0000  // LM3S1110
#define SYSCTL_DID1_PRTNO_1133         0x00C30000  // LM3S1133
#define SYSCTL_DID1_PRTNO_1138         0x00C50000  // LM3S1138
#define SYSCTL_DID1_PRTNO_1150         0x00C10000  // LM3S1150
#define SYSCTL_DID1_PRTNO_1162         0x00C40000  // LM3S1162
#define SYSCTL_DID1_PRTNO_1165         0x00C20000  // LM3S1165
#define SYSCTL_DID1_PRTNO_1166         0x00EC0000  // LM3S1166
#define SYSCTL_DID1_PRTNO_1332         0x00C60000  // LM3S1332
#define SYSCTL_DID1_PRTNO_1435         0x00BC0000  // LM3S1435
#define SYSCTL_DID1_PRTNO_1439         0x00BA0000  // LM3S1439
#define SYSCTL_DID1_PRTNO_1512         0x00BB0000  // LM3S1512
#define SYSCTL_DID1_PRTNO_1538         0x00C70000  // LM3S1538
#define SYSCTL_DID1_PRTNO_1601         0x00DB0000  // LM3S1601
#define SYSCTL_DID1_PRTNO_1607         0x00060000  // LM3S1607
#define SYSCTL_DID1_PRTNO_1608         0x00DA0000  // LM3S1608
#define SYSCTL_DID1_PRTNO_1620         0x00C00000  // LM3S1620
#define SYSCTL_DID1_PRTNO_1621         0x00CD0000  // LM3S1621
#define SYSCTL_DID1_PRTNO_1625         0x00030000  // LM3S1625
#define SYSCTL_DID1_PRTNO_1626         0x00040000  // LM3S1626
#define SYSCTL_DID1_PRTNO_1627         0x00050000  // LM3S1627
#define SYSCTL_DID1_PRTNO_1635         0x00B30000  // LM3S1635
#define SYSCTL_DID1_PRTNO_1636         0x00EB0000  // LM3S1636
#define SYSCTL_DID1_PRTNO_1637         0x00BD0000  // LM3S1637
#define SYSCTL_DID1_PRTNO_1651         0x00B10000  // LM3S1651
#define SYSCTL_DID1_PRTNO_1751         0x00B90000  // LM3S1751
#define SYSCTL_DID1_PRTNO_1776         0x00100000  // LM3S1776
#define SYSCTL_DID1_PRTNO_1811         0x00160000  // LM3S1811
#define SYSCTL_DID1_PRTNO_1816         0x003D0000  // LM3S1816
#define SYSCTL_DID1_PRTNO_1850         0x00B40000  // LM3S1850
#define SYSCTL_DID1_PRTNO_1911         0x00DD0000  // LM3S1911
#define SYSCTL_DID1_PRTNO_1918         0x00DC0000  // LM3S1918
#define SYSCTL_DID1_PRTNO_1937         0x00B70000  // LM3S1937
#define SYSCTL_DID1_PRTNO_1958         0x00BE0000  // LM3S1958
#define SYSCTL_DID1_PRTNO_1960         0x00B50000  // LM3S1960
#define SYSCTL_DID1_PRTNO_1968         0x00B80000  // LM3S1968
#define SYSCTL_DID1_PRTNO_1969         0x00EA0000  // LM3S1969
#define SYSCTL_DID1_PRTNO_1B21         0x00CE0000  // LM3S1B21
#define SYSCTL_DID1_PRTNO_1C21         0x00CA0000  // LM3S1C21
#define SYSCTL_DID1_PRTNO_1C26         0x00CB0000  // LM3S1C26
#define SYSCTL_DID1_PRTNO_1C58         0x00980000  // LM3S1C58
#define SYSCTL_DID1_PRTNO_1D21         0x00B00000  // LM3S1D21
#define SYSCTL_DID1_PRTNO_1D26         0x00CC0000  // LM3S1D26
#define SYSCTL_DID1_PRTNO_1F11         0x001D0000  // LM3S1F11
#define SYSCTL_DID1_PRTNO_1F16         0x001B0000  // LM3S1F16
#define SYSCTL_DID1_PRTNO_1G21         0x00AF0000  // LM3S1G21
#define SYSCTL_DID1_PRTNO_1G58         0x00950000  // LM3S1G58
#define SYSCTL_DID1_PRTNO_1H11         0x001E0000  // LM3S1H11
#define SYSCTL_DID1_PRTNO_1H16         0x001C0000  // LM3S1H16
#define SYSCTL_DID1_PRTNO_1J11         0x000F0000  // LM3S1J11
#define SYSCTL_DID1_PRTNO_1J16         0x003C0000  // LM3S1J16
#define SYSCTL_DID1_PRTNO_1N11         0x000E0000  // LM3S1N11
#define SYSCTL_DID1_PRTNO_1N16         0x003B0000  // LM3S1N16
#define SYSCTL_DID1_PRTNO_1P51         0x00B20000  // LM3S1P51
#define SYSCTL_DID1_PRTNO_1R21         0x009E0000  // LM3S1R21
#define SYSCTL_DID1_PRTNO_1R26         0x00C90000  // LM3S1R26
#define SYSCTL_DID1_PRTNO_1W16         0x00300000  // LM3S1W16
#define SYSCTL_DID1_PRTNO_1Z16         0x002F0000  // LM3S1Z16
#define SYSCTL_DID1_PRTNO_2016         0x00D40000  // LM3S2016
#define SYSCTL_DID1_PRTNO_2110         0x00510000  // LM3S2110
#define SYSCTL_DID1_PRTNO_2139         0x00840000  // LM3S2139
#define SYSCTL_DID1_PRTNO_2276         0x00390000  // LM3S2276
#define SYSCTL_DID1_PRTNO_2410         0x00A20000  // LM3S2410
#define SYSCTL_DID1_PRTNO_2412         0x00590000  // LM3S2412
#define SYSCTL_DID1_PRTNO_2432         0x00560000  // LM3S2432
#define SYSCTL_DID1_PRTNO_2533         0x005A0000  // LM3S2533
#define SYSCTL_DID1_PRTNO_2601         0x00E10000  // LM3S2601
#define SYSCTL_DID1_PRTNO_2608         0x00E00000  // LM3S2608
#define SYSCTL_DID1_PRTNO_2616         0x00330000  // LM3S2616
#define SYSCTL_DID1_PRTNO_2620         0x00570000  // LM3S2620
#define SYSCTL_DID1_PRTNO_2637         0x00850000  // LM3S2637
#define SYSCTL_DID1_PRTNO_2651         0x00530000  // LM3S2651
#define SYSCTL_DID1_PRTNO_2671         0x00800000  // LM3S2671
#define SYSCTL_DID1_PRTNO_2678         0x00500000  // LM3S2678
#define SYSCTL_DID1_PRTNO_2730         0x00A40000  // LM3S2730
#define SYSCTL_DID1_PRTNO_2739         0x00520000  // LM3S2739
#define SYSCTL_DID1_PRTNO_2776         0x003A0000  // LM3S2776
#define SYSCTL_DID1_PRTNO_2793         0x006D0000  // LM3S2793
#define SYSCTL_DID1_PRTNO_2911         0x00E30000  // LM3S2911
#define SYSCTL_DID1_PRTNO_2918         0x00E20000  // LM3S2918
#define SYSCTL_DID1_PRTNO_2919         0x00ED0000  // LM3S2919
#define SYSCTL_DID1_PRTNO_2939         0x00540000  // LM3S2939
#define SYSCTL_DID1_PRTNO_2948         0x008F0000  // LM3S2948
#define SYSCTL_DID1_PRTNO_2950         0x00580000  // LM3S2950
#define SYSCTL_DID1_PRTNO_2965         0x00550000  // LM3S2965
#define SYSCTL_DID1_PRTNO_2B93         0x006C0000  // LM3S2B93
#define SYSCTL_DID1_PRTNO_2D93         0x00940000  // LM3S2D93
#define SYSCTL_DID1_PRTNO_2U93         0x00930000  // LM3S2U93
#define SYSCTL_DID1_PRTNO_3634         0x00080000  // LM3S3634
#define SYSCTL_DID1_PRTNO_3651         0x00430000  // LM3S3651
#define SYSCTL_DID1_PRTNO_3654         0x00C80000  // LM3S3654
#define SYSCTL_DID1_PRTNO_3739         0x00440000  // LM3S3739
#define SYSCTL_DID1_PRTNO_3748         0x00490000  // LM3S3748
#define SYSCTL_DID1_PRTNO_3749         0x00450000  // LM3S3749
#define SYSCTL_DID1_PRTNO_3826         0x00420000  // LM3S3826
#define SYSCTL_DID1_PRTNO_3J26         0x00410000  // LM3S3J26
#define SYSCTL_DID1_PRTNO_3N26         0x00400000  // LM3S3N26
#define SYSCTL_DID1_PRTNO_3W26         0x003F0000  // LM3S3W26
#define SYSCTL_DID1_PRTNO_3Z26         0x003E0000  // LM3S3Z26
#define SYSCTL_DID1_PRTNO_5632         0x00810000  // LM3S5632
#define SYSCTL_DID1_PRTNO_5651         0x000C0000  // LM3S5651
#define SYSCTL_DID1_PRTNO_5652         0x008A0000  // LM3S5652
#define SYSCTL_DID1_PRTNO_5656         0x004D0000  // LM3S5656
#define SYSCTL_DID1_PRTNO_5662         0x00910000  // LM3S5662
#define SYSCTL_DID1_PRTNO_5732         0x00960000  // LM3S5732
#define SYSCTL_DID1_PRTNO_5737         0x00970000  // LM3S5737
#define SYSCTL_DID1_PRTNO_5739         0x00A00000  // LM3S5739
#define SYSCTL_DID1_PRTNO_5747         0x00990000  // LM3S5747
#define SYSCTL_DID1_PRTNO_5749         0x00A70000  // LM3S5749
#define SYSCTL_DID1_PRTNO_5752         0x009A0000  // LM3S5752
#define SYSCTL_DID1_PRTNO_5762         0x009C0000  // LM3S5762
#define SYSCTL_DID1_PRTNO_5791         0x00690000  // LM3S5791
#define SYSCTL_DID1_PRTNO_5951         0x000B0000  // LM3S5951
#define SYSCTL_DID1_PRTNO_5956         0x004E0000  // LM3S5956
#define SYSCTL_DID1_PRTNO_5B91         0x00680000  // LM3S5B91
#define SYSCTL_DID1_PRTNO_5C31         0x002E0000  // LM3S5C31
#define SYSCTL_DID1_PRTNO_5C36         0x002C0000  // LM3S5C36
#define SYSCTL_DID1_PRTNO_5C51         0x005E0000  // LM3S5C51
#define SYSCTL_DID1_PRTNO_5C56         0x005B0000  // LM3S5C56
#define SYSCTL_DID1_PRTNO_5D51         0x005F0000  // LM3S5D51
#define SYSCTL_DID1_PRTNO_5D56         0x005C0000  // LM3S5D56
#define SYSCTL_DID1_PRTNO_5D91         0x00870000  // LM3S5D91
#define SYSCTL_DID1_PRTNO_5G31         0x002D0000  // LM3S5G31
#define SYSCTL_DID1_PRTNO_5G36         0x001F0000  // LM3S5G36
#define SYSCTL_DID1_PRTNO_5G51         0x005D0000  // LM3S5G51
#define SYSCTL_DID1_PRTNO_5G56         0x004F0000  // LM3S5G56
#define SYSCTL_DID1_PRTNO_5K31         0x00090000  // LM3S5K31
#define SYSCTL_DID1_PRTNO_5K36         0x004A0000  // LM3S5K36
#define SYSCTL_DID1_PRTNO_5P31         0x000A0000  // LM3S5P31
#define SYSCTL_DID1_PRTNO_5P36         0x00480000  // LM3S5P36
#define SYSCTL_DID1_PRTNO_5P3B         0x00B60000  // LM3S5P3B
#define SYSCTL_DID1_PRTNO_5P51         0x000D0000  // LM3S5P51
#define SYSCTL_DID1_PRTNO_5P56         0x004C0000  // LM3S5P56
#define SYSCTL_DID1_PRTNO_5R31         0x00070000  // LM3S5R31
#define SYSCTL_DID1_PRTNO_5R36         0x004B0000  // LM3S5R36
#define SYSCTL_DID1_PRTNO_5T36         0x00470000  // LM3S5T36
#define SYSCTL_DID1_PRTNO_5U91         0x007F0000  // LM3S5U91
#define SYSCTL_DID1_PRTNO_5Y36         0x00460000  // LM3S5Y36
#define SYSCTL_DID1_PRTNO_6100         0x00A10000  // LM3S6100
#define SYSCTL_DID1_PRTNO_6110         0x00740000  // LM3S6110
#define SYSCTL_DID1_PRTNO_6420         0x00A50000  // LM3S6420
#define SYSCTL_DID1_PRTNO_6422         0x00820000  // LM3S6422
#define SYSCTL_DID1_PRTNO_6432         0x00750000  // LM3S6432
#define SYSCTL_DID1_PRTNO_6537         0x00760000  // LM3S6537
#define SYSCTL_DID1_PRTNO_6610         0x00710000  // LM3S6610
#define SYSCTL_DID1_PRTNO_6611         0x00E70000  // LM3S6611
#define SYSCTL_DID1_PRTNO_6618         0x00E60000  // LM3S6618
#define SYSCTL_DID1_PRTNO_6633         0x00830000  // LM3S6633
#define SYSCTL_DID1_PRTNO_6637         0x008B0000  // LM3S6637
#define SYSCTL_DID1_PRTNO_6730         0x00A30000  // LM3S6730
#define SYSCTL_DID1_PRTNO_6753         0x00770000  // LM3S6753
#define SYSCTL_DID1_PRTNO_6816         0x00D10000  // LM3S6816
#define SYSCTL_DID1_PRTNO_6911         0x00E90000  // LM3S6911
#define SYSCTL_DID1_PRTNO_6916         0x00D30000  // LM3S6916
#define SYSCTL_DID1_PRTNO_6918         0x00E80000  // LM3S6918
#define SYSCTL_DID1_PRTNO_6938         0x00890000  // LM3S6938
#define SYSCTL_DID1_PRTNO_6950         0x00720000  // LM3S6950
#define SYSCTL_DID1_PRTNO_6952         0x00780000  // LM3S6952
#define SYSCTL_DID1_PRTNO_6965         0x00730000  // LM3S6965
#define SYSCTL_DID1_PRTNO_6C11         0x00AA0000  // LM3S6C11
#define SYSCTL_DID1_PRTNO_6C65         0x00AC0000  // LM3S6C65
#define SYSCTL_DID1_PRTNO_6G11         0x009F0000  // LM3S6G11
#define SYSCTL_DID1_PRTNO_6G65         0x00AB0000  // LM3S6G65
#define SYSCTL_DID1_PRTNO_8530         0x00640000  // LM3S8530
#define SYSCTL_DID1_PRTNO_8538         0x008E0000  // LM3S8538
#define SYSCTL_DID1_PRTNO_8630         0x00610000  // LM3S8630
#define SYSCTL_DID1_PRTNO_8730         0x00630000  // LM3S8730
#define SYSCTL_DID1_PRTNO_8733         0x008D0000  // LM3S8733
#define SYSCTL_DID1_PRTNO_8738         0x00860000  // LM3S8738
#define SYSCTL_DID1_PRTNO_8930         0x00650000  // LM3S8930
#define SYSCTL_DID1_PRTNO_8933         0x008C0000  // LM3S8933
#define SYSCTL_DID1_PRTNO_8938         0x00880000  // LM3S8938
#define SYSCTL_DID1_PRTNO_8962         0x00A60000  // LM3S8962
#define SYSCTL_DID1_PRTNO_8970         0x00620000  // LM3S8970
#define SYSCTL_DID1_PRTNO_8971         0x00D70000  // LM3S8971
#define SYSCTL_DID1_PRTNO_8C62         0x00AE0000  // LM3S8C62
#define SYSCTL_DID1_PRTNO_8G62         0x00AD0000  // LM3S8G62
#define SYSCTL_DID1_PRTNO_9781         0x00CF0000  // LM3S9781
#define SYSCTL_DID1_PRTNO_9790         0x00670000  // LM3S9790
#define SYSCTL_DID1_PRTNO_9792         0x006B0000  // LM3S9792
#define SYSCTL_DID1_PRTNO_9971         0x002D0000  // LM3S9971
#define SYSCTL_DID1_PRTNO_9997         0x00200000  // LM3S9997
#define SYSCTL_DID1_PRTNO_9B81         0x00D00000  // LM3S9B81
#define SYSCTL_DID1_PRTNO_9B90         0x00660000  // LM3S9B90
#define SYSCTL_DID1_PRTNO_9B92         0x006A0000  // LM3S9B92
#define SYSCTL_DID1_PRTNO_9B95         0x006E0000  // LM3S9B95
#define SYSCTL_DID1_PRTNO_9B96         0x006F0000  // LM3S9B96
#define SYSCTL_DID1_PRTNO_9BN2         0x001D0000  // LM3S9BN2
#define SYSCTL_DID1_PRTNO_9BN5         0x001E0000  // LM3S9BN5
#define SYSCTL_DID1_PRTNO_9BN6         0x001F0000  // LM3S9BN6
#define SYSCTL_DID1_PRTNO_9C97         0x00700000  // LM3S9C97
#define SYSCTL_DID1_PRTNO_9CN5         0x007A0000  // LM3S9CN5
#define SYSCTL_DID1_PRTNO_9D81         0x00A90000  // LM3S9D81
#define SYSCTL_DID1_PRTNO_9D90         0x007E0000  // LM3S9D90
#define SYSCTL_DID1_PRTNO_9D92         0x00920000  // LM3S9D92
#define SYSCTL_DID1_PRTNO_9D95         0x00C80000  // LM3S9D95
#define SYSCTL_DID1_PRTNO_9D96         0x009D0000  // LM3S9D96
#define SYSCTL_DID1_PRTNO_9DN5         0x007B0000  // LM3S9DN5
#define SYSCTL_DID1_PRTNO_9DN6         0x007C0000  // LM3S9DN6
#define SYSCTL_DID1_PRTNO_9G97         0x00600000  // LM3S9G97
#define SYSCTL_DID1_PRTNO_9GN5         0x00790000  // LM3S9GN5
#define SYSCTL_DID1_PRTNO_9L71         0x001B0000  // LM3S9L71
#define SYSCTL_DID1_PRTNO_9L97         0x00180000  // LM3S9L97
#define SYSCTL_DID1_PRTNO_9U81         0x00A80000  // LM3S9U81
#define SYSCTL_DID1_PRTNO_9U90         0x007D0000  // LM3S9U90
#define SYSCTL_DID1_PRTNO_9U92         0x00900000  // LM3S9U92
#define SYSCTL_DID1_PRTNO_9U95         0x00B70000  // LM3S9U95
#define SYSCTL_DID1_PRTNO_9U96         0x009B0000  // LM3S9U96
#define SYSCTL_DID1_PRTNO_LM4F110B2QR  0x00180000  // LM4F110B2QR
#define SYSCTL_DID1_PRTNO_LM4F110C4QR  0x00190000  // LM4F110C4QR
#define SYSCTL_DID1_PRTNO_LM4F110E5QR  0x00100000  // LM4F110E5QR
#define SYSCTL_DID1_PRTNO_LM4F110H5QR  0x00110000  // LM4F110H5QR
#define SYSCTL_DID1_PRTNO_LM4F111B2QR  0x00220000  // LM4F111B2QR
#define SYSCTL_DID1_PRTNO_LM4F111C4QR  0x00230000  // LM4F111C4QR
#define SYSCTL_DID1_PRTNO_LM4F111E5QR  0x00200000  // LM4F111E5QR
#define SYSCTL_DID1_PRTNO_LM4F111H5QR  0x00210000  // LM4F111H5QR
#define SYSCTL_DID1_PRTNO_LM4F112C4QC  0x00360000  // LM4F112C4QC
#define SYSCTL_DID1_PRTNO_LM4F112E5QC  0x00300000  // LM4F112E5QC
#define SYSCTL_DID1_PRTNO_LM4F112H5QC  0x00310000  // LM4F112H5QC
#define SYSCTL_DID1_PRTNO_LM4F112H5QD  0x00350000  // LM4F112H5QD
#define SYSCTL_DID1_PRTNO_LM4F120B2QR  0x00010000  // LM4F120B2QR
#define SYSCTL_DID1_PRTNO_LM4F120C4QR  0x00020000  // LM4F120C4QR
#define SYSCTL_DID1_PRTNO_LM4F120E5QR  0x00030000  // LM4F120E5QR
#define SYSCTL_DID1_PRTNO_LM4F120H5QR  0x00040000  // LM4F120H5QR
#define SYSCTL_DID1_PRTNO_LM4F121B2QR  0x00080000  // LM4F121B2QR
#define SYSCTL_DID1_PRTNO_LM4F121C4QR  0x00090000  // LM4F121C4QR
#define SYSCTL_DID1_PRTNO_LM4F121E5QR  0x000A0000  // LM4F121E5QR
#define SYSCTL_DID1_PRTNO_LM4F121H5QR  0x000B0000  // LM4F121H5QR
#define SYSCTL_DID1_PRTNO_LM4F122C4QC  0x00D00000  // LM4F122C4QC
#define SYSCTL_DID1_PRTNO_LM4F122E5QC  0x00D10000  // LM4F122E5QC
#define SYSCTL_DID1_PRTNO_LM4F122H5QC  0x00D20000  // LM4F122H5QC
#define SYSCTL_DID1_PRTNO_LM4F122H5QD  0x00D60000  // LM4F122H5QD
#define SYSCTL_DID1_PRTNO_LM4F130C4QR  0x00480000  // LM4F130C4QR
#define SYSCTL_DID1_PRTNO_LM4F130E5QR  0x00400000  // LM4F130E5QR
#define SYSCTL_DID1_PRTNO_LM4F130H5QR  0x00410000  // LM4F130H5QR
#define SYSCTL_DID1_PRTNO_LM4F131C4QR  0x00520000  // LM4F131C4QR
#define SYSCTL_DID1_PRTNO_LM4F131E5QR  0x00500000  // LM4F131E5QR
#define SYSCTL_DID1_PRTNO_LM4F131H5QR  0x00510000  // LM4F131H5QR
#define SYSCTL_DID1_PRTNO_LM4F132C4QC  0x00660000  // LM4F132C4QC
#define SYSCTL_DID1_PRTNO_LM4F132E5QC  0x00600000  // LM4F132E5QC
#define SYSCTL_DID1_PRTNO_LM4F132H5QC  0x00610000  // LM4F132H5QC
#define SYSCTL_DID1_PRTNO_LM4F132H5QD  0x00650000  // LM4F132H5QD
#define SYSCTL_DID1_PRTNO_LM4F210E5QR  0x00700000  // LM4F210E5QR
#define SYSCTL_DID1_PRTNO_LM4F210H5QR  0x00730000  // LM4F210H5QR
#define SYSCTL_DID1_PRTNO_LM4F211E5QR  0x00800000  // LM4F211E5QR
#define SYSCTL_DID1_PRTNO_LM4F211H5QR  0x00830000  // LM4F211H5QR
#define SYSCTL_DID1_PRTNO_LM4F212H5BB  0x00E90000  // LM4F212H5BB
#define SYSCTL_DID1_PRTNO_LM4F212H5QC  0x00C40000  // LM4F212H5QC
#define SYSCTL_DID1_PRTNO_LM4F212H5QD  0x00C60000  // LM4F212H5QD
#define SYSCTL_DID1_PRTNO_LM4F230E5QR  0x00A00000  // LM4F230E5QR
#define SYSCTL_DID1_PRTNO_LM4F230H5QR  0x00A10000  // LM4F230H5QR
#define SYSCTL_DID1_PRTNO_LM4F231E5QR  0x00B00000  // LM4F231E5QR
#define SYSCTL_DID1_PRTNO_LM4F231H5QR  0x00B10000  // LM4F231H5QR
#define SYSCTL_DID1_PRTNO_LM4F232E5QC  0x00C00000  // LM4F232E5QC
#define SYSCTL_DID1_PRTNO_LM4F232H5BB  0x00E30000  // LM4F232H5BB
#define SYSCTL_DID1_PRTNO_LM4F232H5QC  0x00C10000  // LM4F232H5QC
#define SYSCTL_DID1_PRTNO_LM4F232H5QD  0x00C50000  // LM4F232H5QD
#define SYSCTL_DID1_PRTNO_LM4FS1AH5BB  0x00E50000  // LM4FS1AH5BB
#define SYSCTL_DID1_PRTNO_LM4FS1GH5BB  0x00EA0000  // LM4FS1GH5BB
#define SYSCTL_DID1_PRTNO_LM4FS99H5BB  0x00E40000  // LM4FS99H5BB
#define SYSCTL_DID1_PRTNO_LM4FSXAH5BB  0x00E00000  // LM4FSXAH5BB
#define SYSCTL_DID1_PRTNO_LM4FSXLH5BB  0x00E10000  // LM4FSXLH5BB
#define SYSCTL_DID1_PINCNT_M           0x0000E000  // Package Pin Count
#define SYSCTL_DID1_PINCNT_48          0x00002000  // 48-pin package
#define SYSCTL_DID1_PINCNT_100         0x00004000  // 100-pin package
#define SYSCTL_DID1_PINCNT_64          0x00006000  // 64-pin package
#define SYSCTL_DID1_PINCNT_144         0x00008000  // 144-pin package
#define SYSCTL_DID1_PINCNT_157         0x0000A000  // 157-pin package
#define SYSCTL_DID1_TEMP_M             0x000000E0  // Temperature Range
#define SYSCTL_DID1_TEMP_C             0x00000000  // Commercial temperature range (0C to 70C)
#define SYSCTL_DID1_TEMP_I             0x00000020  // Industrial temperature range (-40C to 85C)
#define SYSCTL_DID1_TEMP_E             0x00000040  // Extended temperature range (-40C to 105C)
#define SYSCTL_DID1_PKG_M              0x00000018  // Package Type
#define SYSCTL_DID1_PKG_SOIC           0x00000000  // SOIC package
#define SYSCTL_DID1_PKG_QFP            0x00000008  // LQFP package
#define SYSCTL_DID1_PKG_BGA            0x00000010  // BGA package
#define SYSCTL_DID1_ROHS               0x00000004  // RoHS-Compliance
#define SYSCTL_DID1_QUAL_M             0x00000003  // Qualification Status
#define SYSCTL_DID1_QUAL_ES            0x00000000  // Engineering Sample (unqualified)
#define SYSCTL_DID1_QUAL_PP            0x00000001  // Pilot Production (unqualified)
#define SYSCTL_DID1_QUAL_FQ            0x00000002  // Fully Qualified

#define SYSCTL_DC0_SRAMSZ_M            0xFFFF0000  // SRAM Size
#define SYSCTL_DC0_SRAMSZ_2KB          0x00070000  // 2 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_4KB          0x000F0000  // 4 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_6KB          0x00170000  // 6 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_8KB          0x001F0000  // 8 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_12KB         0x002F0000  // 12 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_16KB         0x003F0000  // 16 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_20KB         0x004F0000  // 20 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_24KB         0x005F0000  // 24 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_32KB         0x007F0000  // 32 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_48KB         0x00BF0000  // 48 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_64KB         0x00FF0000  // 64 KB of SRAM
#define SYSCTL_DC0_SRAMSZ_96KB         0x017F0000  // 96 KB of SRAM
#define SYSCTL_DC0_FLASHSZ_M           0x0000FFFF  // Flash Size
#define SYSCTL_DC0_FLASHSZ_8KB         0x00000003  // 8 KB of Flash
#define SYSCTL_DC0_FLASHSZ_16KB        0x00000007  // 16 KB of Flash
#define SYSCTL_DC0_FLASHSZ_32KB        0x0000000F  // 32 KB of Flash
#define SYSCTL_DC0_FLASHSZ_64KB        0x0000001F  // 64 KB of Flash
#define SYSCTL_DC0_FLASHSZ_96KB        0x0000002F  // 96 KB of Flash
#define SYSCTL_DC0_FLASHSZ_128K        0x0000003F  // 128 KB of Flash
#define SYSCTL_DC0_FLASHSZ_192K        0x0000005F  // 192 KB of Flash
#define SYSCTL_DC0_FLASHSZ_256K        0x0000007F  // 256 KB of Flash
#define SYSCTL_DC0_FLASHSZ_384K        0x000000BF  // 384 KB of Flash
#define SYSCTL_DC0_FLASHSZ_512K        0x000000FF  // 512 KB of Flash
#define SYSCTL_DC0_SRAMSZ_S            16          // SRAM size shift
#define SYSCTL_DC0_FLASHSZ_S           0           // Flash size shift

#define SYSCTL_DC1_WDT1                0x10000000  // Watchdog Timer1 Present
#define SYSCTL_DC1_CAN2                0x04000000  // CAN Module 2 Present
#define SYSCTL_DC1_CAN1                0x02000000  // CAN Module 1 Present
#define SYSCTL_DC1_CAN0                0x01000000  // CAN Module 0 Present
#define SYSCTL_DC1_PWM1                0x00200000  // PWM Module 1 Present
#define SYSCTL_DC1_PWM0                0x00100000  // PWM Module 0 Present
#define SYSCTL_DC1_ADC1                0x00020000  // ADC Module 1 Present
#define SYSCTL_DC1_ADC0                0x00010000  // ADC Module 0 Present
#define SYSCTL_DC1_MINSYSDIV_M         0x0000F000  // System Clock Divider
#define SYSCTL_DC1_MINSYSDIV_100       0x00001000  // Divide VCO (400MHZ) by 5 minimum
#define SYSCTL_DC1_MINSYSDIV_66        0x00002000  // Divide VCO (400MHZ) by 2*2 + 2 = 6 minimum
#define SYSCTL_DC1_MINSYSDIV_50        0x00003000  // Specifies a 50-MHz CPU clock with a PLL divider of 4
#define SYSCTL_DC1_MINSYSDIV_40        0x00004000  // Specifies a 40-MHz CPU clock with a PLL divider of 5
#define SYSCTL_DC1_MINSYSDIV_25        0x00007000  // Specifies a 25-MHz clock with a PLL divider of 8
#define SYSCTL_DC1_MINSYSDIV_20        0x00009000  // Specifies a 20-MHz clock with a PLL divider of 10
#define SYSCTL_DC1_ADC1SPD_M           0x00000C00  // Max ADC1 Speed
#define SYSCTL_DC1_ADC1SPD_125K        0x00000000  // 125K samples/second
#define SYSCTL_DC1_ADC1SPD_250K        0x00000400  // 250K samples/second
#define SYSCTL_DC1_ADC1SPD_500K        0x00000800  // 500K samples/second
#define SYSCTL_DC1_ADC1SPD_1M          0x00000C00  // 1M samples/second
#define SYSCTL_DC1_ADC0SPD_M           0x00000300  // Max ADC0 Speed
#define SYSCTL_DC1_ADC0SPD_125K        0x00000000  // 125K samples/second
#define SYSCTL_DC1_ADC0SPD_250K        0x00000100  // 250K samples/second
#define SYSCTL_DC1_ADC0SPD_500K        0x00000200  // 500K samples/second
#define SYSCTL_DC1_ADC0SPD_1M          0x00000300  // 1M samples/second
#define SYSCTL_DC1_MPU                 0x00000080  // MPU Present
#define SYSCTL_DC1_HIB                 0x00000040  // Hibernation Module Present
#define SYSCTL_DC1_TEMP                0x00000020  // Temp Sensor Present
#define SYSCTL_DC1_PLL                 0x00000010  // PLL Present
#define SYSCTL_DC1_WDT0                0x00000008  // Watchdog Timer 0 Present
#define SYSCTL_DC1_SWO                 0x00000004  // SWO Trace Port Present
#define SYSCTL_DC1_SWD                 0x00000002  // SWD Present
#define SYSCTL_DC1_JTAG                0x00000001  // JTAG Present

#define SYSCTL_DC2_EPI0                0x40000000  // EPI Module 0 Present
#define SYSCTL_DC2_I2S0                0x10000000  // I2S Module 0 Present
#define SYSCTL_DC2_COMP2               0x04000000  // Analog Comparator 2 Present
#define SYSCTL_DC2_COMP1               0x02000000  // Analog Comparator 1 Present
#define SYSCTL_DC2_COMP0               0x01000000  // Analog Comparator 0 Present
#define SYSCTL_DC2_TIMER3              0x00080000  // Timer Module 3 Present
#define SYSCTL_DC2_TIMER2              0x00040000  // Timer Module 2 Present
#define SYSCTL_DC2_TIMER1              0x00020000  // Timer Module 1 Present
#define SYSCTL_DC2_TIMER0              0x00010000  // Timer Module 0 Present
#define SYSCTL_DC2_I2C1HS              0x00008000  // I2C Module 1 Speed
#define SYSCTL_DC2_I2C1                0x00004000  // I2C Module 1 Present
#define SYSCTL_DC2_I2C0HS              0x00002000  // I2C Module 0 Speed
#define SYSCTL_DC2_I2C0                0x00001000  // I2C Module 0 Present
#define SYSCTL_DC2_QEI1                0x00000200  // QEI Module 1 Present
#define SYSCTL_DC2_QEI0                0x00000100  // QEI Module 0 Present
#define SYSCTL_DC2_SSI1                0x00000020  // SSI Module 1 Present
#define SYSCTL_DC2_SSI0                0x00000010  // SSI Module 0 Present
#define SYSCTL_DC2_UART2               0x00000004  // UART Module 2 Present
#define SYSCTL_DC2_UART1               0x00000002  // UART Module 1 Present
#define SYSCTL_DC2_UART0               0x00000001  // UART Module 0 Present

#define SYSCTL_DC3_32KHZ               0x80000000  // 32KHz Input Clock Available
#define SYSCTL_DC3_CCP5                0x20000000  // CCP5 Pin Present
#define SYSCTL_DC3_CCP4                0x10000000  // CCP4 Pin Present
#define SYSCTL_DC3_CCP3                0x08000000  // CCP3 Pin Present
#define SYSCTL_DC3_CCP2                0x04000000  // CCP2 Pin Present
#define SYSCTL_DC3_CCP1                0x02000000  // CCP1 Pin Present
#define SYSCTL_DC3_CCP0                0x01000000  // CCP0 Pin Present
#define SYSCTL_DC3_ADC0AIN7            0x00800000  // ADC Module 0 AIN7 Pin Present
#define SYSCTL_DC3_ADC0AIN6            0x00400000  // ADC Module 0 AIN6 Pin Present
#define SYSCTL_DC3_ADC0AIN5            0x00200000  // ADC Module 0 AIN5 Pin Present
#define SYSCTL_DC3_ADC0AIN4            0x00100000  // ADC Module 0 AIN4 Pin Present
#define SYSCTL_DC3_ADC0AIN3            0x00080000  // ADC Module 0 AIN3 Pin Present
#define SYSCTL_DC3_ADC0AIN2            0x00040000  // ADC Module 0 AIN2 Pin Present
#define SYSCTL_DC3_ADC0AIN1            0x00020000  // ADC Module 0 AIN1 Pin Present
#define SYSCTL_DC3_ADC0AIN0            0x00010000  // ADC Module 0 AIN0 Pin Present
#define SYSCTL_DC3_PWMFAULT            0x00008000  // PWM Fault Pin Present
#define SYSCTL_DC3_C2O                 0x00004000  // C2o Pin Present
#define SYSCTL_DC3_C2PLUS              0x00002000  // C2+ Pin Present
#define SYSCTL_DC3_C2MINUS             0x00001000  // C2- Pin Present
#define SYSCTL_DC3_C1O                 0x00000800  // C1o Pin Present
#define SYSCTL_DC3_C1PLUS              0x00000400  // C1+ Pin Present
#define SYSCTL_DC3_C1MINUS             0x00000200  // C1- Pin Present
#define SYSCTL_DC3_C0O                 0x00000100  // C0o Pin Present
#define SYSCTL_DC3_C0PLUS              0x00000080  // C0+ Pin Present
#define SYSCTL_DC3_C0MINUS             0x00000040  // C0- Pin Present
#define SYSCTL_DC3_PWM5                0x00000020  // PWM5 Pin Present
#define SYSCTL_DC3_PWM4                0x00000010  // PWM4 Pin Present
#define SYSCTL_DC3_PWM3                0x00000008  // PWM3 Pin Present
#define SYSCTL_DC3_PWM2                0x00000004  // PWM2 Pin Present
#define SYSCTL_DC3_PWM1                0x00000002  // PWM1 Pin Present
#define SYSCTL_DC3_PWM0                0x00000001  // PWM0 Pin Present

#define SYSCTL_DC4_ETH                 0x50000000  // Ethernet present
#define SYSCTL_DC4_EPHY0               0x40000000  // Ethernet PHY Layer 0 Present
#define SYSCTL_DC4_EMAC0               0x10000000  // Ethernet MAC Layer 0 Present
#define SYSCTL_DC4_E1588               0x01000000  // 1588 Capable
#define SYSCTL_DC4_PICAL               0x00040000  // PIOSC Calibrate
#define SYSCTL_DC4_CCP7                0x00008000  // CCP7 Pin Present
#define SYSCTL_DC4_CCP6                0x00004000  // CCP6 Pin Present
#define SYSCTL_DC4_UDMA                0x00002000  // Micro-DMA Module Present
#define SYSCTL_DC4_ROM                 0x00001000  // Internal Code ROM Present
#define SYSCTL_DC4_GPIOJ               0x00000100  // GPIO Port J Present
#define SYSCTL_DC4_GPIOH               0x00000080  // GPIO Port H Present
#define SYSCTL_DC4_GPIOG               0x00000040  // GPIO Port G Present
#define SYSCTL_DC4_GPIOF               0x00000020  // GPIO Port F Present
#define SYSCTL_DC4_GPIOE               0x00000010  // GPIO Port E Present
#define SYSCTL_DC4_GPIOD               0x00000008  // GPIO Port D Present
#define SYSCTL_DC4_GPIOC               0x00000004  // GPIO Port C Present
#define SYSCTL_DC4_GPIOB               0x00000002  // GPIO Port B Present
#define SYSCTL_DC4_GPIOA               0x00000001  // GPIO Port A Present

#define SYSCTL_DC5_PWMFAULT3           0x08000000  // PWM Fault 3 Pin Present
#define SYSCTL_DC5_PWMFAULT2           0x04000000  // PWM Fault 2 Pin Present
#define SYSCTL_DC5_PWMFAULT1           0x02000000  // PWM Fault 1 Pin Present
#define SYSCTL_DC5_PWMFAULT0           0x01000000  // PWM Fault 0 Pin Present
#define SYSCTL_DC5_PWMEFLT             0x00200000  // PWM Extended Fault Active
#define SYSCTL_DC5_PWMESYNC            0x00100000  // PWM Extended SYNC Active
#define SYSCTL_DC5_PWM7                0x00000080  // PWM7 Pin Present
#define SYSCTL_DC5_PWM6                0x00000040  // PWM6 Pin Present
#define SYSCTL_DC5_PWM5                0x00000020  // PWM5 Pin Present
#define SYSCTL_DC5_PWM4                0x00000010  // PWM4 Pin Present
#define SYSCTL_DC5_PWM3                0x00000008  // PWM3 Pin Present
#define SYSCTL_DC5_PWM2                0x00000004  // PWM2 Pin Present
#define SYSCTL_DC5_PWM1                0x00000002  // PWM1 Pin Present
#define SYSCTL_DC5_PWM0                0x00000001  // PWM0 Pin Present

#define SYSCTL_DC6_USB0PHY             0x00000010  // USB Module 0 PHY Present
#define SYSCTL_DC6_USB0_M              0x00000003  // USB Module 0 Present
#define SYSCTL_DC6_USB0_DEV            0x00000001  // USB0 is Device Only
#define SYSCTL_DC6_USB0_HOSTDEV        0x00000002  // USB is Device or Host
#define SYSCTL_DC6_USB0_OTG            0x00000003  // USB0 is OTG

#define SYSCTL_DC7_SW                  0x40000000  // Software transfer on uDMA Ch30
#define SYSCTL_DC7_DMACH30             0x40000000  // SW
#define SYSCTL_DC7_DMACH29             0x20000000  // I2S0_TX / CAN1_TX
#define SYSCTL_DC7_DMACH28             0x10000000  // I2S0_RX / CAN1_RX
#define SYSCTL_DC7_DMACH27             0x08000000  // CAN1_TX / ADC1_SS3
#define SYSCTL_DC7_DMACH26             0x04000000  // CAN1_RX / ADC1_SS2
#define SYSCTL_DC7_DMACH25             0x02000000  // SSI1_TX / ADC1_SS1
#define SYSCTL_DC7_SSI1_TX             0x02000000  // SSI1 TX on uDMA Ch25
#define SYSCTL_DC7_SSI1_RX             0x01000000  // SSI1 RX on uDMA Ch24
#define SYSCTL_DC7_DMACH24             0x01000000  // SSI1_RX / ADC1_SS0
#define SYSCTL_DC7_UART1_TX            0x00800000  // UART1 TX on uDMA Ch23
#define SYSCTL_DC7_DMACH23             0x00800000  // UART1_TX / CAN2_TX
#define SYSCTL_DC7_DMACH22             0x00400000  // UART1_RX / CAN2_RX
#define SYSCTL_DC7_UART1_RX            0x00400000  // UART1 RX on uDMA Ch22
#define SYSCTL_DC7_DMACH21             0x00200000  // Timer1B / EPI0_WFIFO
#define SYSCTL_DC7_DMACH20             0x00100000  // Timer1A / EPI0_NBRFIFO
#define SYSCTL_DC7_DMACH19             0x00080000  // Timer0B / Timer1B
#define SYSCTL_DC7_DMACH18             0x00040000  // Timer0A / Timer1A
#define SYSCTL_DC7_DMACH17             0x00020000  // ADC0_SS3
#define SYSCTL_DC7_DMACH16             0x00010000  // ADC0_SS2
#define SYSCTL_DC7_DMACH15             0x00008000  // ADC0_SS1 / Timer2B
#define SYSCTL_DC7_DMACH14             0x00004000  // ADC0_SS0 / Timer2A
#define SYSCTL_DC7_DMACH13             0x00002000  // CAN0_TX / UART2_TX
#define SYSCTL_DC7_DMACH12             0x00001000  // CAN0_RX / UART2_RX
#define SYSCTL_DC7_SSI0_TX             0x00000800  // SSI0 TX on uDMA Ch11
#define SYSCTL_DC7_DMACH11             0x00000800  // SSI0_TX / SSI1_TX
#define SYSCTL_DC7_SSI0_RX             0x00000400  // SSI0 RX on uDMA Ch10
#define SYSCTL_DC7_DMACH10             0x00000400  // SSI0_RX / SSI1_RX
#define SYSCTL_DC7_UART0_TX            0x00000200  // UART0 TX on uDMA Ch9
#define SYSCTL_DC7_DMACH9              0x00000200  // UART0_TX / UART1_TX
#define SYSCTL_DC7_DMACH8              0x00000100  // UART0_RX / UART1_RX
#define SYSCTL_DC7_UART0_RX            0x00000100  // UART0 RX on uDMA Ch8
#define SYSCTL_DC7_DMACH7              0x00000080  // ETH_TX / Timer2B
#define SYSCTL_DC7_DMACH6              0x00000040  // ETH_RX / Timer2A
#define SYSCTL_DC7_DMACH5              0x00000020  // USB_EP3_TX / Timer2B
#define SYSCTL_DC7_USB_EP3_TX          0x00000020  // USB EP3 TX on uDMA Ch5
#define SYSCTL_DC7_USB_EP3_RX          0x00000010  // USB EP3 RX on uDMA Ch4
#define SYSCTL_DC7_DMACH4              0x00000010  // USB_EP3_RX / Timer2A
#define SYSCTL_DC7_USB_EP2_TX          0x00000008  // USB EP2 TX on uDMA Ch3
#define SYSCTL_DC7_DMACH3              0x00000008  // USB_EP2_TX / Timer3B
#define SYSCTL_DC7_USB_EP2_RX          0x00000004  // USB EP2 RX on uDMA Ch2
#define SYSCTL_DC7_DMACH2              0x00000004  // USB_EP2_RX / Timer3A
#define SYSCTL_DC7_USB_EP1_TX          0x00000002  // USB EP1 TX on uDMA Ch1
#define SYSCTL_DC7_DMACH1              0x00000002  // USB_EP1_TX / UART2_TX
#define SYSCTL_DC7_DMACH0              0x00000001  // USB_EP1_RX / UART2_RX
#define SYSCTL_DC7_USB_EP1_RX          0x00000001  // USB EP1 RX on uDMA Ch0

#define SYSCTL_DC8_ADC1AIN15           0x80000000  // ADC Module 1 AIN15 Pin Present
#define SYSCTL_DC8_ADC1AIN14           0x40000000  // ADC Module 1 AIN14 Pin Present
#define SYSCTL_DC8_ADC1AIN13           0x20000000  // ADC Module 1 AIN13 Pin Present
#define SYSCTL_DC8_ADC1AIN12           0x10000000  // ADC Module 1 AIN12 Pin Present
#define SYSCTL_DC8_ADC1AIN11           0x08000000  // ADC Module 1 AIN11 Pin Present
#define SYSCTL_DC8_ADC1AIN10           0x04000000  // ADC Module 1 AIN10 Pin Present
#define SYSCTL_DC8_ADC1AIN9            0x02000000  // ADC Module 1 AIN9 Pin Present
#define SYSCTL_DC8_ADC1AIN8            0x01000000  // ADC Module 1 AIN8 Pin Present
#define SYSCTL_DC8_ADC1AIN7            0x00800000  // ADC Module 1 AIN7 Pin Present
#define SYSCTL_DC8_ADC1AIN6            0x00400000  // ADC Module 1 AIN6 Pin Present
#define SYSCTL_DC8_ADC1AIN5            0x00200000  // ADC Module 1 AIN5 Pin Present
#define SYSCTL_DC8_ADC1AIN4            0x00100000  // ADC Module 1 AIN4 Pin Present
#define SYSCTL_DC8_ADC1AIN3            0x00080000  // ADC Module 1 AIN3 Pin Present
#define SYSCTL_DC8_ADC1AIN2            0x00040000  // ADC Module 1 AIN2 Pin Present
#define SYSCTL_DC8_ADC1AIN1            0x00020000  // ADC Module 1 AIN1 Pin Present
#define SYSCTL_DC8_ADC1AIN0            0x00010000  // ADC Module 1 AIN0 Pin Present
#define SYSCTL_DC8_ADC0AIN15           0x00008000  // ADC Module 0 AIN15 Pin Present
#define SYSCTL_DC8_ADC0AIN14           0x00004000  // ADC Module 0 AIN14 Pin Present
#define SYSCTL_DC8_ADC0AIN13           0x00002000  // ADC Module 0 AIN13 Pin Present
#define SYSCTL_DC8_ADC0AIN12           0x00001000  // ADC Module 0 AIN12 Pin Present
#define SYSCTL_DC8_ADC0AIN11           0x00000800  // ADC Module 0 AIN11 Pin Present
#define SYSCTL_DC8_ADC0AIN10           0x00000400  // ADC Module 0 AIN10 Pin Present
#define SYSCTL_DC8_ADC0AIN9            0x00000200  // ADC Module 0 AIN9 Pin Present
#define SYSCTL_DC8_ADC0AIN8            0x00000100  // ADC Module 0 AIN8 Pin Present
#define SYSCTL_DC8_ADC0AIN7            0x00000080  // ADC Module 0 AIN7 Pin Present
#define SYSCTL_DC8_ADC0AIN6            0x00000040  // ADC Module 0 AIN6 Pin Present
#define SYSCTL_DC8_ADC0AIN5            0x00000020  // ADC Module 0 AIN5 Pin Present
#define SYSCTL_DC8_ADC0AIN4            0x00000010  // ADC Module 0 AIN4 Pin Present
#define SYSCTL_DC8_ADC0AIN3            0x00000008  // ADC Module 0 AIN3 Pin Present
#define SYSCTL_DC8_ADC0AIN2            0x00000004  // ADC Module 0 AIN2 Pin Present
#define SYSCTL_DC8_ADC0AIN1            0x00000002  // ADC Module 0 AIN1 Pin Present
#define SYSCTL_DC8_ADC0AIN0            0x00000001  // ADC Module 0 AIN0 Pin Present

#define SYSCTL_PBORCTL_BORTIM_M        0x0000FFFC  // BOR Time Delay
#define SYSCTL_PBORCTL_BORIOR          0x00000002  // BOR Interrupt or Reset
#define SYSCTL_PBORCTL_BORWT           0x00000001  // BOR Wait and Check for Noise
#define SYSCTL_PBORCTL_BORTIM_S        2

#define SYSCTL_LDOPCTL_M               0x0000003F  // LDO Output Voltage
#define SYSCTL_LDOPCTL_2_50V           0x00000000  // 2.50
#define SYSCTL_LDOPCTL_2_45V           0x00000001  // 2.45
#define SYSCTL_LDOPCTL_2_40V           0x00000002  // 2.40
#define SYSCTL_LDOPCTL_2_35V           0x00000003  // 2.35
#define SYSCTL_LDOPCTL_2_30V           0x00000004  // 2.30
#define SYSCTL_LDOPCTL_2_25V           0x00000005  // 2.25
#define SYSCTL_LDOPCTL_2_75V           0x0000001B  // 2.75
#define SYSCTL_LDOPCTL_2_70V           0x0000001C  // 2.70
#define SYSCTL_LDOPCTL_2_65V           0x0000001D  // 2.65
#define SYSCTL_LDOPCTL_2_60V           0x0000001E  // 2.60
#define SYSCTL_LDOPCTL_2_55V           0x0000001F  // 2.55

#define SYSCTL_SRCR0_WDT1              0x10000000  // WDT1 Reset Control
#define SYSCTL_SRCR0_CAN2              0x04000000  // CAN2 Reset Control
#define SYSCTL_SRCR0_CAN1              0x02000000  // CAN1 Reset Control
#define SYSCTL_SRCR0_CAN0              0x01000000  // CAN0 Reset Control
#define SYSCTL_SRCR0_PWM0              0x00100000  // PWM Reset Control
#define SYSCTL_SRCR0_ADC1              0x00020000  // ADC1 Reset Control
#define SYSCTL_SRCR0_ADC0              0x00010000  // ADC0 Reset Control
#define SYSCTL_SRCR0_HIB               0x00000040  // HIB Reset Control
#define SYSCTL_SRCR0_WDT0              0x00000008  // WDT0 Reset Control

#define SYSCTL_SRCR1_EPI0              0x40000000  // EPI0 Reset Control
#define SYSCTL_SRCR1_I2S0              0x10000000  // I2S0 Reset Control
#define SYSCTL_SRCR1_COMP2             0x04000000  // Analog Comp 2 Reset Control
#define SYSCTL_SRCR1_COMP1             0x02000000  // Analog Comp 1 Reset Control
#define SYSCTL_SRCR1_COMP0             0x01000000  // Analog Comp 0 Reset Control
#define SYSCTL_SRCR1_TIMER3            0x00080000  // Timer 3 Reset Control
#define SYSCTL_SRCR1_TIMER2            0x00040000  // Timer 2 Reset Control
#define SYSCTL_SRCR1_TIMER1            0x00020000  // Timer 1 Reset Control
#define SYSCTL_SRCR1_TIMER0            0x00010000  // Timer 0 Reset Control
#define SYSCTL_SRCR1_I2C1              0x00004000  // I2C1 Reset Control
#define SYSCTL_SRCR1_I2C0              0x00001000  // I2C0 Reset Control
#define SYSCTL_SRCR1_QEI1              0x00000200  // QEI1 Reset Control
#define SYSCTL_SRCR1_QEI0              0x00000100  // QEI0 Reset Control
#define SYSCTL_SRCR1_SSI1              0x00000020  // SSI1 Reset Control
#define SYSCTL_SRCR1_SSI0              0x00000010  // SSI0 Reset Control
#define SYSCTL_SRCR1_UART2             0x00000004  // UART2 Reset Control
#define SYSCTL_SRCR1_UART1             0x00000002  // UART1 Reset Control
#define SYSCTL_SRCR1_UART0             0x00000001  // UART0 Reset Control

#define SYSCTL_SRCR2_EPHY0             0x40000000  // PHY0 Reset Control
#define SYSCTL_SRCR2_EMAC0             0x10000000  // MAC0 Reset Control
#define SYSCTL_SRCR2_USB0              0x00010000  // USB0 Reset Control
#define SYSCTL_SRCR2_UDMA              0x00002000  // Micro-DMA Reset Control
#define SYSCTL_SRCR2_GPIOJ             0x00000100  // Port J Reset Control
#define SYSCTL_SRCR2_GPIOH             0x00000080  // Port H Reset Control
#define SYSCTL_SRCR2_GPIOG             0x00000040  // Port G Reset Control
#define SYSCTL_SRCR2_GPIOF             0x00000020  // Port F Reset Control
#define SYSCTL_SRCR2_GPIOE             0x00000010  // Port E Reset Control
#define SYSCTL_SRCR2_GPIOD             0x00000008  // Port D Reset Control
#define SYSCTL_SRCR2_GPIOC             0x00000004  // Port C Reset Control
#define SYSCTL_SRCR2_GPIOB             0x00000002  // Port B Reset Control
#define SYSCTL_SRCR2_GPIOA             0x00000001  // Port A Reset Control

#define SYSCTL_RIS_MOSCPUPRIS          0x00000100  // MOSC Power Up Raw Interrupt Status
#define SYSCTL_RIS_USBPLLLRIS          0x00000080  // USB PLL Lock Raw Interrupt Status
#define SYSCTL_RIS_PLLLRIS             0x00000040  // PLL Lock Raw Interrupt Status
#define SYSCTL_RIS_CLRIS               0x00000020  // Current Limit Raw Interrupt Status
#define SYSCTL_RIS_IOFRIS              0x00000010  // Internal Oscillator Fault Raw Interrupt Status
#define SYSCTL_RIS_MOFRIS              0x00000008  // Main Oscillator Fault Raw Interrupt Status
#define SYSCTL_RIS_LDORIS              0x00000004  // LDO Power Unregulated Raw Interrupt Status
#define SYSCTL_RIS_BORRIS              0x00000002  // Brown-Out Reset Raw Interrupt Status
#define SYSCTL_RIS_PLLFRIS             0x00000001  // PLL Fault Raw Interrupt Status

#define SYSCTL_IMC_MOSCPUPIM           0x00000100  // MOSC Power Up Interrupt Mask
#define SYSCTL_IMC_USBPLLLIM           0x00000080  // USB PLL Lock Interrupt Mask
#define SYSCTL_IMC_PLLLIM              0x00000040  // PLL Lock Interrupt Mask
#define SYSCTL_IMC_CLIM                0x00000020  // Current Limit Interrupt Mask
#define SYSCTL_IMC_IOFIM               0x00000010  // Internal Oscillator Fault Interrupt Mask
#define SYSCTL_IMC_MOFIM               0x00000008  // Main Oscillator Fault Interrupt Mask
#define SYSCTL_IMC_LDOIM               0x00000004  // LDO Power Unregulated Interrupt Mask
#define SYSCTL_IMC_BORIM               0x00000002  // Brown-Out Reset Interrupt Mask
#define SYSCTL_IMC_PLLFIM              0x00000001  // PLL Fault Interrupt Mask

#define SYSCTL_MISC_MOSCPUPMIS         0x00000100  // MOSC Power Up Masked Interrupt Status
#define SYSCTL_MISC_USBPLLLMIS         0x00000080  // USB PLL Lock Masked Interrupt Status
#define SYSCTL_MISC_PLLLMIS            0x00000040  // PLL Lock Masked Interrupt Status
#define SYSCTL_MISC_CLMIS              0x00000020  // Current Limit Masked Interrupt Status
#define SYSCTL_MISC_IOFMIS             0x00000010  // Internal Oscillator Fault Masked Interrupt Status
#define SYSCTL_MISC_MOFMIS             0x00000008  // Main Oscillator Fault Masked Interrupt Status
#define SYSCTL_MISC_LDOMIS             0x00000004  // LDO Power Unregulated Masked Interrupt Status
#define SYSCTL_MISC_BORMIS             0x00000002  // BOR Masked Interrupt Status

#define SYSCTL_RESC_MOSCFAIL           0x00010000  // MOSC Failure Reset
#define SYSCTL_RESC_LDO                0x00000020  // LDO Reset
#define SYSCTL_RESC_WDT1               0x00000020  // Watchdog Timer 1 Reset
#define SYSCTL_RESC_SW                 0x00000010  // Software Reset
#define SYSCTL_RESC_WDT0               0x00000008  // Watchdog Timer 0 Reset
#define SYSCTL_RESC_BOR                0x00000004  // Brown-Out Reset
#define SYSCTL_RESC_POR                0x00000002  // Power-On Reset
#define SYSCTL_RESC_EXT                0x00000001  // External Reset

#define SYSCTL_RCC_ACG                 0x08000000  // Auto Clock Gating
#define SYSCTL_RCC_SYSDIV_M            0x07800000  // System Clock Divisor
#define SYSCTL_RCC_SYSDIV_2            0x00800000  // System clock /2
#define SYSCTL_RCC_SYSDIV_3            0x01000000  // System clock /3
#define SYSCTL_RCC_SYSDIV_4            0x01800000  // System clock /4
#define SYSCTL_RCC_SYSDIV_5            0x02000000  // System clock /5
#define SYSCTL_RCC_SYSDIV_6            0x02800000  // System clock /6
#define SYSCTL_RCC_SYSDIV_7            0x03000000  // System clock /7
#define SYSCTL_RCC_SYSDIV_8            0x03800000  // System clock /8
#define SYSCTL_RCC_SYSDIV_9            0x04000000  // System clock /9
#define SYSCTL_RCC_SYSDIV_10           0x04800000  // System clock /10
#define SYSCTL_RCC_SYSDIV_11           0x05000000  // System clock /11
#define SYSCTL_RCC_SYSDIV_12           0x05800000  // System clock /12
#define SYSCTL_RCC_SYSDIV_13           0x06000000  // System clock /13
#define SYSCTL_RCC_SYSDIV_14           0x06800000  // System clock /14
#define SYSCTL_RCC_SYSDIV_15           0x07000000  // System clock /15
#define SYSCTL_RCC_SYSDIV_16           0x07800000  // System clock /16
#define SYSCTL_RCC_USESYSDIV           0x00400000  // Enable System Clock Divider
#define SYSCTL_RCC_USEPWMDIV           0x00100000  // Enable PWM Clock Divisor
#define SYSCTL_RCC_PWMDIV_M            0x000E0000  // PWM Unit Clock Divisor
#define SYSCTL_RCC_PWMDIV_2            0x00000000  // PWM clock /2
#define SYSCTL_RCC_PWMDIV_4            0x00020000  // PWM clock /4
#define SYSCTL_RCC_PWMDIV_8            0x00040000  // PWM clock /8
#define SYSCTL_RCC_PWMDIV_16           0x00060000  // PWM clock /16
#define SYSCTL_RCC_PWMDIV_32           0x00080000  // PWM clock /32
#define SYSCTL_RCC_PWMDIV_64           0x000A0000  // PWM clock /64
#define SYSCTL_RCC_PWRDN               0x00002000  // PLL Power Down
#define SYSCTL_RCC_OEN                 0x00001000  // PLL Output Enable
#define SYSCTL_RCC_BYPASS              0x00000800  // PLL Bypass
#define SYSCTL_RCC_XTAL_M              0x000007C0  // Crystal Value
#define SYSCTL_RCC_XTAL_1MHZ           0x00000000  // 1 MHz
#define SYSCTL_RCC_XTAL_1_84MHZ        0x00000040  // 1.8432 MHz
#define SYSCTL_RCC_XTAL_2MHZ           0x00000080  // 2 MHz
#define SYSCTL_RCC_XTAL_2_45MHZ        0x000000C0  // 2.4576 MHz
#define SYSCTL_RCC_XTAL_3_57MHZ        0x00000100  // 3.579545 MHz
#define SYSCTL_RCC_XTAL_3_68MHZ        0x00000140  // 3.6864 MHz
#define SYSCTL_RCC_XTAL_4MHZ           0x00000180  // 4 MHz
#define SYSCTL_RCC_XTAL_4_09MHZ        0x000001C0  // 4.096 MHz
#define SYSCTL_RCC_XTAL_4_91MHZ        0x00000200  // 4.9152 MHz
#define SYSCTL_RCC_XTAL_5MHZ           0x00000240  // 5 MHz
#define SYSCTL_RCC_XTAL_5_12MHZ        0x00000280  // 5.12 MHz
#define SYSCTL_RCC_XTAL_6MHZ           0x000002C0  // 6 MHz
#define SYSCTL_RCC_XTAL_6_14MHZ        0x00000300  // 6.144 MHz
#define SYSCTL_RCC_XTAL_7_37MHZ        0x00000340  // 7.3728 MHz
#define SYSCTL_RCC_XTAL_8MHZ           0x00000380  // 8 MHz
#define SYSCTL_RCC_XTAL_8_19MHZ        0x000003C0  // 8.192 MHz
#define SYSCTL_RCC_XTAL_10MHZ          0x00000400  // 10 MHz
#define SYSCTL_RCC_XTAL_12MHZ          0x00000440  // 12 MHz
#define SYSCTL_RCC_XTAL_12_2MHZ        0x00000480  // 12.288 MHz
#define SYSCTL_RCC_XTAL_13_5MHZ        0x000004C0  // 13.56 MHz
#define SYSCTL_RCC_XTAL_14_3MHZ        0x00000500  // 14.31818 MHz
#define SYSCTL_RCC_XTAL_16MHZ          0x00000540  // 16 MHz
#define SYSCTL_RCC_XTAL_16_3MHZ        0x00000580  // 16.384 MHz
#define SYSCTL_RCC_XTAL_18MHZ          0x000005C0  // 18.0 MHz
#define SYSCTL_RCC_XTAL_20MHZ          0x00000600  // 20.0 MHz
#define SYSCTL_RCC_XTAL_24MHZ          0x00000640  // 24.0 MHz
#define SYSCTL_RCC_XTAL_25MHZ          0x00000680  // 25.0 MHz
#define SYSCTL_RCC_PLLVER              0x00000400  // PLL Verification
#define SYSCTL_RCC_OSCSRC_M            0x00000030  // Oscillator Source
#define SYSCTL_RCC_OSCSRC_MAIN         0x00000000  // MOSC
#define SYSCTL_RCC_OSCSRC_INT          0x00000010  // IOSC
#define SYSCTL_RCC_OSCSRC_INT4         0x00000020  // IOSC/4
#define SYSCTL_RCC_OSCSRC_30           0x00000030  // 30 kHz
#define SYSCTL_RCC_IOSCVER             0x00000008  // Internal Oscillator Verification Timer
#define SYSCTL_RCC_MOSCVER             0x00000004  // Main Oscillator Verification Timer
#define SYSCTL_RCC_IOSCDIS             0x00000002  // Internal Oscillator Disable
#define SYSCTL_RCC_MOSCDIS             0x00000001  // Main Oscillator Disable
#define SYSCTL_RCC_SYSDIV_S            23
#define SYSCTL_RCC_PWMDIV_S            17          // Shift to the PWMDIV field
#define SYSCTL_RCC_XTAL_S              6           // Shift to the XTAL field
#define SYSCTL_RCC_OSCSRC_S            4           // Shift to the OSCSRC field

#define SYSCTL_PLLCFG_OD_M             0x0000C000  // PLL OD Value
#define SYSCTL_PLLCFG_OD_1             0x00000000  // Divide by 1
#define SYSCTL_PLLCFG_OD_2             0x00004000  // Divide by 2
#define SYSCTL_PLLCFG_OD_4             0x00008000  // Divide by 4
#define SYSCTL_PLLCFG_F_M              0x00003FE0  // PLL F Value
#define SYSCTL_PLLCFG_R_M              0x0000001F  // PLL R Value
#define SYSCTL_PLLCFG_F_S              5
#define SYSCTL_PLLCFG_R_S              0

#define SYSCTL_GPIOHBCTL_PORTJ         0x00000100  // Port J Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTH         0x00000080  // Port H Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTG         0x00000040  // Port G Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTF         0x00000020  // Port F Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTE         0x00000010  // Port E Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTD         0x00000008  // Port D Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTC         0x00000004  // Port C Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTB         0x00000002  // Port B Advanced High-Performance Bus
#define SYSCTL_GPIOHBCTL_PORTA         0x00000001  // Port A Advanced High-Performance Bus

#define SYSCTL_RCC2_USERCC2            0x80000000  // Use RCC2
#define SYSCTL_RCC2_DIV400             0x40000000  // Divide PLL as 400 MHz vs. 200 MHz
#define SYSCTL_RCC2_SYSDIV2_M          0x1F800000  // System Clock Divisor 2
#define SYSCTL_RCC2_SYSDIV2_2          0x00800000  // System clock /2
#define SYSCTL_RCC2_SYSDIV2_3          0x01000000  // System clock /3
#define SYSCTL_RCC2_SYSDIV2_4          0x01800000  // System clock /4
#define SYSCTL_RCC2_SYSDIV2_5          0x02000000  // System clock /5
#define SYSCTL_RCC2_SYSDIV2_6          0x02800000  // System clock /6
#define SYSCTL_RCC2_SYSDIV2_7          0x03000000  // System clock /7
#define SYSCTL_RCC2_SYSDIV2_8          0x03800000  // System clock /8
#define SYSCTL_RCC2_SYSDIV2_9          0x04000000  // System clock /9
#define SYSCTL_RCC2_SYSDIV2_10         0x04800000  // System clock /10
#define SYSCTL_RCC2_SYSDIV2_11         0x05000000  // System clock /11
#define SYSCTL_RCC2_SYSDIV2_12         0x05800000  // System clock /12
#define SYSCTL_RCC2_SYSDIV2_13         0x06000000  // System clock /13
#define SYSCTL_RCC2_SYSDIV2_14         0x06800000  // System clock /14
#define SYSCTL_RCC2_SYSDIV2_15         0x07000000  // System clock /15
#define SYSCTL_RCC2_SYSDIV2_16         0x07800000  // System clock /16
#define SYSCTL_RCC2_SYSDIV2_17         0x08000000  // System clock /17
#define SYSCTL_RCC2_SYSDIV2_18         0x08800000  // System clock /18
#define SYSCTL_RCC2_SYSDIV2_19         0x09000000  // System clock /19
#define SYSCTL_RCC2_SYSDIV2_20         0x09800000  // System clock /20
#define SYSCTL_RCC2_SYSDIV2_21         0x0A000000  // System clock /21
#define SYSCTL_RCC2_SYSDIV2_22         0x0A800000  // System clock /22
#define SYSCTL_RCC2_SYSDIV2_23         0x0B000000  // System clock /23
#define SYSCTL_RCC2_SYSDIV2_24         0x0B800000  // System clock /24
#define SYSCTL_RCC2_SYSDIV2_25         0x0C000000  // System clock /25
#define SYSCTL_RCC2_SYSDIV2_26         0x0C800000  // System clock /26
#define SYSCTL_RCC2_SYSDIV2_27         0x0D000000  // System clock /27
#define SYSCTL_RCC2_SYSDIV2_28         0x0D800000  // System clock /28
#define SYSCTL_RCC2_SYSDIV2_29         0x0E000000  // System clock /29
#define SYSCTL_RCC2_SYSDIV2_30         0x0E800000  // System clock /30
#define SYSCTL_RCC2_SYSDIV2_31         0x0F000000  // System clock /31
#define SYSCTL_RCC2_SYSDIV2_32         0x0F800000  // System clock /32
#define SYSCTL_RCC2_SYSDIV2_33         0x10000000  // System clock /33
#define SYSCTL_RCC2_SYSDIV2_34         0x10800000  // System clock /34
#define SYSCTL_RCC2_SYSDIV2_35         0x11000000  // System clock /35
#define SYSCTL_RCC2_SYSDIV2_36         0x11800000  // System clock /36
#define SYSCTL_RCC2_SYSDIV2_37         0x12000000  // System clock /37
#define SYSCTL_RCC2_SYSDIV2_38         0x12800000  // System clock /38
#define SYSCTL_RCC2_SYSDIV2_39         0x13000000  // System clock /39
#define SYSCTL_RCC2_SYSDIV2_40         0x13800000  // System clock /40
#define SYSCTL_RCC2_SYSDIV2_41         0x14000000  // System clock /41
#define SYSCTL_RCC2_SYSDIV2_42         0x14800000  // System clock /42
#define SYSCTL_RCC2_SYSDIV2_43         0x15000000  // System clock /43
#define SYSCTL_RCC2_SYSDIV2_44         0x15800000  // System clock /44
#define SYSCTL_RCC2_SYSDIV2_45         0x16000000  // System clock /45
#define SYSCTL_RCC2_SYSDIV2_46         0x16800000  // System clock /46
#define SYSCTL_RCC2_SYSDIV2_47         0x17000000  // System clock /47
#define SYSCTL_RCC2_SYSDIV2_48         0x17800000  // System clock /48
#define SYSCTL_RCC2_SYSDIV2_49         0x18000000  // System clock /49
#define SYSCTL_RCC2_SYSDIV2_50         0x18800000  // System clock /50
#define SYSCTL_RCC2_SYSDIV2_51         0x19000000  // System clock /51
#define SYSCTL_RCC2_SYSDIV2_52         0x19800000  // System clock /52
#define SYSCTL_RCC2_SYSDIV2_53         0x1A000000  // System clock /53
#define SYSCTL_RCC2_SYSDIV2_54         0x1A800000  // System clock /54
#define SYSCTL_RCC2_SYSDIV2_55         0x1B000000  // System clock /55
#define SYSCTL_RCC2_SYSDIV2_56         0x1B800000  // System clock /56
#define SYSCTL_RCC2_SYSDIV2_57         0x1C000000  // System clock /57
#define SYSCTL_RCC2_SYSDIV2_58         0x1C800000  // System clock /58
#define SYSCTL_RCC2_SYSDIV2_59         0x1D000000  // System clock /59
#define SYSCTL_RCC2_SYSDIV2_60         0x1D800000  // System clock /60
#define SYSCTL_RCC2_SYSDIV2_61         0x1E000000  // System clock /61
#define SYSCTL_RCC2_SYSDIV2_62         0x1E800000  // System clock /62
#define SYSCTL_RCC2_SYSDIV2_63         0x1F000000  // System clock /63
#define SYSCTL_RCC2_SYSDIV2_64         0x1F800000  // System clock /64
#define SYSCTL_RCC2_SYSDIV2LSB         0x00400000  // Additional LSB for SYSDIV2
#define SYSCTL_RCC2_USBPWRDN           0x00004000  // Power-Down USB PLL
#define SYSCTL_RCC2_PWRDN2             0x00002000  // Power-Down PLL 2
#define SYSCTL_RCC2_BYPASS2            0x00000800  // PLL Bypass 2
#define SYSCTL_RCC2_OSCSRC2_M          0x00000070  // Oscillator Source 2
#define SYSCTL_RCC2_OSCSRC2_MO         0x00000000  // MOSC
#define SYSCTL_RCC2_OSCSRC2_IO         0x00000010  // PIOSC
#define SYSCTL_RCC2_OSCSRC2_IO4        0x00000020  // PIOSC/4
#define SYSCTL_RCC2_OSCSRC2_30         0x00000030  // 30 kHz
#define SYSCTL_RCC2_OSCSRC2_419        0x00000060  // 4.194304 MHz
#define SYSCTL_RCC2_OSCSRC2_32         0x00000070  // 32.768 kHz
#define SYSCTL_RCC2_SYSDIV2_S          23

#define SYSCTL_MOSCCTL_NOXTAL          0x00000004  // No Crystal Connected
#define SYSCTL_MOSCCTL_MOSCIM          0x00000002  // MOSC Failure Action
#define SYSCTL_MOSCCTL_CVAL            0x00000001  // Clock Validation for MOSC

#define SYSCTL_RCGC0_WDT1              0x10000000  // WDT1 Clock Gating Control
#define SYSCTL_RCGC0_CAN2              0x04000000  // CAN2 Clock Gating Control
#define SYSCTL_RCGC0_CAN1              0x02000000  // CAN1 Clock Gating Control
#define SYSCTL_RCGC0_CAN0              0x01000000  // CAN0 Clock Gating Control
#define SYSCTL_RCGC0_PWM0              0x00100000  // PWM Clock Gating Control
#define SYSCTL_RCGC0_ADC1              0x00020000  // ADC1 Clock Gating Control
#define SYSCTL_RCGC0_ADC0              0x00010000  // ADC0 Clock Gating Control
#define SYSCTL_RCGC0_ADCSPD_M          0x00000F00  // ADC Sample Speed
#define SYSCTL_RCGC0_ADCSPD125K        0x00000000  // 125K samples/second
#define SYSCTL_RCGC0_ADCSPD250K        0x00000100  // 250K samples/second
#define SYSCTL_RCGC0_ADCSPD500K        0x00000200  // 500K samples/second
#define SYSCTL_RCGC0_ADCSPD1M          0x00000300  // 1M samples/second
#define SYSCTL_RCGC0_ADC1SPD_M         0x00000C00  // ADC1 Sample Speed
#define SYSCTL_RCGC0_ADC1SPD_125K      0x00000000  // 125K samples/second
#define SYSCTL_RCGC0_ADC1SPD_250K      0x00000400  // 250K samples/second
#define SYSCTL_RCGC0_ADC1SPD_500K      0x00000800  // 500K samples/second
#define SYSCTL_RCGC0_ADC1SPD_1M        0x00000C00  // 1M samples/second
#define SYSCTL_RCGC0_ADC0SPD_M         0x00000300  // ADC0 Sample Speed
#define SYSCTL_RCGC0_ADC0SPD_125K      0x00000000  // 125K samples/second
#define SYSCTL_RCGC0_ADC0SPD_250K      0x00000100  // 250K samples/second
#define SYSCTL_RCGC0_ADC0SPD_500K      0x00000200  // 500K samples/second
#define SYSCTL_RCGC0_ADC0SPD_1M        0x00000300  // 1M samples/second
#define SYSCTL_RCGC0_HIB               0x00000040  // HIB Clock Gating Control
#define SYSCTL_RCGC0_WDT0              0x00000008  // WDT0 Clock Gating Control

#define SYSCTL_RCGC1_EPI0              0x40000000  // EPI0 Clock Gating
#define SYSCTL_RCGC1_I2S0              0x10000000  // I2S0 Clock Gating
#define SYSCTL_RCGC1_COMP2             0x04000000  // Analog Comparator 2 Clock Gating
#define SYSCTL_RCGC1_COMP1             0x02000000  // Analog Comparator 1 Clock Gating
#define SYSCTL_RCGC1_COMP0             0x01000000  // Analog Comparator 0 Clock Gating
#define SYSCTL_RCGC1_TIMER3            0x00080000  // Timer 3 Clock Gating Control
#define SYSCTL_RCGC1_TIMER2            0x00040000  // Timer 2 Clock Gating Control
#define SYSCTL_RCGC1_TIMER1            0x00020000  // Timer 1 Clock Gating Control
#define SYSCTL_RCGC1_TIMER0            0x00010000  // Timer 0 Clock Gating Control
#define SYSCTL_RCGC1_I2C1              0x00004000  // I2C1 Clock Gating Control
#define SYSCTL_RCGC1_I2C0              0x00001000  // I2C0 Clock Gating Control
#define SYSCTL_RCGC1_QEI1              0x00000200  // QEI1 Clock Gating Control
#define SYSCTL_RCGC1_QEI0              0x00000100  // QEI0 Clock Gating Control
#define SYSCTL_RCGC1_SSI1              0x00000020  // SSI1 Clock Gating Control
#define SYSCTL_RCGC1_SSI0              0x00000010  // SSI0 Clock Gating Control
#define SYSCTL_RCGC1_UART2             0x00000004  // UART2 Clock Gating Control
#define SYSCTL_RCGC1_UART1             0x00000002  // UART1 Clock Gating Control
#define SYSCTL_RCGC1_UART0             0x00000001  // UART0 Clock Gating Control

#define SYSCTL_RCGC2_EPHY0             0x40000000  // PHY0 Clock Gating Control
#define SYSCTL_RCGC2_EMAC0             0x10000000  // MAC0 Clock Gating Control
#define SYSCTL_RCGC2_USB0              0x00010000  // USB0 Clock Gating Control
#define SYSCTL_RCGC2_UDMA              0x00002000  // Micro-DMA Clock Gating Control
#define SYSCTL_RCGC2_GPIOJ             0x00000100  // Port J Clock Gating Control
#define SYSCTL_RCGC2_GPIOH             0x00000080  // Port H Clock Gating Control
#define SYSCTL_RCGC2_GPIOG             0x00000040  // Port G Clock Gating Control
#define SYSCTL_RCGC2_GPIOF             0x00000020  // Port F Clock Gating Control
#define SYSCTL_RCGC2_GPIOE             0x00000010  // Port E Clock Gating Control
#define SYSCTL_RCGC2_GPIOD             0x00000008  // Port D Clock Gating Control
#define SYSCTL_RCGC2_GPIOC             0x00000004  // Port C Clock Gating Control
#define SYSCTL_RCGC2_GPIOB             0x00000002  // Port B Clock Gating Control
#define SYSCTL_RCGC2_GPIOA             0x00000001  // Port A Clock Gating Control

#define SYSCTL_SCGC0_WDT1              0x10000000  // WDT1 Clock Gating Control
#define SYSCTL_SCGC0_CAN2              0x04000000  // CAN2 Clock Gating Control
#define SYSCTL_SCGC0_CAN1              0x02000000  // CAN1 Clock Gating Control
#define SYSCTL_SCGC0_CAN0              0x01000000  // CAN0 Clock Gating Control
#define SYSCTL_SCGC0_PWM0              0x00100000  // PWM Clock Gating Control
#define SYSCTL_SCGC0_ADC1              0x00020000  // ADC1 Clock Gating Control
#define SYSCTL_SCGC0_ADC0              0x00010000  // ADC0 Clock Gating Control
#define SYSCTL_SCGC0_ADCSPD_M          0x00000F00  // ADC Sample Speed
#define SYSCTL_SCGC0_ADCSPD125K        0x00000000  // 125K samples/second
#define SYSCTL_SCGC0_ADCSPD250K        0x00000100  // 250K samples/second
#define SYSCTL_SCGC0_ADCSPD500K        0x00000200  // 500K samples/second
#define SYSCTL_SCGC0_ADCSPD1M          0x00000300  // 1M samples/second
#define SYSCTL_SCGC0_ADC1SPD_M         0x00000C00  // ADC1 Sample Speed
#define SYSCTL_SCGC0_ADC1SPD_125K      0x00000000  // 125K samples/second
#define SYSCTL_SCGC0_ADC1SPD_250K      0x00000400  // 250K samples/second
#define SYSCTL_SCGC0_ADC1SPD_500K      0x00000800  // 500K samples/second
#define SYSCTL_SCGC0_ADC1SPD_1M        0x00000C00  // 1M samples/second
#define SYSCTL_SCGC0_ADC0SPD_M         0x00000300  // ADC0 Sample Speed
#define SYSCTL_SCGC0_ADC0SPD_125K      0x00000000  // 125K samples/second
#define SYSCTL_SCGC0_ADC0SPD_250K      0x00000100  // 250K samples/second
#define SYSCTL_SCGC0_ADC0SPD_500K      0x00000200  // 500K samples/second
#define SYSCTL_SCGC0_ADC0SPD_1M        0x00000300  // 1M samples/second
#define SYSCTL_SCGC0_HIB               0x00000040  // HIB Clock Gating Control
#define SYSCTL_SCGC0_WDT0              0x00000008  // WDT0 Clock Gating Control

#define SYSCTL_SCGC1_EPI0              0x40000000  // EPI0 Clock Gating
#define SYSCTL_SCGC1_I2S0              0x10000000  // I2S0 Clock Gating
#define SYSCTL_SCGC1_COMP2             0x04000000  // Analog Comparator 2 Clock Gating
#define SYSCTL_SCGC1_COMP1             0x02000000  // Analog Comparator 1 Clock Gating
#define SYSCTL_SCGC1_COMP0             0x01000000  // Analog Comparator 0 Clock Gating
#define SYSCTL_SCGC1_TIMER3            0x00080000  // Timer 3 Clock Gating Control
#define SYSCTL_SCGC1_TIMER2            0x00040000  // Timer 2 Clock Gating Control
#define SYSCTL_SCGC1_TIMER1            0x00020000  // Timer 1 Clock Gating Control
#define SYSCTL_SCGC1_TIMER0            0x00010000  // Timer 0 Clock Gating Control
#define SYSCTL_SCGC1_I2C1              0x00004000  // I2C1 Clock Gating Control
#define SYSCTL_SCGC1_I2C0              0x00001000  // I2C0 Clock Gating Control
#define SYSCTL_SCGC1_QEI1              0x00000200  // QEI1 Clock Gating Control
#define SYSCTL_SCGC1_QEI0              0x00000100  // QEI0 Clock Gating Control
#define SYSCTL_SCGC1_SSI1              0x00000020  // SSI1 Clock Gating Control
#define SYSCTL_SCGC1_SSI0              0x00000010  // SSI0 Clock Gating Control
#define SYSCTL_SCGC1_UART2             0x00000004  // UART2 Clock Gating Control
#define SYSCTL_SCGC1_UART1             0x00000002  // UART1 Clock Gating Control
#define SYSCTL_SCGC1_UART0             0x00000001  // UART0 Clock Gating Control

#define SYSCTL_SCGC2_EPHY0             0x40000000  // PHY0 Clock Gating Control
#define SYSCTL_SCGC2_EMAC0             0x10000000  // MAC0 Clock Gating Control
#define SYSCTL_SCGC2_USB0              0x00010000  // USB0 Clock Gating Control
#define SYSCTL_SCGC2_UDMA              0x00002000  // Micro-DMA Clock Gating Control
#define SYSCTL_SCGC2_GPIOJ             0x00000100  // Port J Clock Gating Control
#define SYSCTL_SCGC2_GPIOH             0x00000080  // Port H Clock Gating Control
#define SYSCTL_SCGC2_GPIOG             0x00000040  // Port G Clock Gating Control
#define SYSCTL_SCGC2_GPIOF             0x00000020  // Port F Clock Gating Control
#define SYSCTL_SCGC2_GPIOE             0x00000010  // Port E Clock Gating Control
#define SYSCTL_SCGC2_GPIOD             0x00000008  // Port D Clock Gating Control
#define SYSCTL_SCGC2_GPIOC             0x00000004  // Port C Clock Gating Control
#define SYSCTL_SCGC2_GPIOB             0x00000002  // Port B Clock Gating Control
#define SYSCTL_SCGC2_GPIOA             0x00000001  // Port A Clock Gating Control

#define SYSCTL_DCGC0_WDT1              0x10000000  // WDT1 Clock Gating Control
#define SYSCTL_DCGC0_CAN2              0x04000000  // CAN2 Clock Gating Control
#define SYSCTL_DCGC0_CAN1              0x02000000  // CAN1 Clock Gating Control
#define SYSCTL_DCGC0_CAN0              0x01000000  // CAN0 Clock Gating Control
#define SYSCTL_DCGC0_PWM0              0x00100000  // PWM Clock Gating Control
#define SYSCTL_DCGC0_ADC1              0x00020000  // ADC1 Clock Gating Control
#define SYSCTL_DCGC0_ADC0              0x00010000  // ADC0 Clock Gating Control
#define SYSCTL_DCGC0_HIB               0x00000040  // HIB Clock Gating Control
#define SYSCTL_DCGC0_WDT0              0x00000008  // WDT0 Clock Gating Control

#define SYSCTL_DCGC1_EPI0              0x40000000  // EPI0 Clock Gating
#define SYSCTL_DCGC1_I2S0              0x10000000  // I2S0 Clock Gating
#define SYSCTL_DCGC1_COMP2             0x04000000  // Analog Comparator 2 Clock Gating
#define SYSCTL_DCGC1_COMP1             0x02000000  // Analog Comparator 1 Clock Gating
#define SYSCTL_DCGC1_COMP0             0x01000000  // Analog Comparator 0 Clock Gating
#define SYSCTL_DCGC1_TIMER3            0x00080000  // Timer 3 Clock Gating Control
#define SYSCTL_DCGC1_TIMER2            0x00040000  // Timer 2 Clock Gating Control
#define SYSCTL_DCGC1_TIMER1            0x00020000  // Timer 1 Clock Gating Control
#define SYSCTL_DCGC1_TIMER0            0x00010000  // Timer 0 Clock Gating Control
#define SYSCTL_DCGC1_I2C1              0x00004000  // I2C1 Clock Gating Control
#define SYSCTL_DCGC1_I2C0              0x00001000  // I2C0 Clock Gating Control
#define SYSCTL_DCGC1_QEI1              0x00000200  // QEI1 Clock Gating Control
#define SYSCTL_DCGC1_QEI0              0x00000100  // QEI0 Clock Gating Control
#define SYSCTL_DCGC1_SSI1              0x00000020  // SSI1 Clock Gating Control
#define SYSCTL_DCGC1_SSI0              0x00000010  // SSI0 Clock Gating Control
#define SYSCTL_DCGC1_UART2             0x00000004  // UART2 Clock Gating Control
#define SYSCTL_DCGC1_UART1             0x00000002  // UART1 Clock Gating Control
#define SYSCTL_DCGC1_UART0             0x00000001  // UART0 Clock Gating Control

#define SYSCTL_DCGC2_EPHY0             0x40000000  // PHY0 Clock Gating Control
#define SYSCTL_DCGC2_EMAC0             0x10000000  // MAC0 Clock Gating Control
#define SYSCTL_DCGC2_USB0              0x00010000  // USB0 Clock Gating Control
#define SYSCTL_DCGC2_UDMA              0x00002000  // Micro-DMA Clock Gating Control
#define SYSCTL_DCGC2_GPIOJ             0x00000100  // Port J Clock Gating Control
#define SYSCTL_DCGC2_GPIOH             0x00000080  // Port H Clock Gating Control
#define SYSCTL_DCGC2_GPIOG             0x00000040  // Port G Clock Gating Control
#define SYSCTL_DCGC2_GPIOF             0x00000020  // Port F Clock Gating Control
#define SYSCTL_DCGC2_GPIOE             0x00000010  // Port E Clock Gating Control
#define SYSCTL_DCGC2_GPIOD             0x00000008  // Port D Clock Gating Control
#define SYSCTL_DCGC2_GPIOC             0x00000004  // Port C Clock Gating Control
#define SYSCTL_DCGC2_GPIOB             0x00000002  // Port B Clock Gating Control
#define SYSCTL_DCGC2_GPIOA             0x00000001  // Port A Clock Gating Contro

#define SYSCTL_DSLPCLKCFG_D_M          0x1F800000  // Divider Field Override
#define SYSCTL_DSLPCLKCFG_D_1          0x00000000  // System clock /1
#define SYSCTL_DSLPCLKCFG_D_2          0x00800000  // System clock /2
#define SYSCTL_DSLPCLKCFG_D_3          0x01000000  // System clock /3
#define SYSCTL_DSLPCLKCFG_D_4          0x01800000  // System clock /4
#define SYSCTL_DSLPCLKCFG_D_5          0x02000000  // System clock /5
#define SYSCTL_DSLPCLKCFG_D_6          0x02800000  // System clock /6
#define SYSCTL_DSLPCLKCFG_D_7          0x03000000  // System clock /7
#define SYSCTL_DSLPCLKCFG_D_8          0x03800000  // System clock /8
#define SYSCTL_DSLPCLKCFG_D_9          0x04000000  // System clock /9
#define SYSCTL_DSLPCLKCFG_D_10         0x04800000  // System clock /10
#define SYSCTL_DSLPCLKCFG_D_11         0x05000000  // System clock /11
#define SYSCTL_DSLPCLKCFG_D_12         0x05800000  // System clock /12
#define SYSCTL_DSLPCLKCFG_D_13         0x06000000  // System clock /13
#define SYSCTL_DSLPCLKCFG_D_14         0x06800000  // System clock /14
#define SYSCTL_DSLPCLKCFG_D_15         0x07000000  // System clock /15
#define SYSCTL_DSLPCLKCFG_D_16         0x07800000  // System clock /16
#define SYSCTL_DSLPCLKCFG_D_17         0x08000000  // System clock /17
#define SYSCTL_DSLPCLKCFG_D_18         0x08800000  // System clock /18
#define SYSCTL_DSLPCLKCFG_D_19         0x09000000  // System clock /19
#define SYSCTL_DSLPCLKCFG_D_20         0x09800000  // System clock /20
#define SYSCTL_DSLPCLKCFG_D_21         0x0A000000  // System clock /21
#define SYSCTL_DSLPCLKCFG_D_22         0x0A800000  // System clock /22
#define SYSCTL_DSLPCLKCFG_D_23         0x0B000000  // System clock /23
#define SYSCTL_DSLPCLKCFG_D_24         0x0B800000  // System clock /24
#define SYSCTL_DSLPCLKCFG_D_25         0x0C000000  // System clock /25
#define SYSCTL_DSLPCLKCFG_D_26         0x0C800000  // System clock /26
#define SYSCTL_DSLPCLKCFG_D_27         0x0D000000  // System clock /27
#define SYSCTL_DSLPCLKCFG_D_28         0x0D800000  // System clock /28
#define SYSCTL_DSLPCLKCFG_D_29         0x0E000000  // System clock /29
#define SYSCTL_DSLPCLKCFG_D_30         0x0E800000  // System clock /30
#define SYSCTL_DSLPCLKCFG_D_31         0x0F000000  // System clock /31
#define SYSCTL_DSLPCLKCFG_D_32         0x0F800000  // System clock /32
#define SYSCTL_DSLPCLKCFG_D_33         0x10000000  // System clock /33
#define SYSCTL_DSLPCLKCFG_D_34         0x10800000  // System clock /34
#define SYSCTL_DSLPCLKCFG_D_35         0x11000000  // System clock /35
#define SYSCTL_DSLPCLKCFG_D_36         0x11800000  // System clock /36
#define SYSCTL_DSLPCLKCFG_D_37         0x12000000  // System clock /37
#define SYSCTL_DSLPCLKCFG_D_38         0x12800000  // System clock /38
#define SYSCTL_DSLPCLKCFG_D_39         0x13000000  // System clock /39
#define SYSCTL_DSLPCLKCFG_D_40         0x13800000  // System clock /40
#define SYSCTL_DSLPCLKCFG_D_41         0x14000000  // System clock /41
#define SYSCTL_DSLPCLKCFG_D_42         0x14800000  // System clock /42
#define SYSCTL_DSLPCLKCFG_D_43         0x15000000  // System clock /43
#define SYSCTL_DSLPCLKCFG_D_44         0x15800000  // System clock /44
#define SYSCTL_DSLPCLKCFG_D_45         0x16000000  // System clock /45
#define SYSCTL_DSLPCLKCFG_D_46         0x16800000  // System clock /46
#define SYSCTL_DSLPCLKCFG_D_47         0x17000000  // System clock /47
#define SYSCTL_DSLPCLKCFG_D_48         0x17800000  // System clock /48
#define SYSCTL_DSLPCLKCFG_D_49         0x18000000  // System clock /49
#define SYSCTL_DSLPCLKCFG_D_50         0x18800000  // System clock /50
#define SYSCTL_DSLPCLKCFG_D_51         0x19000000  // System clock /51
#define SYSCTL_DSLPCLKCFG_D_52         0x19800000  // System clock /52
#define SYSCTL_DSLPCLKCFG_D_53         0x1A000000  // System clock /53
#define SYSCTL_DSLPCLKCFG_D_54         0x1A800000  // System clock /54
#define SYSCTL_DSLPCLKCFG_D_55         0x1B000000  // System clock /55
#define SYSCTL_DSLPCLKCFG_D_56         0x1B800000  // System clock /56
#define SYSCTL_DSLPCLKCFG_D_57         0x1C000000  // System clock /57
#define SYSCTL_DSLPCLKCFG_D_58         0x1C800000  // System clock /58
#define SYSCTL_DSLPCLKCFG_D_59         0x1D000000  // System clock /59
#define SYSCTL_DSLPCLKCFG_D_60         0x1D800000  // System clock /60
#define SYSCTL_DSLPCLKCFG_D_61         0x1E000000  // System clock /61
#define SYSCTL_DSLPCLKCFG_D_62         0x1E800000  // System clock /62
#define SYSCTL_DSLPCLKCFG_D_63         0x1F000000  // System clock /63
#define SYSCTL_DSLPCLKCFG_D_64         0x1F800000  // System clock /64
#define SYSCTL_DSLPCLKCFG_O_M          0x00000070  // Clock Source
#define SYSCTL_DSLPCLKCFG_O_IGN        0x00000000  // MOSC
#define SYSCTL_DSLPCLKCFG_O_IO         0x00000010  // PIOSC
#define SYSCTL_DSLPCLKCFG_O_30         0x00000030  // 30 kHz
#define SYSCTL_DSLPCLKCFG_O_32         0x00000070  // 32.768 kHz
#define SYSCTL_DSLPCLKCFG_PIOSCPD      0x00000002  // PIOSC Power Down Request
#define SYSCTL_DSLPCLKCFG_IOSC         0x00000001  // IOSC Clock Source
#define SYSCTL_DSLPCLKCFG_D_S          23

#define SYSCTL_PIOSCCAL_UTEN           0x80000000  // Use User Trim Value
#define SYSCTL_PIOSCCAL_CAL            0x00000200  // Start Calibration
#define SYSCTL_PIOSCCAL_UPDATE         0x00000100  // Update Trim
#define SYSCTL_PIOSCCAL_UT_M           0x0000007F  // User Trim Value
#define SYSCTL_PIOSCCAL_UT_S           0

#define SYSCTL_PIOSCSTAT_DT_M          0x007F0000  // Default Trim Value
#define SYSCTL_PIOSCSTAT_CR_M          0x00000300  // Calibration Result
#define SYSCTL_PIOSCSTAT_CRNONE        0x00000000  // Calibration has not been attempted
#define SYSCTL_PIOSCSTAT_CRPASS        0x00000100  // The last calibration operation completed to meet 1% accuracy
#define SYSCTL_PIOSCSTAT_CRFAIL        0x00000200  // The last calibration operation failed to meet 1% accuracy
#define SYSCTL_PIOSCSTAT_CT_M          0x0000007F  // Calibration Trim Value
#define SYSCTL_PIOSCSTAT_DT_S          16
#define SYSCTL_PIOSCSTAT_CT_S          0

#define SYSCTL_LDOARST_LDOARST         0x00000001  // LDO Reset

#define SYSCTL_I2SMCLKCFG_RXEN         0x80000000  // RX Clock Enable
#define SYSCTL_I2SMCLKCFG_RXI_M        0x3FF00000  // RX Clock Integer Input
#define SYSCTL_I2SMCLKCFG_RXF_M        0x000F0000  // RX Clock Fractional Input
#define SYSCTL_I2SMCLKCFG_TXEN         0x00008000  // TX Clock Enable
#define SYSCTL_I2SMCLKCFG_TXI_M        0x00003FF0  // TX Clock Integer Input
#define SYSCTL_I2SMCLKCFG_TXF_M        0x0000000F  // TX Clock Fractional Input
#define SYSCTL_I2SMCLKCFG_RXI_S        20
#define SYSCTL_I2SMCLKCFG_RXF_S        16
#define SYSCTL_I2SMCLKCFG_TXI_S        4
#define SYSCTL_I2SMCLKCFG_TXF_S        0

#define SYSCTL_DC9_ADC1DC7             0x00800000  // ADC1 DC7 Present
#define SYSCTL_DC9_ADC1DC6             0x00400000  // ADC1 DC6 Present
#define SYSCTL_DC9_ADC1DC5             0x00200000  // ADC1 DC5 Present
#define SYSCTL_DC9_ADC1DC4             0x00100000  // ADC1 DC4 Present
#define SYSCTL_DC9_ADC1DC3             0x00080000  // ADC1 DC3 Present
#define SYSCTL_DC9_ADC1DC2             0x00040000  // ADC1 DC2 Present
#define SYSCTL_DC9_ADC1DC1             0x00020000  // ADC1 DC1 Present
#define SYSCTL_DC9_ADC1DC0             0x00010000  // ADC1 DC0 Present
#define SYSCTL_DC9_ADC0DC7             0x00000080  // ADC0 DC7 Present
#define SYSCTL_DC9_ADC0DC6             0x00000040  // ADC0 DC6 Present
#define SYSCTL_DC9_ADC0DC5             0x00000020  // ADC0 DC5 Present
#define SYSCTL_DC9_ADC0DC4             0x00000010  // ADC0 DC4 Present
#define SYSCTL_DC9_ADC0DC3             0x00000008  // ADC0 DC3 Present
#define SYSCTL_DC9_ADC0DC2             0x00000004  // ADC0 DC2 Present
#define SYSCTL_DC9_ADC0DC1             0x00000002  // ADC0 DC1 Present
#define SYSCTL_DC9_ADC0DC0             0x00000001  // ADC0 DC0 Present

#define SYSCTL_NVMSTAT_TPSW            0x00000010  // Third Party Software Present
#define SYSCTL_NVMSTAT_FWB             0x00000001  // 32 Word Flash Write Buffer Active

//**************************************************************************************************
// WATCHDOG
//**************************************************************************************************
// short name
#define WDT                            WATCHDOG0 
                                       
#define WDT_CTL_RESEN                  0x00000002  // Watchdog Reset Enable
#define WDT_CTL_INTEN                  0x00000001  // Watchdog Interrupt Enable
                                       
#define WDT_RIS_WDTRIS                 0x00000001  // Watchdog Raw Interrupt Status
                                       
#define WDT_MIS_WDTMIS                 0x00000001  // Watchdog Masked Interrupt Status
                                       
#define WDT_TEST_STALL                 0x00000100  // Watchdog Stall Enable
                                       
#define WDT_LOCK_LOCKED                0x00000001  // Locked
#define WDT_LOCK_UNLOCK                0x1ACCE551  // Unlocks the watchdog timer

//**************************************************************************************************
// GPIO
//**************************************************************************************************
#define GPIO_LOCK_LOCKED               0x00000001  // The GPIOCR register is locked and may not be modified
#define GPIO_LOCK_KEY                  0x1ACCE551  // Unlocks the GPIO_CR register

//**************************************************************************************************
// SSI
//**************************************************************************************************
#define SSI_CR0_SCR_M                  0x0000FF00  // SSI Serial Clock Rate
#define SSI_CR0_SPH                    0x00000080  // SSI Serial Clock Phase
#define SSI_CR0_SPO                    0x00000040  // SSI Serial Clock Polarity
#define SSI_CR0_FRF_M                  0x00000030  // SSI Frame Format Select
#define SSI_CR0_FRF_MOTO               0x00000000  // Freescale SPI Frame Format
#define SSI_CR0_FRF_TI                 0x00000010  // Texas Instruments Synchronous Serial Frame Format
#define SSI_CR0_FRF_NMW                0x00000020  // MICROWIRE Frame Format
#define SSI_CR0_DSS_M                  0x0000000F  // SSI Data Size Select
#define SSI_CR0_DSS_4                  0x00000003  // 4-bit data
#define SSI_CR0_DSS_5                  0x00000004  // 5-bit data
#define SSI_CR0_DSS_6                  0x00000005  // 6-bit data
#define SSI_CR0_DSS_7                  0x00000006  // 7-bit data
#define SSI_CR0_DSS_8                  0x00000007  // 8-bit data
#define SSI_CR0_DSS_9                  0x00000008  // 9-bit data
#define SSI_CR0_DSS_10                 0x00000009  // 10-bit data
#define SSI_CR0_DSS_11                 0x0000000A  // 11-bit data
#define SSI_CR0_DSS_12                 0x0000000B  // 12-bit data
#define SSI_CR0_DSS_13                 0x0000000C  // 13-bit data
#define SSI_CR0_DSS_14                 0x0000000D  // 14-bit data
#define SSI_CR0_DSS_15                 0x0000000E  // 15-bit data
#define SSI_CR0_DSS_16                 0x0000000F  // 16-bit data
#define SSI_CR0_SCR_S                  8

#define SSI_CR1_SOD                    0x00000008  // SSI Slave Mode Output Disable
#define SSI_CR1_MS                     0x00000004  // SSI Master/Slave Select
#define SSI_CR1_SSE                    0x00000002  // SSI Synchronous Serial Port Enable
#define SSI_CR1_LBM                    0x00000001  // SSI Loopback Mode
                                       
#define SSI_DR_DATA_M                  0x0000FFFF  // SSI Receive/Transmit Data
#define SSI_DR_DATA_S                  0
                                       
#define SSI_SR_BSY                     0x00000010  // SSI Busy Bit
#define SSI_SR_RFF                     0x00000008  // SSI Receive FIFO Full
#define SSI_SR_RNE                     0x00000004  // SSI Receive FIFO Not Empty
#define SSI_SR_TNF                     0x00000002  // SSI Transmit FIFO Not Full
#define SSI_SR_TFE                     0x00000001  // SSI Transmit FIFO Empty
                                       
#define SSI_CPSR_CPSDVSR_M             0x000000FF  // SSI Clock Prescale Divisor
#define SSI_CPSR_CPSDVSR_S             0
                                       
#define SSI_IM_TXIM                    0x00000008  // SSI Transmit FIFO Interrupt Mask
#define SSI_IM_RXIM                    0x00000004  // SSI Receive FIFO Interrupt Mask
#define SSI_IM_RTIM                    0x00000002  // SSI Receive Time-Out Interrupt Mask
#define SSI_IM_RORIM                   0x00000001  // SSI Receive Overrun Interrupt Mask
                                       
#define SSI_RIS_TXRIS                  0x00000008  // SSI Transmit FIFO Raw Interrupt Status
#define SSI_RIS_RXRIS                  0x00000004  // SSI Receive FIFO Raw Interrupt Status
#define SSI_RIS_RTRIS                  0x00000002  // SSI Receive Time-Out Raw Interrupt Status
#define SSI_RIS_RORRIS                 0x00000001  // SSI Receive Overrun Raw Interrupt Status
                                       
#define SSI_MIS_TXMIS                  0x00000008  // SSI Transmit FIFO Masked Interrupt Status
#define SSI_MIS_RXMIS                  0x00000004  // SSI Receive FIFO Masked Interrupt Status
#define SSI_MIS_RTMIS                  0x00000002  // SSI Receive Time-Out Masked Interrupt Status
#define SSI_MIS_RORMIS                 0x00000001  // SSI Receive Overrun Masked Interrupt Status
                                       
#define SSI_ICR_RTIC                   0x00000002  // SSI Receive Time-Out Interrupt Clear
#define SSI_ICR_RORIC                  0x00000001  // SSI Receive Overrun Interrupt Clear
                                       
//**************************************************************************************************
// UART                                
//**************************************************************************************************
#define UART_DR_OE                     0x00000800  // UART Overrun Error
#define UART_DR_BE                     0x00000400  // UART Break Error
#define UART_DR_PE                     0x00000200  // UART Parity Error
#define UART_DR_FE                     0x00000100  // UART Framing Error
#define UART_DR_DATA_M                 0x000000FF  // Data Transmitted or Received
#define UART_DR_DATA_S                 0

#define UART_RSR_OE                    0x00000008  // UART Overrun Error
#define UART_RSR_BE                    0x00000004  // UART Break Error
#define UART_RSR_PE                    0x00000002  // UART Parity Error
#define UART_RSR_FE                    0x00000001  // UART Framing Error
                                     
#define UART_ECR_DATA_M                0x000000FF  // Error Clear
#define UART_ECR_DATA_S                0
                           
#define UART_FR_RI                     0x00000100  // Ring Indicator
#define UART_FR_TXFE                   0x00000080  // UART Transmit FIFO Empty
#define UART_FR_RXFF                   0x00000040  // UART Receive FIFO Full
#define UART_FR_TXFF                   0x00000020  // UART Transmit FIFO Full
#define UART_FR_RXFE                   0x00000010  // UART Receive FIFO Empty
#define UART_FR_BUSY                   0x00000008  // UART Busy
#define UART_FR_DCD                    0x00000004  // Data Carrier Detect
#define UART_FR_DSR                    0x00000002  // Data Set Ready
#define UART_FR_CTS                    0x00000001  // Clear To Send
          
#define UART_ILPR_ILPDVSR_M            0x000000FF  // IrDA Low-Power Divisor
#define UART_ILPR_ILPDVSR_S            0
                                     
#define UART_IBRD_DIVINT_M             0x0000FFFF  // Integer Baud-Rate Divisor
#define UART_IBRD_DIVINT_S             0
                                     
#define UART_FBRD_DIVFRAC_M            0x0000003F  // Fractional Baud-Rate Divisor
#define UART_FBRD_DIVFRAC_S            0
                                     
#define UART_LCRH_SPS                  0x00000080  // UART Stick Parity Select
#define UART_LCRH_WLEN_M               0x00000060  // UART Word Length
#define UART_LCRH_WLEN_5               0x00000000  // 5 bits (default)
#define UART_LCRH_WLEN_6               0x00000020  // 6 bits
#define UART_LCRH_WLEN_7               0x00000040  // 7 bits
#define UART_LCRH_WLEN_8               0x00000060  // 8 bits
#define UART_LCRH_FEN                  0x00000010  // UART Enable FIFOs
#define UART_LCRH_STP2                 0x00000008  // UART Two Stop Bits Select
#define UART_LCRH_EPS                  0x00000004  // UART Even Parity Select
#define UART_LCRH_PEN                  0x00000002  // UART Parity Enable
#define UART_LCRH_BRK                  0x00000001  // UART Send Break

#define UART_CTL_CTSEN                 0x00008000  // Enable Clear To Send
#define UART_CTL_RTSEN                 0x00004000  // Enable Request to Send
#define UART_CTL_RTS                   0x00000800  // Request to Send
#define UART_CTL_DTR                   0x00000400  // Data Terminal Ready
#define UART_CTL_RXE                   0x00000200  // UART Receive Enable
#define UART_CTL_TXE                   0x00000100  // UART Transmit Enable
#define UART_CTL_LBE                   0x00000080  // UART Loop Back Enable
#define UART_CTL_LIN                   0x00000040  // LIN Mode Enable
#define UART_CTL_HSE                   0x00000020  // High-Speed Enable
#define UART_CTL_EOT                   0x00000010  // End of Transmission
#define UART_CTL_SMART                 0x00000008  // ISO 7816 Smart Card Support
#define UART_CTL_SIRLP                 0x00000004  // UART SIR Low-Power Mode
#define UART_CTL_SIREN                 0x00000002  // UART SIR Enable
#define UART_CTL_UARTEN                0x00000001  // UART Enable
                                     
#define UART_IFLS_RX_M                 0x00000038  // UART Receive Interrupt FIFO Level Select
#define UART_IFLS_RX1_8                0x00000000  // RX FIFO >= 1/8 full
#define UART_IFLS_RX2_8                0x00000008  // RX FIFO >= 1/4 full
#define UART_IFLS_RX4_8                0x00000010  // RX FIFO >= 1/2 full (default)
#define UART_IFLS_RX6_8                0x00000018  // RX FIFO >= 3/4 full
#define UART_IFLS_RX7_8                0x00000020  // RX FIFO >= 7/8 full
#define UART_IFLS_TX_M                 0x00000007  // UART Transmit Interrupt FIFO Level Select
#define UART_IFLS_TX1_8                0x00000000  // TX FIFO <= 1/8 full
#define UART_IFLS_TX2_8                0x00000001  // TX FIFO <= 1/4 full
#define UART_IFLS_TX4_8                0x00000002  // TX FIFO <= 1/2 full (default)
#define UART_IFLS_TX6_8                0x00000003  // TX FIFO <= 3/4 full
#define UART_IFLS_TX7_8                0x00000004  // TX FIFO <= 7/8 full

#define UART_IM_LME5IM                 0x00008000  // LIN Mode Edge 5 Interrupt Mask
#define UART_IM_LME1IM                 0x00004000  // LIN Mode Edge 1 Interrupt Mask
#define UART_IM_LMSBIM                 0x00002000  // LIN Mode Sync Break Interrupt Mask
#define UART_IM_9BITIM                 0x00001000  // 9-Bit Mode Interrupt Mask
#define UART_IM_OEIM                   0x00000400  // UART Overrun Error Interrupt Mask
#define UART_IM_BEIM                   0x00000200  // UART Break Error Interrupt Mask
#define UART_IM_PEIM                   0x00000100  // UART Parity Error Interrupt Mask
#define UART_IM_FEIM                   0x00000080  // UART Framing Error Interrupt Mask
#define UART_IM_RTIM                   0x00000040  // UART Receive Time-Out Interrupt Mask
#define UART_IM_TXIM                   0x00000020  // UART Transmit Interrupt Mask
#define UART_IM_RXIM                   0x00000010  // UART Receive Interrupt Mask
#define UART_IM_DSRMIM                 0x00000008  // UART Data Set Ready Modem Interrupt Mask
#define UART_IM_DCDMIM                 0x00000004  // UART Data Carrier Detect Modem Interrupt Mask
#define UART_IM_CTSMIM                 0x00000002  // UART Clear to Send Modem Interrupt Mask
#define UART_IM_RIMIM                  0x00000001  // UART Ring Indicator Modem Interrupt Mask

#define UART_RIS_LME5RIS               0x00008000  // LIN Mode Edge 5 Raw Interrupt Status
#define UART_RIS_LME1RIS               0x00004000  // LIN Mode Edge 1 Raw Interrupt Status
#define UART_RIS_LMSBRIS               0x00002000  // LIN Mode Sync Break Raw Interrupt Status
#define UART_RIS_9BITRIS               0x00001000  // 9-Bit Mode Raw Interrupt Status
#define UART_RIS_OERIS                 0x00000400  // UART Overrun Error Raw Interrupt Status
#define UART_RIS_BERIS                 0x00000200  // UART Break Error Raw Interrupt Status
#define UART_RIS_PERIS                 0x00000100  // UART Parity Error Raw Interrupt Status
#define UART_RIS_FERIS                 0x00000080  // UART Framing Error Raw Interrupt Status
#define UART_RIS_RTRIS                 0x00000040  // UART Receive Time-Out Raw Interrupt Status
#define UART_RIS_TXRIS                 0x00000020  // UART Transmit Raw Interrupt Status
#define UART_RIS_RXRIS                 0x00000010  // UART Receive Raw Interrupt Status
#define UART_RIS_DSRRIS                0x00000008  // UART Data Set Ready Modem Raw Interrupt Status
#define UART_RIS_DCDRIS                0x00000004  // UART Data Carrier Detect Modem Raw Interrupt Status
#define UART_RIS_CTSRIS                0x00000002  // UART Clear to Send Modem Raw Interrupt Status
#define UART_RIS_RIRIS                 0x00000001  // UART Ring Indicator Modem Raw Interrupt Status

#define UART_MIS_LME5MIS               0x00008000  // LIN Mode Edge 5 Masked Interrupt Status
#define UART_MIS_LME1MIS               0x00004000  // LIN Mode Edge 1 Masked Interrupt Status
#define UART_MIS_LMSBMIS               0x00002000  // LIN Mode Sync Break Masked Interrupt Status
#define UART_MIS_9BITMIS               0x00001000  // 9-Bit Mode Masked Interrupt Status
#define UART_MIS_OEMIS                 0x00000400  // UART Overrun Error Masked Interrupt Status
#define UART_MIS_BEMIS                 0x00000200  // UART Break Error Masked Interrupt Status
#define UART_MIS_PEMIS                 0x00000100  // UART Parity Error Masked Interrupt Status
#define UART_MIS_FEMIS                 0x00000080  // UART Framing Error Masked Interrupt Status
#define UART_MIS_RTMIS                 0x00000040  // UART Receive Time-Out Masked Interrupt Status
#define UART_MIS_TXMIS                 0x00000020  // UART Transmit Masked Interrupt Status
#define UART_MIS_RXMIS                 0x00000010  // UART Receive Masked Interrupt Status
#define UART_MIS_DSRMIS                0x00000008  // UART Data Set Ready Modem Masked Interrupt Status
#define UART_MIS_DCDMIS                0x00000004  // UART Data Carrier Detect Modem Masked Interrupt Status
#define UART_MIS_CTSMIS                0x00000002  // UART Clear to Send Modem Masked Interrupt Status
#define UART_MIS_RIMIS                 0x00000001  // UART Ring Indicator Modem Masked Interrupt Status

#define UART_ICR_LME5IC                0x00008000  // LIN Mode Edge 5 Interrupt Clear
#define UART_ICR_LME1IC                0x00004000  // LIN Mode Edge 1 Interrupt Clear
#define UART_ICR_LMSBIC                0x00002000  // LIN Mode Sync Break Interrupt Clear
#define UART_ICR_9BITIC                0x00001000  // 9-Bit Mode Interrupt Clear
#define UART_ICR_OEIC                  0x00000400  // Overrun Error Interrupt Clear
#define UART_ICR_BEIC                  0x00000200  // Break Error Interrupt Clear
#define UART_ICR_PEIC                  0x00000100  // Parity Error Interrupt Clear
#define UART_ICR_FEIC                  0x00000080  // Framing Error Interrupt Clear
#define UART_ICR_RTIC                  0x00000040  // Receive Time-Out Interrupt Clear
#define UART_ICR_TXIC                  0x00000020  // Transmit Interrupt Clear
#define UART_ICR_RXIC                  0x00000010  // Receive Interrupt Clear
#define UART_ICR_DSRMIC                0x00000008  // UART Data Set Ready Modem Interrupt Clear
#define UART_ICR_DCDMIC                0x00000004  // UART Data Carrier Detect Modem Interrupt Clear
#define UART_ICR_CTSMIC                0x00000002  // UART Clear to Send Modem Interrupt Clear
#define UART_ICR_RIMIC                 0x00000001  // UART Ring Indicator Modem Interrupt Clear                                     
                                     
#define UART_DMACTL_DMAERR             0x00000004  // DMA on Error
#define UART_DMACTL_TXDMAE             0x00000002  // Transmit DMA Enable
#define UART_DMACTL_RXDMAE             0x00000001  // Receive DMA Enable

#define UART_LCTL_BLEN_M               0x00000030  // Sync Break Length
#define UART_LCTL_BLEN_13T             0x00000000  // Sync break length is 13T bits (default)
#define UART_LCTL_BLEN_14T             0x00000010  // Sync break length is 14T bits
#define UART_LCTL_BLEN_15T             0x00000020  // Sync break length is 15T bits
#define UART_LCTL_BLEN_16T             0x00000030  // Sync break length is 16T bits
#define UART_LCTL_MASTER               0x00000001  // LIN Master Enable

#define UART_LSS_TSS_M                 0x0000FFFF  // Timer Snap Shot
#define UART_LSS_TSS_S                 0

#define UART_LTIM_TIMER_M              0x0000FFFF  // Timer Value
#define UART_LTIM_TIMER_S              0

//**************************************************************************************************
// I2C
//**************************************************************************************************
#define I2C_MSA_SA_M                   0x000000FE  // I2C Slave Address
#define I2C_MSA_RS                     0x00000001  // Receive not send
#define I2C_MSA_SA_S                   1
                                       
#define I2C_SOAR_OAR_M                 0x0000007F  // I2C Slave Own Address
#define I2C_SOAR_OAR_S                 0

#define I2C_SCSR_QCMDRW                0x00000020  // Quick Command Read / Write
#define I2C_SCSR_QCMDST                0x00000010  // Quick Command Status
#define I2C_SCSR_OAR2SEL               0x00000008  // OAR2 Address Matched
#define I2C_SCSR_FBR                   0x00000004  // First Byte Received
#define I2C_SCSR_TREQ                  0x00000002  // Transmit Request
#define I2C_SCSR_DA                    0x00000001  // Device Active
#define I2C_SCSR_RREQ                  0x00000001  // Receive Request

#define I2C_MCS_CLKTO                  0x00000080  // Clock Timeout Error
#define I2C_MCS_BUSBSY                 0x00000040  // Bus Busy
#define I2C_MCS_IDLE                   0x00000020  // I2C Idle
#define I2C_MCS_QCMD                   0x00000020  // Quick Command
#define I2C_MCS_ARBLST                 0x00000010  // Arbitration Lost
#define I2C_MCS_HS                     0x00000010  // High-Speed Enable
#define I2C_MCS_ACK                    0x00000008  // Data Acknowledge Enable
#define I2C_MCS_DATACK                 0x00000008  // Acknowledge Data
#define I2C_MCS_ADRACK                 0x00000004  // Acknowledge Address
#define I2C_MCS_STOP                   0x00000004  // Generate STOP
#define I2C_MCS_START                  0x00000002  // Generate START
#define I2C_MCS_ERROR                  0x00000002  // Error
#define I2C_MCS_RUN                    0x00000001  // I2C Master Enable
#define I2C_MCS_BUSY                   0x00000001  // I2C Busy

#define I2C_SDR_DATA_M                 0x000000FF  // Data for Transfer
#define I2C_SDR_DATA_S                 0
                                       
#define I2C_MDR_DATA_M                 0x000000FF  // Data Transferred
#define I2C_MDR_DATA_S                 0
                                       
#define I2C_MTPR_HS                    0x00000080  // High-Speed Enable
#define I2C_MTPR_TPR_M                 0x0000007F  // SCL Clock Period
#define I2C_MTPR_TPR_S                 0

#define I2C_SIMR_STOPIM                0x00000004  // Stop Condition Interrupt Mask
#define I2C_SIMR_STARTIM               0x00000002  // Start Condition Interrupt Mask
#define I2C_SIMR_DATAIM                0x00000001  // Data Interrupt Mask

#define I2C_SRIS_STOPRIS               0x00000004  // Stop Condition Raw Interrupt Status
#define I2C_SRIS_STARTRIS              0x00000002  // Start Condition Raw Interrupt Status
#define I2C_SRIS_DATARIS               0x00000001  // Data Raw Interrupt Status

#define I2C_MIMR_CLKIM                 0x00000002  // Clock Timeout Interrupt Mask
#define I2C_MIMR_IM                    0x00000001  // Master Interrupt Mask

#define I2C_MRIS_CLKRIS                0x00000002  // Clock Timeout Raw Interrupt Status
#define I2C_MRIS_RIS                   0x00000001  // Master Raw Interrupt Status

#define I2C_SMIS_STOPMIS               0x00000004  // Stop Condition Masked Interrupt Status
#define I2C_SMIS_STARTMIS              0x00000002  // Start Condition Masked Interrupt Status
#define I2C_SMIS_DATAMIS               0x00000001  // Data Masked Interrupt Status

#define I2C_SICR_STOPIC                0x00000004  // Stop Condition Interrupt Clear
#define I2C_SICR_STARTIC               0x00000002  // Start Condition Interrupt Clear
#define I2C_SICR_DATAIC                0x00000001  // Data Interrupt Clear

#define I2C_MMIS_CLKMIS                0x00000002  // Clock Timeout Masked Interrupt Status
#define I2C_MMIS_MIS                   0x00000001  // Masked Interrupt Status

#define I2C_MICR_CLKIC                 0x00000002  // Clock Timeout Interrupt Clear
#define I2C_MICR_IC                    0x00000001  // Master Interrupt Clear

#define I2C_SOAR2_OAR2EN               0x00000080  // I2C Slave Own Address 2 Enable
#define I2C_SOAR2_OAR2_M               0x0000007F  // I2C Slave Own Address 2
#define I2C_SOAR2_OAR2_S               0

#define I2C_MCR_SFE                    0x00000020  // I2C Slave Function Enable
#define I2C_MCR_MFE                    0x00000010  // I2C Master Function Enable
#define I2C_MCR_LPBK                   0x00000001  // I2C Loopback

//**************************************************************************************************
// PWM
//**************************************************************************************************
#define PWM_CTL_GLOBALSYNC2            0x00000004  // Update PWM Generator 2
#define PWM_CTL_GLOBALSYNC1            0x00000002  // Update PWM Generator 1
#define PWM_CTL_GLOBALSYNC0            0x00000001  // Update PWM Generator 0
                                       
#define PWM_SYNC_SYNC2                 0x00000004  // Reset Generator 2 Counter
#define PWM_SYNC_SYNC1                 0x00000002  // Reset Generator 1 Counter
#define PWM_SYNC_SYNC0                 0x00000001  // Reset Generator 0 Counter
                                       
#define PWM_ENABLE_PWM5EN              0x00000020  // PWM5 Output Enable
#define PWM_ENABLE_PWM4EN              0x00000010  // PWM4 Output Enable
#define PWM_ENABLE_PWM3EN              0x00000008  // PWM3 Output Enable
#define PWM_ENABLE_PWM2EN              0x00000004  // PWM2 Output Enable
#define PWM_ENABLE_PWM1EN              0x00000002  // PWM1 Output Enable
#define PWM_ENABLE_PWM0EN              0x00000001  // PWM0 Output Enable
                                       
#define PWM_INVERT_PWM5INV             0x00000020  // Invert PWM5 Signal
#define PWM_INVERT_PWM4INV             0x00000010  // Invert PWM4 Signal
#define PWM_INVERT_PWM3INV             0x00000008  // Invert PWM3 Signal
#define PWM_INVERT_PWM2INV             0x00000004  // Invert PWM2 Signal
#define PWM_INVERT_PWM1INV             0x00000002  // Invert PWM1 Signal
#define PWM_INVERT_PWM0INV             0x00000001  // Invert PWM0 Signal
                                       
#define PWM_FAULT_FAULT5               0x00000020  // PWM5 Fault
#define PWM_FAULT_FAULT4               0x00000010  // PWM4 Fault
#define PWM_FAULT_FAULT3               0x00000008  // PWM3 Fault
#define PWM_FAULT_FAULT2               0x00000004  // PWM2 Fault
#define PWM_FAULT_FAULT1               0x00000002  // PWM1 Fault
#define PWM_FAULT_FAULT0               0x00000001  // PWM0 Fault
                                       
#define PWM_INTEN_INTFAULT             0x00010000  // Fault Interrupt Enable
#define PWM_INTEN_INTPWM2              0x00000004  // PWM2 Interrupt Enable
#define PWM_INTEN_INTPWM1              0x00000002  // PWM1 Interrupt Enable
#define PWM_INTEN_INTPWM0              0x00000001  // PWM0 Interrupt Enable

#define PWM_RIS_INTFAULT               0x00010000  // Fault Interrupt Asserted
#define PWM_RIS_INTPWM2                0x00000004  // PWM2 Interrupt Asserted
#define PWM_RIS_INTPWM1                0x00000002  // PWM1 Interrupt Asserted
#define PWM_RIS_INTPWM0                0x00000001  // PWM0 Interrupt Asserted
                                       
#define PWM_ISC_INTFAULT               0x00010000  // Fault Interrupt Asserted
#define PWM_ISC_INTPWM2                0x00000004  // PWM2 Interrupt Status
#define PWM_ISC_INTPWM1                0x00000002  // PWM1 Interrupt Status
#define PWM_ISC_INTPWM0                0x00000001  // PWM0 Interrupt Status
                                       
#define PWM_STATUS_FAULT               0x00000001  // Fault Interrupt Status
                                       
#define PWM_X_CTL_CMPBUPD              0x00000020  // Comparator B Update Mode
#define PWM_X_CTL_CMPAUPD              0x00000010  // Comparator A Update Mode
#define PWM_X_CTL_LOADUPD              0x00000008  // Load Register Update Mode
#define PWM_X_CTL_DEBUG                0x00000004  // Debug Mode
#define PWM_X_CTL_MODE                 0x00000002  // Counter Mode
#define PWM_X_CTL_ENABLE               0x00000001  // PWM Block Enable
                                       
#define PWM_X_INTEN_TRCMPBD            0x00002000  // Trigger for Counter=PWMnCMPB Down
#define PWM_X_INTEN_TRCMPBU            0x00001000  // Trigger for Counter=PWMnCMPB Up
#define PWM_X_INTEN_TRCMPAD            0x00000800  // Trigger for Counter=PWMnCMPA Down
#define PWM_X_INTEN_TRCMPAU            0x00000400  // Trigger for Counter=PWMnCMPA Up
#define PWM_X_INTEN_TRCNTLOAD          0x00000200  // Trigger for Counter=PWMnLOAD
#define PWM_X_INTEN_TRCNTZERO          0x00000100  // Trigger for Counter=0
#define PWM_X_INTEN_INTCMPBD           0x00000020  // Interrupt for Counter=PWMnCMPB Down
#define PWM_X_INTEN_INTCMPBU           0x00000010  // Interrupt for Counter=PWMnCMPB Up
#define PWM_X_INTEN_INTCMPAD           0x00000008  // Interrupt for Counter=PWMnCMPA Down
#define PWM_X_INTEN_INTCMPAU           0x00000004  // Interrupt for Counter=PWMnCMPA Up
#define PWM_X_INTEN_INTCNTLOAD         0x00000002  // Interrupt for Counter=PWMnLOAD
#define PWM_X_INTEN_INTCNTZERO         0x00000001  // Interrupt for Counter=0
                                       
#define PWM_X_RIS_INTCMPBD             0x00000020  // Comparator B Down Interrupt Status
#define PWM_X_RIS_INTCMPBU             0x00000010  // Comparator B Up Interrupt Status
#define PWM_X_RIS_INTCMPAD             0x00000008  // Comparator A Down Interrupt Status
#define PWM_X_RIS_INTCMPAU             0x00000004  // Comparator A Up Interrupt Status
#define PWM_X_RIS_INTCNTLOAD           0x00000002  // Counter=Load Interrupt Status
#define PWM_X_RIS_INTCNTZERO           0x00000001  // Counter=0 Interrupt Status

#define PWM_X_ISC_INTCMPBD             0x00000020  // Comparator B Down Interrupt
#define PWM_X_ISC_INTCMPBU             0x00000010  // Comparator B Up Interrupt
#define PWM_X_ISC_INTCMPAD             0x00000008  // Comparator A Down Interrupt
#define PWM_X_ISC_INTCMPAU             0x00000004  // Comparator A Up Interrupt
#define PWM_X_ISC_INTCNTLOAD           0x00000002  // Counter=Load Interrupt
#define PWM_X_ISC_INTCNTZERO           0x00000001  // Counter=0 Interrupt
                                       
#define PWM_X_LOAD_M                   0x0000FFFF  // Counter Load Value
#define PWM_X_LOAD_S                   0
                                       
#define PWM_X_COUNT_M                  0x0000FFFF  // Counter Value
#define PWM_X_COUNT_S                  0
                                       
#define PWM_X_CMPA_M                   0x0000FFFF  // Comparator A Value
#define PWM_X_CMPA_S                   0
                                       
#define PWM_X_CMPB_M                   0x0000FFFF  // Comparator B Value
#define PWM_X_CMPB_S                   0

#define PWM_X_GENA_ACTCMPBD_M          0x00000C00  // Action for Comparator B Down
#define PWM_X_GENA_ACTCMPBD_NONE       0x00000000  // Do nothing
#define PWM_X_GENA_ACTCMPBD_INV        0x00000400  // Invert pwmA
#define PWM_X_GENA_ACTCMPBD_ZERO       0x00000800  // Drive pwmA Low
#define PWM_X_GENA_ACTCMPBD_ONE        0x00000C00  // Drive pwmA High
#define PWM_X_GENA_ACTCMPBU_M          0x00000300  // Action for Comparator B Up
#define PWM_X_GENA_ACTCMPBU_NONE       0x00000000  // Do nothing
#define PWM_X_GENA_ACTCMPBU_INV        0x00000100  // Invert pwmA
#define PWM_X_GENA_ACTCMPBU_ZERO       0x00000200  // Drive pwmA Low
#define PWM_X_GENA_ACTCMPBU_ONE        0x00000300  // Drive pwmA High
#define PWM_X_GENA_ACTCMPAD_M          0x000000C0  // Action for Comparator A Down
#define PWM_X_GENA_ACTCMPAD_NONE       0x00000000  // Do nothing
#define PWM_X_GENA_ACTCMPAD_INV        0x00000040  // Invert pwmA
#define PWM_X_GENA_ACTCMPAD_ZERO       0x00000080  // Drive pwmA Low
#define PWM_X_GENA_ACTCMPAD_ONE        0x000000C0  // Drive pwmA High
#define PWM_X_GENA_ACTCMPAU_M          0x00000030  // Action for Comparator A Up
#define PWM_X_GENA_ACTCMPAU_NONE       0x00000000  // Do nothing
#define PWM_X_GENA_ACTCMPAU_INV        0x00000010  // Invert pwmA
#define PWM_X_GENA_ACTCMPAU_ZERO       0x00000020  // Drive pwmA Low
#define PWM_X_GENA_ACTCMPAU_ONE        0x00000030  // Drive pwmA High
#define PWM_X_GENA_ACTLOAD_M           0x0000000C  // Action for Counter=LOAD
#define PWM_X_GENA_ACTLOAD_NONE        0x00000000  // Do nothing
#define PWM_X_GENA_ACTLOAD_INV         0x00000004  // Invert pwmA
#define PWM_X_GENA_ACTLOAD_ZERO        0x00000008  // Drive pwmA Low
#define PWM_X_GENA_ACTLOAD_ONE         0x0000000C  // Drive pwmA High
#define PWM_X_GENA_ACTZERO_M           0x00000003  // Action for Counter=0
#define PWM_X_GENA_ACTZERO_NONE        0x00000000  // Do nothing
#define PWM_X_GENA_ACTZERO_INV         0x00000001  // Invert pwmA
#define PWM_X_GENA_ACTZERO_ZERO        0x00000002  // Drive pwmA Low
#define PWM_X_GENA_ACTZERO_ONE         0x00000003  // Drive pwmA High
                                       
#define PWM_X_GENB_ACTCMPBD_M          0x00000C00  // Action for Comparator B Down
#define PWM_X_GENB_ACTCMPBD_NONE       0x00000000  // Do nothing
#define PWM_X_GENB_ACTCMPBD_INV        0x00000400  // Invert pwmB
#define PWM_X_GENB_ACTCMPBD_ZERO       0x00000800  // Drive pwmB Low
#define PWM_X_GENB_ACTCMPBD_ONE        0x00000C00  // Drive pwmB High
#define PWM_X_GENB_ACTCMPBU_M          0x00000300  // Action for Comparator B Up
#define PWM_X_GENB_ACTCMPBU_NONE       0x00000000  // Do nothing
#define PWM_X_GENB_ACTCMPBU_INV        0x00000100  // Invert pwmB
#define PWM_X_GENB_ACTCMPBU_ZERO       0x00000200  // Drive pwmB Low
#define PWM_X_GENB_ACTCMPBU_ONE        0x00000300  // Drive pwmB High
#define PWM_X_GENB_ACTCMPAD_M          0x000000C0  // Action for Comparator A Down
#define PWM_X_GENB_ACTCMPAD_NONE       0x00000000  // Do nothing
#define PWM_X_GENB_ACTCMPAD_INV        0x00000040  // Invert pwmB
#define PWM_X_GENB_ACTCMPAD_ZERO       0x00000080  // Drive pwmB Low
#define PWM_X_GENB_ACTCMPAD_ONE        0x000000C0  // Drive pwmB High
#define PWM_X_GENB_ACTCMPAU_M          0x00000030  // Action for Comparator A Up
#define PWM_X_GENB_ACTCMPAU_NONE       0x00000000  // Do nothing
#define PWM_X_GENB_ACTCMPAU_INV        0x00000010  // Invert pwmB
#define PWM_X_GENB_ACTCMPAU_ZERO       0x00000020  // Drive pwmB Low
#define PWM_X_GENB_ACTCMPAU_ONE        0x00000030  // Drive pwmB High
#define PWM_X_GENB_ACTLOAD_M           0x0000000C  // Action for Counter=LOAD
#define PWM_X_GENB_ACTLOAD_NONE        0x00000000  // Do nothing
#define PWM_X_GENB_ACTLOAD_INV         0x00000004  // Invert pwmB
#define PWM_X_GENB_ACTLOAD_ZERO        0x00000008  // Drive pwmB Low
#define PWM_X_GENB_ACTLOAD_ONE         0x0000000C  // Drive pwmB High
#define PWM_X_GENB_ACTZERO_M           0x00000003  // Action for Counter=0
#define PWM_X_GENB_ACTZERO_NONE        0x00000000  // Do nothing
#define PWM_X_GENB_ACTZERO_INV         0x00000001  // Invert pwmB
#define PWM_X_GENB_ACTZERO_ZERO        0x00000002  // Drive pwmB Low
#define PWM_X_GENB_ACTZERO_ONE         0x00000003  // Drive pwmB High
                                      
#define PWM_X_DBCTL_ENABLE             0x00000001  // Dead-Band Generator Enable
                                      
#define PWM_X_DBRISE_DELAY_M           0x00000FFF  // Dead-Band Rise Delay
#define PWM_X_DBRISE_DELAY_S           0
                                      
#define PWM_X_DBFALL_DELAY_M           0x00000FFF  // Dead-Band Fall Delay
#define PWM_X_DBFALL_DELAY_S           0

//**************************************************************************************************
// QEI
//**************************************************************************************************
#define QEI_CTL_STALLEN                0x00001000  // Stall QEI
#define QEI_CTL_INVI                   0x00000800  // Invert Index Pulse
#define QEI_CTL_INVB                   0x00000400  // Invert PhB
#define QEI_CTL_INVA                   0x00000200  // Invert PhA
#define QEI_CTL_VELDIV_M               0x000001C0  // Predivide Velocity
#define QEI_CTL_VELDIV_1               0x00000000  // QEI clock /1
#define QEI_CTL_VELDIV_2               0x00000040  // QEI clock /2
#define QEI_CTL_VELDIV_4               0x00000080  // QEI clock /4
#define QEI_CTL_VELDIV_8               0x000000C0  // QEI clock /8
#define QEI_CTL_VELDIV_16              0x00000100  // QEI clock /16
#define QEI_CTL_VELDIV_32              0x00000140  // QEI clock /32
#define QEI_CTL_VELDIV_64              0x00000180  // QEI clock /64
#define QEI_CTL_VELDIV_128             0x000001C0  // QEI clock /128
#define QEI_CTL_VELEN                  0x00000020  // Capture Velocity
#define QEI_CTL_RESMODE                0x00000010  // Reset Mode
#define QEI_CTL_CAPMODE                0x00000008  // Capture Mode
#define QEI_CTL_SIGMODE                0x00000004  // Signal Mode
#define QEI_CTL_SWAP                   0x00000002  // Swap Signals
#define QEI_CTL_ENABLE                 0x00000001  // Enable QEI
                                       
#define QEI_STAT_DIRECTION             0x00000002  // Direction of Rotation
#define QEI_STAT_ERROR                 0x00000001  // Error Detected
                                       
#define QEI_POS_M                      0xFFFFFFFF  // Current Position Integrator Value
#define QEI_POS_S                      0
                                       
#define QEI_MAXPOS_M                   0xFFFFFFFF  // Maximum Position Integrator Value
#define QEI_MAXPOS_S                   0
                                       
#define QEI_LOAD_M                     0xFFFFFFFF  // Velocity Timer Load Value
#define QEI_LOAD_S                     0
                                       
#define QEI_TIME_M                     0xFFFFFFFF  // Velocity Timer Current Value
#define QEI_TIME_S                     0

#define QEI_COUNT_M                    0xFFFFFFFF  // Velocity Pulse Count
#define QEI_COUNT_S                    0
                                       
#define QEI_SPEED_M                    0xFFFFFFFF  // Velocity
#define QEI_SPEED_S                    0
                                       
#define QEI_INTEN_ERROR                0x00000008  // Phase Error Interrupt Enable
#define QEI_INTEN_DIR                  0x00000004  // Direction Change Interrupt Enable
#define QEI_INTEN_TIMER                0x00000002  // Timer Expires Interrupt Enable
#define QEI_INTEN_INDEX                0x00000001  // Index Pulse Detected Interrupt Enable
                                       
#define QEI_RIS_ERROR                  0x00000008  // Phase Error Detected
#define QEI_RIS_DIR                    0x00000004  // Direction Change Detected
#define QEI_RIS_TIMER                  0x00000002  // Velocity Timer Expired
#define QEI_RIS_INDEX                  0x00000001  // Index Pulse Asserted
                                       
#define QEI_ISC_ERROR                  0x00000008  // Phase Error Interrupt
#define QEI_ISC_DIR                    0x00000004  // Direction Change Interrupt
#define QEI_ISC_TIMER                  0x00000002  // Velocity Timer Expired Interrupt
#define QEI_ISC_INDEX                  0x00000001  // Index Pulse Interrupt
                                 
//**************************************************************************************************
// TIMER                         
//**************************************************************************************************
#define TIMER_CFG_M                    0x00000007  // GPTM Configuration
#define TIMER_CFG_32_BIT_TIMER         0x00000000  // 32-bit timer configuration
#define TIMER_CFG_32_BIT_RTC           0x00000001  // 32-bit real-time clock (RTC) counter configuration
#define TIMER_CFG_16_BIT               0x00000004  // 16-bit timer configuration. The function is controlled by bits 1:0 of GPTMTAMR and GPTMTBMR
                                       
#define TIMER_TAMR_TAAMS               0x00000008  // GPTM Timer A Alternate Mode Select
#define TIMER_TAMR_TACMR               0x00000004  // GPTM Timer A Capture Mode
#define TIMER_TAMR_TAMR_M              0x00000003  // GPTM Timer A Mode
#define TIMER_TAMR_TAMR_1_SHOT         0x00000001  // One-Shot Timer mode
#define TIMER_TAMR_TAMR_PERIOD         0x00000002  // Periodic Timer mode
#define TIMER_TAMR_TAMR_CAP            0x00000003  // Capture mode

#define TIMER_TBMR_TBAMS               0x00000008  // GPTM Timer B Alternate Mode Select
#define TIMER_TBMR_TBCMR               0x00000004  // GPTM Timer B Capture Mode
#define TIMER_TBMR_TBMR_M              0x00000003  // GPTM Timer B Mode
#define TIMER_TBMR_TBMR_1_SHOT         0x00000001  // One-Shot Timer mode
#define TIMER_TBMR_TBMR_PERIOD         0x00000002  // Periodic Timer mode
#define TIMER_TBMR_TBMR_CAP            0x00000003  // Capture mode
                                       
#define TIMER_CTL_TBPWML               0x00004000  // GPTM Timer B PWM Output Level
#define TIMER_CTL_TBOTE                0x00002000  // GPTM Timer B Output Trigger Enable
#define TIMER_CTL_TBEVENT_M            0x00000C00  // GPTM Timer B Event Mode
#define TIMER_CTL_TBEVENT_POS          0x00000000  // Positive edge
#define TIMER_CTL_TBEVENT_NEG          0x00000400  // Negative edge
#define TIMER_CTL_TBEVENT_BOTH         0x00000C00  // Both edges
#define TIMER_CTL_TBSTALL              0x00000200  // GPTM Timer B Stall Enable
#define TIMER_CTL_TBEN                 0x00000100  // GPTM Timer B Enable
#define TIMER_CTL_TAPWML               0x00000040  // GPTM Timer A PWM Output Level
#define TIMER_CTL_TAOTE                0x00000020  // GPTM Timer A Output Trigger Enable
#define TIMER_CTL_RTCEN                0x00000010  // GPTM RTC Enable
#define TIMER_CTL_TAEVENT_M            0x0000000C  // GPTM Timer A Event Mode
#define TIMER_CTL_TAEVENT_POS          0x00000000  // Positive edge
#define TIMER_CTL_TAEVENT_NEG          0x00000004  // Negative edge
#define TIMER_CTL_TAEVENT_BOTH         0x0000000C  // Both edges
#define TIMER_CTL_TASTALL              0x00000002  // GPTM Timer A Stall Enable
#define TIMER_CTL_TAEN                 0x00000001  // GPTM Timer A Enable
                                       
#define TIMER_IMR_CBEIM                0x00000400  // GPTM Capture B Event Interrupt Mask
#define TIMER_IMR_CBMIM                0x00000200  // GPTM Capture B Match Interrupt Mask
#define TIMER_IMR_TBTOIM               0x00000100  // GPTM Timer B Time-Out Interrupt Mask
#define TIMER_IMR_RTCIM                0x00000008  // GPTM RTC Interrupt Mask
#define TIMER_IMR_CAEIM                0x00000004  // GPTM Capture A Event Interrupt Mask
#define TIMER_IMR_CAMIM                0x00000002  // GPTM Capture A Match Interrupt Mask
#define TIMER_IMR_TATOIM               0x00000001  // GPTM Timer A Time-Out Interrupt Mask
                                       
#define TIMER_RIS_CBERIS               0x00000400  // GPTM Capture B Event Raw Interrupt
#define TIMER_RIS_CBMRIS               0x00000200  // GPTM Capture B Match Raw Interrupt
#define TIMER_RIS_TBTORIS              0x00000100  // GPTM Timer B Time-Out Raw Interrupt
#define TIMER_RIS_RTCRIS               0x00000008  // GPTM RTC Raw Interrupt
#define TIMER_RIS_CAERIS               0x00000004  // GPTM Capture A Event Raw Interrupt
#define TIMER_RIS_CAMRIS               0x00000002  // GPTM Capture A Match Raw Interrupt
#define TIMER_RIS_TATORIS              0x00000001  // GPTM Timer A Time-Out Raw Interrupt
                                       
#define TIMER_MIS_CBEMIS               0x00000400  // GPTM Capture B Event Masked Interrupt
#define TIMER_MIS_CBMMIS               0x00000200  // GPTM Capture B Match Masked Interrupt
#define TIMER_MIS_TBTOMIS              0x00000100  // GPTM Timer B Time-Out Masked Interrupt
#define TIMER_MIS_RTCMIS               0x00000008  // GPTM RTC Masked Interrupt
#define TIMER_MIS_CAEMIS               0x00000004  // GPTM Capture A Event Masked Interrupt
#define TIMER_MIS_CAMMIS               0x00000002  // GPTM Capture A Match Masked Interrupt
#define TIMER_MIS_TATOMIS              0x00000001  // GPTM Timer A Time-Out Masked Interrupt
                                       
#define TIMER_ICR_CBECINT              0x00000400  // GPTM Capture B Event Interrupt Clear
#define TIMER_ICR_CBMCINT              0x00000200  // GPTM Capture B Match Interrupt Clear
#define TIMER_ICR_TBTOCINT             0x00000100  // GPTM Timer B Time-Out Interrupt Clear
#define TIMER_ICR_RTCCINT              0x00000008  // GPTM RTC Interrupt Clear
#define TIMER_ICR_CAECINT              0x00000004  // GPTM Capture A Event Interrupt Clear
#define TIMER_ICR_CAMCINT              0x00000002  // GPTM Capture A Match Interrupt Clear
#define TIMER_ICR_TATOCINT             0x00000001  // GPTM Timer A Time-Out Raw Interrupt

#define TIMER_TAILR_TAILRH_M           0xFFFF0000  // GPTM Timer A Interval Load Register High
#define TIMER_TAILR_TAILRL_M           0x0000FFFF  // GPTM Timer A Interval Load Register Low
#define TIMER_TAILR_TAILRH_S           16
#define TIMER_TAILR_TAILRL_S           0
                                       
#define TIMER_TBILR_TBILRL_M           0x0000FFFF  // GPTM Timer B Interval Load Register
#define TIMER_TBILR_TBILRL_S           0
                                       
#define TIMER_TAMATCHR_TAMRH_M         0xFFFF0000  // GPTM Timer A Match Register High
#define TIMER_TAMATCHR_TAMRL_M         0x0000FFFF  // GPTM Timer A Match Register Low
#define TIMER_TAMATCHR_TAMRH_S         16
#define TIMER_TAMATCHR_TAMRL_S         0
                                       
#define TIMER_TBMATCHR_TBMRL_M         0x0000FFFF  // GPTM Timer B Match Register Low
#define TIMER_TBMATCHR_TBMRL_S         0
                                       
#define TIMER_TAPR_TAPSR_M             0x000000FF  // GPTM Timer A Prescale
#define TIMER_TAPR_TAPSR_S             0
                                       
#define TIMER_TBPR_TBPSR_M             0x000000FF  // GPTM Timer B Prescale
#define TIMER_TBPR_TBPSR_S             0
                                       
#define TIMER_TAPMR_TAPSMR_M           0x000000FF  // GPTM TimerA Prescale Match
#define TIMER_TAPMR_TAPSMR_S           0
                                       
#define TIMER_TBPMR_TBPSMR_M           0x000000FF  // GPTM TimerB Prescale Match
#define TIMER_TBPMR_TBPSMR_S           0
                                       
#define TIMER_TAR_TARH_M               0xFFFF0000  // GPTM Timer A Register High
#define TIMER_TAR_TARL_M               0x0000FFFF  // GPTM Timer A Register Low
#define TIMER_TAR_TARH_S               16
#define TIMER_TAR_TARL_S               0
                                       
#define TIMER_TBR_TBRL_M               0x0000FFFF  // GPTM Timer B
#define TIMER_TBR_TBRL_S               0

//**************************************************************************************************
// ADC
//**************************************************************************************************
#define ADC_ACTSS_ASEN3                0x00000008  // ADC SS3 Enable
#define ADC_ACTSS_ASEN2                0x00000004  // ADC SS2 Enable
#define ADC_ACTSS_ASEN1                0x00000002  // ADC SS1 Enable
#define ADC_ACTSS_ASEN0                0x00000001  // ADC SS0 Enable
                                       
#define ADC_RIS_INR3                   0x00000008  // SS3 Raw Interrupt Status
#define ADC_RIS_INR2                   0x00000004  // SS2 Raw Interrupt Status
#define ADC_RIS_INR1                   0x00000002  // SS1 Raw Interrupt Status
#define ADC_RIS_INR0                   0x00000001  // SS0 Raw Interrupt Status

#define ADC_IM_MASK3                   0x00000008  // SS3 Interrupt Mask
#define ADC_IM_MASK2                   0x00000004  // SS2 Interrupt Mask
#define ADC_IM_MASK1                   0x00000002  // SS1 Interrupt Mask
#define ADC_IM_MASK0                   0x00000001  // SS0 Interrupt Mask
                                       
#define ADC_ISC_IN3                    0x00000008  // SS3 Interrupt Status and Clear
#define ADC_ISC_IN2                    0x00000004  // SS2 Interrupt Status and Clear
#define ADC_ISC_IN1                    0x00000002  // SS1 Interrupt Status and Clear
#define ADC_ISC_IN0                    0x00000001  // SS0 Interrupt Status and Clear

#define ADC_OSTAT_OV3                  0x00000008  // SS3 FIFO Overflow
#define ADC_OSTAT_OV2                  0x00000004  // SS2 FIFO Overflow
#define ADC_OSTAT_OV1                  0x00000002  // SS1 FIFO Overflow
#define ADC_OSTAT_OV0                  0x00000001  // SS0 FIFO Overflow
                                       
#define ADC_EMUX_EM3_M                 0x0000F000  // SS3 Trigger Select
#define ADC_EMUX_EM3_PROCESSOR         0x00000000  // Processor (default)
#define ADC_EMUX_EM3_COMP0             0x00001000  // Analog Comparator 0
#define ADC_EMUX_EM3_COMP1             0x00002000  // Analog Comparator 1
#define ADC_EMUX_EM3_EXTERNAL          0x00004000  // External (GPIO PB4)
#define ADC_EMUX_EM3_TIMER             0x00005000  // Timer
#define ADC_EMUX_EM3_PWM0              0x00006000  // PWM0
#define ADC_EMUX_EM3_PWM1              0x00007000  // PWM1
#define ADC_EMUX_EM3_PWM2              0x00008000  // PWM2
#define ADC_EMUX_EM3_ALWAYS            0x0000F000  // Always (continuously sample)
#define ADC_EMUX_EM2_M                 0x00000F00  // SS2 Trigger Select
#define ADC_EMUX_EM2_PROCESSOR         0x00000000  // Processor (default)
#define ADC_EMUX_EM2_COMP0             0x00000100  // Analog Comparator 0
#define ADC_EMUX_EM2_COMP1             0x00000200  // Analog Comparator 1
#define ADC_EMUX_EM2_EXTERNAL          0x00000400  // External (GPIO PB4)
#define ADC_EMUX_EM2_TIMER             0x00000500  // Timer
#define ADC_EMUX_EM2_PWM0              0x00000600  // PWM0
#define ADC_EMUX_EM2_PWM1              0x00000700  // PWM1
#define ADC_EMUX_EM2_PWM2              0x00000800  // PWM2
#define ADC_EMUX_EM2_ALWAYS            0x00000F00  // Always (continuously sample)
#define ADC_EMUX_EM1_M                 0x000000F0  // SS1 Trigger Select
#define ADC_EMUX_EM1_PROCESSOR         0x00000000  // Processor (default)
#define ADC_EMUX_EM1_COMP0             0x00000010  // Analog Comparator 0
#define ADC_EMUX_EM1_COMP1             0x00000020  // Analog Comparator 1
#define ADC_EMUX_EM1_EXTERNAL          0x00000040  // External (GPIO PB4)
#define ADC_EMUX_EM1_TIMER             0x00000050  // Timer
#define ADC_EMUX_EM1_PWM0              0x00000060  // PWM0
#define ADC_EMUX_EM1_PWM1              0x00000070  // PWM1
#define ADC_EMUX_EM1_PWM2              0x00000080  // PWM2
#define ADC_EMUX_EM1_ALWAYS            0x000000F0  // Always (continuously sample)
#define ADC_EMUX_EM0_M                 0x0000000F  // SS0 Trigger Select
#define ADC_EMUX_EM0_PROCESSOR         0x00000000  // Processor (default)
#define ADC_EMUX_EM0_COMP0             0x00000001  // Analog Comparator 0
#define ADC_EMUX_EM0_COMP1             0x00000002  // Analog Comparator 1
#define ADC_EMUX_EM0_EXTERNAL          0x00000004  // External (GPIO PB4)
#define ADC_EMUX_EM0_TIMER             0x00000005  // Timer
#define ADC_EMUX_EM0_PWM0              0x00000006  // PWM0
#define ADC_EMUX_EM0_PWM1              0x00000007  // PWM1
#define ADC_EMUX_EM0_PWM2              0x00000008  // PWM2
#define ADC_EMUX_EM0_ALWAYS            0x0000000F  // Always (continuously sample)

#define ADC_USTAT_UV3                  0x00000008  // SS3 FIFO Underflow
#define ADC_USTAT_UV2                  0x00000004  // SS2 FIFO Underflow
#define ADC_USTAT_UV1                  0x00000002  // SS1 FIFO Underflow
#define ADC_USTAT_UV0                  0x00000001  // SS0 FIFO Underflow
                                       
#define ADC_SSPRI_SS3_M                0x00003000  // SS3 Priority
#define ADC_SSPRI_SS3_1ST              0x00000000  // First priority
#define ADC_SSPRI_SS3_2ND              0x00001000  // Second priority
#define ADC_SSPRI_SS3_3RD              0x00002000  // Third priority
#define ADC_SSPRI_SS3_4TH              0x00003000  // Fourth priority
#define ADC_SSPRI_SS2_M                0x00000300  // SS2 Priority
#define ADC_SSPRI_SS2_1ST              0x00000000  // First priority
#define ADC_SSPRI_SS2_2ND              0x00000100  // Second priority
#define ADC_SSPRI_SS2_3RD              0x00000200  // Third priority
#define ADC_SSPRI_SS2_4TH              0x00000300  // Fourth priority
#define ADC_SSPRI_SS1_M                0x00000030  // SS1 Priority
#define ADC_SSPRI_SS1_1ST              0x00000000  // First priority
#define ADC_SSPRI_SS1_2ND              0x00000010  // Second priority
#define ADC_SSPRI_SS1_3RD              0x00000020  // Third priority
#define ADC_SSPRI_SS1_4TH              0x00000030  // Fourth priority
#define ADC_SSPRI_SS0_M                0x00000003  // SS0 Priority
#define ADC_SSPRI_SS0_1ST              0x00000000  // First priority
#define ADC_SSPRI_SS0_2ND              0x00000001  // Second priority
#define ADC_SSPRI_SS0_3RD              0x00000002  // Third priority
#define ADC_SSPRI_SS0_4TH              0x00000003  // Fourth priority
                                       
#define ADC_PSSI_SS3                   0x00000008  // SS3 Initiate
#define ADC_PSSI_SS2                   0x00000004  // SS2 Initiate
#define ADC_PSSI_SS1                   0x00000002  // SS1 Initiate
#define ADC_PSSI_SS0                   0x00000001  // SS0 Initiate
                                       
#define ADC_SAC_AVG_M                  0x00000007  // Hardware Averaging Control
#define ADC_SAC_AVG_OFF                0x00000000  // No hardware oversampling
#define ADC_SAC_AVG_2X                 0x00000001  // 2x hardware oversampling
#define ADC_SAC_AVG_4X                 0x00000002  // 4x hardware oversampling
#define ADC_SAC_AVG_8X                 0x00000003  // 8x hardware oversampling
#define ADC_SAC_AVG_16X                0x00000004  // 16x hardware oversampling
#define ADC_SAC_AVG_32X                0x00000005  // 32x hardware oversampling
#define ADC_SAC_AVG_64X                0x00000006  // 64x hardware oversampling
                                       
#define ADC_SSMUX0_MUX7_M              0x30000000  // 8th Sample Input Select
#define ADC_SSMUX0_MUX6_M              0x03000000  // 7th Sample Input Select
#define ADC_SSMUX0_MUX5_M              0x00300000  // 6th Sample Input Select
#define ADC_SSMUX0_MUX4_M              0x00030000  // 5th Sample Input Select
#define ADC_SSMUX0_MUX3_M              0x00003000  // 4th Sample Input Select
#define ADC_SSMUX0_MUX2_M              0x00000300  // 3rd Sample Input Select
#define ADC_SSMUX0_MUX1_M              0x00000030  // 2nd Sample Input Select
#define ADC_SSMUX0_MUX0_M              0x00000003  // 1st Sample Input Select
#define ADC_SSMUX0_MUX7_S              28
#define ADC_SSMUX0_MUX6_S              24
#define ADC_SSMUX0_MUX5_S              20
#define ADC_SSMUX0_MUX4_S              16
#define ADC_SSMUX0_MUX3_S              12
#define ADC_SSMUX0_MUX2_S              8
#define ADC_SSMUX0_MUX1_S              4
#define ADC_SSMUX0_MUX0_S              0

#define ADC_SSCTL0_TS7                 0x80000000  // 8th Sample Temp Sensor Select
#define ADC_SSCTL0_IE7                 0x40000000  // 8th Sample Interrupt Enable
#define ADC_SSCTL0_END7                0x20000000  // 8th Sample is End of Sequence
#define ADC_SSCTL0_D7                  0x10000000  // 8th Sample Diff Input Select
#define ADC_SSCTL0_TS6                 0x08000000  // 7th Sample Temp Sensor Select
#define ADC_SSCTL0_IE6                 0x04000000  // 7th Sample Interrupt Enable
#define ADC_SSCTL0_END6                0x02000000  // 7th Sample is End of Sequence
#define ADC_SSCTL0_D6                  0x01000000  // 7th Sample Diff Input Select
#define ADC_SSCTL0_TS5                 0x00800000  // 6th Sample Temp Sensor Select
#define ADC_SSCTL0_IE5                 0x00400000  // 6th Sample Interrupt Enable
#define ADC_SSCTL0_END5                0x00200000  // 6th Sample is End of Sequence
#define ADC_SSCTL0_D5                  0x00100000  // 6th Sample Diff Input Select
#define ADC_SSCTL0_TS4                 0x00080000  // 5th Sample Temp Sensor Select
#define ADC_SSCTL0_IE4                 0x00040000  // 5th Sample Interrupt Enable
#define ADC_SSCTL0_END4                0x00020000  // 5th Sample is End of Sequence
#define ADC_SSCTL0_D4                  0x00010000  // 5th Sample Diff Input Select
#define ADC_SSCTL0_TS3                 0x00008000  // 4th Sample Temp Sensor Select
#define ADC_SSCTL0_IE3                 0x00004000  // 4th Sample Interrupt Enable
#define ADC_SSCTL0_END3                0x00002000  // 4th Sample is End of Sequence
#define ADC_SSCTL0_D3                  0x00001000  // 4th Sample Diff Input Select
#define ADC_SSCTL0_TS2                 0x00000800  // 3rd Sample Temp Sensor Select
#define ADC_SSCTL0_IE2                 0x00000400  // 3rd Sample Interrupt Enable
#define ADC_SSCTL0_END2                0x00000200  // 3rd Sample is End of Sequence
#define ADC_SSCTL0_D2                  0x00000100  // 3rd Sample Diff Input Select
#define ADC_SSCTL0_TS1                 0x00000080  // 2nd Sample Temp Sensor Select
#define ADC_SSCTL0_IE1                 0x00000040  // 2nd Sample Interrupt Enable
#define ADC_SSCTL0_END1                0x00000020  // 2nd Sample is End of Sequence
#define ADC_SSCTL0_D1                  0x00000010  // 2nd Sample Diff Input Select
#define ADC_SSCTL0_TS0                 0x00000008  // 1st Sample Temp Sensor Select
#define ADC_SSCTL0_IE0                 0x00000004  // 1st Sample Interrupt Enable
#define ADC_SSCTL0_END0                0x00000002  // 1st Sample is End of Sequence
#define ADC_SSCTL0_D0                  0x00000001  // 1st Sample Diff Input Select
                                       
#define ADC_SSFIFO0_DATA_M             0x000003FF  // Conversion Result Data
#define ADC_SSFIFO0_DATA_S             0
                                       
#define ADC_SSFSTAT0_FULL              0x00001000  // FIFO Full
#define ADC_SSFSTAT0_EMPTY             0x00000100  // FIFO Empty
#define ADC_SSFSTAT0_HPTR_M            0x000000F0  // FIFO Head Pointer
#define ADC_SSFSTAT0_TPTR_M            0x0000000F  // FIFO Tail Pointer
#define ADC_SSFSTAT0_HPTR_S            4
#define ADC_SSFSTAT0_TPTR_S            0
                                       
#define ADC_SSMUX1_MUX3_M              0x00003000  // 4th Sample Input Select
#define ADC_SSMUX1_MUX2_M              0x00000300  // 3rd Sample Input Select
#define ADC_SSMUX1_MUX1_M              0x00000030  // 2nd Sample Input Select
#define ADC_SSMUX1_MUX0_M              0x00000003  // 1st Sample Input Select
#define ADC_SSMUX1_MUX3_S              12
#define ADC_SSMUX1_MUX2_S              8
#define ADC_SSMUX1_MUX1_S              4
#define ADC_SSMUX1_MUX0_S              0
                                       
#define ADC_SSCTL1_TS3                 0x00008000  // 4th Sample Temp Sensor Select
#define ADC_SSCTL1_IE3                 0x00004000  // 4th Sample Interrupt Enable
#define ADC_SSCTL1_END3                0x00002000  // 4th Sample is End of Sequence
#define ADC_SSCTL1_D3                  0x00001000  // 4th Sample Diff Input Select
#define ADC_SSCTL1_TS2                 0x00000800  // 3rd Sample Temp Sensor Select
#define ADC_SSCTL1_IE2                 0x00000400  // 3rd Sample Interrupt Enable
#define ADC_SSCTL1_END2                0x00000200  // 3rd Sample is End of Sequence
#define ADC_SSCTL1_D2                  0x00000100  // 3rd Sample Diff Input Select
#define ADC_SSCTL1_TS1                 0x00000080  // 2nd Sample Temp Sensor Select
#define ADC_SSCTL1_IE1                 0x00000040  // 2nd Sample Interrupt Enable
#define ADC_SSCTL1_END1                0x00000020  // 2nd Sample is End of Sequence
#define ADC_SSCTL1_D1                  0x00000010  // 2nd Sample Diff Input Select
#define ADC_SSCTL1_TS0                 0x00000008  // 1st Sample Temp Sensor Select
#define ADC_SSCTL1_IE0                 0x00000004  // 1st Sample Interrupt Enable
#define ADC_SSCTL1_END0                0x00000002  // 1st Sample is End of Sequence
#define ADC_SSCTL1_D0                  0x00000001  // 1st Sample Diff Input Select
                                       
#define ADC_SSFIFO1_DATA_M             0x000003FF  // Conversion Result Data
#define ADC_SSFIFO1_DATA_S             0
                                       
#define ADC_SSFSTAT1_FULL              0x00001000  // FIFO Full
#define ADC_SSFSTAT1_EMPTY             0x00000100  // FIFO Empty
#define ADC_SSFSTAT1_HPTR_M            0x000000F0  // FIFO Head Pointer
#define ADC_SSFSTAT1_TPTR_M            0x0000000F  // FIFO Tail Pointer
#define ADC_SSFSTAT1_HPTR_S            4
#define ADC_SSFSTAT1_TPTR_S            0
                                       
#define ADC_SSMUX2_MUX3_M              0x00003000  // 4th Sample Input Select
#define ADC_SSMUX2_MUX2_M              0x00000300  // 3rd Sample Input Select
#define ADC_SSMUX2_MUX1_M              0x00000030  // 2nd Sample Input Select
#define ADC_SSMUX2_MUX0_M              0x00000003  // 1st Sample Input Select
#define ADC_SSMUX2_MUX3_S              12
#define ADC_SSMUX2_MUX2_S              8
#define ADC_SSMUX2_MUX1_S              4
#define ADC_SSMUX2_MUX0_S              0
                                       
#define ADC_SSCTL2_TS3                 0x00008000  // 4th Sample Temp Sensor Select
#define ADC_SSCTL2_IE3                 0x00004000  // 4th Sample Interrupt Enable
#define ADC_SSCTL2_END3                0x00002000  // 4th Sample is End of Sequence
#define ADC_SSCTL2_D3                  0x00001000  // 4th Sample Diff Input Select
#define ADC_SSCTL2_TS2                 0x00000800  // 3rd Sample Temp Sensor Select
#define ADC_SSCTL2_IE2                 0x00000400  // 3rd Sample Interrupt Enable
#define ADC_SSCTL2_END2                0x00000200  // 3rd Sample is End of Sequence
#define ADC_SSCTL2_D2                  0x00000100  // 3rd Sample Diff Input Select
#define ADC_SSCTL2_TS1                 0x00000080  // 2nd Sample Temp Sensor Select
#define ADC_SSCTL2_IE1                 0x00000040  // 2nd Sample Interrupt Enable
#define ADC_SSCTL2_END1                0x00000020  // 2nd Sample is End of Sequence
#define ADC_SSCTL2_D1                  0x00000010  // 2nd Sample Diff Input Select
#define ADC_SSCTL2_TS0                 0x00000008  // 1st Sample Temp Sensor Select
#define ADC_SSCTL2_IE0                 0x00000004  // 1st Sample Interrupt Enable
#define ADC_SSCTL2_END0                0x00000002  // 1st Sample is End of Sequence
#define ADC_SSCTL2_D0                  0x00000001  // 1st Sample Diff Input Select
                                       
#define ADC_SSFIFO2_DATA_M             0x000003FF  // Conversion Result Data
#define ADC_SSFIFO2_DATA_S             0
                                       
#define ADC_SSFSTAT2_FULL              0x00001000  // FIFO Full
#define ADC_SSFSTAT2_EMPTY             0x00000100  // FIFO Empty
#define ADC_SSFSTAT2_HPTR_M            0x000000F0  // FIFO Head Pointer
#define ADC_SSFSTAT2_TPTR_M            0x0000000F  // FIFO Tail Pointer
#define ADC_SSFSTAT2_HPTR_S            4
#define ADC_SSFSTAT2_TPTR_S            0
                                       
#define ADC_SSMUX3_MUX0_M              0x00000003  // 1st Sample Input Select
#define ADC_SSMUX3_MUX0_S              0

#define ADC_SSCTL3_TS0                 0x00000008  // 1st Sample Temp Sensor Select
#define ADC_SSCTL3_IE0                 0x00000004  // 1st Sample Interrupt Enable
#define ADC_SSCTL3_END0                0x00000002  // 1st Sample is End of Sequence
#define ADC_SSCTL3_D0                  0x00000001  // 1st Sample Diff Input Select
                                       
#define ADC_SSFIFO3_DATA_M             0x000003FF  // Conversion Result Data
#define ADC_SSFIFO3_DATA_S             0
                                       
#define ADC_SSFSTAT3_FULL              0x00001000  // FIFO Full
#define ADC_SSFSTAT3_EMPTY             0x00000100  // FIFO Empty
#define ADC_SSFSTAT3_HPTR_M            0x000000F0  // FIFO Head Pointer
#define ADC_SSFSTAT3_TPTR_M            0x0000000F  // FIFO Tail Pointer
#define ADC_SSFSTAT3_HPTR_S            4
#define ADC_SSFSTAT3_TPTR_S            0
                                       
#define ADC_TMLB_LB                    0x00000001  // Loopback Mode Enable
                                       
#define ADC_SSFIFO_TMLB_CNT_M          0x000003C0  // Continuous Sample Counter
#define ADC_SSFIFO_TMLB_CONT           0x00000020  // Continuation Sample Indicator
#define ADC_SSFIFO_TMLB_DIFF           0x00000010  // Differential Sample Indicator
#define ADC_SSFIFO_TMLB_TS             0x00000008  // Temp Sensor Sample Indicator
#define ADC_SSFIFO_TMLB_MUX_M          0x00000007  // Analog Input Indicator
#define ADC_SSFIFO_TMLB_CNT_S          6           // Sample counter shift
#define ADC_SSFIFO_TMLB_MUX_S          0           // Input channel number shift

//**************************************************************************************************
// COMP
//**************************************************************************************************
#define COMP_ACMIS_IN1                 0x00000002  // Comparator 1 Masked Interrupt Status
#define COMP_ACMIS_IN0                 0x00000001  // Comparator 0 Masked Interrupt Status
                                       
#define COMP_ACRIS_IN1                 0x00000002  // Comparator 1 Interrupt Status
#define COMP_ACRIS_IN0                 0x00000001  // Comparator 0 Interrupt Status
                                       
#define COMP_ACINTEN_IN1               0x00000002  // Comparator 1 Interrupt Enable
#define COMP_ACINTEN_IN0               0x00000001  // Comparator 0 Interrupt Enable
                                       
#define COMP_ACREFCTL_EN               0x00000200  // Resistor Ladder Enable
#define COMP_ACREFCTL_RNG              0x00000100  // Resistor Ladder Range
#define COMP_ACREFCTL_VREF_M           0x0000000F  // Resistor Ladder Voltage Ref
#define COMP_ACREFCTL_VREF_S           0
                                       
#define COMP_ACSTAT0_OVAL              0x00000002  // Comparator Output Value
                                       
#define COMP_ACCTL0_TOEN               0x00000800  // Trigger Output Enable
#define COMP_ACCTL0_ASRCP_M            0x00000600  // Analog Source Positive
#define COMP_ACCTL0_ASRCP_PIN          0x00000000  // Pin value of Cn+
#define COMP_ACCTL0_ASRCP_PIN0         0x00000200  // Pin value of C0+
#define COMP_ACCTL0_ASRCP_REF          0x00000400  // Internal voltage reference (VIREF)
#define COMP_ACCTL0_TSLVAL             0x00000080  // Trigger Sense Level Value
#define COMP_ACCTL0_TSEN_M             0x00000060  // Trigger Sense
#define COMP_ACCTL0_TSEN_LEVEL         0x00000000  // Level sense, see TSLVAL
#define COMP_ACCTL0_TSEN_FALL          0x00000020  // Falling edge
#define COMP_ACCTL0_TSEN_RISE          0x00000040  // Rising edge
#define COMP_ACCTL0_TSEN_BOTH          0x00000060  // Either edge
#define COMP_ACCTL0_ISLVAL             0x00000010  // Interrupt Sense Level Value
#define COMP_ACCTL0_ISEN_M             0x0000000C  // Interrupt Sense
#define COMP_ACCTL0_ISEN_LEVEL         0x00000000  // Level sense, see ISLVAL
#define COMP_ACCTL0_ISEN_FALL          0x00000004  // Falling edge
#define COMP_ACCTL0_ISEN_RISE          0x00000008  // Rising edge
#define COMP_ACCTL0_ISEN_BOTH          0x0000000C  // Either edge
#define COMP_ACCTL0_CINV               0x00000002  // Comparator Output Invert

#define COMP_ACSTAT1_OVAL              0x00000002  // Comparator Output Value
                                       
#define COMP_ACCTL1_TOEN               0x00000800  // Trigger Output Enable
#define COMP_ACCTL1_ASRCP_M            0x00000600  // Analog Source Positive
#define COMP_ACCTL1_ASRCP_PIN          0x00000000  // Pin value of Cn+
#define COMP_ACCTL1_ASRCP_PIN0         0x00000200  // Pin value of C0+
#define COMP_ACCTL1_ASRCP_REF          0x00000400  // Internal voltage reference (VIREF)
#define COMP_ACCTL1_TSLVAL             0x00000080  // Trigger Sense Level Value
#define COMP_ACCTL1_TSEN_M             0x00000060  // Trigger Sense
#define COMP_ACCTL1_TSEN_LEVEL         0x00000000  // Level sense, see TSLVAL
#define COMP_ACCTL1_TSEN_FALL          0x00000020  // Falling edge
#define COMP_ACCTL1_TSEN_RISE          0x00000040  // Rising edge
#define COMP_ACCTL1_TSEN_BOTH          0x00000060  // Either edge
#define COMP_ACCTL1_ISLVAL             0x00000010  // Interrupt Sense Level Value
#define COMP_ACCTL1_ISEN_M             0x0000000C  // Interrupt Sense
#define COMP_ACCTL1_ISEN_LEVEL         0x00000000  // Level sense, see ISLVAL
#define COMP_ACCTL1_ISEN_FALL          0x00000004  // Falling edge
#define COMP_ACCTL1_ISEN_RISE          0x00000008  // Rising edge
#define COMP_ACCTL1_ISEN_BOTH          0x0000000C  // Either edge
#define COMP_ACCTL1_CINV               0x00000002  // Comparator Output Invert

//**************************************************************************************************
// ETHERNET MAC
//**************************************************************************************************
#define MAC_RIS_PHYINT                 0x00000040  // PHY Interrupt
#define MAC_RIS_MDINT                  0x00000020  // MII Transaction Complete
#define MAC_RIS_RXER                   0x00000010  // Receive Error
#define MAC_RIS_FOV                    0x00000008  // FIFO Overrun
#define MAC_RIS_TXEMP                  0x00000004  // Transmit FIFO Empty
#define MAC_RIS_TXER                   0x00000002  // Transmit Error
#define MAC_RIS_RXINT                  0x00000001  // Packet Received

#define MAC_IACK_PHYINT                0x00000040  // Clear PHY Interrupt
#define MAC_IACK_MDINT                 0x00000020  // Clear MII Transaction Complete
#define MAC_IACK_RXER                  0x00000010  // Clear Receive Error
#define MAC_IACK_FOV                   0x00000008  // Clear FIFO Overrun
#define MAC_IACK_TXEMP                 0x00000004  // Clear Transmit FIFO Empty
#define MAC_IACK_TXER                  0x00000002  // Clear Transmit Error
#define MAC_IACK_RXINT                 0x00000001  // Clear Packet Received

#define MAC_IM_PHYINTM                 0x00000040  // Mask PHY Interrupt
#define MAC_IM_MDINTM                  0x00000020  // Mask MII Transaction Complete
#define MAC_IM_RXERM                   0x00000010  // Mask Receive Error
#define MAC_IM_FOVM                    0x00000008  // Mask FIFO Overrun
#define MAC_IM_TXEMPM                  0x00000004  // Mask Transmit FIFO Empty
#define MAC_IM_TXERM                   0x00000002  // Mask Transmit Error
#define MAC_IM_RXINTM                  0x00000001  // Mask Packet Received

#define MAC_RCTL_RSTFIFO               0x00000010  // Clear Receive FIFO
#define MAC_RCTL_BADCRC                0x00000008  // Enable Reject Bad CRC
#define MAC_RCTL_PRMS                  0x00000004  // Enable Promiscuous Mode
#define MAC_RCTL_AMUL                  0x00000002  // Enable Multicast Frames
#define MAC_RCTL_RXEN                  0x00000001  // Enable Receiver
                                       
#define MAC_TCTL_DUPLEX                0x00000010  // Enable Duplex Mode
#define MAC_TCTL_CRC                   0x00000004  // Enable CRC Generation
#define MAC_TCTL_PADEN                 0x00000002  // Enable Packet Padding
#define MAC_TCTL_TXEN                  0x00000001  // Enable Transmitter
                                       
#define MAC_DATA_TXDATA_M              0xFFFFFFFF  // Transmit FIFO Data
#define MAC_DATA_RXDATA_M              0xFFFFFFFF  // Receive FIFO Data
#define MAC_DATA_RXDATA_S              0
#define MAC_DATA_TXDATA_S              0

#define MAC_IA0_MACOCT4_M              0xFF000000  // MAC Address Octet 4
#define MAC_IA0_MACOCT3_M              0x00FF0000  // MAC Address Octet 3
#define MAC_IA0_MACOCT2_M              0x0000FF00  // MAC Address Octet 2
#define MAC_IA0_MACOCT1_M              0x000000FF  // MAC Address Octet 1
#define MAC_IA0_MACOCT4_S              24
#define MAC_IA0_MACOCT3_S              16
#define MAC_IA0_MACOCT2_S              8
#define MAC_IA0_MACOCT1_S              0

#define MAC_IA1_MACOCT6_M              0x0000FF00  // MAC Address Octet 6
#define MAC_IA1_MACOCT5_M              0x000000FF  // MAC Address Octet 5
#define MAC_IA1_MACOCT6_S              8
#define MAC_IA1_MACOCT5_S              0
                                       
#define MAC_THR_THRESH_M               0x0000003F  // Threshold Value
#define MAC_THR_THRESH_S               0

#define MAC_MCTL_REGADR_M              0x000000F8  // MII Register Address
#define MAC_MCTL_WRITE                 0x00000002  // MII Register Transaction Type
#define MAC_MCTL_START                 0x00000001  // MII Register Transaction Enable
#define MAC_MCTL_REGADR_S              3
                                       
#define MAC_MDV_DIV_M                  0x000000FF  // Clock Divider
#define MAC_MDV_DIV_S                  0

#define MAC_MTXD_MDTX_M                0x0000FFFF  // MII Register Transmit Data
#define MAC_MTXD_MDTX_S                0
                                       
#define MAC_MRXD_MDRX_M                0x0000FFFF  // MII Register Receive Data
#define MAC_MRXD_MDRX_S                0
                                       
#define MAC_NP_NPR_M                   0x0000003F  // Number of Packets in Receive FIFO
#define MAC_NP_NPR_S                   0

#define MAC_TR_NEWTX                   0x00000001  // New Transmission
                                       
#define MAC_LED_LED1_M                 0x00000F00  // LED1 Source
#define MAC_LED_LED1_LINK              0x00000000  // Link OK
#define MAC_LED_LED1_RXTX              0x00000100  // RX or TX Activity (Default LED1)
#define MAC_LED_LED1_100               0x00000500  // 100BASE-TX mode
#define MAC_LED_LED1_10                0x00000600  // 10BASE-T mode
#define MAC_LED_LED1_DUPLEX            0x00000700  // Full-Duplex
#define MAC_LED_LED1_LINKACT           0x00000800  // Link OK & Blink=RX or TX
                                                   // Activity
#define MAC_LED_LED0_M                 0x0000000F  // LED0 Source
#define MAC_LED_LED0_LINK              0x00000000  // Link OK (Default LED0)
#define MAC_LED_LED0_RXTX              0x00000001  // RX or TX Activity
#define MAC_LED_LED0_100               0x00000005  // 100BASE-TX mode
#define MAC_LED_LED0_10                0x00000006  // 10BASE-T mode
#define MAC_LED_LED0_DUPLEX            0x00000007  // Full-Duplex
#define MAC_LED_LED0_LINKACT           0x00000008  // Link OK & Blink=RX or TX

#define MAC_MDIX_EN                    0x00000001  // MDI/MDI-X Enable

//**************************************************************************************************
// ETHERNET PHY
//**************************************************************************************************
#define PHY_MR0                        0x00000000  // Ethernet PHY Management Register 0  - Control
#define PHY_MR1                        0x00000001  // Ethernet PHY Management Register 1  - Status
#define PHY_MR2                        0x00000002  // Ethernet PHY Management Register 2  - PHY Identifier 1
#define PHY_MR3                        0x00000003  // Ethernet PHY Management Register 3  - PHY Identifier 2
#define PHY_MR4                        0x00000004  // Ethernet PHY Management Register 4  - Auto-Negotiation Advertisement
#define PHY_MR5                        0x00000005  // Ethernet PHY Management Register 5  - Auto-Negotiation Link Partner Base Page Ability
#define PHY_MR6                        0x00000006  // Ethernet PHY Management Register 6  - Auto-Negotiation Expansion
#define PHY_MR16                       0x00000010  // Ethernet PHY Management Register 16 - Vendor-Specific
#define PHY_MR17                       0x00000011  // Ethernet PHY Management Register 17 - Mode Control/Status
#define PHY_MR18                       0x00000012  // Ethernet PHY Management Register 18 - Diagnostic
#define PHY_MR19                       0x00000013  // Ethernet PHY Management Register 19 - Transceiver Control
#define PHY_MR23                       0x00000017  // Ethernet PHY Management Register 23 - LED Configuration
#define PHY_MR24                       0x00000018  // Ethernet PHY Management Register 24 - MDI/MDIX Control

#define PHY_MR0_RESET                  0x00008000  // Reset Registers
#define PHY_MR0_LOOPBK                 0x00004000  // Loopback Mode
#define PHY_MR0_SPEEDSL                0x00002000  // Speed Select
#define PHY_MR0_ANEGEN                 0x00001000  // Auto-Negotiation Enable
#define PHY_MR0_PWRDN                  0x00000800  // Power Down
#define PHY_MR0_ISO                    0x00000400  // Isolate
#define PHY_MR0_RANEG                  0x00000200  // Restart Auto-Negotiation
#define PHY_MR0_DUPLEX                 0x00000100  // Set Duplex Mode
#define PHY_MR0_COLT                   0x00000080  // Collision Test
                                       
#define PHY_MR1_100X_F                 0x00004000  // 100BASE-TX Full-Duplex Mode
#define PHY_MR1_100X_H                 0x00002000  // 100BASE-TX Half-Duplex Mode
#define PHY_MR1_10T_F                  0x00001000  // 10BASE-T Full-Duplex Mode
#define PHY_MR1_10T_H                  0x00000800  // 10BASE-T Half-Duplex Mode
#define PHY_MR1_MFPS                   0x00000040  // Management Frames with Preamble Suppressed
#define PHY_MR1_ANEGC                  0x00000020  // Auto-Negotiation Complete
#define PHY_MR1_RFAULT                 0x00000010  // Remote Fault
#define PHY_MR1_ANEGA                  0x00000008  // Auto-Negotiation
#define PHY_MR1_LINK                   0x00000004  // Link Made
#define PHY_MR1_JAB                    0x00000002  // Jabber Condition
#define PHY_MR1_EXTD                   0x00000001  // Extended Capabilities
                                       
#define PHY_MR2_OUI_M                  0x0000FFFF  // Organizationally Unique Identifier[21:6]
#define PHY_MR2_OUI_S                  0
                                       
#define PHY_MR3_OUI_M                  0x0000FC00  // Organizationally Unique Identifier[5:0]
#define PHY_MR3_MN_M                   0x000003F0  // Model Number
#define PHY_MR3_RN_M                   0x0000000F  // Revision Number
#define PHY_MR3_OUI_S                  10
#define PHY_MR3_MN_S                   4
#define PHY_MR3_RN_S                   0
                                       
#define PHY_MR4_NP                     0x00008000  // Next Page
#define PHY_MR4_RF                     0x00002000  // Remote Fault
#define PHY_MR4_A3                     0x00000100  // Technology Ability Field [3]
#define PHY_MR4_A2                     0x00000080  // Technology Ability Field [2]
#define PHY_MR4_A1                     0x00000040  // Technology Ability Field [1]
#define PHY_MR4_A0                     0x00000020  // Technology Ability Field [0]
#define PHY_MR4_S_M                    0x0000001F  // Selector Field
#define PHY_MR4_S_S                    0

#define PHY_MR5_NP                     0x00008000  // Next Page
#define PHY_MR5_ACK                    0x00004000  // Acknowledge
#define PHY_MR5_RF                     0x00002000  // Remote Fault
#define PHY_MR5_A_M                    0x00001FE0  // Technology Ability Field
#define PHY_MR5_S_M                    0x0000001F  // Selector Field
#define PHY_MR5_S_8023                 0x00000001  // IEEE Std 802.3
#define PHY_MR5_S_8029                 0x00000002  // IEEE Std 802.9 ISLAN-16T
#define PHY_MR5_S_8025                 0x00000003  // IEEE Std 802.5
#define PHY_MR5_S_1394                 0x00000004  // IEEE Std 1394
#define PHY_MR5_A_S                    5
                                       
#define PHY_MR6_PDF                    0x00000010  // Parallel Detection Fault
#define PHY_MR6_LPNPA                  0x00000008  // Link Partner is Next Page Able
#define PHY_MR6_PRX                    0x00000002  // New Page Received
#define PHY_MR6_LPANEGA                0x00000001  // Link Partner is Auto-Negotiation Able
                                       
#define PHY_MR16_RPTR                  0x00008000  // Repeater Mode
#define PHY_MR16_INPOL                 0x00004000  // Interrupt Polarity
#define PHY_MR16_TXHIM                 0x00001000  // Transmit High Impedance Mode
#define PHY_MR16_SQEI                  0x00000800  // SQE Inhibit Testing
#define PHY_MR16_NL10                  0x00000400  // Natural Loopback Mode
#define PHY_MR16_APOL                  0x00000020  // Auto-Polarity Disable
#define PHY_MR16_RVSPOL                0x00000010  // Receive Data Polarity
#define PHY_MR16_PCSBP                 0x00000002  // PCS Bypass
#define PHY_MR16_RXCC                  0x00000001  // Receive Clock Control
                                       
#define PHY_MR17_JABBER_IE             0x00008000  // Jabber Interrupt Enable
#define PHY_MR17_RXER_IE               0x00004000  // Receive Error Interrupt Enable
#define PHY_MR17_PRX_IE                0x00002000  // Page Received Interrupt Enable
#define PHY_MR17_PDF_IE                0x00001000  // Parallel Detection Fault Interrupt Enable
#define PHY_MR17_LPACK_IE              0x00000800  // LP Acknowledge Interrupt Enable
#define PHY_MR17_LSCHG_IE              0x00000400  // Link Status Change Interrupt Enable
#define PHY_MR17_RFAULT_IE             0x00000200  // Remote Fault Interrupt Enable
#define PHY_MR17_ANEGCOMP_IE           0x00000100  // Auto-Negotiation Complete Interrupt Enable
#define PHY_MR17_JABBER_INT            0x00000080  // Jabber Event Interrupt
#define PHY_MR17_RXER_INT              0x00000040  // Receive Error Interrupt
#define PHY_MR17_PRX_INT               0x00000020  // Page Receive Interrupt
#define PHY_MR17_PDF_INT               0x00000010  // Parallel Detection Fault Interrupt
#define PHY_MR17_LPACK_INT             0x00000008  // LP Acknowledge Interrupt
#define PHY_MR17_LSCHG_INT             0x00000004  // Link Status Change Interrupt
#define PHY_MR17_RFAULT_INT            0x00000002  // Remote Fault Interrupt
#define PHY_MR17_ANEGCOMP_INT          0x00000001  // Auto-Negotiation Complete Interrupt
                                       
#define PHY_MR18_ANEGF                 0x00001000  // Auto-Negotiation Failure
#define PHY_MR18_DPLX                  0x00000800  // Duplex Mode
#define PHY_MR18_RATE                  0x00000400  // Rate
#define PHY_MR18_RXSD                  0x00000200  // Receive Detection
#define PHY_MR18_RX_LOCK               0x00000100  // Receive PLL Lock
                                       
#define PHY_MR19_TXO_M                 0x0000C000  // Transmit Amplitude Selection
#define PHY_MR19_TXO_00DB              0x00000000  // Gain set for 0.0dB of insertion loss
#define PHY_MR19_TXO_04DB              0x00004000  // Gain set for 0.4dB of insertion loss
#define PHY_MR19_TXO_08DB              0x00008000  // Gain set for 0.8dB of insertion loss
#define PHY_MR19_TXO_12DB              0x0000C000  // Gain set for 1.2dB of insertion loss
                                       
#define PHY_MR23_LED1_M                0x000000F0  // LED1 Source
#define PHY_MR23_LED1_LINK             0x00000000  // Link OK
#define PHY_MR23_LED1_RXTX             0x00000010  // RX or TX Activity (Default LED1)
#define PHY_MR23_LED1_100              0x00000050  // 100BASE-TX mode
#define PHY_MR23_LED1_10               0x00000060  // 10BASE-T mode
#define PHY_MR23_LED1_DUPLEX           0x00000070  // Full-Duplex
#define PHY_MR23_LED1_LINKACT          0x00000080  // Link OK & Blink=RX or TX Activity
#define PHY_MR23_LED0_M                0x0000000F  // LED0 Source
#define PHY_MR23_LED0_LINK             0x00000000  // Link OK (Default LED0)
#define PHY_MR23_LED0_RXTX             0x00000001  // RX or TX Activity
#define PHY_MR23_LED0_100              0x00000005  // 100BASE-TX mode
#define PHY_MR23_LED0_10               0x00000006  // 10BASE-T mode
#define PHY_MR23_LED0_DUPLEX           0x00000007  // Full-Duplex
#define PHY_MR23_LED0_LINKACT          0x00000008  // Link OK & Blink=RX or TX Activity
                                       
#define PHY_MR24_PD_MODE               0x00000080  // Parallel Detection Mode
#define PHY_MR24_AUTO_SW               0x00000040  // Auto-Switching Enable
#define PHY_MR24_MDIX                  0x00000020  // Auto-Switching Configuration
#define PHY_MR24_MDIX_CM               0x00000010  // Auto-Switching Complete
#define PHY_MR24_MDIX_SD_M             0x0000000F  // Auto-Switching Seed
#define PHY_MR24_MDIX_SD_S             0
                                       
//**************************************************************************************************
// HIBERNATION
//**************************************************************************************************
#define HIB_RTCC_M                     0xFFFFFFFF  // RTC Counter
#define HIB_RTCC_S                     0
                                       
#define HIB_RTCM0_M                    0xFFFFFFFF  // RTC Match 0
#define HIB_RTCM0_S                    0
                                       
#define HIB_RTCM1_M                    0xFFFFFFFF  // RTC Match 1
#define HIB_RTCM1_S                    0
                                       
#define HIB_RTCLD_M                    0xFFFFFFFF  // RTC Load
#define HIB_RTCLD_S                    0
                                       
#define HIB_CTL_VABORT                 0x00000080  // Power Cut Abort Enable
#define HIB_CTL_CLK32EN                0x00000040  // Clocking Enable
#define HIB_CTL_LOWBATEN               0x00000020  // Low Battery Monitoring Enable
#define HIB_CTL_PINWEN                 0x00000010  // External WAKE Pin Enable
#define HIB_CTL_RTCWEN                 0x00000008  // RTC Wake-up Enable
#define HIB_CTL_CLKSEL                 0x00000004  // Hibernation Module Clock Select
#define HIB_CTL_HIBREQ                 0x00000002  // Hibernation Request
#define HIB_CTL_RTCEN                  0x00000001  // RTC Timer Enable
                                       
#define HIB_IM_EXTW                    0x00000008  // External Wake-Up Interrupt Mask
#define HIB_IM_LOWBAT                  0x00000004  // Low Battery Voltage Interrupt Mask
#define HIB_IM_RTCALT1                 0x00000002  // RTC Alert 1 Interrupt Mask
#define HIB_IM_RTCALT0                 0x00000001  // RTC Alert 0 Interrupt Mask
                                       
#define HIB_RIS_EXTW                   0x00000008  // External Wake-Up Raw Interrupt Status
#define HIB_RIS_LOWBAT                 0x00000004  // Low Battery Voltage Raw Interrupt Status
#define HIB_RIS_RTCALT1                0x00000002  // RTC Alert 1 Raw Interrupt Status
#define HIB_RIS_RTCALT0                0x00000001  // RTC Alert 0 Raw Interrupt Status
                                       
#define HIB_MIS_EXTW                   0x00000008  // External Wake-Up Masked Interrupt Status
#define HIB_MIS_LOWBAT                 0x00000004  // Low Battery Voltage Masked Interrupt Status
#define HIB_MIS_RTCALT1                0x00000002  // RTC Alert 1 Masked Interrupt Status
#define HIB_MIS_RTCALT0                0x00000001  // RTC Alert 0 Masked Interrupt Status
                                       
#define HIB_IC_EXTW                    0x00000008  // External Wake-Up Masked Interrupt Clear
#define HIB_IC_LOWBAT                  0x00000004  // Low Battery Voltage Masked Interrupt Clear
#define HIB_IC_RTCALT1                 0x00000002  // RTC Alert1 Masked Interrupt Clear
#define HIB_IC_RTCALT0                 0x00000001  // RTC Alert0 Masked Interrupt Clear
                                       
#define HIB_RTCT_TRIM_M                0x0000FFFF  // RTC Trim Value
#define HIB_RTCT_TRIM_S                0
                                       
#define HIB_DATA_RTD_M                 0xFFFFFFFF  // Hibernation Module NV Data
#define HIB_DATA_RTD_S                 0

//**************************************************************************************************
// FLASH
//**************************************************************************************************
#define FLASH_FMA_OFFSET_M             0x0003FFFF  // Address Offset
#define FLASH_FMA_OFFSET_S             0
                                       
#define FLASH_FMD_DATA_M               0xFFFFFFFF  // Data Value
#define FLASH_FMD_DATA_S               0
                                       
#define FLASH_FMC_WRKEY                0xA4420000  // FLASH write key
#define FLASH_FMC_COMT                 0x00000008  // Commit Register Value
#define FLASH_FMC_MERASE               0x00000004  // Mass Erase Flash Memory
#define FLASH_FMC_ERASE                0x00000002  // Erase a Page of Flash Memory
#define FLASH_FMC_WRITE                0x00000001  // Write a Word into Flash Memory
                                       
#define FLASH_FCRIS_PRIS               0x00000002  // Programming Raw Interrupt Status
#define FLASH_FCRIS_ARIS               0x00000001  // Access Raw Interrupt Status
                                       
#define FLASH_FCIM_PMASK               0x00000002  // Programming Interrupt Mask
#define FLASH_FCIM_AMASK               0x00000001  // Access Interrupt Mask
                                       
#define FLASH_FCMISC_PMISC             0x00000002  // Programming Masked Interrupt Status and Clear
#define FLASH_FCMISC_AMISC             0x00000001  // Access Masked Interrupt Status and Clear
                                       
#define FLASH_USECRL_M                 0x000000FF  // Microsecond Reload Value
#define FLASH_USECRL_S                 0

#define FLASH_USERDBG_NW               0x80000000  // User Debug Not Written
#define FLASH_USERDBG_DATA_M           0x7FFFFFFC  // User Data
#define FLASH_USERDBG_DBG1             0x00000002  // Debug Control 1
#define FLASH_USERDBG_DBG0             0x00000001  // Debug Control 0
#define FLASH_USERDBG_DATA_S           2
                                       
#define FLASH_USERREG0_NW              0x80000000  // Not Written
#define FLASH_USERREG0_DATA_M          0x7FFFFFFF  // User Data
#define FLASH_USERREG0_DATA_S          0

#define FLASH_USERREG1_NW              0x80000000  // Not Written
#define FLASH_USERREG1_DATA_M          0x7FFFFFFF  // User Data
#define FLASH_USERREG1_DATA_S          0
                                       
#define FLASH_PROTECT_SIZE             0x00000800
#define FLASH_ERASE_SIZE               0x00000400


#define SCB_CPUID_REVISION             ((uint32_t)0x0000000F)        /*!< Implementation defined revision number */
#define SCB_CPUID_PARTNO               ((uint32_t)0x0000FFF0)        /*!< Number of processor within family */
#define SCB_CPUID_Constant             ((uint32_t)0x000F0000)        /*!< Reads as 0x0F */
#define SCB_CPUID_VARIANT              ((uint32_t)0x00F00000)        /*!< Implementation defined variant number */
#define SCB_CPUID_IMPLEMENTER          ((uint32_t)0xFF000000)        /*!< Implementer code. ARM is 0x41 */

/*******************  Bit definition for SCB_ICSR register  *******************/
#define SCB_ICSR_VECTACTIVE            ((uint32_t)0x000001FF)        /*!< Active ISR number field */
#define SCB_ICSR_RETTOBASE             ((uint32_t)0x00000800)        /*!< All active exceptions minus the IPSR_current_exception yields the empty set */
#define SCB_ICSR_VECTPENDING           ((uint32_t)0x003FF000)        /*!< Pending ISR number field */
#define SCB_ICSR_ISRPENDING            ((uint32_t)0x00400000)        /*!< Interrupt pending flag */
#define SCB_ICSR_ISRPREEMPT            ((uint32_t)0x00800000)        /*!< It indicates that a pending interrupt becomes active in the next running cycle */
#define SCB_ICSR_PENDSTCLR             ((uint32_t)0x02000000)        /*!< Clear pending SysTick bit */
#define SCB_ICSR_PENDSTSET             ((uint32_t)0x04000000)        /*!< Set pending SysTick bit */
#define SCB_ICSR_PENDSVCLR             ((uint32_t)0x08000000)        /*!< Clear pending pendSV bit */
#define SCB_ICSR_PENDSVSET             ((uint32_t)0x10000000)        /*!< Set pending pendSV bit */
#define SCB_ICSR_NMIPENDSET            ((uint32_t)0x80000000)        /*!< Set pending NMI bit */

/*******************  Bit definition for SCB_VTOR register  *******************/
#define SCB_VTOR_TBLOFF                ((uint32_t)0x1FFFFF80)        /*!< Vector table base offset field */
#define SCB_VTOR_TBLBASE               ((uint32_t)0x20000000)        /*!< Table base in code(0) or RAM(1) */

/*!<*****************  Bit definition for SCB_AIRCR register  *******************/
#define SCB_AIRCR_VECTRESET            ((uint32_t)0x00000001)        /*!< System Reset bit */
#define SCB_AIRCR_VECTCLRACTIVE        ((uint32_t)0x00000002)        /*!< Clear active vector bit */
#define SCB_AIRCR_SYSRESETREQ          ((uint32_t)0x00000004)        /*!< Requests chip control logic to generate a reset */

#define SCB_AIRCR_PRIGROUP             ((uint32_t)0x00000700)        /*!< PRIGROUP[2:0] bits (Priority group) */
#define SCB_AIRCR_PRIGROUP_0           ((uint32_t)0x00000100)        /*!< Bit 0 */
#define SCB_AIRCR_PRIGROUP_1           ((uint32_t)0x00000200)        /*!< Bit 1 */
#define SCB_AIRCR_PRIGROUP_2           ((uint32_t)0x00000400)        /*!< Bit 2  */

/* prority group configuration */
#define SCB_AIRCR_PRIGROUP0            ((uint32_t)0x00000000)        /*!< Priority group=0 (7 bits of pre-emption priority, 1 bit of subpriority) */
#define SCB_AIRCR_PRIGROUP1            ((uint32_t)0x00000100)        /*!< Priority group=1 (6 bits of pre-emption priority, 2 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP2            ((uint32_t)0x00000200)        /*!< Priority group=2 (5 bits of pre-emption priority, 3 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP3            ((uint32_t)0x00000300)        /*!< Priority group=3 (4 bits of pre-emption priority, 4 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP4            ((uint32_t)0x00000400)        /*!< Priority group=4 (3 bits of pre-emption priority, 5 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP5            ((uint32_t)0x00000500)        /*!< Priority group=5 (2 bits of pre-emption priority, 6 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP6            ((uint32_t)0x00000600)        /*!< Priority group=6 (1 bit of pre-emption priority, 7 bits of subpriority) */
#define SCB_AIRCR_PRIGROUP7            ((uint32_t)0x00000700)        /*!< Priority group=7 (no pre-emption priority, 8 bits of subpriority) */

#define SCB_AIRCR_ENDIANESS            ((uint32_t)0x00008000)        /*!< Data endianness bit */
#define SCB_AIRCR_VECTKEY              ((uint32_t)0xFFFF0000)        /*!< Register key (VECTKEY) - Reads as 0xFA05 (VECTKEYSTAT) */

/*******************  Bit definition for SCB_SCR register  ********************/
#define SCB_SCR_SLEEPONEXIT            ((uint8_t)0x02)               /*!< Sleep on exit bit */
#define SCB_SCR_SLEEPDEEP              ((uint8_t)0x04)               /*!< Sleep deep bit */
#define SCB_SCR_SEVONPEND              ((uint8_t)0x10)               /*!< Wake up from WFE */

/********************  Bit definition for SCB_CCR register  *******************/
#define SCB_CCR_NONBASETHRDENA         ((uint16_t)0x0001)            /*!< Thread mode can be entered from any level in Handler mode by controlled return value */
#define SCB_CCR_USERSETMPEND           ((uint16_t)0x0002)            /*!< Enables user code to write the Software Trigger Interrupt register to trigger (pend) a Main exception */
#define SCB_CCR_UNALIGN_TRP            ((uint16_t)0x0008)            /*!< Trap for unaligned access */
#define SCB_CCR_DIV_0_TRP              ((uint16_t)0x0010)            /*!< Trap on Divide by 0 */
#define SCB_CCR_BFHFNMIGN              ((uint16_t)0x0100)            /*!< Handlers running at priority -1 and -2 */
#define SCB_CCR_STKALIGN               ((uint16_t)0x0200)            /*!< On exception entry, the SP used prior to the exception is adjusted to be 8-byte aligned */

/*******************  Bit definition for SCB_SHPR register ********************/
#define SCB_SHPR_PRI_N                 ((uint32_t)0x000000FF)        /*!< Priority of system handler 4,8, and 12. Mem Manage, reserved and Debug Monitor */
#define SCB_SHPR_PRI_N1                ((uint32_t)0x0000FF00)        /*!< Priority of system handler 5,9, and 13. Bus Fault, reserved and reserved */
#define SCB_SHPR_PRI_N2                ((uint32_t)0x00FF0000)        /*!< Priority of system handler 6,10, and 14. Usage Fault, reserved and PendSV */
#define SCB_SHPR_PRI_N3                ((uint32_t)0xFF000000)        /*!< Priority of system handler 7,11, and 15. Reserved, SVCall and SysTick */

/******************  Bit definition for SCB_SHCSR register  *******************/
#define SCB_SHCSR_MEMFAULTACT          ((uint32_t)0x00000001)        /*!< MemManage is active */
#define SCB_SHCSR_BUSFAULTACT          ((uint32_t)0x00000002)        /*!< BusFault is active */
#define SCB_SHCSR_USGFAULTACT          ((uint32_t)0x00000008)        /*!< UsageFault is active */
#define SCB_SHCSR_SVCALLACT            ((uint32_t)0x00000080)        /*!< SVCall is active */
#define SCB_SHCSR_MONITORACT           ((uint32_t)0x00000100)        /*!< Monitor is active */
#define SCB_SHCSR_PENDSVACT            ((uint32_t)0x00000400)        /*!< PendSV is active */
#define SCB_SHCSR_SYSTICKACT           ((uint32_t)0x00000800)        /*!< SysTick is active */
#define SCB_SHCSR_USGFAULTPENDED       ((uint32_t)0x00001000)        /*!< Usage Fault is pended */
#define SCB_SHCSR_MEMFAULTPENDED       ((uint32_t)0x00002000)        /*!< MemManage is pended */
#define SCB_SHCSR_BUSFAULTPENDED       ((uint32_t)0x00004000)        /*!< Bus Fault is pended */
#define SCB_SHCSR_SVCALLPENDED         ((uint32_t)0x00008000)        /*!< SVCall is pended */
#define SCB_SHCSR_MEMFAULTENA          ((uint32_t)0x00010000)        /*!< MemManage enable */
#define SCB_SHCSR_BUSFAULTENA          ((uint32_t)0x00020000)        /*!< Bus Fault enable */
#define SCB_SHCSR_USGFAULTENA          ((uint32_t)0x00040000)        /*!< UsageFault enable */

/*******************  Bit definition for SCB_CFSR register  *******************/
/*!< MFSR */
#define SCB_CFSR_IACCVIOL              ((uint32_t)0x00000001)        /*!< Instruction access violation */
#define SCB_CFSR_DACCVIOL              ((uint32_t)0x00000002)        /*!< Data access violation */
#define SCB_CFSR_MUNSTKERR             ((uint32_t)0x00000008)        /*!< Unstacking error */
#define SCB_CFSR_MSTKERR               ((uint32_t)0x00000010)        /*!< Stacking error */
#define SCB_CFSR_MMARVALID             ((uint32_t)0x00000080)        /*!< Memory Manage Address Register address valid flag */
/*!< BFSR */
#define SCB_CFSR_IBUSERR               ((uint32_t)0x00000100)        /*!< Instruction bus error flag */
#define SCB_CFSR_PRECISERR             ((uint32_t)0x00000200)        /*!< Precise data bus error */
#define SCB_CFSR_IMPRECISERR           ((uint32_t)0x00000400)        /*!< Imprecise data bus error */
#define SCB_CFSR_UNSTKERR              ((uint32_t)0x00000800)        /*!< Unstacking error */
#define SCB_CFSR_STKERR                ((uint32_t)0x00001000)        /*!< Stacking error */
#define SCB_CFSR_BFARVALID             ((uint32_t)0x00008000)        /*!< Bus Fault Address Register address valid flag */
/*!< UFSR */
#define SCB_CFSR_UNDEFINSTR            ((uint32_t)0x00010000)        /*!< The processor attempt to execute an undefined instruction */
#define SCB_CFSR_INVSTATE              ((uint32_t)0x00020000)        /*!< Invalid combination of EPSR and instruction */
#define SCB_CFSR_INVPC                 ((uint32_t)0x00040000)        /*!< Attempt to load EXC_RETURN into pc illegally */
#define SCB_CFSR_NOCP                  ((uint32_t)0x00080000)        /*!< Attempt to use a coprocessor instruction */
#define SCB_CFSR_UNALIGNED             ((uint32_t)0x01000000)        /*!< Fault occurs when there is an attempt to make an unaligned memory access */
#define SCB_CFSR_DIVBYZERO             ((uint32_t)0x02000000)        /*!< Fault occurs when SDIV or DIV instruction is used with a divisor of 0 */

/*******************  Bit definition for SCB_HFSR register  *******************/
#define SCB_HFSR_VECTTBL               ((uint32_t)0x00000002)        /*!< Fault occurs because of vector table read on exception processing */
#define SCB_HFSR_FORCED                ((uint32_t)0x40000000)        /*!< Hard Fault activated when a configurable Fault was received and cannot activate */
#define SCB_HFSR_DEBUGEVT              ((uint32_t)0x80000000)        /*!< Fault related to debug */

/*******************  Bit definition for SCB_DFSR register  *******************/
#define SCB_DFSR_HALTED                ((uint8_t)0x01)               /*!< Halt request flag */
#define SCB_DFSR_BKPT                  ((uint8_t)0x02)               /*!< BKPT flag */
#define SCB_DFSR_DWTTRAP               ((uint8_t)0x04)               /*!< Data Watchpoint and Trace (DWT) flag */
#define SCB_DFSR_VCATCH                ((uint8_t)0x08)               /*!< Vector catch flag */
#define SCB_DFSR_EXTERNAL              ((uint8_t)0x10)               /*!< External debug request flag */

/*******************  Bit definition for SCB_MMFAR register  ******************/
#define SCB_MMFAR_ADDRESS              ((uint32_t)0xFFFFFFFF)        /*!< Mem Manage fault address field */

/*******************  Bit definition for SCB_BFAR register  *******************/
#define SCB_BFAR_ADDRESS               ((uint32_t)0xFFFFFFFF)        /*!< Bus fault address field */

/*******************  Bit definition for SCB_afsr register  *******************/
#define SCB_AFSR_IMPDEF                ((uint32_t)0xFFFFFFFF)        /*!< Implementation defined */

#endif /* __H_BITS_LM3S__ */