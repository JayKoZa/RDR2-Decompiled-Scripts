#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 5;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	char* sLocal_88 = NULL;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 9999;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<6> Local_109 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 2;
	var uLocal_126 = 1;
	var uLocal_127 = 1;
	var uLocal_128 = 1;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	var uLocal_131 = 2;
	var uLocal_132 = 2;
	var uLocal_133 = 3;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 3;
	var uLocal_137 = 1;
	var uLocal_138 = 3;
	var uLocal_139 = 3;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	char* sLocal_143 = NULL;
	struct<21> Local_144[2];
	struct<17> Local_187[3];
	int iLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 1073741824;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	struct<17> Local_260[3];
	int iLocal_312 = 0;
	bool bLocal_313 = false;
	struct<193> Local_314 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_507 = 0;
	struct<32> Local_508[6];
	struct<2> Local_701[17];
	var uLocal_736 = 17;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_880[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	float fLocal_928 = 0f;
	float fLocal_929 = 0f;
	float fLocal_930 = 0f;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	bool bLocal_958 = false;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	bool bLocal_973 = false;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = false;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	bool bLocal_991 = false;
	bool bLocal_992 = false;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	int iLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	int iLocal_1083 = 0;
	int iLocal_1084 = 0;
	int iLocal_1085 = 0;
	int iLocal_1086 = 0;
	int iLocal_1087 = 0;
	int iLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 1065353216;
	var uLocal_1095 = 1065353216;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 1065353216;
	var uLocal_1100 = 1065353216;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 1065353216;
	var uLocal_1105 = 1065353216;
	var uLocal_1106 = 0;
	var uLocal_1107 = 1040187392;
	var uLocal_1108 = 1040187392;
	var uLocal_1109 = -1;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = -1082130432;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	bool bLocal_1135 = false;
	bool bLocal_1136 = false;
	bool bLocal_1137 = false;
	bool bLocal_1138 = false;
	bool bLocal_1139 = false;
	bool bLocal_1140 = false;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	bool bLocal_1144 = false;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 1176256512;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_143 = "reik_hollow_walk";
	iLocal_892 = 3;
	iLocal_893 = 1;
	iLocal_894 = 1;
	iLocal_905 = -1;
	iLocal_914 = -1;
	iLocal_925 = 20;
	iLocal_926 = -1;
	fLocal_928 = -1f;
	iLocal_931 = 1;
	iLocal_932 = 1;
	iLocal_933 = 1;
	iLocal_934 = 1;
	iLocal_1084 = 8;
	iLocal_1085 = 8;
	iLocal_1128 = func_1(3, 0, 0);
	iLocal_1133 = 1;
	Local_314.f_3 = func_2(&vScriptParam_0);
	if (func_3())
	{
		func_4();
	}
	Local_314.f_161 = func_5(vScriptParam_0.z, 2);
	func_6(&Local_314, 1);
	func_7(29);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_991 = true;
	}
	TASK::_0xFF745B0346E19E2C(-2146271366);
	while (true)
	{
		func_8(bLocal_991, 685, 0);
		if (bLocal_991)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1133)
			{
				case 1:
					if (func_9(&Local_314, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&Local_314, &uLocal_1089, &iLocal_1088);
						func_11(&Local_314, 1);
						iLocal_1133 = 0;
					}
					else if (Local_314.f_160)
					{
						func_4();
					}
					break;
				case 0:
					if (func_12())
					{
						iLocal_1133 = 3;
					}
					break;
				case 3:
					if (func_13())
					{
						iLocal_1133 = 4;
					}
					break;
				case 4:
					if (!func_14(&Local_314, &uLocal_873, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_4();
					}
					func_15();
					if (func_16())
					{
						func_4();
					}
					if (func_17(&Local_314, &uLocal_873, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_4();
					}
					break;
			}
			BUILTIN::WAIT(Local_314.f_158);
		}
	}
}

int func_1(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

var func_2(var uParam0)
{
	return *uParam0;
}

int func_3()
{
	int iVar0;
	int iVar1;

	switch (Local_314.f_51.f_4)
	{
		case 0:
		case 3:
		case 4:
			iVar0 = 4194304;
			break;
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
			iVar0 = 2;
			break;
	}
	iVar1 = func_18(iVar0);
	if (func_19(iVar1) || func_20(iVar1))
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_21();
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_873[2])))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_873[1])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_873[2])))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[1]), 6, true);
			PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_873[1]), 2, true);
			TASK::CLEAR_PED_TASKS(&(uLocal_873[1]), 1, 0);
			TASK::CLEAR_PED_TASKS(&(uLocal_873[2]), 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[1])))
			{
				TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), -1, -1, 1f, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 2.001f, 32, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, -1082130432, -1, 0);
			}
			func_22(&(uLocal_873[1]), &iVar0, 0, 0, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			PED::SET_PED_KEEP_TASK(&(uLocal_873[1]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_873[2]), true);
			Local_314.f_50 = 1;
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_873[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_873[3])))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_873[0])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_873[3])))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[0]), 6, true);
			PED::SET_PED_FLEE_ATTRIBUTES(&(uLocal_873[0]), 2, true);
			TASK::CLEAR_PED_TASKS(&(uLocal_873[0]), 1, 0);
			TASK::CLEAR_PED_TASKS(&(uLocal_873[3]), 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[0])))
			{
				TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), -1, -1, 1f, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 2.001f, 32, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, -1082130432, -1, 0);
			}
			func_22(&(uLocal_873[0]), &iVar1, 0, 0, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(&(uLocal_873[0]), true);
			PED::SET_PED_KEEP_TASK(&(uLocal_873[3]), true);
			Local_314.f_50 = 1;
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uLocal_873[3]);
		}
	}
	func_23(0);
	if ((!Local_314.f_48 && !Local_314.f_45) && !func_24(Global_35, iLocal_142, 1, 120f, 0))
	{
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_17))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_17);
			PROPSET::_0xC1AB7EEFD3E6EE49(iLocal_17, 0);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_18))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_18);
			PROPSET::_0xC1AB7EEFD3E6EE49(iLocal_18, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1);
			iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0);
			PED::DELETE_PED(&iVar2);
			PED::DELETE_PED(&iVar3);
			VEHICLE::DELETE_VEHICLE(&iLocal_142);
		}
		func_25(Local_314.f_51, 10f, 0);
		iVar4 = 0;
		while (iVar4 < 6)
		{
			func_26(&(uLocal_873[iVar4]), 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			iVar4++;
		}
	}
	else
	{
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_17))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_17);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_18))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_18);
		}
	}
	if (iLocal_989 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
		PED::SET_PED_RESET_FLAG(Global_35, 318, false);
		iLocal_989 = 0;
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_81))
	{
		PATHFIND::_0xD17672447692478E(uLocal_83, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_81, true);
	}
	func_27(1);
	func_28(0);
	if (MAP::DOES_BLIP_EXIST(iLocal_997))
	{
		MAP::REMOVE_BLIP(&iLocal_997);
	}
	func_29(Global_1935630, 4);
	func_30(29);
	if (iLocal_988 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
		iLocal_988 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_998))
	{
		ENTITY::_0x18FF3110CF47115D(iLocal_998, 9, 1);
	}
	func_31(&iLocal_239, &Local_260);
	func_32(&(uLocal_873[4]), 1, 1);
	func_31(Local_144[1 /*21*/], &Local_187);
	func_31(Local_144[0 /*21*/], &Local_187);
	func_32(&(uLocal_873[0]), 1, 1);
	func_32(&(uLocal_873[1]), 1, 1);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_1000))
	{
		func_33(iLocal_1000);
	}
	func_34();
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
	{
		func_35(&(uLocal_873[4]), 1);
	}
	if (bLocal_87)
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
		func_36(&(uLocal_873[4]));
		PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, false);
		bLocal_87 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_873[4])))
	{
		PED::_0x6569F31A01B4C097(&(uLocal_873[4]), 0, 1);
		PED::_0x6569F31A01B4C097(&(uLocal_873[4]), 1, 1);
		if (PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_STAND_STILL(0, 1);
			func_22(&(uLocal_873[4]), &iVar5, 0, 0, 1, 1);
		}
	}
	if (iLocal_926 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_926);
		iLocal_926 = -1;
	}
	if (Local_314.f_45 == 1)
	{
		func_37(31, 0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(6, 13), 0, 0, 1);
	}
	func_38(&Local_314, &uLocal_873, &uLocal_880, iLocal_14, uLocal_1089, iLocal_1088, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_6(var uParam0, bool bParam1)
{
	func_39(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_40("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_7(int iParam0)
{
	if (!func_41(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 1;
}

void func_8(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_42(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_9(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_43(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (iParam6 || func_44(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_45(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_46(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_47(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

void func_10(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*iParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*iParam2 = 1;
			break;
		case 2:
			*uParam1 = 10;
			*iParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*iParam2 = 3;
			break;
		case 4:
			*uParam1 = 10;
			*iParam2 = 4;
			break;
		case 5:
			*uParam1 = 10;
			*iParam2 = 5;
			break;
		case 6:
			*uParam1 = 10;
			*iParam2 = 6;
			break;
		case 7:
			*uParam1 = 10;
			*iParam2 = 7;
			break;
	}
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

int func_12()
{
	int iVar0;

	switch (iLocal_1132)
	{
		case 0:
			if (func_48(&Local_314))
			{
				func_49();
				func_50();
				func_51();
				func_52();
				func_53();
				func_54();
				func_55();
				func_56();
				func_57();
				iLocal_1132 = 1;
			}
			break;
		case 1:
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_15))
			{
				return 0;
			}
			if (!func_58(&Local_508))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 17)
			{
				if (!func_59(&uLocal_736))
				{
					return 0;
				}
				iVar0++;
			}
			if (!AUDIO::_0xD9130842D7226045("REIK_Sounds", 0))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_143))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_13()
{
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1)))
	{
		func_60(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0)))
	{
		func_60(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0), 1, 1);
	}
	switch (iLocal_1131)
	{
		case 0:
			if (func_61(Local_314.f_51, Local_314.f_51.f_3, &Local_508, &uLocal_873, 1, 0, -1, 1))
			{
				iLocal_1131 = 1;
			}
			break;
		case 1:
			func_62();
			func_27(0);
			func_63();
			func_64();
			func_65(&iLocal_17, iLocal_15, vLocal_72, 1, fLocal_85, 1150681088 /* Float: 1200f */, 0, 1);
			iLocal_1131 = 6;
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && !ENTITY::IS_ENTITY_DEAD(iLocal_142))
			{
				PROPSET::_0xD80FAF919A2E56EA(iLocal_142, iLocal_16);
			}
			else
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_14(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_66(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_67(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_68(&(uParam0->f_5));
			}
			func_69(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_70(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_71(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_72(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_73(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_74(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_45(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_75(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_15()
{
	func_76();
	func_77();
	func_78();
	func_79();
	func_80();
	PED::_0x802092B07E3B1EEA(&(uLocal_873[0]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
	PED::_0x802092B07E3B1EEA(&(uLocal_873[1]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_998 = PED::GET_MOUNT(Global_35);
	}
	if (func_81(&(uLocal_873[1]), 2104565373))
	{
		PED::SET_PED_RESET_FLAG(&(uLocal_873[1]), 27, true);
	}
	if (iLocal_14 == 0)
	{
		func_82();
	}
	else
	{
		func_83();
	}
	if ((func_84(&(uLocal_873[0]), 1, 0) <= 40f || func_84(&(uLocal_873[1]), 1, 0) <= 40f) || func_84(&(uLocal_873[4]), 1, 0) <= 40f)
	{
		iLocal_943 = 1;
	}
	if (iLocal_943 == 1 || iLocal_944 == 1)
	{
		Local_314.f_45 = 1;
	}
	else
	{
		Local_314.f_45 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1)))
	{
		func_60(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0)))
	{
		func_60(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0), 1, 1);
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_109, 0))
	{
		fLocal_929 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_109);
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_109.f_1, 0))
	{
		fLocal_930 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_109.f_1);
	}
}

int func_16()
{
	switch (iLocal_887)
	{
		case 0:
			func_85();
			break;
		case 1:
			func_86();
			break;
		case 2:
			func_87();
			break;
		case 3:
			func_88();
			break;
		case 4:
			func_89();
			break;
		case 5:
			func_90();
			break;
		case 6:
			func_91();
			break;
		case 7:
			func_92();
			break;
		case 8:
			func_93();
			break;
		case 9:
			func_94();
			break;
		case 10:
			func_95();
			break;
		case 12:
			if (bLocal_87)
			{
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
				func_36(&(uLocal_873[4]));
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, false);
				bLocal_87 = false;
			}
			if (iLocal_989 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
				PED::SET_PED_RESET_FLAG(Global_35, 318, false);
				iLocal_989 = 0;
			}
			func_96(0);
			func_97();
			func_98();
			if (func_84(&(uLocal_873[4]), 1, 1) >= func_100(func_99(&(uLocal_873[4]), 1), 35f, 50f) || ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
			{
				Local_314.f_50 = 1;
				Local_314.f_44 = 1;
				func_29(Global_1935630, 4);
				PED::SET_PED_KEEP_TASK(&(uLocal_873[4]), true);
				return 1;
			}
			break;
		case 11:
			if (bLocal_87)
			{
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, false);
				func_36(&(uLocal_873[4]));
				bLocal_87 = false;
			}
			if (iLocal_989 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
				PED::SET_PED_RESET_FLAG(Global_35, 318, false);
				iLocal_989 = 0;
			}
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_988 = 0;
			}
			func_97();
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
			if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
			{
				MAP::REMOVE_BLIP(uLocal_880[4]);
			}
			if (func_84(&(uLocal_873[4]), 1, 1) >= 100f || PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[4]), true))
			{
				PED::SET_PED_KEEP_TASK(&(uLocal_873[4]), true);
				Local_314.f_50 = 1;
				Local_314.f_160 = 1;
				func_4();
			}
			break;
	}
	return 0;
}

int func_17(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_101())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_102(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_45(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_45(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_45(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_103(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_103(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40;
		case 2:
			return 78;
		case 4:
			return 37;
		case 8:
			return 38;
		case 16:
			return 93;
		case 32:
			return 82;
		case 64:
			return 95;
		case 128:
			return 65;
		case 256:
			return 68;
		case 512:
			return 69;
		case 1024:
			return 3;
		case 2048:
			return 61;
		case 4096:
			return 110;
		case 8192:
			return 5;
		case 16384:
			return 35;
		case 32768:
			return 22;
		case 65536:
			return 105;
		case 131072:
			return 8;
		case 262144:
			return 32;
		case 524288:
			return 26;
		case 1048576:
			return 115;
		case 2097152:
			return 76;
		case 4194304:
			return 92;
		case 8388608:
			return 56;
		case 16777216:
			return 120;
		case 0:
		default:
			break;
	}
	return -1;
}

int func_19(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	return func_105(iParam0, 67108864);
}

int func_20(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	return func_105(iParam0, 33554432);
}

void func_21()
{
	if (bLocal_313)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_312))
		{
			PED::_0x2EB75FB86C41F026(iLocal_312, 3, 1);
			bLocal_313 = false;
		}
	}
}

void func_22(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_23(bool bParam0)
{
	if (bLocal_992 != bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
		{
			if (bParam0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_873[4]), 1391706777);
				PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(&(uLocal_873[4]), 1391706777);
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(uLocal_873[4]), 841021282);
				PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(&(uLocal_873[4]), 841021282);
			}
		}
		bLocal_992 = bParam0;
	}
}

bool func_24(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_106(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_107(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_25(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_108(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	PED::_0x39A2FC5AF55A52B1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		PED::_0x7C08E7CB8D951B70(iParam0, fParam7);
	}
	PED::_0x36E4B61DC56DE77C(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_27(bool bParam0)
{
	if (bParam0)
	{
		func_109(Local_314.f_51, 20f, 5);
	}
	else
	{
		func_110(Local_314.f_51, 20f, 0, 0, 6);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		if (bLocal_86 == 0)
		{
			AUDIO::START_AUDIO_SCENE("INBRED_KIDNAP_SCENE");
			bLocal_86 = true;
		}
	}
	else if (bLocal_86)
	{
		AUDIO::STOP_AUDIO_SCENE("INBRED_KIDNAP_SCENE");
		bLocal_86 = false;
	}
}

void func_29(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_30(int iParam0)
{
	if (!func_41(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_46 = 0;
}

void func_31(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_111(iParam0, uParam1, 1);
	func_112(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_32(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_33(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_34()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_35(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, 0);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 43, false);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WalkAndTalk");
	}
	PED::_0x9E66708B2B41F14A(iParam0, -1);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0xC4873B053054C04B(PLAYER::PLAYER_ID(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		PED::_0x15F4732C357B1D6D(iParam0, PLAYER::PLAYER_ID(), 6);
	}
	if (bParam1)
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

void func_36(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			DECORATOR::DECOR_REMOVE(iParam0, "honor_block");
		}
	}
}

void func_37(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_113(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_114() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

void func_38(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_115(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_116(uParam0->f_3, 524288);
		}
	}
	if (func_117(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_117(uParam1[iVar0], 0, 0))
			{
				func_118(uParam1[iVar0], bVar3);
				if (func_119(uParam0, (*uParam1)[iVar0]))
				{
					func_120((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_117(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], 0, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], 0, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_121(uParam1[iVar0], 1073741824 /* Float: 2f */, func_100(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_122(uParam0);
	}
	func_123(uParam0);
	if (!uParam0->f_186)
	{
		func_66(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_124(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_125(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_39(var uParam0)
{
	func_126(uParam0, 0);
	func_127(uParam0, 0);
	func_128(uParam0, 1);
	func_129(uParam0, 1);
	func_130(uParam0, 0);
	func_131(uParam0, 1);
	func_132(uParam0, 1, 1, 1);
}

var func_40(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_133(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_134(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_133(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_41(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

int func_42(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_135(iVar0))
	{
		return 0;
	}
	if (func_136(iVar0, 1) || func_136(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_137(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_138(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_70(iParam0, 128))
			{
				if (!func_139(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_140(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_141(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_142(*uParam1))
				{
					return func_143(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_144(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_5(Param4.f_2, 8))
				{
					func_138(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_145(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_146(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_147(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_70(iParam0, 128))
			{
				if (!func_148(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_143(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_140(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_145(uParam1))
					{
						return func_143(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_149(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_138(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_143(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_40("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_40("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_44(var uParam0, int iParam1)
{
	if (func_45(iParam1, 256))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_172) || func_151(iParam1, func_150(uParam0), &(uParam0->f_172)))
		{
			if (func_117(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_45(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_46(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_152(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_45(uParam0->f_3, 1) && !func_45(uParam0->f_3, 32))
	{
		func_152(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_45(uParam0->f_3, 2) && !func_45(uParam0->f_3, 32))
	{
		func_152(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_153(uParam0->f_171, 1);
	}
	if (func_45(uParam0->f_3, 1))
	{
		func_152(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_154(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_47(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_155(uParam0->f_3);
	iVar1 = func_156(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_49()
{
	iLocal_14 = func_157(Local_314.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_50()
{
	switch (iLocal_14)
	{
		case 0:
			(Local_508[0 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
			(Local_508[0 /*32*/])->f_3 = 605220140;
			(Local_508[1 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
			(Local_508[1 /*32*/])->f_3 = -1315263278;
			(Local_508[4 /*32*/])->f_1 = -773759899;
			(Local_508[4 /*32*/])->f_3 = 748808650;
			(Local_508[5 /*32*/])->f_1 = 947689151;
			(Local_508[5 /*32*/])->f_3 = 748808650;
			break;
		case 1:
			(Local_508[0 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
			(Local_508[0 /*32*/])->f_3 = 307579313;
			(Local_508[1 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
			(Local_508[1 /*32*/])->f_3 = -1621227431;
			(Local_508[4 /*32*/])->f_1 = -773759899;
			(Local_508[4 /*32*/])->f_3 = 1065193341;
			(Local_508[5 /*32*/])->f_1 = 947689151;
			(Local_508[5 /*32*/])->f_3 = 1065193341;
			break;
	}
	(Local_508[2 /*32*/])->f_1 = func_158(1, 0, 1);
	(Local_508[3 /*32*/])->f_1 = func_158(1, 1, 1);
	(Local_508[0 /*32*/])->f_31 = 1078461828;
	(Local_508[1 /*32*/])->f_31 = 1078461828;
	func_159(&Local_508);
}

void func_51()
{
	Local_701[12 /*2*/] = "script_re@inbred_kidnap@main";
	(Local_701[12 /*2*/])->f_1 = "shoot_react_female";
	Local_701[0 /*2*/] = "script_re@inbred_kidnap@thanks";
	Local_701[11 /*2*/] = "script_re@inbred_kidnap@goodbye";
	switch (Local_314.f_51.f_4)
	{
		case 0:
		case 3:
		case 4:
			(Local_701[2 /*2*/])->f_1 = "vanhorn";
			break;
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
			(Local_701[2 /*2*/])->f_1 = "annsberg";
			break;
	}
	(Local_701[6 /*2*/])->f_1 = "anything_to_help_u_plyr";
	(Local_701[1 /*2*/])->f_1 = "get_me_outta_here";
	(Local_701[10 /*2*/])->f_1 = "hope_ur_right_sir";
	(Local_701[9 /*2*/])->f_1 = "not_at_all_plyr";
	(Local_701[3 /*2*/])->f_1 = "sir";
	(Local_701[4 /*2*/])->f_1 = "what_do_you_think";
	(Local_701[5 /*2*/])->f_1 = "will_u_help_me";
	(Local_701[7 /*2*/])->f_1 = "youll_be_alright_plyr";
	func_160(&(Local_701[12 /*2*/]), &uLocal_19);
	func_160(&(Local_701[0 /*2*/]), &uLocal_19);
	func_160(&(Local_701[11 /*2*/]), &uLocal_19);
}

void func_52()
{
	iLocal_15 = 2102507474;
	iLocal_16 = 695546590;
	STREAMING::REQUEST_MODEL(joaat("chuckwagon000x"), false);
	PROPSET::_REQUEST_PROPSET(iLocal_15);
	PROPSET::_REQUEST_PROPSET(iLocal_16);
}

void func_53()
{
	if (iLocal_14 == 0)
	{
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				sLocal_88 = "REIK_TAKE_HOME_A";
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				sLocal_88 = "REIK_TAKE_HOME_B";
				break;
		}
	}
	else
	{
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				sLocal_88 = "REIK_TAKE_HOME_A";
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				sLocal_88 = "REIK_TAKE_HOME_B";
				break;
		}
	}
}

void func_54()
{
	if (iLocal_14 == 0)
	{
		func_162(Local_187[0 /*17*/], "INTERACT_GREET", func_161(97), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_162(Local_187[1 /*17*/], "INTERACT_INTERVENE", func_161(97), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_163(Local_187[0 /*17*/], 0, 0);
		func_163(Local_187[1 /*17*/], 1, 0);
		func_162(Local_260[0 /*17*/], "INTERACT_QUESTION", func_161(106), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_162(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE", func_161(107), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_164(Local_260[0 /*17*/], 1);
		func_164(Local_260[1 /*17*/], 1);
		func_165(Local_260[0 /*17*/], 8);
		func_165(Local_260[1 /*17*/], 8);
	}
	else
	{
		func_162(Local_187[0 /*17*/], "INTERACT_GREET", func_161(97), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_162(Local_187[1 /*17*/], "RE_INTER_ANTAGONIZE", func_161(97), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_163(Local_187[0 /*17*/], 0, 0);
		func_163(Local_187[1 /*17*/], 1, 0);
		func_164(Local_260[0 /*17*/], 0);
		func_164(Local_260[1 /*17*/], 0);
	}
}

void func_55()
{
	Local_508[0 /*32*/] = 22;
	Local_508[1 /*32*/] = 22;
	Local_508[4 /*32*/] = 5;
	Local_508[5 /*32*/] = 4;
	switch (Local_314.f_51.f_4)
	{
		case 0:
			(Local_508[1 /*32*/])->f_6 = { 1782.85f, 584.82f, 105.61f };
			(Local_508[1 /*32*/])->f_9 = 86.61f;
			(Local_508[0 /*32*/])->f_6 = { 1781.67f, 584.36f, 105.46f };
			(Local_508[0 /*32*/])->f_9 = 106.07f;
			(Local_508[4 /*32*/])->f_6 = { 1780.33f, 583.99f, 105.31f };
			(Local_508[4 /*32*/])->f_9 = 163.89f;
			(Local_508[5 /*32*/])->f_6 = { 1778.99f, 585.21f, 105.04f };
			(Local_508[5 /*32*/])->f_9 = 147.17f;
			(Local_508[2 /*32*/])->f_6 = { 1773.61f, 592.46f, 105.39f };
			(Local_508[2 /*32*/])->f_9 = -115.69f;
			(Local_508[3 /*32*/])->f_6 = { 1773.6f, 590.12f, 105.33f };
			(Local_508[3 /*32*/])->f_9 = -137.87f;
			vLocal_69 = { 1783.55f, 588.01f, 105.76f };
			fLocal_84 = 10f;
			vLocal_72 = { 1783.55f, 588.01f, 105.76f };
			fLocal_85 = 10f;
			vLocal_60 = { 2957.36f, 522.85f, 43.82f };
			vLocal_66 = { 2949.2f, 519.02f, 44.87f };
			vLocal_75 = { 1777.58f, 588.66f, 105.5f };
			vLocal_78 = { 0f, 0f, 20f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 1786.71f, 872.42f, 111.53f };
			}
			break;
		case 1:
			(Local_508[1 /*32*/])->f_6 = { 2459.61f, 1304.09f, 110.13f };
			(Local_508[1 /*32*/])->f_9 = 178.19f;
			(Local_508[0 /*32*/])->f_6 = { 2457.16f, 1297.86f, 110.13f };
			(Local_508[0 /*32*/])->f_9 = -125.1f;
			(Local_508[4 /*32*/])->f_6 = { 2459.19f, 1303.24f, 110.13f };
			(Local_508[4 /*32*/])->f_9 = -54.43f;
			(Local_508[5 /*32*/])->f_6 = { 2458.82f, 1297.47f, 110.13f };
			(Local_508[5 /*32*/])->f_9 = -72.19f;
			(Local_508[2 /*32*/])->f_6 = { 2464.35f, 1309.38f, 111.02f };
			(Local_508[2 /*32*/])->f_9 = 65.4f;
			(Local_508[3 /*32*/])->f_6 = { 2464.14f, 1306.96f, 111.3f };
			(Local_508[3 /*32*/])->f_9 = 99.35f;
			vLocal_69 = { 2464.739f, 1315.927f, 109.401f };
			fLocal_84 = -10f;
			vLocal_72 = { 2463.052f, 1314.691f, 109.4144f };
			fLocal_85 = 50f;
			vLocal_75 = { 2461.624f, 1311.476f, 109.6674f };
			vLocal_78 = { 0f, 0f, 100f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2419.53f, 1076.52f, 87f };
			}
			break;
		case 2:
			(Local_508[1 /*32*/])->f_6 = { 2843.05f, 651.93f, 66.72f };
			(Local_508[1 /*32*/])->f_9 = -153.07f;
			(Local_508[0 /*32*/])->f_6 = { 2841.2f, 648.06f, 66.6f };
			(Local_508[0 /*32*/])->f_9 = 106.07f;
			(Local_508[4 /*32*/])->f_6 = { 2842.88f, 651.08f, 66.7f };
			(Local_508[4 /*32*/])->f_9 = 163.89f;
			(Local_508[5 /*32*/])->f_6 = { 2842.56f, 647.74f, 66.58f };
			(Local_508[5 /*32*/])->f_9 = -67.87f;
			(Local_508[2 /*32*/])->f_6 = { 2847.3f, 655.96f, 66.88f };
			(Local_508[2 /*32*/])->f_9 = 54.36f;
			(Local_508[3 /*32*/])->f_6 = { 2846.33f, 653.7f, 67.11f };
			(Local_508[3 /*32*/])->f_9 = 77.23f;
			vLocal_69 = { 2837.95f, 655.04f, 67.29f };
			fLocal_84 = -10f;
			vLocal_72 = { 2837.95f, 655.04f, 67.29f };
			fLocal_85 = 170f;
			vLocal_75 = { 2842.38f, 651.63f, 66.33f };
			vLocal_78 = { 0f, 0f, 100f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2500.46f, 628.42f, 68.64f };
			}
			break;
		case 3:
			(Local_508[1 /*32*/])->f_6 = { 2658.08f, 906.45f, 88.95f };
			(Local_508[1 /*32*/])->f_9 = 86.61f;
			(Local_508[0 /*32*/])->f_6 = { 2658.6f, 907.53f, 88.95f };
			(Local_508[0 /*32*/])->f_9 = 106.07f;
			(Local_508[4 /*32*/])->f_6 = { 2657.79f, 906.81f, 88.95f };
			(Local_508[4 /*32*/])->f_9 = 163.89f;
			(Local_508[5 /*32*/])->f_6 = { 2656.43f, 907.08f, 88.95f };
			(Local_508[5 /*32*/])->f_9 = 147.17f;
			(Local_508[2 /*32*/])->f_6 = { 2685.76f, 861.36f, 86.43f };
			(Local_508[2 /*32*/])->f_9 = 171.46f;
			(Local_508[3 /*32*/])->f_6 = { 2683.52f, 862f, 86.11f };
			(Local_508[3 /*32*/])->f_9 = 145.06f;
			vLocal_69 = { 2685.41f, 851.34f, 86.97f };
			fLocal_84 = 165.09f;
			vLocal_72 = { 2685.41f, 851.34f, 86.97f };
			fLocal_85 = 10f;
			vLocal_60 = { 2957.36f, 522.85f, 43.82f };
			vLocal_66 = { 2949.2f, 519.02f, 44.87f };
			vLocal_75 = { 2681.24f, 854.14f, 85.87f };
			vLocal_78 = { 0f, 0f, 40f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2406.63f, 1144.77f, 97.24f };
			}
			break;
		case 4:
			(Local_508[1 /*32*/])->f_6 = { 2369.39f, 270.61f, 52.93f };
			(Local_508[1 /*32*/])->f_9 = 86.61f;
			(Local_508[0 /*32*/])->f_6 = { 2367.81f, 269.51f, 53.04f };
			(Local_508[0 /*32*/])->f_9 = 106.07f;
			(Local_508[4 /*32*/])->f_6 = { 2367.4f, 268.24f, 53.15f };
			(Local_508[4 /*32*/])->f_9 = 163.89f;
			(Local_508[5 /*32*/])->f_6 = { 2368.15f, 268.54f, 53.08f };
			(Local_508[5 /*32*/])->f_9 = 147.17f;
			(Local_508[3 /*32*/])->f_6 = { 2378f, 266.98f, 54.62f };
			(Local_508[3 /*32*/])->f_9 = 85.72f;
			(Local_508[2 /*32*/])->f_6 = { 2379.83f, 265.4f, 54.81f };
			(Local_508[2 /*32*/])->f_9 = 122.26f;
			vLocal_69 = { 2372.14f, 260f, 53.93f };
			fLocal_84 = 20.02f;
			vLocal_72 = { 2372.14f, 260f, 53.93f };
			fLocal_85 = 200f;
			vLocal_60 = { 2957.36f, 522.85f, 43.82f };
			vLocal_66 = { 2949.2f, 519.02f, 44.87f };
			vLocal_75 = { 2368.53f, 271.33f, 52.93f };
			vLocal_78 = { 0f, 0f, -180f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2406.63f, 1144.77f, 97.24f };
			}
			break;
		case 5:
			(Local_508[1 /*32*/])->f_6 = { 2697.629f, 178.098f, 52.4475f };
			(Local_508[1 /*32*/])->f_9 = -153.07f;
			(Local_508[0 /*32*/])->f_6 = { 2693.532f, 176.9803f, 52.409f };
			(Local_508[0 /*32*/])->f_9 = 106.07f;
			(Local_508[4 /*32*/])->f_6 = { 2696.406f, 176.7155f, 52.4125f };
			(Local_508[4 /*32*/])->f_9 = -90.89f;
			(Local_508[5 /*32*/])->f_6 = { 2697.209f, 175.338f, 52.3897f };
			(Local_508[5 /*32*/])->f_9 = 0.87f;
			(Local_508[2 /*32*/])->f_6 = { 2705.635f, 167.6387f, 52.0362f };
			(Local_508[2 /*32*/])->f_9 = 45.36f;
			(Local_508[3 /*32*/])->f_6 = { 2704.643f, 166.6992f, 52.1609f };
			(Local_508[3 /*32*/])->f_9 = 30.23f;
			vLocal_69 = { 2701.289f, 175.9979f, 52.5134f };
			fLocal_84 = 0f;
			vLocal_72 = { 2700.789f, 175.9979f, 52.5134f };
			fLocal_85 = 0f;
			vLocal_75 = { 2695.406f, 176.7155f, 52.4125f };
			vLocal_78 = { 0f, 0f, -80f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2578.444f, 502.7463f, 66.6559f };
			}
			break;
		case 6:
			(Local_508[1 /*32*/])->f_6 = { 2492.856f, 1534.523f, 84.2833f };
			(Local_508[1 /*32*/])->f_9 = 135.07f;
			(Local_508[0 /*32*/])->f_6 = { 2495f, 1532.238f, 84.269f };
			(Local_508[0 /*32*/])->f_9 = 96.07f;
			(Local_508[4 /*32*/])->f_6 = { 2493.237f, 1530.039f, 84.2268f };
			(Local_508[4 /*32*/])->f_9 = -35.89f;
			(Local_508[5 /*32*/])->f_6 = { 2491.19f, 1531.967f, 84.2858f };
			(Local_508[5 /*32*/])->f_9 = -50.87f;
			(Local_508[2 /*32*/])->f_6 = { 2482.598f, 1528.827f, 84.4879f };
			(Local_508[2 /*32*/])->f_9 = 35.36f;
			(Local_508[3 /*32*/])->f_6 = { 2483.642f, 1529.807f, 84.4734f };
			(Local_508[3 /*32*/])->f_9 = 10.23f;
			vLocal_69 = { 2494.728f, 1540.996f, 84.3107f };
			fLocal_84 = 30f;
			vLocal_72 = { 2497.534f, 1542.573f, 84.27121f };
			fLocal_85 = 30f;
			vLocal_75 = { 2493.144f, 1538.348f, 84.266f };
			vLocal_78 = { 0f, 0f, 135f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2155.598f, 1600.929f, 111.1401f };
			}
			break;
		case 7:
			(Local_508[1 /*32*/])->f_6 = { 2295.125f, 1736.473f, 104.1996f };
			(Local_508[1 /*32*/])->f_9 = -5.07f;
			(Local_508[0 /*32*/])->f_6 = { 2293.616f, 1736.615f, 104.4685f };
			(Local_508[0 /*32*/])->f_9 = -56.07f;
			(Local_508[4 /*32*/])->f_6 = { 2293.985f, 1738.753f, 104.5168f };
			(Local_508[4 /*32*/])->f_9 = 180.89f;
			(Local_508[5 /*32*/])->f_6 = { 2295.66f, 1738.838f, 104.2313f };
			(Local_508[5 /*32*/])->f_9 = 180.87f;
			(Local_508[2 /*32*/])->f_6 = { 2299.368f, 1726.186f, 102.1403f };
			(Local_508[2 /*32*/])->f_9 = -135.36f;
			(Local_508[3 /*32*/])->f_6 = { 2302.335f, 1726.783f, 102.2145f };
			(Local_508[3 /*32*/])->f_9 = -130.23f;
			vLocal_69 = { 2292.446f, 1733.757f, 104.4756f };
			fLocal_84 = -100f;
			vLocal_72 = { 2288.981f, 1733.342f, 104.1999f };
			fLocal_85 = -100f;
			vLocal_75 = { 2294.375f, 1739.66f, 104.362f };
			vLocal_78 = { 0f, 0f, -5f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2774.395f, 1808.716f, 143.9561f };
			}
			break;
	}
}

void func_56()
{
	Local_109.f_4 = "script@beat@wilderness@inbredkidnap@action";
	Local_109.f_5 = "script@beat@wilderness@inbredkidnap@goodbye";
}

void func_57()
{
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_143);
}

bool func_58(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_167((*iParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_59(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_60(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_61(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_168() || !func_169((*iParam4)[iVar0 /*32*/], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_62()
{
	iLocal_142 = VEHICLE::CREATE_VEHICLE(joaat("chuckwagon000x"), vLocal_69, fLocal_84, true, true, false, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_142, 0f);
	func_170(iLocal_142);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_873[0]), (Local_508[0 /*32*/])->f_6, (Local_508[0 /*32*/])->f_9, 1, 0, 1);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_873[1]), (Local_508[1 /*32*/])->f_6, (Local_508[1 /*32*/])->f_9, 1, 0, 1);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_873[4]), (Local_508[4 /*32*/])->f_6, (Local_508[4 /*32*/])->f_9, 1, 0, 1);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_873[5]), (Local_508[5 /*32*/])->f_6, (Local_508[5 /*32*/])->f_9, 1, 0, 1);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_873[2]), (Local_508[2 /*32*/])->f_6, (Local_508[2 /*32*/])->f_9, 1, 0, 1);
	ENTITY::_0x203BEFFDBE12E96A(&(uLocal_873[3]), (Local_508[3 /*32*/])->f_6, (Local_508[3 /*32*/])->f_9, 1, 0, 1);
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_873[0]), false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_873[1]), false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_873[4]), true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_873[5]), true, true);
	func_172(&(uLocal_873[0]), func_171(131072, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	func_172(&(uLocal_873[1]), joaat("weapon_shotgun_doublebarrel"), 999, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[0]), 30, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[1]), 30, false);
	PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_873[0]), 2);
	PED::SET_PED_COMBAT_MOVEMENT(&(uLocal_873[1]), 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[0]), 98, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[1]), 98, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[0]), 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(uLocal_873[1]), 1, true);
	PED::_0x931B241409216C1F(&(uLocal_873[0]), &(uLocal_873[3]), 0);
	PED::_0x931B241409216C1F(&(uLocal_873[1]), &(uLocal_873[2]), 0);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[0]), 6, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[1]), 6, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 6, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(&(uLocal_873[4]), false, 10f);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 370, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[5]), 370, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 371, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[5]), 371, true);
	func_173(&((Local_508[4 /*32*/])->f_22));
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 146, true);
	func_173(&((Local_508[5 /*32*/])->f_22));
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[5]), 146, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, true);
	PED::_0x8ACC0506743A8A5C(&(uLocal_873[1]), 166028666, 1, -1082130432);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
	bLocal_87 = true;
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 305, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[5]), 305, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 306, true);
	PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(&(uLocal_873[3]), 48, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(&(uLocal_873[2]), 48, false);
	PED::SET_PED_RESET_FLAG(&(uLocal_873[4]), 224, true);
	if (iLocal_14 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[0]), "0204_G_M_M_UniInbred_03_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[1]), "0203_G_M_M_UniInbred_03_WHITE_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[4]), "REIK_Woman_1");
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[5]), "0429_A_M_M_StrTownfolk_01_WHITE_01");
		func_174(&(uLocal_873[5]), 1);
		PED::_0x6569F31A01B4C097(&(uLocal_873[4]), 0, 0);
		PED::_0x6569F31A01B4C097(&(uLocal_873[4]), 1, 0);
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[0]), "0199_G_M_M_UniInbred_01_WHITE_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[1]), "0200_G_M_M_UniInbred_01_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[4]), "RELOV_WOMAN");
		AUDIO::SET_AMBIENT_VOICE_NAME(&(uLocal_873[5]), "0595_A_M_M_Civ_White_19");
		func_174(&(uLocal_873[4]), 1);
		func_174(&(uLocal_873[5]), 1);
	}
	func_175(0);
	func_176(&(uLocal_873[4]), 1142025875 /* GXTEntry: "Murder" */);
	func_176(&(uLocal_873[5]), 1142025875 /* GXTEntry: "Murder" */);
	AITRANSPORT::_0xBA8818212633500A(iLocal_142, 0, 1);
	func_177(&(uLocal_873[0]), &Local_314, 0);
	func_177(&(uLocal_873[1]), &Local_314, 0);
	func_177(&(uLocal_873[4]), &Local_314, 0);
	ENTITY::_SET_ENTITY_HEALTH(&(uLocal_873[5]), 10, 0);
	PED::_0xF7EA250B9A919E03(2124312430, &(uLocal_873[0]));
	PED::_0xF7EA250B9A919E03(2124312430, &(uLocal_873[1]));
	LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 1);
	PED::_0xAAB050DA48B57978(&(uLocal_873[4]), "Default_Scared", 0, -1, 4);
	func_176(&(uLocal_873[0]), 0);
	func_176(&(uLocal_873[1]), 0);
	func_176(&(uLocal_873[3]), 1022576842 /* GXTEntry: "Stole Horse" */);
	func_176(&(uLocal_873[2]), 1022576842 /* GXTEntry: "Stole Horse" */);
	iLocal_82 = VOLUME::_CREATE_VOLUME_BOX(vLocal_66, 0f, 0f, 0f, 2f, 2f, 2f);
	PED::_0x4C39C95AE5DB1329(iLocal_82, 0, 15);
	Local_314.f_178 = 1;
	func_178(&(uLocal_873[4]));
	func_178(&(uLocal_873[5]));
	func_179(&(uLocal_873[5]), 998010398 /* GXTEntry: "Opened Chewing Tobacco" */, 1, 0);
	func_179(&(uLocal_873[4]), -324053813 /* GXTEntry: "Chewing Tobacco" */, 1, 0);
}

void func_63()
{
	func_180(&(Local_314.f_5), 1);
	func_129(&(Local_314.f_5), 1);
	func_127(&(Local_314.f_5), 1);
	func_131(&(Local_314.f_5), 1);
	func_128(&(Local_314.f_5), 1);
	func_126(&(Local_314.f_5), 1);
	func_181(&(Local_314.f_5), 1);
	func_182(&(Local_314.f_5), 1);
	func_183(&(Local_314.f_5), &(uLocal_873[4]), 0);
	func_184(&(Local_314.f_5), &(uLocal_873[0]), &(uLocal_873[2]), 1);
	func_184(&(Local_314.f_5), &(uLocal_873[1]), &(uLocal_873[3]), 1);
}

void func_64()
{
	Local_109 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_109.f_4, 64, 0, false, true);
	Local_109.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_109.f_5, 0, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_109, vLocal_75, vLocal_78, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "Female", &(uLocal_873[4]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "male_vic", &(uLocal_873[5]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "thug_a", &(uLocal_873[0]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "thug_b", &(uLocal_873[1]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109.f_1, "Female", &(uLocal_873[4]), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109.f_1, "player", Global_35, 0);
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_109, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_109);
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_109.f_1, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_109.f_1);
	}
	switch (iLocal_14)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "Int_bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "action_bool", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109, "PBL_ACTION_V1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109.f_1, "PBL_GOODBYE");
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "Int_bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "action_bool", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109, "PBL_ACTION_V2");
			break;
	}
}

void func_65(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, float fParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	*iParam0 = PROPSET::_CREATE_PROPSET(iParam1, vParam2, iParam5, fParam6, fParam7, bParam8, bParam9);
	iVar0 = PROPSET::_GET_ENTITIES_FROM_PROPSET(*iParam0, iVar2, 0, false, false);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		uVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
		iVar4 = MISC::_0x18013392501CE5DC(uVar3);
		ENTITY::_0xA91E6CF94404E8C9(iVar4);
		iVar1++;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar2);
	ITEMSET::CLEAN_ITEMSET(iVar2);
	ITEMSET::DESTROY_ITEMSET(iVar2);
}

void func_66(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_185(uParam0) };
	iVar3 = func_124(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_67(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_68(var uParam0)
{
	func_128(uParam0, 1);
	func_186(uParam0, 20);
}

void func_69(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_70(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_71(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_41(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_187())
	{
		func_188(1);
	}
	func_189(iParam2, uParam0->f_43);
	func_190(iParam2, 0, 0, 0, 0);
	if (func_191(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_115(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_192(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_72(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_73(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_193())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_70(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_71(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_72(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (!func_194(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_195(uParam0, bVar0);
		func_196(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_197(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_71(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_72(&(uParam0->f_121));
		}
	}
}

int func_74(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_45(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_198())
			{
				fVar0 = 15f;
			}
		}
		if (func_199(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_200(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_199(uParam2, fVar1))
		{
			if (!func_201(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_202(uParam2->f_3, 2) && func_203(2))
		{
			return 0;
		}
		if (func_45(iParam0, 4194304) || func_45(iParam0, 33554432))
		{
			if (func_204(1))
			{
				return 0;
			}
		}
	}
	if (func_205(Global_35))
	{
		return 0;
	}
	if (func_206(0, 1, 1) && !func_207(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_45(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_99(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_200(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_208())
		{
			return 0;
		}
		iVar2 = func_210(func_209());
		if (func_211(iVar2))
		{
			if (func_212(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_213(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_214(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_75(var uParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;

	if (func_215(uParam0->f_51))
	{
		func_216(uParam0->f_51, 0);
		uVar0 = func_217(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, uVar0, uVar0, uVar0, func_218());
		bVar1 = func_100(!func_45(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_220(iVar2, func_219(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_76()
{
	switch (iLocal_892)
	{
		case 3:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[4]), -564970554, 6);
			break;
		case 0:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[4]), -217808743, 6);
			break;
		case 1:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[4]), joaat("moodnormal"), 6);
			break;
		case 2:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[4]), -1982843846, 6);
			break;
	}
	switch (iLocal_893)
	{
		case 1:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[5]), -564970554, 6);
			break;
		case 0:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[5]), -1982843846, 6);
			break;
	}
	switch (iLocal_894)
	{
		case 1:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[0]), joaat("moodangry"), 6);
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[1]), joaat("moodangry"), 6);
			break;
		case 0:
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[0]), -1982843846, 6);
			PED::_0x8B3B71C80A29A4BB(&(uLocal_873[1]), -1982843846, 6);
			break;
	}
}

void func_77()
{
	if (iLocal_926 == -1)
	{
		iLocal_926 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1215290486, &(uLocal_873[0]), 0f, 50f, 50f, 50f, -1082130432, 1127481344, 0, 0, -1, -1);
	}
}

void func_78()
{
	if (!bLocal_1137)
	{
		if (!bLocal_1136)
		{
			if (func_221())
			{
				func_222(1);
				bLocal_1136 = true;
			}
		}
		else if (func_221())
		{
			if (!bLocal_1139)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_873[4]), Global_35, 1, 1))
				{
					bLocal_1139 = true;
				}
			}
			if (!bLocal_1140)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_873[0]), Global_35, 1, 1))
				{
					bLocal_1140 = true;
				}
			}
		}
		else
		{
			func_222(0);
			if (bLocal_1139 && bLocal_1140)
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(&(uLocal_873[4]));
			}
			bLocal_1136 = false;
			bLocal_1137 = true;
		}
	}
}

void func_79()
{
	var uVar0;

	if (iLocal_14 == 0 && !bLocal_1144)
	{
		if (func_223())
		{
			func_224(&(Local_314.f_5), &uVar0);
			bLocal_1144 = true;
		}
	}
}

int func_80()
{
	if (Local_314.f_46 == 0)
	{
		if ((func_225(&uLocal_873, &(Local_314.f_5), &iLocal_1134, &uLocal_923, 0, 3, 1) || (PED::IS_PED_IN_COMBAT(Global_35, 0) && (iLocal_887 == 4 || iLocal_887 == 5))) || func_226())
		{
			Local_314.f_46 = 1;
			func_227();
			func_228(6);
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if ((iLocal_887 != 6 || func_229(uLocal_873[1], 1, 0, 0)) || func_229(uLocal_873[0], 1, 0, 0))
	{
		iVar0 = func_231(uLocal_873[1], Local_144[1 /*21*/], func_230(&(uLocal_873[1])), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, func_1(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar1 = func_231(uLocal_873[0], Local_144[0 /*21*/], func_230(&(uLocal_873[0])), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, func_1(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iLocal_942 == 0)
	{
		iVar2 = func_231(uLocal_873[4], &iLocal_239, func_230(&(uLocal_873[4])), &Local_260, &(Local_314.f_192), 0f, 1, 0, 0, iLocal_1128, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_889)
	{
		case 0:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							func_163(Local_187[0 /*17*/], 0, 0);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							func_163(Local_187[0 /*17*/], 0, 0);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 2:
					iLocal_969 = 1;
					func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 50, 51);
					func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 50, 51);
					if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[1]), Global_35, "", 1.5f))
						{
							iLocal_889 = 9;
							func_228(6);
						}
					}
					break;
				case 3:
					iLocal_889 = 1;
					iLocal_890 = 0;
					(Local_187[0 /*17*/])->f_13 = func_161(98);
					func_235(Local_187[0 /*17*/], "RE_INTER_DEFUSE");
					(Local_187[1 /*17*/])->f_13 = func_161(99);
					func_235(Local_187[1 /*17*/], "INTERACT_INTERVENE");
					break;
			}
			break;
		case 1:
			switch (iLocal_890)
			{
				case 0:
					if (func_236(&uLocal_1037) >= 10f)
					{
						func_163(Local_187[0 /*17*/], 0, 0);
					}
					else if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), &(uLocal_873[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), &(uLocal_873[1]))) || func_237(&(uLocal_873[0]), 1, 0, 0, 0, 0)) || func_237(&(uLocal_873[1]), 1, 0, 0, 0, 0))
					{
						func_163(Local_187[0 /*17*/], 0, 0);
					}
					else
					{
						func_163(Local_187[0 /*17*/], 1, 0);
					}
					switch (iVar0)
					{
						case 0:
							func_163(Local_187[0 /*17*/], 0, 0);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							func_163(Local_187[0 /*17*/], 0, 0);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							func_163(Local_187[0 /*17*/], 0, 0);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							func_163(Local_187[0 /*17*/], 0, 0);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 50, 51);
					func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 50, 51);
					if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[1]), Global_35, func_161(100), 0f) && iLocal_967 == 0)
						{
							iLocal_967 = 1;
							func_228(6);
							iLocal_890 = 3;
						}
					}
					break;
				case 2:
					func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 50, 51);
					func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 50, 51);
					if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[1]), Global_35, func_161(101), 0f) && iLocal_967 == 0)
						{
							iLocal_967 = 1;
							func_228(6);
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					iLocal_889 = 8;
					iLocal_890 = 0;
					break;
			}
			break;
		case 2:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							func_163(Local_260[0 /*17*/], 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							func_163(Local_260[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[4]), Global_35, func_161(110), 0f))
						{
							iLocal_946 = 1;
							iLocal_890 = 3;
						}
					}
					break;
				case 2:
					if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[4]), Global_35, func_161(111), 0f))
						{
							iLocal_947 = 1;
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					if (iLocal_946 == 1)
					{
						func_163(Local_260[1 /*17*/], 1, 0);
						iLocal_889 = 4;
						iLocal_890 = 0;
					}
					if (iLocal_947 == 1)
					{
						func_163(Local_260[0 /*17*/], 1, 0);
						iLocal_889 = 3;
						iLocal_890 = 0;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							func_163(Local_260[0 /*17*/], 0, 0);
							iLocal_890 = 1;
							break;
					}
					break;
				case 1:
					if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[4]), Global_35, func_161(110), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					iLocal_889 = 8;
					break;
			}
			break;
		case 4:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 1:
							func_163(Local_260[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 2:
					if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[4]), Global_35, func_161(111), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					iLocal_889 = 8;
					break;
			}
			break;
		case 5:
			switch (iVar2)
			{
				case 0:
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_873[4]));
					if (func_238(&(uLocal_873[4]), 90f, 0))
					{
						TASK::TASK_PLAY_ANIM(Global_35, &(Local_701[0 /*2*/]), (Local_701[6 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
					}
					iLocal_935 = 1;
					iLocal_904 = 3;
					iLocal_889 = 6;
					iLocal_890 = 0;
					func_239(&iLocal_239, 0);
					func_163(Local_260[0 /*17*/], 0, 0);
					func_163(Local_260[1 /*17*/], 0, 0);
					func_235(Local_260[0 /*17*/], "BEAT_GRT_POS");
					(Local_260[1 /*17*/])->f_13 = func_161(112);
					func_235(Local_260[1 /*17*/], "BEAT_GRT_NEG");
					iLocal_1128 = func_1(3, 0, 0);
					func_165(Local_260[0 /*17*/], 8);
					func_165(Local_260[1 /*17*/], 8);
					break;
				case 1:
					TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_873[4]));
					if (func_238(&(uLocal_873[4]), 90f, 0))
					{
						TASK::TASK_PLAY_ANIM(Global_35, &(Local_701[0 /*2*/]), (Local_701[7 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
					}
					iLocal_935 = 1;
					iLocal_904 = 7;
					(Local_260[0 /*17*/])->f_13 = func_161(102);
					func_235(Local_260[0 /*17*/], "RE_INTER_POS");
					(Local_260[1 /*17*/])->f_13 = func_161(103);
					func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
					func_239(&iLocal_239, 0);
					func_165(Local_260[0 /*17*/], 8);
					func_165(Local_260[1 /*17*/], 8);
					iLocal_1128 = func_1(3, 0, 0);
					if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
					{
						MAP::REMOVE_BLIP(uLocal_880[4]);
					}
					break;
			}
			break;
		case 6:
			func_240();
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 1:
							iLocal_974 = 1;
							iLocal_890 = 2;
							break;
					}
					break;
				case 2:
					if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (iLocal_983 == 0)
						{
							if (func_234(&(uLocal_873[4]), Global_35, func_161(114), 0f))
							{
								iLocal_890 = 3;
							}
						}
						else if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
						{
							if (func_234(&(uLocal_873[4]), Global_35, func_161(115), 0f))
							{
								iLocal_890 = 3;
							}
						}
					}
					break;
				case 3:
					if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
					{
						MAP::REMOVE_BLIP(uLocal_880[4]);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_997))
					{
						MAP::REMOVE_BLIP(&iLocal_997);
					}
					if (func_233(-4f, 1, 0, 0))
					{
						iLocal_889 = 7;
						iLocal_890 = 0;
						func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
						func_164(Local_260[0 /*17*/], 0);
						func_164(Local_260[1 /*17*/], 0);
						(Local_260[0 /*17*/])->f_13 = func_161(102);
						(Local_260[1 /*17*/])->f_13 = func_161(103);
						func_163(Local_260[0 /*17*/], 1, 0);
						func_163(Local_260[1 /*17*/], 1, 0);
						func_228(9);
						if (iLocal_986 == 0)
						{
							func_241(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
							iLocal_986 = 1;
						}
						if (iLocal_936 == 1)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
						}
					}
					break;
			}
			break;
		case 7:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							func_163(Local_260[0 /*17*/], 0, 0);
							func_163(Local_260[1 /*17*/], 0, 0);
							func_239(&iLocal_239, 0);
							iLocal_1128 = func_1(3, 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							func_163(Local_260[0 /*17*/], 0, 0);
							func_163(Local_260[1 /*17*/], 0, 0);
							func_239(&iLocal_239, 0);
							iLocal_1128 = func_1(3, 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					if (func_242(&(uLocal_873[4])) && !func_242(Global_35))
					{
						iLocal_890 = 3;
					}
					else if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[4]), Global_35, func_161(104), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 2:
					if (func_242(&(uLocal_873[4])) && !func_242(Global_35))
					{
						iLocal_890 = 3;
					}
					else if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[4]), Global_35, func_161(105), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					break;
			}
			break;
		case 8:
			func_163(Local_187[2 /*17*/], 0, 0);
			func_163(Local_187[0 /*17*/], 0, 0);
			func_163(Local_187[1 /*17*/], 0, 0);
			func_163(Local_260[2 /*17*/], 0, 0);
			func_163(Local_260[0 /*17*/], 0, 0);
			func_163(Local_260[1 /*17*/], 0, 0);
			break;
		case 9:
			break;
	}
}

void func_83()
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = -1;
	if ((iLocal_887 != 6 || func_229(uLocal_873[1], 1, 0, 0)) || func_229(uLocal_873[0], 1, 0, 0))
	{
		iVar0 = func_231(uLocal_873[1], Local_144[1 /*21*/], func_230(&(uLocal_873[1])), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, func_1(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar1 = func_231(uLocal_873[0], Local_144[0 /*21*/], func_230(&(uLocal_873[0])), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, func_1(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_889)
	{
		case 0:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_890 = 3;
							break;
						case 1:
							iLocal_890 = 3;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_890 = 3;
							break;
						case 1:
							iLocal_890 = 3;
							break;
					}
					break;
				case 3:
					func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 50, 51);
					func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 50, 51);
					if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, Global_35, 1))
					{
						if (func_234(&(uLocal_873[1]), Global_35, func_161(20), 2f))
						{
							iLocal_969 = 1;
							iLocal_889 = 1;
							func_243(&uLocal_1037);
							func_164(Local_187[0 /*17*/], 0);
							func_164(Local_187[1 /*17*/], 0);
							func_163(Local_187[0 /*17*/], 1, 0);
							func_163(Local_187[1 /*17*/], 1, 0);
							iLocal_890 = 0;
							(Local_187[0 /*17*/])->f_13 = func_161(98);
							func_235(Local_187[0 /*17*/], "RE_INTER_DEFUSE");
							(Local_187[1 /*17*/])->f_13 = func_161(99);
							func_235(Local_187[1 /*17*/], "RE_INTER_ANTAGONIZE");
						}
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_890)
			{
				case 0:
					if (func_236(&uLocal_1037) >= 20f)
					{
						func_163(Local_187[1 /*17*/], 0, 0);
					}
					switch (iVar0)
					{
						case 0:
							func_163(Local_187[0 /*17*/], 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							func_244(&(uLocal_873[0]), 500);
							func_244(&(uLocal_873[1]), 500);
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							func_163(Local_187[0 /*17*/], 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							func_163(Local_187[1 /*17*/], 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, Global_35, 1))
					{
						iLocal_890 = 3;
					}
					break;
				case 2:
					if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, Global_35, 1))
					{
						func_228(6);
						iLocal_890 = 3;
					}
					break;
				case 3:
					break;
			}
			break;
		case 8:
			func_163(Local_187[2 /*17*/], 0, 0);
			func_163(Local_187[0 /*17*/], 0, 0);
			func_163(Local_187[1 /*17*/], 0, 0);
			break;
		case 9:
			break;
	}
}

float func_84(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_245(Global_35, iParam0, bParam1, bParam2);
}

void func_85()
{
	float fVar0;

	func_246();
	if (!func_247(&uLocal_1031))
	{
		func_243(&uLocal_1031);
	}
	func_28(1);
	switch (iLocal_14)
	{
		case 0:
			func_248();
			break;
		case 1:
			func_249();
			break;
	}
	fVar0 = 80f;
	switch (Local_314.f_51.f_4)
	{
		case 1:
			fVar0 = 50f;
			break;
	}
	if (func_250(&Local_314, 1f, 200f, fVar0, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) || (func_236(&uLocal_1031) >= 30f && func_84(&(uLocal_873[4]), 1, 1) <= 120f))
	{
		if (iLocal_14 == 0 || iLocal_908 > 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "Int_bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "action_bool", true, false);
			iLocal_1000 = func_251(Local_314.f_51, 250f);
			if (VOLUME::_0x92A78D0BEDB332A3(iLocal_1000))
			{
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_1000, 4096, 0, 0, -1, -1, 0);
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109, "PBL_BREAKOUT");
			switch (iLocal_14)
			{
				case 0:
					func_228(1);
					break;
				case 1:
					func_228(2);
					break;
			}
		}
	}
}

void func_86()
{
	func_252();
	PED::_0x06D26A96CA1BCA75(&(uLocal_873[3]), 3, 0.2f, 0);
	PED::_0x06D26A96CA1BCA75(&(uLocal_873[2]), 3, 0.2f, 0);
	if (!func_253())
	{
		func_254();
		if (!func_81(&(uLocal_873[1]), 1868526510) && fLocal_929 > 0.8f)
		{
			TASK::TASK_MOUNT_ANIMAL(&(uLocal_873[1]), &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
		}
	}
	else
	{
		func_255();
		func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 15, 51);
		func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 15, 51);
	}
	if (PED::IS_PED_SHOOTING(&(uLocal_873[1])))
	{
		func_256(1066055203, &(uLocal_873[1]), 1);
	}
	if (fLocal_929 >= 0.95f)
	{
		func_228(3);
	}
}

void func_87()
{
	PED::_0x06D26A96CA1BCA75(&(uLocal_873[3]), 3, 0.2f, 0);
	PED::_0x06D26A96CA1BCA75(&(uLocal_873[2]), 3, 0.2f, 0);
	if (PED::IS_PED_SHOOTING(&(uLocal_873[1])))
	{
		func_256(1066055203, &(uLocal_873[1]), 1);
	}
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[4]), true) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[5]), true)) || fLocal_929 >= 0.99f)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
		TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), 20000, -1, 1f, 536870912, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[0]), iLocal_993);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
		TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
		TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[1]), iLocal_994, 0.5f, 0.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
		func_228(5);
	}
}

void func_88()
{
	func_252();
	if (!func_253())
	{
		func_257();
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(&(uLocal_873[1]), true) && !func_81(&(uLocal_873[1]), 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(&(uLocal_873[1]), &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
		}
		if (PED::IS_PED_ON_MOUNT(&(uLocal_873[1])) && iLocal_969 == 0)
		{
			func_232(&(uLocal_873[1]), &(uLocal_873[0]), &uLocal_117, 7000, 8, 11);
		}
	}
	else
	{
		func_255();
		func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 15, 51);
		func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 15, 51);
	}
	if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(&(uLocal_873[0]), true) && PED::_0x79443D56C8DF45EE(&(uLocal_873[4])) == &uLocal_873[0])
	{
		if (!func_81(&(uLocal_873[0]), 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
			TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, &(uLocal_873[4]), &(uLocal_873[3]), 1f);
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), 20000, -1, 1f, 536870912, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[0]), iLocal_993);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
		}
	}
	if (PED::IS_PED_ON_MOUNT(&(uLocal_873[0])) && PED::IS_PED_ON_MOUNT(&(uLocal_873[1])))
	{
		func_228(4);
	}
}

void func_89()
{
	Local_314.f_44 = 1;
	iLocal_970 = 1;
	func_252();
	func_258();
	func_259();
	if (!func_247(&uLocal_1034))
	{
		func_243(&uLocal_1034);
	}
	if (iLocal_972 == 0 && func_260(&uLocal_1034) >= 8f)
	{
		iLocal_972 = 1;
		func_241(3, 0, 0, "RE_HONOR_IGNORED_VICTIM", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[0]), true, false), 2401.58f, 1235.54f, 102.94f, true) <= 80f)
	{
		iLocal_977 = 1;
	}
	if (!func_253() && iLocal_954 == 0)
	{
		if (func_257())
		{
			if (func_261() || func_262())
			{
				if (func_166())
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[0]), true, false), vLocal_63, true) <= 200f)
					{
						func_263();
					}
				}
			}
		}
	}
	else
	{
		if (func_166())
		{
			switch (iLocal_900)
			{
				case 0:
					if (iLocal_977 == 1 && iLocal_954 == 0)
					{
						iLocal_900 = 1;
					}
					else
					{
						func_255();
					}
					break;
				case 1:
					if (func_262() && iLocal_954 == 0)
					{
						iLocal_900 = 2;
					}
					else
					{
						func_264();
					}
					break;
				case 2:
					func_265();
					break;
				case 3:
					break;
			}
		}
		else
		{
			func_255();
		}
		func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 15, 51);
		func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 15, 51);
	}
	if ((PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && func_266(Global_35, &(uLocal_873[4]))) && func_267())
	{
		func_268(uLocal_873[0], 1, 0, 1);
		func_268(uLocal_873[1], 1, 0, 1);
		uLocal_880[4] = MAP::_0x23F74C2FDA6E7C61(-89429847, &(uLocal_873[4]));
		PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 6, false);
		func_243(&uLocal_1007);
		iLocal_889 = 2;
		iLocal_890 = 0;
		func_164(Local_260[0 /*17*/], 0);
		func_164(Local_260[1 /*17*/], 0);
		func_163(Local_260[0 /*17*/], 1, 0);
		func_163(Local_260[1 /*17*/], 1, 0);
		(Local_260[0 /*17*/])->f_13 = func_161(108);
		(Local_260[1 /*17*/])->f_13 = func_161(109);
		func_228(7);
		iLocal_892 = 0;
	}
	if (!func_80())
	{
		func_269();
	}
}

