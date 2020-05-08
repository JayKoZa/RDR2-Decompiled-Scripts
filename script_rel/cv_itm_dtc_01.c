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
	struct<10> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_28 = false;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	char* sLocal_31 = NULL;
	struct<6> ScriptParam_0 = { -1, -1, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<2268> Var0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_31 = "CCDTC_ITM_CNV_1";
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_17 = 10;
	Var0.f_18 = 30;
	Var0.f_19 = 80;
	Var0.f_20 = 120;
	Var0.f_33 = 2;
	Var0.f_36 = 6;
	Var0.f_36.f_1.f_1 = -1;
	Var0.f_36.f_1.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_67 = 3;
	Var0.f_73 = 15;
	Var0.f_107 = 14;
	Var0.f_107.f_1.f_2 = -1;
	Var0.f_107.f_1.f_7 = -1;
	Var0.f_107.f_1.f_8.f_7 = -1;
	Var0.f_107.f_1.f_8.f_9 = 3;
	Var0.f_107.f_1.f_32.f_1 = 1;
	Var0.f_107.f_1.f_32.f_10 = 1;
	Var0.f_107.f_1.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_32.f_14 = 1;
	Var0.f_107.f_1.f_32.f_15 = -1;
	Var0.f_107.f_1.f_32.f_16 = 3;
	Var0.f_107.f_1.f_32.f_36 = -1;
	Var0.f_107.f_1.f_32.f_39 = 30;
	Var0.f_107.f_1.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_1711 = 17;
	Var0.f_1967 = 2;
	Var0.f_1984 = 30;
	Var0.f_2015 = 30;
	Var0.f_2047 = -1;
	Var0.f_2048 = -1;
	Var0.f_2050 = -1;
	Var0.f_2051 = 30;
	Var0.f_2051.f_1 = -1;
	Var0.f_2051.f_1.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2236 = 1;
	Var0.f_2252 = 1082130432;
	Var0.f_2253 = 1097859072;
	Var0.f_2254 = 1084227584;
	Var0.f_2255 = 1065353216;
	Var0.f_2256 = 1120403456;
	Var0.f_2257 = 1084227584;
	Var0.f_2258 = 1097859072;
	Var0.f_2259 = 1073741824;
	Var0.f_2260 = 1092616192;
	Var0.f_2261 = 1120403456;
	Var0.f_2263 = 1090519040;
	Var0.f_2264 = 1103626240;
	Var0.f_2266 = 60;
	if (!&Global_1327590->f_11465[ScriptParam_0 /*10*/])
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (!Var0.f_2267)
		{
			func_1(&Var0);
			func_2(&Var0);
			func_3(&Var0);
		}
		func_4(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&Var0, ScriptParam_0);
	func_6(&Var0, 1);
	while (func_7(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(var uParam0)
{
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_31);
	func_8(&iLocal_29, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
	{
		MISC::_0xE98D55C5983F2509(func_9(uParam0, iLocal_14));
	}
	return 1;
}

int func_2(var uParam0)
{
	func_10(uParam0);
	func_11(uParam0);
	func_12(uParam0);
	func_13(uParam0);
	func_14(uParam0);
	func_15(uParam0);
	func_16(uParam0);
	func_17(uParam0);
	func_18(uParam0);
	func_19(uParam0);
	func_20(uParam0);
	if (func_22(func_21(uParam0)))
	{
		func_23();
	}
	return 1;
}

int func_3(var uParam0)
{
	return 1;
}

void func_4(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else
		{
			if ((uParam0->f_107[iVar0 /*113*/])->f_8 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
				{
					TASK::_0x81948DFE4F5A0283((uParam0->f_107[iVar0 /*113*/])->f_8.f_23);
				}
			}
			if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_1 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_32.f_21))
				{
					TASK::_0x81948DFE4F5A0283((uParam0->f_107[iVar0 /*113*/])->f_32.f_21);
				}
			}
			if (VOLUME::_DOES_VOLUME_EXIST((uParam0->f_107[iVar0 /*113*/])->f_101))
			{
				VOLUME::_DELETE_VOLUME((uParam0->f_107[iVar0 /*113*/])->f_101);
			}
		}
		iVar0++;
	}
}

void func_5(var uParam0, struct<6> Param1)
{
	int iVar0;
	int iVar1;

	uParam0->f_2 = Param1;
	*uParam0 = Param1.f_1;
	uParam0->f_2248 = Param1.f_2;
	uParam0->f_3 = Param1.f_3;
	uParam0->f_1 = func_24();
	uParam0->f_29 = { func_25(uParam0->f_2) };
	uParam0->f_32 = func_26(uParam0->f_2);
	uParam0->f_4 = func_27(uParam0->f_2);
	uParam0->f_5 = func_28(uParam0->f_2);
	uParam0->f_7 = Param1.f_4;
	uParam0->f_8 = Param1.f_5;
	if (func_29(uParam0->f_2))
	{
		uParam0->f_2265 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		(uParam0->f_107[iVar0 /*113*/])->f_1 = -1;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			(uParam0->f_107[iVar0 /*113*/])->f_32.f_16[iVar1] = -1;
			(uParam0->f_107[iVar0 /*113*/])->f_8.f_9[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_22 = func_30();
	func_31(&(uParam0->f_22), 0, 0, 1, 0, 0, 0, 0);
	MISC::_0xDA4D8EB04E8E2928(func_32(uParam0->f_2));
}

int func_6(var uParam0, int iParam1)
{
	if (*uParam0 >= 0 && *uParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[*uParam0 /*5*/])->f_1 = iParam1;
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	if (func_33(uParam0))
	{
		if (func_34(uParam0) < 6)
		{
			func_35(func_21(uParam0), 30);
			func_6(uParam0, 6);
		}
	}
	switch (func_34(uParam0))
	{
		case 1:
			if (func_36(uParam0))
			{
				func_6(uParam0, 2);
			}
			else
			{
				func_37(uParam0);
			}
			break;
		case 2:
			if (func_38(uParam0))
			{
				if (func_39(uParam0))
				{
					func_6(uParam0, 3);
				}
				else
				{
					func_37(uParam0);
				}
			}
			break;
		case 3:
			if (func_40(uParam0))
			{
				if (func_41(uParam0))
				{
					func_6(uParam0, 4);
				}
				else
				{
					func_37(uParam0);
				}
			}
			break;
		case 4:
			if (func_42(uParam0))
			{
				if (func_43(uParam0))
				{
					func_6(uParam0, 5);
				}
				else
				{
					func_37(uParam0);
				}
			}
			break;
		case 5:
			if (func_44(uParam0))
			{
				func_6(uParam0, 6);
			}
			break;
		case 6:
			if (func_45(uParam0))
			{
				uParam0->f_2267 = 1;
				func_6(uParam0, 7);
			}
			break;
		case 7:
			if (func_46(uParam0))
			{
				func_4(uParam0);
				func_6(uParam0, 0);
				return 0;
			}
			if (func_47(uParam0))
			{
				func_4(uParam0);
				func_6(uParam0, 0);
				return 0;
			}
			break;
	}
	return 1;
}

void func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_48(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_49(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_50(iVar0);
	*iParam0 = 0;
}

int func_9(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return 0;
	}
	return (uParam0->f_107[iParam1 /*113*/])->f_5;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if ((uParam0->f_1711[iVar0 /*15*/])->f_9 != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709((uParam0->f_1711[iVar0 /*15*/])->f_9))
			{
				ENTITY::_0xD2B9C78537ED5759((uParam0->f_1711[iVar0 /*15*/])->f_9);
			}
		}
		iVar1 = (uParam0->f_1711[iVar0 /*15*/])->f_10;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
		{
		}
		else if ((uParam0->f_1711[iVar0 /*15*/])->f_6 || (func_46(uParam0) && !(uParam0->f_1711[iVar0 /*15*/])->f_5))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29));
			func_51(uParam0, "Unpinned interior", 1, -1);
		}
	}
}

void func_11(var uParam0)
{
	if (PROPSET::_DOES_PROPSET_EXIST(uParam0->f_1976.f_6))
	{
		PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(uParam0->f_1976.f_6);
	}
}

void func_12(var uParam0)
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2232)))
	{
		return;
	}
	HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_2232));
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_2 != 0)
		{
			STREAMING::_0x4EDDD9E9CA5AF985((uParam0->f_107[iVar0 /*113*/])->f_32.f_2);
		}
		if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_1 != 0)
		{
			STREAMING::_0x4EDDD9E9CA5AF985((uParam0->f_107[iVar0 /*113*/])->f_8.f_1);
		}
		iVar0++;
	}
}

void func_14(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(uParam0->f_2236[iVar0 /*8*/]))
		{
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT(uParam0->f_2236[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		iVar1 = &uParam0->f_1984[iVar0];
		if (!ANIMSCENE::_0x25557E324489393C(iVar1))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iVar1);
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_107[iVar0 /*113*/])->f_32.f_23)))
			{
				PED::_0xFC3BAB1801A8255A((uParam0->f_107[iVar0 /*113*/])->f_5, &((uParam0->f_107[iVar0 /*113*/])->f_32.f_23));
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_107[iVar0 /*113*/])->f_32.f_28)))
			{
				PED::_0xDE7B2B4144906CDF(MISC::GET_HASH_KEY(&((uParam0->f_107[iVar0 /*113*/])->f_32.f_28)), (uParam0->f_107[iVar0 /*113*/])->f_5);
			}
		}
		iVar0++;
	}
}

void func_17(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_33[iVar0])))
		{
		}
		else
		{
			func_52(&(uParam0->f_33[iVar0]));
			VOLUME::_DELETE_VOLUME(&(uParam0->f_33[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar0 /*5*/])))
		{
		}
		else
		{
			if ((uParam0->f_36[iVar0 /*5*/])->f_2)
			{
				POPULATION::_0x74C2B3DC0B294102(&(uParam0->f_36[iVar0 /*5*/]));
			}
			if (PED::_0x91A5F9CBEBB9D936((uParam0->f_36[iVar0 /*5*/])->f_4))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA((uParam0->f_36[iVar0 /*5*/])->f_4, false);
			}
			VOLUME::_DELETE_VOLUME(&(uParam0->f_36[iVar0 /*5*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_67[iVar0])))
		{
		}
		else
		{
			VOLUME::_DELETE_VOLUME(&(uParam0->f_67[iVar0]));
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2268))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			iVar1 = func_9(uParam0, iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar1, 0f);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2269))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_2269, false, true);
	}
}

int func_19(var uParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		func_53(uParam0, iVar0);
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else if (func_54((uParam0->f_107[iVar0 /*113*/])->f_7))
		{
			if (!func_55((uParam0->f_107[iVar0 /*113*/])->f_7))
			{
			}
			else
			{
				func_56((uParam0->f_107[iVar0 /*113*/])->f_5, (uParam0->f_107[iVar0 /*113*/])->f_7, 1, 0, 0);
				Jump @294; //curOff = 110
				if (func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
				{
					if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_55 == 1)
					{
						func_57(uParam0, iVar0, 1);
					}
					if (!func_58((uParam0->f_107[iVar0 /*113*/])->f_1))
					{
					}
					else if (TASK::_0x9FF5F9B24E870748((uParam0->f_107[iVar0 /*113*/])->f_5) && !func_46(uParam0))
					{
						fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 60f);
						func_59((uParam0->f_107[iVar0 /*113*/])->f_1, 68, 1);
						func_60((uParam0->f_107[iVar0 /*113*/])->f_1, 0, 0, 0, fVar1, 1, 1, 0, 0, 0, 0);
					}
					else
					{
						func_60((uParam0->f_107[iVar0 /*113*/])->f_1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
				}
			}
			iVar0++;
			return 1;
		}
	}

int func_20(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_61((uParam0->f_107[iVar0 /*113*/])->f_2))
		{
		}
		else if (!func_62((uParam0->f_107[iVar0 /*113*/])->f_2))
		{
		}
		else
		{
			func_63((uParam0->f_107[iVar0 /*113*/])->f_2, 0, 1, 0, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0)
{
	return uParam0->f_2;
}

bool func_22(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return false;
	}
	return Global_1327590->f_19744 == iParam0;
}

void func_23()
{
	Global_1327590->f_19744 = -1;
}

int func_24()
{
	return Global_40.f_4283;
}

Vector3 func_25(int iParam0)
{
	return (Global_1327590->f_11465[iParam0 /*10*/])->f_1;
}

var func_26(int iParam0)
{
	return (Global_1327590->f_23[iParam0 /*17*/])->f_12;
}