void func_90()
{
	Local_314.f_44 = 1;
	iLocal_970 = 1;
	func_252();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[0]), true, false), 2401.58f, 1235.54f, 102.94f, true) <= 80f)
	{
		iLocal_977 = 1;
	}
	if (!func_253() && iLocal_954 == 0)
	{
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(&(uLocal_873[1]), true) && !func_81(&(uLocal_873[1]), 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(&(uLocal_873[1]), &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
		}
		if (func_270() || func_262())
		{
			if (func_166())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[0]), true, false), vLocal_63, true) <= 200f)
				{
					func_271();
				}
			}
		}
	}
	else
	{
		if (func_166())
		{
			switch (iLocal_900)
			{
				case 0:
					func_272();
					if (iLocal_977 == 1 && iLocal_954 == 0)
					{
						iLocal_900 = 1;
					}
					break;
				case 1:
					func_273();
					if (func_262() && iLocal_954 == 0)
					{
						iLocal_900 = 2;
					}
					break;
				case 2:
					func_274();
					break;
				case 3:
					break;
			}
		}
		else
		{
			func_272();
		}
		func_232(&(uLocal_873[0]), Global_35, &uLocal_117, -1, 15, 51);
		func_232(&(uLocal_873[1]), Global_35, &uLocal_117, -1, 15, 51);
	}
	if (!func_80())
	{
		func_275();
	}
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_236(&uLocal_1004) >= 1f)
	{
		func_276();
		func_277();
	}
	func_278();
	func_28(0);
	func_227();
	ENTITY::_0x18FF3110CF47115D(&(uLocal_873[4]), 1, 0);
	iLocal_944 = 1;
	Local_314.f_44 = 1;
	if (iLocal_14 == 0)
	{
		if (func_267())
		{
			if (func_266(Global_35, &(uLocal_873[4])) || (PED::IS_PED_ON_MOUNT(Global_35) && func_266(PED::GET_MOUNT(Global_35), &(uLocal_873[4]))))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_873[0]), Global_35, 3, 128, -1082130432, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_873[1]), Global_35, 3, 128, -1082130432, -1, 0);
				MAP::REMOVE_BLIP(uLocal_880[0]);
				MAP::REMOVE_BLIP(uLocal_880[1]);
				uLocal_880[4] = MAP::_0x23F74C2FDA6E7C61(-89429847, &(uLocal_873[4]));
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 6, false);
				func_243(&uLocal_1007);
				iLocal_889 = 2;
				iLocal_890 = 0;
				func_164(Local_260[0 /*17*/], 0);
				func_164(Local_260[1 /*17*/], 0);
				func_163(Local_260[0 /*17*/], 1, 0);
				func_163(Local_260[1 /*17*/], 1, 0);
				(Local_260[0 /*17*/])->f_13 = func_161(108);
				(Local_260[1 /*17*/])->f_13 = func_161(109);
				func_228(7);
				iLocal_892 = 0;
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[0])) && !PED::_0xA911EE21EDF69DAF(&(uLocal_873[3])))
	{
		if (!func_81(&(uLocal_873[3]), 242628503))
		{
			if ((PED::_0x285D36C5C72B0569(&(uLocal_873[0])) <= 1f || PED::_0x285D36C5C72B0569(&(uLocal_873[1])) <= 1f) || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[3]), iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[1])) && !PED::_0xA911EE21EDF69DAF(&(uLocal_873[3])))
	{
		if (!func_81(&(uLocal_873[2]), 242628503))
		{
			if ((PED::_0x285D36C5C72B0569(&(uLocal_873[0])) <= 1f || PED::_0x285D36C5C72B0569(&(uLocal_873[1])) <= 1f) || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[2]), iVar1, 1f, 1f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[0])) && PED::_0xA911EE21EDF69DAF(&(uLocal_873[3])))
	{
		PED::_0x06D26A96CA1BCA75(&(uLocal_873[3]), 3, 0.2f, 0);
		if (!func_81(&(uLocal_873[3]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(uLocal_873[3]), -1);
		}
	}
	if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[1])) && PED::_0xA911EE21EDF69DAF(&(uLocal_873[2])))
	{
		PED::_0x06D26A96CA1BCA75(&(uLocal_873[2]), 3, 0.2f, 0);
		if (!func_81(&(uLocal_873[2]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(uLocal_873[2]), -1);
		}
	}
	if (ENTITY::_0x627520389E288A73(&(uLocal_873[4]), &(Local_701[12 /*2*/]), (Local_701[12 /*2*/])->f_1) >= 0.95f || !ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_873[4]), &(Local_701[12 /*2*/]), (Local_701[12 /*2*/])->f_1, 1))
	{
		iLocal_956 = 1;
	}
	if (iLocal_956 == 1)
	{
		if (!PED::IS_PED_RAGDOLL(&(uLocal_873[4])) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(&(uLocal_873[4])))
		{
			if (iLocal_952 == 0)
			{
				iLocal_952 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(PED::_0x09B83E68DE004CD4(&(uLocal_873[4]))))
				{
					func_279(&(uLocal_873[4]), 1, 1);
					TASK::_0xF0B4F759F35CC7F5(&(uLocal_873[4]), ENTITY::_0x34F008A7E48C496B(&(uLocal_873[4]), 1), 0, 0, 1);
					PED::SET_PED_KEEP_TASK(&(uLocal_873[4]), true);
				}
			}
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[5]), true) && !func_81(&(uLocal_873[5]), 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, &(uLocal_873[1]), 4, 0, -1082130432, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[5]), iVar2, 0.1f, 0.1f);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	}
	if (iLocal_14 == 1)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[4]), true) && !func_81(&(uLocal_873[4]), 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, &(uLocal_873[1]), 4, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[4]), iLocal_995, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		}
	}
	if ((func_223() && iLocal_970 == 0) || ((func_223() && iLocal_970 == 1) && !PED::IS_PED_IN_COMBAT(Global_35, 0)))
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 6, false);
		func_243(&uLocal_1007);
		if (PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true) && PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
		{
			iLocal_894 = 0;
		}
		if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[4]), true))
		{
			if (!PED::_0x3AA24CCC0D451379(&(uLocal_873[4])))
			{
				func_279(&(uLocal_873[4]), 1, 1);
				TASK::_0xF0B4F759F35CC7F5(&(uLocal_873[4]), -2146271366, 0, 0, 0);
			}
		}
		if (iLocal_14 == 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[4]), true))
			{
				uLocal_880[4] = MAP::_0x23F74C2FDA6E7C61(-89429847, &(uLocal_873[4]));
				iLocal_889 = 2;
				iLocal_890 = 0;
				func_164(Local_260[0 /*17*/], 0);
				func_164(Local_260[1 /*17*/], 0);
				func_163(Local_260[0 /*17*/], 1, 0);
				func_163(Local_260[1 /*17*/], 1, 0);
				(Local_260[0 /*17*/])->f_13 = func_161(108);
				(Local_260[1 /*17*/])->f_13 = func_161(109);
				func_241(13, 0, 0, "RE_HONOR_SAVED_VICTIM", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
				func_228(7);
				func_243(&uLocal_1071);
				func_243(&uLocal_1074);
				iLocal_892 = 0;
			}
			else
			{
				func_228(11);
			}
		}
		else
		{
			func_228(11);
		}
	}
}

void func_92()
{
	float fVar0;
	float fVar1;
	int iVar2;

	ENTITY::_0x18FF3110CF47115D(&(uLocal_873[4]), 1, 1);
	func_258();
	func_259();
	if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[0])) && PED::_0xA911EE21EDF69DAF(&(uLocal_873[3])))
	{
		if (!func_81(&(uLocal_873[3]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(uLocal_873[3]), -1);
		}
	}
	if (!PED::IS_PED_ON_MOUNT(&(uLocal_873[1])) && PED::_0xA911EE21EDF69DAF(&(uLocal_873[2])))
	{
		if (!func_81(&(uLocal_873[2]), -982327190))
		{
			TASK::TASK_STAND_STILL(&(uLocal_873[2]), -1);
		}
	}
	func_28(0);
	if (ENTITY::_0x627520389E288A73(&(uLocal_873[4]), &(Local_701[12 /*2*/]), (Local_701[12 /*2*/])->f_1) >= 0.95f)
	{
		if (iLocal_952 == 0)
		{
			iLocal_952 = 1;
			func_279(&(uLocal_873[4]), 1, 1);
			TASK::_0xF0B4F759F35CC7F5(&(uLocal_873[4]), ENTITY::_0x34F008A7E48C496B(&(uLocal_873[4]), 1), 0, 0, 0);
			PED::SET_PED_KEEP_TASK(&(uLocal_873[4]), true);
		}
	}
	if (iLocal_981 == 0)
	{
		if (PED::_0x3AA24CCC0D451379(&(uLocal_873[4])))
		{
			iLocal_981 = 1;
		}
	}
	if (iLocal_949 == 0 && iLocal_981 == 1)
	{
		if (func_280(Global_35) == &uLocal_873[4] || !PED::_0x3AA24CCC0D451379(&(uLocal_873[4])))
		{
			iLocal_949 = 1;
			PED::_0x6569F31A01B4C097(&(uLocal_873[4]), 0, 1);
			PED::_0x6569F31A01B4C097(&(uLocal_873[4]), 1, 1);
			PED::SET_PED_CONFIG_FLAG(Global_35, 448, false);
			PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			iLocal_989 = 1;
			func_281(&(uLocal_873[4]), Global_35, &uLocal_1090, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 6.5f, 1, 256, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			func_243(&uLocal_1019);
			func_163(Local_260[0 /*17*/], 0, 0);
			func_163(Local_260[1 /*17*/], 0, 0);
		}
	}
	if ((PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && ENTITY::_0x61914209C36EFDDB(&(uLocal_873[4])) == 7) && iLocal_931 == 1)
	{
		iLocal_931 = 0;
		iLocal_906 = 0;
	}
	if ((PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && ENTITY::_0x61914209C36EFDDB(&(uLocal_873[4])) == 5) && iLocal_932 == 1)
	{
		iLocal_932 = 0;
		iLocal_906 = 4;
	}
	if ((PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && ENTITY::_0x61914209C36EFDDB(&(uLocal_873[4])) == 3) && iLocal_933 == 1)
	{
		iLocal_933 = 0;
		iLocal_906 = 8;
	}
	if (((PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && ENTITY::_0x61914209C36EFDDB(&(uLocal_873[4])) == 6) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(&(uLocal_873[4])) < 0.9f) && iLocal_934 == 1)
	{
		iLocal_934 = 0;
		iLocal_906 = 12;
	}
	if (PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && func_236(&uLocal_1007) >= 2f)
	{
		if (func_84(&(uLocal_873[4]), 1, 1) <= 50f)
		{
			iLocal_975 = 1;
		}
		if ((iLocal_975 == 1 && iLocal_949 == 0) && !func_283(&(uLocal_873[4]), func_282(Global_35)))
		{
			func_284(iLocal_906);
		}
	}
	func_285();
	if (iLocal_938 == 1 && !PED::_0x3AA24CCC0D451379(&(uLocal_873[4])))
	{
		if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
		{
			MAP::REMOVE_BLIP(uLocal_880[4]);
		}
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
		TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_873[4]));
		func_31(&iLocal_239, &Local_260);
		func_163(Local_260[0 /*17*/], 0, 0);
		func_163(Local_260[1 /*17*/], 0, 0);
		func_286(&(uLocal_873[4]), Global_35, func_161(74), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		fVar0 = func_245(&(uLocal_873[4]), &(uLocal_873[2]), 1, 1);
		fVar1 = func_245(&(uLocal_873[4]), &(uLocal_873[3]), 1, 1);
		iVar2 = 0;
		if (fVar0 >= fVar1)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
		if (PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[2]), true) && iVar2 == 1) && func_245(&(uLocal_873[4]), &(uLocal_873[2]), 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), -1, -1, 1.5f, 8388608, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[3]), true) && iVar2 == 0) && func_245(&(uLocal_873[4]), &(uLocal_873[3]), 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), -1, -1, 1.5f, 8388608, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC(0, -1f, 512, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_995);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		func_228(11);
	}
	if (iLocal_949 == 1 && iLocal_938 == 0)
	{
		if (!PED::_0x3AA24CCC0D451379(&(uLocal_873[4])))
		{
			func_287();
			func_288();
			if (iLocal_948 == 0)
			{
				iLocal_948 = 1;
				WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
			}
			if (func_236(&uLocal_1010) >= 10f && iLocal_935 == 0)
			{
				func_289();
			}
		}
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, &(Local_701[0 /*2*/]), (Local_701[7 /*2*/])->f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, &(Local_701[0 /*2*/]), (Local_701[6 /*2*/])->f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, &(Local_701[0 /*2*/]), (Local_701[9 /*2*/])->f_1, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	func_97();
}

void func_93()
{
	func_288();
	if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_60, 50f, 50f, 10f, false, true, 0) && iLocal_939 == 0)
	{
		func_290();
	}
	if (iLocal_940 == 1 && iLocal_945 == 0)
	{
		func_291();
	}
	if (!bLocal_973)
	{
		if (func_292(Global_35) && !func_293())
		{
			func_294(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_873[4]), true, false), &uLocal_1145, 1061158912 /* Float: 0.75f */, 1, &(Local_314.f_98[4]));
			if (&Local_314.f_98[4] > 80f || func_295(&uLocal_1145, 7000))
			{
				func_23(0);
				func_296();
				return;
			}
		}
		else
		{
			func_297(&uLocal_1145);
		}
	}
	func_285();
	if (func_236(&uLocal_1001) > 15f && (!func_298() || iLocal_907 > 12))
	{
		if (func_292(&(uLocal_873[4])))
		{
			if (func_299(&uLocal_89, Global_35, vLocal_60) && func_292(Global_35))
			{
				func_300();
			}
			else if (func_302(&uLocal_89, func_301()))
			{
				if (func_298() == 0 && func_108(Global_35, vLocal_60, 1) > 80f)
				{
					func_303();
				}
			}
			else if (func_304(&uLocal_89, Global_35, 20, 1090519040 /* Float: 8f */) || !func_292(Global_35))
			{
				if (func_298() == 0 && func_108(Global_35, vLocal_60, 1) > 80f)
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(&(uLocal_873[4])))
					{
						func_305();
						if (ENTITY::IS_ENTITY_IN_WATER(iLocal_998) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_998) >= 0.5f)
						{
							AUDIO::STOP_PED_SPEAKING(&(uLocal_873[4]), true);
							func_286(&(uLocal_873[4]), Global_35, func_161(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_306();
							func_23(0);
							return;
						}
					}
				}
			}
			else if (iLocal_950 == 1)
			{
				if (!func_247(&uLocal_1028))
				{
					if (func_233(-4f, 1, 0, 0))
					{
						func_243(&uLocal_1028);
					}
				}
				else if (func_236(&uLocal_1028) >= 3f)
				{
					if (((iLocal_907 == 9 || iLocal_907 == 14) || iLocal_907 == 0) || func_108(Global_35, vLocal_60, 1) < 80f)
					{
						iLocal_950 = 0;
					}
					else
					{
						func_307(&uLocal_1013);
						func_308();
					}
				}
			}
			else
			{
				func_309();
			}
		}
	}
	if (!func_247(&uLocal_1043))
	{
		if (func_298())
		{
			func_243(&uLocal_1043);
		}
	}
	else if (func_236(&uLocal_1043) >= 45f)
	{
		func_310();
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_60, 35f, 35f, 3f, false, true, 0))
	{
		iLocal_939 = 1;
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.5f);
	}
	func_311();
	if (!bLocal_973)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_60, 6f, 6f, 2f, false, true, 0))
		{
			bLocal_973 = true;
		}
	}
	if (bLocal_973 == 1)
	{
		if (fLocal_930 >= 0.1f)
		{
			func_96(0);
		}
		if (func_312())
		{
			if (bLocal_87)
			{
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
				func_36(&(uLocal_873[4]));
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, false);
				func_23(0);
				bLocal_87 = false;
			}
			func_313();
			func_228(12);
		}
	}
	else
	{
		func_314();
		func_315();
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (iLocal_974 == 0)
		{
			func_316();
		}
		if (!func_247(&uLocal_1025))
		{
			func_243(&uLocal_1025);
		}
		if (!func_293() && iLocal_941 == 0)
		{
			if (func_236(&uLocal_1025) >= 30f && iLocal_945 == 0)
			{
				func_296();
				func_23(0);
				return;
			}
			if (func_236(&uLocal_1025) >= 30f && iLocal_945 == 1)
			{
				func_296();
				func_23(0);
				return;
			}
		}
	}
	func_97();
}

void func_94()
{
	float fVar0;
	float fVar1;
	int iVar2;

	func_288();
	func_285();
	func_232(&(uLocal_873[4]), Global_35, &uLocal_117, 5000, 15, 51);
	func_232(Global_35, &(uLocal_873[4]), &uLocal_117, 5000, 15, 51);
	if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
	{
		MAP::REMOVE_BLIP(uLocal_880[4]);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_997))
	{
		MAP::REMOVE_BLIP(&iLocal_997);
	}
	fVar0 = func_245(&(uLocal_873[4]), &(uLocal_873[2]), 1, 1);
	fVar1 = func_245(&(uLocal_873[4]), &(uLocal_873[3]), 1, 1);
	iVar2 = 0;
	if (fVar0 >= fVar1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (iLocal_955 == 0)
	{
		iLocal_955 = 1;
		if (iLocal_989 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
			PED::SET_PED_RESET_FLAG(Global_35, 318, false);
			iLocal_989 = 0;
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
		if (PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[2]), true) && iVar2 == 1) && func_245(&(uLocal_873[4]), &(uLocal_873[2]), 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), -1, -1, 1f, 1, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[3]), true) && iVar2 == 0) && func_245(&(uLocal_873[4]), &(uLocal_873[3]), 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), -1, -1, 1f, 1, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 0f, 0f, 0f, 2f, 1.2f, 528, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
		TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_995);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
	}
	func_97();
}

void func_95()
{
	switch (iLocal_901)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
			{
				MAP::REMOVE_BLIP(uLocal_880[4]);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
			iLocal_901 = 1;
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
			{
				TASK::TASK_DISMOUNT_ANIMAL(&(uLocal_873[4]), 4096, 0, 0, 0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(&(uLocal_873[4]), iLocal_1129, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(&(uLocal_873[4]), 0, 4096);
			}
			if (ANIMSCENE::_0x25557E324489393C(Local_109.f_1))
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_109.f_1, 0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_109.f_1, "player", Global_35);
				}
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_109.f_1);
			}
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_988 = 0;
			}
			iLocal_901 = 2;
			break;
		case 2:
			if (!PED::IS_PED_INJURED(&(uLocal_873[4])))
			{
				if (!PED::_0x3AA24CCC0D451379(&(uLocal_873[4])))
				{
					if (!func_317(&(uLocal_873[4]), iLocal_1130, 0) && !PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_873[4]), false))
					{
						TASK::_TASK_FLEE_FROM_PED(&(uLocal_873[4]), Global_35, vLocal_60, 999f, -1, 0, 1077936128, 0);
						iLocal_901 = 3;
					}
				}
			}
			break;
		case 3:
			if (!func_81(&(uLocal_873[4]), 518218985))
			{
				TASK::_TASK_FLEE_FROM_PED(&(uLocal_873[4]), Global_35, vLocal_60, 999f, -1, 0, 1077936128, 0);
			}
			break;
	}
	func_285();
	func_318();
}