bool func_27(int iParam0)
{
	return (((((((((iParam0 >= 508 && iParam0 <= 635) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 498) || iParam0 == 506) || iParam0 == 502) || iParam0 == 507) || iParam0 == 456);
}

bool func_28(int iParam0)
{
	return (iParam0 >= 342 && iParam0 <= 426);
}

bool func_29(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 22);
}

int func_30()
{
	return &Global_1899515;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_64(*iParam0);
	iVar1 = func_65(*iParam0);
	iVar2 = func_66(*iParam0);
	iVar3 = func_67(*iParam0);
	iVar4 = func_68(*iParam0);
	iVar5 = func_69(*iParam0);
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
	iVar6 = func_70(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_70(iVar1, iVar0);
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
	func_71(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_32(int iParam0)
{
	return MISC::GET_HASH_KEY(func_72(iParam0));
}

int func_33(var uParam0)
{
	if (func_73(uParam0))
	{
		return 1;
	}
	if (func_74(uParam0))
	{
		return 1;
	}
	if (func_46(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_34(var uParam0)
{
	if (*uParam0 >= 0 && *uParam0 < Global_1327590->f_19547)
	{
		return (Global_1327590->f_19547[*uParam0 /*5*/])->f_1;
	}
	return 0;
}

void func_35(int iParam0, int iParam1)
{
	func_75(iParam0);
	func_31(&((Global_1327590->f_11465[iParam0 /*10*/])->f_5), 0, iParam1, 0, 0, 0, 0, 0);
}

int func_36(var uParam0)
{
	if (!func_76(uParam0))
	{
		return 0;
	}
	if (!func_77(uParam0))
	{
		return 0;
	}
	if (!func_78(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_37(var uParam0)
{
	(Global_1327590->f_19547[*uParam0 /*5*/])->f_4 = 1;
}

int func_38(var uParam0)
{
	if (!func_79(uParam0))
	{
		return 0;
	}
	if (!func_80(uParam0))
	{
		return 0;
	}
	if (!func_81(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_39(var uParam0)
{
	if (!func_82(uParam0))
	{
		return 0;
	}
	if (!func_83(uParam0))
	{
		return 0;
	}
	if (!func_84(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_40(var uParam0)
{
	if (!func_85(uParam0))
	{
		return 0;
	}
	if (!func_86(uParam0))
	{
		return 0;
	}
	if (!func_87(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_41(var uParam0)
{
	if (!func_88(uParam0))
	{
		return 0;
	}
	if (!func_89(uParam0))
	{
		return 0;
	}
	if (!func_90(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_42(var uParam0)
{
	if (!func_91(uParam0))
	{
		return 0;
	}
	if (!func_92(uParam0))
	{
		return 0;
	}
	if (!func_93(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_43(var uParam0)
{
	if (!func_94(uParam0))
	{
		return 0;
	}
	if (!func_95(uParam0))
	{
		return 0;
	}
	if (!func_96(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_44(var uParam0)
{
	if (!func_97(uParam0))
	{
		return 0;
	}
	if (!func_98(uParam0))
	{
		return 0;
	}
	if (!func_99(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_45(var uParam0)
{
	if (!func_1(uParam0))
	{
		return 0;
	}
	if (!func_2(uParam0))
	{
		return 0;
	}
	if (!func_3(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_46(var uParam0)
{
	return (Global_1327590->f_19547[*uParam0 /*5*/])->f_4;
}

int func_47(var uParam0)
{
	if (!func_100(uParam0))
	{
		return 0;
	}
	if (!func_101(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_48(int iParam0)
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

int func_49(int iParam0)
{
	return iParam0;
}

void func_50(int iParam0)
{
	if (!func_102(iParam0))
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

void func_51(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if ((MISC::GET_FRAME_COUNT() % iParam2) == 0)
	{
		if (iParam3 >= 0 && iParam3 < uParam0->f_107)
		{
			if (func_54((uParam0->f_107[iParam3 /*113*/])->f_1))
			{
			}
		}
	}
}

void func_52(var uParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(uParam0) };
	func_103(vVar0, 0);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return;
	}
	if ((uParam0->f_107[iParam1 /*113*/])->f_112)
	{
		return;
	}
	if (!func_54((uParam0->f_107[iParam1 /*113*/])->f_1))
	{
		return;
	}
	func_105((uParam0->f_107[iParam1 /*113*/])->f_1, func_104(uParam0->f_7));
	func_106((uParam0->f_107[iParam1 /*113*/])->f_1, 1, 1, 0);
	func_107((uParam0->f_107[iParam1 /*113*/])->f_1, 45, 1);
	func_107((uParam0->f_107[iParam1 /*113*/])->f_1, 46, 1);
	(uParam0->f_107[iParam1 /*113*/])->f_112 = 1;
}

int func_54(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_55(int iParam0)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_56(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_108(iParam1))
	{
		return;
	}
	iVar0 = func_109(iParam1);
	if (func_110(iParam1))
	{
		if (!func_55(iParam1))
		{
			return;
		}
	}
	func_107(iParam1, 39, 1);
	func_111(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_111(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_111(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_112(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_57(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!bParam2)
	{
		if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_62)
		{
			return;
		}
	}
	if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_55 == 0)
	{
		(uParam0->f_107[iParam1 /*113*/])->f_32.f_62 = 1;
		return;
	}
	iVar0 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_59;
	if (iVar0 <= 0 || iVar0 > 600)
	{
		return;
	}
	iVar1 = iVar0 * 1000;
	iVar2 = (iVar1 / 4000);
	if (iVar2 <= 0)
	{
		return;
	}
	switch ((uParam0->f_107[iParam1 /*113*/])->f_32.f_55)
	{
		case 1:
			if (!func_113(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_56)) || func_114(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_56)) > 1f)
			{
				iVar3 = func_115((uParam0->f_107[iParam1 /*113*/])->f_1);
				if (iVar3 == 0)
				{
					return;
				}
				iVar4 = iVar2 + 5;
				while (iVar4 >= 60)
				{
					iVar5++;
					iVar4 = (iVar4 - 60);
				}
				if (PED::_0xCB86D3E3E3708901(iVar3, uParam0->f_1690, iVar5, iVar4, 0))
				{
					func_116(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_56), 0f);
				}
			}
			if (!func_113(&(uParam0->f_1693)) || func_114(&(uParam0->f_1693)) > 1f)
			{
				if (func_117())
				{
					iVar3 = -508547493;
				}
				else
				{
					iVar3 = -676452144;
				}
				iVar6 = iVar2;
				while (iVar6 >= 60)
				{
					iVar7++;
					iVar6 = (iVar6 - 60);
				}
				if (PED::_0xCB86D3E3E3708901(iVar3, uParam0->f_1691, iVar7, iVar6, 0))
				{
					func_116(&(uParam0->f_1693), 0f);
				}
			}
			break;
		case 2:
			if (uParam0->f_1696)
			{
				PED::_0xE737D5F14304A2EC((uParam0->f_107[iParam1 /*113*/])->f_5, PLAYER::PLAYER_ID(), iVar1);
			}
			break;
		case 3:
			PED::_0x19173C3F15367B54((uParam0->f_107[iParam1 /*113*/])->f_5, PLAYER::PLAYER_ID(), iVar1);
			PED::_0x5708EDD71B50C008((uParam0->f_107[iParam1 /*113*/])->f_5, PLAYER::PLAYER_ID(), iVar1);
			break;
	}
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_62 = 1;
}

bool func_58(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if (!func_118(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return;
		}
	}
	func_119(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_54(iParam0))
	{
		return;
	}
	if (func_118(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_59(iParam0, 56, 1);
		func_120(&(Global_1359489->f_40), 1);
	}
	func_121(iParam0, 0);
	func_122(iParam0, 4, 0);
	func_123(iParam0);
	func_124(iParam0);
	func_107(iParam0, 37, 1);
	bVar0 = func_125(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_126(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_127(iParam0, 64, 1))
	{
		func_107(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_107(iParam0, 33, 1);
		func_107(iParam0, 34, 1);
		func_128(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_106(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_59(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_59(iParam0, 35, 1);
			if (bParam8)
			{
				func_59(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_129(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_107(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_106(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_120(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_130(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_59(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_131(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_127(iParam0, 45, 1))
	{
		func_107(iParam0, 45, 1);
	}
	func_132(iParam0, 16, 1);
	func_107(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_125(func_109(iParam0), 0))
		{
			func_56(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_61(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_62(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_63(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_133(iParam0, 1))
	{
		return;
	}
	if (!func_133(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_62(iParam0)) && func_134(iParam0))
	{
		return;
	}
	func_135(iParam0, 1);
	func_136(iParam0);
	if (func_138(func_137(iParam0)))
	{
		iVar0 = func_139(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_135(iParam0, 16);
	}
	if (func_133(iParam0, 128) && !bParam3)
	{
		func_140(iParam0, 0);
	}
}

int func_64(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_141(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_65(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_66(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_67(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_68(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_69(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_70(int iParam0, int iParam1)
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

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(iParam0, iParam6);
	func_143(iParam0, iParam5);
	func_144(iParam0, iParam4);
	func_145(iParam0, iParam3);
	func_146(iParam0, iParam2);
	func_147(iParam0, iParam1);
}

char* func_72(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "VIG_INVALID";
		case 0:
			return "VIG_AV_BUTCHER_BLEED_DEER";
		case 1:
			return "VIG_AV_BUTCHER_HANG_CARCASS";
		case 2:
			return "VIG_AV_BUTCHER_FEED_DOG_P2";
		case 3:
			return "VIG_AV_DOG_BED_JUMP_DOWN";
		case 4:
			return "VIG_AV_DOG_JUMP_AND_LICK";
		case 5:
			return "VIG_AV_DOG_LICK_TABLE";
		case 6:
			return "VIG_AV_DOG_PET_SITTING_FEMALE";
		case 7:
			return "VIG_AV_DOG_PET_SITTING_MALE";
		case 8:
			return "VIG_AV_DONATE_MALE";
		case 9:
			return "VIG_AV_DONATE_LOOK_MALE";
		case 10:
			return "VIG_AV_DROP_RABBIT_TABLE";
		case 11:
			return "VIG_AV_DRUNK_CAMPFIRE_D";
		case 12:
			return "VIG_AV_FIRE_BLOW";
		case 13:
			return "VIG_AV_FIRE_POKE";
		case 14:
			return "VIG_AV_FIRE_START";
		case 15:
			return "VIG_AV_JACK_LOOK_POT";
		case 16:
			return "VIG_AV_JACK_POKE_FIRE";
		case 17:
			return "VIG_AV_LIGHT_SMOKE";
		case 20:
			return "VIG_AV_START_PHONOGRAPH";
		case 19:
			return "VIG_AV_SORE_JOINTS_FEMALE";
		case 18:
			return "VIG_AV_SORE_JOINTS_MALE";
		case 21:
			return "VIG_AV_WHISPER_SIT";
		case 22:
			return "VIG_AV_WHISPER_STAND";
		case 23:
			return "CCABI_CNV_1";
		case 24:
			return "CCABI_CNV_2";
		case 25:
			return "CCABI_CNV_3";
		case 26:
			return "CCABI_CNV_4";
		case 27:
			return "CCABI_CNV_5";
		case 28:
			return "CCABI_CNV_6";
		case 29:
			return "CCABI_CNV_7";
		case 30:
			return "CCABI_CNV_8";
		case 31:
			return "CCABI_CNV_9";
		case 32:
			return "CCABI_CNV_10";
		case 33:
			return "CCABI_CNV_11";
		case 34:
			return "CCABI_CNV_12";
		case 35:
			return "CCABI_CNV_13";
		case 36:
			return "CCABI_CNV_14";
		case 37:
			return "CCABI_CNV_15";
		case 38:
			return "CCABI_CNV_16";
		case 39:
			return "CCABI_CNV_17";
		case 40:
			return "CCABI_CNV_19";
		case 41:
			return "CCABI_CNV_20";
		case 42:
			return "CCABI_CNV_21";
		case 43:
			return "CCABI_CNV_23";
		case 44:
			return "CCAM_CONF_CNV_1";
		case 45:
			return "CCAM_CONF_CNV_2";
		case 46:
			return "CCAM_CONF_CNV_3";
		case 47:
			return "CCAM_CONF_CNV_4";
		case 48:
			return "CCAM_CONF_CNV_5";
		case 49:
			return "CCAM_CLN_CNV_1";
		case 50:
			return "CCAM_CLN_CNV_2";
		case 51:
			return "CCAM_CLN_CNV_3";
		case 52:
			return "CCBLL_CNV_4";
		case 53:
			return "CCBLL_CNV_5";
		case 54:
			return "CCBLL_CNV_6";
		case 55:
			return "CCBLL_CNV_8";
		case 56:
			return "CCBLL_CNV_9";
		case 57:
			return "CCBLL_CNV_10";
		case 58:
			return "CCBLL_CNV_11";
		case 59:
			return "CCBLL_CNV_13";
		case 60:
			return "CCBLL_CNV_14";
		case 61:
			return "CCBLL_CNV_15";
		case 62:
			return "CCCHR_CNV_1";
		case 63:
			return "CCCHR_CNV_2";
		case 64:
			return "CCCHR_CNV_3";
		case 65:
			return "CCCHR_CNV_5";
		case 66:
			return "CCDNA_CNV_1";
		case 67:
			return "CCDNH_CNV_1";
		case 68:
			return "CCDNH_CNV_2";
		case 69:
			return "CCDNH_CNV_3";
		case 70:
			return "CCDNH_CNV_4";
		case 71:
			return "CCDNH_CNV_5";
		case 72:
			return "CCDNH_CNV_6";
		case 73:
			return "CCDNH_CNV_7";
		case 74:
			return "CCDNH_CNV_8";
		case 75:
			return "CCDNH_CNV_9";
		case 76:
			return "CCDNH_CNV_10";
		case 77:
			return "CCDNH_CNV_11";
		case 78:
			return "CCDNH_CNV_12";
		case 79:
			return "CCDNJ_CNV_1";
		case 80:
			return "CCDNJ_CNV_2";
		case 81:
			return "CCDNJ_CNV_3";
		case 82:
			return "CCDNJ_CNV_4";
		case 83:
			return "CCDNJ_CNV_5";
		case 84:
			return "CCDNJ_CNV_6";
		case 85:
			return "CCDNJ_CNV_7";
		case 86:
			return "CCDNK_CNV_1";
		case 87:
			return "CCDNK_CNV_2";
		case 88:
			return "CCDNK_CNV_3";
		case 89:
			return "CCDNK_CNV_4";
		case 90:
			return "CCDNL_CNV_1";
		case 91:
			return "CCDNL_CNV_2";
		case 92:
			return "CCDNM_CNV_1";
		case 93:
			return "CCDNM_CNV_2";
		case 94:
			return "CCDNM_CNV_3";
		case 95:
			return "CCDNV_CNV_2";
		case 96:
			return "CCDOG_CNV_1";
		case 97:
			return "CCDOG_CNV_4";
		case 98:
			return "CCDOG_CNV_5";
		case 99:
			return "CCDOG_CNV_6";
		case 100:
			return "CCDOG_CNV_8";
		case 101:
			return "CCDTC_CNV_3";
		case 102:
			return "CCDTC_CNV_4";
		case 103:
			return "CCDTC_CNV_6";
		case 104:
			return "CCDTC_CNV_7";
		case 105:
			return "CCDTC_CNV_8";
		case 106:
			return "CCDTC_CNV_10";
		case 107:
			return "CCDTC_CNV_11";
		case 108:
			return "CCDTC_CNV_12";
		case 109:
			return "CCDTC_CNV_13";
		case 110:
			return "CCDTC_CNV_14";
		case 111:
			return "CCDTC_CNV_15";
		case 112:
			return "CCDTC_CNV_17";
		case 113:
			return "CCDTC_CNV_18";
		case 114:
			return "CCDTC_CNV_19";
		case 115:
			return "CCDTC_CNV_20";
		case 116:
			return "CCDTC_CNV_21";
		case 117:
			return "CCDTC_CNV_22";
		case 118:
			return "CCDTC_CNV_23";
		case 119:
			return "CCDTC_CNV_24";
		case 120:
			return "CCDTC_CNV_25";
		case 121:
			return "CCDTC_CNV_28";
		case 122:
			return "CCDTC_CNV_29";
		case 123:
			return "CCDTC_CNV_30";
		case 124:
			return "CCDTC_CNV_31";
		case 125:
			return "CCDTC_CNV_32";
		case 126:
			return "CCDTC_CNV_33";
		case 127:
			return "CCDTC_CNV_34";
		case 128:
			return "CCHSH_CNV_1";
		case 129:
			return "CCHSH_CNV_3";
		case 130:
			return "CCHSH_CNV_4";
		case 131:
			return "CCHSH_CNV_6";
		case 132:
			return "CCHSH_CNV_7";
		case 133:
			return "CCHSH_CNV_8";
		case 134:
			return "CCHSH_CNV_9";
		case 135:
			return "CCHSH_CNV_11";
		case 136:
			return "CCHSH_CNV_12";
		case 137:
			return "CCHSH_CNV_13";
		case 138:
			return "CCHSH_CNV_14";
		case 139:
			return "CCHSH_CNV_15";
		case 140:
			return "CCHSH_CNV_16";
		case 141:
			return "CCHSH_CNV_17";
		case 142:
			return "CCHSH_CNV_18";
		case 143:
			return "CCHSH_CNV_19";
		case 144:
			return "CCJAV_CNV_1";
		case 145:
			return "CCJAV_CNV_2";
		case 146:
			return "CCJAV_CNV_3";
		case 147:
			return "CCJAV_CNV_4";
		case 148:
			return "CCJAV_CNV_5";
		case 149:
			return "CCJAV_CNV_7";
		case 150:
			return "CCJAV_CNV_8";
		case 151:
			return "CCJAV_CNV_9";
		case 152:
			return "CCJAV_CNV_10";
		case 153:
			return "CCJAV_CNV_11";
		case 154:
			return "CCJCK_CNV_1";
		case 155:
			return "CCJCK_CNV_2";
		case 156:
			return "CCJCK_CNV_3";
		case 157:
			return "CCJCK_CNV_4";
		case 158:
			return "CCJCK_CNV_5";
		case 159:
			return "CCJCK_PAR_CNV1";
		case 160:
			return "CCJHN_CNV_1";
		case 161:
			return "CCJHN_CNV_2";
		case 162:
			return "CCJHN_CNV_3";
		case 163:
			return "CCJHN_CNV_4";
		case 164:
			return "CCJHN_CNV_5";
		case 165:
			return "CCJHN_CNV_6";
		case 166:
			return "CCJHN_CNV_7";
		case 167:
			return "CCJHN_CNV_8";
		case 168:
			return "CCJHN_CNV_9";
		case 169:
			return "CCJHN_CNV_10";
		case 170:
			return "CCKAR_CNV_1";
		case 171:
			return "CCKAR_CNV_2";
		case 172:
			return "CCKAR_CNV_3";
		case 173:
			return "CCKAR_CNV_4";
		case 174:
			return "CCKAR_CNV_5";
		case 175:
			return "CCKAR_CNV_6";
		case 176:
			return "CCKAR_CNV_7";
		case 177:
			return "CCKAR_CNV_8";
		case 178:
			return "CCKAR_CNV_9";
		case 179:
			return "CCKAR_CNV_10";
		case 180:
			return "CCKAR_CNV_11";
		case 181:
			return "CCKAR_CNV_12";
		case 182:
			return "CCKAR_CNV_13";
		case 183:
			return "CCKAR_PAR_CNV2";
		case 184:
			return "CCKAR_PAR_CNV3";
		case 185:
			return "CCKIE_CNV_1";
		case 186:
			return "CCKIE_CNV_4";
		case 187:
			return "CCKIE_CNV_5";
		case 188:
			return "CCKIE_CNV_7";
		case 189:
			return "CCKIE_CNV_8";
		case 190:
			return "CCKIE_CNV_9";
		case 191:
			return "CCKIE_CNV_10";
		case 192:
			return "CCKIE_CNV_11";
		case 193:
			return "CCKIE_CNV_12";
		case 194:
			return "CCKIE_CNV_13";
		case 195:
			return "CCKIE_CNV_14";
		case 196:
			return "CCKIE_CNV_15";
		case 197:
			return "CCLEN_CNV_1";
		case 198:
			return "CCLEN_CNV_2";
		case 199:
			return "CCLEN_CNV_3";
		case 200:
			return "CCLEN_CNV_4";
		case 201:
			return "CCLEN_CNV_5";
		case 202:
			return "CCLEN_CNV_6";
		case 203:
			return "CCLEN_CNV_7";
		case 204:
			return "CCLEN_CNV_8";
		case 205:
			return "CCLNSNM_CNV_1";
		case 206:
			return "CCMCH_CNV_2";
		case 207:
			return "CCMCH_CNV_3";
		case 208:
			return "CCMCH_CNV_5";
		case 209:
			return "CCMCH_CNV_6";
		case 210:
			return "CCMCH_CNV_7";
		case 211:
			return "CCMCH_CNV_8";
		case 212:
			return "CCMCH_CNV_10";
		case 213:
			return "CCMCH_CNV_11";
		case 214:
			return "CCMCH_CNV_12";
		case 215:
			return "CCMCH_CNV_13";
		case 216:
			return "CCMCH_CNV_15";
		case 217:
			return "CCMCH_CNV_16";
		case 218:
			return "CCMCH_CNV_17";
		case 219:
			return "CCMCH_CNV_18";
		case 220:
			return "CCMCH_CNV_19";
		case 221:
			return "CCMCH_CNV_20";
		case 222:
			return "CCMCH_CNV_21";
		case 223:
			return "CCMCH_CNV_22";
		case 224:
			return "CCMCH_CNV_24";
		case 225:
			return "CCMCH_CNV_25";
		case 226:
			return "CCMCH_CNV_26";
		case 227:
			return "CCMCH_CNV_27";
		case 228:
			return "CCMCH_CNV_28";
		case 229:
			return "CCMCH_CNV_29";
		case 230:
			return "CCMCH_CNV_30";
		case 231:
			return "CCMCH_CNV_31";
		case 232:
			return "CCMCH_CNV_32";
		case 233:
			return "CCMCH_CNV_33";
		case 234:
			return "CCMLL_CNV_1";
		case 235:
			return "CCMLL_CNV_2";
		case 236:
			return "CCMLL_CNV_3";
		case 237:
			return "CCMLL_CNV_4";
		case 238:
			return "CCMLL_CNV_5";
		case 239:
			return "CCMLL_CNV_6";
		case 240:
			return "CCMLL_CNV_7";
		case 241:
			return "CCMLL_CNV_8";
		case 242:
			return "CCMLL_CNV_9";
		case 243:
			return "CCMRB_CNV_1";
		case 244:
			return "CCMRB_CNV_2";
		case 245:
			return "CCMRB_CNV_3";
		case 246:
			return "CCMRB_CNV_4";
		case 247:
			return "CCMRB_CNV_5";
		case 248:
			return "CCMRB_CNV_6";
		case 249:
			return "CCMRB_CNV_7";
		case 250:
			return "CCMRB_CNV_8";
		case 251:
			return "CCMRB_CNV_9";
		case 252:
			return "CCMRB_CNV_10";
		case 253:
			return "CCMRB_CNV_11";
		case 254:
			return "CCMRB_CNV_12";
		case 255:
			return "CCPRS_CNV_1";
		case 256:
			return "CCPRS_CNV_2";
		case 257:
			return "CCPRS_CNV_3";
		case 258:
			return "CCPRS_CNV_4";
		case 259:
			return "CCPRS_CNV_5";
		case 260:
			return "CCPRS_CNV_7";
		case 261:
			return "CCPRS_CNV_8";
		case 262:
			return "CCPRS_CNV_9";
		case 263:
			return "CCPRS_CNV_10";
		case 264:
			return "CCPRS_CNV_11";
		case 265:
			return "CCPRS_CNV_12";
		case 266:
			return "CCPRS_CNV_13";
		case 267:
			return "CCPRS_CNV_14";
		case 268:
			return "CCPRS_CNV_15";
		case 269:
			return "CCPRS_CNV_16";
		case 270:
			return "CCPRS_CNV_17";
		case 271:
			return "CCPRS_PAR_CNV1";
		case 272:
			return "CCSAD_CNV_1";
		case 273:
			return "CCSAD_CNV_2";
		case 274:
			return "CCSAD_CNV_3";
		case 275:
			return "CCSEN_CNV_1";
		case 276:
			return "CCSEN_CNV_2";
		case 277:
			return "CCSEN_CNV_3";
		case 278:
			return "CCSEN_CNV_4";
		case 279:
			return "CCSEN_CNV_5";
		case 280:
			return "CCSEN_CNV_6";
		case 281:
			return "CCSEN_CNV_7";
		case 282:
			return "CCSEN_CNV_8";
		case 283:
			return "CCSEN_CNV_9";
		case 284:
			return "CCSEN_CNV_10";
		case 285:
			return "CCSEN_CNV_11";
		case 286:
			return "CCSEN_CNV_12";
		case 287:
			return "CCSEN_CNV_13";
		case 288:
			return "CCSEN_CNV_14";
		case 289:
			return "CCSEN_CNV_15";
		case 290:
			return "CCSEN_CNV_16";
		case 291:
			return "CCSEN_CNV_17";
		case 292:
			return "CCSNK_PAR_CNV1";
		case 293:
			return "CCSNK_PAR_CNV2";
		case 294:
			return "CCSNK_PAR_CNV3";
		case 295:
			return "CCSSN_CNV_1";
		case 296:
			return "CCSSN_CNV_2";
		case 297:
			return "CCSSN_CNV_3";
		case 298:
			return "CCSSN_CNV_4";
		case 299:
			return "CCSSN_CNV_5";
		case 300:
			return "CCSSN_CNV_7";
		case 301:
			return "CCSSN_CNV_8";
		case 302:
			return "CCSSN_CNV_10";
		case 303:
			return "CCSSN_CNV_11";
		case 304:
			return "CCSSN_CNV_12";
		case 305:
			return "CCSSN_CNV_13";
		case 306:
			return "CCSSN_CNV_14";
		case 307:
			return "CCSSN_CNV_16";
		case 308:
			return "CCSSNUNC_CNV_1";
		case 309:
			return "CCSTR_CNV_2";
		case 310:
			return "CCSTR_CNV_3";
		case 311:
			return "CCSWN_CNV_6";
		case 312:
			return "CCSWN_CNV_7";
		case 313:
			return "CCSWN_CNV_8";
		case 314:
			return "CCSWN_CNV_9";
		case 315:
			return "CCSWN_CNV_10";
		case 316:
			return "CCSWN_CNV_11";
		case 317:
			return "CCSWN_CNV_12";
		case 318:
			return "CCSWN_CNV_13";
		case 319:
			return "CCSWN_CNV_14";
		case 320:
			return "CCSWN_CNV_15";
		case 321:
			return "CCSWN_CNV_16";
		case 322:
			return "CCSWN_CNV_17";
		case 323:
			return "CCSWN_CNV_19";
		case 324:
			return "CCSWN_CNV_21";
		case 325:
			return "CCSWN_CNV_22";
		case 326:
			return "CCTLL_CNV_1";
		case 327:
			return "CCTLL_CNV_2";
		case 328:
			return "CCTLL_CNV_3";
		case 329:
			return "CCTLL_CNV_4";
		case 330:
			return "CCTLL_CNV_5";
		case 331:
			return "CCTLL_CNV_6";
		case 332:
			return "CCTRL_CNV_1";
		case 333:
			return "CCTRL_CNV_3";
		case 334:
			return "CCUNC_CNV_1";
		case 335:
			return "CCUNC_CNV_2";
		case 336:
			return "CCUNC_CNV_3";
		case 337:
			return "CCUNC_CNV_4";
		case 338:
			return "CCUNC_CNV_5";
		case 339:
			return "CCUNC_CNV_6";
		case 340:
			return "CCUNC_CNV_7";
		case 341:
			return "CCUNC_CNV_8";
		case 342:
			return "CFAM_CNV_1";
		case 343:
			return "CFAR_CNV_1";
		case 344:
			return "CFAR_CNV_2";
		case 345:
			return "CFBW_CNV_1";
		case 346:
			return "CFBW_CNV_2";
		case 347:
			return "CFBW_CNV_3";
		case 348:
			return "CFBW_CNV_4";
		case 349:
			return "CFBW_CNV_5";
		case 350:
			return "CFBW_CNV_6";
		case 351:
			return "CFBLLMCH_CNV_1";
		case 352:
			return "CFCH_CNV_1";
		case 353:
			return "CFDV_CNV_1";
		case 354:
			return "CFDV_CNV_2";
		case 355:
			return "CFDV_CNV_3";
		case 356:
			return "CFDTCBLL_CNV_1";
		case 357:
			return "CFDTCJMBLL_CNV_1";
		case 358:
			return "CFHM_CNV_1";
		case 359:
			return "CFHM_CNV_2";
		case 360:
			return "CFHM_CNV_3";
		case 361:
			return "CFHM_CNV_4";
		case 362:
			return "CFHM_CNV_5";
		case 363:
			return "CFHM_CNV_6";
		case 364:
			return "CFHM_CNV_7";
		case 365:
			return "CFHM_CNV_8";
		case 366:
			return "CFHM_CNV_9";
		case 367:
			return "CFHS_CNV_1";
		case 368:
			return "CFHSHUNC_CNV_1";
		case 369:
			return "CFHSHUNC_CNV_2";
		case 370:
			return "CFHSHUNC_CNV_3";
		case 371:
			return "CFJE_CNV_1";
		case 372:
			return "CFJE_CNV_2";
		case 373:
			return "CFJE_CNV_3";
		case 374:
			return "CFJE_CNV_4";
		case 375:
			return "CFJE_CNV_5";
		case 376:
			return "CFJM_CNV_1";
		case 377:
			return "CFJM_CNV_2";
		case 378:
			return "CFJM_CNV_3";
		case 379:
			return "CFJM_CNV_4";
		case 380:
			return "CFJM_CNV_5";
		case 381:
			return "CFJM_CNV_6";
		case 382:
			return "CFKIESEN_CNV_1";
		case 383:
			return "CFKIESEN_CNV_2";
		case 384:
			return "CFKIESEN_CNV_3";
		case 385:
			return "CFLN_CNV_1";
		case 386:
			return "CFLN_CNV_2";
		case 387:
			return "CFMB_CNV_1";
		case 388:
			return "CFMB_CNV_2";
		case 389:
			return "CFMB_CNV_3";
		case 390:
			return "CFMB_CNV_4";
		case 391:
			return "CFMB_CNV_5";
		case 392:
			return "CFMB_CNV_6";
		case 393:
			return "CFMP_CNV_1";
		case 394:
			return "CFMP_CNV_2";
		case 395:
			return "CFMP_CNV_3";
		case 396:
			return "CFRS_CNV_1";
		case 397:
			return "CFRS_CNV_2";
		case 398:
			return "CFRS_CNV_3";
		case 399:
			return "CFRS_CNV_4";
		case 400:
			return "CFRS_CNV_5";
		case 403:
			return "CFSENLEN_CNV_1";
		case 401:
			return "CFSG_CNV_1";
		case 402:
			return "CFSG_CNV_2";
		case 404:
			return "CFSN_CNV_1";
		case 405:
			return "CFSN_CNV_2";
		case 406:
			return "CFSN_CNV_3";
		case 407:
			return "CFSSNBLL_CNV_1";
		case 408:
			return "CFSSNUNC_CNV_1";
		case 409:
			return "CFTL_CNV_1";
		case 410:
			return "CFTL_CNV_2";
		case 411:
			return "CFTL_CNV_3";
		case 412:
			return "CFTRLUNC_CNV_1";
		case 413:
			return "CFUN_CNV_1";
		case 414:
			return "CFUN_CNV_2";
		case 415:
			return "CFUN_CNV_3";
		case 416:
			return "CFUN_CNV_4";
		case 417:
			return "CFUN_CNV_5";
		case 418:
			return "CFUN_CNV_6";
		case 419:
			return "CFUNCBLL_CNV_1";
		case 420:
			return "CFUNCBLL_CNV_2";
		case 421:
			return "CFUNCBLL_CNV_3";
		case 422:
			return "CFUNCHR_CNV_1";
		case 423:
			return "CFUNCDTC_CNV_1";
		case 424:
			return "CFUNMCH_CNV_1";
		case 425:
			return "CFUNMCH_CNV_2";
		case 426:
			return "CFUNCPRS_CNV_1";
		case 427:
			return "CCABIJCK_SNG1_ES_HELL_BOUND_TRAIN";
		case 428:
			return "CCABIJCK_SNG1_ES_LITTLE_JOE_WRANGLER";
		case 429:
			return "CCABIJCK_SNG1_ES_NEVER_GET_DRUNK";
		case 430:
			return "CCABIJCK_SNG1_ES_WILD_ROVER";
		case 431:
			return "CCCHR_HARM_SNG_4";
		case 432:
			return "CCJAV_GUIT_SNG1";
		case 433:
			return "CCJAV_GUIT_SNG2";
		case 434:
			return "CCJAV_GUIT_SNG4";
		case 435:
			return "CCJAV_GUIT_SNG5";
		case 436:
			return "CCJAV_GUIT_SNG6";
		case 437:
			return "CCJCK_SNG1_ES_CLEMENTINE";
		case 438:
			return "CCJCK_SNG1_ES_LILY_OF_THE_VALLEY";
		case 439:
			return "CCJCK_SNG1_ES_OH_SHENENDOH";
		case 440:
			return "CCJCK_SNG1_ES_OH_SUSANNA";
		case 441:
			return "CCJCK_SNG1_ES_YELLOW_ROSE_OF_TEXAS";
		case 442:
			return "CCKAR_SNG1";
		case 443:
			return "CCKNSNUNJ_SNG1";
		case 444:
			return "CCPNKNJ_SNG1";
		case 445:
			return "CCPNS_CONC_SNG1";
		case 446:
			return "CCPNS_CONC_SNG4";
		case 447:
			return "CCPNS_CONC_SNG7";
		case 448:
			return "CCPRS_CONC_SNG5";
		case 449:
			return "CCPRS_CONC_SNG8";
		case 450:
			return "CCPSN_SNG1";
		case 451:
			return "CCSEN_SNG1_SPRIG_OF_SHILLELAH";
		case 452:
			return "CCSNK_SNG2";
		case 453:
			return "CCSNK_SNG3";
		case 454:
			return "CCSNKNJ_SNG1";
		case 455:
			return "CCSNKNJ_SNG2";
		case 458:
			return "CCSWN_SNG1_SIT_SING";
		case 459:
			return "CCSWN_SNG1_SIT_SING_SLEEP";
		case 457:
			return "CCSWN_SNG1_WANDER";
		case 456:
			return "CCSWN_SNG1_WNT";
		case 460:
			return "CCUNC_SNG1_DRUNK";
		case 461:
			return "CCUNC_SNG1_SOBER";
		case 462:
			return "CCUNC_SNG2";
		case 463:
			return "CCUNJNSNK_SNG1";
		case 464:
			return "CCUNP_SNG1";
		case 465:
			return "CCUNPNKNJ_SNG1";
		case 466:
			return "CCUNPNKNS_SNG1";
		case 467:
			return "CCUNPNSNJ_SNG2";
		case 468:
			return "CCUNPNSNJ_SNG3";
		case 469:
			return "CCUNS_SNG2";
		case 470:
			return "CCUNS_SNG3";
		case 471:
			return "CCUNSNJ_SNG1";
		case 472:
			return "CCUNSNK_SNG1";
		case 473:
			return "CCUNSNKNJ_SNG1";
		case 474:
			return "CCUNSNKNS_SNG1";
		case 475:
			return "CCBLL_WRK_CNV_1";
		case 476:
			return "CCBLL_WRK_CNV_2";
		case 477:
			return "CCHSH_WRK_CNV_1_P1";
		case 478:
			return "CCHSH_WRK_CNV_2";
		case 479:
			return "CCJAV_WRK_CNV_1";
		case 480:
			return "CCMCH_WRK_CNV_1";
		case 481:
			return "CCMCH_WRK_CNV_2";
		case 482:
			return "CCSWN_WRK_CNV_1";
		case 483:
			return "CCDTC_SPEECH_BVH_CNV1";
		case 484:
			return "CCDTC_SPEECH_CLM_CNV1";
		case 485:
			return "CCDTC_SPEECH_SDB_CNV1";
		case 486:
			return "CCPRS_SPEECH_LOW_FOOD_CNV1";
		case 487:
			return "CCSEN_SPEECH_HSO_CNV1";
		case 488:
			return "CCSSN_SPEECH_LOW_FOOD_CNV1";
		case 489:
			return "CCABI_ITM_CNV_1";
		case 490:
			return "CCBLL_ITM_CNV_1";
		case 491:
			return "CCCHR_ITM_CNV_1";
		case 492:
			return "CCCHR_ITM_CNV_2";
		case 493:
			return "CCCHR_ITM_CNV_3";
		case 494:
			return "CCDTC_ITM_CNV_1_GET";
		case 495:
			return "CCDTC_ITM_CNV_1_GOT";
		case 496:
			return "CCHSH_ITM_CNV_1";
		case 497:
			return "CCJAV_ITM_CNV_1";
		case 498:
			return "CCJCK_WLK_HSO_ITM_CNV1";
		case 499:
			return "CCKAR_ITM_CNV_1";
		case 500:
			return "CCKIE_ITM_CNV_1";
		case 501:
			return "CCLEN_ITM_CNV_2";
		case 502:
			return "CCMLL_ITM_CNV_1";
		case 503:
			return "CCMRB_ITM_CNV_2";
		case 504:
			return "CCPRS_ITM_CNV_1";
		case 505:
			return "CCSEN_ITM_CNV_1";
		case 506:
			return "CCSSN_ITM_CNV_2";
		case 507:
			return "CCUNC_ITM_CNV_1";
		case 508:
			return "BCABI_WLK_GEN_CNV1";
		case 509:
			return "BCABI_WLK_GEN_CNV2";
		case 510:
			return "BCABI_WLK_GEN_CNV3";
		case 511:
			return "BCCHR_WLK_GEN_CNV1";
		case 512:
			return "BCCHR_WLK_GEN_CNV2";
		case 513:
			return "BCUNC_WLK_GEN_CNV1";
		case 514:
			return "BCUNC_WLK_GEN_CNV2";
		case 515:
			return "BCUNC_WLK_GEN_CNV3";
		case 516:
			return "BCUNC_WLK_GEN_CNV4";
		case 517:
			return "CCABI_WLK_BVH_CNV1";
		case 518:
			return "CCABI_WLK_BVH_CNV2";
		case 519:
			return "CCABI_WLK_HSO_CNV1";
		case 520:
			return "CCABI_WLK_HSO_CNV2";
		case 521:
			return "CCBLL_WLK_BVH_CNV1";
		case 522:
			return "CCBLL_WLK_BVH_CNV2";
		case 523:
			return "CCBLL_WLK_BVH_CNV3";
		case 524:
			return "CCBLL_WLK_BVH_CNV4";
		case 525:
			return "CCBLL_WLK_COL_CNV1";
		case 526:
			return "CCBLL_WLK_GEN_CNV1";
		case 527:
			return "CCBLL_WLK_GEN_CNV2";
		case 528:
			return "CCBLL_WLK_REP_SOFT_CNV1";
		case 529:
			return "CCCHR_WLK_GEN_CNV1";
		case 530:
			return "CCDTC_CNV_9";
		case 531:
			return "CCDTC_CNV_26";
		case 532:
			return "CCDTC_CNV_27";
		case 533:
			return "CCDTC_WLK_AWAY_CNV1";
		case 534:
			return "CCDTC_WLK_CLM_CNV2";
		case 536:
			return "CCDTC_WLK_CLM_CNV4";
		case 543:
			return "CCDTC_WLK_DOWNES1";
		case 535:
			return "CCDTC_WLK_CLM_CNV3";
		case 537:
			return "CCDTC_WLK_DRK_CNV1";
		case 538:
			return "CCDTC_WLK_GRF_CNV1";
		case 539:
			return "CCDTC_WLK_GRF_CNV2";
		case 540:
			return "CCDTC_WLK_HSO_CNV1";
		case 541:
			return "CCDTC_WLK_HSO_CNV2";
		case 542:
			return "CCDTC_WLK_HSO_CNV3";
		case 544:
			return "CCDTC_WLK_MAYHEM_CNV1";
		case 545:
			return "CCDTC_WLK_MUD4";
		case 546:
			return "CCDTC_WLK_PAR_CNV1";
		case 547:
			return "CCDTC_WLK_REP_CRAZY_CNV1";
		case 548:
			return "CCDTC_WLK_REP_CRAZY_CNV2";
		case 549:
			return "CCDTC_WLK_SDB_CNV1";
		case 550:
			return "CCDTC_WLK_TITHE_CNV1";
		case 551:
			return "CCHSH_WLK_CLM_CNV1";
		case 552:
			return "CCHSH_WLK_HSO_CNV1";
		case 553:
			return "CCHSH_WLK_HSO_CNV2";
		case 554:
			return "CCHSH_WLK_SDB_CNV1";
		case 555:
			return "CCJAV_WLK_BVH_CNV1";
		case 556:
			return "CCJAV_WLK_BVH_CNV2";
		case 557:
			return "CCJAV_WLK_CLM_CNV1";
		case 558:
			return "CCJAV_WLK_SDB_CNV1";
		case 559:
			return "CCKAR_WLK_CLM_CNV1";
		case 560:
			return "CCKAR_WLK_GEN_CNV1";
		case 561:
			return "CCKAR_WLK_GEN_CNV2";
		case 562:
			return "CCKAR_WLK_GEN_CNV3";
		case 563:
			return "CCKIE_WLK_HSO_CNV1";
		case 564:
			return "CCKIE_WLK_PAR_CNV1";
		case 565:
			return "CCKIE_WLK_GEN_CNV1";
		case 566:
			return "CCLEN_WLK_COL_CNV1";
		case 567:
			return "CCMCH_WLK_BVH_CNV1";
		case 568:
			return "CCMCH_WLK_CLM_CNV1";
		case 569:
			return "CCMCH_WLK_COL_CNV1";
		case 570:
			return "CCMCH_WLK_GEN_CNV1";
		case 571:
			return "CCMCH_WLK_GEN_CNV2";
		case 572:
			return "CCMCH_WLK_GEN_CNV3";
		case 573:
			return "CCMCH_WLK_GEN_CNV4";
		case 574:
			return "CCMCH_WLK_GEN_CNV5";
		case 575:
			return "CCMCH_WLK_REP_SOFT_CNV1";
		case 576:
			return "CCMCH_WLK_REP_SOFT_CNV2";
		case 577:
			return "CCMCH_WLK_REP_SOFT_CNV3";
		case 578:
			return "CCMRB_WLK_GEN_CNV1";
		case 579:
			return "CCMRB_WLK_HSO_CNV1";
		case 580:
			return "CCMRB_WLK_HSO_CNV2";
		case 581:
			return "CCMRB_WLK_SDB_CNV1";
		case 582:
			return "CCPRS_WLK_GEN_CNV1";
		case 583:
			return "CCPRS_WLK_LOW_FOOD_CNV1";
		case 584:
			return "CCPRS_WLK_LOW_FOOD_URG_CNV1";
		case 585:
			return "CCSAD_WLK_BVH_CNV1";
		case 586:
			return "CCSAD_WLK_HSO_CNV1";
		case 587:
			return "CCSEN_WLK_PAR_CNV1";
		case 588:
			return "CCSSN_CNV_6";
		case 589:
			return "CCSSN_WLK_AWAY_CNV1";
		case 590:
			return "CCSSN_WLK_AWAY_CNV2";
		case 591:
			return "CCSSN_WLK_BVH_CNV1";
		case 592:
			return "CCSSN_WLK_BVH_CNV2";
		case 593:
			return "CCSSN_WLK_BVH_CNV3";
		case 594:
			return "CCSSN_WLK_GEN_CNV1";
		case 595:
			return "CCSSN_WLK_GRF_MAYHEM_CNV1";
		case 596:
			return "CCSSN_WLK_HOMEROB_CNV1";
		case 597:
			return "CCSSN_WLK_HSO_CNV1";
		case 598:
			return "CCSSN_WLK_HSO_CNV2";
		case 599:
			return "CCSSN_WLK_HSO_CNV3";
		case 600:
			return "CCSSN_WLK_HSO_CNV4";
		case 601:
			return "CCSSN_WLK_HSO_CNV5";
		case 602:
			return "CCSSN_WLK_HSO_CNV6";
		case 603:
			return "CCSSN_WLK_HSO_CNV7";
		case 604:
			return "CCSSN_WLK_LOW_FOOD_CNV1";
		case 605:
			return "CCSSN_WLK_REP_CRAZY_CNV1";
		case 606:
			return "CCSSN_WLK_REP_CRAZY_CNV2";
		case 607:
			return "CCSSN_WLK_REP_CRAZY_CNV3";
		case 608:
			return "CCSSN_WLK_SDB_CNV1";
		case 609:
			return "CCSSN_WLK_SDB_CNV2";
		case 610:
			return "CCSSN_WLK_TITHE_CNV1";
		case 611:
			return "CCSTR_CNV_4";
		case 612:
			return "CCSWN_CNV_18";
		case 613:
			return "CCSWN_WLK_BVH_CNV1";
		case 614:
			return "CCSWN_WLK_GEN_CNV1";
		case 615:
			return "CCSWN_WLK_GEN_CNV2";
		case 616:
			return "CCSWN_WLK_GEN_CNV4";
		case 617:
			return "CCSWN_WLK_GEN_CNV5";
		case 618:
			return "CCSWN_WLK_HSO_CNV1";
		case 619:
			return "CCSWN_WLK_HSO_CNV2";
		case 620:
			return "CCSWN_WLK_HSO_CNV3";
		case 621:
			return "CCSWN_WLK_SDB_CNV1";
		case 622:
			return "CCSWN_WLK_SDB_CNV2";
		case 623:
			return "CCTLL_WLK_GEN_CNV1";
		case 624:
			return "CCTLL_WLK_GEN_CNV2";
		case 625:
			return "CCTLL_WLK_HSO_CNV1";
		case 626:
			return "CCTRL_WLK_BVH_CNV1";
		case 627:
			return "CCTRL_WLK_CLM_CNV1";
		case 628:
			return "CCTRL_WLK_CLM_CNV2";
		case 629:
			return "CCTRL_WLK_CLM_CNV3";
		case 630:
			return "CCTRL_WLK_GEN_CNV1";
		case 631:
			return "CCUNC_WLK_BVH_CNV1";
		case 632:
			return "CCUNC_WLK_CLM_CNV1";
		case 633:
			return "CCUNC_WLK_GEN_CNV1";
		case 634:
			return "CCUNC_WLK_GEN_CNV2";
		case 635:
			return "CCUNC_WLK_GEN_CNV3";
		case 636:
			return "BCABI_CNV_1";
		case 637:
			return "BCABI_CNV_2";
		case 638:
			return "BCABI_CNV_4";
		case 639:
			return "BCABI_CNV_5";
		case 640:
			return "BCABI_CNV_6";
		case 641:
			return "BCABI_CNV_7";
		case 642:
			return "BCABI_SLP_CNV_1";
		case 643:
			return "BCABI_SLP_CNV_2";
		case 644:
			return "BCABI_SLP_CNV_3";
		case 645:
			return "BCABI_SLP_CNV_4";
		case 646:
			return "BCANC_CNV_1";
		case 647:
			return "BCANJ_CNV_1";
		case 648:
			return "BCANJ_CNV_2";
		case 649:
			return "BCANJ_CNV_3";
		case 650:
			return "BCANJ_CNV_4";
		case 651:
			return "BCANU_CNV_1";
		case 652:
			return "BCCHR_CNV_1";
		case 653:
			return "BCCHR_CNV_2";
		case 654:
			return "BCCHR_CNV_3";
		case 655:
			return "BCCHR_CNV_5";
		case 656:
			return "BCCNU_CNV_1";
		case 657:
			return "BCCNU_CNV_2";
		case 658:
			return "BCCNU_CNV_3";
		case 659:
			return "BCCNU_CNV_4";
		case 660:
			return "BCCNU_CNV_5";
		case 661:
			return "BCCNJ_CNV_1";
		case 662:
			return "BCJCK_CNV_1";
		case 663:
			return "BCJCK_CNV_3";
		case 664:
			return "BCJCK_CNV_4";
		case 665:
			return "BCJCK_CNV_5";
		case 666:
			return "BCJCK_CNV_6";
		case 667:
			return "BCUNC_CNV_1";
		case 668:
			return "BCUNC_CNV_2";
		case 669:
			return "BCUNC_CNV_4";
		case 670:
			return "BCUNC_CNV_6";
		case 671:
			return "BCUNC_CNV_7";
		case 672:
			return "BCUNJ_CNV_1";
		default:
			break;
	}
	return "UNDEFINED";
}

int func_73(var uParam0)
{
	return 0;
}

int func_74(var uParam0)
{
	if (func_148(uParam0))
	{
		func_37(uParam0);
		return 1;
	}
	if (func_149(uParam0))
	{
		if (func_34(uParam0) == 4 && !uParam0->f_2262)
		{
			if (!func_150(uParam0) || uParam0->f_16)
			{
				uParam0->f_2262 = 1;
				return 0;
			}
		}
		func_151(uParam0);
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	(Global_1327590->f_11465[iParam0 /*10*/])->f_5 = func_152();
}

int func_76(var uParam0)
{
	switch (func_153(uParam0))
	{
		case 1:
			func_154(uParam0, 130, 0, 0, 0);
			break;
		case 2:
			func_155(uParam0, 653.448f, -1252.911f, 42.464f, -1.525f, 0f, 125.82f);
			break;
			break;
		case 3:
			func_155(uParam0, 1891.541f, -1867.241f, 41.98f, 0f, 0f, -31.88f);
			break;
		default:
			return 0;
	}
	func_156(uParam0, 0, 0);
	func_157(uParam0, 0.624f, -2.879f, 0f, 0f, 1f, 1f, 5f, -1612834106, 2017216891, 1, 1, 1);
	func_157(uParam0, 0.624f, -4.1415f, 0f, 0f, 1f, 1f, 5f, -1612834106, -1, 1, 1, 1);
	if (func_21(uParam0) == 494)
	{
		iLocal_17 = func_158(uParam0, joaat("p_cigar02x"), 0f, 0f, 0f, "CIGAR", 0, 0, 1);
		iLocal_15 = func_159(uParam0, "script@vignette@itm@dutch_item_1@action_request", 0, 0, 0, 1);
		func_160(uParam0, iLocal_14, 3, 920578187, "WORLD_CAMP_DUTCH_SMOKE_CIGAR_MALE_A", -1, 1);
		func_161(uParam0, iLocal_14, 2, 920578187, "WORLD_CAMP_DUTCH_SMOKE_CIGAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
		func_162(uParam0, iLocal_14, iLocal_17, "p_cigar02x_PH_R_HAND", 0, 0);
		func_163(5);
	}
	if (func_21(uParam0) == 495)
	{
		func_158(uParam0, joaat("p_pipe01x"), 0f, 0f, 0f, "PIPE", 0, 1, 1);
		func_158(uParam0, 1091014263, 0f, 0f, 0f, "SPURS", 0, 1, 1);
		func_160(uParam0, iLocal_14, 3, joaat("stand"), 0, -1, 1);
		iLocal_15 = func_159(uParam0, "script@vignette@itm@dutch_item_1@item_aquired", 2, 1, 0, 1);
		iLocal_16 = func_159(uParam0, "script@vignette@itm@dutch_item_1@action_exchange", 0, 0, 0, 1);
	}
	func_164(uParam0, "CDTI1AU");
	func_165(uParam0, iLocal_14, 4, 2, 0, 0, 0);
	func_166(uParam0, iLocal_14, 2, -1);
	Local_18 = { func_167(uParam0, 0.6245f, -2.8792f, 1.1559f, -177.149f, 5.5f, 0.65f, 0.65f) };
	func_168(uParam0, 1);
	if (func_169(10))
	{
		func_170(uParam0);
		func_171(uParam0, iLocal_14, 4);
		func_172(uParam0, iLocal_14, 1);
		func_173(uParam0, 1);
	}
	return 1;
}

int func_77(var uParam0)
{
	if (uParam0->f_106 <= 0 || uParam0->f_106 > 14)
	{
		return 0;
	}
	PED::_0xED9582B3DA8F02B4(uParam0->f_106);
	func_174(uParam0);
	func_175(uParam0);
	func_176(uParam0);
	func_177(uParam0);
	func_178(uParam0);
	func_179(uParam0);
	func_180(uParam0, uParam0->f_17);
	return 1;
}

int func_78(var uParam0)
{
	return 1;
}

int func_79(var uParam0)
{
	return 1;
}

int func_80(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if (!func_181(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_81(var uParam0)
{
	return 1;
}

int func_82(var uParam0)
{
	return 1;
}

int func_83(var uParam0)
{
	func_182(uParam0, uParam0->f_23, uParam0->f_26);
	func_183(uParam0);
	if (!func_184(uParam0))
	{
		return 0;
	}
	func_180(uParam0, uParam0->f_19);
	return 1;
}

int func_84(var uParam0)
{
	return 1;
}

int func_85(var uParam0)
{
	return 1;
}

int func_86(var uParam0)
{
	if (uParam0->f_2248)
	{
		return 1;
	}
	if (!uParam0->f_71)
	{
		if (!uParam0->f_2249)
		{
			if (!func_185(uParam0))
			{
				return 0;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		uParam0->f_2248 = 1;
		return 1;
	}
	if (!func_186(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_87(var uParam0)
{
	return 1;
}

int func_88(var uParam0)
{
	return 1;
}

int func_89(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
			func_59((uParam0->f_107[iVar0 /*113*/])->f_1, 46, 1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iVar0 /*113*/])->f_5))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
			{
			}
			else if (func_187(uParam0, iVar0))
			{
			}
			else if (uParam0->f_2047 >= 0 && uParam0->f_2047 < uParam0->f_1984)
			{
				if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_1984[uParam0->f_2047])))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(&(uParam0->f_1984[uParam0->f_2047]), (uParam0->f_107[iVar0 /*113*/])->f_4))
					{
						func_188(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	func_189(uParam0);
	func_190(uParam0, 1);
	func_191(uParam0);
	func_192(uParam0);
	func_193(uParam0, 1073741824 /* Float: 2f */);
	func_194(uParam0);
	func_195(uParam0);
	func_196(uParam0);
	func_197(uParam0);
	func_198(uParam0);
	func_199(uParam0);
	func_200(uParam0);
	if (uParam0->f_15)
	{
		func_180(uParam0, uParam0->f_20);
	}
	else
	{
		func_201(uParam0);
	}
	if (uParam0->f_2047 >= 0)
	{
		func_202(uParam0);
		func_203(uParam0, uParam0->f_2047, 1);
	}
	else if (uParam0->f_2248)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iVar0 /*113*/])->f_5))
			{
			}
			else if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
			{
				func_188(uParam0, iVar0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((uParam0->f_107[iVar0 /*113*/])->f_5, 0, 1);
				TASK::_TASK_USE_SCENARIO_POINT((uParam0->f_107[iVar0 /*113*/])->f_5, (uParam0->f_107[iVar0 /*113*/])->f_8.f_23, (uParam0->f_107[iVar0 /*113*/])->f_8.f_2, 0, 0, true, 0, 0, -1082130432, 0);
				PED::_0x2208438012482A1A((uParam0->f_107[iVar0 /*113*/])->f_5, false, false);
			}
			iVar0++;
		}
	}
	return 1;
}

int func_90(var uParam0)
{
	struct<4> Var0;

	func_205(func_204(uParam0, iLocal_17), 0);
	if (func_21(uParam0) == 495)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(uParam0->f_1984[iLocal_15]), "ARTHUR", &Var0, false, 0, 2))
			{
				func_206(&Var0, 3, 2, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, Var0, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Global_35, Var0.f_3, 2, true);
			}
		}
	}
	return 1;
}

bool func_91(var uParam0)
{
	if (func_21(uParam0) == 495)
	{
		return CAM::IS_SCREEN_FADED_IN();
	}
	return func_207(uParam0);
}

int func_92(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
			PED::SET_PED_RESET_FLAG((uParam0->f_107[iVar0 /*113*/])->f_5, 256, true);
		}
		iVar0++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_51(uParam0, "Shared Idle - Screen is faded out", 1, -1);
		return 0;
	}
	if (uParam0->f_2262)
	{
		return 1;
	}
	if (func_208(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_93(var uParam0)
{
	return 1;
}

int func_94(var uParam0)
{
	if (func_21(uParam0) == 495)
	{
		return 1;
	}
	func_8(&iLocal_29, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
	{
		PED::_0x32CCAD8A981B53D3(func_9(uParam0, iLocal_14));
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), func_9(uParam0, iLocal_14), sLocal_31, 0f, 0f, 0f, 0, sLocal_31);
		MISC::_0xE98D55C5983F2509(func_9(uParam0, iLocal_14));
	}
	func_203(uParam0, iLocal_15, 1);
	return 1;
}

int func_95(var uParam0)
{
	int iVar0;

	if (!uParam0->f_2265)
	{
		func_209(uParam0->f_2, 1);
	}
	iVar0 = func_210(func_21(uParam0));
	func_211(iVar0);
	(Global_1327590->f_19622[iVar0 /*14*/])->f_5++;
	(Global_1327590->f_19622[iVar0 /*14*/])->f_7++;
	if (uParam0->f_5)
	{
		func_212();
	}
	func_130(&(uParam0->f_10));
	func_213(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		func_203(uParam0, uParam0->f_2048, 1);
	}
	func_214(uParam0);
	MISC::_0xB08C4FA25BC29DB9(func_32(uParam0->f_2));
	return 1;
}

int func_96(var uParam0)
{
	return 1;
}

int func_97(var uParam0)
{
	if (func_215(func_9(uParam0, iLocal_14), -1457502635))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_31);
		if (func_21(uParam0) == 494)
		{
			func_216(5, 0, 1);
		}
	}
	if (func_21(uParam0) == 495)
	{
		if (func_215(Global_35, 542984997))
		{
			func_217(-858194369 /* GXTEntry: "Vaquero Rider Spurs" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		if (func_218(uParam0, iLocal_15))
		{
			func_203(uParam0, iLocal_16, 1);
		}
	}
	return 1;
}

int func_98(var uParam0)
{
	if (func_22(func_21(uParam0)))
	{
		func_219();
		func_220();
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		if (!func_221(4))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		}
	}
	func_222(uParam0);
	func_223(uParam0);
	func_224(uParam0);
	if (!func_225(uParam0))
	{
		return 0;
	}
	if (func_29(func_21(uParam0)))
	{
		func_35(func_21(uParam0), uParam0->f_2266);
	}
	return 1;
}

int func_99(var uParam0)
{
	if (func_21(uParam0) == 495)
	{
		func_226(-497602986 /* GXTEntry: "Pipe" */, 1, 0, -1387038764, 0);
	}
	return 1;
}

int func_100(var uParam0)
{
	return 1;
}

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar1 /*113*/])->f_5))
		{
		}
		else
		{
			if ((uParam0->f_107[iVar1 /*113*/])->f_8 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar1 /*113*/])->f_8.f_23))
				{
					if (!PED::_0x9C54041BB66BCF9E((uParam0->f_107[iVar1 /*113*/])->f_5, (uParam0->f_107[iVar1 /*113*/])->f_8.f_23))
					{
						TASK::_0x81948DFE4F5A0283((uParam0->f_107[iVar1 /*113*/])->f_8.f_23);
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			if ((uParam0->f_107[iVar1 /*113*/])->f_32.f_1 == 3)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar1 /*113*/])->f_32.f_21))
				{
					if (!PED::_0x9C54041BB66BCF9E((uParam0->f_107[iVar1 /*113*/])->f_5, (uParam0->f_107[iVar1 /*113*/])->f_32.f_21))
					{
						TASK::_0x81948DFE4F5A0283((uParam0->f_107[iVar1 /*113*/])->f_32.f_21);
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_102(int iParam0)
{
	return func_227(iParam0, 2);
}

void func_103(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_228(vParam0))
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
			if (func_229(vVar2, vParam0, 2f, 1))
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

int func_104(int iParam0)
{
	if (iParam0 >= 9)
	{
		return -2147483648;
	}
	else if (iParam0 >= 6)
	{
		return 32;
	}
	else if (iParam0 >= 3)
	{
		return 16;
	}
	return 8;
}

void func_105(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 - (((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1));
	((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 - (((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1));
}

void func_106(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_107(iParam0, 50, 1);
		func_107(iParam0, 48, 1);
		func_107(iParam0, 49, 1);
		func_107(iParam0, 51, 1);
		func_107(iParam0, 52, 1);
		func_107(iParam0, 54, 1);
		func_107(iParam0, 55, 1);
	}
	else
	{
		func_59(iParam0, 50, 1);
		func_59(iParam0, 48, 1);
		func_59(iParam0, 49, 1);
		func_59(iParam0, 51, 1);
		if (bParam3)
		{
			func_59(iParam0, 54, 1);
		}
		else
		{
			func_107(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_59(iParam0, 52, 1);
			if (bParam3)
			{
				func_59(iParam0, 55, 1);
			}
		}
		else
		{
			func_107(iParam0, 52, 1);
			if (!bParam3)
			{
				func_107(iParam0, 55, 1);
			}
		}
	}
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return;
		}
	}
	func_119(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

bool func_108(int iParam0)
{
	return iParam0 > -1;
}

int func_109(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

int func_110(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

void func_111(int iParam0, int iParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	if (func_125(iVar0, 0))
	{
		if (func_125(PED::_0xB676EFDA03DADA52(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_110(iParam0)) || func_55(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_230(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_231(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_232(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_233(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_233(iParam0, 0));
					func_234(iParam0);
				}
			}
			else
			{
				if (func_235(iParam0, 32768, 1))
				{
					iVar2 = func_233(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_125(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_235(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_232(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_233(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_233(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_232(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_236(iParam0, 0);
	return 1;
}

bool func_113(var uParam0)
{
	return func_237(*uParam0, 1);
}

float func_114(var uParam0)
{
	if (!func_113(uParam0))
	{
		return 0f;
	}
	if (func_238(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_239() - uParam0->f_1);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2133893358;
		case 1:
			return -676452144;
		case 2:
			return -1203013871;
		case 3:
			return -551211202;
		case 4:
			return -67529062;
		case 5:
			return -1569738275;
		case 6:
			return 667145698;
		case 7:
			return -1552727033;
		case 8:
			return -1273448181;
		case 9:
			return 1174723062;
		case 10:
			return -1080561526;
		case 11:
			return 1837691326;
		case 12:
			return 0;
		case 13:
			return joaat("abigail");
		case 14:
			return joaat("jack");
		case 15:
			return -874566010;
		case 16:
			return joaat("molly");
		case 17:
			return -1720194626;
		case 18:
			return -1421232554;
		case 19:
			return 45077879;
		case 20:
			return joaat("karen");
		case 21:
			return 1324878902;
		case 22:
			return -1147716223;
		case 23:
			return 66489425;
		case 26:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_116(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_239() - fParam1);
	func_240(uParam0, 1);
	func_241(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_117()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

bool func_118(int iParam0)
{
	return func_235(iParam0, 16, 1);
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1 || !func_113(uParam0))
	{
		func_243(uParam0);
	}
}

void func_121(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_244(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_122(iParam0, 1, 0);
		}
	}
	func_122(iParam0, 16, bParam1);
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return;
	}
	func_245(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_123(int iParam0)
{
	func_122(iParam0, 8, 0);
}

void func_124(int iParam0)
{
	func_59(iParam0, 36, 1);
}

int func_125(int iParam0, int iParam1)
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
	if (func_246(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_246(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_126(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_247(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return false;
		}
	}
	func_119(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_54(iParam0))
	{
		iVar1 = func_248(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_249(iParam0);
		}
	}
	if (func_127(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_248(iParam0), 137, true);
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_248(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_248(iParam0), 204, false);
	}
}

void func_130(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_131(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_54(iParam0))
	{
		return;
	}
	if (func_118(iParam0))
	{
		if (!func_58(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_127(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_126(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uVar0))
	{
		return;
	}
	iVar1 = func_248(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_250(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_59(iParam0, 2, 1);
	}
	else
	{
		func_251(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_132(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

bool func_133(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return false;
	}
	if (!func_61(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

bool func_134(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_135(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return;
	}
	if (!func_61(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_136(int iParam0)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return;
	}
	iVar0 = func_252(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_137(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_138(int iParam0)
{
	return iParam0 != 0;
}

int func_139(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

int func_140(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (func_137(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_139(iParam0)))
	{
		return 1;
	}
	if (func_133(iParam0, 1) && !bParam1)
	{
		func_253(iParam0, 128);
		return 1;
	}
	func_135(iParam0, 129);
	func_136(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_139(iParam0));
	func_254(iParam0, 0);
	return 1;
}

int func_141(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_142(int iParam0, int iParam1)
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

void func_143(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65(*iParam0);
	iVar1 = func_64(*iParam0);
	if (iParam1 < 1 || iParam1 > func_70(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_145(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_146(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_147(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_148(var uParam0)
{
	int iVar0;

	if (func_46(uParam0))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 1;
	}
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!func_255())
	{
		return 1;
	}
	if (func_256(&Global_1935630, 16384))
	{
		return 1;
	}
	if (func_257(2))
	{
		return 1;
	}
	if (!uParam0->f_3)
	{
		if (func_257(1))
		{
			return 1;
		}
	}
	if (uParam0->f_4)
	{
		if (!func_258(1))
		{
			return 1;
		}
	}
	if (Global_1357549->f_1614 || func_259(4))
	{
		return 1;
	}
	if (Global_18)
	{
		return 1;
	}
	if (func_260(uParam0->f_22))
	{
		if (!uParam0->f_3 && !Global_1327590->f_19736)
		{
			return 1;
		}
	}
	else
	{
		uParam0->f_22 = func_30();
		func_31(&(uParam0->f_22), 0, 0, 1, 0, 0, 0, 0);
	}
	if (func_261())
	{
		if (!Global_1327590->f_19735 && !uParam0->f_8)
		{
			return 1;
		}
	}
	if (func_262(1030, 1, 1))
	{
		if (!Global_1327590->f_19734 && !uParam0->f_8)
		{
			return 1;
		}
	}
	else if (uParam0->f_8)
	{
		uParam0->f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
		}
		else
		{
			if (func_263((uParam0->f_107[iVar0 /*113*/])->f_1, 2048))
			{
				return 1;
			}
			if (func_34(uParam0) < 5)
			{
				if (func_127((uParam0->f_107[iVar0 /*113*/])->f_1, 29, 1) || func_264((uParam0->f_107[iVar0 /*113*/])->f_1))
				{
					return 1;
				}
				if (!uParam0->f_3)
				{
					if (func_118((uParam0->f_107[iVar0 /*113*/])->f_1) && !func_58((uParam0->f_107[iVar0 /*113*/])->f_1))
					{
						func_35(func_21(uParam0), 30);
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_149(var uParam0)
{
	if (func_34(uParam0) >= 5)
	{
		return 0;
	}
	if (uParam0->f_9)
	{
		return 1;
	}
	if (!uParam0->f_3)
	{
		if (!func_265(uParam0->f_2))
		{
			return 1;
		}
	}
	if (func_266(uParam0))
	{
		return 1;
	}
	if (uParam0->f_6)
	{
		if (func_267() || func_268())
		{
			if (func_34(uParam0) == 4)
			{
				if (func_269(uParam0))
				{
					return 1;
				}
				else
				{
					func_51(uParam0, "Player just donated - waiting for peds to be offscreen to abort", 30, -1);
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else
		{
			if (!func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
			{
				return 0;
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
			{
				return 0;
			}
			if (!PED::_0x9C54041BB66BCF9E((uParam0->f_107[iVar0 /*113*/])->f_5, (uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
			{
				return 0;
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO((uParam0->f_107[iVar0 /*113*/])->f_5, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_151(var uParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else if (!func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
		}
		else if (!func_58((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
		}
		else if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
		{
			if (PED::_0x9C54041BB66BCF9E((uParam0->f_107[iVar0 /*113*/])->f_5, (uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
			{
				fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 60f);
				func_59((uParam0->f_107[iVar0 /*113*/])->f_1, 68, 1);
				func_60((uParam0->f_107[iVar0 /*113*/])->f_1, 0, 0, 0, fVar1, 1, 1, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

var func_152()
{
	return &Global_1899515;
}

int func_153(var uParam0)
{
	return uParam0->f_1;
}

void func_154(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	uParam0->f_23 = { func_270(iParam1) + Vector(fParam4, fParam3, fParam2) };
	uParam0->f_26 = { func_271(iParam1) };
}

void func_155(var uParam0, vector3 vParam1, vector3 vParam4)
{
	uParam0->f_23 = { vParam1 };
	uParam0->f_26 = { vParam4 };
}

int func_156(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_272(iParam1);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (&uParam0->f_107[iVar0 /*113*/])
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/] = 1;
			(uParam0->f_107[iVar0 /*113*/])->f_1 = iParam1;
			(uParam0->f_107[iVar0 /*113*/])->f_4 = sParam2;
			uParam0->f_106++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_157(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	int iVar0;

	if (bParam10)
	{
		vParam1 = { func_273(uParam0, vParam1) };
		fParam4 = func_274(uParam0, fParam4);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar0 /*5*/])))
		{
			uParam0->f_36[iVar0 /*5*/] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam8, vParam1, 0f, 0f, fParam4, vParam5, "volBlockPeds");
			(uParam0->f_36[iVar0 /*5*/])->f_1 = iParam9;
			(uParam0->f_36[iVar0 /*5*/])->f_2 = iParam11;
			(uParam0->f_36[iVar0 /*5*/])->f_3 = iParam12;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_158(var uParam0, int iParam1, vector3 vParam2, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (STREAMING::IS_MODEL_VALID(&(uParam0->f_1711[iVar0 /*15*/])))
		{
		}
		else
		{
			uParam0->f_1711[iVar0 /*15*/] = iParam1;
			(uParam0->f_1711[iVar0 /*15*/])->f_1 = { vParam2 };
			(uParam0->f_1711[iVar0 /*15*/])->f_4 = sParam5;
			(uParam0->f_1711[iVar0 /*15*/])->f_5 = iParam6;
			(uParam0->f_1711[iVar0 /*15*/])->f_6 = iParam7;
			(uParam0->f_1711[iVar0 /*15*/])->f_8 = iParam8;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_159(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_1984[iVar0])))
		{
		}
		else
		{
			uParam0->f_1984[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, 0, false, true);
			if (bParam3)
			{
				uParam0->f_2047 = iVar0;
			}
			if (bParam4)
			{
				uParam0->f_2048 = iVar0;
			}
			if (bParam5)
			{
				uParam0->f_2015[iVar0] = 1;
			}
			uParam0->f_1983++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	(uParam0->f_107[iParam1 /*113*/])->f_8 = iParam2;
	(uParam0->f_107[iParam1 /*113*/])->f_8.f_1 = iParam3;
	(uParam0->f_107[iParam1 /*113*/])->f_8.f_2 = sParam4;
	(uParam0->f_107[iParam1 /*113*/])->f_8.f_7 = iParam5;
	(uParam0->f_107[iParam1 /*113*/])->f_8.f_8 = iParam6;
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_1 = iParam2;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_2 = iParam3;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_3 = sParam4;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_15 = iParam5;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_9 = iParam6;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_11 = iParam8;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_12 = iParam9;
	func_275(uParam0, iParam1, fParam7);
}

void func_162(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;

	(uParam0->f_1711[iParam2 /*15*/])->f_11 = sParam3;
	(uParam0->f_1711[iParam2 /*15*/])->f_12 = iParam5;
	(uParam0->f_1711[iParam2 /*15*/])->f_7 = iParam4;
	if ((uParam0->f_1711[iParam2 /*15*/])->f_7)
	{
		(uParam0->f_107[iParam1 /*113*/])->f_32.f_20 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&(uParam0->f_107[iParam1 /*113*/])->f_32.f_16[iVar0] >= 0)
		{
		}
		else
		{
			(uParam0->f_107[iParam1 /*113*/])->f_32.f_16[iVar0] = iParam2;
			return;
		}
		iVar0++;
	}
}

void func_163(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			func_276(Global_40.f_6563[iVar0 /*27*/]);
			func_277(iVar0);
			func_278(iVar0);
			func_279();
			return;
		}
		iVar0++;
	}
}

void func_164(var uParam0, char* sParam1)
{
	StringCopy(&(uParam0->f_2232), sParam1, 32);
}

void func_165(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6)
{
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_32 = iParam2;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_33 = iParam3;
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_34 = iParam4;
	StringCopy(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_23), sParam5, 32);
	StringCopy(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_28), sParam6, 32);
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_55 = iParam2;
	if (iParam3 < 0)
	{
		switch (iParam2)
		{
			case 1:
				(uParam0->f_107[iParam1 /*113*/])->f_32.f_59 = 45;
				break;
			case 2:
				(uParam0->f_107[iParam1 /*113*/])->f_32.f_59 = 60;
				break;
			case 3:
				(uParam0->f_107[iParam1 /*113*/])->f_32.f_59 = 120;
				break;
		}
	}
	else
	{
		(uParam0->f_107[iParam1 /*113*/])->f_32.f_59 = iParam3;
	}
}

struct<10> func_167(var uParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	float fVar1;
	struct<10> Var2;

	fVar0 = func_274(uParam0, (fParam4 + (fParam6 * 90f)));
	fVar1 = func_274(uParam0, (fParam4 - (fParam7 * 90f)));
	Var2 = { func_273(uParam0, vParam1) };
	Var2.f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, fVar0, 0f, fParam5, 0f) };
	Var2.f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, fVar1, 0f, fParam5, 0f) };
	Var2.f_9 = fParam5;
	return Var2;
}

void func_168(var uParam0, int iParam1)
{
	uParam0->f_2262 = iParam1;
}

bool func_169(int iParam0)
{
	return Global_1327590->f_10 == iParam0;
}

void func_170(var uParam0)
{
	uParam0->f_71 = 1;
}

void func_171(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_107[iParam1 /*113*/])->f_8 = iParam2;
}

void func_172(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_107[iParam1 /*113*/])->f_8.f_22 = iParam2;
}

void func_173(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

void func_174(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!uParam0->f_72)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_33)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_33[iVar0])))
			{
				if (iVar0 == 0 && uParam0->f_32 > 0f)
				{
					uParam0->f_33[iVar0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_29, 0f, 0f, 0f, uParam0->f_32, uParam0->f_32, 5f, "Block Content");
				}
			else
			{
				}
				else
				{
					func_280(&(uParam0->f_33[iVar0]), 0, 1, 0, 2048, 0, -1082130432 /* Float: -1f */);
					iVar0++;
				}
				if (!uParam0->f_71)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_36)
					{
						if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar1 /*5*/])))
						{
							if (iVar1 == 0 && !uParam0->f_4)
							{
								uParam0->f_36[iVar1 /*5*/] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(665633627, uParam0->f_29, 0f, 0f, 0f, 3f, 3f, 2f, "Block Peds");
								(uParam0->f_36[iVar1 /*5*/])->f_2 = 1;
							}
						else
						{
							}
							else
							{
								if ((uParam0->f_36[iVar1 /*5*/])->f_2)
								{
									POPULATION::_0xB56D41A694E42E86(&(uParam0->f_36[iVar1 /*5*/]), 272352, 0, 0, -1, (uParam0->f_36[iVar1 /*5*/])->f_1, 16);
								}
								iVar1++;
							}
						}
					}
				}
			}
		}
	}

void func_175(var uParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = 0.8f;
	if (uParam0->f_5)
	{
		fVar0 = 0.4f;
	}
	else if (uParam0->f_4)
	{
		fVar0 = 0.7f;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar1 /*113*/])->f_100 == 0f)
		{
			func_281(uParam0, iVar1, fVar0);
		}
		iVar1++;
	}
}

void func_176(var uParam0)
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2232)))
	{
		return;
	}
	HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_2232));
}

void func_177(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (!STREAMING::IS_MODEL_VALID((uParam0->f_107[iVar0 /*113*/])->f_3))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL((uParam0->f_107[iVar0 /*113*/])->f_3, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(&(uParam0->f_1711[iVar0 /*15*/])))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(&(uParam0->f_1711[iVar0 /*15*/]), false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(&(uParam0->f_1967[iVar0 /*4*/])))
		{
		}
		else
		{
			WEAPON::_0x72D4CB5DB927009C(&(uParam0->f_1967[iVar0 /*4*/]), 1, 0);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29));
			func_51(uParam0, "Pinned interior", 1, -1);
		}
	}
}

void func_178(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_2 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_107[iVar0 /*113*/])->f_32.f_3))
			{
				STREAMING::_0x19A6BE7D9C6884D3((uParam0->f_107[iVar0 /*113*/])->f_32.f_2, 15, 0, MISC::GET_HASH_KEY((uParam0->f_107[iVar0 /*113*/])->f_32.f_3));
			}
			else
			{
				STREAMING::_0x19A6BE7D9C6884D3((uParam0->f_107[iVar0 /*113*/])->f_32.f_2, 1, 0, 0);
			}
		}
		if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_1 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_107[iVar0 /*113*/])->f_8.f_2))
			{
				STREAMING::_0x19A6BE7D9C6884D3((uParam0->f_107[iVar0 /*113*/])->f_8.f_1, 15, 0, MISC::GET_HASH_KEY((uParam0->f_107[iVar0 /*113*/])->f_8.f_2));
			}
			else
			{
				STREAMING::_0x19A6BE7D9C6884D3((uParam0->f_107[iVar0 /*113*/])->f_8.f_1, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_179(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(uParam0->f_2236[iVar0 /*8*/]))
		{
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_2236[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_180(var uParam0, var uParam1)
{
	uParam0->f_13 = uParam1;
	func_116(&(uParam0->f_10), 0f);
}

int func_181(var uParam0)
{
	switch (uParam0->f_2245)
	{
		case 0:
			if (uParam0->f_21 || func_282(uParam0))
			{
				func_283(uParam0, 1);
				func_180(uParam0, uParam0->f_18);
				uParam0->f_2245 = 1;
			}
			break;
		case 1:
			if (func_284(uParam0))
			{
				uParam0->f_2245 = 2;
			}
			break;
		case 2:
			if (func_285(uParam0))
			{
				uParam0->f_2245 = 3;
			}
			break;
		case 3:
			if (func_286(uParam0))
			{
				uParam0->f_2245 = 4;
			}
			break;
		case 4:
			if (func_287(uParam0))
			{
				uParam0->f_2245 = 5;
			}
			break;
		case 5:
			if (func_288(uParam0))
			{
				uParam0->f_2245 = 6;
			}
			break;
		case 6:
			if (func_289(uParam0))
			{
				uParam0->f_2245 = 7;
			}
			break;
		case 7:
			if (func_290(uParam0))
			{
				uParam0->f_2245 = 8;
			}
			break;
		case 8:
			if (func_291(uParam0))
			{
				uParam0->f_2245 = 9;
			}
			break;
		case 9:
			if (func_292(uParam0))
			{
				uParam0->f_2245 = 10;
			}
			break;
		case 10:
			if (func_282(uParam0))
			{
				uParam0->f_2245 = 11;
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

void func_182(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!func_293(uParam0, iVar0))
		{
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(uParam0->f_1984[iVar0]), vParam1, vParam4, 2);
		}
		iVar0++;
	}
}

void func_183(var uParam0)
{
	struct<4> Var0;
	int iVar12;

	if (!func_293(uParam0, 0))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar12 /*113*/])->f_5))
		{
		}
		else
		{
			if (!STREAMING::IS_MODEL_VALID((uParam0->f_107[iVar12 /*113*/])->f_3))
			{
				if (func_54((uParam0->f_107[iVar12 /*113*/])->f_1))
				{
					(uParam0->f_107[iVar12 /*113*/])->f_3 = PERSCHAR::_0xA00DF706C60173D1(func_294((uParam0->f_107[iVar12 /*113*/])->f_1));
				}
				else if (func_61((uParam0->f_107[iVar12 /*113*/])->f_2))
				{
					(uParam0->f_107[iVar12 /*113*/])->f_3 = func_295((uParam0->f_107[iVar12 /*113*/])->f_2);
				}
				else if (func_54((uParam0->f_107[iVar12 /*113*/])->f_7))
				{
					(uParam0->f_107[iVar12 /*113*/])->f_3 = PERSCHAR::_0xA00DF706C60173D1(func_231((uParam0->f_107[iVar12 /*113*/])->f_7, 1));
				}
			}
			if (!func_228((uParam0->f_107[iVar12 /*113*/])->f_96))
			{
			}
			else
			{
				if (&uParam0->f_2051[0 /*6*/] == 0)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(uParam0->f_1984[0]), (uParam0->f_107[iVar12 /*113*/])->f_4, &Var0, true, &((uParam0->f_2051[0 /*6*/])->f_1), 2);
				}
				else
				{
					ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(uParam0->f_1984[0]), (uParam0->f_107[iVar12 /*113*/])->f_4, &Var0, false, 0, 2);
				}
				(uParam0->f_107[iVar12 /*113*/])->f_96 = { Var0 };
				(uParam0->f_107[iVar12 /*113*/])->f_99 = Var0.f_3.f_2;
			}
		}
		iVar12++;
	}
}

int func_184(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_1 == 0)
		{
		}
		else
		{
			if (func_228((uParam0->f_107[iVar0 /*113*/])->f_8.f_3))
			{
				(uParam0->f_107[iVar0 /*113*/])->f_8.f_3 = { (uParam0->f_107[iVar0 /*113*/])->f_96 };
			}
			if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_6 == 0f)
			{
				(uParam0->f_107[iVar0 /*113*/])->f_8.f_6 = (uParam0->f_107[iVar0 /*113*/])->f_99;
			}
			iVar1 = (uParam0->f_107[iVar0 /*113*/])->f_8.f_7;
			vVar2 = { (uParam0->f_107[iVar0 /*113*/])->f_8.f_3 };
			fVar5 = (uParam0->f_107[iVar0 /*113*/])->f_8.f_6;
			if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_8)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), 0);
			}
			if ((uParam0->f_107[iVar0 /*113*/])->f_8 == 4)
			{
				(uParam0->f_107[iVar0 /*113*/])->f_8.f_23 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar2, (uParam0->f_107[iVar0 /*113*/])->f_8.f_1, 1f, 0, 0);
				if (!TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
				{
					return 0;
				}
			}
			else if (!(uParam0->f_107[iVar0 /*113*/])->f_8.f_22)
			{
				if (iVar1 < 0)
				{
					(uParam0->f_107[iVar0 /*113*/])->f_8.f_23 = TASK::CREATE_SCENARIO_POINT((uParam0->f_107[iVar0 /*113*/])->f_8.f_1, vVar2, fVar5, 0, 0, 0);
					func_296(&((uParam0->f_107[iVar0 /*113*/])->f_8.f_23), 1, 0);
				}
				else
				{
					iVar6 = (uParam0->f_1711[iVar1 /*15*/])->f_10;
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar6, vVar2) };
						fVar5 = (fVar5 - ENTITY::GET_ENTITY_HEADING(iVar6));
						(uParam0->f_107[iVar0 /*113*/])->f_8.f_23 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY((uParam0->f_1711[iVar1 /*15*/])->f_10, (uParam0->f_107[iVar0 /*113*/])->f_8.f_1, vVar2, fVar5, 0, 0, 0);
						func_296(&((uParam0->f_107[iVar0 /*113*/])->f_8.f_23), 1, 0);
					}
				}
			}
			if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_14)
			{
				func_120(&((uParam0->f_107[iVar0 /*113*/])->f_8.f_17), 0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_185(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = func_248(iVar1);
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_36)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar0 /*5*/])))
				{
				}
				else if (iVar1 == func_297((uParam0->f_36[iVar0 /*5*/])->f_1))
				{
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(iVar2, &(uParam0->f_36[iVar0 /*5*/]), false, 0))
				{
					return 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	if (uParam0->f_2250)
	{
		iVar1 = 0;
		while (iVar1 < 27)
		{
			iVar3 = func_109(iVar1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < uParam0->f_36)
				{
					if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar0 /*5*/])))
					{
					}
					else if (iVar1 == func_297((uParam0->f_36[iVar0 /*5*/])->f_1))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iVar3, &(uParam0->f_36[iVar0 /*5*/]), false, 0))
					{
						return 0;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 7)
		{
			if (!(iVar4 == 0 || iVar4 == 1))
			{
			}
			else
			{
				iVar3 = func_298(iVar4);
				iVar0 = 0;
				while (iVar0 < uParam0->f_36)
				{
					if ((VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar0 /*5*/])) && !ENTITY::IS_ENTITY_DEAD(iVar3)) && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, &(uParam0->f_36[iVar0 /*5*/]), false, 0))
					{
						return 0;
					}
					iVar0++;
				}
			}
			iVar4++;
		}
	}
	uParam0->f_2249 = 1;
	return 1;
}

int func_186(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;

	bVar0 = true;
	iVar1 = 1;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < uParam0->f_106)
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar3 /*113*/])->f_5))
		{
		}
		else if ((uParam0->f_107[iVar3 /*113*/])->f_105)
		{
		}
		else if (func_187(uParam0, iVar3))
		{
		}
		else if ((uParam0->f_107[iVar3 /*113*/])->f_8.f_22)
		{
			iVar1 = 0;
		}
		else if ((uParam0->f_107[iVar3 /*113*/])->f_8.f_14)
		{
			func_299(uParam0, iVar3);
			if ((uParam0->f_107[iVar3 /*113*/])->f_8.f_21)
			{
				iVar1 = 0;
			}
			else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1((uParam0->f_107[iVar3 /*113*/])->f_5, -1))
			{
				if ((uParam0->f_107[iVar3 /*113*/])->f_1 != 14)
				{
					func_51(uParam0, "Create ped check - Ped is in an animscene", 30, iVar3);
					iVar1 = 0;
				}
				else
				{
					vVar4 = { (uParam0->f_107[iVar3 /*113*/])->f_96 };
					if (func_228(vVar4))
					{
						func_51(uParam0, "Start location is zero?", 10, iVar3);
					}
					else
					{
						if (!func_300(uParam0, iVar3, vVar4))
						{
							iVar1 = 0;
							bVar0 = false;
						}
						if (!func_301(uParam0, iVar3, vVar4))
						{
							iVar1 = 0;
							bVar0 = false;
						}
						if (!bVar0)
						{
						}
						else if (!bVar2 && uParam0->f_2251 <= 0)
						{
							if (func_302(uParam0, iVar3))
							{
								bVar2 = true;
								iVar1 = 0;
								bVar0 = false;
							}
						}
					}
				}
				iVar3++;
				if (bVar2)
				{
					uParam0->f_2251++;
				}
				else if (uParam0->f_2251 >= 1)
				{
					uParam0->f_2251 = 0;
				}
				return iVar1;
			}
		}
	}

int func_187(var uParam0, int iParam1)
{
	if ((uParam0->f_107[iParam1 /*113*/])->f_8.f_22 && (uParam0->f_107[iParam1 /*113*/])->f_8 != 4)
	{
		if (!PED::_0x34D6AC1157C8226C((uParam0->f_107[iParam1 /*113*/])->f_5, (uParam0->f_107[iParam1 /*113*/])->f_8.f_1))
		{
			func_51(uParam0, "Is ped in enter scenario - FALSE - not using scenario type", 60, iParam1);
			return 0;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO((uParam0->f_107[iParam1 /*113*/])->f_5, 0))
		{
			func_51(uParam0, "Is ped in enter scenario - FALSE - not active in scenario", 60, iParam1);
			return 0;
		}
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iParam1 /*113*/])->f_5, true, false), (uParam0->f_107[iParam1 /*113*/])->f_8.f_3) > 5f)
		{
			func_51(uParam0, "Is ped in enter scenario - FALSE - too far from enter position", 60, iParam1);
			return 0;
		}
		return 1;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iParam1 /*113*/])->f_8.f_23))
	{
		func_51(uParam0, "Is ped in enter scenario - FALSE - scenario does not exist", 60, iParam1);
		return 0;
	}
	if (!PED::_0x9C54041BB66BCF9E((uParam0->f_107[iParam1 /*113*/])->f_5, (uParam0->f_107[iParam1 /*113*/])->f_8.f_23))
	{
		func_51(uParam0, "Is ped in enter scenario - FALSE - not using scenario point", 60, iParam1);
		return 0;
	}
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO((uParam0->f_107[iParam1 /*113*/])->f_5, 0))
	{
		func_51(uParam0, "Is ped in enter scenario - FALSE - not active in scenario", 60, iParam1);
		return 0;
	}
	return 1;
}

void func_188(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iParam1 /*113*/])->f_5))
	{
		return;
	}
	func_303((uParam0->f_107[iParam1 /*113*/])->f_5);
	TASK::CLEAR_PED_SECONDARY_TASK((uParam0->f_107[iParam1 /*113*/])->f_5);
	func_304((uParam0->f_107[iParam1 /*113*/])->f_5, 1);
}

void func_189(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!(uParam0->f_107[iVar0 /*113*/])->f_104)
		{
		}
		else if (!STREAMING::IS_MODEL_VALID((uParam0->f_107[iVar0 /*113*/])->f_3))
		{
		}
		else
		{
			(uParam0->f_107[iVar0 /*113*/])->f_5 = func_305((uParam0->f_107[iVar0 /*113*/])->f_3, uParam0->f_23, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_190(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!func_293(uParam0, iVar0))
		{
		}
		else
		{
			if (bParam1)
			{
				if (func_306())
				{
					func_307(Global_35, &(uParam0->f_1984[iVar0]), "JOHN");
				}
				else
				{
					func_307(Global_35, &(uParam0->f_1984[iVar0]), "ARTHUR");
				}
			}
			iVar1 = 0;
			while (iVar1 < uParam0->f_106)
			{
				func_307((uParam0->f_107[iVar1 /*113*/])->f_5, &(uParam0->f_1984[iVar0]), (uParam0->f_107[iVar1 /*113*/])->f_4);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_191(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (uParam0->f_4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else if (TASK::IS_PED_ACTIVE_IN_SCENARIO((uParam0->f_107[iVar0 /*113*/])->f_5, 1) || TASK::_0x0C3CB2E600C8977D((uParam0->f_107[iVar0 /*113*/])->f_5, 1))
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
			{
				if (PED::_0x9C54041BB66BCF9E((uParam0->f_107[iVar0 /*113*/])->f_5, (uParam0->f_107[iVar0 /*113*/])->f_8.f_23))
				{
				}
				else
				{
					iVar1 = TASK::_0xDF7993356F52359A((uParam0->f_107[iVar0 /*113*/])->f_5, 1);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						vVar2 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar1, 1) };
						TASK::_0x4161648394262FDF(vVar2, 0.1f);
					}
				}
				iVar0++;
			}
		}
	}

void func_192(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		func_308((uParam0->f_107[iVar0 /*113*/])->f_5);
		iVar0++;
	}
}

int func_193(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else
		{
			fVar1 = (uParam0->f_107[iVar0 /*113*/])->f_100;
			if (fVar1 <= 0f)
			{
			}
			else
			{
				(uParam0->f_107[iVar0 /*113*/])->f_101 = VOLUME::_0x0EB78C2B156635B1(665633627, ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iVar0 /*113*/])->f_5, true, false), 0f, 0f, 0f, fVar1, fVar1, iParam1);
				if (!VOLUME::_DOES_VOLUME_EXIST((uParam0->f_107[iVar0 /*113*/])->f_101))
				{
				}
				else
				{
					PED::_0x7C00CFC48A782DC0((uParam0->f_107[iVar0 /*113*/])->f_101, (uParam0->f_107[iVar0 /*113*/])->f_5, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_194(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		func_309(uParam0, iVar0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_36[iVar0 /*5*/])))
		{
		}
		else
		{
			if ((uParam0->f_36[iVar0 /*5*/])->f_3)
			{
				(uParam0->f_36[iVar0 /*5*/])->f_4 = PED::_0x4C39C95AE5DB1329(&(uParam0->f_36[iVar0 /*5*/]), 0, 2);
			}
			iVar0++;
		}
	}
}

void func_195(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (uParam0->f_4)
	{
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_54((uParam0->f_107[iVar1 /*113*/])->f_1))
		{
			func_106((uParam0->f_107[iVar1 /*113*/])->f_1, 0, 0, bVar0);
		}
		iVar1++;
	}
}

void func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(&(uParam0->f_1711[iVar0 /*15*/])))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_1711[iVar0 /*15*/])->f_13))
			{
				iVar1 = (uParam0->f_1711[iVar0 /*15*/])->f_14;
				iVar2 = func_9(uParam0, iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
					{
						(uParam0->f_1711[iVar0 /*15*/])->f_10 = PED::_0x4D0D2E3D8BC000EB(iVar2, (uParam0->f_1711[iVar0 /*15*/])->f_13, 1);
					}
				}
			}
			if (!(uParam0->f_1711[iVar0 /*15*/])->f_5 && !ENTITY::DOES_ENTITY_EXIST((uParam0->f_1711[iVar0 /*15*/])->f_10))
			{
				if ((uParam0->f_1711[iVar0 /*15*/])->f_8)
				{
					vVar3 = { func_273(uParam0, (uParam0->f_1711[iVar0 /*15*/])->f_1) };
				}
				else
				{
					vVar3 = { (uParam0->f_1711[iVar0 /*15*/])->f_1 };
				}
				(uParam0->f_1711[iVar0 /*15*/])->f_10 = OBJECT::CREATE_OBJECT(&(uParam0->f_1711[iVar0 /*15*/]), vVar3, false, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_1711[iVar0 /*15*/])->f_10))
			{
			}
			else
			{
				iVar6 = 0;
				while (iVar6 < uParam0->f_1984)
				{
					if (!func_293(uParam0, iVar6))
					{
					}
					else
					{
						func_310((uParam0->f_1711[iVar0 /*15*/])->f_10, &(uParam0->f_1984[iVar6]), (uParam0->f_1711[iVar0 /*15*/])->f_4);
					}
					iVar6++;
				}
			}
		}
		iVar0++;
	}
}

void func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(&(uParam0->f_1967[iVar1 /*4*/])))
		{
		}
		else
		{
			iVar0 = (uParam0->f_1967[iVar1 /*4*/])->f_1;
			if (iVar0 < 0 || iVar0 >= uParam0->f_106)
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
			{
			}
			else
			{
				if (WEAPON::HAS_PED_GOT_WEAPON((uParam0->f_107[iVar0 /*113*/])->f_5, &(uParam0->f_1967[iVar1 /*4*/]), 0, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON((uParam0->f_107[iVar0 /*113*/])->f_5, &(uParam0->f_1967[iVar1 /*4*/]), true, 0, false, false);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2((uParam0->f_107[iVar0 /*113*/])->f_5, &(uParam0->f_1967[iVar1 /*4*/]), 1, true, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
				}
				(uParam0->f_1967[iVar1 /*4*/])->f_3 = WEAPON::_0x6CA484C9A7377E4F((uParam0->f_107[iVar0 /*113*/])->f_5, 1);
				if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_1967[iVar1 /*4*/])->f_3))
				{
				}
				else
				{
					iVar2 = 0;
					while (iVar2 < uParam0->f_1984)
					{
						if (!func_293(uParam0, iVar2))
						{
						}
						else
						{
							func_310((uParam0->f_1967[iVar1 /*4*/])->f_3, &(uParam0->f_1984[iVar2]), (uParam0->f_1967[iVar1 /*4*/])->f_2);
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_198(var uParam0)
{
	if (uParam0->f_1976.f_5)
	{
		uParam0->f_1976.f_6 = PROPSET::_CREATE_PROPSET_2(uParam0->f_1976, func_273(uParam0, uParam0->f_1976.f_1), 1, func_274(uParam0, uParam0->f_1976.f_4), 3f, false, true);
	}
}

void func_199(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iVar0 /*113*/])->f_5))
			{
			}
			else
			{
				iVar2 = &(uParam0->f_107[iVar0 /*113*/])->f_32.f_16[iVar1];
				if (iVar2 >= 0 && iVar2 < uParam0->f_1711)
				{
					iVar3 = (uParam0->f_1711[iVar2 /*15*/])->f_10;
					sVar4 = (uParam0->f_1711[iVar2 /*15*/])->f_11;
					if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						PED::_0xBDED916A9F9B0604((uParam0->f_107[iVar0 /*113*/])->f_5, iVar3, sVar4, (uParam0->f_107[iVar0 /*113*/])->f_32.f_2, (uParam0->f_107[iVar0 /*113*/])->f_32.f_3, 0);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_200(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_107[iVar0 /*113*/])->f_32.f_40)))
		{
		}
		else
		{
			func_311((uParam0->f_107[iVar0 /*113*/])->f_1, (uParam0->f_107[iVar0 /*113*/])->f_32.f_40, -1);
		}
		iVar0++;
	}
}

void func_201(var uParam0)
{
	uParam0->f_13 = 0;
	func_130(&(uParam0->f_10));
}

void func_202(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!uParam0->f_4)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iVar2 /*113*/])->f_5))
			{
			}
			else if (func_228((uParam0->f_107[iVar2 /*113*/])->f_96))
			{
			}
			else
			{
				iVar0 = func_312(ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iVar2 /*113*/])->f_5, true, false));
				iVar1 = func_312((uParam0->f_107[iVar2 /*113*/])->f_96);
				if (iVar0 || iVar1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET((uParam0->f_107[iVar2 /*113*/])->f_5, (uParam0->f_107[iVar2 /*113*/])->f_96, false, true, true);
				}
			}
			iVar2++;
		}
	}
}

int func_203(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_313(iParam1))
	{
		return 0;
	}
	if (!func_293(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = &uParam0->f_1984[iParam1];
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	uParam0->f_2046 = iVar0;
	if (&uParam0->f_2015[iParam1])
	{
		if (func_314(func_21(uParam0)))
		{
		}
		uParam0->f_1696 = 1;
		func_315(func_21(uParam0));
	}
	else if (func_22(func_21(uParam0)))
	{
		func_23();
	}
	if (uParam0->f_2270)
	{
		uParam0->f_2274 = 0;
		uParam0->f_2275 = 0;
		if ((func_117() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "ARTHUR")) || (func_306() && ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, "JOHN")))
		{
			uParam0->f_2274 = 1;
		}
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1984)
		{
			if (iVar1 == iParam1)
			{
			}
			else if (func_316(uParam0, iVar1) || func_218(uParam0, iVar1))
			{
				func_317(uParam0, iVar1);
			}
			iVar1++;
		}
	}
	return 1;
}

int func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1711)
	{
		return 0;
	}
	return (uParam0->f_1711[iParam1 /*15*/])->f_10;
}

void func_205(int iParam0, int iParam1)
{
	func_318(iParam0, iParam1);
}

int func_206(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_319(*uParam0, 0f, 0f, 0f))
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

int func_207(var uParam0)
{
	if (!func_320(uParam0, Local_18, 1, 0))
	{
		func_8(&iLocal_29, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
		{
			MISC::_0xE98D55C5983F2509(func_9(uParam0, iLocal_14));
		}
		bLocal_28 = false;
		return 0;
	}
	if (!bLocal_28)
	{
		MISC::_0x870708A6E147A9AD(func_9(uParam0, iLocal_14), "", 6f, 0, 0, 0, 0, 0, 0, -1);
		bLocal_28 = true;
	}
	iLocal_30 = 0;
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iLocal_30, 0, 0);
	if (iLocal_30 == 0)
	{
		func_8(&iLocal_29, 1, 1);
		return 0;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_30) != func_9(uParam0, iLocal_14))
	{
		func_8(&iLocal_29, 1, 1);
		return 0;
	}
	if (!func_48(iLocal_29))
	{
		iLocal_29 = func_321("INTERACT_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), func_9(uParam0, iLocal_14), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_322(iLocal_29, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(func_9(uParam0, iLocal_14)), 0, 1);
	}
	if (func_323(iLocal_29, 1))
	{
		return 1;
	}
	return 0;
}

int func_208(var uParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = uParam0->f_2263;
	fVar1 = uParam0->f_2264;
	if (func_24() == 3)
	{
		if (func_324(Global_35, 1))
		{
			fVar0 = 5f;
			fVar1 = 8f;
		}
	}
	if (func_325(uParam0, fVar0, fVar1))
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0, bool bParam1)
{
	if (!func_326(iParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	(Global_32073.f_4[iParam0 /*4*/])->f_3 = bParam1;
}

int func_210(int iParam0)
{
	if (!func_326(iParam0))
	{
		return -1;
	}
	return (Global_1327590->f_23[iParam0 /*17*/])->f_1;
}

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_152();
	func_31(&iVar0, 0, (Global_1327590->f_19622[iParam0 /*14*/])->f_11, 0, 0, 0, 0, 0);
	iVar1 = func_152();
	func_31(&iVar1, 0, (Global_1327590->f_19622[iParam0 /*14*/])->f_12, 0, 0, 0, 0, 0);
	iVar2 = (Global_1327590->f_19622[iParam0 /*14*/])->f_9;
	func_31(&iVar2, 0, (Global_1327590->f_19622[iParam0 /*14*/])->f_10, 0, 0, 0, 0, 0);
	if (func_327(iVar2, iVar0, 0))
	{
		if (func_327(iVar2, iVar1, 0))
		{
			(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = iVar1;
		}
		else
		{
			(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = iVar2;
		}
	}
	else
	{
		(Global_1327590->f_19622[iParam0 /*14*/])->f_9 = iVar0;
	}
	(Global_1327590->f_19622[iParam0 /*14*/])->f_10 = ((Global_1327590->f_19622[iParam0 /*14*/])->f_10 + (Global_1327590->f_19622[iParam0 /*14*/])->f_13);
}

void func_212()
{
	var uVar0;

	StringCopy(&(Global_1327590->f_19727), "", 32);
	Global_1327590->f_19727.f_4 = 0;
	Global_1327590->f_19727.f_5 = 0;
	Global_1327590->f_19727.f_6 = uVar0;
}

void func_213(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else if (!func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
		}
		else
		{
			if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_32 > -1)
			{
				if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_32 == 0)
				{
					if (func_153(uParam0) == 0)
					{
						(uParam0->f_107[iVar0 /*113*/])->f_32.f_32 = 5;
						if ((uParam0->f_107[iVar0 /*113*/])->f_1 == 10)
						{
							(uParam0->f_107[iVar0 /*113*/])->f_32.f_32 = 7;
						}
					}
					else if (func_153(uParam0) == 6)
					{
						if ((uParam0->f_107[iVar0 /*113*/])->f_1 != 24 && (uParam0->f_107[iVar0 /*113*/])->f_1 != 25)
						{
							(uParam0->f_107[iVar0 /*113*/])->f_32.f_32 = 6;
						}
					}
				}
				uVar1 = (uParam0->f_107[iVar0 /*113*/])->f_32.f_32;
				iVar2 = (uParam0->f_107[iVar0 /*113*/])->f_32.f_33;
				iVar3 = (uParam0->f_107[iVar0 /*113*/])->f_32.f_34;
				if (iVar2 == 0 && iVar3 == 0)
				{
					iVar2 = 0;
					iVar3 = 30;
				}
				func_328((uParam0->f_107[iVar0 /*113*/])->f_1, uVar1, iVar3, iVar2, 0, 0, 1);
			}
			fVar4 = (uParam0->f_107[iVar0 /*113*/])->f_32.f_35;
			if (fVar4 > 0f)
			{
				func_329((uParam0->f_107[iVar0 /*113*/])->f_1, fVar4);
				func_328((uParam0->f_107[iVar0 /*113*/])->f_1, 3, 0, 1, 0, 0, 1);
			}
		}
		iVar0++;
	}
}

void func_214(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2268))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			iVar1 = func_9(uParam0, iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar1, uParam0->f_2268, 0f);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2269))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_2269, true, true);
	}
}

int func_215(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			(Global_40.f_6563[iVar0 /*27*/])->f_24 = 2;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((Global_40.f_6563[iVar0 /*27*/])->f_24 != 0)
		{
		}
		else
		{
			func_330(Global_40.f_6563[iVar0 /*27*/], iParam0);
			func_331(iParam0);
			if (bParam2)
			{
				func_332(Global_40.f_6563[iVar0 /*27*/]);
				if (!func_333(172))
				{
					func_334(172, 0);
				}
				func_335(Global_40.f_6563[iVar0 /*27*/], 0);
			}
			func_336(iVar0, 1);
			func_337();
			func_339(func_338(-1631730211), 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_217(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (!func_341(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_342(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_343(bParam0, bParam2);
	iVar2 = 0;
	if (func_344(bParam0, 0, 0) == 0)
	{
		if (func_345(bParam0))
		{
			iVar5 = func_346(bParam0);
			iVar6 = func_347(iVar5);
			iVar7 = func_348(iVar6) + 1;
			func_349(iVar5);
			if (func_350(38))
			{
				func_334(483, 0);
			}
			else
			{
				func_334(482, 0);
			}
			if (iVar7 == func_351(iVar6))
			{
				func_217(func_352(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_353() && func_354(4))
				{
					if (func_353() && (func_355(38) || func_350(38)))
					{
						func_357(38, func_352(iVar6), 0, 0, func_356(), 0, -1, 0);
						func_358(2);
					}
					else
					{
						func_357(38, func_352(iVar6), 0, 0, func_356(), 0, -1, 0);
						func_358(1);
					}
				}
			}
			else if (func_353() && func_354(4))
			{
				if (func_353() && (func_355(38) || func_350(38)))
				{
					func_357(38, 0, 0, 0, func_356(), 0, -1, 0);
					func_358(2);
				}
				else
				{
					func_357(38, 0, 0, 0, func_356(), 0, -1, 0);
					func_358(1);
				}
			}
			if (func_353() && func_354(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_353() && (func_355(38) || func_350(38)))
					{
						func_359(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_359(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_360(bParam0) == joaat("clothing"))
	{
		if ((!func_361(bParam0, 866047851) && !func_361(bParam0, -1979000645)) && !func_361(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_362(bParam0, 8388608) && !func_363(28))
	{
		func_364(28);
	}
	if (!bVar3)
	{
		if (func_361(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_365(bParam0) == -1447088266)
			{
				bVar1 = func_367(func_366(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_242() == -1)
					{
						func_368(bVar1);
					}
					if (func_369(0) && func_370(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_371(bParam0, iVar0, iParam5);
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
					if (func_242() == -1)
					{
						func_368(bParam0);
					}
					if (func_369(0) && func_370(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_371(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_360(bParam0) == joaat("weapon"))
		{
			if (!func_372(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_360(bParam0) == joaat("ammo") && func_373(bParam0))
		{
			if (!func_374(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_361(bParam0, 866047851))
		{
			func_375(bParam0);
		}
		else if (func_361(bParam0, 2000026003))
		{
			func_376(bParam0);
		}
		else if (func_361(bParam0, -103750053))
		{
			func_339(func_338(-1019857971), iVar0);
		}
		else if (bParam0 == 2093098109)
		{
			func_339(func_377(-717883113, 2091222383), iVar0);
		}
		else if (func_361(bParam0, -121341956) && !func_361(bParam0, 606799272))
		{
			if (bParam0 != 191707516 && bParam0 != 1993672959)
			{
				if (func_378(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_334(498, 0);
				}
			}
			if (func_361(bParam0, -2017733358) || func_361(bParam0, -1369131378))
			{
				func_379(bParam0);
			}
		}
		else if (func_361(bParam0, -136654233))
		{
			if (func_361(bParam0, -1021472396))
			{
			}
		}
		else if (func_361(bParam0, -1466706512) && func_361(bParam0, 1147021565))
		{
			func_334(484, 0);
		}
		else if (func_361(bParam0, 1147021565) && func_361(bParam0, -524514947))
		{
		}
		else if (func_361(bParam0, 554195525))
		{
		}
		else if (func_361(bParam0, 589988438))
		{
			if (func_380())
			{
				func_381(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_361(bParam0, 787083290) && func_361(bParam0, 949916894))
		{
			func_382(bParam0);
		}
		else if (func_361(bParam0, -1718133314))
		{
			func_383(bParam0);
		}
		else if (func_361(bParam0, -1738650224))
		{
			func_384(bParam0);
		}
		else if (func_361(bParam0, -1112814642) && func_361(bParam0, 949916894))
		{
			func_385(bParam0);
		}
		else if (bParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_361(bParam0, 1841149704))
		{
			func_386();
		}
		else if (func_361(bParam0, 606799272))
		{
			func_387(bParam0, iParam1);
			func_388(bParam0);
		}
		else if (func_361(bParam0, -1112814642) && func_361(bParam0, -1697809989))
		{
			func_389(bParam0, 0, 0, 0);
		}
		else if (func_361(bParam0, -2017733358) || func_361(bParam0, -1369131378))
		{
			func_379(bParam0);
		}
		else if (func_361(bParam0, -1921346699))
		{
			if (func_242() != -1)
			{
				return 0;
			}
			func_390(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_361(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_391(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_217(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_391(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_217(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_391(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_217(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_391(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_217(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_391(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_217(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_391(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_217(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_361(bParam0, -839724752) && func_362(bParam0, 4))
		{
			if (!func_350(42))
			{
				func_392(bParam0);
			}
		}
		else if (func_361(bParam0, 1399091007))
		{
			func_393(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_361(bParam0, 1248798204))
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
				func_217(bVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_364(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_394(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_395(&bVar9, 0))
				{
					func_370(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_242() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_394(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_334(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_396();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_397();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_398();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_399();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_400();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_401(499813453, 854119837, 0);
				func_402(499813453, 0);
				func_403(1);
				break;
			case 2127812557:
				func_401(499813453, -1292544588, 0);
				func_402(499813453, 0);
				func_403(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_401(499813453, -1003325394, 0);
				func_402(499813453, 0);
				func_403(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_401(666607663, -335460405, 0);
				func_402(666607663, 0);
				func_404(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_401(666607663, 903797617, 0);
				func_402(666607663, 0);
				func_404(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_401(666607663, 669728650, 0);
				func_402(666607663, 0);
				func_404(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_401(-220219788, 1214120047, 0);
				func_402(-220219788, 0);
				func_405(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_401(-220219788, 655769340, 0);
				func_402(-220219788, 0);
				func_405(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_401(-220219788, 885316185, 0);
				func_402(-220219788, 0);
				func_405(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_401(218622660, -1491419385, 0);
				func_402(218622660, 0);
				func_406(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_401(218622660, 1809565830, 0);
				func_402(218622660, 0);
				func_406(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_401(390004462, -628873767, 0);
				func_402(390004462, 0);
				func_407(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_401(390004462, -405421956, 0);
				func_402(390004462, 0);
				func_407(2);
				break;
			case 2142623221:
				func_401(390004462, -1108972386, 0);
				func_402(390004462, 0);
				func_407(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_401(6410548, 1053716392, 0);
				func_402(6410548, 0);
				func_408(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_401(6410548, 806507056, 0);
				func_402(6410548, 0);
				func_408(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_401(6410548, 1571925350, 0);
				func_402(6410548, 0);
				func_408(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_401(6410548, 1330352282, 0);
				func_402(6410548, 0);
				func_408(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_410(242, func_409(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_410(240, func_409(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_410(241, func_409(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_411(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_411(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_411(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_411(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_411(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_411(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_334(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_334(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_334(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_217(func_412(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_217(func_413(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_363(1))
				{
					func_334(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_334(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_242() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_334(496, 0);
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
		func_414(&bVar10);
		if (!func_415(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_369(0))
		{
			return 1;
		}
		if (func_360(bParam0) == joaat("clothing"))
		{
			func_416(bParam0);
		}
		if (func_361(bParam0, -1979000645))
		{
			func_417(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_369(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_217(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_418(iVar2, 0);
		}
	}
	Var35 = { func_419(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_420(bParam0);
	if (fParam6 > 0f)
	{
		if (func_361(bParam0, -839724752))
		{
			func_421(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_422(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_218(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return 0;
	}
	iVar0 = &uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	if (func_423(uParam0, iParam1, 1f))
	{
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(iVar0))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_424(0);
	Global_1935689->f_6 = 1;
}

void func_220()
{
	PED::_0xCB9401F918CB0F75(Global_35, "GRAYOUT_ITEM_USE", 1, 1);
	PED::_0xCB9401F918CB0F75(Global_35, "GRAYOUT_ITEM_DROP", 1, 1);
	PED::_0xCB9401F918CB0F75(Global_35, "BLOCK_STEW_DROP_PROMPT", 1, 1);
	PED::_0xCB9401F918CB0F75(Global_35, "BLOCK_STEW_EAT_PROMPT", 1, 1);
}

int func_221(int iParam0)
{
	switch (func_242())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

void func_222(var uParam0)
{
	int iVar0;
	float fVar1;

	if (!uParam0->f_2270 || !uParam0->f_2274)
	{
		return;
	}
	iVar0 = func_9(uParam0, uParam0->f_2271);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
	{
		fVar1 = (uParam0->f_2272 * uParam0->f_2272);
	}
	else
	{
		fVar1 = (uParam0->f_2273 * uParam0->f_2273);
	}
	if (uParam0->f_2275)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < fVar1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			ANIMSCENE::FADE_ANIM_SCENE_AUDIO_IN(uParam0->f_2046, 10f);
			if (func_117())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35, 0);
			}
			uParam0->f_2275 = 0;
		}
	}
	else if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > fVar1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(uParam0->f_2046, 10f);
		if (func_117())
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35);
		}
		else
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35);
		}
		uParam0->f_2275 = 1;
	}
}

int func_223(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_63)
		{
		}
		else if ((uParam0->f_107[iVar0 /*113*/])->f_32 && !(uParam0->f_107[iVar0 /*113*/])->f_32.f_48)
		{
		}
		else
		{
			if (!(uParam0->f_107[iVar0 /*113*/])->f_32)
			{
				if (func_425(uParam0, iVar0))
				{
					if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_48)
					{
						func_106((uParam0->f_107[iVar0 /*113*/])->f_1, 1, 1, 0);
						func_426(uParam0, iVar0, 0, 1);
					}
					else
					{
						func_426(uParam0, iVar0, 1, 1);
					}
					(uParam0->f_107[iVar0 /*113*/])->f_32 = 1;
				}
			}
			if ((uParam0->f_107[iVar0 /*113*/])->f_32 && (uParam0->f_107[iVar0 /*113*/])->f_32.f_48)
			{
				if (func_427(uParam0, iVar0))
				{
					func_426(uParam0, iVar0, 1, 0);
					(uParam0->f_107[iVar0 /*113*/])->f_32.f_48 = 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_224(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (((uParam0->f_107[iVar0 /*113*/])->f_32.f_60 > 0f && !(uParam0->f_107[iVar0 /*113*/])->f_32.f_62) && func_423(uParam0, (uParam0->f_107[iVar0 /*113*/])->f_32.f_61, (uParam0->f_107[iVar0 /*113*/])->f_32.f_60))
		{
			func_57(uParam0, iVar0, 0);
			func_106((uParam0->f_107[iVar0 /*113*/])->f_1, 1, 1, 0);
		}
		iVar0++;
	}
}

int func_225(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_54((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
		}
		else if (func_58((uParam0->f_107[iVar0 /*113*/])->f_1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_226(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_428(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_422(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_391(bParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_419(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_344(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_344(bParam0, 0, 0) - iParam1) < 0)
		{
			func_226(bParam0, func_344(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_360(bParam0) == joaat("weapon"))
	{
		if (!func_429(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_430(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (bParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_369(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_422(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_431(bParam0, iParam1);
	return 1;
}

bool func_227(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_228(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_229(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_230(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_432(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_231(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_433(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_109(iParam0);
	if (!PED::_IS_PED_CARRYING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_233(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_434(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_234(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

bool func_235(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_236(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

bool func_237(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_238(var uParam0)
{
	return func_237(*uParam0, 2);
}

float func_239()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_242()
{
	return Global_1572887->f_12;
}

void func_243(var uParam0)
{
	func_116(uParam0, 0f);
}

bool func_244(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_245(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_246(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_247(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_294(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

int func_248(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_249(int iParam0)
{
	if (func_54(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_248(iParam0)))
		{
			func_435(iParam0, 67108864, 1);
			func_107(iParam0, 19, 1);
		}
	}
}

float func_250(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_248(iParam0);
	iVar1 = func_126(iParam0, 0);
	func_436(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_252(int iParam0)
{
	int iVar0;

	iVar0 = func_139(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

void func_253(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return;
	}
	if (!func_61(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

void func_254(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

bool func_255()
{
	return &Global_1327590;
}

bool func_256(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_257(int iParam0)
{
	return Global_1327590->f_19684 == iParam0;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (func_259(33554432))
			{
				return 0;
			}
			if ((Global_1395601->f_4 && Global_1395601->f_4 ^ 256) != 0)
			{
				return 0;
			}
			if (func_221(4))
			{
				return 0;
			}
			if (func_437(2, 1))
			{
				return 0;
			}
			if (func_438())
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_259(int iParam0)
{
	switch (func_242())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

bool func_260(int iParam0)
{
	return &Global_1899515 > iParam0;
}

bool func_261()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

int func_262(int iParam0, bool bParam1, bool bParam2)
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
		if (func_439())
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
		iVar0 = func_440(&(Global_1898164->f_1[0 /*5*/]));
		if (func_441(iVar0) && func_442(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_443(&(Global_1898164->f_1[0 /*5*/])))
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

int func_263(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_140 && iParam1) != 0)
	{
		return 1;
	}
	if ((((*Global_1360165)[iParam0 /*1157*/])->f_141 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = func_444(iParam0);
	fVar1 = func_445(iParam0);
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (fVar1 > fVar0)
	{
		if (IntToFloat(iVar2) >= fVar0 && IntToFloat(iVar2) < fVar1)
		{
			return 1;
		}
	}
	else if (IntToFloat(iVar2) >= fVar0 || IntToFloat(iVar2) < fVar1)
	{
		return 1;
	}
	return 0;
}

int func_266(var uParam0)
{
	float fVar0;

	if (uParam0->f_14)
	{
		return 0;
	}
	if (!func_113(&(uParam0->f_10)))
	{
		return 0;
	}
	if (uParam0->f_13 < 0)
	{
		return 0;
	}
	if (func_34(uParam0) == 4)
	{
		if (func_446() != 0)
		{
			func_447(&(uParam0->f_10));
		}
		else
		{
			func_448(&(uParam0->f_10));
		}
	}
	fVar0 = func_114(&(uParam0->f_10));
	if (fVar0 > IntToFloat(uParam0->f_13))
	{
		return 1;
	}
	return 0;
}

int func_267()
{
	if (Global_1935689->f_10165 & 128 != 0)
	{
		return 1;
	}
	if (func_449(-625309660, 1))
	{
		return 1;
	}
	return 0;
}

int func_268()
{
	if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
	{
		return 1;
	}
	if (func_449(-218211995, 1))
	{
		return 1;
	}
	return 0;
}

int func_269(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_9(uParam0, iVar1)))
		{
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(func_9(uParam0, iVar1)))
		{
			iVar0 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

Vector3 func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2351.282f, 1362.077f, 104.9752f;
		case 1:
			return 2349.223f, 1361.247f, 104.9467f;
		case 2:
			return 2379.521f, 1348.617f, 105.1838f;
		case 3:
			return 2379.518f, 1348.727f, 105.3143f;
		case 10:
			return 2354.249f, 1370.797f, 105.13f;
		case 4:
			return 2360.46f, 1372.098f, 105.3216f;
		case 5:
			return 2361.062f, 1375.625f, 105.6f;
		case 6:
			return 2360.392f, 1376.124f, 105.3041f;
		case 7:
			return 2369.36f, 1342.757f, 105.2225f;
		case 8:
			return 2342.205f, 1350.963f, 105.36f;
		case 9:
			return 2343.207f, 1350.193f, 105.0427f;
		case 11:
			return 2354.913f, 1342.611f, 104.5543f;
		case 12:
			return 2354.479f, 1347.575f, 104.8036f;
		case 13:
			return 2352.957f, 1346.719f, 104.7566f;
		case 14:
			return 2366.306f, 1347.905f, 105.1304f;
		case 15:
			return 2362.18f, 1352.813f, 105.0625f;
		case 16:
			return 2368.728f, 1350.747f, 105.1249f;
		case 17:
			return 2360.894f, 1377.363f, 106.5266f;
		case 18:
			return 2371.477f, 1356.217f, 105.0569f;
		case 19:
			return 2344.804f, 1367.986f, 105.3134f;
		case 20:
			return 2353.949f, 1371.797f, 105.127f;
		case 21:
			return 2354.013f, 1371.781f, 105.074f;
		case 22:
			return 2337.284f, 1346.015f, 105.179f;
		case 23:
			return 2337.322f, 1346.053f, 105.1803f;
		case 103:
			return -1339.08f, 2397.047f, 306.0378f;
		case 104:
			return -1317.874f, 2439.626f, 308.5981f;
		case 105:
			return -1352.902f, 2440.497f, 307.4951f;
		case 106:
			return -1349.317f, 2442.231f, 307.3924f;
		case 107:
			return -1316.698f, 2435.933f, 308.5595f;
		case 108:
			return -1322.826f, 2441.704f, 308.6064f;
		case 109:
			return -1344.278f, 2405.877f, 306.088f;
		case 49:
			return 690.7682f, -1253.57f, 43.5496f;
		case 50:
			return 652.4066f, -1244.674f, 42.6699f;
		case 51:
			return 653.353f, -1257.616f, 42.6902f;
		case 52:
			return 663.204f, -1266.61f, 42.867f;
		case 53:
			return 670.1622f, -1239.483f, 43.1877f;
		case 54:
			return 683.0387f, -1245.425f, 43.0148f;
		case 55:
			return 684.351f, -1243.633f, 42.9849f;
		case 56:
			return 684.4819f, -1246.863f, 42.9927f;
		case 57:
			return 685.0302f, -1245.902f, 42.9912f;
		case 58:
			return 672.8356f, -1237.325f, 43.134f;
		case 59:
			return 650.8051f, -1251.009f, 42.7005f;
		case 60:
			return 672.4047f, -1259.892f, 42.9838f;
		case 61:
			return 672.4271f, -1259.96f, 43.1188f;
		case 62:
			return 655.894f, -1234.782f, 43.1259f;
		case 63:
			return 654.1125f, -1251.155f, 42.8f;
		case 64:
			return 651.2626f, -1251.937f, 42.6974f;
		case 65:
			return 650.6795f, -1252.114f, 43.1362f;
		case 66:
			return 653.0919f, -1252.156f, 42.8372f;
		case 67:
			return 653.4479f, -1252.911f, 42.599f;
		case 68:
			return 690.4313f, -1259.154f, 43.7104f;
		case 70:
			return 663.0867f, -1231.747f, 43.2655f;
		case 71:
			return 657.1655f, -1243.321f, 42.8214f;
		case 72:
			return 659.59f, -1257.613f, 43.245f;
		case 73:
			return 660.603f, -1253.43f, 42.7f;
		case 74:
			return 659.5897f, -1257.613f, 43.1646f;
		case 75:
			return 660.8477f, -1257.421f, 42.5046f;
		case 79:
			return 678.9159f, -1265.703f, 43.1879f;
		case 77:
			return 674.4503f, -1265.393f, 42.9755f;
		case 78:
			return 674.8731f, -1267.135f, 42.9843f;
		case 76:
			return 675.0228f, -1270.61f, 42.9601f;
		case 80:
			return 679.2578f, -1248.381f, 42.9808f;
		case 82:
			return 681.4078f, -1254.114f, 43.0104f;
		case 83:
			return 679.5405f, -1253.201f, 43.005f;
		case 81:
			return 676.2629f, -1251.483f, 43.0118f;
		case 84:
			return 652.429f, -1253.768f, 43.8068f;
		case 85:
			return 663.2041f, -1266.61f, 42.8666f;
		case 86:
			return 664.6318f, -1266.261f, 42.8638f;
		case 87:
			return 661.7732f, -1267.029f, 42.865f;
		case 89:
			return 665.5107f, -1243.862f, 43.1096f;
		case 90:
			return 664.7734f, -1244.574f, 43.1442f;
		case 92:
			return 666.624f, -1244.745f, 43.1513f;
		case 94:
			return 665.811f, -1243.962f, 43.1096f;
		case 88:
			return 658.7715f, -1230.395f, 43.1212f;
		case 95:
			return 667.0524f, -1274.733f, 43.1042f;
		case 96:
			return 652.5594f, -1256.802f, 42.731f;
		case 97:
			return 683.7f, -1267.15f, 43.44f;
		case 98:
			return 688.7827f, -1247.475f, 43.17f;
		case 99:
			return 654.5885f, -1231.947f, 43.0909f;
		case 100:
			return 682.0446f, -1250.296f, 43.0812f;
		case 101:
			return 682.3f, -1250.1f, 43.2f;
		case 102:
			return 681.875f, -1250.375f, 42.975f;
		case 110:
			return -148.9178f, -14.2616f, 95.3191f;
		case 111:
			return -150.5614f, -16.7691f, 95.2844f;
		case 112:
			return -149.3513f, -15.9276f, 95.314f;
		case 113:
			return -125.0833f, -39.8813f, 94.5479f;
		case 114:
			return -134.5811f, -34.3785f, 95.0469f;
		case 116:
			return -123.8592f, -25.8471f, 94.9403f;
		case 117:
			return -139.9031f, -41.3454f, 94.5271f;
		case 118:
			return -141.9657f, -42.1655f, 94.55f;
		case 119:
			return -140.3628f, -39.3589f, 94.5064f;
		case 120:
			return -141.3333f, -39.8796f, 94.5036f;
		case 121:
			return -142.1689f, -44.2803f, 94.5344f;
		case 122:
			return -132.1766f, -27.8991f, 95.1097f;
		case 123:
			return -133.2737f, -18.5626f, 95.1372f;
		case 124:
			return -133.2647f, -18.4593f, 95.2667f;
		case 125:
			return -148.3239f, -26.4223f, 95.0867f;
		case 126:
			return -129.6888f, -30.2391f, 95.184f;
		case 127:
			return -132.3694f, -28.9374f, 95.0871f;
		case 128:
			return -131.1368f, -30.3165f, 95.1679f;
		case 129:
			return -131.1368f, -30.3165f, 95.048f;
		case 130:
			return -131.3613f, -31.1211f, 94.9242f;
		case 131:
			return -117.945f, -17.21f, 95.035f;
		case 132:
			return -116.5877f, -17.9793f, 94.9923f;
		case 134:
			return -107.1891f, -32.681f, 94.979f;
		case 135:
			return -118.2587f, -37.0856f, 94.8027f;
		case 136:
			return -122.145f, -35.0285f, 94.7612f;
		case 137:
			return -118.2644f, -37.0851f, 95.1889f;
		case 138:
			return -117.631f, -36.1001f, 94.5263f;
		case 139:
			return -120f, -40f, 94.5796f;
		case 140:
			return -138.0953f, -12.0076f, 95.3359f;
		case 146:
			return -110.7765f, -36.8139f, 94.9131f;
		case 144:
			return -112.7059f, -40.8189f, 94.7282f;
		case 145:
			return -110.9286f, -41.0484f, 94.7314f;
		case 141:
			return -109.1067f, -37.2171f, 94.701f;
		case 142:
			return -107.6834f, -42.1638f, 94.6885f;
		case 143:
			return -107.733f, -42.169f, 94.652f;
		case 147:
			return -144.4145f, -19.2364f, 95.0744f;
		case 149:
			return -138.4368f, -17.9037f, 95.0856f;
		case 150:
			return -137.0642f, -20.7528f, 95.087f;
		case 148:
			return -141.7537f, -22.6105f, 95.0878f;
		case 151:
			return -132.6974f, -31.0975f, 96.1266f;
		case 152:
			return -165.216f, -34.132f, 94.1461f;
		case 153:
			return -172.0029f, -25.0604f, 95.099f;
		case 154:
			return -138.7686f, -27.4923f, 95.0878f;
		case 155:
			return -139.3531f, -28.864f, 95.0872f;
		case 156:
			return -85f, -40f, 95.908f;
		case 157:
			return -75f, -40f, 96.05f;
		case 158:
			return -85.6f, -12.6f, 95.55f;
		case 159:
			return -89.4735f, -34.0326f, 95.5727f;
		case 160:
			return -141.1667f, -43.1414f, 95.5075f;
		case 161:
			return -96.3596f, -47.1111f, 94.4287f;
		case 162:
			return -118.0872f, -27.6725f, 94.7697f;
		case 163:
			return -117.0986f, -27.9306f, 94.7973f;
		case 165:
			return -118.4542f, -29.0077f, 94.7992f;
		case 167:
			return -127.236f, -6.6741f, 95.1161f;
		case 169:
			return -88.6625f, -5.193f, 94.1046f;
		case 170:
			return -122.2236f, -8.5306f, 95.1336f;
		case 171:
			return -122.2236f, -8.5306f, 95.1336f;
		case 172:
			return -143.8062f, -56.5505f, 93.6929f;
		case 168:
			return -134.5851f, -33.4737f, 95.0571f;
		case 173:
			return -120.48f, -13.59f, 95.174f;
		case 174:
			return -139.6016f, -19.6172f, 95.0788f;
		case 175:
			return -151.097f, -25.003f, 95.037f;
		case 176:
			return -142.1275f, -16.7126f, 95.0843f;
		case 177:
			return -111.2999f, -37.7f, 94.8994f;
		case 178:
			return 2230.607f, -768.9569f, 42.4874f;
		case 179:
			return 1897.947f, -1867.111f, 46.2557f;
		case 181:
			return 1878.266f, -1824.908f, 42.0577f;
		case 182:
			return 1903.976f, -1862.017f, 46.3581f;
		case 183:
			return 1870.953f, -1874.527f, 41.8405f;
		case 184:
			return 1872.956f, -1872.378f, 41.8184f;
		case 185:
			return 1872.729f, -1871.582f, 41.8031f;
		case 186:
			return 1866.117f, -1858.068f, 42.0334f;
		case 187:
			return 1863.898f, -1858.133f, 42.0048f;
		case 188:
			return 1861.93f, -1862.238f, 42.0131f;
		case 189:
			return 1865.275f, -1856.201f, 42.0099f;
		case 190:
			return 1877.057f, -1869.943f, 41.8052f;
		case 191:
			return 1889.777f, -1879.549f, 41.8147f;
		case 192:
			return 1906.5f, -1818.295f, 38.6799f;
		case 193:
			return 1897.558f, -1858.596f, 46.341f;
		case 194:
			return 1897.12f, -1860.05f, 46.341f;
		case 195:
			return 1891.641f, -1870.441f, 42.1457f;
		case 196:
			return 1895.595f, -1859.388f, 46.2972f;
		case 197:
			return 1881.51f, -1849.799f, 42.4553f;
		case 198:
			return 1882.52f, -1834.448f, 42.9333f;
		case 199:
			return 1876.192f, -1883.639f, 41.7296f;
		case 202:
			return 1882.255f, -1883.146f, 41.8057f;
		case 200:
			return 1879.259f, -1879.515f, 41.8005f;
		case 201:
			return 1878.292f, -1881.024f, 41.8093f;
		case 203:
			return 1898.422f, -1859.928f, 42.1456f;
		case 204:
			return 1903.948f, -1854.875f, 41.0543f;
		case 205:
			return 1895.606f, -1871.699f, 42.1294f;
		case 206:
			return 1891.924f, -1864.679f, 42.1401f;
		case 207:
			return 1878.855f, -1856.19f, 41.7939f;
		case 208:
			return 1875.995f, -1859.396f, 41.8185f;
		case 209:
			return 1881.206f, -1861.845f, 41.8164f;
		case 210:
			return 1879.314f, -1860.996f, 41.8015f;
		case 211:
			return 1888.849f, -1866.193f, 47.1326f;
		case 212:
			return 1892.637f, -1855.759f, 42.1324f;
		case 213:
			return 1871.706f, -1863.183f, 41.8185f;
		case 214:
			return 1873.123f, -1863.577f, 41.8022f;
		case 216:
			return 1881.415f, -1875.467f, 41.824f;
		case 217:
			return 1870.253f, -1862.845f, 41.8179f;
		case 218:
			return 1973.86f, -1868.714f, 41.7978f;
		case 220:
			return 1881.7f, -1874.126f, 41.7769f;
		case 221:
			return 1882.689f, -1874.384f, 41.8045f;
		case 223:
			return 1881.415f, -1875.467f, 41.834f;
		case 224:
			return 1881.8f, -1873.626f, 41.797f;
		case 219:
			return 1886.526f, -1883.668f, 41.8101f;
		case 225:
			return 1869.947f, -1885.672f, 41.6695f;
		case 226:
			return 1859.65f, -1895.84f, 40.5f;
		case 227:
			return 1890.835f, -1882.48f, 41.7655f;
		case 228:
			return 1881.733f, -1858.001f, 41.8096f;
		case 24:
			return -1661.819f, -1336.845f, 83.0075f;
		case 25:
			return -1639.374f, -1354.644f, 82.9775f;
		case 26:
			return -1604.69f, -1408.436f, 80.9404f;
		case 27:
			return -1550.021f, -1457.386f, 92.8075f;
		case 28:
			return -1638.959f, -1361.78f, 83.3962f;
		case 29:
			return -1643.839f, -1359.537f, 83.3962f;
		case 30:
			return -1587.194f, -1407.788f, 80.698f;
		case 31:
			return -1640.616f, -1360.573f, 85.8884f;
		case 32:
			return -1643.254f, -1369.558f, 83.4323f;
		case 34:
			return -1607.022f, -1417.066f, 80.9345f;
		case 33:
			return -1674.691f, -1344.548f, 83.2438f;
		case 35:
			return -1649.057f, -1373.304f, 86.166f;
		case 36:
			return -1608.222f, -1414.939f, 80.9437f;
		case 37:
			return -1598.507f, -1415.938f, 80.8841f;
		case 38:
			return -1595.798f, -1412.841f, 80.936f;
		case 39:
			return -1599.63f, -1418.125f, 80.9514f;
		case 40:
			return -1605.622f, -1412.575f, 80.994f;
		case 41:
			return -1599.027f, -1408.308f, 80.936f;
		case 42:
			return -1598.673f, -1411.331f, 80.9016f;
		case 43:
			return -1634.721f, -1360.413f, 83.3955f;
		case 44:
			return -1581.597f, -1406.162f, 80.3383f;
		case 45:
			return -1598.86f, -1407.787f, 80.9358f;
		case 46:
			return -1603.663f, -1417.489f, 80.8918f;
		case 47:
			return -1603.441f, -1418.861f, 80.8732f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, -100.7f;
		case 1:
			return 0f, 0f, 114.06f;
		case 2:
			return 0f, 0f, -111.67f;
		case 3:
			return 0f, 0f, -24.11f;
		case 10:
			return 0f, 0f, -161.79f;
		case 4:
			return 0f, 0f, -75.73f;
		case 5:
			return 0f, 0f, -26.12f;
		case 6:
			return 0f, 0f, -26.16f;
		case 7:
			return 0f, 0f, -46.13f;
		case 8:
			return 0f, 0f, 119.85f;
		case 9:
			return 0f, 0f, 119.65f;
		case 11:
			return -1.499f, 4.26f, -135.56f;
		case 12:
			return 0f, 0f, -125.96f;
		case 13:
			return 0f, 0f, 163.12f;
		case 14:
			return 0f, 0f, 65.04f;
		case 15:
			return 0f, 0f, 13.83f;
		case 16:
			return 0f, 0f, 59.28f;
		case 18:
			return 0f, 0f, 0f;
		case 19:
			return 0f, 0f, 0f;
		case 20:
			return 0f, 0f, -161.79f;
		case 21:
			return 0f, 0f, -160.79f;
		case 22:
			return 0f, 0f, -55.99f;
		case 23:
			return 0f, 0f, 34.42f;
		case 103:
			return 0f, 0f, 155f;
		case 104:
			return 0f, 0f, -26.33f;
		case 105:
			return 0f, 0f, 0f;
		case 106:
			return 0f, 0f, -20.65f;
		case 107:
			return 0f, 0f, 153.58f;
		case 108:
			return 0f, 0f, 153.41f;
		case 109:
			return 0f, 0f, 160f;
		case 49:
			return 0f, 0f, -16.89f;
		case 50:
			return 0f, 0f, -125.64f;
		case 51:
			return 0f, 0f, 71.49f;
		case 52:
			return 0f, 0f, -50.603f;
		case 53:
			return 0f, 0f, -16.32f;
		case 54:
			return 0f, 0f, 111.15f;
		case 55:
			return 0f, 0f, -34.16f;
		case 56:
			return 0f, 0f, -144.4f;
		case 57:
			return 0f, 0f, -108.91f;
		case 58:
			return 0f, 0f, -149.02f;
		case 59:
			return 0f, 0f, -143.88f;
		case 60:
			return 0f, 0f, 134.03f;
		case 61:
			return 0f, 0f, -140.8f;
		case 62:
			return 0f, 0f, 33.3f;
		case 63:
			return 0f, 0f, 125.87f;
		case 64:
			return 0f, 0f, -146.38f;
		case 65:
			return 0f, 0f, -40.85f;
		case 66:
			return 0f, 0f, 125.86f;
		case 67:
			return 0f, 0f, 125f;
		case 68:
			return 0f, 0f, -128.67f;
		case 70:
			return 0f, 0f, -15.11f;
		case 71:
			return 0f, 0f, -34.34f;
		case 72:
			return 0f, 0f, 0f;
		case 73:
			return 0f, 0f, -51f;
		case 74:
			return 0f, 0f, -13.02f;
		case 75:
			return 0f, 0f, 165.73f;
		case 79:
			return 0f, 0f, -67.9f;
		case 77:
			return 0f, 0f, -55.95f;
		case 78:
			return 0f, 0f, -134.78f;
		case 76:
			return 0f, 0f, -89.21f;
		case 80:
			return 0f, 0f, -81.13f;
		case 82:
			return 0f, 0f, 70.61f;
		case 83:
			return 0f, 0f, -19.23f;
		case 81:
			return 0f, 0f, -11.26f;
		case 84:
			return 0f, 0f, 125.86f;
		case 85:
			return 0f, 0f, -50.6f;
		case 86:
			return 0f, 0f, -74.94f;
		case 87:
			return 0f, 0f, 106.88f;
		case 89:
			return 0f, 0f, 134.74f;
		case 90:
			return 0f, 0f, 134.43f;
		case 92:
			return 0f, 0f, -138.4f;
		case 94:
			return 0f, 0f, -60.12f;
		case 88:
			return 0f, 0f, -35.88f;
		case 95:
			return 0f, 0f, 1.32f;
		case 96:
			return 0f, 0f, -123.43f;
		case 97:
			return 0f, 0f, 180f;
		case 98:
			return 0f, 0f, -75f;
		case 99:
			return 0f, 0f, 129f;
		case 100:
			return 0f, 0f, 80.79f;
		case 101:
			return 0f, 0f, 70f;
		case 102:
			return 0f, 0f, 84.4f;
		case 110:
			return 0f, 0f, 30.47f;
		case 111:
			return 0f, 0f, 101.58f;
		case 112:
			return 0f, 0f, 79.21f;
		case 113:
			return 0f, 0f, -10.92f;
		case 114:
			return 0f, 0f, 30.63f;
		case 116:
			return 0f, 0f, 75.28f;
		case 117:
			return 0f, 0f, -100.97f;
		case 118:
			return 0f, 0f, 113.79f;
		case 119:
			return 0f, 0f, 3.55f;
		case 120:
			return 0f, 0f, 39.04f;
		case 121:
			return 0f, 0f, 139.07f;
		case 122:
			return 0f, 0f, 178.61f;
		case 123:
			return 0f, 0f, -75.02f;
		case 124:
			return 0f, 0f, 9.63f;
		case 125:
			return 0f, 0f, 71.32f;
		case 126:
			return 0f, 0f, 85f;
		case 127:
			return 0f, 0f, 173.23f;
		case 128:
			return 0f, 0f, 84.96f;
		case 129:
			return 0f, 0f, 84.96f;
		case 130:
			return 0f, 0f, 85f;
		case 131:
			return 0.174f, 3.834f, 0.107f;
		case 132:
			return 0f, 0f, -105.84f;
		case 134:
			return 0f, 0f, -12.98f;
		case 135:
			return 0f, 0f, -121.39f;
		case 136:
			return 0f, 0f, 25.63f;
		case 137:
			return 0f, 0f, 59.67f;
		case 138:
			return 0f, 0f, -121.59f;
		case 139:
			return 0f, 0f, 0f;
		case 140:
			return 0f, 0f, 0f;
		case 146:
			return 0f, 0f, 0f;
		case 144:
			return 0f, 0f, 13.05f;
		case 145:
			return 0f, 0f, -65.78f;
		case 141:
			return 0f, 0f, -4f;
		case 142:
			return 0f, 0f, -22.68f;
		case 143:
			return -0.541f, 1.972f, -23.429f;
		case 147:
			return 0f, 0f, 0.99f;
		case 149:
			return 0f, 0f, 152.86f;
		case 150:
			return 0f, 0f, -90.36f;
		case 148:
			return 0f, 0f, 70.67f;
		case 151:
			return 0f, 0f, 84.96f;
		case 152:
			return 0f, 0f, -51.94f;
		case 153:
			return 0f, 0f, 0f;
		case 154:
			return 0f, 0f, 0f;
		case 155:
			return 0f, 0f, 157.49f;
		case 156:
			return 0f, 0f, -104f;
		case 157:
			return 0f, 0f, -104f;
		case 158:
			return 0f, 0f, -50f;
		case 159:
			return 0f, 0f, 69.12f;
		case 160:
			return 0f, 0f, -37.3f;
		case 161:
			return 0f, 0f, -71.02f;
		case 162:
			return 0f, 0f, -103.99f;
		case 163:
			return 0f, 0f, -104.12f;
		case 165:
			return 0f, 0f, 164.57f;
		case 167:
			return 0f, 0f, 38.63f;
		case 169:
			return 0f, 0f, -134.42f;
		case 170:
			return 0f, 0f, 0f;
		case 171:
			return 0f, 0f, 0f;
		case 172:
			return 0f, 0f, 0f;
		case 168:
			return 0f, 0f, -164.4f;
		case 173:
			return 0f, 0f, 0f;
		case 174:
			return 0f, 0f, 62.89f;
		case 175:
			return 0f, 0f, 166.69f;
		case 176:
			return 0.67f, -1.78f, 162.66f;
		case 177:
			return 0f, 0f, -2.22f;
		case 178:
			return 0f, 0f, 180f;
		case 179:
			return 0f, 0f, -130.17f;
		case 181:
			return 0f, 0f, 93.33f;
		case 182:
			return 0f, 0f, -39.99f;
		case 183:
			return 0f, 0f, 50.99f;
		case 184:
			return 0f, 0f, 177.92f;
		case 185:
			return 0f, 0f, -176.32f;
		case 186:
			return 0f, 0f, -120.97f;
		case 187:
			return 0f, 0f, 93.79f;
		case 188:
			return 0f, 0f, -56.45f;
		case 189:
			return 0f, 0f, 19.04f;
		case 190:
			return 0f, 0f, 165.1f;
		case 191:
			return 0f, 0f, -151.73f;
		case 192:
			return 0f, 0f, 0f;
		case 193:
			return 0f, 0f, 158.13f;
		case 194:
			return 0f, 0f, -50f;
		case 195:
			return 0f, 0f, -31.88f;
		case 196:
			return 0f, 0f, -85f;
		case 197:
			return 0f, 0f, -60f;
		case 198:
			return 0f, 0f, 176.19f;
		case 199:
			return 0f, 0f, -135.47f;
		case 202:
			return 0f, 0f, -115.29f;
		case 200:
			return 0f, 0f, -102.25f;
		case 201:
			return 0f, 0f, 178.92f;
		case 203:
			return 0f, 0f, -124.94f;
		case 204:
			return 0f, 0f, 156.43f;
		case 205:
			return 0f, 0f, 163.55f;
		case 206:
			return 0f, 0f, -29.7f;
		case 207:
			return 0f, 0f, -79.03f;
		case 208:
			return 0f, 0f, -9.33f;
		case 209:
			return 0f, 0f, 72.86f;
		case 210:
			return 0f, 0f, -17.13f;
		case 211:
			return 0f, 0f, 158.515f;
		case 212:
			return 0f, 0f, -85f;
		case 213:
			return 0f, 0f, -80f;
		case 214:
			return 0f, 0f, -104.21f;
		case 216:
			return 0f, 0f, 173.75f;
		case 217:
			return 0f, 0f, 77.49f;
		case 218:
			return 0f, 0f, 180f;
		case 220:
			return 0f, 0f, -103.99f;
		case 221:
			return 0f, 0f, -104.12f;
		case 223:
			return 0f, 0f, 69.12f;
		case 224:
			return 0f, 0f, 54f;
		case 219:
			return 0f, 0f, 139.09f;
		case 225:
			return 0f, 0f, 0f;
		case 226:
			return 0f, 0f, -150.12f;
		case 227:
			return 0f, 0f, -56.37f;
		case 228:
			return 0f, 0f, 82.86f;
		case 24:
			return 0f, 0f, 42.8f;
		case 25:
			return 0f, 0f, -61.86f;
		case 26:
			return 0f, 0f, -115.05f;
		case 27:
			return 0f, 0f, 0f;
		case 28:
			return 0f, 0f, 148.74f;
		case 29:
			return 0f, 0f, 60f;
		case 30:
			return 0f, 0f, 46.5f;
		case 31:
			return 0f, 0f, 0f;
		case 32:
			return 0f, 0f, -42.05f;
		case 34:
			return 0f, 0f, -26.98f;
		case 33:
			return 0f, 0f, 75.43f;
		case 35:
			return 0f, 0f, 0f;
		case 36:
			return 0f, 0f, -115f;
		case 37:
			return 0f, 0f, 6.33f;
		case 38:
			return 0f, 0f, 155f;
		case 39:
			return 0f, 0f, 0f;
		case 40:
			return 0f, 0f, 165f;
		case 41:
			return 0f, 0f, 155f;
		case 42:
			return 0f, 0f, 69f;
		case 43:
			return 0f, 0f, -165.29f;
		case 44:
			return 0f, 0f, 180f;
		case 45:
			return 0f, 0f, 155f;
		case 46:
			return 0f, 0f, -24.82f;
		case 47:
			return 0f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BILL";
		case 7:
			return "CHARLES";
		case 0:
			return "DUTCH";
		case 5:
			return "HOSEA";
		case 14:
			return "JACK";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 9:
			return "LENNY";
		case 6:
			return "MICAH";
		case 10:
			return "KIERAN";
		case 17:
			return "PEARSON";
		case 8:
			return "SEAN";
		case 18:
			return "STRAUSS";
		case 21:
			return "SWANSON";
		case 23:
			return "JOSIAH";
		case 4:
			return "UNCLE";
		case 13:
			return "ABIGAIL";
		case 20:
			return "KAREN";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 11:
			return "SADIE";
		case 19:
			return "SUSAN";
		case 22:
			return "TILLY";
		case 12:
			return "CAIN";
		default:
			break;
	}
	return "INVALID ENUM";
}

Vector3 func_273(var uParam0, vector3 vParam1)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_23, uParam0->f_26.f_2, vParam1);
}

float func_274(var uParam0, float fParam1)
{
	float fVar0;

	fVar0 = (fParam1 + uParam0->f_26.f_2);
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

void func_275(var uParam0, int iParam1, float fParam2)
{
	if (fParam2 == -2f)
	{
		fParam2 = func_450(1101004800 /* Float: 20f */, 1123024896 /* Float: 120f */);
	}
	else if (fParam2 < 0f)
	{
		fParam2 = -1f;
	}
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_4 = fParam2;
}

void func_276(var uParam0)
{
	func_451(*uParam0);
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_22 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	StringCopy(&(uParam0->f_6), "", 24);
	StringCopy(&(uParam0->f_9), "", 24);
	uParam0->f_25 = 0;
	uParam0->f_21 = 0;
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_277(int iParam0)
{
	Global_1359489->f_361.f_3[iParam0] = -1;
	Global_1359489->f_361.f_15[iParam0] = 0;
	Global_1359489->f_361.f_59 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(&(Global_1359489->f_361.f_84[iParam0])))
	{
		OBJECT::DELETE_OBJECT(Global_1359489->f_361.f_84[iParam0]);
	}
	if (func_452() == 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1359489->f_361.f_72))
		{
			MAP::REMOVE_BLIP(&(Global_1359489->f_361.f_72));
		}
	}
	if (&Global_40.f_6563[iParam0 /*27*/] == 9 || &Global_40.f_6563[iParam0 /*27*/] == 11)
	{
		func_453();
	}
	func_8(Global_1359489->f_361.f_61[iParam0], 1, 1);
}

void func_278(int iParam0)
{
	func_122((Global_40.f_6563[iParam0 /*27*/])->f_3, 512, 0);
	func_122((Global_40.f_6563[iParam0 /*27*/])->f_3, 1024, 0);
}

void func_279()
{
	int iVar0;

	iVar0 = (Global_1359489->f_361.f_1 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	Global_1359489->f_361.f_1 = (Global_1359489->f_361.f_1 - 1);
}

int func_280(var uParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(uParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(uParam0) };
	uVar6 = func_454(vVar0, vVar3.x, iParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return uVar6;
}

void func_281(var uParam0, int iParam1, float fParam2)
{
	(uParam0->f_107[iParam1 /*113*/])->f_100 = fParam2;
}

int func_282(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_58((uParam0->f_107[iVar1 /*113*/])->f_1))
		{
		}
		else
		{
			if (func_54((uParam0->f_107[iVar1 /*113*/])->f_7))
			{
				if (func_55((uParam0->f_107[iVar1 /*113*/])->f_7) && !ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar1 /*113*/])->f_5))
				{
				}
				else
				{
					(uParam0->f_107[iVar1 /*113*/])->f_5 = func_455((uParam0->f_107[iVar1 /*113*/])->f_7, 1, 1, 0, 0, 1, 1, (uParam0->f_107[iVar1 /*113*/])->f_6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					return 0;
					if ((uParam0->f_107[iVar1 /*113*/])->f_102 || (uParam0->f_107[iVar1 /*113*/])->f_103)
					{
						if (!func_54((uParam0->f_107[iVar1 /*113*/])->f_1))
						{
							if ((uParam0->f_107[iVar1 /*113*/])->f_103)
							{
								(uParam0->f_107[iVar1 /*113*/])->f_1 = func_456(uParam0, 1, 1);
							}
							else
							{
								(uParam0->f_107[iVar1 /*113*/])->f_1 = func_456(uParam0, 1, 0);
							}
						}
						if (!func_54((uParam0->f_107[iVar1 /*113*/])->f_1))
						{
							if ((uParam0->f_107[iVar1 /*113*/])->f_103)
							{
								Jump @330; //curOff = 280
							}
							else
							{
								return 0;
							}
						}
					}
					if (!func_457(uParam0, iVar1, (uParam0->f_107[iVar1 /*113*/])->f_1))
					{
						if (!uParam0->f_21)
						{
							return 0;
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				iVar1++;
				return iVar0;
			}
		}
	}

void func_283(var uParam0, int iParam1)
{
	(Global_1327590->f_19547[*uParam0 /*5*/])->f_3 = iParam1;
}

int func_284(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		iVar1 = (uParam0->f_107[iVar0 /*113*/])->f_2;
		if (!func_61(iVar1))
		{
		}
		else if (func_62(iVar1))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(func_458(iVar1)))
			{
				func_459(iVar1, 1);
				return 0;
			}
			(uParam0->f_107[iVar0 /*113*/])->f_5 = func_460(iVar1, 0, 0, 1, 1, 1);
			if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iVar0 /*113*/])->f_5))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_285(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (!STREAMING::IS_MODEL_VALID((uParam0->f_107[iVar0 /*113*/])->f_3))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED((uParam0->f_107[iVar0 /*113*/])->f_3))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(&(uParam0->f_1711[iVar0 /*15*/])))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_1711[iVar0 /*15*/])))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(&(uParam0->f_1967[iVar0 /*4*/])))
		{
		}
		else if (!WEAPON::_0xFF07CF465F48B830(&(uParam0->f_1967[iVar0 /*4*/])))
		{
			return 0;
		}
		iVar0++;
	}
	if (uParam0->f_1976.f_5)
	{
		if (!PROPSET::_HAS_PROPSET_LOADED_2(uParam0->f_1976))
		{
			PROPSET::_REQUEST_PROPSET_2(uParam0->f_1976);
			return 0;
		}
	}
	return 1;
}

int func_286(var uParam0)
{
	if (!HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_2232)))
	{
		return 1;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_2232)))
	{
		return 0;
	}
	return 1;
}

int func_287(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/])->f_32.f_2 != 0)
		{
			if (!STREAMING::_0x9427C94D2E4094A4((uParam0->f_107[iVar0 /*113*/])->f_32.f_2, 0))
			{
				return 0;
			}
		}
		if ((uParam0->f_107[iVar0 /*113*/])->f_8.f_1 != 0)
		{
			if (!STREAMING::_0x9427C94D2E4094A4((uParam0->f_107[iVar0 /*113*/])->f_8.f_1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_288(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(uParam0->f_2236[iVar0 /*8*/]))
		{
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_2236[iVar0 /*8*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_289(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1984)
	{
		if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_1984[iVar1])))
		{
		}
		else if (ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_1984[iVar1]), 1, 0))
		{
		}
		else
		{
			iVar0 = 0;
			if (ANIMSCENE::_0x59606519FF9D3EC2(&(uParam0->f_1984[iVar1]), 1))
			{
			}
			else if (!ANIMSCENE::_0x95531A4A20CCE7BC(&(uParam0->f_1984[iVar1]), 0))
			{
				func_51(uParam0, "Metadata not loaded", 20, -1);
			}
			else if (ANIMSCENE::_0x9E036D5204FFBBC8(&(uParam0->f_1984[iVar1]), 0) > 2)
			{
				func_51(uParam0, "Audio load stress is too high", 20, -1);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_1984[iVar1]));
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_290(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;
	int iVar8;

	iVar0 = 1;
	iVar8 = 0;
	while (iVar8 < uParam0->f_2051)
	{
		iVar1 = &uParam0->f_2051[iVar8 /*6*/];
		if (iVar1 < 0)
		{
		}
		else
		{
			Var2 = { (uParam0->f_2051[iVar8 /*6*/])->f_1 };
			bVar7 = (uParam0->f_2051[iVar8 /*6*/])->f_5;
			iVar6 = &uParam0->f_1984[iVar1];
			if (!bVar7)
			{
			}
			else if (!ANIMSCENE::_0x25557E324489393C(iVar6))
			{
			}
			else
			{
				if (!ANIMSCENE::_0x477122B8D05E7968(iVar6, 1, 0))
				{
					return 0;
				}
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iVar6, &Var2))
				{
				}
				else
				{
					iVar0 = 0;
					if (ANIMSCENE::_0x0DF57F86FE71DBE5(iVar6, &Var2))
					{
					}
					else if (ANIMSCENE::_0x9E036D5204FFBBC8(iVar6, &Var2) > 2)
					{
						func_51(uParam0, "Audio load stress is too high", 20, -1);
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iVar6, &Var2);
					}
				}
			}
		}
		iVar8++;
	}
	return iVar0;
}

int func_291(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(&(uParam0->f_1711[iVar1 /*15*/])))
		{
		}
		else if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_1711[iVar1 /*15*/])->f_10))
		{
		}
		else if ((uParam0->f_1711[iVar1 /*15*/])->f_5)
		{
			iVar0 = 0;
			if ((uParam0->f_1711[iVar1 /*15*/])->f_8)
			{
				vVar2 = { func_273(uParam0, (uParam0->f_1711[iVar1 /*15*/])->f_1) };
			}
			else
			{
				vVar2 = { (uParam0->f_1711[iVar1 /*15*/])->f_1 };
			}
			if ((uParam0->f_1711[iVar1 /*15*/])->f_9 == 0)
			{
				(uParam0->f_1711[iVar1 /*15*/])->f_9 = ENTITY::_0x6F3068258A499E52(&(uParam0->f_1711[iVar1 /*15*/]), vVar2, 15);
			}
			if ((uParam0->f_1711[iVar1 /*15*/])->f_9 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709((uParam0->f_1711[iVar1 /*15*/])->f_9))
				{
					iVar0 = ENTITY::_0x4735E2A4BB83D9DA((uParam0->f_1711[iVar1 /*15*/])->f_9);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				(uParam0->f_1711[iVar1 /*15*/])->f_10 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
			if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_1711[iVar1 /*15*/])->f_10))
			{
			}
			else
			{
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
				return 0;
			}
		}
		iVar1++;
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
	{
		if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			return 0;
		}
	}
	return 1;
}

int func_292(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar0 /*113*/])->f_5))
		{
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_107[iVar0 /*113*/])->f_32.f_23)))
		{
			PED::_0x5C3C55EAAD19915F((uParam0->f_107[iVar0 /*113*/])->f_5, &((uParam0->f_107[iVar0 /*113*/])->f_32.f_23));
		}
		iVar0++;
	}
	return 1;
}

int func_293(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return 0;
	}
	iVar0 = &uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iVar0, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
	{
		return 0;
	}
	return 1;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

int func_295(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

void func_296(var uParam0, bool bParam1, bool bParam2)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return;
	}
	TASK::_0x5AF19B6CC2115D34(*uParam0, 23, 1);
	TASK::_0x5AF19B6CC2115D34(*uParam0, 25, 1);
	if (bParam1)
	{
		TASK::_0x5AF19B6CC2115D34(*uParam0, 51, 1);
	}
	if (bParam2)
	{
		TASK::_0x5AF19B6CC2115D34(*uParam0, 60, 1);
	}
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case -2087487524:
			return 3;
		case 463023307:
			return 7;
		case 2017216891:
			return 0;
		case 1267380940:
			return 5;
		case -1749490051:
			return 14;
		case -1495061186:
			return 1;
		case 271759394:
			return 2;
		case -676766751:
			return 9;
		case 1632043240:
			return 6;
		case 211687389:
			return 10;
		case -1386303207:
			return 17;
		case 1418411488:
			return 8;
		case 1383943725:
			return 18;
		case 1243438920:
			return 21;
		case 1833688716:
			return 23;
		case 1877049591:
			return 4;
		case -2055224817:
			return 13;
		case -695792551:
			return 20;
		case -1377448058:
			return 15;
		case -727195357:
			return 16;
		case -1525321670:
			return 11;
		case -1689743484:
			return 19;
		case -950285770:
			return 22;
		case 640922451:
			return 12;
		default:
			break;
	}
	return -1;
}

int func_298(int iParam0)
{
	iParam0 = func_461(iParam0);
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

void func_299(var uParam0, int iParam1)
{
	if (!(uParam0->f_107[iParam1 /*113*/])->f_8.f_20)
	{
		if (func_114(&((uParam0->f_107[iParam1 /*113*/])->f_8.f_17)) >= (uParam0->f_107[iParam1 /*113*/])->f_8.f_15)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iParam1 /*113*/])->f_8.f_23))
			{
				if (!PED::_0x9C54041BB66BCF9E((uParam0->f_107[iParam1 /*113*/])->f_5, (uParam0->f_107[iParam1 /*113*/])->f_8.f_23))
				{
					TASK::_TASK_USE_SCENARIO_POINT((uParam0->f_107[iParam1 /*113*/])->f_5, (uParam0->f_107[iParam1 /*113*/])->f_8.f_23, (uParam0->f_107[iParam1 /*113*/])->f_8.f_2, 0, 1, false, (uParam0->f_107[iParam1 /*113*/])->f_8.f_1, (uParam0->f_107[iParam1 /*113*/])->f_8.f_16, -1082130432, 0);
					func_130(&((uParam0->f_107[iParam1 /*113*/])->f_8.f_17));
					(uParam0->f_107[iParam1 /*113*/])->f_8.f_20 = 1;
				}
			}
		}
	}
	else if (!func_462((uParam0->f_107[iParam1 /*113*/])->f_5, -76381094))
	{
		(uParam0->f_107[iParam1 /*113*/])->f_8.f_14 = 0;
	}
}

int func_300(var uParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = (uParam0->f_2256 * uParam0->f_2256);
	fVar1 = (uParam0->f_2252 * uParam0->f_2252);
	fVar2 = (uParam0->f_2253 * uParam0->f_2253);
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED((uParam0->f_107[iParam1 /*113*/])->f_3, vParam2, true))
	{
		if (!func_113(&((uParam0->f_107[iParam1 /*113*/])->f_109)))
		{
			func_116(&((uParam0->f_107[iParam1 /*113*/])->f_109), 0f);
		}
	}
	else
	{
		func_130(&((uParam0->f_107[iParam1 /*113*/])->f_109));
	}
	fVar3 = BUILTIN::VDIST2(Global_36, vParam2);
	if (fVar3 > fVar0)
	{
		return 1;
	}
	if (fVar3 < fVar1)
	{
		func_51(uParam0, "Create - Player is too close to the start location", 200, iParam1);
		return 0;
	}
	if (fVar3 > fVar2)
	{
		fVar4 = uParam0->f_2255;
	}
	else
	{
		fVar4 = func_463(fVar3, fVar1, fVar2, uParam0->f_2254, uParam0->f_2255);
	}
	if (func_114(&((uParam0->f_107[iParam1 /*113*/])->f_109)) < fVar4)
	{
		func_51(uParam0, "Create - Start location is on screen or has been on screen recently", 200, iParam1);
		return 0;
	}
	return 1;
}

int func_301(var uParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	fVar0 = (uParam0->f_2261 * uParam0->f_2261);
	fVar1 = (uParam0->f_2257 * uParam0->f_2257);
	fVar2 = (uParam0->f_2258 * uParam0->f_2258);
	if (ENTITY::IS_ENTITY_OCCLUDED((uParam0->f_107[iParam1 /*113*/])->f_5))
	{
		if (!func_113(&((uParam0->f_107[iParam1 /*113*/])->f_106)))
		{
			func_116(&((uParam0->f_107[iParam1 /*113*/])->f_106), 0f);
		}
	}
	else
	{
		func_130(&((uParam0->f_107[iParam1 /*113*/])->f_106));
	}
	fVar3 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iParam1 /*113*/])->f_5, true, false));
	if (fVar3 > fVar0)
	{
		return 1;
	}
	if (fVar3 < fVar1)
	{
		func_51(uParam0, "Create - Player is too close to ped", 200, iParam1);
		return 0;
	}
	if (fVar3 > fVar2)
	{
		fVar4 = uParam0->f_2260;
	}
	else
	{
		fVar4 = func_463(fVar3, fVar1, fVar2, uParam0->f_2259, uParam0->f_2260);
	}
	if (func_153(uParam0) == 3 || func_153(uParam0) == 8)
	{
		iVar5 = func_312(ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iParam1 /*113*/])->f_5, true, false));
		iVar6 = func_312((uParam0->f_107[iParam1 /*113*/])->f_96);
		if (iVar5 != iVar6)
		{
			func_51(uParam0, "Create - Halving the virtual speed because of indoors/outdoors warping", 200, iParam1);
			fVar4 = (fVar4 / 2f);
		}
	}
	fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iParam1 /*113*/])->f_5, true, false), vParam2);
	fVar8 = (func_114(&((uParam0->f_107[iParam1 /*113*/])->f_106)) * fVar4);
	fVar9 = (fVar8 * fVar8);
	if (fVar9 < fVar7)
	{
		func_51(uParam0, "Create - Ped is on screen or has been on screen recently", 200, iParam1);
		return 0;
	}
	return 1;
}

int func_302(var uParam0, int iParam1)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iParam1 /*113*/])->f_8.f_23))
	{
		return 0;
	}
	func_188(uParam0, iParam1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY((uParam0->f_107[iParam1 /*113*/])->f_5, 0, 1);
	TASK::_TASK_USE_SCENARIO_POINT((uParam0->f_107[iParam1 /*113*/])->f_5, (uParam0->f_107[iParam1 /*113*/])->f_8.f_23, (uParam0->f_107[iParam1 /*113*/])->f_8.f_2, 0, 0, true, 0, 0, -1082130432, 0);
	PED::_0x2208438012482A1A((uParam0->f_107[iParam1 /*113*/])->f_5, false, false);
	return 1;
}

int func_303(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		bVar1 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(bVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(bVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, bVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_304(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

int func_305(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_464(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_306()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

void func_307(int iParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iParam1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, sParam2, iParam0, 0);
}

void func_308(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
	}
}

void func_309(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(&(uParam0->f_67[iParam1])))
	{
		VOLUME::_0xBE551C2CC421185D(&(uParam0->f_67[iParam1]), iParam2);
		VOLUME::_0x5B23DFF8E0948BB2(&(uParam0->f_67[iParam1]), iParam2);
	}
}

void func_310(int iParam0, int iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iParam1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(iParam1, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, sParam2, iParam0, 0);
}

int func_311(int iParam0, struct<8> Param1, int iParam9)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return 0;
	}
	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar0 = func_294(iParam0);
	if (iVar0 != 0 && func_465(iParam0))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_39 = { Param1 };
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &Param1);
		func_59(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_30();
			func_31(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			(Global_40.f_4942[iParam0 /*60*/])->f_46 = iVar1;
			(Global_40.f_4942[iParam0 /*60*/])->f_49 = 4;
		}
		else
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_46 = -15;
			(Global_40.f_4942[iParam0 /*60*/])->f_49 = 0;
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		return 1;
	}
	return 0;
}

int func_312(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_313(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 30);
}

int func_314(int iParam0)
{
	if (Global_1327590->f_19744 == -1)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		if (func_22(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_315(int iParam0)
{
	Global_1327590->f_19744 = iParam0;
}

int func_316(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return 0;
	}
	iVar0 = &uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_317(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return 0;
	}
	iVar0 = &uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
	return 1;
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

bool func_319(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_320(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, bool bParam12)
{
	if (bParam11)
	{
		if (!func_466(func_21(uParam0), 1))
		{
			return 0;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Param1, true) > Param1.f_9)
	{
		return 0;
	}
	if (!func_467(Param1, Param1.f_6, Global_36))
	{
		return 0;
	}
	if (func_467(Param1, Param1.f_3, Global_36))
	{
		return 0;
	}
	if (bParam12)
	{
		if (MISC::ABSF((Param1.f_2 - Global_36.f_2)) > 2f)
		{
			return 0;
		}
	}
	return 1;
}

int func_321(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_227(iVar0, 2))
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
				func_468(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_322(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_48(iParam0))
	{
		return;
	}
	iVar0 = func_49(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_323(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_48(iParam0))
	{
		return false;
	}
	iVar0 = func_49(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_324(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_469(iVar0) || func_470(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_325(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iVar1 /*113*/])->f_5))
		{
		}
		else
		{
			fVar0 = func_471(Global_35, (uParam0->f_107[iVar1 /*113*/])->f_5, 1, 1);
			if (fVar0 > fParam2)
			{
			}
			else
			{
				if (fVar0 < fParam1)
				{
					return 1;
				}
				if (!ENTITY::IS_ENTITY_OCCLUDED((uParam0->f_107[iVar1 /*113*/])->f_5))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_326(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

bool func_327(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_472(iParam1) || !func_472(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = func_30();
	if (bVar0)
	{
		func_31(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!func_472(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1152 = iParam1;
			((*Global_1360165)[iParam0 /*1157*/])->f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		(Global_40.f_4942[iParam0 /*60*/])->f_42 = iParam1;
		(Global_40.f_4942[iParam0 /*60*/])->f_43 = iVar1;
	}
	else
	{
		(Global_40.f_4942[iParam0 /*60*/])->f_44 = iParam1;
		if (bParam5)
		{
			(Global_40.f_4942[iParam0 /*60*/])->f_42 = -1;
			(Global_40.f_4942[iParam0 /*60*/])->f_43 = -15;
		}
	}
}

void func_329(int iParam0, float fParam1)
{
	int iVar0;

	if (!func_54(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(iVar0, 1, fParam1);
}

void func_330(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	StringCopy(&(uParam0->f_12), "script@vignette@ITM@Handover@item_handover", 64);
	switch (iParam1)
	{
		case 1:
			uParam0->f_1 = 1613651027; /* GXTEntry: "Hair Pomade" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 3;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMBILLA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMBILLA2", 24);
			uParam0->f_22 = func_473(-1780177928 /* GXTEntry: "Revolver Cartridges - High Velocity" */);
			uParam0->f_23 = -1574283183;
			break;
		case 3:
			uParam0->f_1 = 299161628; /* GXTEntry: "Moonshine" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_CHAMOONR1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_CHAMOONR2", 24);
			uParam0->f_22 = -1759362478;
			uParam0->f_23 = -1460756997;
			break;
		case 2:
			uParam0->f_1 = -2048623764; /* GXTEntry: "Eagle Feather" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CABCH_ITMCHRA1", 24);
			uParam0->f_22 = func_473(1627068364 /* GXTEntry: "Horse Reviver" */);
			break;
		case 4:
			uParam0->f_1 = -2051332199; /* GXTEntry: "Oleander Sage" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMCHRB1", 24);
			uParam0->f_22 = -2063399157;
			uParam0->f_23 = -2002658258;
			break;
		case 5:
			uParam0->f_1 = -497602986; /* GXTEntry: "Pipe" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 0;
			uParam0->f_4 = 0;
			uParam0->f_5 = 3;
			uParam0->f_20 = 495;
			StringCopy(&(uParam0->f_12), "", 64);
			break;
		case 6:
			uParam0->f_1 = -793862732; /* GXTEntry: "The Case of the Shrew in the Fog" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMHOSA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMHOSA2", 24);
			uParam0->f_22 = func_473(-1635450397 /* GXTEntry: "Predator Bait" */);
			uParam0->f_23 = -1482853672;
			break;
		case 7:
			uParam0->f_1 = 1433048902; /* GXTEntry: "Ginseng" */
			uParam0->f_2 = 2;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMHOSA1", 24);
			StringCopy(&(uParam0->f_9), "CALCM_ITMHOSA2", 24);
			uParam0->f_22 = func_473(-755485480 /* GXTEntry: "Potent Health Cure" */);
			uParam0->f_23 = -535255159;
			break;
		case 8:
			uParam0->f_1 = -1487662509; /* GXTEntry: "Otis Miller and The Black-Hearted Lady" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMJCKA2", 24);
			uParam0->f_22 = func_473(-951828978 /* GXTEntry: "Chocolate Bar" */);
			uParam0->f_23 = -1674175748;
			break;
		case 9:
			uParam0->f_1 = 1427759409; /* GXTEntry: "Thimble" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMJCKA1", 24);
			break;
		case 10:
			uParam0->f_1 = -2051332199; /* GXTEntry: "Oleander Sage" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 2;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_ITMJAVA1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_ITMJAVA2", 24);
			uParam0->f_22 = -1127655651;
			uParam0->f_23 = 2001398556;
			break;
		case 11:
			uParam0->f_1 = -398744080; /* GXTEntry: "Burdock Root" */
			uParam0->f_2 = 2;
			uParam0->f_3 = 10;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMKIEA1", 24);
			StringCopy(&(uParam0->f_9), "CALCM_ITMKIEA2", 24);
			uParam0->f_22 = func_473(-2076104686 /* GXTEntry: "Horse Stimulant" */);
			uParam0->f_23 = 1519213086;
			break;
		case 12:
			uParam0->f_1 = -963759116; /* GXTEntry: "Silver Pocket Watch" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 9;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMLENA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMLENA2", 24);
			uParam0->f_22 = 2007368749;
			break;
		case 13:
			uParam0->f_1 = 353848785; /* GXTEntry: "Fountain Pen" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 15;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_MB_ITEM", 24);
			uParam0->f_22 = func_473(1478239863 /* GXTEntry: "Gold Wedding Ring" */);
			break;
		case 14:
			uParam0->f_1 = -574122036; /* GXTEntry: "Pocket Mirror" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 16;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CALCM_ITMMOLA1", 24);
			uParam0->f_22 = func_473(338147422 /* GXTEntry: "Cigar" */);
			uParam0->f_23 = 167109702;
			break;
		case 15:
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 1;
			StringCopy(&(uParam0->f_6), "CAHSO_ITMPRSA1", 24);
			StringCopy(&(uParam0->f_9), "CAHSO_ITMPRSA2", 24);
			StringCopy(&(uParam0->f_12), "", 64);
			break;
		case 16:
			uParam0->f_1 = -735913145; /* GXTEntry: "Naval Compass" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMPRSA1", 24);
			uParam0->f_22 = func_473(1483206625 /* GXTEntry: "Guarma Rum" */);
			uParam0->f_23 = 671600831;
			break;
		case 17:
			uParam0->f_1 = 660636780; /* GXTEntry: "Harmonica" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 11;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMSADA1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMSADA2", 24);
			uParam0->f_22 = func_473(-898386032 /* GXTEntry: "Gun Oil" */);
			uParam0->f_23 = 309887362;
			break;
		case 18:
			uParam0->f_1 = 688258043; /* GXTEntry: "Kentucky Bourbon" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 8;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CAHSO_SEAN_ITM", 24);
			uParam0->f_22 = -1903398558;
			uParam0->f_23 = 1023107731;
			break;
		case 19:
			uParam0->f_1 = 546981776; /* GXTEntry: "Oregano" */
			uParam0->f_2 = 2;
			uParam0->f_3 = 19;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMSUS1", 24);
			StringCopy(&(uParam0->f_9), "CPGEN_ITMSUS2", 24);
			uParam0->f_22 = func_473(730856618 /* GXTEntry: "Potent Miracle Tonic" */);
			uParam0->f_23 = -1467557935;
			break;
		case 20:
			uParam0->f_1 = 844655121; /* GXTEntry: "Silver Locket Necklace" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 22;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CPGEN_ITMTLL", 24);
			uParam0->f_22 = func_473(230530039 /* GXTEntry: "Health Cure" */);
			uParam0->f_23 = -234712774;
			break;
		case 21:
			uParam0->f_1 = 128702355; /* GXTEntry: "Milkweed" */
			uParam0->f_2 = 1;
			uParam0->f_3 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			StringCopy(&(uParam0->f_6), "CABCH_ITMUNCA1", 24);
			StringCopy(&(uParam0->f_9), "CABCH_ITMUNCA2", 24);
			break;
	}
}

void func_331(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (func_344(1427759409 /* GXTEntry: "Thimble" */, 0, 0) < 1)
			{
				func_474();
				func_475(-2137341727, 0.68f);
				func_475(-1564940634, 0.68f);
				func_475(-1881226198, 0.68f);
			}
			break;
	}
}

void func_332(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_476(*uParam0);
	iVar1 = func_477(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(func_478(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(9, iVar0, func_479(func_24()), 1307979820, func_480(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(9, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(9, iVar0, iVar1, 404961913);
		if (*uParam0 == 21)
		{
			func_481(1, 688258043 /* GXTEntry: "Kentucky Bourbon" */, 0);
			func_481(2, -1477273558 /* GXTEntry: "Peppermint" */, 0);
			func_481(3, 128702355 /* GXTEntry: "Milkweed" */, 0);
			func_481(4, 1613651027 /* GXTEntry: "Hair Pomade" */, 0);
			func_481(5, 0, -998653403 /* GXTEntry: "Skunk" */);
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					func_482(uParam0, iVar3, &((Global_1359489->f_361.f_258[iVar3 /*6*/])->f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

bool func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_242() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_334(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_483(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_485(iVar0, iVar1);
}

void func_335(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	var uVar4;

	iVar0 = func_486(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &uVar4);
		sVar3 = func_487(&uVar4, joaat("COLOR_PURE_WHITE"));
		sVar2 = func_488(uParam0->f_3, 0);
		func_482(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, MISC::_CREATE_VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_482(uParam0, 1896170705 /* GXTEntry: "Find ~1~ some ~2~." */, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0), 0, bParam1, 0);
	}
}

void func_336(int iParam0, int iParam1)
{
	(Global_40.f_6563[iParam0 /*27*/])->f_24 = iParam1;
}

void func_337()
{
	int iVar0;

	iVar0 = Global_1359489->f_361.f_1 + 1;
	if (iVar0 > 10)
	{
		return;
	}
	Global_1359489->f_361.f_1++;
}

struct<2> func_338(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_339(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_340(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_341(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_242() == -1)
	{
		if (func_489(bParam0) && func_490(bParam0))
		{
			func_491(bParam0, iParam1, 1, &bParam2, iParam3);
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

int func_342(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_492(bParam0, iParam1);
	Var0 = { func_493(bParam0, 0, 1) };
	iVar5 = func_494(bParam0, &Var0, 0, 0);
	iVar6 = func_495(bParam0, 0);
	if ((iVar5 > 1 && !func_496()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_361(bParam0, -2051813666))
		{
			func_334(583, 1);
		}
		else
		{
			func_334(582, 0);
		}
	}
	if (func_497(bParam0, &Var0, *iParam1, 0, 0))
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

void func_343(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_498(bParam0, -949239683))
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

int func_344(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_360(bParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		bVar1 = func_428(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_499(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_500(bParam2), bParam0, 0);
	return iVar2;
}

bool func_345(bool bParam0)
{
	if (func_242() != -1)
	{
		return false;
	}
	return func_346(bParam0) != 0;
}

int func_346(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_501())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_502(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_347(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_501())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_347(iVar0))
		{
			if (func_391(func_502(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_349(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_503(48);
	func_504(0, -1);
}

int func_350(int iParam0)
{
	if (func_242() != -1)
	{
		return 0;
	}
	return func_378(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_351(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_352(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_353()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_354(int iParam0)
{
	if (func_242() != -1)
	{
		return 0;
	}
	return func_378(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_355(int iParam0)
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (!func_441(iParam0))
	{
		return 0;
	}
	return func_505(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_356()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_391(func_506(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_357(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_353() && (func_355(38) || func_350(38)))
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
			if (func_353() && (func_355(39) || func_350(39)))
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
			iVar9 = func_507(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_353() && (func_355(41) || func_350(41)))
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
			if (func_353() && (func_355(49) || func_350(49)))
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
			iVar9 = func_507(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_508(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_509(iParam0, iVar13, iVar14))
	{
	}
	if (func_510(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_511(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_512(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_513(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_514(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_358(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_353() && (func_355(38) || func_350(38)))
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
			if (func_353() && (func_355(39) || func_350(39)))
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
			if (func_353() && (func_355(49) || func_350(49)))
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
		if (func_353() && (func_355(38) || func_350(38)))
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
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_517(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_516(func_352(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_353() && (func_355(39) || func_350(39)))
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
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_353() && (func_355(49) || func_350(49)))
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
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_515(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_360(bool bParam0)
{
	vector3 vVar0;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_361(bool bParam0, int iParam1)
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

int func_362(bool bParam0, int iParam1)
{
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

int func_363(int iParam0)
{
	if (!func_518(iParam0))
	{
		return 0;
	}
	return func_519(iParam0);
}

void func_364(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	func_520(iParam0);
	func_521(iParam0);
}

int func_365(bool bParam0)
{
	struct<2> Var0;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_366(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			Jump @341; //curOff = 145
			bVar0 = joaat("weapon_thrown_throwing_knives");
			Jump @341; //curOff = 155
			bVar0 = joaat("weapon_thrown_throwing_knives");
			Jump @341; //curOff = 165
			bVar0 = joaat("weapon_thrown_dynamite");
			Jump @341; //curOff = 175
			bVar0 = joaat("weapon_thrown_dynamite");
			Jump @341; //curOff = 185
			bVar0 = joaat("weapon_thrown_molotov");
			Jump @341; //curOff = 195
			bVar0 = joaat("weapon_thrown_molotov");
			Jump @341; //curOff = 205
			bVar0 = joaat("weapon_thrown_tomahawk");
			Jump @341; //curOff = 215
			bVar0 = joaat("weapon_thrown_tomahawk_ancient");
			Jump @341; //curOff = 225
			bVar0 = joaat("weapon_thrown_tomahawk");
			Jump @341; //curOff = 235
			bVar0 = joaat("weapon_thrown_tomahawk");
			Jump @341; //curOff = 245
			bVar0 = joaat("weapon_melee_hatchet");
			Jump @341; //curOff = 255
			bVar0 = joaat("weapon_melee_hatchet_hunter");
			Jump @341; //curOff = 265
			bVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			Jump @341; //curOff = 275
			bVar0 = joaat("weapon_melee_ancient_hatchet");
			Jump @341; //curOff = 285
			bVar0 = joaat("weapon_melee_cleaver");
			Jump @341; //curOff = 295
			bVar0 = joaat("weapon_melee_hatchet_double_bit");
			Jump @341; //curOff = 305
			bVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			Jump @341; //curOff = 315
			bVar0 = joaat("weapon_melee_hatchet_hewing");
			Jump @341; //curOff = 325
			bVar0 = joaat("weapon_melee_hatchet_viking");
			if (func_340(bVar0, 0))
			{
				if (bParam1)
				{
					if (func_522(bVar0) || func_523(bVar0))
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

int func_367(bool bParam0, bool bParam1)
{
	if (!func_340(bParam0, 0))
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

void func_368(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_524(bParam0))
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

int func_369(bool bParam0)
{
	if (func_242() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_500(bParam0));
}

int func_370(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_493(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_525((375 + iVar28), 1);
			if (func_526(bParam0, &Var0, iVar5, 0))
			{
				if (func_527(bParam0, &Var6, iVar5))
				{
					Var29 = { func_528(bParam0, Var0, iVar5, 0) };
					func_529(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_369(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_371(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_530(bParam0, iParam1);
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

int func_371(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_373(bParam0))
	{
		return 0;
	}
	if (!func_369(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, iParam1, iParam2);
	return 1;
}

int func_372(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_367(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_242() == -1)
		{
			func_368(bVar0);
			if (iParam1 == 1248274121)
			{
				func_531(bVar0);
			}
		}
		if (!func_497(bParam0, &uVar1, 1, 0, 0))
		{
			func_491(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_532(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_370(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_370(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_370(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_306())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_533(bVar0))
				{
					func_370(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_370(bVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_534(Global_35, 2, 0, 1);
				if ((((func_524(bVar7) && !Global_43890) && bVar7 != bVar0) && !func_391(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				if (func_524(bVar7) && func_391(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_370(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_370(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_370(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_334(480, 1);
	}
	return 1;
}

bool func_373(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_374(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_373(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_524(bVar4))
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
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_391(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
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
		func_410(func_535(bParam0), func_409(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_242() == -1)
		{
			if (func_378(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_334(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_369(0))
	{
		if (func_371(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_415(bParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_375(bool bParam0)
{
	var uVar0;

	if ((bParam0 == -615217896 && !func_536()) || bParam0 != -615217896)
	{
		if (func_537(Global_35, bParam0, &uVar0))
		{
			func_394(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_400();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_400();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_400();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_398();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_396();
			break;
	}
}

void func_376(bool bParam0)
{
	switch (bParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_396();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_397();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_398();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_399();
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
			func_400();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_538();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_539();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_377(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_378(int iParam0, bool bParam1)
{
	switch (func_540(iParam0))
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

void func_379(bool bParam0)
{
	bool bVar0;

	bVar0 = func_361(bParam0, -2017733358);
	if (func_541() < 3)
	{
		if (bVar0)
		{
			if (func_543(func_542(bParam0), bParam0))
			{
				func_410(79, func_409(func_542(bParam0)), 1);
			}
			else
			{
				func_410(78, func_409(func_542(bParam0)), 1);
			}
		}
		else
		{
			func_410(80, func_409(func_544(bParam0)), 1);
		}
	}
}

int func_380()
{
	if (((((func_545(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_545(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_545(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_545(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_545(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_545(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_546(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_547(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_548(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_382(bool bParam0)
{
	switch (bParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_357(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_549(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_357(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_549(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_357(39, 0, 0, 0, 0, 0, 1, 0);
			func_359(39, 0, 0, 0, 0, -1, 0);
			func_550(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_357(41, 0, 0, 0, 0, 0, 1, 0);
			func_359(41, 0, 0, 0, 0, -1, 0);
			func_551(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_357(49, 0, 0, 0, 0, 0, 1, 0);
			func_359(49, 0, 0, 0, 0, -1, 0);
			func_552(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_357(43, 0, 0, -1791518714, func_553(1), 0, -1, 0);
			func_554(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_357(43, 0, 0, -2087881550, func_553(2), 0, -1, 0);
			func_554(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_357(43, 0, 0, 1908068621, func_553(4), 0, -1, 0);
			func_554(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_357(43, 0, 0, 1611247019, func_553(8), 0, -1, 0);
			func_554(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_357(43, 0, 0, 1319635688, func_553(16), 0, -1, 0);
			func_554(16);
			break;
	}
}

void func_383(bool bParam0)
{
	if (func_555() == 1)
	{
		if (func_350(39))
		{
			func_334(342, 0);
		}
		else
		{
			func_334(343, 0);
			func_550(1);
		}
	}
	if (func_555() >= 30)
	{
		func_334(344, 0);
	}
	func_357(39, 0, 0, 0, 0, 0, -1, 0);
	func_359(39, 0, 0, func_555(), 30, 1, 0);
}

void func_384(bool bParam0)
{
	if (func_556() == 1)
	{
		if (func_350(49))
		{
			func_334(409, 0);
		}
		else
		{
			func_334(410, 0);
			func_552(1);
		}
	}
	if (func_556() >= 10)
	{
		func_334(411, 0);
	}
	func_357(49, 0, 0, 0, 0, 0, -1, 0);
	func_359(49, 0, 0, func_556(), 10, 1, 0);
}

void func_385(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_334(437, 0);
			func_334(440, 0);
			func_557(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_357(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_507(-949689219, 20), 1, 0);
			func_549(1);
			func_558(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_557(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_357(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_507(-1248968496, 20), 1, 0);
			func_549(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_557(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_357(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_507(1706369307, 20), 1, 0);
			func_549(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_557(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_357(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_507(1520110311, 20), 1, 0);
			func_549(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_334(438, 0);
			func_557(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_357(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_359(51, 0, 0, sVar0, func_507(-1992824800, 20), 1, 0);
			func_549(32768);
			break;
		default:
			func_334(439, 0);
			break;
	}
}

void func_386()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_387(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_242() == -1)
	{
		if (!func_350(43))
		{
			if (bParam0 == 281887510)
			{
				func_334(348, 0);
			}
			else if (bParam0 == -164081697)
			{
				func_334(350, 0);
			}
			else if (bParam0 == -1161319399)
			{
				func_334(352, 0);
			}
			else if (bParam0 == 728781265)
			{
				func_334(400, 0);
			}
		}
		else if (func_361(bParam0, 412399755))
		{
			func_559(-1791518714);
			if (func_560() == 0)
			{
				func_504(0, 10);
				iVar1 = func_561(bParam0, iParam1, 1);
				if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
				{
					if (func_562(bParam0) < func_563(bParam0))
					{
						func_357(43, bParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_350(44))
		{
			if (bParam0 == -222563712)
			{
				func_334(354, 0);
			}
			else if (bParam0 == 1794857344)
			{
				func_334(399, 0);
			}
			else if (bParam0 == 1952409553)
			{
				func_334(401, 0);
			}
		}
		else if (func_361(bParam0, 709057512))
		{
			func_559(-2087881550);
			if (func_560() == 1)
			{
				func_504(0, 10);
				iVar1 = func_561(bParam0, iParam1, 2);
				if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
				{
					if (func_562(bParam0) < func_563(bParam0))
					{
						func_357(43, bParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_350(45))
		{
			if (bParam0 == 2116770557)
			{
				func_334(359, 0);
			}
			else if (bParam0 == -651064726)
			{
				func_334(394, 0);
			}
			else if (bParam0 == -404270094)
			{
				func_334(395, 0);
			}
			else if (bParam0 == 2093126853)
			{
				func_334(398, 0);
			}
		}
		else if (func_361(bParam0, -1478961327))
		{
			func_559(1908068621);
			if (func_560() == 2)
			{
				func_504(0, 10);
				iVar1 = func_561(bParam0, iParam1, 4);
				if (bParam0 == 2116770557)
				{
					if (!func_564(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_565(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_503(48);
					}
					if (func_562(bParam0) < func_563(bParam0))
					{
						func_357(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == -651064726 || bParam0 == -404270094) || bParam0 == 2093126853)
				{
					if (func_562(bParam0) < func_563(bParam0))
					{
						func_357(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_350(46))
		{
			if (bParam0 == 2085530337)
			{
				func_334(356, 0);
			}
			else if (bParam0 == -150591160)
			{
				func_334(402, 0);
			}
			else if (bParam0 == -323969289)
			{
				func_334(404, 0);
			}
			else if (bParam0 == 1504361882)
			{
				func_334(406, 0);
			}
		}
		else if (func_361(bParam0, -1238404098))
		{
			func_559(1611247019);
			if (func_560() == 3)
			{
				func_504(0, 10);
				iVar1 = func_561(bParam0, iParam1, 8);
				if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
				{
					if (func_562(bParam0) < func_563(bParam0))
					{
						func_357(43, bParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_350(47))
		{
			if (bParam0 == -1521783510)
			{
				func_334(396, 0);
			}
			else if (bParam0 == 1714875242)
			{
				func_334(397, 0);
			}
			else if (bParam0 == 927763737)
			{
				func_334(405, 0);
			}
			else if (bParam0 == 1019229063)
			{
				func_334(403, 0);
			}
		}
		else if (func_361(bParam0, 1160548794))
		{
			func_559(1319635688);
			if (func_560() == 4)
			{
				func_504(0, 10);
				iVar1 = func_561(bParam0, iParam1, 16);
				if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
				{
					if (func_562(bParam0) < func_563(bParam0))
					{
						func_357(43, bParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_388(bool bParam0)
{
	int iVar0;

	if (bParam0 == 2116770557)
	{
		if (!func_564(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_565(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_503(48);
		}
	}
}

void func_389(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_391(func_566(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_567(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_568(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_390(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_242() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_381(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_381(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_381(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_381(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_381(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_381(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_381(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_381(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_381(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_381(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_381(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_381(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_381(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_569())
			{
				func_381(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_381(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_381(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_381(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_381(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_381(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_381(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_381(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_381(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_381(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_381(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_381(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_381(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_391(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_340(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_360(bParam0);
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
		if (!func_570(bParam0, 1))
		{
			return false;
		}
	}
	return func_344(bParam0, 0, bParam2) >= iParam1;
}

void func_392(bool bParam0)
{
	if (func_350(41))
	{
		func_334(363, 0);
	}
	else
	{
		func_334(362, 0);
	}
	switch (bParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_571(-1865241121);
			func_572(-642026005);
			func_573(-642026005);
			func_504(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_571(2117142684);
			func_572(-940584364);
			func_573(-940584364);
			func_504(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_571(-1409326024);
			func_572(1972645282);
			func_573(1972645282);
			func_504(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_571(-641744968);
			func_572(1667205433);
			func_573(1667205433);
			func_504(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_571(-946988203);
			func_572(1362715885);
			func_573(1362715885);
			func_504(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_571(-646136018);
			func_572(1053540370);
			func_573(1053540370);
			func_504(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_571(-955835837);
			func_572(-1100103852);
			func_573(-1100103852);
			func_504(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_571(-179276075);
			func_572(-1409869209);
			func_573(-1409869209);
			func_504(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_571(-492711560);
			func_572(-1760235357);
			func_573(-1760235357);
			func_504(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_571(1764383959);
			func_572(-138366827);
			func_573(-138366827);
			func_504(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_571(317501533);
			func_572(-1261163843);
			func_573(-1261163843);
			func_504(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_571(817753087);
			func_572(-963523016);
			func_573(-963523016);
			func_504(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_571(576606016);
			func_572(560825326);
			func_573(560825326);
			func_504(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_571(814934957);
			func_572(858269539);
			func_573(858269539);
			break;
	}
}

void func_393(bool bParam0, int iParam1)
{
	var uVar0;

	func_574(bParam0, iParam1, &uVar0);
}

int func_394(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_493(bParam1, 1, 0) };
		iParam3 = func_575(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_577(bParam1, iParam2, func_576(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_578(1, (func_242() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != &Global_1946804->f_57[func_576(iParam3, 1) /*11*/])
			{
				func_579(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_580(32768) && bParam1 != &Global_1946804->f_57[func_576(iParam3, 1) /*11*/])
			{
				func_581();
				func_579(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_579(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_582(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_579(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_583(0);
			func_584(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_579(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

int func_395(bool bParam0, bool bParam1)
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
	bVar18 = func_534(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	bVar19 = func_534(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_585("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_586(&Var3, iVar2, iVar0, iVar1))
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
						func_587(iVar0);
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

void func_396()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_397()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_398()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_399()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_400()
{
	func_588();
	func_589();
	func_590();
}

void func_401(int iParam0, int iParam1, bool bParam2)
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

void func_402(int iParam0, bool bParam1)
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
	func_515(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_403(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_404(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_405(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_406(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_407(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_408(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_409(bool bParam0)
{
	if (!func_340(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_410(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_483(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_591(iParam0, 1024))
	{
		return;
	}
	func_485(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_411(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_483(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_591(iParam0, 1024))
	{
		return;
	}
	func_485(iVar0, iVar1);
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

int func_412()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_501())
	{
		return func_413();
	}
	iVar4 = (func_501() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_501())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_592(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_502(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_413()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_501());
	return func_502(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_414(bool bParam0)
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

int func_415(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_493(bParam0, 0, 1) };
	Var5 = { func_528(bParam0, Var0, Var0.f_4, 0) };
	return func_593(bParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_416(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_242() != -1)
	{
		return;
	}
	switch (func_365(bParam0))
	{
		case 81053684:
			if (bParam0 == -1623728698 && func_594(81053684, 0) <= 0)
			{
				func_579(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == -1535516064 || bParam0 == -763730846)
			{
				func_579(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_595(bParam0);
			if (func_596(iVar0))
			{
				func_597(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_579(30, bParam0, 0, 0, 0);
			}
			if (func_598() == -2125499975 || func_598() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_579(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_598() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_579(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_599(-525676072, 0))
			{
				if (func_600(-525676072, &bVar1))
				{
					func_579(33, bVar1, 0, 0, 0);
				}
			}
			func_579(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == 899611344 || bParam0 == -1515874150) || bParam0 == -1185145312)
	{
		if (!func_601(99217379))
		{
			func_394(Global_35, bParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_364(24);
		if (func_395(&bVar2, 0))
		{
			func_370(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_417(bool bParam0)
{
	if (func_361(bParam0, 943695443))
	{
		func_602(0, bParam0);
	}
	else if (func_361(bParam0, -2096528786))
	{
		func_602(1, bParam0);
	}
	else if (func_361(bParam0, -1094167013))
	{
		func_602(2, bParam0);
	}
	else if (func_361(bParam0, 1936654645))
	{
		func_602(3, bParam0);
	}
	else if (func_361(bParam0, 1306489306))
	{
		func_602(4, bParam0);
	}
	else if (func_361(bParam0, 435762317))
	{
		func_602(5, bParam0);
	}
	else if (func_361(bParam0, 1259363210))
	{
		func_602(6, bParam0);
	}
	else if (func_361(bParam0, 881398259))
	{
		func_602(7, bParam0);
	}
	else if (func_361(bParam0, -541549214))
	{
		func_602(8, bParam0);
	}
	else if (func_361(bParam0, 130796156))
	{
		func_602(-1, bParam0);
	}
}

int func_418(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_603(&Var4, 1356624740);
	return func_604(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_419(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_340(bParam0, 0))
	{
		return Var0;
	}
	if (func_361(bParam0, -305066475))
	{
		if (func_242() == -1)
		{
			if (func_361(bParam0, -537818634))
			{
				return func_605(189951448);
			}
			else
			{
				return func_605(1176172851);
			}
		}
	}
	else if (func_361(bParam0, -537818634))
	{
		return func_605(-963660207);
	}
	if (func_361(bParam0, 2084895747))
	{
		return func_605(1694039471);
	}
	return Var2;
}

void func_420(bool bParam0)
{
	switch (bParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_242() == -1)
			{
				if (func_378(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_334(109, 1);
				}
			}
			break;
	}
}

void func_421(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_607(func_606(0));
	func_609(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_608(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_422(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_340(bParam0, 0))
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
	if (!func_610())
	{
		func_611(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_612(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_612(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_362(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_360(bParam0);
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
	else if (!func_613(bParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_614(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_409(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_361(bParam0, 1443104131)) || bParam0 == -885810591) || bParam0 == -1424823393) || bParam0 == 1463786584) || bParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_409(bParam0));
	}
	func_609(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_423(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return 0;
	}
	iVar0 = &uParam0->f_1984[iParam1];
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x3FBC3F51BF12DFBF(iVar0) < fParam2)
	{
		return 0;
	}
	return 1;
}

void func_424(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

int func_425(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iParam1 /*113*/])->f_5))
	{
		return 0;
	}
	if (!func_58((uParam0->f_107[iParam1 /*113*/])->f_1))
	{
		return 0;
	}
	if (uParam0->f_4)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT((uParam0->f_107[iParam1 /*113*/])->f_5, joaat("event_damage")))
		{
			func_51(uParam0, "Responding to Damage Event", 15, -1);
			return 0;
		}
		if (func_615(uParam0, iParam1))
		{
			return 1;
		}
		if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, (uParam0->f_107[iParam1 /*113*/])->f_4))
		{
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_2046, (uParam0->f_107[iParam1 /*113*/])->f_4))
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_615(uParam0, iParam1))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1((uParam0->f_107[iParam1 /*113*/])->f_5, -1))
	{
		if (!func_462((uParam0->f_107[iParam1 /*113*/])->f_5, 1435919172))
		{
			return 1;
		}
	}
	return 0;
}

void func_426(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (!func_54((uParam0->f_107[iParam1 /*113*/])->f_1))
	{
		return;
	}
	if (!func_58((uParam0->f_107[iParam1 /*113*/])->f_1))
	{
		return;
	}
	if (bParam3)
	{
		bVar0 = func_616(uParam0, iParam1);
	}
	if (bParam2)
	{
		if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_1 == 1)
		{
			if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_4 <= 0f)
			{
				(uParam0->f_107[iParam1 /*113*/])->f_32.f_4 = func_450(100f, 140f);
			}
		}
		func_53(uParam0, iParam1);
		if (bVar0 && (uParam0->f_107[iParam1 /*113*/])->f_32.f_4 != 0f)
		{
			func_60((uParam0->f_107[iParam1 /*113*/])->f_1, 0, 0, 0, (uParam0->f_107[iParam1 /*113*/])->f_32.f_4, 1, 1, 0, 0, 1, 0);
		}
		else
		{
			func_60((uParam0->f_107[iParam1 /*113*/])->f_1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
	}
}

int func_427(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_107[iParam1 /*113*/])->f_5))
	{
		return 1;
	}
	if (((uParam0->f_107[iParam1 /*113*/])->f_32.f_49 < 0f || (uParam0->f_107[iParam1 /*113*/])->f_32.f_50 < 0f) || (uParam0->f_107[iParam1 /*113*/])->f_32.f_51 < 0f)
	{
		return 1;
	}
	if (!func_113(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_52)))
	{
		func_116(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_52), 0f);
	}
	fVar0 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_49;
	fVar1 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_50;
	fVar2 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_51;
	fVar3 = func_114(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_52));
	if (fVar3 > fVar2)
	{
		return 1;
	}
	fVar4 = (fVar0 - ((fVar3 / fVar2) * (fVar0 - fVar1)));
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO((uParam0->f_107[iParam1 /*113*/])->f_5, fVar4);
	return 0;
}

int func_428(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_360(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_361(bParam0, 1399091007))
	{
		func_574(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_429(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_617(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_619(&Var0, func_618(0));
	}
	if (!func_620(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_586(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_529(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_587(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_430(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_493(bParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_621(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_528(bParam0, Var0, Var0.f_4, bParam4) };
	return func_529(bParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_431(bool bParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_361(bParam0, 606799272))
		{
			func_622(bParam0, iParam1);
		}
		if (func_361(bParam0, -1112814642) && func_361(bParam0, -1697809989))
		{
			func_389(bParam0, iParam1, 1, 0);
		}
	}
}

float func_432(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_433(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_108(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_108(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_434(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_231(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_435(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_436(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_623(iParam1);
	}
}

int func_437(int iParam0, bool bParam1)
{
	if (func_624(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_625(5000))
		{
			return 1;
		}
	}
	switch (func_626(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_438()
{
	if (PED::_IS_PED_CARRYING(Global_35) || func_627(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_439()
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

int func_440(int iParam0)
{
	if (!func_443(iParam0))
	{
		return -1;
	}
	return func_629(func_628(iParam0));
}

bool func_441(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_442(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_443(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_444(int iParam0)
{
	return (Global_1327590->f_23[iParam0 /*17*/])->f_10;
}

float func_445(int iParam0)
{
	return (Global_1327590->f_23[iParam0 /*17*/])->f_11;
}

int func_446()
{
	return Global_1327590->f_1;
}

void func_447(var uParam0)
{
	if (!func_113(uParam0))
	{
	}
	if (!func_238(uParam0))
	{
		uParam0->f_2 = (func_239() - uParam0->f_1);
		func_240(uParam0, 2);
	}
}

void func_448(var uParam0)
{
	if (!func_113(uParam0))
	{
	}
	if (func_238(uParam0))
	{
		uParam0->f_1 = (func_239() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_241(uParam0, 2);
	}
}

int func_449(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_630(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_450(float fParam0, float fParam1)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1);
}

void func_451(int iParam0)
{
	int iVar0;

	iVar0 = func_476(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(9, iVar0);
	}
}

int func_452()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_1359489->f_361.f_84[iVar0])))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1359489->f_361.f_295))
	{
		iVar1++;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1359489->f_361.f_297))
	{
		iVar1++;
	}
	return iVar1;
}

void func_453()
{
	func_631(&(Global_1359489->f_361.f_295));
	func_631(&(Global_1359489->f_361.f_297));
	if (TXD::_DOES_STREAMED_TXD_EXIST(-1138345479) && TXD::_HAS_STREAMED_TXD_LOADED(-1138345479))
	{
		TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(-1138345479);
	}
}

int func_454(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
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
	if (func_228(vParam0))
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
		if (func_632(vParam0))
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
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_633(iVar0, bParam8);
	return iVar0;
}

int func_455(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar1 = func_634(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_456(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iVar0 = -1;
	fVar1 = 250000f;
	uVar2 = func_635();
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (func_636(uParam0, iVar3))
		{
		}
		else if (func_21(uParam0) == 355)
		{
			if (iVar3 == 5)
			{
				if (uParam0->f_3)
				{
					if (!func_637(15))
					{
					}
					else if ((bParam1 && !func_638(iVar3)) || (!bParam1 && func_638(iVar3)))
					{
					}
					else if (!func_639(iVar3, 0, 0))
					{
					}
					else if (((*Global_1360165)[iVar3 /*1157*/])->f_62 == -289447566)
					{
					}
					else if (func_640(iVar3, func_104(uParam0->f_7), 1))
					{
					}
					else if (func_642(&uVar2, func_641(iVar3)))
					{
						iVar4 = func_248(iVar3);
						if (ENTITY::IS_ENTITY_DEAD(iVar4))
						{
							iVar0 = iVar3;
						}
						else
						{
							fVar5 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), uParam0->f_29);
							if (bParam2)
							{
								if (fVar5 > 400f)
								{
								}
								else if (!func_54(iVar0))
								{
									iVar0 = iVar3;
								}
								else if (fVar5 < fVar1)
								{
									fVar1 = fVar5;
									iVar0 = iVar3;
								}
								iVar3++;
								if (!func_54(iVar0))
								{
									return -1;
								}
								if (!func_643(iVar0, func_104(uParam0->f_7), 0, -1))
								{
									return -1;
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}

int func_457(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_54(iParam2))
	{
		return 1;
	}
	if (func_118(iParam2))
	{
		return 0;
	}
	iVar0 = func_104(uParam0->f_7);
	if (!func_263(iParam2, iVar0))
	{
		func_643(iParam2, iVar0, uParam0->f_3, -1);
		return 0;
	}
	iVar1 = func_644(iParam2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	(uParam0->f_107[iParam1 /*113*/])->f_5 = iVar1;
	POPULATION::_0xF74E134F40192884(iVar1, 1);
	func_59(iParam2, 45, 1);
	return 1;
}

int func_458(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (func_138(func_137(iParam0)))
	{
		return func_252(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_295(iParam0), 0);
}

int func_459(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (func_133(iParam0, 32) && !bParam1)
	{
		func_254(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_137(iParam0)));
		if (func_242() == -1)
		{
			if (func_133(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_139(iParam0));
				func_135(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_139(iParam0));
		}
		return 0;
	}
	if (!func_645(iParam0) && func_242() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_139(iParam0)))
	{
		func_135(iParam0, 128);
		return 1;
	}
	func_254(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_137(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_139(iParam0));
	if (func_133(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_139(iParam0));
		func_135(iParam0, 2048);
	}
	return 1;
}

int func_460(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_646(iParam0, 1))
	{
		return 0;
	}
	if (func_138(func_137(iParam0)))
	{
		iVar1 = func_139(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_62(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_253(iParam0, 1);
	func_647(iParam0);
	if (bParam3)
	{
		func_253(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_461(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_462(int iParam0, int iParam1)
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

float func_463(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam0 - fParam1) / (fParam2 - fParam1)) * (fParam4 - fParam3)) + fParam3);
}

void func_464(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_648(iParam1))
		{
			func_649(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
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
			func_650(iParam0, 0, 1);
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
			func_651(iParam0, 0);
			bVar0 = true;
		}
		func_652(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

bool func_465(int iParam0)
{
	return func_235(iParam0, 2, 1);
}

int func_466(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_314(iParam0))
	{
		return 0;
	}
	if (bParam1 && !func_22(iParam0))
	{
		if (PED::_0x94132D7C8D3575C4(Global_35))
		{
			return 0;
		}
		if (AUDIO::_0x54B187F111D9C6F8(Global_35, 1))
		{
			return 0;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	if (PED::_0x6FB76442469ABD68(Global_35) >= 0.5f)
	{
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		return 0;
	}
	if (func_221(1048576))
	{
		return 0;
	}
	if (func_653())
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_35);
		iVar1 = iVar0;
		if ((iVar1 != -447259824 && iVar1 != -1177373461) && iVar1 != -229964281)
		{
			return 0;
		}
	}
	if (func_654())
	{
		return 0;
	}
	if (Global_1359489->f_361.f_59)
	{
		return 0;
	}
	return 1;
}

bool func_467(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_468(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
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
	func_655(iParam0, 1);
	func_656(iParam0, 1);
	func_657(iParam0, 128);
}

int func_469(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
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

int func_470(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
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

float func_471(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_472(int iParam0)
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
	iVar0 = func_69(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_68(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_67(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_64(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_65(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_66(iParam0);
	if (iVar5 < 1 || iVar5 > func_70(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_473(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_474()
{
	if (MISC::_0x0D0AE5081F88CFE1(-2137341727))
	{
		MISC::_0x154340E87D8CC178(-2137341727);
	}
	if (MISC::_0x0D0AE5081F88CFE1(-1564940634))
	{
		MISC::_0x154340E87D8CC178(-1564940634);
	}
	if (MISC::_0x0D0AE5081F88CFE1(-1881226198))
	{
		MISC::_0x154340E87D8CC178(-1881226198);
	}
}

void func_475(int iParam0, float fParam1)
{
	struct<6> Var0;

	MISC::_0x94FCADCF9F0C368E(iParam0);
	Var0.f_3 = 4;
	Var0 = 1427759409; /* GXTEntry: "Thimble" */
	Var0.f_1 = fParam1;
	Var0.f_5 = 1;
	Var0.f_4 = 0;
	MISC::_0xAF3A84C7DE6A1DC5(iParam0, &Var0);
}

int func_476(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -467647619;
		case 2:
			return -1692078269;
		case 3:
			return -1411867178;
		case 4:
			return -1295797652;
		case 5:
			return -1306960697;
		case 6:
			return 567333282;
		case 7:
			return 669046098;
		case 8:
			return -1099073159;
		case 9:
			return 1137962872;
		case 10:
			return -74329438;
		case 11:
			return 1637646544;
		case 12:
			return 1226042171;
		case 13:
			return -338802011;
		case 14:
			return 1476368342;
		case 15:
			return 794168062;
		case 16:
			return -1058589986;
		case 17:
			return 1586830886;
		case 18:
			return 676666991;
		case 19:
			return -770025009;
		case 20:
			return -1897617972;
		case 21:
			return -930732451;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_477(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1692636244;
		case 2:
			return -1014982708;
		case 3:
			return -1073061309;
		case 4:
			return -1255977291;
		case 5:
			return -222065427;
		case 6:
			return 1097021450;
		case 7:
			return -1103252731;
		case 8:
			return -717460974;
		case 9:
			return -1493460403;
		case 10:
			return 1749015556;
		case 11:
			return 1637212828;
		case 12:
			return -1193524449;
		case 13:
			return -363803270;
		case 14:
			return 308888437;
		case 15:
			return -2135469418;
		case 16:
			return -666501838;
		case 17:
			return -1275900794;
		case 18:
			return 1669790260;
		case 19:
			return 1328065892;
		case 20:
			return 923251562;
		case 21:
			return 2082971178;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

Vector3 func_479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_658();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_480(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -400046463 /* GXTEntry: "Bill has asked for some hair pomade." */;
		case 2:
			return 612022325 /* GXTEntry: "Charles has asked for an eagle feather." */;
		case 3:
			return -408808829 /* GXTEntry: "Charles has asked for some moonshine." */;
		case 4:
			return -1166493723 /* GXTEntry: "Charles has asked for some oleander." */;
		case 5:
			return 636060187 /* GXTEntry: "Dutch has asked for a pipe." */;
		case 6:
			return 908457788 /* GXTEntry: "Hosea enjoys crime novels. Find one for him." */;
		case 7:
			return 1000496542 /* GXTEntry: "Hosea has asked for some ginseng." */;
		case 8:
			return 1291752698 /* GXTEntry: "Jack has asked for a Penny Dreadful book." */;
		case 9:
			return 28343229 /* GXTEntry: "Jack has asked for a thimble." */;
		case 10:
			return -442212335 /* GXTEntry: "Javier has asked for some oleander." */;
		case 11:
			return -905786637 /* GXTEntry: "Kieran has asked for some burdock root." */;
		case 12:
			return -32720610 /* GXTEntry: "Lenny has asked for a pocket watch." */;
		case 13:
			return 1867124758 /* GXTEntry: "Mary-Beth has asked for a fountain pen." */;
		case 14:
			return 1191082472 /* GXTEntry: "Molly has asked for a pocket mirror." */;
		case 15:
			return -2055932072 /* GXTEntry: "Pearson has asked for a rabbit." */;
		case 16:
			return 860706848 /* GXTEntry: "Pearson has asked for a naval compass." */;
		case 17:
			return 431084994 /* GXTEntry: "Sadie has asked for a harmonica." */;
		case 18:
			return -1845699285 /* GXTEntry: "Sean has asked for some whiskey." */;
		case 19:
			return -309743615 /* GXTEntry: "Susan has asked for some herbs for seasoning." */;
		case 20:
			return -1308505388 /* GXTEntry: "Tilly has asked for a necklace." */;
		case 21:
			return -1196637421 /* GXTEntry: "Uncle has asked for items to make a remedy." */;
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_481(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	char* sVar1;

	iVar0 = iParam0;
	if (iParam1 == 0)
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, sParam2);
	}
	else
	{
		sVar1 = MISC::_CREATE_VAR_STRING(0, iParam1);
	}
	StringCopy(&((Global_1359489->f_361.f_258[iVar0 /*6*/])->f_2), sVar1, 32);
}

void func_482(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	iVar0 = func_476(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(9, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(9, func_476(*uParam0), iParam1, sParam2, bParam3, iParam5, 0);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489->f_361.f_194 = func_515("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(func_478(uParam0->f_3)), 1433015236, "INPUT_FEED_INTERACT_GENERIC", -1507719118, 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

void func_483(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_484(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_659(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_660(iParam0))
	{
		return 0;
	}
	if (func_661(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_591(iParam0, 1)) || func_662(32768))
	{
		if (!func_591(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_663())
	{
		return 0;
	}
	return 1;
}

void func_485(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 761950088 /* GXTEntry: "Bring ~1~ ~2~ ~3~" */;
		case 5:
			return -1131986109 /* GXTEntry: "Find Dutch a pipe." */;
		case 6:
			return 1756591705 /* GXTEntry: "Find Hosea another crime novel." */;
		case 8:
			return 2110897046;
		case 9:
			return 1947074040 /* GXTEntry: "Find Jack a thimble." */;
		case 12:
			return 361762491 /* GXTEntry: "Find Lenny a pocket watch." */;
		case 13:
			return 542329524 /* GXTEntry: "Find Mary-Beth a fountain pen." */;
		case 14:
			return -918949028 /* GXTEntry: "Find Molly a pocket mirror." */;
		case 16:
			return -407171189 /* GXTEntry: "Find Pearson a naval compass." */;
		case 15:
			return -1303018308 /* GXTEntry: "Bring Pearson a rabbit." */;
		case 17:
			return -1427069925 /* GXTEntry: "Find Sadie a harmonica." */;
		case 19:
			return -1950223422 /* GXTEntry: "Find Susan 2 Creeping Thyme, Oregano, or Wild Mint." */;
		case 20:
			return 364912121 /* GXTEntry: "Find Tilly a necklace." */;
		case 21:
			return -2103092431 /* GXTEntry: "Find Uncle Whiskey, Milkweed, Peppermint, Pomade, and a skunk." */;
		default:
			break;
	}
	return 0;
}

char* func_487(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_614(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_488(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_378(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_378(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_505(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_449(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

bool func_489(bool bParam0)
{
	return func_360(bParam0) == joaat("weapon");
}

int func_490(bool bParam0)
{
	var uVar0;

	if (func_242() != -1)
	{
		return 0;
	}
	if (func_362(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_497(bParam0, &uVar0, 1, 0, 0);
	}
	return func_391(bParam0, 1, 0);
}

void func_491(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_360(bParam0) != joaat("weapon"))
	{
		return;
	}
	bVar0 = func_367(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_523(bVar0))
	{
		if (func_242() == -1)
		{
			func_368(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, 0) && func_344(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_422(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_492(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_361(bParam0, 58855631))
	{
		func_664(bParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_493(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_665(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_360(bParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_528(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_618(bParam1) };
			if (bParam2 && func_666(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_526(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_526(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_527(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_667(bParam1) };
			switch (func_365(bParam0))
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
			if (func_668(bParam0, -1823706425))
			{
				Var0 = { func_528(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_668(bParam0, -1483207246))
			{
				Var0 = { func_528(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
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
				if (!func_669(Var0, &Var27, bParam1, 0))
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

int func_494(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (!func_369(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_500(bParam3), bParam0);
}

int func_495(bool bParam0, bool bParam1)
{
	if (func_373(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_500(bParam1), bParam0, 0);
}

int func_496()
{
	if (func_242() != -1)
	{
		return 0;
	}
	if (!func_353())
	{
		return 0;
	}
	if (!func_378(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_378(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_378(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_378(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_378(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_378(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_378(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_378(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_378(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_378(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_378(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_378(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_378(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_378(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_378(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_378(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_378(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_378(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_378(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_378(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_378(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_378(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_378(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_378(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_378(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_378(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_497(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_670(&bParam0);
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (!func_369(0))
	{
		bParam3 = true;
	}
	if (func_489(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_618(0) };
			Var4.f_9 = -1591664384;
			if (!func_526(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_527(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_666(bParam0, 1))
			{
				if (!func_526(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_527(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_671(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_494(bParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_672(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_500(bParam4), bParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_498(bool bParam0, int iParam1)
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

int func_499(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_617(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_619(&Var0, func_618(0));
	}
	if (!func_620(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_587(iVar14);
	return uVar15;
}

int func_500(bool bParam0)
{
	if (func_242() == -1)
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

int func_501()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

bool func_502(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_503(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_242() != -1)
	{
		return;
	}
	iVar0 = func_673(iParam0);
	fVar1 = func_674(iParam0);
	if ((Global_1347477->f_117 || !func_363(31)) || !func_675(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_676(iVar0) >= 7)
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
	func_677(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_609(MISC::_CREATE_VAR_STRING(6, func_678(iParam0), fVar1), "itemtype_textures", func_679(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_504(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_680(&Global_0, 8);
	}
	if (!func_353() || func_242() != -1)
	{
		return;
	}
	func_680(&Global_0, 1);
}

bool func_505(int iParam0)
{
	int iVar0;

	iVar0 = func_540(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_506(int iParam0)
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

int func_507(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_681(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_508(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_356() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_682(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_683(), 12);
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
			else if (func_555() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_684(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_555(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_685(), 13);
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
			else if (func_556() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_686(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_556(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_507(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_509(int iParam0, int iParam1, int iParam2)
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

int func_510(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_511(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_512(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			bVar2 = func_687(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_391(bVar2, 1, 0) || func_689(func_688(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_516(func_687(iVar0))), func_516(func_687(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_555() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_690(iVar0)), func_690(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_684() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_690(iVar0)), func_690(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_690(iVar0)), func_690(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_566(iParam3, func_691(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_562(bVar2) - iParam7) >= func_507(iParam3, func_692(iVar0));
				}
				else
				{
					bVar1 = func_562(bVar2) >= func_507(iParam3, func_692(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_562(bVar2) + iParam7) >= func_507(iParam3, func_692(iVar0));
			}
			else
			{
				bVar1 = func_562(bVar2) >= func_507(iParam3, func_692(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_693(bVar2)), func_693(bVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_694(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_695(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_695(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_556() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(iVar0)), func_696(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_686() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(iVar0)), func_696(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(iVar0)), func_696(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			bVar2 = func_566(iParam3, func_691(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_562(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_697(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_697(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_698(bVar2)), func_698(bVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_513(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_685() >= 13)
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

int func_514(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_443(func_699(0)) && ((func_626(0) == 1 || func_626(0) == 8) || func_626(0) == 6))
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

var func_515(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
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
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_516(bool bParam0)
{
	switch (bParam0)
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

var func_517(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_518(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_520(int iParam0)
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

void func_521(int iParam0)
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
			func_700(1);
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
			func_701(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_701(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_701(3);
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
			func_702(1);
			break;
		case 34:
			func_703(1);
			break;
		case 35:
			func_704(1);
			break;
		case 36:
			break;
		case 37:
			func_705(0);
			break;
		case 38:
			func_706(0);
			break;
		case 39:
			func_707(0);
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
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_334(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_334(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_334(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_334(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_242() == -1)
			{
				if (!func_601(99217379) || func_708(99217379) == 2110595215)
				{
					if (func_306())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_391(bVar0, 1, 0))
					{
						func_415(bVar0, 1, 752097756);
					}
					func_394(Global_35, bVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_242() == -1)
			{
				if (!func_391(1013902307, 1, 0))
				{
					func_415(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_242() == -1)
			{
				if (!func_391(1013902307, 1, 0))
				{
					func_415(1013902307, 1, 752097756);
				}
				if (!func_391(142640135, 1, 0))
				{
					func_415(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_242() == -1)
			{
				if (!func_391(786809402, 1, 0))
				{
					func_415(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_242() == -1)
			{
				if (!func_391(786809402, 1, 0))
				{
					func_415(786809402, 1, 752097756);
				}
				if (!func_391(-518019409, 1, 0))
				{
					func_415(-518019409, 1, 752097756);
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
			func_709();
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

int func_522(bool bParam0)
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

int func_523(bool bParam0)
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

bool func_524(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_525(int iParam0, int iParam1)
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

bool func_526(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_672(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_527(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_710(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_528(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_340(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_500(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_529(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_711(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_669(*uParam1, &Var0, bParam6, 0))
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
	if (!func_369(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_500(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_530(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_712(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_531(bool bParam0)
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
	iVar2 = func_30();
	func_31(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_532(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_713(bParam0))
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
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0) * 4;
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

bool func_533(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_535(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_363(50))
			{
				if (!func_363(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_363(51))
			{
				if (!func_363(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_536()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_537(int iParam0, bool bParam1, var uParam2)
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

	if (!func_340(bParam1, 0))
	{
		return 0;
	}
	if (func_360(bParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_242() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_365(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_714(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_361(bParam1, 866047851))
	{
		iVar5 = func_576(iVar4, 1);
		if (func_715(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT(bVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_365(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_361(bParam1, -1638171711))
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
			if (func_716(1868067663, &uVar0))
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
				iVar10 = func_717(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_717(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_365(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_361(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
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

void func_538()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_539()
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

int func_540(int iParam0)
{
	if (!func_443(iParam0))
	{
		return -1;
	}
	return func_718(iParam0);
}

int func_541()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_391(func_719(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_542(bool bParam0)
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

int func_543(int iParam0, bool bParam1)
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
	if (func_391(bVar0, 1, 0) && func_391(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_544(bool bParam0)
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

int func_545(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_720(iParam0);
	if (iVar0 != -15)
	{
		func_31(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_721(iVar0, 1);
	}
	return 0;
}

int func_546(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_391(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
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
			if (func_340(bVar25, 0) && func_361(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_547(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_609(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_548(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_722())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_609(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_723(iVar0);
			func_724(iVar0, 0, 0);
		}
		func_609(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_339(func_605(1644987397), iVar1);
	}
}

void func_549(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_550(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_551(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_552(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_553(int iParam0)
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
	iVar1 = func_562(bVar9);
	iVar2 = func_562(bVar10);
	iVar3 = func_562(bVar11);
	iVar5 = func_563(bVar9);
	iVar6 = func_563(bVar10);
	iVar7 = func_563(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_562(bVar12);
		iVar8 = func_563(bVar12);
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

void func_554(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_555()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_725(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_556()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_557(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_697(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(bVar0))
		{
			*sParam2++;
		}
		if (func_697(bVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_697(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(bVar0))
		{
			*sParam2++;
		}
		if (func_697(bVar1))
		{
			*sParam2++;
		}
		if (func_697(bVar0) && func_697(bVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_697(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(bVar0))
		{
			*sParam2++;
		}
		if (func_697(bVar1))
		{
			*sParam2++;
		}
		if (func_697(bVar2))
		{
			*sParam2++;
		}
		if ((func_697(bVar0) && func_697(bVar1)) && func_697(bVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_697(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_697(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_697(bVar0))
		{
			*sParam2++;
		}
		if (func_697(bVar1))
		{
			*sParam2++;
		}
		if (func_697(bVar2))
		{
			*sParam2++;
		}
		if (func_697(bVar3))
		{
			*sParam2++;
		}
		if (((func_697(bVar0) && func_697(bVar1)) && func_697(bVar2)) && func_697(bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_558(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_726(1497516462);
			func_727(2016141805);
			func_727(1010885152);
			func_727(-502324015);
			break;
		case 2016141805:
			func_727(1497516462);
			func_726(2016141805);
			func_727(1010885152);
			func_727(-502324015);
			break;
		case 1010885152:
			func_727(1497516462);
			func_727(2016141805);
			func_726(1010885152);
			func_727(-502324015);
			break;
		case -502324015:
			func_727(1497516462);
			func_727(2016141805);
			func_727(1010885152);
			func_726(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_727(-538889627);
			func_727(-538880323);
			func_727(-1056767524);
			func_726(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_728();
			func_726(iParam0);
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
			func_729();
			func_726(iParam0);
			break;
		case 2019386373:
			func_727(-664252410);
			func_727(2109952320);
			func_726(2019386373);
			break;
		case -664252410:
			func_727(2019386373);
			func_727(2109952320);
			func_726(-664252410);
			break;
		case 2109952320:
			func_727(2019386373);
			func_727(-664252410);
			func_726(2109952320);
			break;
		case -1674179981:
			func_727(-1835851517);
			func_727(-1838352012);
			func_726(-1674179981);
			break;
		case -1835851517:
			func_727(-1674179981);
			func_727(-1838352012);
			func_726(-1835851517);
			break;
		case -1838352012:
			func_727(-1674179981);
			func_727(-1835851517);
			func_726(-1838352012);
			break;
		case -1717960576:
			func_727(210001842);
			func_726(-1717960576);
			break;
		case 210001842:
			func_727(-1717960576);
			func_726(210001842);
			break;
		case -150493654:
			func_727(-1271608261);
			func_727(1846061697);
			func_727(-1145519186);
			func_726(-150493654);
			break;
		case -1271608261:
			func_727(-150493654);
			func_727(1846061697);
			func_727(-1145519186);
			func_726(-1271608261);
			break;
		case 1846061697:
			func_727(-150493654);
			func_727(-1271608261);
			func_727(-1145519186);
			func_726(1846061697);
			break;
		case -1145519186:
			func_727(-150493654);
			func_727(-1271608261);
			func_727(1846061697);
			func_726(-1145519186);
			break;
		case 1766284049:
			func_727(280705402);
			func_727(1926308480);
			func_726(1766284049);
			break;
		case 280705402:
			func_727(1766284049);
			func_727(1926308480);
			func_726(280705402);
			break;
		case 1926308480:
			func_727(1766284049);
			func_727(280705402);
			func_726(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_727(439465264);
				func_726(1609506757);
			}
			else
			{
				func_727(1609506757);
				func_727(439465264);
			}
			break;
		case 439465264:
			if (func_730(1609506757))
			{
				if (bParam1)
				{
					func_726(439465264);
				}
				else
				{
					func_727(439465264);
				}
			}
			break;
		case 1822001510:
			func_727(-1612662716);
			func_726(1822001510);
			break;
		case -1612662716:
			func_727(1822001510);
			func_726(-1612662716);
			break;
		case 1306158345:
			func_727(1952610440);
			func_727(-223469678);
			func_727(-404698347);
			func_727(1517904467);
			func_726(1306158345);
			break;
		case 1952610440:
			func_727(1306158345);
			func_727(-223469678);
			func_727(-404698347);
			func_727(1517904467);
			func_726(1952610440);
			break;
		case -223469678:
			func_727(1306158345);
			func_727(1952610440);
			func_727(-404698347);
			func_727(1517904467);
			func_726(-223469678);
			break;
		case -404698347:
			func_727(1306158345);
			func_727(1952610440);
			func_727(-223469678);
			func_727(1517904467);
			func_726(-404698347);
			break;
		case 1517904467:
			func_727(1306158345);
			func_727(1952610440);
			func_727(-223469678);
			func_727(-404698347);
			func_726(1517904467);
			break;
		case 1376646519:
			func_727(931649776);
			func_727(-434590080);
			func_727(1743048395);
			func_727(449774763);
			func_726(1376646519);
			break;
		case 931649776:
			func_727(1376646519);
			func_727(-434590080);
			func_727(1743048395);
			func_727(449774763);
			func_726(931649776);
			break;
		case -434590080:
			func_727(1376646519);
			func_727(931649776);
			func_727(1743048395);
			func_727(449774763);
			func_726(-434590080);
			break;
		case 1743048395:
			func_727(1376646519);
			func_727(931649776);
			func_727(-434590080);
			func_727(449774763);
			func_726(1743048395);
			break;
		case 449774763:
			func_727(1376646519);
			func_727(931649776);
			func_727(-434590080);
			func_727(1743048395);
			func_726(449774763);
			break;
		case -1414537028:
			func_727(38162571);
			func_727(1350391819);
			func_727(54073871);
			func_726(-1414537028);
			break;
		case 38162571:
			func_727(-1414537028);
			func_727(1350391819);
			func_727(54073871);
			func_726(38162571);
			break;
		case 1350391819:
			func_727(-1414537028);
			func_727(38162571);
			func_727(54073871);
			func_726(1350391819);
			break;
		case 54073871:
			func_727(-1414537028);
			func_727(38162571);
			func_727(1350391819);
			func_726(54073871);
			break;
		case 198200492:
			func_726(198200492);
			func_727(-1124061431);
			func_727(52706132);
			func_727(-259123672);
			break;
		case -1124061431:
			func_727(198200492);
			func_726(-1124061431);
			func_727(52706132);
			func_727(-259123672);
			break;
		case 52706132:
			func_727(198200492);
			func_727(-1124061431);
			func_726(52706132);
			func_727(-259123672);
			break;
		case -259123672:
			func_727(198200492);
			func_727(-1124061431);
			func_727(52706132);
			func_726(-259123672);
			break;
		case -919512195:
			func_726(-919512195);
			func_727(-1925798111);
			func_727(420709909);
			func_727(1703426636);
			break;
		case -1925798111:
			func_726(-1925798111);
			func_727(-919512195);
			func_727(420709909);
			func_727(1703426636);
			break;
		case 420709909:
			func_726(420709909);
			func_727(-919512195);
			func_727(-1925798111);
			func_727(1703426636);
			break;
		case 1703426636:
			func_726(1703426636);
			func_727(-919512195);
			func_727(-1925798111);
			func_727(420709909);
			break;
		case -1223121209:
			func_726(-1223121209);
			func_727(630808005);
			break;
		case 630808005:
			func_726(630808005);
			func_727(-1223121209);
			break;
		case 1453909576:
			func_726(1453909576);
			func_727(1643531967);
			break;
		case 1643531967:
			func_726(1643531967);
			func_727(1453909576);
			break;
		case 0:
			func_726(0);
			func_727(473295046);
			func_727(-1738165526);
			break;
		case 473295046:
			func_726(473295046);
			func_727(0);
			func_727(-1738165526);
			break;
		case -1738165526:
			func_726(-1738165526);
			func_727(0);
			func_727(473295046);
			break;
		case 932909855:
			func_726(932909855);
			func_727(2051822093);
			break;
		case 2051822093:
			func_726(2051822093);
			func_727(932909855);
			break;
		case 405586984:
			func_726(405586984);
			func_727(1509509592);
			func_727(-959357075);
			func_727(-1311865656);
			break;
		case 1509509592:
			func_726(1509509592);
			func_727(405586984);
			func_727(-959357075);
			func_727(-1311865656);
			break;
		case -959357075:
			func_726(-959357075);
			func_727(1509509592);
			func_727(405586984);
			func_727(-1311865656);
			break;
		case -1311865656:
			func_726(-1311865656);
			func_727(1509509592);
			func_727(-959357075);
			func_727(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_726(-524145696);
			}
			else
			{
				func_727(-524145696);
			}
			func_727(1626481264);
			func_727(282809459);
			break;
		case 282809459:
			func_726(282809459);
			func_727(1626481264);
			func_727(-524145696);
			break;
		case 1626481264:
			func_726(1626481264);
			func_727(-524145696);
			func_727(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_726(885203519);
			}
			else
			{
				func_727(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_726(-1080627546);
			}
			else
			{
				func_727(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_730(iParam0))
				{
					func_726(iParam0);
				}
			}
			else if (func_730(iParam0))
			{
				func_727(iParam0);
			}
			break;
	}
}

void func_559(int iParam0)
{
	if (!func_731(iParam0))
	{
		func_733(func_732(iParam0));
	}
}

int func_560()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_731(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_561(bool bParam0, int iParam1, int iParam2)
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
	iVar1 = func_562(bVar9);
	iVar2 = func_562(bVar10);
	iVar3 = func_562(bVar11);
	iVar5 = func_563(bVar9);
	iVar6 = func_563(bVar10);
	iVar7 = func_563(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_562(bVar12);
		iVar8 = func_563(bVar12);
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

int func_562(bool bParam0)
{
	int iVar0;

	if (func_391(bParam0, 1, 0))
	{
		iVar0 = func_344(bParam0, 0, 0);
	}
	return iVar0;
}

int func_563(bool bParam0)
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

int func_564(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_565(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_566(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_681(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_567(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_566(iParam1, 5) || bParam0 == func_566(iParam1, 6)) || bParam0 == func_566(iParam1, 7)) || bParam0 == func_566(iParam1, 8)) || bParam0 == func_566(iParam1, 9))
	{
		func_557(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_357(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_359(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_568(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_566(iParam1, 5) || bParam0 == func_566(iParam1, 6)) || bParam0 == func_566(iParam1, 7)) || bParam0 == func_566(iParam1, 8)) || bParam0 == func_566(iParam1, 9))
	{
		if (func_557(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_357(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, iVar0, func_507(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_357(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, iVar0, func_507(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_569()
{
	if (func_505(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

int func_570(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_428(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_585("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_586(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_524(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_587(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_587(iVar1);
	}
	return 0;
}

void func_571(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_572(int iParam0)
{
	if (!func_734(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_573(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_574(bool bParam0, int iParam1, var uParam2)
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

int func_575(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_735(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_576(int iParam0, int iParam1)
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

int func_577(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_736();
	if (iParam2 == 39)
	{
		Var0 = { func_493(bParam0, 1, 0) };
		iParam2 = func_576(func_575(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_361(bParam0, 866047851) && func_715(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_580(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_737(func_735(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_738(iParam2);
	func_739(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_740(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_740(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_741(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_742(bParam0, iParam2, iParam1, func_242() != -1);
	if (bParam4)
	{
		func_743(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_743(&(Global_1946804->f_1378), 1, 0);
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
				func_744(func_735(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_578(bool bParam0, bool bParam1, bool bParam2)
{
	func_745(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_579(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_746(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_747(Var0);
}

bool func_580(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_581()
{
	func_748(&(Global_1946804->f_2776));
	func_749(32768);
	func_744(1108822547, 8, 6);
}

int func_582(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_576(iParam0, 1);
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

void func_583(int iParam0)
{
	struct<4> Var0;

	if (func_750(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_751(Var0);
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_751(Var0);
}

int func_585(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_500(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_586(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_587(int iParam0)
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

float func_588()
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

	if (func_752())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_753(2);
	}
	if (Global_1347477->f_119)
	{
		return func_753(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_754();
	fVar2 = func_755();
	fVar3 = func_756();
	fVar4 = func_757();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_758()));
	fVar7 = (func_753(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_759(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_760(3, fVar9, fVar9 > 100f);
	return func_761(fVar7, -100f, 100f);
}

float func_589()
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

	if (func_752())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_753(1);
	}
	if (Global_1347477->f_119)
	{
		return func_753(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_754();
	fVar2 = func_755();
	fVar3 = func_756();
	fVar4 = func_757();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_758()));
	fVar7 = (func_753(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_759(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_760(2, fVar9, fVar9 > 100f);
	return func_761(fVar7, -100f, 100f);
}

float func_590()
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

	if (func_752())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_753(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_762())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_763())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_753(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_754();
	fVar2 = func_755();
	fVar3 = func_756();
	fVar4 = func_757();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_758()));
	fVar7 = (func_753(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_759(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_760(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_753(0);
	}
	return func_761(fVar7, -100f, 100f);
}

bool func_591(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_592(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_593(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_340(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_497(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_369(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_500(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_594(int iParam0, bool bParam1)
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
				return func_764();
			}
			break;
	}
	return 0;
}

int func_595(bool bParam0)
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

int func_596(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_597(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_596(iParam0))
	{
		return;
	}
	if (func_765(iParam0))
	{
		return;
	}
	if (!func_766(iParam0))
	{
		func_767(iParam0, 1, 0);
	}
	bVar0 = func_768(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_769(iParam0, 512))
		{
			func_579(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_770() && !bParam1) && !func_262(0, 0, 1))
	{
		func_771(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_772(iParam0, 6);
	if (bParam2)
	{
		if (!func_262(0, 0, 1))
		{
			func_504(1, 4);
		}
	}
}

int func_598()
{
	return Global_1946804->f_1;
}

bool func_599(int iParam0, bool bParam1)
{
	return func_594(iParam0, 0) < func_773(iParam0, bParam1);
}

int func_600(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_365(bVar1) == iParam0)
		{
			*iParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_601(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_576(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_576(iParam0, 1) /*11*/];
}

void func_602(int iParam0, bool bParam1)
{
	if (func_361(bParam1, 130796156))
	{
		func_774(bParam1, 0);
	}
	else if (func_361(bParam1, 930141731))
	{
		func_774(bParam1, 1);
		func_775(iParam0);
	}
}

void func_603(var uParam0, int iParam1)
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

int func_604(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_776(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_777(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_605(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_606(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_607(int iParam0)
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

int func_608(bool bParam0)
{
	var uVar0;

	if (!func_778(bParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_609(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_779(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_610()
{
	return !&Global_1911774;
}

void func_611(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_612(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_613(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_614(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_615(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_2046))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_2046, (uParam0->f_107[iParam1 /*113*/])->f_4))
	{
		return 0;
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_2046, (uParam0->f_107[iParam1 /*113*/])->f_4))
	{
		return 1;
	}
	return 0;
}

int func_616(var uParam0, int iParam1)
{
	int iVar0;

	func_780(uParam0, iParam1);
	func_781(uParam0, iParam1);
	func_782(uParam0, iParam1);
	func_783(uParam0, iParam1);
	func_57(uParam0, iParam1, 0);
	func_784(uParam0, iParam1);
	if ((uParam0->f_1696 || uParam0->f_5) || uParam0->f_1697)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 30000);
		PED::_0x15F4732C357B1D6D((uParam0->f_107[iParam1 /*113*/])->f_5, PLAYER::PLAYER_ID(), 9);
		PED::_DISABLE_AMBIENT_LOOK_AT_REQUESTS((uParam0->f_107[iParam1 /*113*/])->f_5, iVar0);
	}
	if (uParam0->f_5 || uParam0->f_1698)
	{
		PED::_0x633F83B301C87994((uParam0->f_107[iParam1 /*113*/])->f_5, 122);
	}
	switch ((uParam0->f_107[iParam1 /*113*/])->f_32.f_1)
	{
		case 1:
			return func_785(uParam0, iParam1);
		case 2:
			return func_786(uParam0, iParam1);
		case 3:
			return func_787(uParam0, iParam1);
		case 4:
			return func_788(uParam0, iParam1);
		case 5:
			return func_789(uParam0, iParam1);
		default:
			break;
	}
	return 1;
}

struct<14> func_617(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_618(bool bParam0)
{
	int iVar0;

	iVar0 = func_500(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_528(923904168, func_665(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_528(923904168, func_665(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_528(923904168, func_665(bParam0), -740156546, 0);
}

void func_619(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_620(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_500(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_621(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_711(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_369(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_500(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_622(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_242() == -1)
	{
		if (func_350(43))
		{
			if (func_361(bParam0, 412399755))
			{
				func_559(-1791518714);
				if (func_560() == 0)
				{
					func_504(0, 10);
					iVar0 = func_790(bParam0, iParam1, 1);
					if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
					{
						if (func_562(bParam0) < func_563(bParam0))
						{
							func_357(43, bParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_350(44))
		{
			if (func_361(bParam0, 709057512))
			{
				func_559(-2087881550);
				if (func_560() == 1)
				{
					func_504(0, 10);
					iVar0 = func_790(bParam0, iParam1, 2);
					if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
					{
						if (func_562(bParam0) < func_563(bParam0))
						{
							func_357(43, bParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_350(45))
		{
			if (func_361(bParam0, -1478961327))
			{
				func_559(1908068621);
				if (func_560() == 2)
				{
					func_504(0, 10);
					iVar0 = func_790(bParam0, iParam1, 4);
					if (((bParam0 == 2116770557 || bParam0 == -651064726) || bParam0 == -404270094) || bParam0 == 2093126853)
					{
						if (func_562(bParam0) < func_563(bParam0))
						{
							func_357(43, bParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_350(46))
		{
			if (func_361(bParam0, -1238404098))
			{
				func_559(1611247019);
				if (func_560() == 3)
				{
					func_504(0, 10);
					iVar0 = func_790(bParam0, iParam1, 8);
					if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
					{
						if (func_562(bParam0) < func_563(bParam0))
						{
							func_357(43, bParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_350(47))
		{
			if (func_361(bParam0, 1160548794))
			{
				func_559(1319635688);
				if (func_560() == 4)
				{
					func_504(0, 10);
					iVar0 = func_790(bParam0, iParam1, 16);
					if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
					{
						if (func_562(bParam0) < func_563(bParam0))
						{
							func_357(43, bParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_623(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_624(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_625(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < &Global_1898438;
}

int func_626(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_627(int iParam0)
{
	return (func_791(iParam0, 4) || func_791(iParam0, 5));
}

int func_628(int iParam0)
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

int func_629(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_630(int iParam0)
{
	int iVar0;
	int iVar1;

	func_792(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_631(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		TASK::_0x81948DFE4F5A0283(*uParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1));
	}
}

bool func_632(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_633(int iParam0, bool bParam1)
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

int func_634(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;

	if (!func_108(iParam1))
	{
		return 0;
	}
	iVar0 = func_109(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_125(iVar0, 0)) || (bParam3 && !func_55(iParam1)))
	{
		if (bParam2)
		{
			if (func_231(iParam1, 1) != 0)
			{
				iVar0 = func_793(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_125(iVar0, 0))
	{
		*uParam0 = 2;
		((*Global_1360165)[iParam1 /*1157*/])->f_70.f_2 = 0;
		func_794(iParam1, iVar0);
		func_795(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

var func_635()
{
	return (((((((((func_641(3) || func_641(5)) || func_641(2)) || func_641(1)) || func_641(9)) || func_641(6)) || func_641(17)) || func_641(8)) || func_641(21)) || func_641(4));
}

int func_636(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if ((uParam0->f_107[iVar0 /*113*/])->f_1 == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_637(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_378(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_638(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return 0;
	}
	return 1;
}

int func_639(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		return func_127(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_125(func_248(iParam0), 0))
		{
			return 0;
		}
	}
	if (!func_796(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_127(iParam0, 44, 1))
	{
		return 0;
	}
	return 1;
}

int func_640(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!func_797(iParam0))
	{
		return 0;
	}
	if (func_263(iParam0, -2147483648))
	{
		return 1;
	}
	if (func_263(iParam0, 1073741824 /* Float: 2f */))
	{
		return 1;
	}
	iVar0 = func_798(iParam1);
	if (iVar0 < ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		return 1;
	}
	if (iVar0 == ((*Global_1360165)[iParam0 /*1157*/])->f_22)
	{
		if (bParam2)
		{
			return 1;
		}
		if (!func_263(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_641(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_642(var uParam0, var uParam1)
{
	return (*uParam0 && uParam1) != 0;
}

int func_643(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_640(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_140 = (((*Global_1360165)[iParam0 /*1157*/])->f_140 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_141 = (((*Global_1360165)[iParam0 /*1157*/])->f_141 || iParam1);
		((*Global_1360165)[iParam0 /*1157*/])->f_142 = &Global_1899515;
		func_31(&(((*Global_1360165)[iParam0 /*1157*/])->f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

int func_644(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_54(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_11)
	{
		case 0:
			if (func_127(iParam0, 2, 1))
			{
				func_107(iParam0, 2, 1);
			}
			if (func_235(iParam0, 16, 1))
			{
				if ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD()
				{
					if (bParam14)
					{
						func_59(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1360165)[iParam0 /*1157*/])->f_129, false))
					{
					}
					else
					{
						func_60(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_125(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_125(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_799(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_800(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				((*Global_1360165)[iParam0 /*1157*/])->f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_800(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
				}
			}
			if (!func_127(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_801(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_800(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_107(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_106(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_802(iParam0, 0, 0, 1);
			}
			func_107(iParam0, 33, 1);
			func_107(iParam0, 34, 1);
			func_107(iParam0, 29, 1);
			if (!func_228(vVar0) && bParam7)
			{
				func_800(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_800(iParam0, 4);
			}
			else
			{
				func_800(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_799(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_803(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_800(iParam0, 4);
			}
			else
			{
				func_800(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = (Global_40.f_4942[iParam0 /*60*/])->f_4;
					}
				}
				if (func_804(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						func_805(iParam0, iParam13, 0);
						func_806(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_127(iParam0, 25, 0))
						{
							func_107(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_800(iParam0, 5);
						((*Global_1360165)[iParam0 /*1157*/])->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_800(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_800(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				func_800(iParam0, 6);
			}
			break;
		case 6:
			if (func_125(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_807(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_304(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_800(iParam0, 7);
		case 7:
			func_106(iParam0, bParam9, bParam15, 0);
			func_122(iParam0, 4, bParam11);
			func_124(iParam0);
			if (bParam20)
			{
				if (func_303(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_808(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			(Global_40.f_4942[iParam0 /*60*/])->f_4 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			func_800(iParam0, 0);
			func_435(iParam0, 16, 1);
			func_107(iParam0, 44, 1);
			((*Global_1360165)[iParam0 /*1157*/])->f_1156 = 0;
			((*Global_1360165)[iParam0 /*1157*/])->f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_645(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_646(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if ((func_133(iParam0, 1) && !func_62(iParam0)) && func_134(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_809(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_647(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_648(int iParam0)
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

void func_649(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_810(iParam0, iParam1))
		{
			if (func_811(iParam0, iParam1))
			{
				if (func_812(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_813(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
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

void func_650(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_651(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_652(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

int func_653()
{
	int iVar0;
	int iVar1;

	if (!TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 0;
	}
	iVar0 = TASK::_0x05A0100EA714DB68(Global_35, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return 0;
	}
	if (((iVar1 == joaat("p_mugcoffee01x") || iVar1 == joaat("p_bottlejd01x")) || iVar1 == -686064834) || iVar1 == joaat("p_bowl04x_stew"))
	{
		return 0;
	}
	return 1;
}

bool func_654()
{
	return MISC::IS_BIT_SET(Global_1357549->f_1893, 0);
}

void func_655(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_227(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_656(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_657(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

Vector3 func_658()
{
	if (func_637(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_637(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

bool func_659(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_660(int iParam0)
{
	if (func_242() != -1)
	{
		if (func_591(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_591(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_591(iParam0, 65536) && !func_591(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_591(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_591(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_662(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_663()
{
	return Global_1905944->f_5694;
}

int func_664(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_340(bParam0, 0))
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

struct<4> func_665(bool bParam0)
{
	return func_528(joaat("character"), func_814(), -1591664384, bParam0);
}

int func_666(bool bParam0, bool bParam1)
{
	if (func_365(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_495(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_667(bool bParam0)
{
	int iVar0;

	iVar0 = func_500(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_528(271701509, func_665(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_528(271701509, func_665(bParam0), 12999093, 0);
}

int func_668(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_365(bParam0);
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

int func_669(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_500(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_670(bool bParam0)
{
	if (!func_340(*bParam0, 0))
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

int func_671(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_493(bParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_525((375 + iVar29), 1);
		if (func_526(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_527(bParam0, &Var6, iVar5);
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

int func_672(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_528(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_500(bParam6), &Var0, 0);
	return uVar4;
}

int func_673(int iParam0)
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

float func_674(int iParam0)
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
			return func_815(iParam0);
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
			return func_815(iParam0);
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
			return func_815(iParam0);
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

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_363(18);
		case 2:
			return func_363(20);
		case 1:
			return func_363(19);
		default:
			break;
	}
	return 1;
}

int func_676(int iParam0)
{
	return func_816(&(Global_40.f_11095.f_11[iParam0]));
}

void func_677(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_242() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_363(31))
	{
		return;
	}
	iVar0 = func_676(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_676(iParam0);
	if (func_817(iParam0) && func_818(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_819(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_820(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_334(func_821(iParam0), 0);
					}
					func_822(iParam0, iVar2, iVar3);
					func_823(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_678(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_679(int iParam0)
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

void func_680(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_681(int iParam0, var uParam1)
{
	if (!func_824(iParam0))
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

int func_682()
{
	return func_825(Global_40.f_12018);
}

int func_683()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_506(iVar1);
		if (func_391(bVar2, 1, 0) || func_689(func_688(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_684()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_826(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_685()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_694(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_686()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_687(int iParam0)
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

int func_688(bool bParam0)
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

bool func_689(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_690(int iParam0)
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

int func_691(int iParam0)
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

int func_692(int iParam0)
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

char* func_693(bool bParam0)
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

bool func_694(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_695(int iParam0)
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

char* func_696(int iParam0)
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

int func_697(bool bParam0)
{
	if (func_827(bParam0) && func_391(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_828(bParam0) && func_829(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_698(bool bParam0)
{
	if (!func_340(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_409(bParam0));
}

int func_699(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

void func_700(bool bParam0)
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

void func_701(int iParam0)
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

void func_702(bool bParam0)
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

void func_703(bool bParam0)
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

void func_704(bool bParam0)
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

void func_705(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_706(bool bParam0)
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

void func_707(bool bParam0)
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

int func_708(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_576(iParam0, 1) /*3*/]);
}

void func_709()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_830();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_368(joaat("weapon_revolver_cattleman_john"));
		func_415(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_368(joaat("weapon_melee_knife_john"));
		func_415(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_710(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_500(0);
	*uParam1 = { func_528(bParam0, func_618(0), iParam3, 0) };
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

int func_711(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

int func_712(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_713(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

int func_714(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_493(bParam0, 1, 0) };
	return func_575(Var0.f_4);
}

int func_715(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_716(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_576(func_831(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_365(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_717(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == &Global_1946804->f_57[func_576(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_580(524288))
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

int func_718(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_832(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_719(int iParam0)
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

int func_720(int iParam0)
{
	return func_833(iParam0, -1);
}

bool func_721(int iParam0, bool bParam1)
{
	return func_327(func_30(), iParam0, bParam1);
}

int func_722()
{
	if (func_536())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_723(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_834((Global_40.f_4283.f_325 + iParam0));
}

void func_724(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_722())
	{
		func_609(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_609(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_725(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_835(iParam0, 1);
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

void func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_835(iParam0, 1);
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

void func_728()
{
	func_727(-939420910);
	func_727(-1187950766);
	func_727(356365161);
	func_727(753127042);
	func_727(-2038424081);
	func_727(1884271742);
	func_727(459290420);
}

void func_729()
{
	func_727(704802028);
	func_727(588987611);
	func_727(2008888900);
	func_727(1649996811);
	func_727(227918160);
	func_727(168171957);
	func_727(1193080109);
	func_727(-491981251);
	func_727(-639037538);
	func_727(-618620429);
}

bool func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_835(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_731(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_732(int iParam0)
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

void func_733(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_734(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_735(int iParam0, int iParam1)
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

void func_736()
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

void func_737(int iParam0)
{
	func_744(iParam0, 8, 6);
}

void func_738(int iParam0)
{
	func_836(&(Global_1946804->f_2589), iParam0);
}

void func_739(int iParam0, int iParam1)
{
	func_837(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_740(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_741(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_365(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_838(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_739(iVar1, iVar3);
		}
	}
	if (func_601(-1586649372) && func_838(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_739(iVar1, iVar3);
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
						func_739(iVar1, iVar3);
					}
				}
			}
			func_839(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_839(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_739(iVar1, iVar3);
					}
				}
				Jump @1174; //curOff = 525
				func_839(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_739(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_739(iVar1, iVar3);
					}
				}
				Jump @1174; //curOff = 656
				func_839(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1174; //curOff = 691
				func_839(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_739(iVar1, iVar3);
					}
				}
				Jump @1174; //curOff = 786
				func_839(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1174; //curOff = 807
				if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_739(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_739(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_365(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_739(iVar1, iVar3);
						}
					}
				}
				Jump @1174; //curOff = 1029
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_361(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1174; //curOff = 1114
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_365(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_365(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_739(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_365(&(uParam0->f_1[iVar1 /*3*/])) || func_361(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_739(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_742(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_840(0);
	if (iParam2 != 0 && func_841(bParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_842(bParam0, func_735(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_743(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_242() != -1;
	iVar7 = func_840(0);
	if (func_580(32768))
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
			iVar5 = func_735(iVar0, 1);
			if (func_843(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_843(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_717(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_844(uParam0);
				if (iVar3 > 0)
				{
					if (!func_580(524288))
					{
						func_746(524288);
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
							iVar5 = func_735(iVar0, 1);
							if (func_843(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_843(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_717(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_739(iVar0, iParam2);
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
					func_749(524288);
				}
			}
		}
	}

void func_744(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_576(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_576(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_576(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_745(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_845(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_242() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_846(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_768(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_768(Global_40.f_7729);
				Global_1946804->f_1378 = func_768(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_847(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_848(0, 1);
	}
}

void func_746(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_747(struct<4> Param0)
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
			if (func_849(Param0))
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
			func_850(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_746(8);
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
			if (func_849(Param0))
			{
				return;
			}
			func_850(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_746(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_584(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_748(var uParam0)
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

void func_749(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_750(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_751(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_849(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_849(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_850(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_746(8);
}

int func_752()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_753(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_754()
{
	float fVar0;
	int iVar1;

	fVar0 = func_851(13);
	iVar1 = func_852(fVar0);
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

float func_755()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_756()
{
	if (func_536())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_757()
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

float func_758()
{
	return Global_1955565->f_3;
}

void func_759(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_853(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_760(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_853(iParam0, 2, 0, 0);
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

float func_761(float fParam0, float fParam1, float fParam2)
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

bool func_762()
{
	return func_851(12) <= -99f;
}

bool func_763()
{
	return func_851(12) >= 99f;
}

int func_764()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_365(bVar1) == -999503751)
		{
			if (func_854() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_765(int iParam0)
{
	if (!func_596(iParam0))
	{
		return 0;
	}
	if (func_769(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_766(int iParam0)
{
	if (!func_596(iParam0))
	{
		return 0;
	}
	if (func_769(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_767(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_596(iParam0))
	{
		return;
	}
	if (!func_766(iParam0))
	{
		func_772(iParam0, 2);
		if (bParam2)
		{
			if (!func_262(0, 0, 1))
			{
				func_504(1, 4);
			}
		}
		if ((!func_770() && !bParam1) && !func_262(0, 0, 1))
		{
			func_771(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_855(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_768(int iParam0)
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

bool func_769(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_770()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_771(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_772(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_773(int iParam0, bool bParam1)
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

void func_774(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_856(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_364(50);
			}
			else
			{
				func_364(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_364(51);
			}
			else
			{
				func_364(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_857(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_396();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_396();
			}
			break;
		case 3:
			func_364(24);
			if (bParam1)
			{
				if (!func_857(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_396();
				}
			}
			break;
	}
}

void func_775(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_858(0))
			{
				iVar0++;
			}
			if (func_858(2))
			{
				iVar0++;
			}
			if (func_858(4))
			{
				iVar0++;
			}
			if (!func_859(16))
			{
				if (iVar0 == 1)
				{
					func_860();
					func_334(456, 1);
					func_861(16);
				}
			}
			if (!func_859(32))
			{
				if (iVar0 >= 3)
				{
					func_860();
					func_334(456, 1);
					func_861(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_858(1))
			{
				iVar0++;
			}
			if (func_858(3))
			{
				iVar0++;
			}
			if (func_858(7))
			{
				iVar0++;
			}
			if (!func_859(1))
			{
				if (iVar0 == 1)
				{
					func_862();
					func_334(457, 1);
					func_861(1);
				}
			}
			if (!func_859(2))
			{
				if (iVar0 >= 3)
				{
					func_862();
					func_334(457, 1);
					func_861(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_858(5))
			{
				iVar0++;
			}
			if (func_858(6))
			{
				iVar0++;
			}
			if (func_858(8))
			{
				iVar0++;
			}
			if (!func_859(4))
			{
				if (iVar0 == 1)
				{
					func_863();
					func_334(455, 1);
					func_861(4);
				}
			}
			if (!func_859(8))
			{
				if (iVar0 >= 3)
				{
					func_863();
					func_334(455, 1);
					func_861(8);
				}
			}
			break;
	}
}

void func_776(var uParam0)
{
	func_603(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_603(uParam0, 617531372);
	}
	else
	{
		func_603(uParam0, 291123060);
	}
}

void func_777(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_864(uParam0))
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

int func_778(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_779(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

void func_780(var uParam0, int iParam1)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD((uParam0->f_107[iParam1 /*113*/])->f_5))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_23)))
	{
		PED::_0xAAB050DA48B57978((uParam0->f_107[iParam1 /*113*/])->f_5, &((uParam0->f_107[iParam1 /*113*/])->f_32.f_23), (uParam0->f_107[iParam1 /*113*/])->f_32.f_27, -1, 4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_28)))
	{
		PED::_0x89F5E7ADECCCB49C((uParam0->f_107[iParam1 /*113*/])->f_5, &((uParam0->f_107[iParam1 /*113*/])->f_32.f_28));
	}
	fVar0 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_35;
	if (fVar0 > 0f)
	{
		func_329((uParam0->f_107[iParam1 /*113*/])->f_1, fVar0);
	}
}

void func_781(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	iVar0 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_36;
	if (iVar0 < 0)
	{
		return;
	}
	sVar1 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_37;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	uVar2 = (uParam0->f_107[iParam1 /*113*/])->f_5;
	uVar3 = (uParam0->f_107[iVar0 /*113*/])->f_5;
	iVar4 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_38;
	func_865(sVar1, uVar2, uVar3, iVar4);
}

void func_782(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = &(uParam0->f_107[iParam1 /*113*/])->f_32.f_16[iVar0];
		if (iVar1 >= 0 && iVar1 < uParam0->f_1711)
		{
			iVar2 = (uParam0->f_1711[iVar1 /*15*/])->f_10;
			sVar3 = (uParam0->f_1711[iVar1 /*15*/])->f_11;
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				PED::_0x2B02DB082258625F((uParam0->f_107[iParam1 /*113*/])->f_5, iVar2, sVar3, (uParam0->f_107[iParam1 /*113*/])->f_32.f_2, (uParam0->f_107[iParam1 /*113*/])->f_32.f_3, 1);
			}
		}
		iVar0++;
	}
}

void func_783(var uParam0, int iParam1)
{
	if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_22 != 0)
	{
		PED::_0xD65FDC686A031C83((uParam0->f_107[iParam1 /*113*/])->f_5, (uParam0->f_107[iParam1 /*113*/])->f_32.f_22, 10f);
	}
}

void func_784(var uParam0, int iParam1)
{
	if (!func_54((uParam0->f_107[iParam1 /*113*/])->f_1))
	{
		return;
	}
	func_866((uParam0->f_107[iParam1 /*113*/])->f_1, (uParam0->f_107[iParam1 /*113*/])->f_32.f_39);
}

int func_785(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;

	if ((uParam0->f_107[iParam1 /*113*/])->f_1 == 12)
	{
		return 0;
	}
	fVar6 = 100f;
	switch (func_24())
	{
		case 1:
			iVar0 = 1;
			iVar1 = 10;
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 21;
			break;
		case 3:
			iVar0 = 22;
			iVar1 = 33;
			break;
		case 6:
			iVar0 = 34;
			iVar1 = 37;
			break;
		default:
			return 0;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		vVar3 = { func_867(iVar2) };
		iVar8 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar3, 2025402643, 1f, 1, 0);
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar8))
		{
		}
		else
		{
			fVar9 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_8;
			if (fVar9 == 0f)
			{
				fVar9 = ENTITY::GET_ENTITY_HEADING((uParam0->f_107[iParam1 /*113*/])->f_5);
			}
			vVar10 = { func_868(fVar9) };
			vVar13 = { func_869(ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iParam1 /*113*/])->f_5, true, false), vVar3, 1065353216 /* Float: 1f */) };
			fVar16 = MISC::ABSF((vVar10.x - vVar13.x));
			fVar17 = MISC::ABSF((vVar10.y - vVar13.y));
			fVar18 = (fVar16 + fVar17);
			if (fVar18 < fVar6)
			{
				fVar6 = fVar18;
				iVar7 = iVar8;
			}
		}
		iVar2++;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar7))
	{
		return 0;
	}
	iVar19 = 0;
	if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_2 != 0)
	{
		iVar19 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_2;
	}
	TASK::_TASK_USE_SCENARIO_POINT((uParam0->f_107[iParam1 /*113*/])->f_5, iVar7, 0, 0, 1, false, iVar19, 0, -1082130432, 0);
	return 1;
}

int func_786(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> Var1;

	iVar0 = (uParam0->f_107[iParam1 /*113*/])->f_5;
	Var1 = { (uParam0->f_107[iParam1 /*113*/])->f_32 };
	if (Var1.f_10)
	{
		if (func_228(Var1.f_5))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, Var1.f_2, 0, 0, MISC::GET_HASH_KEY(Var1.f_3), (uParam0->f_107[iParam1 /*113*/])->f_32.f_11, (uParam0->f_107[iParam1 /*113*/])->f_32.f_12);
		}
		else
		{
			if (Var1.f_9)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), 0);
			}
			TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, Var1.f_2, Var1.f_5, Var1.f_8, 0, 0, 1, Var1.f_3, (uParam0->f_107[iParam1 /*113*/])->f_32.f_11, (uParam0->f_107[iParam1 /*113*/])->f_32.f_12);
		}
	}
	else
	{
		if (Var1.f_9)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), 0);
		}
		TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, Var1.f_2, Var1.f_5, Var1.f_8, 0, 1, 0, Var1.f_3, -1082130432, 0);
	}
	if (Var1.f_14 && Var1.f_10)
	{
		PED::_0x2208438012482A1A(iVar0, false, false);
	}
	return 1;
}

int func_787(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> Var1;
	int iVar65;
	vector3 vVar66;
	float fVar69;
	int iVar70;
	bool bVar71;

	iVar0 = (uParam0->f_107[iParam1 /*113*/])->f_5;
	Var1 = { (uParam0->f_107[iParam1 /*113*/])->f_32 };
	if (Var1.f_15 >= 0 && Var1.f_15 < 17)
	{
		iVar65 = (uParam0->f_1711[Var1.f_15 /*15*/])->f_10;
		if (ENTITY::DOES_ENTITY_EXIST(iVar65))
		{
			vVar66 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			fVar69 = ENTITY::GET_ENTITY_HEADING(iVar65);
			if (func_228(Var1.f_5))
			{
				Var1.f_5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar65, vVar66) };
			}
			if (Var1.f_8 == 0f)
			{
				Var1.f_8 = (ENTITY::GET_ENTITY_HEADING(iVar0) - fVar69);
			}
			(uParam0->f_107[iParam1 /*113*/])->f_32.f_21 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iVar65, Var1.f_2, Var1.f_5, Var1.f_8, 0, 0, 0);
		}
	}
	else
	{
		if (func_228(Var1.f_5))
		{
			Var1.f_5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		}
		if (Var1.f_8 == 0f)
		{
			Var1.f_8 = ENTITY::GET_ENTITY_HEADING(iVar0);
		}
		if (Var1.f_9)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), 0);
		}
		(uParam0->f_107[iParam1 /*113*/])->f_32.f_21 = TASK::CREATE_SCENARIO_POINT(Var1.f_2, Var1.f_5, Var1.f_8, 0, 0, 0);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iParam1 /*113*/])->f_32.f_21))
	{
		func_296(&((uParam0->f_107[iParam1 /*113*/])->f_32.f_21), 1, (uParam0->f_107[iParam1 /*113*/])->f_32.f_13);
		bVar71 = Var1.f_10;
		if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_12 && bVar71)
		{
			iVar70 = 1;
		}
		func_870(uParam0, iParam1);
		TASK::_TASK_USE_SCENARIO_POINT(iVar0, (uParam0->f_107[iParam1 /*113*/])->f_32.f_21, Var1.f_3, 0, !bVar71, bVar71, 0, 0, (uParam0->f_107[iParam1 /*113*/])->f_32.f_11, iVar70);
		if (Var1.f_14 && Var1.f_10)
		{
			PED::_0x2208438012482A1A(iVar0, false, false);
		}
		return 1;
	}
	return 0;
}

int func_788(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> Var1;
	int iVar65;

	iVar0 = (uParam0->f_107[iParam1 /*113*/])->f_5;
	Var1 = { (uParam0->f_107[iParam1 /*113*/])->f_32 };
	if (func_228(Var1.f_5))
	{
		Var1.f_5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	}
	if (Var1.f_9)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var1.f_5, &(Var1.f_5.f_2), 0);
	}
	(uParam0->f_107[iParam1 /*113*/])->f_32.f_21 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Var1.f_5, Var1.f_2, 1f, 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST((uParam0->f_107[iParam1 /*113*/])->f_32.f_21))
	{
		if ((uParam0->f_107[iParam1 /*113*/])->f_32.f_12 && Var1.f_10)
		{
			iVar65 = 1;
		}
		func_870(uParam0, iParam1);
		TASK::_TASK_USE_SCENARIO_POINT(iVar0, (uParam0->f_107[iParam1 /*113*/])->f_32.f_21, Var1.f_3, 0, !Var1.f_10, Var1.f_10, Var1.f_2, 0, (uParam0->f_107[iParam1 /*113*/])->f_32.f_11, iVar65);
		if (Var1.f_14 && Var1.f_10)
		{
			PED::_0x2208438012482A1A(iVar0, false, false);
		}
		return 1;
	}
	return 0;
}

int func_789(var uParam0, int iParam1)
{
	TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP((uParam0->f_107[iParam1 /*113*/])->f_5, ENTITY::GET_ENTITY_COORDS((uParam0->f_107[iParam1 /*113*/])->f_5, true, false), 1.5f, 0, 0, 0, 1, 0);
	return 1;
}

int func_790(bool bParam0, int iParam1, int iParam2)
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
	iVar1 = func_562(bVar9);
	iVar2 = func_562(bVar10);
	iVar3 = func_562(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_562(bVar12);
	}
	iVar5 = func_563(bVar9);
	iVar6 = func_563(bVar10);
	iVar7 = func_563(bVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_563(bVar12);
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
	if (iParam2 != 2)
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

int func_791(int iParam0, int iParam1)
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

int func_792(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_871(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_793(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;

	if (!func_108(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = func_233(iParam0, 1);
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12)
	{
		case 0:
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			((*Global_1360165)[iParam0 /*1157*/])->f_125 = 0;
			if (func_125(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_236(iParam0, 3);
			}
			else
			{
				if (!func_872(iParam0) && func_873(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(func_231(iParam0, 1), &uVar4);
				}
				func_111(iParam0, 256, 0);
				func_236(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_874();
				}
				if (bParam2 && !func_228(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_875(iParam0, vVar0, iParam6, iParam10))
				{
					return func_874();
				}
				if (func_125(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != ((*Global_1360165)[iParam0 /*1157*/])->f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(((*Global_1360165)[iParam0 /*1157*/])->f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, true);
					func_236(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_125(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_236(iParam0, 1);
				return func_874();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(((*Global_1360165)[iParam0 /*1157*/])->f_124))
			{
				func_236(iParam0, 3);
			}
			break;
		case 3:
			if (!func_125(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
			{
				func_236(iParam0, 1);
				return func_874();
			}
			if (bParam7)
			{
				if (!func_876(iParam0, ((*Global_1360165)[iParam0 /*1157*/])->f_124, 1))
				{
					return func_874();
				}
			}
			if ((bParam2 && !func_228(vVar0)) && !func_229(vVar0, ENTITY::GET_ENTITY_COORDS(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::DETACH_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_803(((*Global_1360165)[iParam0 /*1157*/])->f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					if (func_127(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_59(iParam0, 39, 1);
				func_111(iParam0, 8, 1);
				func_111(iParam0, 64, 0);
				((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(((*Global_1360165)[iParam0 /*1157*/])->f_124, false);
			func_877(((*Global_1360165)[iParam0 /*1157*/])->f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(((*Global_1360165)[iParam0 /*1157*/])->f_124, 1);
			}
			sVar12 = func_878(iParam0, func_306());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_231(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_70 = ((*Global_1360165)[iParam0 /*1157*/])->f_124;
			((*Global_1360165)[iParam0 /*1157*/])->f_124 = 0;
			func_107(iParam0, 40, 0);
			func_111(iParam0, 32, 0);
			func_236(iParam0, 0);
			return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
	}
	return func_874();
}

void func_794(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((IntToFloat(iVar1) * 0.1f)), BUILTIN::ROUND((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_795(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_879(func_109(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_880(iParam0);
	}
	else
	{
		func_881(iParam0);
	}
	if (bParam2)
	{
		func_882(iParam0);
	}
	else
	{
		func_883(iParam0);
	}
}

int func_796(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (func_235(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_235(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_235(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_127(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_118(iParam0))
	{
		return 0;
	}
	if (func_264(iParam0))
	{
		if (!bParam2)
		{
			return 0;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549->f_1497 == iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_797(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_140 != 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_141 != 0)
	{
		return 1;
	}
	return 0;
}

int func_798(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_799(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_248(iParam0);
	if (!func_54(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xF1C03A5352243A30(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	}
}

void func_800(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_11 = iParam1;
}

int func_801(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(89040947);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(89040947))
			{
				return 0;
			}
			if (Global_1359489->f_9 != -1)
			{
				return 0;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_884(iParam0, iParam9, bParam7, 1);
				}
				else if ((((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2 == (Global_40.f_4942[iParam0 /*60*/])->f_59) && (func_885(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2) || func_505(((*Global_1360165)[iParam0 /*1157*/])->f_4.f_2)))
				{
					iParam4 = ((*Global_1360165)[iParam0 /*1157*/])->f_4.f_1;
				}
				else
				{
					iParam4 = func_884(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (((*Global_1360165)[iParam0 /*1157*/])->f_63 != iParam4 && func_886(((*Global_1360165)[iParam0 /*1157*/])->f_63))
				{
					if (!func_887(iParam0, 0))
					{
						func_59(iParam0, 25, 0);
					}
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_4 = { func_888(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, (Global_40.f_4942[iParam0 /*60*/])->f_59, bParam11) };
			if (!bParam6)
			{
				func_107(iParam0, 44, 1);
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 2;
		case 2:
			if (!func_125(func_248(iParam0), 0))
			{
				return 0;
			}
			if (iParam5 && iParam10)
			{
				if (!func_125(func_109(iParam0), 0))
				{
					return 0;
				}
			}
			((*Global_1360165)[iParam0 /*1157*/])->f_3 = 3;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_802(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_889(iParam0, bParam3);
	}
	else
	{
		func_890(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_891(iParam0, bParam3);
	}
	else
	{
		func_892(iParam0, bParam3);
	}
}

void func_803(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		uVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_893(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_894(iParam0))
	{
		if (func_895(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_246(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_803(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_803(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_246(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_246(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_246(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_246(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_246(iParam5, 129))
	{
		if (func_246(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_246(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, 1, func_246(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_246(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), uVar3, 0, 0);
		}
		if (func_894(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_246(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_246(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_804(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_54(iParam0))
	{
		return 0;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return 1;
	}
	uVar0 = func_896(iParam0, iParam1);
	return uVar0;
}

void func_805(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (!func_804(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_4942[iParam0 /*60*/])->f_3 = iParam1;
	if (bParam2)
	{
		func_59(iParam0, 25, 1);
	}
}

void func_806(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_897(iParam2))
		{
			iVar0 = func_898(iParam2, -1);
			if (func_810(iParam1, iVar0))
			{
				if (func_811(iParam1, iVar0))
				{
					if (func_812(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_813(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		func_899(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, 0, 1, 1, 1, 0);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, 1, 1);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_59(iParam0, 66, 0);
		}
	}
}

void func_807(int iParam0)
{
	func_900(iParam0);
	func_901(iParam0, 0);
}

void func_808(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if ((Global_40.f_4942[iParam0 /*60*/])->f_3 == -1341683964)
			{
				func_902(iParam1, joaat("weapon_revolver_cattleman_sadie"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_902(iParam1, joaat("weapon_revolver_cattleman_sadie_dualwield"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_809(int iParam0, bool bParam1)
{
	if (func_242() != -1)
	{
		return false;
	}
	if (!func_61(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_139(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_252(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_0xEB98B38CA60742D7(func_139(iParam0));
}

bool func_810(int iParam0, int iParam1)
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

int func_811(int iParam0, int iParam1)
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

int func_812(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_810(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_813(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_814()
{
	struct<4> Var0;

	return Var0;
}

float func_815(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_673(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_816(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_903(iVar6) - func_903(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_816(float fParam0)
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

int func_817(int iParam0)
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

int func_818(int iParam0)
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

int func_819(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_816(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_903(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_903(iVar0 + 1));
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

int func_820(int iParam0)
{
	int iVar0;

	if (func_904(iParam0, &iVar0))
	{
		return func_903(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_905())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_905())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_905())
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

int func_821(int iParam0)
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

void func_822(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_906(iParam0));
	sVar4 = func_908(func_907(iVar3, iParam2));
	sVar6 = func_909(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_910(iParam0));
	iVar8 = func_911(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_912(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_515(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_913(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_823(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_824(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_825(int iParam0)
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

bool func_826(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_827(bool bParam0)
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

int func_828(bool bParam0)
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

int func_829(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_914(&iVar0, 0, iVar95, &Var1) && !func_914(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_915(iVar0, &Var1);
			if (func_340(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_830()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_916(Global_35, &uVar0);
	Var30 = { func_665(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_917(0);
	func_918(7);
	func_919(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_598() == 1160113249)
	{
		func_919(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_919(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_920(Global_35, &uVar0);
}

int func_831(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_575(iVar0);
}

int func_832(int iParam0)
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

int func_833(int iParam0, int iParam1)
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
		iParam1 = func_500(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_142(&uVar6, iVar0);
	func_143(&uVar6, iVar1);
	func_144(&uVar6, iVar2);
	func_145(&uVar6, iVar3);
	func_146(&uVar6, iVar4);
	func_147(&uVar6, iVar5);
	return uVar6;
}

void func_834(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_605(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_835(int iParam0, int iParam1)
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

void func_836(var uParam0, int iParam1)
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
			if ((func_921(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_921(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_922(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_837(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_923(uParam0, 1))
	{
		func_924(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_838(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_839(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_739(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_739(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_739(iVar2, iVar0);
		}
	}
}

int func_840(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_598();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_841(bool bParam0, var uParam1, int iParam2, bool bParam3)
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

int func_842(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_843(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_576(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_844(var uParam0)
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

void func_845(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_242() == -1)
	{
		func_925(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_926(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_846(int iParam0, int iParam1)
{
	if (func_242() == -1)
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

void func_847(int iParam0, bool bParam1, int iParam2)
{
	func_927(&(Global_1946804->f_1378), iParam0);
	func_928(2, iParam0, 6);
	if (bParam1)
	{
		func_848(0, 1);
	}
}

void func_848(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_929(0);
	}
	if (bParam0)
	{
		func_746(8);
		func_746(512);
	}
	else
	{
		func_746(8);
		func_746(16);
	}
}

bool func_849(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_850(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_851(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_852(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_853(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_612(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_612(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_854()
{
	return Global_1946804->f_1497;
}

char* func_855(int iParam0)
{
	bool bVar0;

	bVar0 = func_768(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_698(bVar0);
}

int func_856(bool bParam0)
{
	int iVar0;

	if (func_930(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_931(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_932(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_933(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_857(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_391(func_934(iVar0, iParam0), 1, 0))
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

int func_858(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_391(func_935(iVar0, iParam0), 1, 0))
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

bool func_859(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_860()
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	func_415(1654063339, 1, 752097756);
	iVar0 = func_676(1);
	func_822(1, iVar0, 0);
}

void func_861(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_862()
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	func_415(1623931083, 1, 752097756);
	iVar0 = func_676(2);
	func_822(2, iVar0, 0);
}

void func_863()
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	func_415(-1845241476, 1, 752097756);
	iVar0 = func_676(0);
	func_822(0, iVar0, 0);
}

int func_864(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_865(char* sParam0, var uParam1, var uParam2, int iParam3)
{
	StringCopy(&(Global_1327590->f_19727), sParam0, 32);
	Global_1327590->f_19727.f_4 = uParam1;
	Global_1327590->f_19727.f_5 = uParam2;
	Global_1327590->f_19727.f_6 = &Global_1899515;
	func_31(&(Global_1327590->f_19727.f_6), 0, iParam3, 0, 0, 0, 0, 0);
}

void func_866(int iParam0, int iParam1)
{
	func_936(iParam0);
	func_31(Global_1327590->f_19692[iParam0], 0, iParam1, 0, 0, 0, 0, 0);
}

Vector3 func_867(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -94.237f, 8.692f, 92.338f;
		case 2:
			return -84.312f, -45.81f, 94.899f;
		case 3:
			return -113.989f, -55.759f, 93.496f;
		case 4:
			return -143.42f, -60.643f, 93.919f;
		case 5:
			return -163.931f, -43.684f, 92.846f;
		case 6:
			return -177.77f, -15.71f, 93.24f;
		case 7:
			return -170.947f, -4.843f, 92.321f;
		case 8:
			return -161.544f, -7.315f, 94.235f;
		case 9:
			return -146.678f, 8.577f, 91.809f;
		case 10:
			return -134.212f, 8.827f, 92.911f;
		case 11:
			return 656.64f, -1176.682f, 44.842f;
		case 12:
			return 673.481f, -1214.576f, 44.693f;
		case 13:
			return 706.966f, -1217.705f, 44.392f;
		case 14:
			return 721.689f, -1231.874f, 44.018f;
		case 15:
			return 725.07f, -1283.583f, 40.983f;
		case 16:
			return 682.755f, -1294.328f, 41.382f;
		case 17:
			return 663.265f, -1294.419f, 40.818f;
		case 18:
			return 622.825f, -1239.264f, 40.581f;
		case 19:
			return 615.845f, -1225.746f, 40.577f;
		case 20:
			return 619.659f, -1204.304f, 40.856f;
		case 21:
			return 635.034f, -1200.382f, 45.856f;
		case 22:
			return 1870.081f, -1844.099f, 41.549f;
		case 23:
			return 1887.662f, -1830.493f, 41.753f;
		case 24:
			return 1907.54f, -1821.734f, 40.839f;
		case 25:
			return 1924.761f, -1866.922f, 40.691f;
		case 26:
			return 1932.487f, -1887.342f, 40.695f;
		case 27:
			return 1909.35f, -1902.705f, 40.716f;
		case 28:
			return 1900.716f, -1905.509f, 41.056f;
		case 29:
			return 1877.415f, -1893.42f, 41.828f;
		case 30:
			return 1853.654f, -1884.278f, 40.895f;
		case 31:
			return 1846.628f, -1874.025f, 41.24f;
		case 32:
			return 1844.923f, -1858.723f, 41.698f;
		case 33:
			return 1849.307f, -1849.839f, 41.6f;
		case 34:
			return 2373.933f, 1330.852f, 105.6879f;
		case 35:
			return 2330.508f, 1336.256f, 105.783f;
		case 36:
			return 2352.173f, 1340.317f, 104.0373f;
		case 37:
			return 2325.463f, 1368.067f, 103.0485f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_868(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_869(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_937(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

void func_870(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	if (!(uParam0->f_107[iParam1 /*113*/])->f_32.f_20)
	{
		return;
	}
	iVar0 = (uParam0->f_107[iParam1 /*113*/])->f_32.f_21;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = &(uParam0->f_107[iParam1 /*113*/])->f_32.f_16[iVar1];
		if (iVar2 >= 0 && iVar2 < uParam0->f_1711)
		{
			if (!(uParam0->f_1711[iVar2 /*15*/])->f_7)
			{
			}
			else
			{
				iVar3 = (uParam0->f_1711[iVar2 /*15*/])->f_10;
				sVar4 = (uParam0->f_1711[iVar2 /*15*/])->f_12;
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					TASK::_0x8360C47380B6F351(iVar0, iVar3, sVar4, 1);
				}
			}
		}
		iVar1++;
	}
}

int func_871(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_872(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	switch (((*Global_1360165)[iParam0 /*1157*/])->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_873(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return 1;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return 1;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return 1;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return 1;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return 1;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return 1;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return 1;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return 1;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return 1;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return 1;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return 1;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return 1;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return 1;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return 1;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return 1;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return 1;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return 1;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return 1;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return 1;
	}
	return 0;
}

int func_874()
{
	return -1;
}

int func_875(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return 0;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_125 <= 300)
		{
			if (PERSCHAR::_0xEB98B38CA60742D7(((*Global_1360165)[iParam0 /*1157*/])->f_126))
			{
				PERSCHAR::_0x49A8C2CD97815215(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
			if (bParam5)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = PERSCHAR::_0x08FC896D2CB31FCC(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = PERSCHAR::_0x0CADC3A977997472(((*Global_1360165)[iParam0 /*1157*/])->f_126, 0);
			}
			PERSCHAR::_0x6759BEE6762E140B(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			((*Global_1360165)[iParam0 /*1157*/])->f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_0xA00DF706C60173D1(func_231(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_124 = func_305(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_0x7B204F88F6C3D287(((*Global_1360165)[iParam0 /*1157*/])->f_126);
			}
		}
		if (!func_125(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			return 0;
		}
		Global_1359489->f_12 = 1;
		func_111(iParam0, 256, 0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_876(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return 0;
	}
	if (func_938(iParam0, 256))
	{
		return 1;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_125(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(iParam1, func_939(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, 0, 1, 1, 1, 0);
	func_111(iParam0, 256, 1);
	return 1;
}

void func_877(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_652(iParam0, func_940(iParam1));
	if (func_938(iParam1, 8))
	{
		POPULATION::_0xF74E134F40192884(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_248(iParam1)))
	{
		PED::_0x931B241409216C1F(func_248(iParam1), iParam0, 0);
		PED::_0xED1C764997A86D5A(func_248(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367, true);
	}
	else
	{
		func_59(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, -1856989775);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	if (func_938(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302, true);
	}
	PED::_0xAE6004120C18DF97(iParam0, 2, 0);
	PED::_0xAE6004120C18DF97(iParam0, 3, 0);
	func_795(iParam1, func_938(iParam1, 8192), func_938(iParam1, 16384), 1);
}

char* func_878(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_879(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_761(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_880(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_941(iVar0);
	func_111(iParam0, 8192, 1);
}

void func_881(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_942(iVar0);
	func_111(iParam0, 8192, 0);
}

void func_882(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_943(iVar0);
	func_111(iParam0, 16384, 1);
}

void func_883(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_944(iVar0);
	func_111(iParam0, 16384, 0);
}

int func_884(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_378(((*Global_1835011)[4 /*74*/])->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_945(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_378(((*Global_1347702)[63 /*49*/])->f_15, 1) || func_505(((*Global_1347702)[63 /*49*/])->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_945(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_378(((*Global_1835011)[14 /*74*/])->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_235(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_945(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_378(((*Global_1347702)[134 /*49*/])->f_15, 1) || func_505(((*Global_1347702)[134 /*49*/])->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_378(((*Global_1835011)[38 /*74*/])->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_945(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_449(747937920, 1) && !func_378(((*Global_1347702)[1 /*49*/])->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_248(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == (Global_40.f_4942[iParam0 /*60*/])->f_3)
			{
				bVar9 = true;
				iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_804(iParam0, iVar8))
	{
		iVar8 = (Global_40.f_4942[iParam0 /*60*/])->f_3;
	}
	return iVar8;
}

int func_885(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_718(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_886(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_887(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_118(iParam0) || func_127(iParam0, 44, 1))
		{
			return false;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), "Sleep");
}

struct<7> func_888(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_889(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_941(iVar0);
	func_59(iParam0, 60, 1);
	if (bParam1)
	{
		func_880(iParam0);
	}
}

void func_890(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_942(iVar0);
	func_107(iParam0, 60, 1);
	if (bParam1)
	{
		func_881(iParam0);
	}
}

void func_891(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_943(iVar0);
	if (iParam0 == 14)
	{
		func_946(iVar0);
	}
	func_59(iParam0, 61, 1);
	if (bParam1)
	{
		func_882(iParam0);
	}
}

void func_892(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_944(iVar0);
	func_107(iParam0, 61, 1);
	if (bParam1)
	{
		func_883(iParam0);
	}
}

int func_893(var uParam0)
{
	return uParam0;
}

bool func_894(int iParam0)
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

int func_895(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_896(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return false;
	}
	func_947(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_65[iVar0]), iVar1);
}

int func_897(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_898(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_948(296923297, iParam1);
			return func_949(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_948(1237718549, iParam1);
			return func_949(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

void func_899(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 1933068772))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam1, 1933068772, 1);
	}
	if (PED::_0xFB4891BD7578CDC1(iParam1, 494009478))
	{
		PED::_SET_PED_COMPONENT_DISABLED(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1 > 0 && func_810(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4096 > 0 && func_810(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 128 > 0 && func_810(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 256 > 0 && func_810(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 512 > 0 && func_810(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1024 > 0 && func_810(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2048 > 0 && func_810(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & -2147483648 > 0 && func_810(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 65536 > 0 && func_810(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16384 > 0 && func_810(iParam1, -1100875244))
	{
		if (PED::_0xFB4891BD7578CDC1(iParam1, -134124598))
		{
			PED::_SET_PED_COMPONENT_DISABLED(iParam1, -134124598, 1);
		}
		if (PED::_0xFB4891BD7578CDC1(iParam1, 2071466316))
		{
			PED::_SET_PED_COMPONENT_DISABLED(iParam1, 2071466316, 1);
		}
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 262144 > 0 && func_810(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 524288 > 0 && func_810(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1048576 > 0 && func_810(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 2097152 > 0 && func_810(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 32768 > 0 && func_810(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 131072 > 0 && func_810(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 4194304 > 0 && func_810(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8388608 > 0 && func_810(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 16777216 > 0 && func_810(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 33554432 > 0 && func_810(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 67108864 > 0 && func_810(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 134217728 > 0 && func_810(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 268435456 > 0 && func_810(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 536870912 > 0 && func_810(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 1073741824 > 0 && func_810(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/])->f_5 & 8192 > 0 && func_810(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_57 = 1;
	}
}

void func_900(int iParam0)
{
	func_950(iParam0, 1);
	func_950(iParam0, 128);
	func_950(iParam0, 256);
	func_950(iParam0, 512);
	func_950(iParam0, 1024);
	func_950(iParam0, 2048);
	func_950(iParam0, 4096);
	func_950(iParam0, 65536);
	func_950(iParam0, 16384);
	func_950(iParam0, 262144);
	func_950(iParam0, 524288);
	func_950(iParam0, 1048576);
	func_950(iParam0, 2097152);
	func_950(iParam0, 32768);
	func_950(iParam0, 131072);
	func_950(iParam0, 134217728);
	func_950(iParam0, 1073741824 /* Float: 2f */);
}

void func_901(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

bool func_902(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_524(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
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
							if (func_524(bVar4) && bVar4 != bVar0)
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
	if (func_242() == -1 && !func_523(bVar0))
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
				if (func_523(joaat("weapon_repeater_carbine")))
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
		if (iParam0 != Global_35 && func_524(bVar0))
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
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 3;
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
		func_370(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_951(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_533(bVar0))
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

int func_903(int iParam0)
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

int func_904(int iParam0, int iParam1)
{
	return 0;
}

int func_905()
{
	return 0;
}

int func_906(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_500(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_500(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_500(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_907(int iParam0, int iParam1)
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

var func_908(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_909(int iParam0)
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

char* func_910(int iParam0)
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

int func_911(int iParam0)
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

int func_912(int iParam0)
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

int func_913(int iParam0)
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

int func_914(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_952(iParam1) && !func_953(iParam1))
	{
		iVar0 = func_298(iParam1);
	}
	else
	{
		return 0;
	}
	func_954(uParam3);
	uVar5 = func_955(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, uVar5, 0))
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
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return 1;
}

void func_915(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_956(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_957(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_916(int iParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_524(iVar31))
		{
			(*uParam1)[iVar30] = iVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_917(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_340(iVar1, 0))
		{
			func_958(iVar1, 0, bParam0);
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

void func_918(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_242() == -1)
	{
		func_959(352481484);
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
		if (func_365(bVar2) != -999503751)
		{
			func_960(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_961(bVar2, 0))
		{
			func_962(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_919(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_963(bParam0))
	{
		return;
	}
	iVar0 = func_365(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_964(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_964(bParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_964(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_964(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_964(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_964(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_965(0))
	{
		func_966(bParam0, 1);
		if (func_598() == 1160113249)
		{
			func_966(func_965(-2125499975), 0);
		}
		else
		{
			func_966(func_965(1160113249), 0);
		}
	}
	func_967();
	if (func_968(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_500(0), bParam0, 0);
	}
	func_962(bParam0, bParam3);
	if (bParam2)
	{
		func_848(0, 0);
	}
}

void func_920(int iParam0, var uParam1)
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
				if (func_523(uParam1[iVar0]))
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

bool func_921(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_922(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_923(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_924(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_925(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_926(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_927(var uParam0, int iParam1)
{
	int iVar0;

	if (func_242() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_925(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_926(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_928(int iParam0, int iParam1, int iParam2)
{
	if (func_242() == -1)
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

void func_929(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_930(bool bParam0)
{
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (func_361(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_931(bool bParam0)
{
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (func_361(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_932(bool bParam0)
{
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (func_361(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_933(bool bParam0)
{
	if (!func_340(bParam0, 0))
	{
		return 0;
	}
	if (func_361(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_934(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_969(iParam0);
		case 1:
			return func_970(iParam0);
		case 2:
			return func_971(iParam0);
		case 3:
			return func_972(iParam0);
	}
	return 0;
}

int func_935(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_973(iParam0);
		case 1:
			return func_974(iParam0);
		case 2:
			return func_975(iParam0);
		case 3:
			return func_976(iParam0);
		case 4:
			return func_977(iParam0);
		case 5:
			return func_978(iParam0);
		case 6:
			return func_979(iParam0);
		case 7:
			return func_980(iParam0);
		case 8:
			return func_981(iParam0);
	}
	return 0;
}

void func_936(int iParam0)
{
	Global_1327590->f_19692[iParam0] = func_152();
}

Vector3 func_937(vector3 vParam0)
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

bool func_938(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	return (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1) != 0;
}

int func_939(int iParam0)
{
	return 1268180497;
}

int func_940(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_363(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_363(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_941(int iParam0)
{
	if (func_982(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0), 0);
	}
}

void func_942(int iParam0)
{
	if (func_982(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_943(int iParam0)
{
	if (func_982(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_944(int iParam0)
{
	if (func_982(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

int func_945(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_946(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_118(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

int func_947(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_983(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_948(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_804(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_949(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_950(int iParam0, int iParam1)
{
	(Global_40.f_4942[iParam0 /*60*/])->f_5 = ((Global_40.f_4942[iParam0 /*60*/])->f_5 - ((Global_40.f_4942[iParam0 /*60*/])->f_5 && iParam1));
}

void func_951(int iParam0, bool bParam1, float fParam2)
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

int func_952(int iParam0)
{
	iParam0 = func_461(iParam0);
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

int func_953(int iParam0)
{
	int iVar0;

	iParam0 = func_461(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_952(iParam0))
	{
		return 0;
	}
	iVar0 = func_298(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_954(var uParam0)
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

int func_955(int iParam0)
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

void func_956(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_CARCASS_QUALITY(iParam0);
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

bool func_957(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_958(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_365(iParam0))
	{
		case -2061583405:
			bVar0 = func_984(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_984(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_984(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_984(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_984(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_984(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_967();
	}
	if (bParam1)
	{
		func_848(0, 0);
	}
}

void func_959(int iParam0)
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
	Var2 = { func_617(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_620(&Var2, &iVar0, &iVar1, 0))
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
		func_587(iVar0);
	}
}

void func_960(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_985(iParam2, *uParam0);
	func_986(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_961(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_493(bParam0, 0, 0) };
	Var5 = { func_528(bParam0, Var0, Var0.f_4, 0) };
	if (func_672(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_500(0), &Var5, iParam1);
	return 1;
}

void func_962(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_493(bParam0, 0, 0) };
	Var5 = { func_528(bParam0, Var0, Var0.f_4, 0) };
	if (func_672(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_500(0), &Var5, bParam1);
}

int func_963(bool bParam0)
{
	if (func_242() == -1)
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

int func_964(bool bParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_987(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_961(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = bVar1;
	if (func_365(bParam0) != -999503751)
	{
		func_960(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_965(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_598();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_966(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_493(bParam0, 0, 0) };
	Var5 = { func_528(bParam0, Var0, Var0.f_4, 0) };
	if (func_672(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_500(0), &Var5);
	return 1;
}

void func_967()
{
	int iVar0;

	if (func_242() == -1)
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

bool func_968(int iParam0)
{
	return func_989(func_988(iParam0));
}

int func_969(int iParam0)
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

int func_970(int iParam0)
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

int func_971(int iParam0)
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

int func_972(int iParam0)
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

int func_973(int iParam0)
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

int func_974(int iParam0)
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

int func_975(int iParam0)
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

int func_976(int iParam0)
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

int func_977(int iParam0)
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

int func_978(int iParam0)
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

int func_979(int iParam0)
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

int func_980(int iParam0)
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

int func_981(int iParam0)
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

int func_982(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_983(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

int func_984(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_987(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_365(iParam0) != -999503751)
		{
			func_990(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_365(iParam0) != -999503751)
	{
		func_990(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_961(iParam0, 1);
	return 1;
}

void func_985(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_986(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_991(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_576(func_714(bParam1), 1);
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
		func_992(uParam0);
	}
}

int func_987(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (bParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_988(int iParam0)
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

bool func_989(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_990(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_993(iParam1);
	func_994(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_995(&(uParam0->f_26), iVar1);
		if (func_996(uParam0->f_26, &iVar0))
		{
			func_997(iVar0, iVar1);
		}
	}
}

void func_991(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_998(&(uParam0->f_3));
}

void func_992(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_999(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_993(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_994(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_995(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_991(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_996(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_997(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_998(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_999(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1000(func_598());
	if (*uParam0)
	{
		func_998(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_242() != -1, uParam2);
	*uParam0 = 1;
}

int func_1000(int iParam0)
{
	if (func_242() == -1)
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