int func_96(bool bParam0)
{
	switch (iLocal_910)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_910++;
			}
			break;
		case 1:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				if (func_233(-4f, 1, Global_35, 1))
				{
					func_286(Global_35, &(uLocal_873[4]), func_161(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_910++;
				}
			}
			break;
		case 2:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				if (func_233(-4f, 1, Global_35, 1))
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_243(&uLocal_1058);
					iLocal_910++;
				}
			}
			break;
		case 3:
			if (!func_292(&(uLocal_873[4])) || bParam0)
			{
				if ((PED::_IS_PED_OPENING_A_DOOR(&(uLocal_873[4])) || func_236(&uLocal_1058) > 10f) || bParam0)
				{
					if (func_233(3f, 1, &(uLocal_873[4]), 1))
					{
						if (func_233(3f, 1, Global_35, 1))
						{
							if (func_319())
							{
								func_286(Global_35, &(uLocal_873[4]), func_161(128), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_286(Global_35, &(uLocal_873[4]), func_161(129), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_910++;
						}
					}
				}
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

int func_97()
{
	if (iLocal_949 == 1)
	{
		if (((((((func_320(&(uLocal_873[4]), 0, &(Local_314.f_5), &iLocal_1134, 0, 0) && func_321()) && iLocal_1134 != 8192) && iLocal_1134 != 256) && iLocal_1134 != 2048) || func_322()) || func_323()) || PED::_0x336B3D200AB007CB(Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 50f, 512) > 0)
		{
			if (iLocal_942 == 0)
			{
				iLocal_942 = 1;
				func_34();
				func_31(&iLocal_239, &Local_260);
				func_29(Global_1935630, 4);
				func_30(29);
				TASK::CLEAR_PED_SECONDARY_TASK(&(uLocal_873[4]));
				PED::_0xEEED8FAFEC331A70(&(uLocal_873[4]), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_873[4]), true);
				func_228(10);
				func_23(0);
				return 1;
			}
		}
	}
	else if (func_324() && iLocal_942 == 0)
	{
		iLocal_942 = 1;
		func_31(&iLocal_239, &Local_260);
		func_228(10);
		func_23(0);
	}
	return 0;
}

void func_98()
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
	{
		func_232(&(uLocal_873[4]), Global_35, &uLocal_117, -1, 15, 51);
	}
}

int func_99(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_325(iVar0) || func_326(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_100(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_101()
{
	if (!func_327(Global_1395482->f_1))
	{
		return 0;
	}
	return func_328(Global_1395482->f_1, 32);
}

bool func_102(int iParam0)
{
	if (func_45(iParam0, 1))
	{
		return false;
	}
	return (1 == func_113(iParam0) || 2 == func_113(iParam0));
}

float func_103(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_104(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_105(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_106(int iParam0, int iParam1, float fParam2)
{
	return func_329(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_107(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

float func_108(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_109(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_330(vVar0, vVar3, 0f) };
	vVar9 = { func_331(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_110(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_330(vVar0, vVar3, 0f) };
	vVar9 = { func_331(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_111(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_332(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_239(iParam0, 0);
		}
	}
}

void func_112(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_333(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_332(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_113(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

int func_114()
{
	return Global_1572887->f_12;
}

char* func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_116(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

bool func_117(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_334(iParam0, iParam1);
}

void func_118(int iParam0, bool bParam1)
{
	if (func_117(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_335(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_119(var uParam0, var uParam1)
{
	if (func_45(uParam0->f_3, 16777216))
	{
		if (func_336(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_120(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

void func_121(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_117(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_100(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_337(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_122(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_171))
	{
		func_338(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_339(uParam0);
	func_340(uParam0);
	func_341(uParam0);
	if (!func_342(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_216(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_343();
	}
	if (!func_344(uParam0->f_3) && !func_45(uParam0->f_3, 256))
	{
		func_37(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_33(uParam0->f_173);
	func_33(uParam0->f_172);
}

void func_123(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_124(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
				Jump @3258; //curOff = 844
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
				Jump @3258; //curOff = 877
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
				Jump @3258; //curOff = 924
				return 1004100858;
				Jump @3258; //curOff = 935
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
				Jump @3258; //curOff = 982
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
				Jump @3258; //curOff = 1029
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
				Jump @3258; //curOff = 1090
				return 1583531269;
				Jump @3258; //curOff = 1101
				return -728402510;
				Jump @3258; //curOff = 1112
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
				Jump @3258; //curOff = 1159
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
				Jump @3258; //curOff = 1192
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
				Jump @3258; //curOff = 1253
				return 856957155;
				Jump @3258; //curOff = 1264
				return 199192985;
				Jump @3258; //curOff = 1275
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
				Jump @3258; //curOff = 1350
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
				Jump @3258; //curOff = 1397
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
				Jump @3258; //curOff = 1444
				return -1065165983;
				Jump @3258; //curOff = 1455
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
				Jump @3258; //curOff = 1516
				return -1641231995;
				Jump @3258; //curOff = 1527
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
				Jump @3258; //curOff = 1574
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
				Jump @3258; //curOff = 1621
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
				Jump @3258; //curOff = 1668
				return -800701784;
				Jump @3258; //curOff = 1679
				return -1599472750;
				Jump @3258; //curOff = 1690
				return 239043929;
				Jump @3258; //curOff = 1701
				return -1534174498;
				Jump @3258; //curOff = 1712
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
				Jump @3258; //curOff = 1759
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
				Jump @3258; //curOff = 1806
				return 1895786957;
				Jump @3258; //curOff = 1817
				return -2058137475;
				Jump @3258; //curOff = 1828
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
				Jump @3258; //curOff = 1917
				return 598461796;
				Jump @3258; //curOff = 1928
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
				Jump @3258; //curOff = 1975
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
				Jump @3258; //curOff = 2050
				return 544369376;
				Jump @3258; //curOff = 2061
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
				Jump @3258; //curOff = 2108
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
				Jump @3258; //curOff = 2155
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3258; //curOff = 2188
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3258; //curOff = 2221
				return 1602493990;
				Jump @3258; //curOff = 2232
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
				Jump @3258; //curOff = 2321
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
				Jump @3258; //curOff = 2368
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
				Jump @3258; //curOff = 2415
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
				Jump @3258; //curOff = 2462
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
				Jump @3258; //curOff = 2509
				return 1762656414;
				Jump @3258; //curOff = 2520
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
				Jump @3258; //curOff = 2581
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
				Jump @3258; //curOff = 2642
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
				Jump @3258; //curOff = 2689
				return -2018341642;
				Jump @3258; //curOff = 2700
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3258; //curOff = 2733
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3258; //curOff = 2766
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
				Jump @3258; //curOff = 2813
				return -1618254924;
				Jump @3258; //curOff = 2824
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
				Jump @3258; //curOff = 2871
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
				Jump @3258; //curOff = 2918
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3258; //curOff = 2951
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
				Jump @3258; //curOff = 2998
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
				Jump @3258; //curOff = 3045
				return -2137572125;
				Jump @3258; //curOff = 3056
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
				Jump @3258; //curOff = 3103
				return -774894224;
				Jump @3258; //curOff = 3114
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
				Jump @3258; //curOff = 3161
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
				Jump @3258; //curOff = 3222
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
			}
			else if (iParam0 >= 75 && iParam0 <= 118)
			{
				switch (iParam0)
				{
					case 75:
						return -346537584;
					case 76:
						switch (iParam1)
						{
							case 0:
								return -550739017;
							default:
								break;
						}
						return -1829585536;
					case 77:
						switch (iParam1)
						{
							case 0:
								return -609376390;
							case 1:
								return -311112952;
							case 2:
								return -682765316;
							case 3:
								return -2127446978;
							default:
								break;
						}
						return 1338777472;
					case 78:
						switch (iParam1)
						{
							case 0:
								return 581221752;
							case 1:
								return 20416722;
							default:
								break;
						}
						return 1293249792;
					case 79:
						switch (iParam1)
						{
							case 0:
								return -1786500412;
							default:
								break;
						}
						return 235904384;
					case 80:
						return -334565466;
					case 81:
						switch (iParam1)
						{
							case 0:
								return 31964051;
							case 1:
								return 245875704;
							default:
								break;
						}
						return 1046770304;
					case 82:
						switch (iParam1)
						{
							case 0:
								return 48921735;
							case 1:
								return 1062398415;
							default:
								break;
						}
						return -2047991552;
					case 83:
						return -1752276745;
					case 84:
						switch (iParam1)
						{
							case 0:
								return 418356694;
							case 1:
								return -1090928636;
							default:
								break;
						}
						return -1021157760;
					case 85:
						switch (iParam1)
						{
							case 0:
								return 278246928;
							case 1:
								return 1092461253;
							default:
								break;
						}
						return 900051136;
					case 86:
						return 1417655457;
					case 87:
						switch (iParam1)
						{
							case 0:
								return 188835226;
							case 1:
								return 220332139;
							default:
								break;
						}
						return 1359760512;
					case 88:
						switch (iParam1)
						{
							case 0:
								return -1638860831;
							case 1:
								return -812497188;
							default:
								break;
						}
						return 1616003072;
					case 89:
						return -69702063;
					case 90:
						switch (iParam1)
						{
							case 0:
								return -479871262;
							default:
								break;
						}
						return -1670654720;
					case 91:
						return -331264815;
					case 92:
						return -1217205534;
					case 93:
						switch (iParam1)
						{
							case 0:
								return -1662432355;
							case 1:
								return -368935814;
							default:
								break;
						}
						return -1021345856;
					case 94:
						switch (iParam1)
						{
							case 0:
								return -735413614;
							case 1:
								return -972169639;
							case 2:
								return -673250821;
							case 3:
								return 161473916;
							default:
								break;
						}
						return -1329933952;
					case 95:
						switch (iParam1)
						{
							case 0:
								return -1645068573;
							default:
								break;
						}
						return 1248360320;
					case 96:
						switch (iParam1)
						{
							case 0:
								return 884363685;
							case 1:
								return 368673822;
							case 2:
								return 578628915;
							case 3:
								return 689154642;
							case 4:
								return 471198511;
							case 5:
								return 967199063;
							case 6:
								return -38616787;
							case 7:
								return -1294637989;
							default:
								break;
						}
						return -84111088;
					case 97:
						switch (iParam1)
						{
							case 0:
								return -1639179308;
							case 1:
								return -436408638;
							default:
								break;
						}
						return 1995021696;
					case 98:
						switch (iParam1)
						{
							case 0:
								return 1464772696;
							case 1:
								return 6449957;
							default:
								break;
						}
						return -1853564800;
					case 99:
						switch (iParam1)
						{
							case 0:
								return 803309489;
							case 1:
								return -31873580;
							case 2:
								return -1922690045;
							case 3:
								return 515105064;
							default:
								break;
						}
						return -1759022208;
					case 100:
						return -307424281;
					case 101:
						switch (iParam1)
						{
							case 0:
								return 1006898715;
							case 1:
								return 1573993134;
							default:
								break;
						}
						return -1402545280;
					case 102:
						return -1979014350;
					case 103:
						return 2096137174;
					case 104:
						switch (iParam1)
						{
							case 0:
								return -861435303;
							case 1:
								return 2076430727;
							case 2:
								return -1266577036;
							default:
								break;
						}
						return 493009408;
					case 105:
						return 1152564685;
					case 106:
						switch (iParam1)
						{
							case 0:
								return 2036836823;
							case 1:
								return 2046057828;
							case 2:
								return -526712830;
							case 3:
								return -242317110;
							case 4:
								return 1729814355;
							case 5:
								return 1868875718;
							case 6:
								return -785635151;
							case 7:
								return 1586170447;
							case 8:
								return -291036947;
							default:
								break;
						}
						return -832026176;
					case 107:
						switch (iParam1)
						{
							case 0:
								return -981210833;
							case 1:
								return 875440489;
							default:
								break;
						}
						return -508430848;
					case 108:
						switch (iParam1)
						{
							case 0:
								return 1491780341;
							case 1:
								return 1920169067;
							default:
								break;
						}
						return -227796128;
					case 109:
						switch (iParam1)
						{
							case 0:
								return -1255044808;
							case 1:
								return -1012076841;
							default:
								break;
						}
						return -871899648;
					case 110:
						switch (iParam1)
						{
							case 0:
								return 792345848;
							case 1:
								return 121209110;
							default:
								break;
						}
						return 14115413;
					case 111:
						switch (iParam1)
						{
							case 0:
								return -1152301466;
							case 1:
								return -1113682855;
							case 2:
								return -1801389871;
							case 3:
								return -180725957;
							case 4:
								return 1811628790;
							default:
								break;
						}
						return 2016864128;
					case 112:
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
					case 113:
						return 1487351956;
					case 114:
						switch (iParam1)
						{
							case 0:
								return 1955914312;
							case 1:
								return 1685893021;
							case 2:
								return -711771194;
							case 3:
								return 146337879;
							default:
								break;
						}
						return 205846784;
					case 115:
						switch (iParam1)
						{
							case 0:
								return -775876869;
							case 1:
								return -39469638;
							default:
								break;
						}
						return 1483441280;
					case 116:
						switch (iParam1)
						{
							case 0:
								return 2113065035;
							case 1:
								return -2101774133;
							default:
								break;
						}
						return -815072896;
					case 117:
						return -689015496;
					case 118:
						switch (iParam1)
						{
							case 0:
								return -18903616;
							case 1:
								return -1607469655;
							default:
								break;
						}
						return -640409664;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}

void func_125(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_114() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_126(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 16384);
	}
	else
	{
		func_69(&(uParam0->f_1), 16384);
	}
}

void func_127(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 2048);
	}
	else
	{
		func_69(&(uParam0->f_1), 2048);
	}
}

void func_128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 256);
	}
	else
	{
		func_69(&(uParam0->f_1), 256);
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_69(iParam0, 16);
	}
	else
	{
		func_345(iParam0, 67108864);
		func_345(iParam0, 16);
	}
}

void func_130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 128);
	}
	else
	{
		func_69(&(uParam0->f_1), 128);
	}
}

void func_131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_69(iParam0, 256);
	}
	else
	{
		func_345(iParam0, 256);
	}
}

void func_132(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_69(iParam0, 268435456);
	}
	else
	{
		func_345(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_69(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_345(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_69(iParam0, 536870912);
	}
	else
	{
		func_345(iParam0, 536870912);
	}
}

var func_133(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_134(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_346(sParam1));
}

int func_135(int iParam0)
{
	if (((func_136(iParam0, 1) && func_136(iParam0, 2)) && func_136(iParam0, 8)) && func_136(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_136(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_137(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_41(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_347(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_348(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_138(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;

	if (func_45(iParam0, 32))
	{
		if (func_349(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_350(Global_35, &(uParam1->f_12)) };
				if (!func_142(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_351(uParam1, bParam2);
	}
	if (bParam3)
	{
		uVar4 = func_217(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, uVar4, uVar4, uVar4, func_218());
		if (func_352(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_220(iVar0, func_219(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_220(iVar0, func_219(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_45(iParam0, 1))
		{
			func_353(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_354(iParam0);
}

int func_139(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_355(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_70(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_356(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_356(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_140(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_357(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_45(iParam0, 1))
			{
				if (func_70(iParam0, 2))
				{
				}
			}
			func_358(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_359(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_359(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_102(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_141(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_347(iParam1))
	{
		if (!func_360(iParam1, iVar0))
		{
			vVar4 = { func_137(iParam1, iVar0) };
			if (!func_142(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_147(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_361(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_142(vVar4))
	{
	}
	return vVar1;
}

int func_142(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_40("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_144(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_347(iParam0))
	{
		vVar1 = { func_137(iParam0, iVar0) };
		if (func_362(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_146(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_294(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_363(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_142(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_364(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_143(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_147(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_140(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_45(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_148(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_149(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_365(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_366(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_367(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_368(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_150(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_151(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

void func_152(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_153(int iParam0, int iParam1)
{
	if (func_369(iParam0))
	{
		return;
	}
	if (func_370(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_345(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_156(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_371(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_372(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_372(), iVar3);
		if (func_373(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_374(iParam0) % iParam1);
	}
	return (func_375(iParam0) % iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_376(iParam0);
	if ((func_5(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = -247265944;
					break;
				case 1:
					iVar2 = 1696286663;
					break;
				case 2:
					iVar2 = -1038436471;
					break;
				case 3:
					iVar2 = -85890205;
					break;
				case 4:
					iVar2 = -727455979;
					break;
				case 5:
					iVar2 = joaat("a_c_horse_americanpaint_tobiano");
					break;
				default:
					if (func_377())
					{
						iVar2 = -247265944;
					}
					else
					{
						iVar2 = 1696286663;
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1072019803;
					break;
				case 1:
					iVar2 = -1038436471;
					break;
				case 2:
					iVar2 = -1261814606;
					break;
				case 3:
					iVar2 = -1554827654;
					break;
				default:
					if (func_377())
					{
						iVar2 = -1038436471;
					}
					else
					{
						iVar2 = 1072019803;
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = 2024948086;
					break;
				case 1:
					iVar2 = -1265030920;
					break;
				case 2:
					iVar2 = joaat("a_c_horse_belgian_mealychestnut");
					break;
				case 3:
					iVar2 = -1599683008;
					break;
				case 4:
					iVar2 = joaat("a_c_horse_americanpaint_overo");
					break;
				default:
					if (func_377())
					{
						iVar2 = 2024948086;
					}
					else
					{
						iVar2 = -1265030920;
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = 1230359523;
					break;
				case 1:
					iVar2 = 96930969;
					break;
				case 2:
					iVar2 = joaat("a_c_horse_belgian_blondchestnut");
					break;
				case 3:
					iVar2 = 36009259;
					break;
				default:
					if (func_377())
					{
						iVar2 = 1230359523;
					}
					else
					{
						iVar2 = 96930969;
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = -727455979;
					break;
				case 1:
					iVar2 = joaat("a_c_horse_mustang_wildbay");
					break;
				case 2:
					iVar2 = -1180427609;
					break;
				case 3:
					iVar2 = -1250098797;
					break;
				default:
					if (func_377())
					{
						iVar2 = -727455979;
					}
					else
					{
						iVar2 = joaat("a_c_horse_mustang_wildbay");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = 917402668;
					break;
				case 1:
					iVar2 = -914712122;
					break;
				case 2:
					iVar2 = -598917269;
					break;
				case 3:
					iVar2 = -598917269;
					break;
				default:
					iVar2 = 917402668;
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = -1250098797;
					break;
				case 1:
					iVar2 = joaat("a_c_horse_appaloosa_blanket");
					break;
				case 2:
					iVar2 = joaat("a_c_horse_thoroughbred_dapplegrey");
					break;
				case 3:
					iVar2 = -1924405794;
					break;
				case 4:
					iVar2 = -1180427609;
					break;
				default:
					iVar2 = -1250098797;
					break;
			}
			break;
		default:
			iVar2 = -1038436471;
			break;
	}
	return iVar2;
}

void func_159(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_378(&(((*iParam0)[iVar0 /*32*/])->f_1));
		func_378(&(((*iParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_160(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0 /*8*/]))
		{
			StringCopy((*uParam1)[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

char* func_161(int iParam0)
{
	if (iLocal_14 == 0)
	{
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				switch (iParam0)
				{
					case 0:
						return "RE_IK_UNI_V1_RIDING_INTRO_VHT";
					default:
						break;
				}
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				switch (iParam0)
				{
					case 0:
						return "RE_IK_UNI_V1_RIDING_INTRO_ASB";
					default:
						break;
				}
				break;
		}
		switch (iParam0)
		{
			case 36:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_A";
			case 37:
				return "RE_IK_UNI_V1_INITIAL";
			case 38:
				return "RE_IK_UNI_V1_BUTSIR";
			case 39:
				return "RE_IK_UNI_V1_WERENTNICE";
			case 40:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_A";
			case 41:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_B";
			case 42:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_C";
			case 43:
				return "RE_IK_UNI_V1_INITIAL_LAUGH";
			case 44:
				return "RE_IK_UNI_V1_OCONVO_A";
			case 45:
				return "RE_IK_UNI_V1_OCONVO_B";
			case 46:
				return "RE_IK_UNI_V1_OCONVO_C";
			case 47:
				return "RE_IK_UNI_V1_OCONVO_D";
			case 48:
				return "RE_IK_UNI_V1_OCONVO_E";
			case 49:
				return "RE_IK_UNI_V1_OCONVO_F";
			case 1:
				return "RE_IK_UNI_V1_RIDING_A";
			case 2:
				return "RE_IK_UNI_V1_RIDING_B";
			case 3:
				return "RE_IK_UNI_V1_RIDING_C";
			case 4:
				return "RE_IK_UNI_V1_RIDING_D";
			case 5:
				return "RE_IK_UNI_V1_RIDING_E";
			case 6:
				return "RE_IK_UNI_V1_RIDING_F";
			case 7:
				return "RE_IK_UNI_V1_RIDING_G";
			case 8:
				return "RE_IK_UNI_V1_RIDING_SIGH";
			case 9:
				return "RE_IK_UNI_V1_RIDING_H";
			case 10:
				return "RE_IK_UNI_V1_RIDING_I";
			case 11:
				return "RE_IK_UNI_V1_RIDING_J";
			case 12:
				return "RE_IK_UNI_V1_RIDING_K";
			case 13:
				return "RE_IK_UNI_V1_RIDING_FINAL";
			case 14:
				return "RE_IK_UNI_V1_RIDING_LAST";
			case 15:
				return "RE_IK_UNI_V1_RIDING_L";
			case 16:
				return "RE_IK_UNI_V1_RIDING_M";
			case 17:
				return "RE_IK_UNI_V1_RIDING_N";
			case 18:
				return "RE_IK_UNI_V1_WARNING_A";
			case 19:
				return "RE_IK_UNI_V1_WARNING_B";
			case 21:
				return "RE_IK_UNI_V1_CLOSE_FOLLOW";
			case 22:
				if (func_379(1, 1))
				{
					return "RE_IK_UNI_V1_WARN_AGGRO_FEUD";
				}
				else
				{
					return "RE_IK_UNI_V1_WARN_AGGRO";
				}
				break;
			case 23:
				return "RE_IK_UNI_V1_AGGRO_A";
			case 24:
				return "RE_IK_UNI_V1_AGGRO_B";
			case 25:
				return "RE_IK_UNI_V1_AGGRO_C";
			case 26:
				return "RE_IK_UNI_V1_AGGRO_D";
			case 27:
				return "RE_IK_UNI_V1_KILLED_HER";
			case 31:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_A";
			case 32:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_B";
			case 33:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_C";
			case 34:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_D";
			case 35:
				return "RE_IK_UNI_V1_RANDOM_AGGRO";
			case 51:
				return "RE_IK_UNI_V1_THANK_A";
			case 52:
				return "RE_IK_UNI_V1_THANK_B";
			case 54:
				return "RE_IK_UNI_V1_PLAYER_RESPONSE";
			case 55:
				return "RE_IK_UNI_V1_THANK_D";
			case 56:
				return "RE_IK_UNI_V1_THANK_E";
			case 57:
				return "RE_IK_UNI_V1_THANK_F";
			case 58:
				return "RE_IK_UNI_V1_THANK_G";
			case 59:
				return "RE_IK_UNI_V1_YES_RIDE";
			case 75:
				return "RE_IK_UNI_V1_NO_RESPONSE_A";
			case 76:
				return "RE_IK_UNI_V1_NO_RESPONSE_B";
			case 77:
				return "RE_IK_UNI_V1_NO_RESPONSE_C";
			case 78:
				return "RE_IK_UNI_V1_NO_RESPONSE_D";
			case 96:
				return "RE_IK_UNI_V1_ANIMAL_A";
			case 60:
				return "RE_IK_UNI_V1_WOMAN_HELP_A";
			case 61:
				return "RE_IK_UNI_V1_WOMAN_HELP_B";
			case 62:
				return "RE_IK_UNI_V1_WOMAN_HELP_C";
			case 63:
				return "RE_IK_UNI_V1_WOMAN_HELP_D";
			case 64:
				return "RE_IK_UNI_V1_WOMAN_HELP_E";
			case 65:
				return "RE_IK_UNI_V1_WOMAN_HELP_F";
			case 66:
				return "RE_IK_UNI_V1_WOMAN_HELP_G";
			case 67:
				return "RE_IK_UNI_V1_WOMAN_HELP_H";
			case 68:
				return "RE_IK_UNI_V1_WOMAN_HELP_I";
			case 69:
				return "RE_IK_UNI_V1_WOMAN_HELP_J";
			case 70:
				return "RE_IK_UNI_V1_WOMAN_HELP_K";
			case 71:
				return "RE_IK_UNI_V1_WOMAN_HELP_L";
			case 72:
				return "RE_IK_UNI_V1_WOMAN_HELP_M";
			case 73:
				return "RE_IK_UNI_V1_WOMAN_LEAVING_A";
			case 74:
				return "RE_IK_UNI_V1_WOMAN_LEAVING_B";
			case 79:
				return "RE_IK_UNI_V1_WRONG_WAY_A";
			case 80:
				return "RE_IK_UNI_V1_WRONG_WAY_B";
			case 81:
				return "RE_IK_UNI_V1_WRONG_WAY_C";
			case 82:
				return "RE_IK_UNI_V1_TOO_LONG_A";
			case 83:
				return "RE_IK_UNI_V1_TOO_LONG_B";
			case 84:
				return "RE_IK_UNI_V1_TOO_LONG_C";
			case 85:
				return "RE_IK_UNI_V1_STATIONARY_A";
			case 86:
				return "RE_IK_UNI_V1_STATIONARY_B";
			case 87:
				return "RE_IK_UNI_V1_STATIONARY_C";
			case 88:
				return "RE_IK_UNI_V1_END_ESCORT_MEH";
			case 89:
				return "RE_IK_UNI_V1_END_ESCORT_BAD";
			case 90:
				return "GENERIC_SHOCKED_MED";
			case 91:
				return "GENERIC_SHOCKED_MED";
			case 92:
				return "GENERIC_SHOCKED_HIGH";
			case 93:
				return "RE_IK_UNI_V1_TRANSITION_A";
			case 94:
				return "RE_IK_UNI_V1_TRANSITION_B";
			case 95:
				return "RE_IK_UNI_V1_TRANSITION_C";
			case 97:
				return "RE_IK_UNI_V1_PLAYER_NEG_A0";
			case 98:
				return "RE_IK_UNI_V1_PLAYER_POS_A";
			case 99:
				return "RE_IK_UNI_V1_PLAYER_NEG_A";
			case 102:
				return "RE_IK_UNI_V1_PLAYER_POS_B";
			case 103:
				return "RE_IK_UNI_V1_PLAYER_NEG_B";
			case 100:
				return "CALLOUT_JUST_KILL_EM_MALE";
			case 101:
				return "CALLOUT_JUST_KILL_EM_NEUTRAL";
			case 104:
				return "RE_IK_UNI_V1_PED_POS_B";
			case 105:
				return "RE_IK_UNI_V1_PED_NEG_B";
			case 106:
				return "RE_IK_UNI_V1_ACCEPT";
			case 107:
				return "RE_IK_UNI_V1_REFUSE";
			case 108:
				return "RE_IK_UNI_V1_PLAYER_POS_C";
			case 109:
				return "RE_IK_UNI_V1_PLAYER_NEG_C";
			case 110:
				return "RE_IK_UNI_V1_PED_POS_C";
			case 111:
				return "RE_IK_UNI_V1_PED_NEG_C";
			case 112:
				return "RE_IK_UNI_V1_PLAYER_NEG_D";
			case 114:
				return "RE_IK_UNI_V1_PED_NEG_D";
			case 116:
				return "RE_IK_UNI_V1_CONVO_A";
			case 117:
				return "RE_IK_UNI_V1_CONVO_A";
			case 118:
				return "RE_IK_UNI_V1_CONVO_B";
			case 119:
				return "RE_IK_UNI_V1_CONVO_B";
			case 120:
				return "RE_IK_UNI_V1_CONVO_C";
			case 121:
				return "RE_IK_UNI_V1_CONVO_C";
			case 122:
				return "RE_IK_UNI_V1_CLOSE";
			case 123:
				return "RE_IK_UNI_V1_CLOSE";
			case 126:
				return "SCARED_HELP";
			case 125:
				return "PANIC_HELP";
			case 127:
				return "RE_IK_UNI_V1_SHOOTOUT";
			case 128:
				return "RE_IK_UNI_V1_PLYFINAL_LOW";
			case 129:
				return "RE_IK_UNI_V1_PLYFINAL_HIGH";
			case 113:
				return "RE_IK_UNI_V1_PLAYER_NEG_D_MOUNTED";
			case 115:
				return "RE_IK_UNI_V1_PED_NEG_D_MOUNTED";
			case 130:
				return "RE_IK_UNI_V1_WARNING_C";
			case 131:
				return "RE_IK_UNI_V1_WARNING_D";
		}
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				switch (iParam0)
				{
					case 53:
						return "RE_IK_UNI_V1_THANK_C1";
					default:
						break;
				}
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				switch (iParam0)
				{
					case 53:
						return "RE_IK_UNI_V1_THANK_C2";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 36:
				return "RE_IK_UNI_V2_INITIAL_SCREAM_A";
			case 38:
				return "RE_IK_UNI_V2_INITIAL_SCREAM_B";
			case 44:
				return "";
			case 45:
				return "";
			case 46:
				return "";
			case 18:
				return "RE_IK_UNI_V2_WARNING_A";
			case 19:
				return "RE_IK_UNI_V2_WARN_AGGRO";
			case 20:
				return "RE_IK_UNI_V2_WARNING_FEUD";
			case 21:
				return "RE_IK_UNI_V2_CLOSE_FOLLOW";
			case 22:
				if (func_379(1, 1))
				{
					return "RE_IK_UNI_V2_WARNING_FEUD";
				}
				else
				{
					return "RE_IK_UNI_V2_WARN_AGGRO";
				}
				break;
			case 23:
				return "RE_IK_UNI_V2_AGGRO_A";
			case 24:
				return "RE_IK_UNI_V2_AGGRO_B";
			case 25:
				return "RE_IK_UNI_V2_AGGRO_C";
			case 26:
				return "RE_IK_UNI_V2_AGGRO_D";
			case 27:
				return "RE_IK_UNI_V2_AGGRO_E";
			case 28:
				return "RE_IK_UNI_V2_AGGRO_F";
			case 29:
				return "RE_IK_UNI_V2_AGGRO_G";
			case 30:
				return "RE_IK_UNI_V2_AGGRO_H";
			case 97:
				return "RE_IK_UNI_V2_PLAYER_POS_A0";
			case 98:
				return "RE_IK_UNI_V2_PLAYER_POS_A";
			case 99:
				return "RE_IK_UNI_V2_PLAYER_NEG_A";
			case 100:
				return "CALLOUT_JUST_KILL_EM_MALE";
			case 101:
				return "CALLOUT_JUST_KILL_EM_NEUTRAL";
			case 116:
				return "RE_IK_UNI_V2_CONVO_A";
			case 117:
				return "RE_IK_UNI_V2_CONVO_A";
			case 118:
				return "RE_IK_UNI_V2_CONVO_B";
			case 119:
				return "RE_IK_UNI_V2_CONVO_B";
			case 120:
				return "RE_IK_UNI_V2_CONVO_C";
			case 121:
				return "RE_IK_UNI_V2_CONVO_C";
			case 122:
				return "RE_IK_UNI_V2_CONVO_D";
			case 123:
				return "RE_IK_UNI_V2_CLOSE";
			case 124:
				return "RE_IK_UNI_V2_CLOSE";
			case 126:
				return "SCARED_HELP";
			case 125:
				return "PANIC_HELP";
				switch (Local_314.f_51.f_4)
				{
					case 0:
					case 3:
					case 4:
						switch (iParam0)
						{
							case 53:
								return "RE_IK_UNI_V2_THANK_C1";
						}
						break;
					case 1:
					case 2:
					case 5:
					case 6:
					case 7:
						switch (iParam0)
						{
							case 53:
								return "RE_IK_UNI_V2_THANK_C2";
							default:
								break;
						}
						break;
				}
		}
	}
	return "No dialogue line!";
}

void func_162(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_333(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_380(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_381(iParam0->f_6, iParam0->f_5, 0);
			}
			func_382(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_235(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_163(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_383(iParam0, 13))
	{
		func_165(iParam0, 0);
	}
	else
	{
		func_384(iParam0, 0);
	}
	if (func_333(iParam0->f_6))
	{
		if (bParam2)
		{
			func_332(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_164(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_383(iParam0, 4))
		{
			func_332(&(iParam0->f_6), 1, 1);
			func_165(iParam0, 4);
		}
	}
	else if (func_383(iParam0, 4))
	{
		func_384(iParam0, 4);
		func_165(iParam0, 14);
	}
}

void func_165(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_166()
{
	if (!func_385(68) || !func_386(79, 0))
	{
		return 1;
	}
	return 0;
}

int func_167(var uParam0)
{
	if (!func_387(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_387(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

int func_168()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_169(var uParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_388(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_389(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_390(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_391(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_176(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return 0;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_388(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_389(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (iParam6 || func_392(&(uParam0->f_22)));
					Var2 = { func_388(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_389(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_390(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_0x772A1969F649E902(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_393(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_394(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return 0;
		}
	}
	return 1;
}

void func_170(int iParam0)
{
	char* sVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

bool func_171(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if ((func_395(iParam0, 8192) && func_395(iParam0, 16384)) && func_395(iParam0, 131072))
	{
		return joaat("weapon_revolver_cattleman");
	}
	bVar0 = WEAPON::_0xF8204EF17410BF43(joaat("group_pistol"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	bVar2 = joaat("weapon_shotgun_sawedoff");
	bVar3 = false;
	if (!func_395(iParam0, 16384))
	{
		bVar3 = iVar1;
	}
	if (!func_395(iParam0, 8192))
	{
		if (!func_396(bVar3) || WEAPON::_0xF2F585411E748B9C(bVar0, 0) > WEAPON::_0xF2F585411E748B9C(bVar3, 0))
		{
			bVar3 = bVar0;
		}
	}
	if (!func_395(iParam0, 131072) && func_397(bVar2))
	{
		if (!func_396(bVar3) || WEAPON::_0xF2F585411E748B9C(bVar2, 0) > WEAPON::_0xF2F585411E748B9C(bVar3, 0))
		{
			bVar3 = bVar2;
		}
	}
	if (!func_396(bVar3))
	{
		return joaat("weapon_revolver_cattleman");
	}
	return bVar3;
}

bool func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_398(iParam3, 1);
	bVar1 = func_398(iParam3, 2);
	bVar2 = !func_398(iParam3, 4);
	bVar3 = func_398(iParam3, 8);
	bVar4 = !func_398(iParam3, 16);
	bVar5 = func_398(iParam3, 32);
	bVar6 = func_398(iParam3, 64);
	return func_399(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_173(int iParam0)
{
	func_400(iParam0, 256);
}

void func_174(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
}

void func_175(bool bParam0)
{
	func_401(1, !bParam0);
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_402(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_177(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_403(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_178(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("empty"));
	}
}

void func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		uVar0 = func_404(iParam0);
		func_405(iParam0, iParam1, iParam2, uVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_180(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 8);
	}
	else
	{
		func_69(&(uParam0->f_1), 8);
	}
}

void func_181(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 4);
	}
	else
	{
		func_69(&(uParam0->f_1), 4);
	}
}

void func_182(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_345(&(uParam0->f_1), 2);
	}
	else
	{
		func_69(&(uParam0->f_1), 2);
	}
}

void func_183(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_184(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_183(uParam0, iParam1, iParam3);
	func_406(uParam0, iParam2, iParam3);
}

Vector3 func_185(var uParam0)
{
	return uParam0->f_51;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_187()
{
	return &Global_1935436 == 2;
}

void func_188(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_189(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_45(iParam0, 2))
	{
		func_408(iParam0, func_407(iParam1));
	}
	else
	{
		func_410(iParam0, func_409());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_411(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_412(iParam0, 0);
	func_413(iParam0);
	func_414(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_45(iParam0, 16))
	{
		func_190(iParam0, 0, 0, 0, 0);
	}
}

void func_190(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_415() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_41(iVar1) && !func_45(iVar1, iParam2)) && (!bParam3 || !func_207(iVar1))) && (!bParam4 || !func_416(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_417(iVar0);
			}
		}
		iVar0++;
	}
}

int func_191(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_192(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_352(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_45(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_418(2, -1, 0, 0, 0);
			}
			else
			{
				func_418(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_418(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_419(1, uParam0->f_177))
				{
					func_420(16, uParam0->f_177);
					func_421(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_422(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_418(8, -1, 0, 0, 0);
	}
}

int func_193()
{
	if (func_396(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_423())
		{
			return 1;
		}
	}
	return 0;
}

bool func_194(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

float func_195(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_45(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_45(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_45(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_45(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_45(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_45(uParam0->f_3, 1))
		{
		}
		else if (func_45(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_196(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_424(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_425(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_426() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_197(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_72(uParam0);
	return 1;
}

bool func_198()
{
	return (Global_1894899 & 1 != 0 && func_209() != -1);
}

int func_199(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_200(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_427(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_429(func_428());
	if (func_5(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_5(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_202(int iParam0, int iParam1)
{
	return (func_191(iParam0) && iParam1) != 0;
}

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_430(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_431(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_432(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_433(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_434(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_435(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_436(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_204(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_437(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_206(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_438())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_439(&(Global_1898164->f_1[0 /*5*/]));
		if (func_440(iVar0) && func_441(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_442(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_207(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0;
	}
	if (func_443(64) && func_444(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

bool func_208()
{
	return Global_1894899 & 4 != 0;
}

int func_209()
{
	return Global_1894899->f_2;
}

int func_210(int iParam0)
{
	if (!func_104(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_211(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_212(vector3 vParam0, int iParam3)
{
	if (!func_211(iParam3))
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_213(vector3 vParam0)
{
	float fVar0;

	if (func_142(vParam0))
	{
		return false;
	}
	fVar0 = func_100(func_198(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_214(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_243(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_243(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_247(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_445(uParam0, fParam2))
		{
			return 1;
		}
		if (func_247(uParam0))
		{
			func_307(uParam0);
		}
	}
	return 0;
}

bool func_215(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_216(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_142(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_362(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_217(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0f;
	}
	if (!func_446(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_218()
{
	return "unnamed";
}

char* func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_220(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_353(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

int func_221()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uLocal_873[0]), -1380852982) || func_266(&(uLocal_873[0]), &(uLocal_873[4])))
	{
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_873[0])))
	{
		if (func_245(&(uLocal_873[4]), &(uLocal_873[0]), 1, 1) <= 2f || func_245(&(uLocal_873[4]), &(uLocal_873[1]), 1, 1) <= 2f)
		{
			return 1;
		}
	}
	return 0;
}

void func_222(int iParam0)
{
	if (bLocal_1138 != iParam0)
	{
		bLocal_1138 = iParam0;
		if (bLocal_1138)
		{
		}
	}
}

int func_223()
{
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_873[0]))) && (PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_873[1]))))
	{
		MAP::REMOVE_BLIP(uLocal_880[0]);
		MAP::REMOVE_BLIP(uLocal_880[1]);
		return 1;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_873[0]))) && PED::_0x3AA24CCC0D451379(&(uLocal_873[1])))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_873[1]), Global_35, 4, 0, -1082130432, -1, 0);
		MAP::REMOVE_BLIP(uLocal_880[0]);
		MAP::REMOVE_BLIP(uLocal_880[1]);
		return 1;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true) || PED::IS_PED_FATALLY_INJURED(&(uLocal_873[1]))) && PED::_0x3AA24CCC0D451379(&(uLocal_873[0])))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_873[0]), Global_35, 4, 0, -1082130432, -1, 0);
		MAP::REMOVE_BLIP(uLocal_880[0]);
		MAP::REMOVE_BLIP(uLocal_880[1]);
		return 1;
	}
	if (PED::_0x3AA24CCC0D451379(&(uLocal_873[0])) && PED::_0x3AA24CCC0D451379(&(uLocal_873[1])))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_873[0]), Global_35, 4, 0, -1082130432, -1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(uLocal_873[1]), Global_35, 4, 0, -1082130432, -1, 0);
		MAP::REMOVE_BLIP(uLocal_880[0]);
		MAP::REMOVE_BLIP(uLocal_880[1]);
		return 1;
	}
	return 0;
}

void func_224(int iParam0, var uParam1)
{
	if (iParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_447();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_448(iParam0, 0);
	*uParam1 = 0;
	iParam0->f_16 = 0;
}

int func_225(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_449(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_320(uParam0[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_226()
{
	if (iLocal_14 == 0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_873[4]), Global_35, 1, 1) && func_245(&(uLocal_873[4]), &(uLocal_873[0]), 1, 1) <= 5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_227()
{
	if (iLocal_14 == 0)
	{
		if ((ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_109, 0) && iLocal_952 == 0) && iLocal_968 == 0)
		{
			if (iLocal_937 == 0)
			{
				if (fLocal_929 < 0.8f)
				{
					if (iLocal_968 == 0)
					{
						iLocal_968 = 1;
						PED::_0x2208438012482A1A(&(uLocal_873[4]), false, false);
						TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[12 /*2*/]), (Local_701[12 /*2*/])->f_1, 1.5f, -1.5f, -1, 8198, 0, 0, 0, 0, 0, 0);
					}
				}
			}
			if (fLocal_929 >= 0.8f && fLocal_929 < 0.95f)
			{
				if (iLocal_952 == 0)
				{
					iLocal_952 = 1;
					func_279(&(uLocal_873[4]), 1, 1);
					TASK::_0xF0B4F759F35CC7F5(&(uLocal_873[4]), ENTITY::_0x34F008A7E48C496B(&(uLocal_873[4]), 1), 0, 0, 1);
					PED::SET_PED_KEEP_TASK(&(uLocal_873[4]), true);
				}
			}
			if (fLocal_929 >= 0.95f)
			{
				if (iLocal_952 == 0)
				{
					iLocal_952 = 1;
					func_279(&(uLocal_873[4]), 1, 1);
					TASK::_0xF0B4F759F35CC7F5(&(uLocal_873[4]), ENTITY::_0x34F008A7E48C496B(&(uLocal_873[4]), 1), &(uLocal_873[0]), 0, 5);
					PED::SET_PED_KEEP_TASK(&(uLocal_873[4]), true);
				}
			}
			if (fLocal_929 >= 0.59f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[5])))
				{
					AUDIO::STOP_PED_SPEAKING(&(uLocal_873[5]), true);
					func_244(&(uLocal_873[5]), 0);
					func_60(&(uLocal_873[5]), 1, 0);
				}
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_109, "Female", &(uLocal_873[4]));
		}
	}
}

void func_228(int iParam0)
{
	iLocal_887 = iParam0;
}

int func_229(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_450(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

float func_230(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && func_451(iParam0))
	{
		return 50f;
	}
	return 30f;
}

int func_231(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_452(&iVar0);
	if (func_5(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_453(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_5(iVar0, 134217728))
	{
		func_454(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_455(558))
				{
					func_456(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

void func_232(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_245(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2108, iParam5, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

int func_233(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_457(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_458(fParam0))
	{
		return 0;
	}
	return 1;
}

int func_234(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!func_247(&uLocal_1022))
	{
		func_243(&uLocal_1022);
	}
	else if (func_236(&uLocal_1022) > fParam3)
	{
		func_286(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_307(&uLocal_1022);
		return 1;
	}
	return 0;
}

void func_235(int* iParam0, char* sParam1)
{
	if (func_333(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_381(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_384(iParam0, 1);
}

float func_236(var uParam0)
{
	if (!func_247(uParam0))
	{
		return 0f;
	}
	if (func_459(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_426() - uParam0->f_1);
}

int func_237(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_245(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_460(iVar0, 0)))
		{
			if (func_461(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_238(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1.5f)
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_5(iParam2, 1))
		{
			return 0;
		}
		iVar0 = Global_1935630->f_40;
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) >= 1.5f)
		{
			return 0;
		}
	}
	if (func_5(iParam2, 8))
	{
		if (fParam1 <= 25f)
		{
			if (func_462(Global_35, iParam0) < 6f)
			{
				if (!PED::IS_PED_FACING_PED(Global_35, iParam0, 40f))
				{
					return 0;
				}
			}
		}
	}
	else if (!PED::IS_PED_FACING_PED(Global_35, iParam0, fParam1))
	{
		return 0;
	}
	bVar1 = func_463(Global_35, 1, 0, 0);
	if (bVar1 != joaat("weapon_unarmed"))
	{
		if (func_5(iParam2, 2) && func_5(iParam2, 4))
		{
			if (!WEAPON::_0xD955FEE4B87AFA07(bVar1) && !WEAPON::_0x0556E9D2ECF39D01(bVar1))
			{
				return 0;
			}
		}
		else if (func_5(iParam2, 2))
		{
			if (!WEAPON::_0xD955FEE4B87AFA07(bVar1))
			{
				return 0;
			}
		}
		else if (func_5(iParam2, 4))
		{
			if (!WEAPON::_0x0556E9D2ECF39D01(bVar1))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_239(int iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_307(&(iParam0->f_18));
}

void func_240()
{
	if (iLocal_983 == 0)
	{
		if (func_464(Local_314.f_51, 1) > 100f)
		{
			(Local_260[1 /*17*/])->f_13 = func_161(113);
			iLocal_983 = 1;
		}
	}
}

void func_241(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_114() != -1)
	{
		return;
	}
	if ((Global_36615 && func_402(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_465(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_466(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_467(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_466(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_242(int iParam0)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_243(var uParam0)
{
	func_468(uParam0, 0f);
}

void func_244(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

float func_245(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_246()
{
	if (ANIMSCENE::_0x477122B8D05E7968(Local_109, 1, 0) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_109, 0))
	{
		switch (iLocal_14)
		{
			case 0:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_109, "PBL_ACTION_V1", true);
				break;
			case 1:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_109, "PBL_ACTION_V2", true);
				break;
		}
		ANIMSCENE::START_ANIM_SCENE(Local_109);
	}
}

bool func_247(var uParam0)
{
	return func_469(*uParam0, 1);
}

void func_248()
{
	switch (iLocal_916)
	{
		case 0:
			if (func_84(&(uLocal_873[4]), 1, 0) <= 120f)
			{
				func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_286(&(uLocal_873[5]), &(uLocal_873[0]), func_161(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_256(1515458263, &(uLocal_873[4]), 1);
				func_243(&uLocal_1052);
				iLocal_916++;
			}
			break;
		case 1:
			if (func_236(&uLocal_1052) > 1f)
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[5]), func_161(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_286(&(uLocal_873[1]), &(uLocal_873[5]), func_161(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_243(&uLocal_1052);
				iLocal_916++;
			}
			break;
		case 2:
			if (func_233(-3f, 1, &(uLocal_873[5]), 1) && func_233(-3f, 1, &(uLocal_873[4]), 1))
			{
				func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_256(1515458263, &(uLocal_873[4]), 1);
				iLocal_916++;
			}
			break;
		case 3:
			if (func_233(-3f, 1, &(uLocal_873[1]), 1) && func_233(-3f, 1, &(uLocal_873[4]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[5]), func_161(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_916++;
			}
			break;
	}
}

int func_249()
{
	switch (iLocal_908)
	{
		case 0:
			if (func_84(&(uLocal_873[4]), 1, 0) <= 110f)
			{
				func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_256(1515458263, &(uLocal_873[4]), 1);
				iLocal_908++;
			}
			break;
		case 1:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1))
			{
				func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_256(1515458263, &(uLocal_873[4]), 1);
				iLocal_908++;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_250(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_195(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_193())
	{
		bVar1 = true;
		fVar3 = func_100(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_196(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_196(uParam0->f_121[0 /*9*/], fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_197(&(uParam0->f_121), iParam4, fParam1))
		{
			func_72(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_124(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_71(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_72(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_124(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_251(vector3 vParam0, float fParam3)
{
	var uVar0;

	uVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam0, 0f, 0f, 0f, fParam3, fParam3, fParam3);
	return uVar0;
}

void func_252()
{
	int iVar0;
	int iVar1;

	switch (iLocal_897)
	{
		case 0:
			if (func_253())
			{
				iLocal_897 = 1;
			}
			break;
		case 1:
			if (iLocal_887 != 4 && iLocal_887 != 5)
			{
				WEAPON::GET_CURRENT_PED_WEAPON(&(uLocal_873[1]), &iVar0, true, 0, false);
				WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_873[1]), joaat("weapon_shotgun_doublebarrel"), false, 0, false, false);
				if (PED::IS_PED_ON_MOUNT(&(uLocal_873[1])))
				{
					func_172(&(uLocal_873[1]), joaat("weapon_shotgun_doublebarrel"), 999, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
				if (iVar0 == joaat("weapon_unarmed"))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("firing_pattern_burst_fire"), 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[1]), iLocal_994);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				iLocal_897 = 2;
			}
			else if (PED::IS_PED_ON_MOUNT(&(uLocal_873[1])))
			{
				func_172(&(uLocal_873[1]), joaat("weapon_shotgun_doublebarrel"), 999, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
				TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, &(uLocal_873[0]), Global_35, 0, 20000, 1056964608, 1073741824, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[1]), iLocal_994);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				iLocal_897 = 3;
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(&(uLocal_873[1]), &iVar1, true, 0, false);
				WEAPON::SET_CURRENT_PED_WEAPON(&(uLocal_873[1]), joaat("weapon_shotgun_doublebarrel"), false, 0, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
				if (iVar1 == joaat("weapon_unarmed"))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("firing_pattern_burst_fire"), 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[1]), iLocal_994);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				iLocal_897 = 2;
			}
			break;
		case 2:
			if (!func_253())
			{
				iLocal_897 = 0;
			}
			break;
		case 3:
			PED::SET_PED_RESET_FLAG(&(uLocal_873[1]), 27, true);
			if (!func_253())
			{
				iLocal_897 = 0;
			}
			break;
	}
}

int func_253()
{
	if ((func_245(&(uLocal_873[0]), Global_35, 1, 1) <= IntToFloat(iLocal_925) || func_245(&(uLocal_873[1]), Global_35, 1, 1) <= IntToFloat(iLocal_925)) && !func_80())
	{
		if (((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uLocal_873[0]), Global_35, 17) || PED::IS_PED_FACING_PED(&(uLocal_873[0]), Global_35, 80f)) || func_245(&(uLocal_873[0]), Global_35, 1, 1) <= 20f) || ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(&(uLocal_873[1]), Global_35, 17) || PED::IS_PED_FACING_PED(&(uLocal_873[1]), Global_35, 80f)) || func_245(&(uLocal_873[1]), Global_35, 1, 1) <= 20f))
		{
			return 1;
		}
	}
	return 0;
}

int func_254()
{
	switch (iLocal_908)
	{
		case 0:
			if (fLocal_929 >= 0.62f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[0])) || !ENTITY::IS_ENTITY_DEAD(&(uLocal_873[1])))
				{
					func_286(&(uLocal_873[4]), &(uLocal_873[1]), func_161(44), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				func_256(1515458263, &(uLocal_873[4]), 1);
				iLocal_908++;
			}
			break;
		case 1:
			if (fLocal_929 >= 0.72f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[0])) || !ENTITY::IS_ENTITY_DEAD(&(uLocal_873[1])))
				{
					func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_908++;
			}
			break;
		case 2:
			if (fLocal_929 >= 0.75f)
			{
				if (func_233(-3f, 1, &(uLocal_873[1]), 1) && func_233(-3f, 1, &(uLocal_873[4]), 1))
				{
					func_286(&(uLocal_873[1]), &(uLocal_873[4]), func_161(45), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_908++;
					TASK::TASK_MOUNT_ANIMAL(&(uLocal_873[1]), &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
				}
			}
			break;
		case 3:
			if (fLocal_929 >= 0.91f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[0])) || !ENTITY::IS_ENTITY_DEAD(&(uLocal_873[1])))
				{
					func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(46), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_908++;
				func_256(1515458263, &(uLocal_873[4]), 1);
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_255()
{
	func_232(&(uLocal_873[1]), Global_35, &uLocal_117, 20, 15, 51);
	switch (iLocal_903)
	{
		case 0:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[1]), 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[0]), 1000);
			Local_314.f_44 = 1;
			if (iLocal_969 == 0)
			{
				func_286(&(uLocal_873[1]), Global_35, func_161(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_903++;
				func_243(&uLocal_1037);
				iLocal_889 = 1;
				iLocal_890 = 0;
				func_164(Local_187[0 /*17*/], 0);
				func_164(Local_187[1 /*17*/], 0);
				(Local_187[0 /*17*/])->f_13 = func_161(98);
				func_235(Local_187[0 /*17*/], "RE_INTER_DEFUSE");
				(Local_187[1 /*17*/])->f_13 = func_161(99);
				func_235(Local_187[1 /*17*/], "INTERACT_INTERVENE");
				func_163(Local_187[0 /*17*/], 1, 0);
				func_163(Local_187[1 /*17*/], 1, 0);
			}
			iLocal_925 = 15;
			break;
		case 1:
			if (!func_470())
			{
				if ((!func_471(PLAYER::PLAYER_ID(), &(uLocal_873[1]), Local_144[1 /*21*/]) || !func_471(PLAYER::PLAYER_ID(), &(uLocal_873[0]), Local_144[0 /*21*/])) || func_233(0f, 1, 0, 0))
				{
					if (func_233(-3f, 1, 0, 0) && !func_470())
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[1]), 1000);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[0]), 1000);
						func_286(&(uLocal_873[4]), Global_35, func_161(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_256(1891783641, &(uLocal_873[4]), 1);
						iLocal_903++;
					}
				}
			}
			break;
		case 2:
			if (func_233(-5f, 1, 0, 0))
			{
				if (iLocal_887 == 4)
				{
					if (func_472())
					{
						func_227();
						iLocal_903++;
						func_228(6);
					}
				}
				else
				{
					func_227();
					iLocal_903++;
					func_228(6);
				}
			}
			break;
	}
}

void func_256(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, uParam1);
}

int func_257()
{
	switch (iLocal_902)
	{
		case 0:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-3f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[4]), func_161(47), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_902++;
			}
			break;
		case 1:
			if (func_233(-4f, 1, 0, 0) && !PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[4]), true))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(49), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_902++;
			}
			break;
		case 2:
			if ((func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, &(uLocal_873[0]), 1)) && ENTITY::_0x61914209C36EFDDB(&(uLocal_873[4])) == 7)
			{
				func_286(&(uLocal_873[4]), &(uLocal_873[0]), func_161(48), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_256(1515458263, &(uLocal_873[4]), 1);
				iLocal_902++;
			}
			break;
		case 3:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_258()
{
	int iVar0;

	if (!func_247(&uLocal_1071))
	{
		func_243(&uLocal_1071);
	}
	if (!func_247(&uLocal_1074))
	{
		func_243(&uLocal_1074);
	}
	if (func_283(&(uLocal_873[4]), func_282(&(uLocal_873[0]))) || func_283(&(uLocal_873[4]), func_282(&(uLocal_873[1]))))
	{
		if (func_236(&uLocal_1071) > 15f)
		{
			if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[4]), false, false), 10f, 1, 1, &iVar0, 1, 1, 1, -1) || func_236(&uLocal_1074) > IntToFloat(iLocal_1083))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iLocal_1083 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
					switch (iLocal_1070)
					{
						case 0:
							func_473(0);
							func_286(&(uLocal_873[4]), Global_35, func_161(130), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_243(&uLocal_1071);
							iLocal_1070++;
							break;
						case 1:
							func_473(0);
							func_286(&(uLocal_873[4]), Global_35, func_161(126), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_243(&uLocal_1071);
							iLocal_1070++;
							break;
						case 2:
							func_473(0);
							func_286(&(uLocal_873[4]), Global_35, func_161(131), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_243(&uLocal_1071);
							iLocal_1070++;
							break;
						case 3:
							func_473(0);
							func_286(&(uLocal_873[4]), Global_35, func_161(125), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 1);
							func_243(&uLocal_1071);
							iLocal_1070 = 0;
							break;
					}
				}
			}
		}
	}
}

void func_259()
{
	int iVar0;

	if (!func_247(&uLocal_1077))
	{
		func_243(&uLocal_1077);
	}
	if (!func_247(&uLocal_1080))
	{
		func_243(&uLocal_1080);
	}
	if (func_283(&(uLocal_873[4]), func_282(Global_35)))
	{
		if (iLocal_985 == 0)
		{
			func_241(2, 0, 0, 0, &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
			if (iLocal_957 == 0)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(60), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_957 = 1;
			}
			iLocal_985 = 1;
		}
		if (iLocal_1086 < 2)
		{
			if (func_236(&uLocal_1077) > IntToFloat(iLocal_1084))
			{
				if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[4]), false, false), 10f, 1, 0, &iVar0, 0, 1, 1, -1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_HUMAN(iVar0))
						{
							iLocal_938 = 1;
							iLocal_1084 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
							iLocal_1086++;
							func_286(&(uLocal_873[4]), Global_35, func_161(125), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 1);
							func_243(&uLocal_1077);
							func_243(&uLocal_1080);
						}
					}
				}
			}
		}
		if (func_233(0f, 1, &(uLocal_873[4]), 1))
		{
			if (func_236(&uLocal_1080) > IntToFloat(iLocal_1085))
			{
				switch (iLocal_1087)
				{
					case 0:
						func_286(&(uLocal_873[4]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
						func_243(&uLocal_1080);
						break;
					case 1:
						func_286(&(uLocal_873[4]), Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_938 = 1;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						func_243(&uLocal_1080);
						break;
					case 2:
						func_286(&(uLocal_873[4]), Global_35, "INTIMIDATED_AGAIN_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						func_243(&uLocal_1080);
						break;
					case 3:
						func_286(&(uLocal_873[4]), Global_35, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						func_243(&uLocal_1080);
						break;
					case 4:
						func_286(&(uLocal_873[4]), Global_35, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						func_243(&uLocal_1080);
						break;
					case 5:
						iLocal_1087 = 0;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						func_243(&uLocal_1080);
						break;
				}
			}
		}
		else
		{
			func_243(&uLocal_1080);
		}
	}
	else
	{
		func_243(&uLocal_1077);
		func_243(&uLocal_1080);
	}
}

float func_260(var uParam0)
{
	if (!func_247(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_459(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_426() - uParam0->f_1);
}

int func_261()
{
	if (func_262())
	{
		return 0;
	}
	switch (iLocal_917)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(116), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 1:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(117), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 2:
			if (func_233(-4f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(118), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 3:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(119), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 4:
			if (func_233(-4f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(120), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 5:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(121), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_262()
{
	switch (iLocal_899)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(&(uLocal_873[0]), 2401.58f, 1235.54f, 102.94f, 15f, 15f, 5f, false, true, 0))
			{
				iLocal_899 = 1;
			}
			break;
		case 1:
			return 1;
	}
	return 0;
}

void func_263()
{
	switch (iLocal_918)
	{
		case 0:
			if (func_233(0f, 1, &(uLocal_873[0]), 1) && func_233(0f, 1, &(uLocal_873[1]), 1))
			{
				if (!func_247(&uLocal_1064) || func_236(&uLocal_1064) > 3f)
				{
					func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(122), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_918++;
				}
			}
			else
			{
				func_243(&uLocal_1064);
			}
			break;
		case 1:
			if (func_233(0f, 1, &(uLocal_873[0]), 1) && func_233(0f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(123), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_918++;
			}
			break;
	}
}

void func_264()
{
	switch (iLocal_919)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[1]), 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_919++;
			}
			break;
		case 1:
			if (func_233(-5f, 1, 0, 0))
			{
				iLocal_919++;
				func_228(6);
			}
			break;
	}
}

void func_265()
{
	switch (iLocal_920)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[1]), 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_920++;
			}
			break;
		case 1:
			if (func_233(-5f, 1, 0, 0))
			{
				iLocal_920++;
				func_228(6);
			}
			break;
	}
}

int func_266(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_0x09B83E68DE004CD4(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_267()
{
	if (func_84(&(uLocal_873[0]), 1, 0) >= 100f && func_84(&(uLocal_873[1]), 1, 0) >= 100f)
	{
		return 1;
	}
	if (func_84(&(uLocal_873[0]), 1, 0) >= 100f && ENTITY::IS_ENTITY_DEAD(&(uLocal_873[1])))
	{
		return 1;
	}
	if (func_84(&(uLocal_873[1]), 1, 0) >= 100f && ENTITY::IS_ENTITY_DEAD(&(uLocal_873[0])))
	{
		return 1;
	}
	if (func_84(&(uLocal_873[0]), 1, 0) >= 100f && PED::_0x3AA24CCC0D451379(&(uLocal_873[1])))
	{
		return 1;
	}
	if (func_84(&(uLocal_873[1]), 1, 0) >= 100f && PED::_0x3AA24CCC0D451379(&(uLocal_873[0])))
	{
		return 1;
	}
	return 0;
}

void func_268(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_269()
{
	switch (iLocal_896)
	{
		case 0:
			iLocal_999 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(&(uLocal_873[0]), iLocal_999, 0);
			iLocal_896 = 1;
			break;
		case 1:
			if (PED::DOES_GROUP_EXIST(iLocal_999) && PED::_0x0455546F23FF08E4(iLocal_999))
			{
				PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_873[1]), iLocal_999);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[1]), 279, true);
				iLocal_896 = 2;
			}
			break;
		case 2:
			if (func_166())
			{
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_63, 15f, 2f, 528, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_63, 1f, -1, 0.25f, 1048580, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, &(uLocal_873[4]));
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_143, 0, 71304200, -1, 0, 0, -1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, &(uLocal_873[4]), 2298.34f, 1462.5f, 82.18f, 1f, 0);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, 0, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[0]), iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[1]), iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 3;
			}
			else
			{
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 2f, 528, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[0]), iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[1]), iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 3:
			if (TASK::GET_SEQUENCE_PROGRESS(&(uLocal_873[0])) >= 4 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(&(uLocal_873[1]), false, false), vLocal_63, true) < 10f)
			{
				PED::REMOVE_PED_FROM_GROUP(&(uLocal_873[1]));
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_143, 0, 71304200, -1, 0, 0, -1);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, 0, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[1]), iLocal_994);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 4:
			break;
	}
}

int func_270()
{
	if (func_262())
	{
		return 0;
	}
	if (iLocal_890 == 1 || iLocal_890 == 2)
	{
		return 0;
	}
	if (func_233(-4f, 1, &(uLocal_873[0]), 1) && func_233(-4f, 1, &(uLocal_873[0]), 1))
	{
		if (func_247(&uLocal_1064))
		{
			if (func_236(&uLocal_1064) < 4f)
			{
				return 0;
			}
			else
			{
				func_307(&uLocal_1064);
			}
		}
	}
	else if (func_247(&uLocal_1064))
	{
		func_243(&uLocal_1064);
	}
	switch (iLocal_917)
	{
		case 0:
			iLocal_917++;
			break;
		case 1:
			iLocal_917++;
			break;
		case 2:
			iLocal_917++;
			break;
		case 3:
			if (func_233(0f, 1, &(uLocal_873[0]), 1) && func_233(0f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(116), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 4:
			if (func_233(0f, 1, &(uLocal_873[0]), 1) && func_233(0f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(117), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 5:
			if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(118), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 6:
			if (func_233(0f, 1, &(uLocal_873[0]), 1) && func_233(0f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(119), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 7:
			if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(120), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 8:
			if (func_233(0f, 1, &(uLocal_873[0]), 1) && func_233(0f, 1, &(uLocal_873[1]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(121), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 9:
			if (func_233(0f, 1, &(uLocal_873[1]), 1) && func_233(0f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(122), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_271()
{
	switch (iLocal_918)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(123), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_918++;
			}
			break;
		case 1:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				func_286(&(uLocal_873[1]), &(uLocal_873[0]), func_161(124), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_918++;
			}
			break;
	}
}

void func_272()
{
	switch (iLocal_903)
	{
		case 0:
			Local_314.f_44 = 1;
			iLocal_903++;
			iLocal_925 = 15;
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[1]), 1000);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[0]), 0);
			func_286(&(uLocal_873[0]), Global_35, func_161(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_243(&uLocal_1064);
			if (iLocal_969 == 0)
			{
				func_243(&uLocal_1037);
				iLocal_889 = 1;
				iLocal_890 = 0;
				func_164(Local_187[0 /*17*/], 0);
				func_164(Local_187[1 /*17*/], 0);
				(Local_187[0 /*17*/])->f_13 = func_161(98);
				func_235(Local_187[0 /*17*/], "RE_INTER_DEFUSE");
				(Local_187[1 /*17*/])->f_13 = func_161(99);
				func_235(Local_187[1 /*17*/], "RE_INTER_ANTAGONIZE");
				func_163(Local_187[0 /*17*/], 1, 0);
				func_163(Local_187[1 /*17*/], 1, 0);
			}
			break;
		case 1:
			if (!func_470())
			{
				if ((!func_471(PLAYER::PLAYER_ID(), &(uLocal_873[1]), Local_144[1 /*21*/]) || !func_471(PLAYER::PLAYER_ID(), &(uLocal_873[0]), Local_144[0 /*21*/])) || func_233(0f, 1, 0, 0))
				{
					if (func_233(-3f, 1, 0, 0))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[1]), 0);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(&(uLocal_873[0]), 1000);
						func_286(&(uLocal_873[1]), Global_35, func_161(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_256(1891783641, &(uLocal_873[4]), 1);
						func_243(&uLocal_1064);
						iLocal_903++;
					}
				}
			}
			break;
		case 2:
			if (func_233(-6f, 1, 0, 0))
			{
				if (iLocal_887 == 5)
				{
					func_227();
					iLocal_903++;
					func_228(6);
				}
				else
				{
					func_227();
					iLocal_903++;
					func_228(6);
				}
			}
			break;
	}
}

void func_273()
{
	switch (iLocal_919)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				if (!func_262())
				{
					func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				iLocal_919++;
			}
			break;
		case 1:
			if (func_233(-5f, 1, 0, 0))
			{
				iLocal_919++;
				func_228(6);
			}
			break;
	}
}

void func_274()
{
	switch (iLocal_920)
	{
		case 0:
			if (func_233(-4f, 1, &(uLocal_873[0]), 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				func_286(&(uLocal_873[0]), &(uLocal_873[1]), func_161(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_920++;
			}
			break;
		case 1:
			if (func_233(-5f, 1, 0, 0))
			{
				iLocal_920++;
				func_228(6);
			}
			break;
	}
}

void func_275()
{
	switch (iLocal_896)
	{
		case 0:
			iLocal_999 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(&(uLocal_873[0]), iLocal_999, 0);
			iLocal_896 = 1;
			break;
		case 1:
			if (((PED::DOES_GROUP_EXIST(iLocal_999) && PED::_0x0455546F23FF08E4(iLocal_999)) && PED::IS_PED_ON_MOUNT(&(uLocal_873[0]))) && PED::IS_PED_ON_MOUNT(&(uLocal_873[1])))
			{
				PED::SET_PED_AS_GROUP_MEMBER(&(uLocal_873[1]), iLocal_999);
				PED::SET_PED_CONFIG_FLAG(&(uLocal_873[1]), 279, true);
				iLocal_896 = 2;
			}
			break;
		case 2:
			if (func_166())
			{
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_63, 15f, 2f, 528, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_63, 1f, -1, 0.25f, 1048580, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.05f, 1376.64f, 105.33f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.36f, 1384.05f, 105.8f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, 0, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[0]), iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[1]), iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 3;
			}
			else
			{
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[3]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 2f, 528, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[0]), iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, &(uLocal_873[2]), 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[1]), iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 3:
			if (TASK::GET_SEQUENCE_PROGRESS(&(uLocal_873[0])) >= 4)
			{
				PED::REMOVE_PED_FROM_GROUP(&(uLocal_873[1]));
				if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.05f, 1376.64f, 105.33f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.36f, 1384.05f, 105.8f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, 0, 0, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[1]), iLocal_994);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_276()
{
	var uVar0[2];
	int iVar3;

	if (iLocal_967 == 0)
	{
		uVar0[0] = &uLocal_873[0];
		uVar0[1] = &uLocal_873[1];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(uVar0[iVar3])))
			{
				func_320(&(uVar0[iVar3]), 0, &(Local_314.f_5), &iLocal_1134, 0, 0);
				if (PED::_0x3AA24CCC0D451379(&(uVar0[iVar3])) || PED::_0x9682F850056C9ADE(&(uVar0[iVar3])))
				{
					if (iLocal_959 == 0)
					{
						iLocal_959 = 1;
						iLocal_905 = 1;
					}
				}
				if (iLocal_1134 == 8)
				{
					if (iLocal_960 == 0)
					{
						iLocal_960 = 1;
						iLocal_905 = 3;
					}
				}
				if (((((((iLocal_1134 == 4 || iLocal_1134 == 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uVar0[iVar3]), Global_35, 1, 1)) || iLocal_1134 == 0) || iLocal_1134 == 8192) || iLocal_1134 == 256) || iLocal_1134 == 2) || iLocal_1134 == 2048)
				{
					if (iLocal_962 == 0)
					{
						iLocal_962 = 1;
						iLocal_905 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(&(uVar0[iVar3]), 500) || PED::_0xD0B7AEB56229D317(Global_35) == &uVar0[iVar3])
				{
					if (iLocal_961 == 0)
					{
						iLocal_961 = 1;
						iLocal_905 = 2;
					}
				}
				if (iLocal_14 == 0)
				{
					if (ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
					{
						if (iLocal_971 == 0)
						{
							iLocal_971 = 1;
							iLocal_905 = 4;
						}
					}
				}
				switch (iLocal_905)
				{
					case 0:
						if (func_234(&(uVar0[iVar3]), Global_35, func_161(23), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 1:
						if (func_234(&(uVar0[iVar3]), Global_35, func_161(24), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 2:
						if (func_234(&(uVar0[iVar3]), Global_35, func_161(25), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 3:
						if (func_234(&(uVar0[iVar3]), Global_35, func_161(26), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 4:
						if (func_234(&(uVar0[iVar3]), Global_35, func_161(27), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
				}
			}
			iVar3++;
		}
	}
}

void func_277()
{
	switch (iLocal_922)
	{
		case 0:
			if (func_234(&(uLocal_873[4]), Global_35, func_161(127), 3f))
			{
				iLocal_922++;
			}
			break;
		case 1:
			if (func_234(&(uLocal_873[4]), Global_35, func_161(127), 4f))
			{
				iLocal_922++;
			}
			break;
		case 2:
			if (func_234(&(uLocal_873[4]), Global_35, func_161(127), 6f))
			{
				iLocal_922++;
			}
			break;
		case 3:
			if (func_234(&(uLocal_873[4]), Global_35, func_161(127), 8f))
			{
				iLocal_922++;
			}
			break;
	}
}

void func_278()
{
	float fVar0;
	float fVar1;

	switch (iLocal_895)
	{
		case 0:
			if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[0]), true))
			{
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_880[0])))
				{
					uLocal_880[0] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), &(uLocal_873[0]));
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(&(uLocal_873[1]), true))
			{
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_880[1])))
				{
					uLocal_880[1] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), &(uLocal_873[1]));
				}
			}
			func_474(uLocal_873[0]);
			func_31(Local_144[0 /*21*/], &Local_187);
			func_474(uLocal_873[1]);
			func_31(Local_144[1 /*21*/], &Local_187);
			func_243(&uLocal_1004);
			iLocal_895 = 1;
			break;
		case 1:
			if ((((iLocal_1134 == 4 || iLocal_1134 == 256) || iLocal_1134 == 1) || iLocal_1134 == 16) || iLocal_1134 == 2)
			{
				fVar0 = 0f;
				fVar1 = 0.2f;
			}
			if (iLocal_1134 == 0)
			{
				fVar0 = 0f;
				fVar1 = 0.5f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
			if (PED::_0xA911EE21EDF69DAF(&(uLocal_873[0])))
			{
				func_279(&(uLocal_873[4]), 1, 1);
			}
			if ((((iLocal_1134 == 4 || iLocal_1134 == 256) || iLocal_1134 == 1) || iLocal_1134 == 16) || iLocal_1134 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[0]), iLocal_993, fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
			if ((((iLocal_1134 == 4 || iLocal_1134 == 256) || iLocal_1134 == 1) || iLocal_1134 == 16) || iLocal_1134 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
			TASK::_TASK_PERFORM_SEQUENCE_2(&(uLocal_873[1]), iLocal_994, fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
			iLocal_895 = 2;
			break;
		case 2:
			break;
	}
}

void func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

int func_280(int iParam0)
{
	return func_475(iParam0, 3);
}

void func_281(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, 0, 0, 0);
	}
	if (bParam22)
	{
		func_476(iParam0, iParam1, iParam18);
	}
}

int func_282(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

int func_283(int iParam0, int iParam1)
{
	if (ENTITY::_0x61914209C36EFDDB(iParam0) == 7)
	{
		if (func_477(iParam1) == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, 0, 0))
			{
				if (iLocal_957 == 0)
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(60), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_957 = 1;
				}
				iLocal_906++;
			}
			break;
		case 1:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(61), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 2:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(62), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 3:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(63), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906 = 20;
				iLocal_938 = 1;
			}
			break;
		case 4:
			if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 5:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 6:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(66), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 7:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				if (iLocal_985 == 0)
				{
					func_241(2, 0, 0, 0, &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
					iLocal_985 = 1;
				}
				iLocal_938 = 1;
				iLocal_906 = 20;
			}
			break;
		case 8:
			if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 9:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(69), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 10:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 11:
			if (func_233(3f, 1, &(uLocal_873[4]), 1) && func_233(3f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				if (iLocal_985 == 0)
				{
					func_241(2, 0, 0, 0, &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
					iLocal_985 = 1;
				}
				iLocal_938 = 1;
				iLocal_906 = 20;
			}
			break;
		case 12:
			func_473(0);
			if (func_233(-1f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(72), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
	}
}

void func_285()
{
	if (iLocal_984 == 0)
	{
		if (iLocal_14 == 0)
		{
			if (func_324() || FIRE::IS_ENTITY_ON_FIRE(&(uLocal_873[4])))
			{
				if (ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
				{
					func_228(11);
					func_164(Local_260[0 /*17*/], 1);
					func_164(Local_260[1 /*17*/], 1);
					func_241(4, 0, 0, "RE_HONOR_CRUEL_KILLING", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
					iLocal_984 = 1;
				}
			}
		}
	}
}

bool func_286(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_478(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_287()
{
	func_232(&(uLocal_873[4]), Global_35, &uLocal_117, -1, 15, 51);
	func_232(Global_35, &(uLocal_873[4]), &uLocal_117, -1, 15, 51);
}

void func_288()
{
	if (iLocal_940 == 0)
	{
		func_479(&(uLocal_873[4]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
	else
	{
		func_35(&(uLocal_873[4]), 1);
	}
	switch (iLocal_904)
	{
		case 0:
			iLocal_889 = 8;
			if (func_233(-4f, 1, &(uLocal_873[4]), 1) && func_236(&uLocal_1019) >= 3f)
			{
				iLocal_892 = 1;
				TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[1 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				if (func_286(&(uLocal_873[4]), Global_35, func_161(51), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
		case 1:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				if (func_286(&(uLocal_873[4]), Global_35, func_161(52), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
					func_243(&uLocal_1010);
				}
			}
			break;
		case 2:
			if (func_233(-1f, 1, 0, 0) && iLocal_953 == 0)
			{
				iLocal_953 = 1;
				func_239(&iLocal_239, 0);
				iLocal_1128 = func_1(2, 0, 0);
				iLocal_889 = 5;
				iLocal_890 = 0;
				(Local_260[0 /*17*/])->f_13 = func_161(106);
				(Local_260[1 /*17*/])->f_13 = func_161(107);
				func_235(Local_260[0 /*17*/], "BEAT_GRT_POS");
				func_235(Local_260[1 /*17*/], "BEAT_GRT_NEG");
				func_164(Local_260[0 /*17*/], 0);
				func_164(Local_260[1 /*17*/], 0);
				func_163(Local_260[0 /*17*/], 1, 0);
				func_163(Local_260[1 /*17*/], 1, 0);
				func_384(Local_260[0 /*17*/], 8);
				func_384(Local_260[1 /*17*/], 8);
			}
			break;
		case 3:
			if (func_233(-4f, 1, Global_35, 1) && func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[2 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				if (func_286(&(uLocal_873[4]), Global_35, func_161(53), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
		case 4:
			if (func_233(-4f, 1, Global_35, 1) && func_233(-4f, 1, &(uLocal_873[4]), 1))
			{
				if (func_238(&(uLocal_873[4]), 90f, 0))
				{
					TASK::TASK_PLAY_ANIM(Global_35, &(Local_701[0 /*2*/]), (Local_701[9 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				}
				if (func_286(Global_35, &(uLocal_873[4]), func_161(54), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(&(uLocal_873[4]), 1, 0);
					func_228(8);
					iLocal_904++;
				}
			}
			break;
		case 5:
			if (iLocal_887 != 9)
			{
				if (bLocal_982 == 0)
				{
					if (func_233(-4f, 1, Global_35, 1) && func_233(-4f, 1, &(uLocal_873[4]), 1))
					{
						func_286(&(uLocal_873[4]), Global_35, func_161(59), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_164(Local_260[0 /*17*/], 0);
						func_164(Local_260[1 /*17*/], 0);
						func_163(Local_260[0 /*17*/], 0, 0);
						func_163(Local_260[1 /*17*/], 1, 0);
						bLocal_982 = true;
					}
				}
				if (bLocal_982)
				{
					if ((func_233(-4f, 1, Global_35, 1) && func_233(-4f, 1, &(uLocal_873[4]), 1)) && func_233(0f, 1, 0, 0))
					{
						if (!PED::IS_PED_ON_MOUNT(Global_35) && func_480(iLocal_998))
						{
							func_286(&(uLocal_873[4]), Global_35, func_161(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						}
						iLocal_904++;
					}
					if (func_481(Global_35) || func_292(Global_35))
					{
						iLocal_904++;
					}
				}
			}
			else
			{
				iLocal_904++;
			}
			break;
		case 6:
			iLocal_904 = -1;
			break;
		case 7:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1) && func_233(-4f, 1, Global_35, 1))
			{
				TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[10 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				if (func_286(&(uLocal_873[4]), Global_35, func_161(56), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
		case 8:
			if (func_233(-4f, 1, 0, 0))
			{
				iLocal_889 = 7;
				iLocal_890 = 0;
				(Local_260[0 /*17*/])->f_13 = func_161(102);
				(Local_260[1 /*17*/])->f_13 = func_161(103);
				func_163(Local_260[0 /*17*/], 1, 0);
				func_163(Local_260[1 /*17*/], 1, 0);
				func_228(9);
			}
			if (func_233(-2f, 1, &(uLocal_873[4]), 1))
			{
				if (func_286(&(uLocal_873[4]), Global_35, func_161(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
	}
}

void func_289()
{
	switch (iLocal_909)
	{
		case 0:
			if (func_233(-4f, 1, 0, 0))
			{
				TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[3 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				iLocal_909++;
			}
			break;
		case 1:
			if (func_233(2f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[3 /*2*/])->f_1, 1))
			{
				TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[4 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				iLocal_909++;
			}
			break;
		case 2:
			if (func_233(2f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[4 /*2*/])->f_1, 1))
			{
				TASK::TASK_PLAY_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[5 /*2*/])->f_1, 1.5f, -1.5f, -1, 67108880, 0, 0, 0, 0, 0, 0);
				iLocal_909++;
			}
			break;
		case 3:
			if (func_233(2f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_873[4]), &(Local_701[0 /*2*/]), (Local_701[5 /*2*/])->f_1, 1))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(78), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_909++;
				func_163(Local_260[0 /*17*/], 0, 0);
				func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
				iLocal_889 = 7;
				iLocal_890 = 0;
				func_164(Local_260[1 /*17*/], 0);
				(Local_260[1 /*17*/])->f_13 = func_161(103);
				func_163(Local_260[1 /*17*/], 1, 0);
				func_228(9);
			}
			break;
	}
}

void func_290()
{
	if (iLocal_935 == 1)
	{
		if (func_292(&(uLocal_873[4])))
		{
			if (func_299(&uLocal_89, Global_35, vLocal_60) || func_304(&uLocal_89, Global_35, 20, 1090519040 /* Float: 8f */))
			{
				if (!func_247(&uLocal_1013) && func_298() == 0)
				{
					func_243(&uLocal_1013);
					iLocal_927 = 5;
				}
			}
			if (!func_292(Global_35))
			{
				if (!func_247(&uLocal_1013))
				{
					func_243(&uLocal_1013);
					iLocal_927 = 7;
				}
			}
		}
		if (!func_293())
		{
			if (!func_247(&uLocal_1013))
			{
				func_243(&uLocal_1013);
				iLocal_927 = 15;
			}
		}
		if (iLocal_936 == 0)
		{
			if (iLocal_974 == 0)
			{
				if (func_292(&(uLocal_873[4])))
				{
					if (func_236(&uLocal_1013) >= IntToFloat(iLocal_927))
					{
						iLocal_936 = 1;
						func_40(sLocal_88, 7500, 0, 1, 0, 0, -1, -1, 0);
					}
				}
			}
		}
	}
}

void func_291()
{
	if (!PED::IS_PED_FACING_PED(&(uLocal_873[4]), Global_35, 50f) && !func_292(Global_35))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_873[4]), Global_35, 0, -1082130432, -1082130432, -1082130432);
	}
}

int func_292(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_293()
{
	if (!func_292(&(uLocal_873[4])))
	{
		return 0;
	}
	if (PED::GET_MOUNT(Global_35) != PED::GET_MOUNT(&(uLocal_873[4])))
	{
		return 0;
	}
	return 1;
}

void func_294(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7)
{
	float fVar0;

	fVar0 = func_100(bParam6, fParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_368(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_447();
			iParam4->f_2 = func_108(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_368(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_447();
		iParam4->f_2 = func_108(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

int func_295(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 0)
	{
		return (func_447() - *uParam0) >= iParam1;
	}
	return 0;
}

void func_296()
{
	iLocal_889 = 7;
	iLocal_890 = 0;
	func_235(Local_260[0 /*17*/], "RE_INTER_POS");
	func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
	func_164(Local_260[0 /*17*/], 0);
	func_164(Local_260[1 /*17*/], 0);
	(Local_260[0 /*17*/])->f_13 = func_161(102);
	(Local_260[1 /*17*/])->f_13 = func_161(103);
	func_163(Local_260[0 /*17*/], 0, 0);
	func_163(Local_260[1 /*17*/], 1, 0);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
	if (PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 4752, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
	TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_995);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
	if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
	{
		MAP::REMOVE_BLIP(uLocal_880[4]);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_997))
	{
		MAP::REMOVE_BLIP(&iLocal_997);
	}
	func_286(&(uLocal_873[4]), Global_35, func_161(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
	func_34();
	if (bLocal_87)
	{
		PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
		PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, false);
		func_36(&(uLocal_873[4]));
		bLocal_87 = false;
	}
	func_228(11);
}

void func_297(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 10000f;
	*uParam0 = 0;
}

int func_298()
{
	int iVar0;

	if (func_198())
	{
		iVar0 = func_482(0);
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				if (iVar0 == 4194304)
				{
					return 1;
				}
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				if (iVar0 == 2)
				{
					return 1;
				}
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_299(var uParam0, int iParam1, vector3 vParam2)
{
	if (func_483(Global_36, &(uParam0->f_4), 1f, 1, 0))
	{
		if (func_484(Global_35, uParam0->f_4, 10f, 1, 1))
		{
			if (PED::IS_PED_HEADING_TOWARDS_POSITION(iParam1, vParam2, 80f))
			{
				uParam0->f_3 = 0;
				func_307(&(uParam0->f_10));
				return 0;
			}
			if (PATHFIND::GET_GPS_BLIP_ROUTE_FOUND())
			{
				if (!MAP::_0xF47A1EB2A538A3A3())
				{
					uParam0->f_3 = 1;
				}
				else
				{
					uParam0->f_3 = 0;
					func_307(&(uParam0->f_10));
				}
			}
		}
		else if (!PED::IS_PED_HEADING_TOWARDS_POSITION(iParam1, vParam2, 80f))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(iParam1)) != 0f)
			{
				uParam0->f_3 = 1;
			}
		}
		else
		{
			uParam0->f_3 = 0;
			func_307(&(uParam0->f_10));
		}
	}
	if (uParam0->f_3 == 1)
	{
		if (!func_247(&(uParam0->f_10)))
		{
			func_243(&(uParam0->f_10));
		}
		else if (func_236(&(uParam0->f_10)) >= 3f)
		{
			if (uParam0->f_3 == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_300()
{
	switch (iLocal_911)
	{
		case 0:
			func_243(&uLocal_1016);
			func_243(&uLocal_1013);
			iLocal_911++;
			break;
		case 1:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 0f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(79), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_911++;
			}
			break;
		case 2:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(80), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_911++;
			}
			break;
		case 3:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(81), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_950 = 1;
				iLocal_911++;
			}
			break;
		case 4:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_306();
			}
			break;
	}
}

int func_301()
{
	switch (Local_314.f_51.f_4)
	{
		case 0:
			return 240;
		case 1:
			return 180;
		case 2:
			return 120;
		case 3:
			return 120;
		case 4:
			return 180;
		case 5:
			return 240;
		case 6:
			return 180;
		case 7:
			return 180;
	}
	return 240;
}

int func_302(var uParam0, int iParam1)
{
	if (!func_247(&(uParam0->f_16)))
	{
		func_243(&(uParam0->f_16));
	}
	else if (func_260(&(uParam0->f_16)) > IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_303()
{
	switch (iLocal_912)
	{
		case 0:
			func_243(&uLocal_1016);
			func_243(&uLocal_1013);
			iLocal_912++;
			break;
		case 1:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 0f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(81), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_912++;
			}
			break;
		case 2:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(82), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_912++;
			}
			break;
		case 3:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(83), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_950 = 1;
				iLocal_912++;
			}
			break;
		case 4:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_306();
			}
			break;
	}
}

int func_304(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	switch (uParam0->f_19)
	{
		case 0:
			uParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			func_243(&(uParam0->f_13));
			uParam0->f_19 = 1;
			uParam0->f_1 = fParam3;
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
				if (fVar0 == 0f)
				{
					fParam3 = 4f;
				}
				else if (fVar0 == 1f)
				{
					fParam3 = 20f;
				}
				else if (fVar0 > 1f && fVar0 <= 1.5f)
				{
					fParam3 = 12f;
				}
				else if (fVar0 > 1.5f && fVar0 <= 2f)
				{
					fParam3 = 10f;
				}
				else
				{
					fParam3 = 10f;
				}
			}
			if (func_260(&(uParam0->f_13)) > fParam3)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, uParam0->f_7, IntToFloat(iParam2), IntToFloat(iParam2), 2f, false, true, 0))
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, uParam0->f_7, IntToFloat(iParam2), IntToFloat(iParam2), IntToFloat(iParam2), false, true, 0))
			{
				return 1;
			}
			else
			{
				uParam0->f_19 = 0;
			}
			break;
	}
	return 0;
}

void func_305()
{
	switch (iLocal_913)
	{
		case 0:
			func_243(&uLocal_1016);
			func_243(&uLocal_1013);
			iLocal_913++;
			break;
		case 1:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 0f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(85), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_913++;
			}
			break;
		case 2:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(86), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_913++;
			}
			break;
		case 3:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(87), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_950 = 1;
				iLocal_913++;
			}
			break;
		case 4:
			if (func_233(-4f, 1, 0, 0) && func_236(&uLocal_1016) >= 10f)
			{
				func_306();
			}
			break;
	}
}

void func_306()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_873[4]), true);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_996);
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(&(uLocal_873[4]), true))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_873[4]), false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, -1f, 512, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_996);
	TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_996);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
	func_286(&(uLocal_873[4]), Global_35, func_161(73), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_228(11);
	func_34();
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	iLocal_889 = 7;
	iLocal_890 = 0;
	func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
	func_164(Local_260[1 /*17*/], 0);
	(Local_260[1 /*17*/])->f_13 = func_161(103);
	func_163(Local_260[1 /*17*/], 1, 0);
	func_235(Local_260[0 /*17*/], "INTERACT_GREET");
	func_164(Local_260[0 /*17*/], 0);
	func_163(Local_260[0 /*17*/], 0, 0);
	if (iLocal_986 == 0)
	{
		func_241(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
		iLocal_986 = 1;
	}
}

void func_307(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_308()
{
	switch (iLocal_915)
	{
		case 0:
			if (func_233(-4f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(93), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_915++;
				iLocal_950 = 0;
			}
			break;
		case 1:
			if (func_233(-4f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(94), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_915++;
				iLocal_950 = 0;
			}
			break;
		case 2:
			if (func_233(-4f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(95), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_915++;
				iLocal_950 = 0;
			}
			break;
	}
}

void func_309()
{
	int iVar0;

	switch (iLocal_907)
	{
		case 0:
			if (func_233(-4f, 1, 0, 0))
			{
				func_286(Global_35, &(uLocal_873[4]), func_161(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
				func_232(&(uLocal_873[4]), Global_35, &uLocal_117, 5000, 15, 51);
			}
			break;
		case 1:
			if (func_233(-4f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1067);
				iLocal_907++;
			}
			break;
		case 2:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				if (func_236(&uLocal_1067) > 1f)
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_907++;
				}
			}
			else
			{
				func_243(&uLocal_1067);
			}
			break;
		case 3:
			if (func_233(-2f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				func_286(Global_35, &(uLocal_873[4]), func_161(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1067);
				iLocal_907++;
			}
			break;
		case 4:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				if (func_236(&uLocal_1067) > 1f)
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_907++;
				}
			}
			else
			{
				func_243(&uLocal_1067);
			}
			break;
		case 5:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				func_286(Global_35, &(uLocal_873[4]), func_161(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1067);
				iLocal_907++;
			}
			break;
		case 6:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				if (func_236(&uLocal_1067) > 0.7f)
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_243(&uLocal_1055);
					iLocal_907++;
				}
			}
			else
			{
				func_243(&uLocal_1067);
			}
			break;
		case 7:
			if ((func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1)) && func_233(1f, 1, 0, 0))
			{
				if (func_236(&uLocal_1055) > 2f)
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_243(&uLocal_1055);
					iLocal_907++;
				}
			}
			else
			{
				func_243(&uLocal_1067);
			}
			break;
		case 8:
			if (((func_236(&uLocal_1055) > 3f && func_233(-3f, 1, &(uLocal_873[4]), 1)) && func_233(-2f, 1, Global_35, 1)) && func_233(-5f, 1, 0, 0))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 9:
			if (!bLocal_958)
			{
				if (func_233(0f, 1, &(uLocal_873[4]), 1) && func_233(0f, 1, Global_35, 1))
				{
					if (func_485())
					{
						func_286(Global_35, &(uLocal_873[4]), "PLAYER_ACKNOWLEDGEMENT", 0, -1082130432 /* Float: -1f */, 8, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_286(Global_35, &(uLocal_873[4]), "PLAYER_ACKNOWLEDGMENT", 0, -1082130432 /* Float: -1f */, 5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_958 = true;
				}
			}
			if (func_108(Global_35, vLocal_60, 1) <= fLocal_928)
			{
				if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_243(&uLocal_1055);
					iLocal_907++;
				}
			}
			break;
		case 10:
			if (func_236(&uLocal_1055) > 5f)
			{
				iVar0 = PED::GET_MOUNT(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !PED::_0x77243ED4F7CAAA55(iVar0))
				{
					if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
					{
						func_286(&(uLocal_873[4]), Global_35, func_161(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_907++;
					}
				}
			}
			break;
		case 11:
			if ((func_236(&uLocal_1055) > 7f && func_233(-2f, 1, &(uLocal_873[4]), 1)) && func_233(-2f, 1, Global_35, 1))
			{
				func_286(Global_35, &(uLocal_873[4]), func_161(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 12:
			if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 13:
			if (func_233(-2f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
			{
				func_286(Global_35, &(uLocal_873[4]), func_161(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 14:
			if (func_108(Global_35, vLocal_60, 1) < 60f)
			{
				func_473(0);
				if (func_233(-3f, 1, &(uLocal_873[4]), 1) && func_233(-2f, 1, Global_35, 1))
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_907++;
				}
			}
			break;
	}
	if (func_108(Global_35, vLocal_60, 1) < 60f && iLocal_907 < 14)
	{
		iLocal_907 = 14;
	}
}

void func_310()
{
	switch (iLocal_921)
	{
		case 0:
			func_243(&uLocal_1040);
			iLocal_921++;
			break;
		case 1:
			if (func_233(0f, 1, 0, 0) && func_236(&uLocal_1040) >= 20f)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(83), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_243(&uLocal_1040);
				iLocal_921++;
			}
			break;
		case 2:
			if ((func_233(0f, 1, 0, 0) && func_236(&uLocal_1040) >= 20f) && iLocal_987 == 0)
			{
				func_286(&(uLocal_873[4]), Global_35, func_161(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_996);
				TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
				if ((Local_314.f_51.f_4 == 0 || Local_314.f_51.f_4 == 3) || Local_314.f_51.f_4 == 4)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2949.98f, 523.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, 0, 0, 1, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2948.98f, 1352.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, 0, 0, 1, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_996);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_996);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
				func_228(11);
				iLocal_889 = 7;
				iLocal_890 = 0;
				func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
				func_164(Local_260[1 /*17*/], 0);
				(Local_260[1 /*17*/])->f_13 = func_161(103);
				func_163(Local_260[1 /*17*/], 1, 0);
				iLocal_921++;
			}
			break;
	}
}

void func_311()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_998 = PED::GET_MOUNT(Global_35);
	}
	switch (iLocal_891)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
			{
				if (func_486(iLocal_998))
				{
					func_286(&(uLocal_873[4]), Global_35, func_161(96), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_243(&uLocal_1025);
					iLocal_891 = 1;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_FACING_PED(&(uLocal_873[4]), Global_35, 50f))
			{
				if (!func_81(&(uLocal_873[4]), -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(uLocal_873[4]), Global_35, 0, -1082130432, -1082130432, -1082130432);
				}
			}
			if (!func_486(iLocal_998))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(iLocal_998, 0))
				{
					TASK::TASK_MOUNT_ANIMAL(&(uLocal_873[4]), iLocal_998, -1, 0, 1f, 1, 0, 0);
					iLocal_891 = 2;
				}
			}
			if (func_236(&uLocal_1025) >= 40f)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(&(uLocal_873[4]), -1f, 512, 0);
				func_286(&(uLocal_873[4]), Global_35, func_161(74), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (bLocal_87)
				{
					PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 2, false);
					PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
					func_36(&(uLocal_873[4]));
					PED::SET_PED_CONFIG_FLAG(&(uLocal_873[4]), 448, false);
					bLocal_87 = false;
				}
				func_228(12);
			}
			break;
		case 2:
			iLocal_891 = 0;
			break;
	}
}

int func_312()
{
	int iVar0;

	iVar0 = PED::GET_MOUNT(Global_35);
	switch (iLocal_888)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
			func_34();
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				iLocal_987 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				iLocal_988 = 1;
				func_487(Global_35, &uLocal_924, 65, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				func_488(iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
				if (!func_81(iVar0, -982327190))
				{
					TASK::TASK_STAND_STILL(iVar0, 10000);
				}
				if (TASK::IS_PED_STILL(iVar0) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.3f)
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109.f_1, "HORSE", iVar0, 0);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_109.f_1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 0));
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_109.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					func_29(Global_1935630, 4);
					iLocal_888 = 1;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(&(uLocal_873[4]), true))
			{
				iLocal_987 = 1;
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1129, 2f, 3, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
				iLocal_988 = 1;
				func_241(12, 0, 0, "RE_HONOR_HELPED_STRANGER", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
				func_29(Global_1935630, 4);
				iLocal_888 = 5;
			}
			break;
		case 1:
			ANIMSCENE::START_ANIM_SCENE(Local_109.f_1);
			iLocal_888 = 2;
			break;
		case 2:
			if (iLocal_990 == 0)
			{
				if (fLocal_930 >= 0.316384f)
				{
					func_489(446659922 /* GXTEntry: "Silver Chain Bracelet" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_241(12, 0, 0, "RE_HONOR_HELPED_STRANGER", &(uLocal_873[4]), 0, 1065353216 /* Float: 1f */, 0);
					iLocal_990 = 1;
				}
			}
			if (fLocal_930 >= 0.98f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(uLocal_873[4]), 1, 1);
				iLocal_888 = 3;
			}
			break;
		case 3:
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_988 = 0;
			}
			func_36(&(uLocal_873[4]));
			func_21();
			iLocal_889 = 7;
			iLocal_890 = 0;
			func_235(Local_260[0 /*17*/], "RE_INTER_POS");
			func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
			func_164(Local_260[0 /*17*/], 0);
			func_164(Local_260[1 /*17*/], 0);
			(Local_260[0 /*17*/])->f_13 = func_161(102);
			(Local_260[1 /*17*/])->f_13 = func_161(103);
			func_163(Local_260[0 /*17*/], 1, 0);
			func_163(Local_260[1 /*17*/], 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_996);
			if ((Local_314.f_51.f_4 == 0 || Local_314.f_51.f_4 == 3) || Local_314.f_51.f_4 == 4)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2949.98f, 523.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, 0, 0, 1, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2948.98f, 1352.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, 0, 0, 1, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_996);
			TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_996);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
			iLocal_888 = 4;
			break;
		case 4:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_109.f_1))
			{
				if (iLocal_988 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_988 = 0;
				}
			}
			if (func_96(0))
			{
				if (iLocal_988 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_988 = 0;
				}
				iLocal_888 = 6;
			}
			break;
		case 5:
			if (func_96(1))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_1129);
				if (iLocal_988 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
					iLocal_988 = 0;
				}
				func_489(446659922 /* GXTEntry: "Silver Chain Bracelet" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_36(&(uLocal_873[4]));
				iLocal_889 = 7;
				iLocal_890 = 0;
				func_235(Local_260[0 /*17*/], "RE_INTER_POS");
				func_235(Local_260[1 /*17*/], "RE_INTER_ANTAGONIZE");
				func_164(Local_260[0 /*17*/], 0);
				func_164(Local_260[1 /*17*/], 0);
				(Local_260[0 /*17*/])->f_13 = func_161(102);
				(Local_260[1 /*17*/])->f_13 = func_161(103);
				func_163(Local_260[0 /*17*/], 1, 0);
				func_163(Local_260[1 /*17*/], 1, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				if ((Local_314.f_51.f_4 == 0 || Local_314.f_51.f_4 == 3) || Local_314.f_51.f_4 == 4)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2949.98f, 523.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, 0, 0, 1, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2948.98f, 1352.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, 0, 0, 1, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
				TASK::TASK_PERFORM_SEQUENCE(&(uLocal_873[4]), iLocal_995);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
				iLocal_888 = 6;
			}
			break;
		case 6:
			func_29(Global_1935630, 4);
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				iLocal_988 = 0;
			}
			return 1;
	}
	return 0;
}

void func_313()
{
	if (!bLocal_1135)
	{
		func_490(4, func_485());
		bLocal_1135 = true;
	}
}

void func_314()
{
	if (func_292(Global_35) && !func_293())
	{
		if (iLocal_945 == 0)
		{
			iLocal_945 = 1;
			func_491();
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_MOUNT_ANIMAL(&(uLocal_873[4]), iLocal_1130, -1, 0, 1.5f, 1, 0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1129, true))
			{
				TASK::TASK_ENTER_VEHICLE(&(uLocal_873[4]), iLocal_1129, -1, 0, 1.5f, 8388608, 0);
			}
			if (iLocal_989 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
				PED::SET_PED_RESET_FLAG(Global_35, 318, false);
				iLocal_989 = 0;
			}
			func_23(1);
			func_243(&uLocal_1025);
		}
		else if ((!func_81(&(uLocal_873[4]), 1227113341) && !func_81(&(uLocal_873[4]), 1868526510)) && !func_81(&(uLocal_873[4]), -1794415470))
		{
			iLocal_945 = 0;
		}
	}
	if (!func_292(&(uLocal_873[4])) && !func_292(Global_35))
	{
		if (iLocal_945 == 0)
		{
			if ((!func_81(&(uLocal_873[4]), 1227113341) && !func_81(&(uLocal_873[4]), 1868526510)) && !func_81(&(uLocal_873[4]), -1794415470))
			{
				TASK::TASK_GO_TO_ENTITY(&(uLocal_873[4]), Global_35, -1, 4f, 2f, 2f, 0);
			}
		}
	}
	if (iLocal_951 == 0)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_997) && func_292(&(uLocal_873[4])))
		{
			if (iLocal_980 == 0)
			{
				iLocal_980 = 1;
				iLocal_951 = 1;
				iLocal_941 = 1;
				if (func_247(&uLocal_1013))
				{
					func_307(&uLocal_1013);
				}
				func_243(&uLocal_1001);
				ENTITY::_0x18FF3110CF47115D(iLocal_998, 9, 1);
				iLocal_997 = MAP::_0x554D9D53F696D002(408396114, vLocal_60);
				MAP::_0x662D364ABF16DE2F(iLocal_997, -1878373110);
				MAP::_0x662D364ABF16DE2F(iLocal_997, 231194138);
				switch (iLocal_1088)
				{
					case 0:
						fLocal_928 = 300f;
						break;
					case 1:
						fLocal_928 = 275f;
						break;
					case 2:
						fLocal_928 = 275f;
						break;
					case 3:
						fLocal_928 = 300f;
						break;
					case 6:
						fLocal_928 = 275f;
						break;
					case 7:
						fLocal_928 = 275f;
						break;
					default:
						fLocal_928 = 300f;
						break;
				}
				func_492(Global_1935630, 4);
			}
		}
	}
}

void func_315()
{
	if (iLocal_978 == 0)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
		{
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP")))
			{
				if (!func_247(&uLocal_1049))
				{
					func_493(&uLocal_1049, 0);
				}
			}
			if (func_236(&uLocal_1049) > 1f)
			{
				if (func_286(&(uLocal_873[4]), Global_35, func_161(90), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_978 = 1;
					func_307(&uLocal_1049);
				}
			}
		}
	}
	if (!func_247(&uLocal_1046))
	{
		func_243(&uLocal_1046);
	}
	else if (func_236(&uLocal_1046) >= 20f)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
		{
			if ((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_998) >= 3f && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_998) < 0.1f) && func_464(2251.6f, 314.7f, 46.5f, 1) > 20f)
			{
				if (func_286(&(uLocal_873[4]), Global_35, func_161(91), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_307(&uLocal_1046);
				}
			}
		}
	}
	if (!func_247(&uLocal_1061))
	{
		func_243(&uLocal_1061);
	}
	else if (func_236(&uLocal_1061) > 6f)
	{
		if (iLocal_979 == 0)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_998) >= 1.5f)
				{
					if (PED::_0x498F2E77982D6945(Global_35, "FoliageActive") && PED::_0x56E58D4D118FB45E(Global_35, "FoliageHeight") >= 1.8f)
					{
						if (func_286(&(uLocal_873[4]), Global_35, func_161(92), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_979 = 1;
						}
					}
				}
			}
		}
	}
}

void func_316()
{
	if (func_494(&(uLocal_873[4])))
	{
		if (func_494(Global_35))
		{
			if (MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
			{
				MAP::REMOVE_BLIP(uLocal_880[4]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				iLocal_997 = MAP::_0x554D9D53F696D002(408396114, vLocal_60);
				MAP::_0x662D364ABF16DE2F(iLocal_997, -1878373110);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(&(uLocal_880[4])))
			{
				uLocal_880[4] = MAP::_0x23F74C2FDA6E7C61(-89429847, &(uLocal_873[4]));
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
		}
	}
}

int func_317(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

void func_318()
{
	if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_873[4])))
	{
		if (!func_247(&uLocal_1141))
		{
			if (func_223())
			{
				func_243(&uLocal_1141);
			}
		}
		if (!PED::IS_PED_RAGDOLL(&(uLocal_873[4])))
		{
			func_320(&(uLocal_873[4]), 0, &(Local_314.f_5), &iLocal_1134, 0, 0);
			if (PED::_0x3AA24CCC0D451379(&(uLocal_873[4])) || PED::_0x9682F850056C9ADE(&(uLocal_873[4])))
			{
				if (iLocal_963 == 0)
				{
					iLocal_963 = 1;
					iLocal_914 = 1;
				}
			}
			if (iLocal_1134 == 8)
			{
				if (iLocal_964 == 0)
				{
					iLocal_964 = 1;
					iLocal_914 = 3;
				}
			}
			if (func_495(iLocal_1134))
			{
				if (iLocal_966 == 0)
				{
					iLocal_966 = 1;
					iLocal_914 = 0;
				}
			}
			if ((PED::_0x29FCE825613FEFCA(&(uLocal_873[4]), 500) || PED::_0xD0B7AEB56229D317(Global_35) == &uLocal_873[4]) || iLocal_1134 == 2048)
			{
				if (iLocal_965 == 0)
				{
					iLocal_965 = 1;
					iLocal_914 = 2;
				}
			}
			if (func_322())
			{
				if (iLocal_976 == 0)
				{
					iLocal_976 = 1;
					iLocal_914 = 4;
				}
			}
			switch (iLocal_914)
			{
				case 0:
					if (func_234(&(uLocal_873[4]), Global_35, func_161(31), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 1:
					if (func_234(&(uLocal_873[4]), Global_35, func_161(32), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 2:
					if (func_234(&(uLocal_873[4]), Global_35, func_161(33), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 3:
					if (func_234(&(uLocal_873[4]), Global_35, func_161(34), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 4:
					if (func_234(&(uLocal_873[4]), Global_35, func_161(35), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
			}
		}
	}
}

bool func_319()
{
	return !func_496();
}

int func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_497(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_498(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_499(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_500(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
				else if (func_501(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_502(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_200(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_499(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_503(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_504(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_499(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_505(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_499(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_506(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			else if (func_506(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_499(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_507(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_508(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_509(iParam2, 4000))
				{
					if ((func_510(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_511(iParam2, iParam0)) && func_512(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_499(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_510(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_511(iParam2, iParam0)) && func_512(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_513(iParam0, Global_1935630->f_41))
							{
								func_514();
								*iParam3 = 2;
								func_499(iParam0, iParam2, *iParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_513(iParam0, Global_1935630->f_41))
						{
							func_514();
							*iParam3 = 2;
							func_499(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_515(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_447() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_514();
						*iParam3 = 2;
						func_499(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_516())
					{
						if (func_513(iParam0, Global_1935630->f_42))
						{
							func_514();
							*iParam3 = 2;
							func_499(iParam0, iParam2, *iParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_517(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_499(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_518(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_519(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_499(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_520(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_521(iParam2, 4000))
				{
					if (func_522(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_499(iParam0, iParam2, *iParam3);
						return 1;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_523(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_499(iParam0, iParam2, *iParam3);
					return 1;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_524(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_499(iParam0, iParam2, *iParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_321()
{
	if ((((((iLocal_1134 == 2 || iLocal_1134 == 8) || iLocal_1134 == 8192) || iLocal_1134 == 16384) || iLocal_1134 == 2048) || iLocal_1134 == 4) || iLocal_1134 == 256)
	{
		return 1;
	}
	return 0;
}

int func_322()
{
	switch (iLocal_898)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(&(uLocal_873[4])))
			{
				iLocal_898 = 1;
			}
			break;
		case 1:
			if ((!PED::IS_PED_ON_MOUNT(&(uLocal_873[4])) && PED::IS_PED_RAGDOLL(&(uLocal_873[4]))) && iLocal_888 < 1)
			{
				iLocal_898 = 2;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_323()
{
	int iVar0;

	if (func_525(Global_35))
	{
		iVar0 = func_526(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == &uLocal_873[5])
				{
					return 1;
				}
			}
		}
	}
	if (func_266(Global_35, &(uLocal_873[5])))
	{
		return 1;
	}
	return 0;
}

int func_324()
{
	if (func_527())
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(uLocal_873[4]), Global_35, 1, 1);
	}
	return 0;
}

int func_325(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_326(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_327(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_328(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

bool func_329(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

Vector3 func_330(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_331(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_332(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_333(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_528(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_529(iVar0);
	*uParam0 = 0;
}

bool func_333(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_530(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_530(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", iParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_336(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_337(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_338(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_339(var uParam0)
{
	if (func_333(uParam0->f_162))
	{
		func_332(&(uParam0->f_162), 1, 1);
	}
	if (func_333(uParam0->f_163))
	{
		func_332(&(uParam0->f_163), 1, 1);
	}
	if (func_333(uParam0->f_164))
	{
		func_332(&(uParam0->f_164), 1, 1);
	}
	if (func_333(uParam0->f_165))
	{
		func_332(&(uParam0->f_165), 1, 1);
	}
}

void func_340(var uParam0)
{
	if (uParam0->f_170)
	{
		func_531();
	}
}

void func_341(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_532(32);
		func_37(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_342(var uParam0)
{
	if (func_533(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_534(uParam0->f_3);
		func_192(uParam0, 0, 1);
		func_535(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_536(0, 0);
		return 1;
	}
	return 0;
}

void func_343()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_344(int iParam0)
{
	if (!func_41(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_345(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_346(char* sParam0)
{
	return sParam0;
}

int func_347(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_349(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_350(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_142(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_351(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_40("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_352(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_353(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_142(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_215(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_537(iVar0, bParam8);
	return iVar0;
}

void func_354(int iParam0)
{
	if (!func_41(iParam0))
	{
		return;
	}
	func_538(iParam0);
}

void func_355(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_356(int iParam0)
{
	if (func_70(iParam0, 2))
	{
		return 200;
	}
	if (func_70(iParam0, 4))
	{
		return 70;
	}
	if (func_70(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_357(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_45(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_409() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_45(iParam0, 2);
		bVar1 = func_45(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_198())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_358(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_70(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_359(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_70(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_70(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_360(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_348(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_361(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_142(vParam1))
	{
		return 0;
	}
	if (func_365(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_102(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_362(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_363(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_447() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_364(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_142(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_365(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_45(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_539(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_45(iParam0, 33554432))
	{
		if (func_540(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_70(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_45(iParam0, 1) && !func_45(iParam0, 2))
	{
		if (func_45(iParam0, 4096) || func_45(iParam0, 2048))
		{
			if (func_541(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_367(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_2(&uParam0);
	if (!func_542())
	{
		return 0;
	}
	return 1;
}

bool func_368(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_543(vVar0, vParam0) > func_543(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_369(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_371(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_544(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_372()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_373(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_114() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_374(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_1;
}

int func_375(int iParam0)
{
	return &(Global_17503.f_42[iParam0 /*8*/]);
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

int func_377()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_379(int iParam0, bool bParam1)
{
	if (!func_545(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (bParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

void func_380(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_333(iParam0))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_381(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_333(iParam0))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_382(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_333(iParam0))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	if (bParam1)
	{
		func_546(iParam0, 4);
		func_547(iVar0, 1);
		func_548(iVar0, 1);
	}
	else
	{
		func_549(iParam0, 4);
		func_548(iVar0, 0);
	}
}

bool func_383(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_384(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_385(int iParam0)
{
	if (func_114() != -1)
	{
		return 0;
	}
	if (!func_440(iParam0))
	{
		return 0;
	}
	return func_550(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_386(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (func_551(iParam0))
	{
		return 0;
	}
	if (func_114() == -1)
	{
		if (func_206(6206, 1, 1))
		{
			iVar0 = func_552(0);
			uVar1 = func_553(iVar0);
			return 0;
		}
		if (bParam1)
		{
			if (func_554() == iParam0)
			{
				return 0;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_385(63))
					{
						return 0;
					}
					if (func_555(76) || func_556())
					{
						return 0;
					}
					break;
				case 125:
					if (!func_557())
					{
						return 0;
					}
					break;
				case 129:
					if (!func_558())
					{
						return 0;
					}
					if (func_559(19, 0))
					{
						return 0;
					}
					break;
				case 114:
					if (!func_558())
					{
						return 0;
					}
					if (func_559(20, 0))
					{
						return 0;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_114() == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
	if (func_105(iParam0, 256))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar2 = func_560(iParam0);
		if (!func_442(iVar2))
		{
			return 0;
		}
		iVar3 = func_561(iVar2);
		if (func_562(iVar3))
		{
			func_563(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_564(iVar3, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_387(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_388(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_389(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_565((fParam0 + fParam1));
}

int func_390(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_566(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_567(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_568(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_568(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_569(iVar0))
		{
			func_394(iVar0, &(uParam1->f_23), 0);
		}
		if (func_569(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_570(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_571(&(uParam1->f_22)));
			func_60(iVar0, func_572(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_573(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_574(&(uParam1->f_22)))
		{
			func_575(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_576(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_530(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_569(iVar0))
		{
			func_578(iVar0, !func_577(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_579(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_580(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_580(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_391(int iParam0, int iParam1)
{
	if (func_581(iParam0) != -1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("g_m_m_uniswamp_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			return 1;
		case joaat("g_m_m_unicriminals_02"):
		case joaat("g_m_m_unicriminals_01"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

bool func_392(var uParam0)
{
	return func_530(*uParam0, 32);
}

int func_393(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_394(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_117(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_395(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_396(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_397(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_398(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_399(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_396(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_396(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_114() == -1 && !func_397(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_397(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_396(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_582(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_583(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_584(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_400(int iParam0, int iParam1)
{
	func_585(iParam0, iParam1);
}

void func_401(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_586(iParam0);
	}
	else
	{
		func_587(iParam0);
	}
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875: /* GXTEntry: "Murder" */
			return 2;
		case 1587891565:
			return 4;
		case 1877013492: /* GXTEntry: "Frighten" */
			return 32;
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return 64;
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return 128;
		case 551416228: /* GXTEntry: "Killed Horse" */
			return 256;
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return 512;
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return 1024;
		case 508358508: /* GXTEntry: "Stole Mule" */
			return 2048;
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return 16384;
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return 32768;
		case -1972216640: /* GXTEntry: "Antagonize" */
			return 65536;
		case 530833824: /* GXTEntry: "Theft" */
			return 131072;
		case 1682361219: /* GXTEntry: "Intervened" */
			return 262144;
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return 524288;
		case 1919819559: /* GXTEntry: "Donated Game" */
			return 1048576;
		case 1461411082: /* GXTEntry: "Item Request" */
			return 2097152;
		case -549508280: /* GXTEntry: "Long Absence" */
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_403(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_404(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_405(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, uParam3, iVar23, 2, 0);
}

void func_406(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

int func_407(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_482(1);
	}
	else
	{
		iVar0 = func_588(iParam0);
	}
	return iVar0;
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_589(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_590(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

int func_409()
{
	return Global_1897952->f_41;
}

void func_410(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_70(iParam0, 8192))
	{
		iVar0 = func_590(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_411(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_37(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_412(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_45(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_591(262144, iVar0, 0, 1);
		}
	}
	if (func_45(iParam0, 128))
	{
		func_591(128, iVar0, 0, 1);
	}
	else if (func_45(iParam0, 524288))
	{
		func_591(524288, iVar0, 0, 1);
	}
	else if (func_45(iParam0, 536870912))
	{
		func_591(536870912, iVar0, 0, 1);
	}
	else if (func_45(iParam0, 4194304))
	{
		func_591(4194304, iVar0, 0, 1);
	}
	else if (func_45(iParam0, 8388608))
	{
		func_591(8388608, iVar0, 0, 1);
	}
}

void func_413(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_414(bool bParam0)
{
	if (!bParam0 && func_592(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_415()
{
	return Global_1310750->f_16037;
}

int func_416(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_417(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_41(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_593(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_418(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_594(Global_1393447, 1);
	func_595();
	func_596();
	func_597((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_447() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_598();
		if (iParam1 == -1)
		{
			if (func_5(iParam0, 1))
			{
				func_591(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_5(iParam0, 2))
			{
				func_591(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_5(iParam0, 4))
			{
				func_591(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_599(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_600(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_600((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_419(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_420(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_421(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606 /* GXTEntry: "Del Lobo Gang" */;
		case 2:
			return 1143368244 /* GXTEntry: "Lemoyne Raiders" */;
		case 1:
			return -1797026825 /* GXTEntry: "The Murfree Brood" */;
		case 0:
			return 55818986 /* GXTEntry: "O\'Driscoll Boys" */;
		case 4:
			return -2100600611 /* GXTEntry: "The Laramie Gang" */;
		case 3:
			return 529020251 /* GXTEntry: "The Skinner Brothers" */;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_423()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_424(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_425(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_424(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_426() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_426()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_427(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_428()
{
	return &Global_1899515;
}

int func_429(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case joaat("overcast"):
		case joaat("highpressure"):
		case joaat("overcastdark"):
		case joaat("clouds"):
		case joaat("misty"):
		case joaat("sunny"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case joaat("snow"):
		case joaat("snowlight"):
		case joaat("blizzard"):
		case joaat("whiteout"):
		case joaat("snowclearing"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case joaat("fog"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_434(int iParam0)
{
	switch (iParam0)
	{
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("misty"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_435(int iParam0)
{
	switch (iParam0)
	{
		case joaat("snowlight"):
		case joaat("snowclearing"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_436(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sandstorm"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_437(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_438()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_439(int iParam0)
{
	if (!func_442(iParam0))
	{
		return -1;
	}
	return func_602(func_601(iParam0));
}

bool func_440(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_441(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_442(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_443(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_444(int iParam0)
{
	return func_45(iParam0, Global_1310750->f_16072 | 64);
}

int func_445(var uParam0, float fParam1)
{
	if (!func_247(uParam0))
	{
		return 0;
	}
	if (func_260(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_446(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

int func_447()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_448(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_69(iParam0, 134217728);
	}
	else
	{
		func_345(iParam0, 134217728);
	}
}

int func_449(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_450(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_603(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_604(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_451(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_452(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_453(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_452(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_100(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_243(&(iParam1->f_13));
		}
		if (func_605(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_606(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_453(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_474(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_607(*uParam0, 1, 1);
						}
					}
					else if (func_608(iParam1, 22))
					{
						func_607(*uParam0, 0, 1);
					}
				}
				if (func_229(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_609(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_610(iParam8);
					if (func_611(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_612(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_613(iParam1, uParam3, fVar8);
					if (func_614(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_112(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_615(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_229(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_616(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_611(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_609(uParam0, func_229(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_610(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_112(uParam3, 0, 0, 1, 1);
					}
					func_617(iParam1, 1);
				}
				func_613(iParam1, uParam3, fVar8);
				if (func_615(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_31(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_454(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_618(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		iVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_286(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_114() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_456(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_619(iParam0, &iVar0, &iVar1);
	if (!func_620(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_621(iVar0, iVar1);
}

int func_457(int iParam0, bool bParam1)
{
	if (func_117(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_458(float fParam0)
{
	if (func_622(1))
	{
		return 1;
	}
	if (func_247(&uLocal_0) && !func_623(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_459(var uParam0)
{
	return func_469(*uParam0, 2);
}

var func_460(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_461(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_624(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

float func_462(int iParam0, int iParam1)
{
	return func_245(iParam0, iParam1, 1, 1);
}

int func_463(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

float func_464(vector3 vParam0, int iParam3)
{
	return func_108(Global_35, vParam0, iParam3);
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_466(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_625();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_626(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_627(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_556())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_628(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_625();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_629(iVar1);
		func_631(func_630(), 0, 4000);
		func_632(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_633(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_635(func_634(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_465(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_636(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_637(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_637(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_635(func_634(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_465(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_636(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_637(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_637(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_634(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_638(10, 1);
	}
}

void func_467(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_468(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_426() - fParam1);
	func_639(uParam0, 1);
	func_640(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_469(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_470()
{
	if ((!PED::IS_PED_FACING_PED(Global_35, &(uLocal_873[0]), 80f) && !PED::IS_PED_FACING_PED(Global_35, &(uLocal_873[1]), 80f)) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f || (PED::IS_PED_ON_MOUNT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 1f)))
	{
		return 1;
	}
	return 0;
}

int func_471(int iParam0, var uParam1, var uParam2)
{
	if (func_641(uParam2))
	{
		return 1;
	}
	if (func_642(iParam0, &uParam1))
	{
		return 1;
	}
	return 0;
}

int func_472()
{
	if ((((PED::IS_PED_FACING_PED(Global_35, &(uLocal_873[0]), 80f) || PED::IS_PED_FACING_PED(Global_35, &(uLocal_873[1]), 80f)) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_873[0]), true, false), 80f)) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(&(uLocal_873[1]), true, false), 80f)) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f || (PED::IS_PED_ON_MOUNT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 1f)))
	{
		return 1;
	}
	return 0;
}

void func_473(int iParam0)
{
	func_307(&uLocal_0);
	func_643(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_644();
}

void func_474(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

int func_475(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_645(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

void func_476(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

int func_477(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

int func_478(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_198())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_84(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_245(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_243(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_646(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_648(func_647(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_479(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, 0, 0, 0);
		}
		func_649(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

int func_480(int iParam0)
{
	if (func_84(iLocal_998, 1, 1) <= 10f)
	{
		return 0;
	}
	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return 0;
	}
	if ((PED::IS_PED_FACING_PED(Global_35, iParam0, 80f) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f) && func_84(iLocal_998, 1, 1) <= 20f)
	{
		return 0;
	}
	return 1;
}

int func_481(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_482(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_650(1, 0, 0);
	}
	else
	{
		iVar0 = func_209();
	}
	return func_588(iVar0);
}

int func_483(vector3 vParam0, int iParam3, float fParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;

	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, fParam4, iParam5, &vVar3, &vVar0, &uVar10, &uVar9, &uVar11, bParam6))
	{
		vVar6 = { func_651(vVar3 - vVar0) };
		*iParam3 = { vVar0 + vVar6 * FtoV((0.5f * MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true))) };
		return 1;
	}
	return 0;
}

int func_484(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_103(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_485()
{
	if (func_114() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

int func_486(int iParam0)
{
	struct<4> Var0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_652(iParam0))
		{
			if (PED::_0x608BC6A6AACD5036(&Var0, iParam0, 4, 0))
			{
				return ENTITY::DOES_ENTITY_EXIST(Var0.f_3);
			}
		}
	}
	return 0;
}

int func_487(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_530(*iParam1, 128))
	{
		if (!func_81(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_530(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_653(iVar2))
			{
				return 0;
			}
			if (!func_81(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_654(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_530(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_5(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			func_400(iParam1, 128);
			return 0;
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_530(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*iParam1 = 0;
			return 1;
		}
	}
	if (func_530(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_653(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_5(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_5(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_5(iParam2, 8192))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_530(*iParam1, 2336))
		{
			if (!func_653(iVar2))
			{
			}
			if (func_655(iVar2, *iParam1))
			{
				func_656(iParam1, 32);
				func_656(iParam1, 256);
				func_656(iParam1, 2048);
				func_400(iParam1, 512);
				func_400(iParam1, 1024);
				func_400(iParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_530(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_653(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_656(iParam1, 64);
			}
		}
		if (func_5(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_5(iParam2, 1024))) || func_5(iParam2, 8)) && !func_530(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_400(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_5(iParam2, 4096)) && !func_530(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_400(iParam1, 2048);
			func_400(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_5(iParam2, 32)) && !func_530(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_400(iParam1, 256);
			func_400(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_400(iParam1, 64);
		}
		else if (!func_5(iParam2, 1))
		{
			if (!func_5(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_654(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_530(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_400(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_400(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_5(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_400(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return 1;
		}
	}
	else if (!func_5(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_400(iParam1, 8);
	}
	return 0;
}

void func_488(int iParam0)
{
	iLocal_312 = iParam0;
	PED::_0x2EB75FB86C41F026(iLocal_312, 3, 0);
	bLocal_313 = true;
}

int func_489(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (!func_658(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_659(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_660(bParam0, bParam2);
	iVar2 = 0;
	if (func_661(bParam0, 0, 0) == 0)
	{
		if (func_662(bParam0))
		{
			iVar5 = func_663(bParam0);
			iVar6 = func_664(iVar5);
			iVar7 = func_665(iVar6) + 1;
			func_666(iVar5);
			if (func_667(38))
			{
				func_456(483, 0);
			}
			else
			{
				func_456(482, 0);
			}
			if (iVar7 == func_668(iVar6))
			{
				func_489(func_669(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_670() && func_671(4))
				{
					if (func_670() && (func_672(38) || func_667(38)))
					{
						func_674(38, func_669(iVar6), 0, 0, func_673(), 0, -1, 0);
						func_675(2);
					}
					else
					{
						func_674(38, func_669(iVar6), 0, 0, func_673(), 0, -1, 0);
						func_675(1);
					}
				}
			}
			else if (func_670() && func_671(4))
			{
				if (func_670() && (func_672(38) || func_667(38)))
				{
					func_674(38, 0, 0, 0, func_673(), 0, -1, 0);
					func_675(2);
				}
				else
				{
					func_674(38, 0, 0, 0, func_673(), 0, -1, 0);
					func_675(1);
				}
			}
			if (func_670() && func_671(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_670() && (func_672(38) || func_667(38)))
					{
						func_676(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_676(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_677(bParam0) == joaat("clothing"))
	{
		if ((!func_678(bParam0, 866047851) && !func_678(bParam0, -1979000645)) && !func_678(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_679(bParam0, 8388608) && !func_627(28))
	{
		func_680(28);
	}
	if (!bVar3)
	{
		if (func_678(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_681(bParam0) == -1447088266)
			{
				bVar1 = func_683(func_682(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_114() == -1)
					{
						func_684(bVar1);
					}
					if (func_685(0) && func_582(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_686(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_0x5C2EA6C44F515F34(bParam0);
				if (WEAPON::_0x1F7977C9101F807F(bVar1))
				{
					if (func_114() == -1)
					{
						func_684(bParam0);
					}
					if (func_685(0) && func_582(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_686(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_677(bParam0) == joaat("weapon"))
		{
			if (!func_687(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_677(bParam0) == joaat("ammo") && func_688(bParam0))
		{
			if (!func_689(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_678(bParam0, 866047851))
		{
			func_690(bParam0);
		}
		else if (func_678(bParam0, 2000026003))
		{
			func_691(bParam0);
		}
		else if (func_678(bParam0, -103750053))
		{
			func_635(func_692(-1019857971), iVar0);
		}
		else if (bParam0 == 2093098109)
		{
			func_635(func_693(-717883113, 2091222383), iVar0);
		}
		else if (func_678(bParam0, -121341956) && !func_678(bParam0, 606799272))
		{
			if (bParam0 != 191707516 && bParam0 != 1993672959)
			{
				if (func_550(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_456(498, 0);
				}
			}
			if (func_678(bParam0, -2017733358) || func_678(bParam0, -1369131378))
			{
				func_694(bParam0);
			}
		}
		else if (func_678(bParam0, -136654233))
		{
			if (func_678(bParam0, -1021472396))
			{
			}
		}
		else if (func_678(bParam0, -1466706512) && func_678(bParam0, 1147021565))
		{
			func_456(484, 0);
		}
		else if (func_678(bParam0, 1147021565) && func_678(bParam0, -524514947))
		{
		}
		else if (func_678(bParam0, 554195525))
		{
		}
		else if (func_678(bParam0, 589988438))
		{
			if (func_695())
			{
				func_696(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_678(bParam0, 787083290) && func_678(bParam0, 949916894))
		{
			func_697(bParam0);
		}
		else if (func_678(bParam0, -1718133314))
		{
			func_698(bParam0);
		}
		else if (func_678(bParam0, -1738650224))
		{
			func_699(bParam0);
		}
		else if (func_678(bParam0, -1112814642) && func_678(bParam0, 949916894))
		{
			func_700(bParam0);
		}
		else if (bParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_678(bParam0, 1841149704))
		{
			func_701();
		}
		else if (func_678(bParam0, 606799272))
		{
			func_702(bParam0, iParam1);
			func_703(bParam0);
		}
		else if (func_678(bParam0, -1112814642) && func_678(bParam0, -1697809989))
		{
			func_704(bParam0, 0, 0, 0);
		}
		else if (func_678(bParam0, -2017733358) || func_678(bParam0, -1369131378))
		{
			func_694(bParam0);
		}
		else if (func_678(bParam0, -1921346699))
		{
			if (func_114() != -1)
			{
				return 0;
			}
			func_705(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_678(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_706(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_489(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_706(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_489(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_706(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_489(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_706(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_489(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_706(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_489(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_706(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_489(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_678(bParam0, -839724752) && func_679(bParam0, 4))
		{
			if (!func_667(42))
			{
				func_707(bParam0);
			}
		}
		else if (func_678(bParam0, 1399091007))
		{
			func_708(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_678(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					bVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					bVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					bVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					bVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					bVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					bVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					bVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (bVar8 != 0)
			{
				func_489(bVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (bParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312: /* GXTEntry: "Upgraded Off-Hand Holster" */
				func_680(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_709(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_710(&bVar9, 0))
				{
					func_582(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_114() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_709(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_456(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_711();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_712();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_713();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_714();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_715();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_716(499813453, 854119837, 0);
				func_717(499813453, 0);
				func_718(1);
				break;
			case 2127812557:
				func_716(499813453, -1292544588, 0);
				func_717(499813453, 0);
				func_718(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_716(499813453, -1003325394, 0);
				func_717(499813453, 0);
				func_718(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_716(666607663, -335460405, 0);
				func_717(666607663, 0);
				func_719(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_716(666607663, 903797617, 0);
				func_717(666607663, 0);
				func_719(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_716(666607663, 669728650, 0);
				func_717(666607663, 0);
				func_719(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_716(-220219788, 1214120047, 0);
				func_717(-220219788, 0);
				func_720(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_716(-220219788, 655769340, 0);
				func_717(-220219788, 0);
				func_720(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_716(-220219788, 885316185, 0);
				func_717(-220219788, 0);
				func_720(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_716(218622660, -1491419385, 0);
				func_717(218622660, 0);
				func_721(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_716(218622660, 1809565830, 0);
				func_717(218622660, 0);
				func_721(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_716(390004462, -628873767, 0);
				func_717(390004462, 0);
				func_722(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_716(390004462, -405421956, 0);
				func_717(390004462, 0);
				func_722(2);
				break;
			case 2142623221:
				func_716(390004462, -1108972386, 0);
				func_717(390004462, 0);
				func_722(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_716(6410548, 1053716392, 0);
				func_717(6410548, 0);
				func_723(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_716(6410548, 806507056, 0);
				func_717(6410548, 0);
				func_723(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_716(6410548, 1571925350, 0);
				func_717(6410548, 0);
				func_723(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_716(6410548, 1330352282, 0);
				func_717(6410548, 0);
				func_723(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_725(242, func_724(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_725(240, func_724(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_725(241, func_724(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_726(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_726(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_726(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_726(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_726(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_726(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_456(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_456(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_456(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_489(func_727(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_489(func_728(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_627(1))
				{
					func_456(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_456(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_114() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_456(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		bVar10 = bParam0;
		func_729(&bVar10);
		if (!func_730(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_685(0))
		{
			return 1;
		}
		if (func_677(bParam0) == joaat("clothing"))
		{
			func_731(bParam0);
		}
		if (func_678(bParam0, -1979000645))
		{
			func_732(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_685(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_489(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_733(iVar2, 0);
		}
	}
	Var35 = { func_734(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_735(bParam0);
	if (fParam6 > 0f)
	{
		if (func_678(bParam0, -839724752))
		{
			func_736(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_737(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_490(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				func_738(378339669, 0);
			}
			else
			{
				func_738(472134900, 0);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_738(969208450, 0);
			}
			else
			{
				func_738(-1597139239, 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				func_738(99984477, 0);
			}
			else
			{
				func_738(373866407, 0);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_738(-1540231838, 0);
			}
			else
			{
				func_738(-913163759, 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				func_738(-616602168, 0);
			}
			else
			{
				func_738(133447149, 0);
			}
			break;
		default:
			break;
	}
}

void func_491()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1130 = PED::GET_MOUNT(Global_35);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		iLocal_1129 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
	}
}

void func_492(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_493(var uParam0, bool bParam1)
{
	if (bParam1 || !func_247(uParam0))
	{
		func_243(uParam0);
	}
}

int func_494(int iParam0)
{
	if (PED::IS_PED_IN_VEHICLE(iParam0, iLocal_1129, false))
	{
		return 1;
	}
	if (func_317(iParam0, iLocal_1130, 0))
	{
		return 1;
	}
	return 0;
}

int func_495(int iParam0)
{
	if (func_324())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 4:
		case 256:
		case 2048:
		case 8192:
			return !func_739();
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_496()
{
	return func_740() > 0;
}

void func_497(int iParam0, bool bParam1, int iParam2)
{
	func_741(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_742(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_69(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_204(1))
						{
							func_69(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_204(1) || *iParam0 & 8192 != 0))
				{
					func_345(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_743(iParam0))
			{
				iParam0->f_15 = func_447();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_447() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_744(iParam0);
}

int func_498(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case joaat("event_shocking_dead_body"):
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_745(iParam0, iParam1, iVar2))
			{
				return 0;
			}
			if (func_462(iParam0, iVar2) <= func_746(iParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_499(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_747(iParam2, 1, 1, 1, 0))
	{
		func_69(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_448(iParam1, 1);
	func_343();
}

int func_500(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_237(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_748(iParam1);
			if (func_749(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_750(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_448(iParam1, 1);
						return 1;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_448(iParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_501(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_751(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_748(iParam2);
		if (func_749(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_750(iParam2)
				{
					func_448(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_502(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_745(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_750(iParam1)
		{
			fVar3 = func_748(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_503(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_447();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_504(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_752(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_512(iParam2, iParam1))
			{
				func_448(iParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_505(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_753(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_512(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_448(iParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_506(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_754(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, iParam2->f_22))
				{
					func_448(iParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, iParam2->f_27))
				{
					func_448(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &vVar4, 0, 0);
					if (func_755(iParam1, vVar0, vVar4))
					{
						func_448(iParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, iParam2->f_22))
				{
					func_448(iParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, iParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &vVar7, 0, 0);
					if (func_755(iParam1, vVar0, vVar7))
					{
						func_448(iParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_745(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_756(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_652(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						iParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_757(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_758(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_759(iParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				iParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_508(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("event_shocking_property_damage"):
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_509(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_447();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_760(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_761(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_512(int iParam0, int iParam1)
{
	if (func_762(iParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_245(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_514()
{
}

int func_515(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_763(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_447();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_108(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_447();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_516()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_447() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_517(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_746(iParam0);
	if (iParam0->f_12 > func_764(iParam0) && iParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_765(iParam1);
	iVar1 = func_766(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_518(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_767(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

int func_519(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_768(iParam0, iParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_769(iParam1, iParam0))
					{
						if (func_108(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_520(int iParam0, int iParam1)
{
	if (!func_770(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_521(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_447();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_522(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_523(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_447();
	}
	else if (func_447() - iParam1->f_4) > func_771(iParam1)
	{
		return func_772(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = func_773(iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return iVar0;
	}
	iVar1 = func_773(iParam0, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar1;
	}
	iVar2 = func_773(iParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return iVar2;
	}
	uVar3 = PED::_0x14169FA823679E41(iParam0);
	return uVar3;
}

int func_527()
{
	if (!bLocal_1137)
	{
		if (bLocal_1138)
		{
			return 0;
		}
	}
	return 1;
}

int func_528(int iParam0)
{
	return iParam0;
}

void func_529(int iParam0)
{
	if (!func_774(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_530(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_531()
{
	func_775(23);
}

void func_532(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_533(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_534(int iParam0)
{
	int iVar0;

	iVar0 = func_776(iParam0);
	if (iVar0 != 0)
	{
		func_777(-1, 24, 0, iVar0);
	}
}

void func_535(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_635(func_634(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_45(iParam0, 2))
	{
		func_778(iParam0, func_407(iParam3));
	}
	if (func_45(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_409();
		}
		func_779(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_70(iParam0, 65536))
	{
		func_780(iParam0, iParam1);
		func_781(iParam0, func_137(iParam0, iParam1));
		func_532(128);
	}
	func_411(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_412(iParam0, 1);
	if (!bParam2)
	{
		func_532(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_782(524288);
	}
	if (func_783(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_783(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_536(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_784(&Global_0, 8);
	}
	if (!func_670() || func_114() != -1)
	{
		return;
	}
	func_784(&Global_0, 1);
}

int func_537(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_538(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_539(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_142(vParam0))
	{
		return 0;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_540(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_142(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_541(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_142(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_103(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_542()
{
	int iVar0;
	int iVar1;

	iVar0 = func_785(func_209());
	if (iVar0 == 8)
	{
		iVar1 = func_210(func_209());
		if (func_212(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_786(func_482(0)))
	{
		return 0;
	}
	if (func_787())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_543(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_544(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_545(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

void func_546(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_547(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_788(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_548(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_549(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_550(int iParam0, bool bParam1)
{
	switch (func_789(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_551(int iParam0)
{
	int iVar0;

	iVar0 = func_790(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return (Global_40.f_9571[iVar0 /*10*/])->f_1 == 5;
}

int func_552(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_553(int iParam0)
{
	if (!func_442(iParam0))
	{
		return 0;
	}
	return func_791(func_601(iParam0));
}

int func_554()
{
	return Global_40.f_4283.f_1;
}

bool func_555(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_550(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_556()
{
	if (func_114() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_557()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_558()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_559(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_114() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_560(int iParam0)
{
	if (!func_792(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_561(int iParam0)
{
	if (!func_442(iParam0))
	{
		return -15;
	}
	return func_793(iParam0);
}

bool func_562(int iParam0)
{
	return iParam0 != -15;
}

void func_563(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_794(*iParam0);
	iVar1 = func_795(*iParam0);
	iVar2 = func_796(*iParam0);
	iVar3 = func_429(*iParam0);
	iVar4 = func_797(*iParam0);
	iVar5 = func_798(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_799(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_799(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_800(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_564(int iParam0, bool bParam1)
{
	return func_801(func_428(), iParam0, bParam1);
}

float func_565(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_566(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_802(&uParam1))
	{
		return 1;
	}
	if (!func_803(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_567(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_568(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_804(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_569(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_570(var uParam0)
{
	return func_530(*uParam0, 4);
}

bool func_571(var uParam0)
{
	return func_530(*uParam0, 64);
}

bool func_572(var uParam0)
{
	return func_530(*uParam0, 8);
}

bool func_573(var uParam0)
{
	return func_530(*uParam0, 128);
}

bool func_574(var uParam0)
{
	return func_530(*uParam0, 2048);
}

void func_575(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_576(var uParam0)
{
	return func_530(*uParam0, 1024);
}

bool func_577(var uParam0)
{
	return func_530(*uParam0, 256);
}

void func_578(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_579(var uParam0)
{
	return func_530(*uParam0, 512);
}

bool func_580(var uParam0)
{
	return func_530(*uParam0, 4096);
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			return 0;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 2;
		case joaat("g_m_m_uniinbred_01"):
			return 1;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			return 3;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			return 4;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			return 5;
	}
	return -1;
}

int func_582(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_805(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_806((375 + iVar28), 1);
			if (func_807(bParam0, &Var0, iVar5, 0))
			{
				if (func_808(bParam0, &Var6, iVar5))
				{
					Var29 = { func_809(bParam0, Var0, iVar5, 0) };
					func_810(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_685(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_686(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_811(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_583(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("weapon_revolver_cattleman_mexican") || *bParam1 == joaat("weapon_revolver_cattleman_pig")) || *bParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *bParam1 == joaat("weapon_revolver_schofield_calloway")) || *bParam1 == joaat("weapon_revolver_schofield_golden")) || *bParam1 == joaat("weapon_pistol_mauser_drunk")) || *bParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *bParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_584(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

void func_585(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_586(int iParam0)
{
	func_69(&(Global_1935369->f_39), iParam0);
}

void func_587(int iParam0)
{
	func_345(&(Global_1935369->f_39), iParam0);
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_589(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_591(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_352(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_344(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_812(iVar0) < func_813(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_411(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_592(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_814(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_593(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_594(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_595()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_815(iVar0, 128))
		{
			func_816(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_596()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_815(iVar0, 128) && func_815(iVar0, 1))
		{
			func_816(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_597(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_598()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_45(iVar0, 16777216))
		{
			if (!func_817(iVar0))
			{
				func_818(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_599(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_37(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_37(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_37(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_37(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_37(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_37(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_37(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_600(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_426();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_601(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_602(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_603(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_604(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_605(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_819(iParam0, iParam1))
		{
			if (!func_5(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_112(uParam2, 0, 0, 1, 0);
				func_69(&(iParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_5(iParam1->f_10, 1))
		{
			func_820(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_345(&(iParam1->f_10), 1);
		}
	}
	return 0;
}

int func_606(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_5(iParam4, 32);
		func_111(iParam1, uParam2, 0);
		iVar5 = func_821(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_112(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_5(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_5(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_5(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_5(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_5(iParam4, 8388608) || func_5(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_5(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_5(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_608(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_608(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_5(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_822(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_5(iParam4, 268435456))
			{
				iVar8 = func_823(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_824(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_608(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_5(iParam4, 2) || func_5(iParam4, 16))
			{
				func_607(*uParam0, 1, 1);
			}
			else
			{
				func_607(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_607(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_608(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_609(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_825(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_5(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_610(int iParam0)
{
	if (func_5(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_5(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_5(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_611(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_826(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_827(Global_35)) || func_828(Global_35)) || func_829(Global_35));
	fVar12 = -1f;
	if (func_247(&(iParam1->f_13)))
	{
		fVar12 = func_260(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_333(((*uParam4)[iVar0 /*17*/])->f_6);
		func_830(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_831(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_832(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_112(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_833(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_111(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_834(iParam1, fParam6, iParam1->f_9))
					{
						func_243(&(iParam1->f_18));
						if (bVar6)
						{
							func_833(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_835(iParam1, fParam2);
	}
	return bVar5;
}

void func_612(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_613(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_836((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_835(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_614(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_837(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_838(iParam1, 0);
				func_111(iParam1, uParam2, func_608(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_615(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_243(&(iParam1->f_18));
			return 0;
		}
		else if (func_247(&(iParam1->f_18)))
		{
			func_307(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_247(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_623(&(iParam1->f_18), fParam2);
	return 1;
}

void func_616(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_830(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_617(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_618(int* iParam0)
{
	if (func_608(iParam0, 0))
	{
		if (func_839(iParam0))
		{
			func_617(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_619(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_620(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_840(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_841(iParam0))
	{
		return 0;
	}
	if (func_842(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_843(iParam0, 1)) || func_844(32768))
	{
		if (!func_843(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_845())
	{
		return 0;
	}
	return 1;
}

void func_621(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_622(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_623(var uParam0, float fParam1)
{
	if (func_445(uParam0, fParam1))
	{
		func_307(uParam0);
		return 1;
	}
	return 0;
}

int func_624(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_625()
{
	int iVar0;

	iVar0 = func_740();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_626(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_114() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_100(MISC::ABSF(fVar1) < 1f, func_100(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_627(int iParam0)
{
	if (!func_846(iParam0))
	{
		return 0;
	}
	return func_847(iParam0);
}

int func_628(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_629(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_630()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_631(int iParam0, bool bParam1, int iParam2)
{
	func_848((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_849(iParam0);
}

void func_632(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_850(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_633(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_851(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_852(iVar5, &bVar2, &iVar0))
			{
				if (!func_657(bVar2, 0))
				{
				}
				else
				{
					iVar1 = func_853(bVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_677(bVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_625() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_625() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_854();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_634(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_635(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

char* func_636(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875: /* GXTEntry: "Murder" */
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492: /* GXTEntry: "Frighten" */
			return "HONOR_EVENT_SCARE";
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228: /* GXTEntry: "Killed Horse" */
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508: /* GXTEntry: "Stole Mule" */
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640: /* GXTEntry: "Antagonize" */
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824: /* GXTEntry: "Theft" */
			return "HONOR_EVENT_THEFT";
		case 1682361219: /* GXTEntry: "Intervened" */
			return "HONOR_EVENT_INTERVENED";
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559: /* GXTEntry: "Donated Game" */
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082: /* GXTEntry: "Item Request" */
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280: /* GXTEntry: "Long Absence" */
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475: /* GXTEntry: "Cruel Death" */
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355: /* GXTEntry: "Justice Served" */
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842: /* GXTEntry: "Cheat" */
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_637(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_855(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_638(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_856(iParam0))
	{
		return 0;
	}
	if (!func_670())
	{
		return 0;
	}
	if (!func_857(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_639(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_640(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_641(var uParam0)
{
	return uParam0->f_2 == 2;
}

int func_642(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &uVar0, false, false))
	{
		return 1;
	}
	return 0;
}

void func_643(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_644()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

int func_645(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_646(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_647(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_858(iParam0, &Var0);
}

int func_648(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_649(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	func_859(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

int func_650(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_860(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

Vector3 func_651(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_652(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_81(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_654(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_861(vVar0, vVar3, vParam1);
}

int func_655(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_81(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_530(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_530(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_530(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_656(int iParam0, int iParam1)
{
	func_544(iParam0, iParam1);
}

int func_657(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_658(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_114() == -1)
	{
		if (func_862(bParam0) && func_863(bParam0))
		{
			func_864(bParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_659(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_865(bParam0, iParam1);
	Var0 = { func_805(bParam0, 0, 1) };
	iVar5 = func_866(bParam0, &Var0, 0, 0);
	iVar6 = func_867(bParam0, 0);
	if ((iVar5 > 1 && !func_868()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_678(bParam0, -2051813666))
		{
			func_456(583, 1);
		}
		else
		{
			func_456(582, 0);
		}
	}
	if (func_869(bParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_660(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_870(bParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = bParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_661(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_677(bParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		bVar1 = func_871(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_872(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_873(bParam2), bParam0, 0);
	return iVar2;
}

bool func_662(bool bParam0)
{
	if (func_114() != -1)
	{
		return false;
	}
	return func_663(bParam0) != 0;
}

int func_663(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_874())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_875(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_664(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_665(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_874())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_664(iVar0))
		{
			if (func_706(func_875(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_666(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_876(48);
	func_536(0, -1);
}

int func_667(int iParam0)
{
	if (func_114() != -1)
	{
		return 0;
	}
	return func_550(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_668(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_669(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_670()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_671(int iParam0)
{
	if (func_114() != -1)
	{
		return 0;
	}
	return func_550(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_672(int iParam0)
{
	if (func_114() != -1)
	{
		return 0;
	}
	if (!func_440(iParam0))
	{
		return 0;
	}
	return func_877(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_673()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_706(func_878(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_674(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_670() && (func_672(38) || func_667(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_670() && (func_672(39) || func_667(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_879(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_670() && (func_672(41) || func_667(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_670() && (func_672(49) || func_667(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_879(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_880(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_881(iParam0, iVar13, iVar14))
	{
	}
	if (func_882(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_883(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_884(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_885(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_886(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_675(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_676(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_670() && (func_672(38) || func_667(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_670() && (func_672(39) || func_667(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_670() && (func_672(49) || func_667(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_670() && (func_672(38) || func_667(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_889(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_888(func_669(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_670() && (func_672(39) || func_667(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_670() && (func_672(49) || func_667(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_887(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_677(bool bParam0)
{
	vector3 vVar0;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_678(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_679(bool bParam0, int iParam1)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

void func_680(int iParam0)
{
	if (!func_846(iParam0))
	{
		return;
	}
	func_890(iParam0);
	func_891(iParam0);
}

int func_681(bool bParam0)
{
	struct<2> Var0;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_682(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			bVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			bVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			bVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			bVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			bVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			bVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			bVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_657(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_892(bVar0) || func_397(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

int func_683(bool bParam0, bool bParam1)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_684(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_396(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_685(bool bParam0)
{
	if (func_114() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_873(bParam0));
}

int func_686(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_688(bParam0))
	{
		return 0;
	}
	if (!func_685(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, iParam1, iParam2);
	return 1;
}

int func_687(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_683(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_114() == -1)
		{
			func_684(bVar0);
			if (iParam1 == 1248274121)
			{
				func_893(bVar0);
			}
		}
		if (!func_869(bParam0, &uVar1, 1, 0, 0))
		{
			func_864(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_894(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_582(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_582(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_582(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_556())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_584(bVar0))
				{
					func_582(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_582(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_895(Global_35, 2, 0, 1);
				if ((((func_396(bVar7) && !Global_43890) && bVar7 != bVar0) && !func_706(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				if (func_396(bVar7) && func_706(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_582(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_582(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_582(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_456(480, 1);
	}
	return 1;
}

bool func_688(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_689(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_688(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_396(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_706(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_725(func_896(bParam0), func_724(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_114() == -1)
		{
			if (func_550(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_456(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_685(0))
	{
		if (func_686(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_730(bParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_690(bool bParam0)
{
	var uVar0;

	if ((bParam0 == -615217896 && !func_557()) || bParam0 != -615217896)
	{
		if (func_897(Global_35, bParam0, &uVar0))
		{
			func_709(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_715();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_715();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_715();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_713();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_711();
			break;
	}
}

void func_691(bool bParam0)
{
	switch (bParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_711();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_712();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_713();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_714();
			break;
		case 1299744282: /* GXTEntry: "Lion\'s Paw Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196: /* GXTEntry: "Moose Antler Trinket" */
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276: /* GXTEntry: "Owl Feather Trinket" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_715();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_898();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_899();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_692(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_693(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_694(bool bParam0)
{
	bool bVar0;

	bVar0 = func_678(bParam0, -2017733358);
	if (func_900() < 3)
	{
		if (bVar0)
		{
			if (func_902(func_901(bParam0), bParam0))
			{
				func_725(79, func_724(func_901(bParam0)), 1);
			}
			else
			{
				func_725(78, func_724(func_901(bParam0)), 1);
			}
		}
		else
		{
			func_725(80, func_724(func_903(bParam0)), 1);
		}
	}
}

int func_695()
{
	if (((((func_904(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_904(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_904(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_904(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_904(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_904(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_696(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_905(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_906(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_907(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_697(bool bParam0)
{
	switch (bParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_674(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_676(51, 0, 0, 0, 0, -1, 0);
			func_908(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_674(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_676(51, 0, 0, 0, 0, -1, 0);
			func_908(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_674(39, 0, 0, 0, 0, 0, 1, 0);
			func_676(39, 0, 0, 0, 0, -1, 0);
			func_909(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_674(41, 0, 0, 0, 0, 0, 1, 0);
			func_676(41, 0, 0, 0, 0, -1, 0);
			func_910(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_674(49, 0, 0, 0, 0, 0, 1, 0);
			func_676(49, 0, 0, 0, 0, -1, 0);
			func_911(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_674(43, 0, 0, -1791518714, func_912(1), 0, -1, 0);
			func_913(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_674(43, 0, 0, -2087881550, func_912(2), 0, -1, 0);
			func_913(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_674(43, 0, 0, 1908068621, func_912(4), 0, -1, 0);
			func_913(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_674(43, 0, 0, 1611247019, func_912(8), 0, -1, 0);
			func_913(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_674(43, 0, 0, 1319635688, func_912(16), 0, -1, 0);
			func_913(16);
			break;
	}
}

void func_698(bool bParam0)
{
	if (func_914() == 1)
	{
		if (func_667(39))
		{
			func_456(342, 0);
		}
		else
		{
			func_456(343, 0);
			func_909(1);
		}
	}
	if (func_914() >= 30)
	{
		func_456(344, 0);
	}
	func_674(39, 0, 0, 0, 0, 0, -1, 0);
	func_676(39, 0, 0, func_914(), 30, 1, 0);
}

void func_699(bool bParam0)
{
	if (func_915() == 1)
	{
		if (func_667(49))
		{
			func_456(409, 0);
		}
		else
		{
			func_456(410, 0);
			func_911(1);
		}
	}
	if (func_915() >= 10)
	{
		func_456(411, 0);
	}
	func_674(49, 0, 0, 0, 0, 0, -1, 0);
	func_676(49, 0, 0, func_915(), 10, 1, 0);
}

void func_700(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_456(437, 0);
			func_456(440, 0);
			func_916(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_674(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_676(51, 0, 0, sVar0, func_879(-949689219, 20), 1, 0);
			func_908(1);
			func_917(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_916(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_674(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_676(51, 0, 0, sVar0, func_879(-1248968496, 20), 1, 0);
			func_908(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_916(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_674(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_676(51, 0, 0, sVar0, func_879(1706369307, 20), 1, 0);
			func_908(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_916(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_674(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_676(51, 0, 0, sVar0, func_879(1520110311, 20), 1, 0);
			func_908(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_456(438, 0);
			func_916(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_674(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_676(51, 0, 0, sVar0, func_879(-1992824800, 20), 1, 0);
			func_908(32768);
			break;
		default:
			func_456(439, 0);
			break;
	}
}

void func_701()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_702(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_114() == -1)
	{
		if (!func_667(43))
		{
			if (bParam0 == 281887510)
			{
				func_456(348, 0);
			}
			else if (bParam0 == -164081697)
			{
				func_456(350, 0);
			}
			else if (bParam0 == -1161319399)
			{
				func_456(352, 0);
			}
			else if (bParam0 == 728781265)
			{
				func_456(400, 0);
			}
		}
		else if (func_678(bParam0, 412399755))
		{
			func_918(-1791518714);
			if (func_919() == 0)
			{
				func_536(0, 10);
				iVar1 = func_920(bParam0, iParam1, 1);
				if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
				{
					if (func_921(bParam0) < func_922(bParam0))
					{
						func_674(43, bParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_676(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_667(44))
		{
			if (bParam0 == -222563712)
			{
				func_456(354, 0);
			}
			else if (bParam0 == 1794857344)
			{
				func_456(399, 0);
			}
			else if (bParam0 == 1952409553)
			{
				func_456(401, 0);
			}
		}
		else if (func_678(bParam0, 709057512))
		{
			func_918(-2087881550);
			if (func_919() == 1)
			{
				func_536(0, 10);
				iVar1 = func_920(bParam0, iParam1, 2);
				if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
				{
					if (func_921(bParam0) < func_922(bParam0))
					{
						func_674(43, bParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_676(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_667(45))
		{
			if (bParam0 == 2116770557)
			{
				func_456(359, 0);
			}
			else if (bParam0 == -651064726)
			{
				func_456(394, 0);
			}
			else if (bParam0 == -404270094)
			{
				func_456(395, 0);
			}
			else if (bParam0 == 2093126853)
			{
				func_456(398, 0);
			}
		}
		else if (func_678(bParam0, -1478961327))
		{
			func_918(1908068621);
			if (func_919() == 2)
			{
				func_536(0, 10);
				iVar1 = func_920(bParam0, iParam1, 4);
				if (bParam0 == 2116770557)
				{
					if (!func_923(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_924(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_876(48);
					}
					if (func_921(bParam0) < func_922(bParam0))
					{
						func_674(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_676(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == -651064726 || bParam0 == -404270094) || bParam0 == 2093126853)
				{
					if (func_921(bParam0) < func_922(bParam0))
					{
						func_674(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_676(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_667(46))
		{
			if (bParam0 == 2085530337)
			{
				func_456(356, 0);
			}
			else if (bParam0 == -150591160)
			{
				func_456(402, 0);
			}
			else if (bParam0 == -323969289)
			{
				func_456(404, 0);
			}
			else if (bParam0 == 1504361882)
			{
				func_456(406, 0);
			}
		}
		else if (func_678(bParam0, -1238404098))
		{
			func_918(1611247019);
			if (func_919() == 3)
			{
				func_536(0, 10);
				iVar1 = func_920(bParam0, iParam1, 8);
				if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
				{
					if (func_921(bParam0) < func_922(bParam0))
					{
						func_674(43, bParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_676(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_667(47))
		{
			if (bParam0 == -1521783510)
			{
				func_456(396, 0);
			}
			else if (bParam0 == 1714875242)
			{
				func_456(397, 0);
			}
			else if (bParam0 == 927763737)
			{
				func_456(405, 0);
			}
			else if (bParam0 == 1019229063)
			{
				func_456(403, 0);
			}
		}
		else if (func_678(bParam0, 1160548794))
		{
			func_918(1319635688);
			if (func_919() == 4)
			{
				func_536(0, 10);
				iVar1 = func_920(bParam0, iParam1, 16);
				if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
				{
					if (func_921(bParam0) < func_922(bParam0))
					{
						func_674(43, bParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_676(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_703(bool bParam0)
{
	int iVar0;

	if (bParam0 == 2116770557)
	{
		if (!func_923(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_924(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_876(48);
		}
	}
}

void func_704(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_706(func_925(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_926(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_927(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_705(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_114() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_696(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_696(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_696(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_696(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_696(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_696(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_696(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_696(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_696(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_696(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_696(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_696(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_696(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_928())
			{
				func_696(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_696(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_696(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_696(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_696(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_696(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_696(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_696(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_696(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_696(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_696(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_696(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_696(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_706(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_657(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_677(bParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_929(bParam0, 1))
		{
			return false;
		}
	}
	return func_661(bParam0, 0, bParam2) >= iParam1;
}

void func_707(bool bParam0)
{
	if (func_667(41))
	{
		func_456(363, 0);
	}
	else
	{
		func_456(362, 0);
	}
	switch (bParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_930(-1865241121);
			func_931(-642026005);
			func_932(-642026005);
			func_536(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_930(2117142684);
			func_931(-940584364);
			func_932(-940584364);
			func_536(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_930(-1409326024);
			func_931(1972645282);
			func_932(1972645282);
			func_536(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_930(-641744968);
			func_931(1667205433);
			func_932(1667205433);
			func_536(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_930(-946988203);
			func_931(1362715885);
			func_932(1362715885);
			func_536(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_930(-646136018);
			func_931(1053540370);
			func_932(1053540370);
			func_536(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_930(-955835837);
			func_931(-1100103852);
			func_932(-1100103852);
			func_536(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_930(-179276075);
			func_931(-1409869209);
			func_932(-1409869209);
			func_536(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_930(-492711560);
			func_931(-1760235357);
			func_932(-1760235357);
			func_536(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_930(1764383959);
			func_931(-138366827);
			func_932(-138366827);
			func_536(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_930(317501533);
			func_931(-1261163843);
			func_932(-1261163843);
			func_536(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_930(817753087);
			func_931(-963523016);
			func_932(-963523016);
			func_536(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_930(576606016);
			func_931(560825326);
			func_932(560825326);
			func_536(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_930(814934957);
			func_931(858269539);
			func_932(858269539);
			break;
	}
}

void func_708(bool bParam0, int iParam1)
{
	var uVar0;

	func_933(bParam0, iParam1, &uVar0);
}

int func_709(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_805(bParam1, 1, 0) };
		iParam3 = func_934(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_936(bParam1, iParam2, func_935(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_937(1, (func_114() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != &Global_1946804->f_57[func_935(iParam3, 1) /*11*/])
			{
				func_938(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_939(32768) && bParam1 != &Global_1946804->f_57[func_935(iParam3, 1) /*11*/])
			{
				func_940();
				func_938(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_938(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_941(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_938(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_942(0);
			func_943(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_938(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_710(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	bool bVar18;
	bool bVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*bParam0 = 0;
	bVar18 = func_895(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	bVar19 = func_895(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_944("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_945(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == bVar18 || Var3.f_4 == bVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*bParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_946(iVar0);
						if (*bParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_711()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_712()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_713()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_714()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_715()
{
	func_947();
	func_948();
	func_949();
}

void func_716(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_717(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_887(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_718(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_719(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_720(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_721(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_722(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_723(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_724(bool bParam0)
{
	if (!func_657(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_725(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_619(iParam0, &iVar0, &iVar1);
	if (!func_620(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_843(iParam0, 1024))
	{
		return;
	}
	func_621(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_726(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_619(iParam0, &iVar0, &iVar1);
	if (!func_620(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_843(iParam0, 1024))
	{
		return;
	}
	func_621(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_727()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_874())
	{
		return func_728();
	}
	iVar4 = (func_874() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_874())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_950(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_875(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_728()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_874());
	return func_875(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_729(bool bParam0)
{
	switch (*bParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*bParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*bParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_730(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_805(bParam0, 0, 1) };
	Var5 = { func_809(bParam0, Var0, Var0.f_4, 0) };
	return func_951(bParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_731(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_114() != -1)
	{
		return;
	}
	switch (func_681(bParam0))
	{
		case 81053684:
			if (bParam0 == -1623728698 && func_952(81053684, 0) <= 0)
			{
				func_938(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == -1535516064 || bParam0 == -763730846)
			{
				func_938(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_953(bParam0);
			if (func_954(iVar0))
			{
				func_955(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_938(30, bParam0, 0, 0, 0);
			}
			if (func_956() == -2125499975 || func_956() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_938(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_956() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_938(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_957(-525676072, 0))
			{
				if (func_958(-525676072, &bVar1))
				{
					func_938(33, bVar1, 0, 0, 0);
				}
			}
			func_938(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == 899611344 || bParam0 == -1515874150) || bParam0 == -1185145312)
	{
		if (!func_959(99217379))
		{
			func_709(Global_35, bParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_680(24);
		if (func_710(&bVar2, 0))
		{
			func_582(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_732(bool bParam0)
{
	if (func_678(bParam0, 943695443))
	{
		func_960(0, bParam0);
	}
	else if (func_678(bParam0, -2096528786))
	{
		func_960(1, bParam0);
	}
	else if (func_678(bParam0, -1094167013))
	{
		func_960(2, bParam0);
	}
	else if (func_678(bParam0, 1936654645))
	{
		func_960(3, bParam0);
	}
	else if (func_678(bParam0, 1306489306))
	{
		func_960(4, bParam0);
	}
	else if (func_678(bParam0, 435762317))
	{
		func_960(5, bParam0);
	}
	else if (func_678(bParam0, 1259363210))
	{
		func_960(6, bParam0);
	}
	else if (func_678(bParam0, 881398259))
	{
		func_960(7, bParam0);
	}
	else if (func_678(bParam0, -541549214))
	{
		func_960(8, bParam0);
	}
	else if (func_678(bParam0, 130796156))
	{
		func_960(-1, bParam0);
	}
}

int func_733(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_961(&Var4, 1356624740);
	return func_962(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_734(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_657(bParam0, 0))
	{
		return Var0;
	}
	if (func_678(bParam0, -305066475))
	{
		if (func_114() == -1)
		{
			if (func_678(bParam0, -537818634))
			{
				return func_634(189951448);
			}
			else
			{
				return func_634(1176172851);
			}
		}
	}
	else if (func_678(bParam0, -537818634))
	{
		return func_634(-963660207);
	}
	if (func_678(bParam0, 2084895747))
	{
		return func_634(1694039471);
	}
	return Var2;
}

void func_735(bool bParam0)
{
	switch (bParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_114() == -1)
			{
				if (func_550(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_456(109, 1);
				}
			}
			break;
	}
}

void func_736(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_964(func_963(0));
	func_637(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_965(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_737(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (bParam0 == 1662813436)
	{
		return;
	}
	if (!func_657(bParam0, 0))
	{
		return;
	}
	if (bParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_966())
	{
		func_967(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_968(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_968(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_679(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_677(bParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && bParam0 != 424030678) && bParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_969(bParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_970(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_724(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_678(bParam0, 1443104131)) || bParam0 == -885810591) || bParam0 == -1424823393) || bParam0 == 1463786584) || bParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_724(bParam0));
	}
	func_637(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_738(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_971(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_972(1);
		Global_40.f_11922[0] = iParam0;
	}
}

bool func_739()
{
	if (!func_247(&uLocal_1141))
	{
		return true;
	}
	return !func_445(&uLocal_1141, 3f);
}

int func_740()
{
	return Global_40.f_11095.f_35;
}

void func_741(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_973();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_974(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_742(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_743(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_114() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_975(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_975(iParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_766(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	iParam0->f_14 = iVar0;
	return 1;
}

void func_744(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_976(iParam0);
	}
}

int func_745(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_766(iParam2);
	}
	else
	{
		iVar1 = func_765(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_766(iParam0);
	}
	else
	{
		iVar0 = func_765(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_5(*iParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_746(int iParam0)
{
	return iParam0->f_26;
}

int func_747(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

float func_748(int iParam0)
{
	return iParam0->f_17;
}

int func_749(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_5(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_750(int iParam0)
{
	return iParam0->f_18;
}

int func_751(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_460(iVar0, 0)))
		{
			if (func_624(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_752(int iParam0)
{
	return iParam0->f_23;
}

int func_753(int iParam0)
{
	return iParam0->f_21;
}

int func_754(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_755(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_329(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_756(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_977(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_757(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_205(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_758(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_205(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_759(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_205(iParam1))
	{
		return 0;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_760(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_761(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_463(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_762(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

int func_763(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_108(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_764(int iParam0)
{
	return iParam0->f_24;
}

int func_765(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_766(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_767(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_760(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_245(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_245(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_768(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_437(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_769(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_769(iParam1, iVar1))
				{
					if (func_108(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_769(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_770(int iParam0)
{
	if (func_556())
	{
		return 0;
	}
	return func_550(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_771(int iParam0)
{
	return iParam0->f_20;
}

int func_772(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_773(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 0);
	if (iVar1 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_774(int iParam0)
{
	return func_788(iParam0, 2);
}

void func_775(int iParam0)
{
	int iVar0;

	if (func_114() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_334(func_978(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_978(iVar0), func_372(), 1))
			{
				func_979(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_777(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_980() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_980();
					}
					func_563(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_345(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_778(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_589(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_590(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_779(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_70(iParam0, 8192))
	{
		iVar0 = func_590(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_780(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_348(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_781(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_45(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_142(vParam1))
	{
		return;
	}
	if (!func_41(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_142(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_362(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_782(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_818(iVar0, iParam0);
		iVar0++;
	}
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_784(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_785(int iParam0)
{
	if (!func_104(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_786(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_787()
{
	return Global_1894899 & 2 != 0;
}

bool func_788(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_789(int iParam0)
{
	if (!func_442(iParam0))
	{
		return -1;
	}
	return func_981(iParam0);
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_556() && !func_555(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

int func_791(int iParam0)
{
	return iParam0 & 31;
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_793(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_794(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_648(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_795(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_796(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_797(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_798(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_799(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_800(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_982(iParam0, iParam6);
	func_983(iParam0, iParam5);
	func_984(iParam0, iParam4);
	func_985(iParam0, iParam3);
	func_986(iParam0, iParam2);
	func_987(iParam0, iParam1);
}

bool func_801(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_988(iParam1) || !func_988(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_802(var uParam0)
{
	return func_530(*uParam0, 1);
}

int func_803(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_989(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_804(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_990(iParam1))
		{
			func_991(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_992(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_993(iParam0, 0);
			bVar0 = true;
		}
		func_994(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

struct<5> func_805(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_995(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_677(bParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_809(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_996(bParam1) };
			if (bParam2 && func_997(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_807(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_807(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_808(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_998(bParam1) };
			switch (func_681(bParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_999(bParam0, -1823706425))
			{
				Var0 = { func_809(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_999(bParam0, -1483207246))
			{
				Var0 = { func_809(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1000(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_806(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_807(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1001(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_808(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1002(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_809(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_657(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_873(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_810(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1003(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1000(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_685(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_873(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_811(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar1 = func_449(WEAPON::_0xD3750CCC00635FC2(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

int func_812(int iParam0)
{
	if (func_41(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_813(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_814(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_815(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_816(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_817(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_818(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_819(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1004((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_820(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_836((*uParam0)[iVar0 /*17*/]))
		{
			func_165((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_821(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_1005(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_333(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_165((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_822(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_336(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_823(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_824(int* iParam0, int* iParam1)
{
	if (!func_608(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_165(iParam1, 19);
			func_838(iParam0, 23);
			func_1006(iParam1, 2);
		}
	}
}

void func_825(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1005(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_826(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_827(int iParam0)
{
	return (func_1007(iParam0, 4) || func_1007(iParam0, 5));
}

bool func_828(int iParam0)
{
	return func_1007(iParam0, 7);
}

bool func_829(int iParam0)
{
	return func_1007(iParam0, 6);
}

void func_830(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_836(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1005(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_831(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1008(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1009(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_382(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_382(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1010(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

int func_832(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_1011(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_1012(iParam1, 1))
	{
		func_1013(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_833(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_163((*uParam0)[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_834(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_835(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_836(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_837(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_838(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_839(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_840(int iParam0, int iParam1)
{
	if (func_114() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_841(int iParam0)
{
	if (func_114() != -1)
	{
		if (func_843(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_843(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_842(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_843(iParam0, 65536) && !func_843(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_843(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_843(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_843(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_844(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_845()
{
	return Global_1905944->f_5694;
}

int func_846(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_848(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1014(bParam1);
	}
}

void func_849(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_850(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_851(int iParam0)
{
	vector3 vVar0;

	if (!func_1015(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_852(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1015(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_853(int iParam0)
{
	return iParam0;
}

int func_854()
{
	int iVar0;

	iVar0 = func_625();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_855(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_856(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_857(int iParam0, int iParam1, var uParam2)
{
	if (!func_856(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

var func_858(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

void func_859(bool bParam0)
{
	if (bParam0)
	{
		func_1016(4);
	}
	func_1016(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

bool func_860(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_861(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_862(bool bParam0)
{
	return func_677(bParam0) == joaat("weapon");
}

int func_863(bool bParam0)
{
	var uVar0;

	if (func_114() != -1)
	{
		return 0;
	}
	if (func_679(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_869(bParam0, &uVar0, 1, 0, 0);
	}
	return func_706(bParam0, 1, 0);
}

void func_864(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_677(bParam0) != joaat("weapon"))
	{
		return;
	}
	bVar0 = func_683(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_397(bVar0))
	{
		if (func_114() == -1)
		{
			func_684(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, 0) && func_661(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_737(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_865(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_678(bParam0, 58855631))
	{
		func_1017(bParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_866(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (!func_685(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_873(bParam3), bParam0);
}

int func_867(bool bParam0, bool bParam1)
{
	if (func_688(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_873(bParam1), bParam0, 0);
}

int func_868()
{
	if (func_114() != -1)
	{
		return 0;
	}
	if (!func_670())
	{
		return 0;
	}
	if (!func_550(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_550(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_550(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_550(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_550(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_550(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_550(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_550(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_550(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_550(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_550(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_550(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_550(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_550(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_550(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_550(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_550(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_550(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_550(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_550(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_550(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_550(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_550(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_550(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_550(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_550(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_869(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1018(&bParam0);
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (!func_685(0))
	{
		bParam3 = true;
	}
	if (func_862(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_996(0) };
			Var4.f_9 = -1591664384;
			if (!func_807(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_808(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_997(bParam0, 1))
			{
				if (!func_807(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_808(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_1019(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_866(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_1001(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_873(bParam4), bParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_870(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_871(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_677(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_678(bParam0, 1399091007))
	{
		func_933(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_872(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_1020(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1021(&Var0, func_996(0));
	}
	if (!func_1022(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_946(iVar14);
	return uVar15;
}

int func_873(bool bParam0)
{
	if (func_114() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_874()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_875(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_876(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_114() != -1)
	{
		return;
	}
	iVar0 = func_1023(iParam0);
	fVar1 = func_1024(iParam0);
	if ((Global_1347477->f_117 || !func_627(31)) || !func_1025(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1026(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1027(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_637(MISC::_CREATE_VAR_STRING(6, func_1028(iParam0), fVar1), "itemtype_textures", func_1029(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_877(int iParam0)
{
	int iVar0;

	iVar0 = func_789(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_879(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1015(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_880(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_673() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1030(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1031(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_914() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1032(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_914(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1033(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_915() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1034(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_915(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_879(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_881(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_882(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_883(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_884(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			bVar2 = func_1035(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_706(bVar2, 1, 0) || func_1037(func_1036(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_888(func_1035(iVar0))), func_888(func_1035(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_914() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1038(iVar0)), func_1038(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1032() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1038(iVar0)), func_1038(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1038(iVar0)), func_1038(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_925(iParam3, func_1039(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_921(bVar2) - iParam7) >= func_879(iParam3, func_1040(iVar0));
				}
				else
				{
					bVar1 = func_921(bVar2) >= func_879(iParam3, func_1040(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_921(bVar2) + iParam7) >= func_879(iParam3, func_1040(iVar0));
			}
			else
			{
				bVar1 = func_921(bVar2) >= func_879(iParam3, func_1040(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1041(bVar2)), func_1041(bVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1042(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1043(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1043(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_915() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1044(iVar0)), func_1044(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1034() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1044(iVar0)), func_1044(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1044(iVar0)), func_1044(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			bVar2 = func_925(iParam3, func_1039(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_921(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1045(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1045(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1046(bVar2)), func_1046(bVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_885(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1033() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, 1, 0);
	}
	return 1;
}

int func_886(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_442(func_552(0)) && ((func_1047(0) == 1 || func_1047(0) == 8) || func_1047(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_887(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_888(int iParam0)
{
	switch (iParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_889(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_890(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_891(int iParam0)
{
	bool bVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1048(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1049(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1049(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1049(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1050(1);
			break;
		case 34:
			func_1051(1);
			break;
		case 35:
			func_1052(1);
			break;
		case 36:
			break;
		case 37:
			func_1053(0);
			break;
		case 38:
			func_1054(0);
			break;
		case 39:
			func_1055(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_670()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_889("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_456(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_670()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_889("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_456(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_670()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_889("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_456(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_670()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_889("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_456(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_114() == -1)
			{
				if (!func_959(99217379) || func_1056(99217379) == 2110595215)
				{
					if (func_556())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_706(bVar0, 1, 0))
					{
						func_730(bVar0, 1, 752097756);
					}
					func_709(Global_35, bVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_114() == -1)
			{
				if (!func_706(1013902307, 1, 0))
				{
					func_730(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_114() == -1)
			{
				if (!func_706(1013902307, 1, 0))
				{
					func_730(1013902307, 1, 752097756);
				}
				if (!func_706(142640135, 1, 0))
				{
					func_730(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_114() == -1)
			{
				if (!func_706(786809402, 1, 0))
				{
					func_730(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_114() == -1)
			{
				if (!func_706(786809402, 1, 0))
				{
					func_730(786809402, 1, 752097756);
				}
				if (!func_706(-518019409, 1, 0))
				{
					func_730(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1057();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_892(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_893(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_428();
	func_563(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_894(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_1058(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_895(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_896(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_627(50))
			{
				if (!func_627(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_627(51))
			{
				if (!func_627(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_897(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_657(bParam1, 0))
	{
		return 0;
	}
	if (func_677(bParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_114() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_681(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_1059(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_678(bParam1, 866047851))
	{
		iVar5 = func_935(iVar4, 1);
		if (func_1060(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(bVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_681(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_678(bParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_1061(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1062(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1062(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_681(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_678(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_898()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_899()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_900()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_706(func_1063(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_901(bool bParam0)
{
	switch (bParam0)
	{
		case -1217729597: /* GXTEntry: "Gold Jointed Bracelet" */
		case 363594903: /* GXTEntry: "Vintage Civil War Handcuffs" */
		case 425319238: /* GXTEntry: "Legendary Alligator Tooth" */
			return -62615415 /* GXTEntry: "Alligator Tooth Talisman" */;
		case -1540119664: /* GXTEntry: "Legendary Bear Claw" */
		case 446659922: /* GXTEntry: "Silver Chain Bracelet" */
		case 2100194981: /* GXTEntry: "Quartz Chunk" */
			return -832719552 /* GXTEntry: "Bear Claw Talisman" */;
		case -1018798851: /* GXTEntry: "Cobalt Petrified Wood" */
		case -757567246: /* GXTEntry: "Gold Earring" */
		case -390982951: /* GXTEntry: "Legendary Boar Tusk" */
			return -184823984 /* GXTEntry: "Boar Tusk Talisman" */;
		case -2054602073: /* GXTEntry: "Legendary Bison Horn" */
		case -585121677: /* GXTEntry: "Silver Earring" */
		case -378441099: /* GXTEntry: "Abalone Shell Fragment" */
			return -1941112926 /* GXTEntry: "Bison Horn Talisman" */;
		case 1566949660: /* GXTEntry: "Old Brass Compass" */
			return -121629511 /* GXTEntry: "Raven Claw Talisman" */;
	}
	return 0;
}

int func_902(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			if (bParam1 == 425319238)
			{
				bVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				bVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (bParam1 == 363594903)
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			if (bParam1 == -1540119664)
			{
				bVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				bVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (bParam1 == 2100194981)
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984: /* GXTEntry: "Boar Tusk Talisman" */
			if (bParam1 == -390982951)
			{
				bVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				bVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (bParam1 == -1018798851)
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			if (bParam1 == -2054602073)
			{
				bVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				bVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (bParam1 == -378441099)
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_706(bVar0, 1, 0) && func_706(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_903(bool bParam0)
{
	switch (bParam0)
	{
		case 968830139: /* GXTEntry: "Legendary Beaver Tooth" */
			return -224110471 /* GXTEntry: "Beaver Tooth Trinket" */;
		case -649219937: /* GXTEntry: "Legendary Tatanka Bison Horn" */
			return 1289585739 /* GXTEntry: "Tatanka Bison Horn Trinket" */;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -269048282 /* GXTEntry: "Buck Antler Trinket" */;
		case -718162726: /* GXTEntry: "Legendary Cougar Fang" */
			return 1441506783 /* GXTEntry: "Cougar Fang Trinket" */;
		case -1284282080: /* GXTEntry: "Legendary Coyote Fang" */
			return 780305678 /* GXTEntry: "Coyote Fang Trinket" */;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return 1811977508 /* GXTEntry: "Elk Antler Trinket" */;
		case -1445630104: /* GXTEntry: "Legendary Fox Claw" */
			return -935153695 /* GXTEntry: "Fox Claw Trinket" */;
		case 580970876: /* GXTEntry: "Lion\'s Paw" */
			return 1299744282 /* GXTEntry: "Lion\'s Paw Trinket" */;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1631240196 /* GXTEntry: "Moose Antler Trinket" */;
		case 1946030891: /* GXTEntry: "Legendary Panther Eye" */
			return 517396587 /* GXTEntry: "Panther\'s Eye Trinket" */;
		case -1511404982: /* GXTEntry: "Legendary Pronghorn Horn" */
			return 1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */;
		case -944465290: /* GXTEntry: "Legendary Ram Horn" */
			return 1816443627 /* GXTEntry: "Ram Horn Trinket" */;
		case -1701098855: /* GXTEntry: "Legendary Wolf Heart" */
			return -127011478 /* GXTEntry: "Wolf Heart Trinket" */;
		default:
			break;
	}
	return 0;
}

int func_904(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1064(iParam0);
	if (iVar0 != -15)
	{
		func_563(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_564(iVar0, 1);
	}
	return 0;
}

int func_905(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_706(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = &Var1.f_1[iVar24];
			if (func_657(bVar25, 0) && func_678(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_906(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_637(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_907(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1065())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_637(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1066(iVar0);
			func_1067(iVar0, 0, 0);
		}
		func_637(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_635(func_634(1644987397), iVar1);
	}
}

void func_908(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_909(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_910(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_911(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_912(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_921(bVar9);
	iVar2 = func_921(bVar10);
	iVar3 = func_921(bVar11);
	iVar5 = func_922(bVar9);
	iVar6 = func_922(bVar10);
	iVar7 = func_922(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_921(bVar12);
		iVar8 = func_922(bVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_913(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_914()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1068(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_915()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_916(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case -949689219:
			if (bParam1 == -1866642239)
			{
				bVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (bParam1 == 444160793)
			{
				bVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (bParam1 == -1969404854)
			{
				bVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == 1761263432)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == -843795569)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (bParam1 == -832850511)
			{
				bVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -935543049)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1464585113)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1290897778)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (bParam1 == -100913452)
			{
				bVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 313332607)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -124539232)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 102446365)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -1882344824)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (bParam1 == 905173572)
			{
				bVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 1432949803)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == -983831788)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 59384454)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 924882045)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1045(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1045(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1045(bVar0))
		{
			*sParam2++;
		}
		if (func_1045(bVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1045(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1045(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1045(bVar0))
		{
			*sParam2++;
		}
		if (func_1045(bVar1))
		{
			*sParam2++;
		}
		if (func_1045(bVar0) && func_1045(bVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1045(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1045(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1045(bVar0))
		{
			*sParam2++;
		}
		if (func_1045(bVar1))
		{
			*sParam2++;
		}
		if (func_1045(bVar2))
		{
			*sParam2++;
		}
		if ((func_1045(bVar0) && func_1045(bVar1)) && func_1045(bVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1045(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1045(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1045(bVar0))
		{
			*sParam2++;
		}
		if (func_1045(bVar1))
		{
			*sParam2++;
		}
		if (func_1045(bVar2))
		{
			*sParam2++;
		}
		if (func_1045(bVar3))
		{
			*sParam2++;
		}
		if (((func_1045(bVar0) && func_1045(bVar1)) && func_1045(bVar2)) && func_1045(bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_917(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1069(1497516462);
			func_1070(2016141805);
			func_1070(1010885152);
			func_1070(-502324015);
			break;
		case 2016141805:
			func_1070(1497516462);
			func_1069(2016141805);
			func_1070(1010885152);
			func_1070(-502324015);
			break;
		case 1010885152:
			func_1070(1497516462);
			func_1070(2016141805);
			func_1069(1010885152);
			func_1070(-502324015);
			break;
		case -502324015:
			func_1070(1497516462);
			func_1070(2016141805);
			func_1070(1010885152);
			func_1069(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1070(-538889627);
			func_1070(-538880323);
			func_1070(-1056767524);
			func_1069(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1071();
			func_1069(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1072();
			func_1069(iParam0);
			break;
		case 2019386373:
			func_1070(-664252410);
			func_1070(2109952320);
			func_1069(2019386373);
			break;
		case -664252410:
			func_1070(2019386373);
			func_1070(2109952320);
			func_1069(-664252410);
			break;
		case 2109952320:
			func_1070(2019386373);
			func_1070(-664252410);
			func_1069(2109952320);
			break;
		case -1674179981:
			func_1070(-1835851517);
			func_1070(-1838352012);
			func_1069(-1674179981);
			break;
		case -1835851517:
			func_1070(-1674179981);
			func_1070(-1838352012);
			func_1069(-1835851517);
			break;
		case -1838352012:
			func_1070(-1674179981);
			func_1070(-1835851517);
			func_1069(-1838352012);
			break;
		case -1717960576:
			func_1070(210001842);
			func_1069(-1717960576);
			break;
		case 210001842:
			func_1070(-1717960576);
			func_1069(210001842);
			break;
		case -150493654:
			func_1070(-1271608261);
			func_1070(1846061697);
			func_1070(-1145519186);
			func_1069(-150493654);
			break;
		case -1271608261:
			func_1070(-150493654);
			func_1070(1846061697);
			func_1070(-1145519186);
			func_1069(-1271608261);
			break;
		case 1846061697:
			func_1070(-150493654);
			func_1070(-1271608261);
			func_1070(-1145519186);
			func_1069(1846061697);
			break;
		case -1145519186:
			func_1070(-150493654);
			func_1070(-1271608261);
			func_1070(1846061697);
			func_1069(-1145519186);
			break;
		case 1766284049:
			func_1070(280705402);
			func_1070(1926308480);
			func_1069(1766284049);
			break;
		case 280705402:
			func_1070(1766284049);
			func_1070(1926308480);
			func_1069(280705402);
			break;
		case 1926308480:
			func_1070(1766284049);
			func_1070(280705402);
			func_1069(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1070(439465264);
				func_1069(1609506757);
			}
			else
			{
				func_1070(1609506757);
				func_1070(439465264);
			}
			break;
		case 439465264:
			if (func_592(1609506757))
			{
				if (bParam1)
				{
					func_1069(439465264);
				}
				else
				{
					func_1070(439465264);
				}
			}
			break;
		case 1822001510:
			func_1070(-1612662716);
			func_1069(1822001510);
			break;
		case -1612662716:
			func_1070(1822001510);
			func_1069(-1612662716);
			break;
		case 1306158345:
			func_1070(1952610440);
			func_1070(-223469678);
			func_1070(-404698347);
			func_1070(1517904467);
			func_1069(1306158345);
			break;
		case 1952610440:
			func_1070(1306158345);
			func_1070(-223469678);
			func_1070(-404698347);
			func_1070(1517904467);
			func_1069(1952610440);
			break;
		case -223469678:
			func_1070(1306158345);
			func_1070(1952610440);
			func_1070(-404698347);
			func_1070(1517904467);
			func_1069(-223469678);
			break;
		case -404698347:
			func_1070(1306158345);
			func_1070(1952610440);
			func_1070(-223469678);
			func_1070(1517904467);
			func_1069(-404698347);
			break;
		case 1517904467:
			func_1070(1306158345);
			func_1070(1952610440);
			func_1070(-223469678);
			func_1070(-404698347);
			func_1069(1517904467);
			break;
		case 1376646519:
			func_1070(931649776);
			func_1070(-434590080);
			func_1070(1743048395);
			func_1070(449774763);
			func_1069(1376646519);
			break;
		case 931649776:
			func_1070(1376646519);
			func_1070(-434590080);
			func_1070(1743048395);
			func_1070(449774763);
			func_1069(931649776);
			break;
		case -434590080:
			func_1070(1376646519);
			func_1070(931649776);
			func_1070(1743048395);
			func_1070(449774763);
			func_1069(-434590080);
			break;
		case 1743048395:
			func_1070(1376646519);
			func_1070(931649776);
			func_1070(-434590080);
			func_1070(449774763);
			func_1069(1743048395);
			break;
		case 449774763:
			func_1070(1376646519);
			func_1070(931649776);
			func_1070(-434590080);
			func_1070(1743048395);
			func_1069(449774763);
			break;
		case -1414537028:
			func_1070(38162571);
			func_1070(1350391819);
			func_1070(54073871);
			func_1069(-1414537028);
			break;
		case 38162571:
			func_1070(-1414537028);
			func_1070(1350391819);
			func_1070(54073871);
			func_1069(38162571);
			break;
		case 1350391819:
			func_1070(-1414537028);
			func_1070(38162571);
			func_1070(54073871);
			func_1069(1350391819);
			break;
		case 54073871:
			func_1070(-1414537028);
			func_1070(38162571);
			func_1070(1350391819);
			func_1069(54073871);
			break;
		case 198200492:
			func_1069(198200492);
			func_1070(-1124061431);
			func_1070(52706132);
			func_1070(-259123672);
			break;
		case -1124061431:
			func_1070(198200492);
			func_1069(-1124061431);
			func_1070(52706132);
			func_1070(-259123672);
			break;
		case 52706132:
			func_1070(198200492);
			func_1070(-1124061431);
			func_1069(52706132);
			func_1070(-259123672);
			break;
		case -259123672:
			func_1070(198200492);
			func_1070(-1124061431);
			func_1070(52706132);
			func_1069(-259123672);
			break;
		case -919512195:
			func_1069(-919512195);
			func_1070(-1925798111);
			func_1070(420709909);
			func_1070(1703426636);
			break;
		case -1925798111:
			func_1069(-1925798111);
			func_1070(-919512195);
			func_1070(420709909);
			func_1070(1703426636);
			break;
		case 420709909:
			func_1069(420709909);
			func_1070(-919512195);
			func_1070(-1925798111);
			func_1070(1703426636);
			break;
		case 1703426636:
			func_1069(1703426636);
			func_1070(-919512195);
			func_1070(-1925798111);
			func_1070(420709909);
			break;
		case -1223121209:
			func_1069(-1223121209);
			func_1070(630808005);
			break;
		case 630808005:
			func_1069(630808005);
			func_1070(-1223121209);
			break;
		case 1453909576:
			func_1069(1453909576);
			func_1070(1643531967);
			break;
		case 1643531967:
			func_1069(1643531967);
			func_1070(1453909576);
			break;
		case 0:
			func_1069(0);
			func_1070(473295046);
			func_1070(-1738165526);
			break;
		case 473295046:
			func_1069(473295046);
			func_1070(0);
			func_1070(-1738165526);
			break;
		case -1738165526:
			func_1069(-1738165526);
			func_1070(0);
			func_1070(473295046);
			break;
		case 932909855:
			func_1069(932909855);
			func_1070(2051822093);
			break;
		case 2051822093:
			func_1069(2051822093);
			func_1070(932909855);
			break;
		case 405586984:
			func_1069(405586984);
			func_1070(1509509592);
			func_1070(-959357075);
			func_1070(-1311865656);
			break;
		case 1509509592:
			func_1069(1509509592);
			func_1070(405586984);
			func_1070(-959357075);
			func_1070(-1311865656);
			break;
		case -959357075:
			func_1069(-959357075);
			func_1070(1509509592);
			func_1070(405586984);
			func_1070(-1311865656);
			break;
		case -1311865656:
			func_1069(-1311865656);
			func_1070(1509509592);
			func_1070(-959357075);
			func_1070(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1069(-524145696);
			}
			else
			{
				func_1070(-524145696);
			}
			func_1070(1626481264);
			func_1070(282809459);
			break;
		case 282809459:
			func_1069(282809459);
			func_1070(1626481264);
			func_1070(-524145696);
			break;
		case 1626481264:
			func_1069(1626481264);
			func_1070(-524145696);
			func_1070(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1069(885203519);
			}
			else
			{
				func_1070(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1069(-1080627546);
			}
			else
			{
				func_1070(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_592(iParam0))
				{
					func_1069(iParam0);
				}
			}
			else if (func_592(iParam0))
			{
				func_1070(iParam0);
			}
			break;
	}
}

void func_918(int iParam0)
{
	if (!func_1073(iParam0))
	{
		func_1075(func_1074(iParam0));
	}
}

int func_919()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1073(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_920(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_921(bVar9);
	iVar2 = func_921(bVar10);
	iVar3 = func_921(bVar11);
	iVar5 = func_922(bVar9);
	iVar6 = func_922(bVar10);
	iVar7 = func_922(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_921(bVar12);
		iVar8 = func_922(bVar12);
	}
	if (bParam0 == bVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (bParam0 == bVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0 == bVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (bParam0 == bVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_921(bool bParam0)
{
	int iVar0;

	if (func_706(bParam0, 1, 0))
	{
		iVar0 = func_661(bParam0, 0, 0);
	}
	return iVar0;
}

int func_922(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 7;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 10;
		case 2116770557:
			return 25;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 3;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 7;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 5;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 10;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 5;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 5;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 5;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 5;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 10;
		default:
			break;
	}
	return 0;
}

int func_923(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_924(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_925(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1015(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_926(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_925(iParam1, 5) || bParam0 == func_925(iParam1, 6)) || bParam0 == func_925(iParam1, 7)) || bParam0 == func_925(iParam1, 8)) || bParam0 == func_925(iParam1, 9))
	{
		func_916(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_674(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_676(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_927(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_925(iParam1, 5) || bParam0 == func_925(iParam1, 6)) || bParam0 == func_925(iParam1, 7)) || bParam0 == func_925(iParam1, 8)) || bParam0 == func_925(iParam1, 9))
	{
		if (func_916(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_674(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_676(51, 0, 0, iVar0, func_879(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_674(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_676(51, 0, 0, iVar0, func_879(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_928()
{
	if (func_877(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_929(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_871(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_944("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_945(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_396(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_946(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_946(iVar1);
	}
	return 0;
}

void func_930(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_931(int iParam0)
{
	if (!func_1076(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_932(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_933(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_934(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1077(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_935(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_936(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1078();
	if (iParam2 == 39)
	{
		Var0 = { func_805(bParam0, 1, 0) };
		iParam2 = func_935(func_934(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_678(bParam0, 866047851) && func_1060(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_939(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1079(func_1077(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1080(iParam2);
	func_1081(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1082(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1082(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1083(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1084(bParam0, iParam2, iParam1, func_114() != -1);
	if (bParam4)
	{
		func_1085(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1085(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1086(func_1077(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_937(bool bParam0, bool bParam1, bool bParam2)
{
	func_1087(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_938(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1088(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1089(Var0);
}

bool func_939(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_940()
{
	func_1090(&(Global_1946804->f_2776));
	func_1091(32768);
	func_1086(1108822547, 8, 6);
}

int func_941(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_935(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_942(int iParam0)
{
	struct<4> Var0;

	if (func_1092(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1093(Var0);
}

void func_943(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1093(Var0);
}

int func_944(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_873(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_945(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_946(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_947()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1094())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1095(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1095(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1096();
	fVar2 = func_1097();
	fVar3 = func_1098();
	fVar4 = func_1099();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1100()));
	fVar7 = (func_1095(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1101(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1102(3, fVar9, fVar9 > 100f);
	return func_1103(fVar7, -100f, 100f);
}

float func_948()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1094())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1095(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1095(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1096();
	fVar2 = func_1097();
	fVar3 = func_1098();
	fVar4 = func_1099();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1100()));
	fVar7 = (func_1095(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1101(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1102(2, fVar9, fVar9 > 100f);
	return func_1103(fVar7, -100f, 100f);
}

float func_949()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1094())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1095(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1104())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1105())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1095(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1096();
	fVar2 = func_1097();
	fVar3 = func_1098();
	fVar4 = func_1099();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1100()));
	fVar7 = (func_1095(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1101(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1102(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1095(0);
	}
	return func_1103(fVar7, -100f, 100f);
}

bool func_950(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_951(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_657(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_869(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_685(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_873(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_952(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1106();
			}
			break;
	}
	return 0;
}

int func_953(bool bParam0)
{
	switch (bParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_954(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_955(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_954(iParam0))
	{
		return;
	}
	if (func_1107(iParam0))
	{
		return;
	}
	if (!func_1108(iParam0))
	{
		func_1109(iParam0, 1, 0);
	}
	bVar0 = func_1110(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1111(iParam0, 512))
		{
			func_938(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_1112() && !bParam1) && !func_206(0, 0, 1))
	{
		func_1113(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_1114(iParam0, 6);
	if (bParam2)
	{
		if (!func_206(0, 0, 1))
		{
			func_536(1, 4);
		}
	}
}

int func_956()
{
	return Global_1946804->f_1;
}

bool func_957(int iParam0, bool bParam1)
{
	return func_952(iParam0, 0) < func_1115(iParam0, bParam1);
}

int func_958(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_681(bVar1) == iParam0)
		{
			*iParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_959(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_935(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_935(iParam0, 1) /*11*/];
}

void func_960(int iParam0, bool bParam1)
{
	if (func_678(bParam1, 130796156))
	{
		func_1116(bParam1, 0);
	}
	else if (func_678(bParam1, 930141731))
	{
		func_1116(bParam1, 1);
		func_1117(iParam0);
	}
}

void func_961(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_962(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1118(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1119(uParam2, iParam0, Var1);
	return 1;
}

int func_963(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_964(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_965(bool bParam0)
{
	var uVar0;

	if (!func_1120(bParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_966()
{
	return !&Global_1911774;
}

void func_967(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = bParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_968(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_969(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_970(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_971(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1121(1);
	}
}

void func_972(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_971(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1121(1);
	}
}

int func_973()
{
	if (func_1122())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_974(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_975(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_976(int iParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_345(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_69(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_977(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_978(int iParam0)
{
	if (!func_1123(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_979(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1124(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_980()
{
	return &Global_1899515;
}

int func_981(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_1125(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

void func_982(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_983(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_984(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_795(*iParam0);
	iVar1 = func_794(*iParam0);
	if (iParam1 < 1 || iParam1 > func_799(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_985(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_986(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_987(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_988(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_798(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_797(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_429(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_794(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_795(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_796(iParam0);
	if (iVar5 < 1 || iVar5 > func_799(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

bool func_989(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_990(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_991(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1126(iParam0, iParam1))
		{
			if (func_1127(iParam0, iParam1))
			{
				if (func_1128(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1129(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_992(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_993(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_994(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

struct<4> func_995(bool bParam0)
{
	return func_809(joaat("character"), func_1130(), -1591664384, bParam0);
}

struct<4> func_996(bool bParam0)
{
	int iVar0;

	iVar0 = func_873(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_809(923904168, func_995(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_809(923904168, func_995(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_809(923904168, func_995(bParam0), -740156546, 0);
}

int func_997(bool bParam0, bool bParam1)
{
	if (func_681(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_867(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_998(bool bParam0)
{
	int iVar0;

	iVar0 = func_873(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_809(271701509, func_995(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_809(271701509, func_995(bParam0), 12999093, 0);
}

int func_999(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_681(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1000(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_873(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1001(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_809(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_873(bParam6), &Var0, 0);
	return uVar4;
}

int func_1002(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_873(0);
	*uParam1 = { func_809(bParam0, func_996(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1003(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_1004(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1005(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_333(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_332(&(iParam1->f_6), 0, 1);
	}
	if (!func_333(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_836(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1131(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_333(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1010(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1132(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1133(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_380(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1132(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_382(iParam1->f_6, 0, 1);
				}
				else
				{
					func_382(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1006(int* iParam0, int iParam1)
{
	if (!func_383(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_165(iParam0, 14);
		}
	}
}

int func_1007(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_1008(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_1009(int iParam0, bool bParam1)
{
	if (bParam1 && !func_333(iParam0))
	{
		return false;
	}
	return !func_788(iParam0, 4);
}

void func_1010(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_333(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	func_1132(iParam0, 18, 0, 1);
	func_1132(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_1011(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_333(iParam0))
	{
		return false;
	}
	iVar0 = func_528(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1012(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_333(iParam0))
	{
		return false;
	}
	iVar0 = func_528(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1013(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_333(iParam0))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1014(bool bParam0)
{
	func_1134(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

int func_1015(int iParam0, var uParam1)
{
	if (!func_1135(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1016(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1017(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1018(bool bParam0)
{
	if (!func_657(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*bParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*bParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*bParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*bParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1019(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_805(bParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_806((375 + iVar29), 1);
		if (func_807(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_808(bParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

struct<14> func_1020(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1021(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1022(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_873(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1023(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1024(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1136(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1136(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1136(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1025(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_627(18);
		case 2:
			return func_627(20);
		case 1:
			return func_627(19);
		default:
			break;
	}
	return 1;
}

int func_1026(int iParam0)
{
	return func_1137(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1027(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_114() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_627(31))
	{
		return;
	}
	iVar0 = func_1026(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1026(iParam0);
	if (func_1138(iParam0) && func_1139(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1140(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1141(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_456(func_1142(iParam0), 0);
					}
					func_1143(iParam0, iVar2, iVar3);
					func_1144(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1028(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1030()
{
	return func_1145(Global_40.f_12018);
}

int func_1031()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_878(iVar1);
		if (func_706(bVar2, 1, 0) || func_1037(func_1036(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1032()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1146(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1033()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1042(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1034()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1035(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1036(bool bParam0)
{
	switch (bParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1037(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1038(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1040(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1041(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return "COL_RO_CIGAR_FOUND";
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return "COL_SF_FOUND";
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return "COL_RO_SPIDER_FOUND";
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return "COL_RO_QUEENS_FOUND";
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1042(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1043(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1044(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1045(bool bParam0)
{
	if (func_1147(bParam0) && func_706(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1148(bParam0) && func_1149(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1046(bool bParam0)
{
	if (!func_657(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_724(bParam0));
}

int func_1047(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1048(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1049(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1050(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1051(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1052(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1053(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_1054(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1055(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1056(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_935(iParam0, 1) /*3*/]);
}

void func_1057()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1150();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_684(joaat("weapon_revolver_cattleman_john"));
		func_730(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_684(joaat("weapon_melee_knife_john"));
		func_730(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

bool func_1058(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

int func_1059(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_805(bParam0, 1, 0) };
	return func_934(Var0.f_4);
}

int func_1060(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_1061(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_935(func_1151(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_681(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1062(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == &Global_1946804->f_57[func_935(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_939(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139 /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return -649219937 /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return -858567048 /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return -718162726 /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return -1284282080 /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return -725003445 /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return -1445630104 /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return 580970876 /* GXTEntry: "Lion\'s Paw" */;
		case 8:
			return 967601061 /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return 1946030891 /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return -1511404982 /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return -944465290 /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return -1701098855 /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return 425319238 /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return 363594903 /* GXTEntry: "Vintage Civil War Handcuffs" */;
		case 15:
			return -1217729597 /* GXTEntry: "Gold Jointed Bracelet" */;
		case 16:
			return -1540119664 /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return 2100194981 /* GXTEntry: "Quartz Chunk" */;
		case 18:
			return 446659922 /* GXTEntry: "Silver Chain Bracelet" */;
		case 19:
			return -390982951 /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return -1018798851 /* GXTEntry: "Cobalt Petrified Wood" */;
		case 21:
			return -757567246 /* GXTEntry: "Gold Earring" */;
		case 22:
			return -2054602073 /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return -378441099 /* GXTEntry: "Abalone Shell Fragment" */;
		case 24:
			return -585121677 /* GXTEntry: "Silver Earring" */;
		case 25:
			return 1566949660 /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_1064(int iParam0)
{
	return func_1152(iParam0, -1);
}

int func_1065()
{
	if (func_557())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1066(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1153((Global_40.f_4283.f_325 + iParam0));
}

void func_1067(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1065())
	{
		func_637(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_637(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1068(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_1069(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_814(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_1070(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_814(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1071()
{
	func_1070(-939420910);
	func_1070(-1187950766);
	func_1070(356365161);
	func_1070(753127042);
	func_1070(-2038424081);
	func_1070(1884271742);
	func_1070(459290420);
}

void func_1072()
{
	func_1070(704802028);
	func_1070(588987611);
	func_1070(2008888900);
	func_1070(1649996811);
	func_1070(227918160);
	func_1070(168171957);
	func_1070(1193080109);
	func_1070(-491981251);
	func_1070(-639037538);
	func_1070(-618620429);
}

bool func_1073(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1075(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1076(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1077(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1078()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1079(int iParam0)
{
	func_1086(iParam0, 8, 6);
}

void func_1080(int iParam0)
{
	func_1154(&(Global_1946804->f_2589), iParam0);
}

void func_1081(int iParam0, int iParam1)
{
	func_1155(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1082(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1083(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_681(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1156(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1081(iVar1, iVar3);
		}
	}
	if (func_959(-1586649372) && func_1156(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1081(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1081(iVar1, iVar3);
					}
				}
			}
			func_1157(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1157(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1081(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1157(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1081(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1081(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1157(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1157(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1081(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1157(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1081(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1081(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_681(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1081(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_678(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_681(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_681(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1081(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_681(&(uParam0->f_1[iVar1 /*3*/])) || func_678(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1081(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1084(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1158(0);
	if (iParam2 != 0 && func_1159(bParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1160(bParam0, func_1077(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1085(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_114() != -1;
	iVar7 = func_1158(0);
	if (func_939(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1077(iVar0, 1);
			if (func_1161(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1161(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1062(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1162(uParam0);
				if (iVar3 > 0)
				{
					if (!func_939(524288))
					{
						func_1088(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1077(iVar0, 1);
							if (func_1161(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1161(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1062(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1081(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1091(524288);
				}
			}
		}
	}

void func_1086(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_935(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_935(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_935(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1087(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1163(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_114() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1164(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1110(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1110(Global_40.f_7729);
				Global_1946804->f_1378 = func_1110(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1165(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1166(0, 1);
	}
}

void func_1088(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1089(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1167(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1168(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1088(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1167(Param0))
			{
				return;
			}
			func_1168(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1088(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_943(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1090(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1091(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1092(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1093(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1167(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1167(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1168(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1088(8);
}

int func_1094()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1095(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1096()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1169(13);
	iVar1 = func_1170(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1097()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1098()
{
	if (func_557())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1099()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1100()
{
	return Global_1955565->f_3;
}

void func_1101(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1171(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_1102(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1171(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

float func_1103(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1104()
{
	return func_1169(12) <= -99f;
}

bool func_1105()
{
	return func_1169(12) >= 99f;
}

int func_1106()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_681(bVar1) == -999503751)
		{
			if (func_1172() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1107(int iParam0)
{
	if (!func_954(iParam0))
	{
		return 0;
	}
	if (func_1111(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1108(int iParam0)
{
	if (!func_954(iParam0))
	{
		return 0;
	}
	if (func_1111(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1109(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_954(iParam0))
	{
		return;
	}
	if (!func_1108(iParam0))
	{
		func_1114(iParam0, 2);
		if (bParam2)
		{
			if (!func_206(0, 0, 1))
			{
				func_536(1, 4);
			}
		}
		if ((!func_1112() && !bParam1) && !func_206(0, 0, 1))
		{
			func_1113(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1173(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1110(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_1111(int iParam0, int iParam1)
{
	if (!func_954(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1112()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_1113(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1114(int iParam0, int iParam1)
{
	if (!func_954(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1115(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1116(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1174(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_680(50);
			}
			else
			{
				func_680(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_680(51);
			}
			else
			{
				func_680(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1175(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_711();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_711();
			}
			break;
		case 3:
			func_680(24);
			if (bParam1)
			{
				if (!func_1175(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_711();
				}
			}
			break;
	}
}

void func_1117(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1176(0))
			{
				iVar0++;
			}
			if (func_1176(2))
			{
				iVar0++;
			}
			if (func_1176(4))
			{
				iVar0++;
			}
			if (!func_1177(16))
			{
				if (iVar0 == 1)
				{
					func_1178();
					func_456(456, 1);
					func_1179(16);
				}
			}
			if (!func_1177(32))
			{
				if (iVar0 >= 3)
				{
					func_1178();
					func_456(456, 1);
					func_1179(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1176(1))
			{
				iVar0++;
			}
			if (func_1176(3))
			{
				iVar0++;
			}
			if (func_1176(7))
			{
				iVar0++;
			}
			if (!func_1177(1))
			{
				if (iVar0 == 1)
				{
					func_1180();
					func_456(457, 1);
					func_1179(1);
				}
			}
			if (!func_1177(2))
			{
				if (iVar0 >= 3)
				{
					func_1180();
					func_456(457, 1);
					func_1179(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1176(5))
			{
				iVar0++;
			}
			if (func_1176(6))
			{
				iVar0++;
			}
			if (func_1176(8))
			{
				iVar0++;
			}
			if (!func_1177(4))
			{
				if (iVar0 == 1)
				{
					func_1181();
					func_456(455, 1);
					func_1179(4);
				}
			}
			if (!func_1177(8))
			{
				if (iVar0 >= 3)
				{
					func_1181();
					func_456(455, 1);
					func_1179(8);
				}
			}
			break;
	}
}

void func_1118(var uParam0)
{
	func_961(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_961(uParam0, 617531372);
	}
	else
	{
		func_961(uParam0, 291123060);
	}
}

void func_1119(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1182(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1120(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1121(bool bParam0)
{
	if (bParam0)
	{
		func_69(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_345(&(Global_40.f_12018.f_42), 1);
	}
}

int func_1122()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1123(int iParam0)
{
	return iParam0 > -1;
}

int func_1124(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

int func_1125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_1126(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_1127(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1126(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_1129(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_1130()
{
	struct<4> Var0;

	return Var0;
}

int func_1131(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_788(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_1183(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_1132(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_333(iParam0))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1133(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_333(iParam0))
	{
		return;
	}
	iVar0 = func_528(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_1134(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

bool func_1135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

float func_1136(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1023(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1137(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1184(iVar6) - func_1184(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1137(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1140(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1137(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1184(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1184(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1141(int iParam0)
{
	int iVar0;

	if (func_1185(iParam0, &iVar0))
	{
		return func_1184(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1186())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1186())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1186())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1143(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1187(iParam0));
	sVar4 = func_1189(func_1188(iVar3, iParam2));
	sVar6 = func_1190(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1191(iParam0));
	iVar8 = func_1192(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1193(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_887(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1194(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1144(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_1145(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1146(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1147(bool bParam0)
{
	switch (bParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1148(bool bParam0)
{
	switch (bParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1149(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1195(&iVar0, 0, iVar95, &Var1) && !func_1195(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1196(iVar0, &Var1);
			if (func_657(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1150()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1197(Global_35, &uVar0);
	Var30 = { func_995(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1198(0);
	func_1199(7);
	func_1200(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_956() == 1160113249)
	{
		func_1200(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_1200(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1201(Global_35, &uVar0);
}

int func_1151(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_934(iVar0);
}

int func_1152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_873(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_982(&uVar6, iVar0);
	func_983(&uVar6, iVar1);
	func_984(&uVar6, iVar2);
	func_985(&uVar6, iVar3);
	func_986(&uVar6, iVar4);
	func_987(&uVar6, iVar5);
	return uVar6;
}

void func_1153(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_634(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_1154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1202(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1202(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1203(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1155(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1204(uParam0, 1))
	{
		func_1205(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1156(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1157(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_1081(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1081(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_1081(iVar2, iVar0);
		}
	}
}

int func_1158(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_956();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1159(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1160(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_1161(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_935(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_1162(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1163(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_114() == -1)
	{
		func_1206(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1207(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1164(int iParam0, int iParam1)
{
	if (func_114() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_1165(int iParam0, bool bParam1, int iParam2)
{
	func_1208(&(Global_1946804->f_1378), iParam0);
	func_1209(2, iParam0, 6);
	if (bParam1)
	{
		func_1166(0, 1);
	}
}

void func_1166(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1210(0);
	}
	if (bParam0)
	{
		func_1088(8);
		func_1088(512);
	}
	else
	{
		func_1088(8);
		func_1088(16);
	}
}

bool func_1167(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1168(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_1169(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1170(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1171(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_968(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_968(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1172()
{
	return Global_1946804->f_1497;
}

char* func_1173(int iParam0)
{
	bool bVar0;

	bVar0 = func_1110(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1046(bVar0);
}

int func_1174(bool bParam0)
{
	int iVar0;

	if (func_1211(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_1212(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_1213(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_1214(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1175(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_706(func_1215(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1176(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_706(func_1216(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1177(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1178()
{
	int iVar0;

	if (func_114() != -1)
	{
		return;
	}
	func_730(1654063339, 1, 752097756);
	iVar0 = func_1026(1);
	func_1143(1, iVar0, 0);
}

void func_1179(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1180()
{
	int iVar0;

	if (func_114() != -1)
	{
		return;
	}
	func_730(1623931083, 1, 752097756);
	iVar0 = func_1026(2);
	func_1143(2, iVar0, 0);
}

void func_1181()
{
	int iVar0;

	if (func_114() != -1)
	{
		return;
	}
	func_730(-1845241476, 1, 752097756);
	iVar0 = func_1026(0);
	func_1143(0, iVar0, 0);
}

int func_1182(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1183(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_547(iParam0, 1);
	func_548(iParam0, 1);
	func_549(iParam0, 128);
}

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1185(int iParam0, int iParam1)
{
	return 0;
}

int func_1186()
{
	return 0;
}

int func_1187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_873(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_873(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_873(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1188(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_1189(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1190(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1191(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1192(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1195(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1217(iParam1) && !func_1218(iParam1))
	{
		iVar0 = func_1219(iParam1);
	}
	else
	{
		return 0;
	}
	func_1220(uParam3);
	iVar5 = func_1221(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*iParam0);
	return 1;
}

void func_1196(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1222(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1223(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1197(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_396(bVar31))
		{
			(*iParam1)[iVar30] = bVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1198(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_657(bVar1, 0))
		{
			func_1224(bVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1199(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_114() == -1)
	{
		func_1225(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar2 = &Global_1946804->f_2657[iVar0];
		if (func_681(bVar2) != -999503751)
		{
			func_1226(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_1227(bVar2, 0))
		{
			func_1228(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1200(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1229(bParam0))
	{
		return;
	}
	iVar0 = func_681(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1230(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1230(bParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1230(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1230(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1230(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1230(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_1231(0))
	{
		func_1232(bParam0, 1);
		if (func_956() == 1160113249)
		{
			func_1232(func_1231(-2125499975), 0);
		}
		else
		{
			func_1232(func_1231(1160113249), 0);
		}
	}
	func_1233();
	if (func_1234(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_873(0), bParam0, 0);
	}
	func_1228(bParam0, bParam3);
	if (bParam2)
	{
		func_1166(0, 0);
	}
}

void func_1201(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1[iVar0], 0, 0))
			{
				if (func_397(uParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_1202(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1203(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1204(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1205(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1206(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1207(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1208(var uParam0, int iParam1)
{
	int iVar0;

	if (func_114() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1206(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1207(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1209(int iParam0, int iParam1, int iParam2)
{
	if (func_114() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1210(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1211(bool bParam0)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (func_678(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1212(bool bParam0)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (func_678(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1213(bool bParam0)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (func_678(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1214(bool bParam0)
{
	if (!func_657(bParam0, 0))
	{
		return 0;
	}
	if (func_678(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1215(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1235(iParam0);
		case 1:
			return func_1236(iParam0);
		case 2:
			return func_1237(iParam0);
		case 3:
			return func_1238(iParam0);
	}
	return 0;
}

int func_1216(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1239(iParam0);
		case 1:
			return func_1240(iParam0);
		case 2:
			return func_1241(iParam0);
		case 3:
			return func_1242(iParam0);
		case 4:
			return func_1243(iParam0);
		case 5:
			return func_1244(iParam0);
		case 6:
			return func_1245(iParam0);
		case 7:
			return func_1246(iParam0);
		case 8:
			return func_1247(iParam0);
	}
	return 0;
}

int func_1217(int iParam0)
{
	iParam0 = func_1248(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_1218(int iParam0)
{
	int iVar0;

	iParam0 = func_1248(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1217(iParam0))
	{
		return 0;
	}
	iVar0 = func_1219(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1219(int iParam0)
{
	iParam0 = func_1248(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_1220(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1222(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1223(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1224(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_681(bParam0))
	{
		case -2061583405:
			bVar0 = func_1249(bParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1249(bParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1249(bParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1249(bParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1249(bParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1249(bParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1233();
	}
	if (bParam1)
	{
		func_1166(0, 0);
	}
}

void func_1225(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1020(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1022(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_946(iVar0);
	}
}

void func_1226(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1250(iParam2, *uParam0);
	func_1251(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_1227(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_805(bParam0, 0, 0) };
	Var5 = { func_809(bParam0, Var0, Var0.f_4, 0) };
	if (func_1001(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_873(0), &Var5, iParam1);
	return 1;
}

void func_1228(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_805(bParam0, 0, 0) };
	Var5 = { func_809(bParam0, Var0, Var0.f_4, 0) };
	if (func_1001(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_873(0), &Var5, bParam1);
}

int func_1229(bool bParam0)
{
	if (func_114() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (bParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1230(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1252(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1227(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = bVar1;
	if (func_681(bParam0) != -999503751)
	{
		func_1226(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1231(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_956();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_1232(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_805(bParam0, 0, 0) };
	Var5 = { func_809(bParam0, Var0, Var0.f_4, 0) };
	if (func_1001(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_873(0), &Var5);
	return 1;
}

void func_1233()
{
	int iVar0;

	if (func_114() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1234(int iParam0)
{
	return func_1254(func_1253(iParam0));
}

int func_1235(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_1236(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return 2146082234;
		case 6:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_1237(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 1:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 6:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 3:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 3:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 3:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1248(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1249(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_1252(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_681(bParam0) != -999503751)
		{
			func_1255(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_681(bParam0) != -999503751)
	{
		func_1255(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1227(bParam0, 1);
	return 1;
}

void func_1250(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1251(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1256(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_935(func_1059(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1257(uParam0);
	}
}

int func_1252(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (bParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_1253(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1254(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_1255(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1258(iParam1);
	func_1259(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1260(&(uParam0->f_26), iVar1);
		if (func_1261(uParam0->f_26, &iVar0))
		{
			func_1262(iVar0, iVar1);
		}
	}
}

void func_1256(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1263(&(uParam0->f_3));
}

void func_1257(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1264(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1258(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1259(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1260(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1256(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1261(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_1262(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1263(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1264(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1265(func_956());
	if (*uParam0)
	{
		func_1263(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_114() != -1, uParam2);
	*uParam0 = 1;
}

int func_1265(int iParam0)
{
	if (func_114() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

