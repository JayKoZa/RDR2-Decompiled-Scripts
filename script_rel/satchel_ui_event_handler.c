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
	var uLocal_14 = 0;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	char* sLocal_28 = NULL;
	int iLocal_29 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<4> Var3;
	var uVar7;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_15 = "mech_skin@BUCK_BUTCHER";
	sLocal_16 = "PBL_BASE";
	sLocal_17 = "PBL_DUMP";
	sLocal_18 = "PBL_DROP_IN";
	sLocal_28 = "beat_gang_camp_reminder";
	iLocal_29 = 23;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar7, HUD::_0x0501D52D24EA8934(1), 1);
	func_2();
	func_3(&uVar0);
	func_4();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_5(&uVar0);
	}
	func_6(1);
	func_8(&uVar0, 2185);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_35) || PED::_0x3E592D0486DEC0F6(Global_35)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || func_9())
		{
			func_10(0);
		}
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if (Global_1935689->f_4)
		{
			func_11();
			func_12();
			func_13(Global_1935689->f_10189);
			if (Global_1935689->f_15 != 0)
			{
				func_14(Global_1935689->f_15);
			}
			func_4();
			Global_1935689->f_4 = 0;
			Global_1935689->f_5 = 0;
			Global_1935689->f_15 = 0;
		}
		if (func_15())
		{
			func_16(Global_1935689->f_10195, &(Var3.f_3), &uVar0);
			func_4();
			func_17(0);
			func_18(0);
			Global_1935689->f_7 = 0;
		}
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var3))
			{
				Global_1935689->f_7 = 0;
				switch (Var3)
				{
					case -1740156697:
						Global_1935689->f_10195 = Var3.f_1;
						switch (Var3.f_2)
						{
							case -1287062382:
								func_19(Var3.f_1, &(Var3.f_3));
								break;
							case -1706653313:
							case 1086195311:
								ATTRIBUTE::_0xD962F8579D702DB5();
								if (!func_20())
								{
									func_16(Var3.f_1, &(Var3.f_3), &uVar0);
								}
								break;
							case -1715238242:
								ATTRIBUTE::_0xD962F8579D702DB5();
								func_21(Var3.f_1, &(Var3.f_3));
								break;
						}
						func_6(2);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_22();
						func_4();
						ATTRIBUTE::_0xD962F8579D702DB5();
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var3.f_2)
						{
							case -1706653313:
							case -594808149:
							case 1086195311:
								if (func_23() || func_24())
								{
									if (func_25(Global_1935689->f_10190, 0, 0, 0, 1, 0, 0))
									{
										func_10(0);
									}
									func_6(4);
								}
								else if (func_26())
								{
									func_6(4);
								}
								else if (!func_27(0))
								{
									func_28();
								}
								else
								{
									func_6(4);
								}
								break;
							case -1193234750: /* GXTEntry: "Discard" */
								func_29(Global_1935689->f_10190, 1);
								break;
							case 301804921:
								if (func_27(0))
								{
									func_6(32);
								}
								else
								{
									func_30(Global_1935689->f_10190);
								}
								break;
							case 1329361007:
								func_6(64);
								break;
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case 922460030:
						func_6(16);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -2075827635:
						func_6(8);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					default:
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_5(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	func_31(iParam1);
	bVar0 = func_32(1);
	if (func_34(uParam0, iParam1, 1, 8373) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(2);
	if (func_34(uParam0, iParam1, 2, 8500) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(8192);
	if (func_34(uParam0, iParam1, 8192, 8513) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = (func_32(4) || func_32(8));
	if (!func_37())
	{
		func_38(4);
		func_38(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_39(81053684) || func_40(4))
		{
			func_38(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_39(-525676072) || func_40(8))
		{
			func_38(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_42(uParam0, iParam1, 0, func_41()))
			{
				if (!bVar0)
				{
					Global_1935496->f_70.f_1 = 1;
				}
				if (bVar1)
				{
					func_43(4);
				}
				if (bVar2)
				{
					func_43(8);
				}
			}
			else
			{
				func_38(4);
				func_38(8);
				if (bVar0)
				{
					Global_1935496->f_70.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_32(16);
	if (func_34(uParam0, iParam1, 16, 9853) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(256);
	if (func_34(uParam0, iParam1, 256, 9866) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(512);
	if (func_34(uParam0, iParam1, 512, 9878) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	bVar0 = func_32(1024);
	if (func_34(uParam0, iParam1, 1024, 9890) != bVar0)
	{
		if (!Global_1935496->f_70.f_1)
		{
			Global_1935496->f_70.f_1 = 1;
		}
	}
	if (((((func_48() || func_49()) || func_50()) || func_51()) || func_52()) || iParam2)
	{
		bVar0 = func_32(16384);
		if (func_34(uParam0, iParam1, 16384, 9984) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(64);
		if (func_34(uParam0, iParam1, 64, 9997) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(32);
		if (func_34(uParam0, iParam1, 32, 10010) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(128);
		if (func_34(uParam0, iParam1, 128, 10023) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(2048);
		if (func_34(uParam0, iParam1, 2048, 10036) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
		bVar0 = func_32(4096);
		if (func_34(uParam0, iParam1, 4096, 10049) != bVar0)
		{
			if (!Global_1935496->f_70.f_1)
			{
				Global_1935496->f_70.f_1 = 1;
			}
		}
	}
	func_59();
}

void func_2()
{
	if (func_52() || (((func_48() || func_49()) || func_50()) || func_51()))
	{
		Global_1935496->f_70 = 1;
		func_60(0);
		if (Global_1935496->f_70.f_1)
		{
			if (!func_27(0))
			{
				if (!Global_1935689->f_4)
				{
					Global_1935689->f_4 = 1;
					Global_1935689->f_5 = 1;
				}
			}
		}
		Global_1935496->f_70.f_1 = 0;
	}
	else if (Global_1935496->f_70)
	{
		func_61();
		Global_1935496->f_70 = 0;
		Global_1935496->f_70.f_1 = 0;
	}
}

int func_3(var uParam0)
{
	if (func_62() == -1)
	{
		func_63();
	}
	(*Global_1911866)[0 /*9*/] = 0;
	func_64(uParam0);
	func_65();
	return 1;
}

void func_4()
{
	if (func_20())
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		INVENTORY::_0x75CFAC49301E134F(Global_1935689->f_10211, 0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10204, func_66(Global_1935689->f_10189));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10205, func_67(Global_1935689->f_10189));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10224, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10220, false);
		if (func_27(0) || func_68())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10206, "");
		}
		func_69(Global_1935689->f_10189);
	}
}

void func_5(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1935689->f_7 = 0;
	Global_1935689->f_19 = 0;
	Global_1935689->f_14 = -1;
	Global_1935689->f_15 = 0;
	Global_1935689->f_1224 = 0;
	func_17(0);
	func_70(822208792);
	func_71(0);
	func_72(0);
	func_73(uParam0);
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		func_74(0);
	}
	func_75(1);
	func_76(&(Global_1935689->f_10186), 1);
	func_76(&(Global_1935689->f_10186), 2);
	func_76(&(Global_1935689->f_10186), 4);
	func_61();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0)
{
	Global_1935689->f_10165 = (Global_1935689->f_10165 || iParam0);
}

int func_7()
{
	int iVar0;
	float fVar3;

	func_77(Global_1935689->f_10190, &iVar0);
	switch (iVar0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689->f_10206, 0);
			func_78(-1520731333 /* GXTEntry: "Donate For Crafting" */);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689->f_10206, 0);
			func_78(1698037258 /* GXTEntry: "Donate For Provisions" */);
			break;
		case 2:
			fVar3 = (BUILTIN::TO_FLOAT(func_79(Global_1935689->f_10190, 0)) / 100f);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10206, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_80(MISC::_0x2B6846401D68E563(fVar3, 2), joaat("COLOR_PURE_WHITE"))));
			func_78(-879749798 /* GXTEntry: "Donate For Funds" */);
			break;
	}
	return 1;
}

void func_8(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	uParam0->f_1 = 1;
}

bool func_9()
{
	return func_81(&Global_1935630, 4096);
}

void func_10(bool bParam0)
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

void func_11()
{
	int iVar0;
	var uVar1;
	bool bVar2;

	Global_1935689->f_10194 = 0;
	if (Global_1935689->f_10188 != -1)
	{
		iVar0 = Global_1935689->f_10188;
		func_83(Global_1935689->f_10181[func_82(Global_1935689->f_10189) /*2*/], iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689->f_10200, Global_1935689->f_10194);
	}
	uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1935689->f_10194 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "FolderEmpty", bVar2);
}

int func_12()
{
	if ((func_84() || func_86(Global_35, func_85(7), 1)) || (!(func_87(7) || func_88(7)) && func_27(0)))
	{
		return (func_89(0, -1591664384) && func_89(1, 724026534));
	}
	return func_89(0, -1591664384);
}

void func_13(int iParam0)
{
	struct<2> Var0;
	struct<10> Var2;

	Var0 = { *(Global_1935689->f_10181[Global_1935689->f_10187 /*2*/]) };
	Var2.f_9 = -1591664384;
	if (!func_15() && (Global_1935689->f_10196 || !Global_1935689->f_5))
	{
		func_90(0);
	}
	Global_1935689->f_10193 = 0;
	Global_1935689->f_19.f_203 = 0;
	if (Global_1935689->f_10196)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689->f_10199, Global_1935689->f_10193);
		Global_1935689->f_10196 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10208, func_66(iParam0));
	if (!func_27(0) && !func_68())
	{
		func_91(&Var0, &Var2, iParam0);
	}
	func_92();
	if (Global_1935689->f_10189 == -283002878)
	{
		func_93();
	}
	else
	{
		func_94(&Var0, &Var2, iParam0);
		if ((Global_1935689->f_10189 == -182626652 && ((Global_1914319->f_16855 == 10 || Global_1914319->f_16855 == 19) || Global_1914319->f_16855 == 18)) || (Global_1935689->f_10189 == -693134279 && Global_1914319->f_16855 == 2))
		{
			if (func_84())
			{
				Var0 = { *(Global_1935689->f_10181[1 /*2*/]) };
				func_94(&Var0, &Var2, iParam0);
			}
		}
		func_95();
		func_93();
		func_96();
	}
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689->f_10199, Global_1935689->f_10193);
	func_97(0);
}

void func_14(int iParam0)
{
	var uVar0;

	uVar0 = iParam0;
	Global_1935689->f_10194 = 0;
	func_83(Global_1935689->f_10181[func_82(Global_1935689->f_10189) /*2*/], iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689->f_10200, Global_1935689->f_10194);
	func_97(Global_1935689->f_14);
	Global_1935689->f_10188 = uVar0;
}

bool func_15()
{
	return Global_1935689->f_11;
}

void func_16(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;

	func_98();
	if (func_15())
	{
		func_17(0);
		if (Global_1935689->f_7)
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10200, Global_1935689->f_10195);
		}
		else
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10199, Global_1935689->f_10195);
		}
		iVar0 = func_99(uVar1);
	}
	else
	{
		iVar0 = func_99(*uParam1);
	}
	func_100(iVar0, uParam1, uParam2);
	func_101(0, iVar0);
	func_98();
	func_97(iParam0);
}

void func_17(int iParam0)
{
	Global_1935689->f_11 = iParam0;
}

void func_18(int iParam0)
{
	Global_1935689->f_10 = iParam0;
}

void func_19(int iParam0, var uParam1)
{
	if (iParam0 != Global_1935689->f_10187)
	{
		func_102(iParam0, uParam1);
	}
}

bool func_20()
{
	return Global_1935689->f_19.f_203 <= 0;
}

void func_21(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	Global_1935689->f_14 = uParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_103(iVar0, uParam1);
	iVar1 = iVar0;
	func_14(iVar1);
}

void func_22()
{
	var uVar0;

	uVar0 = Global_1935689->f_10167;
	func_104(uVar0);
}

int func_23()
{
	if (func_105(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()
{
	if (Global_1935689->f_17 == 3)
	{
		return 1;
	}
	return 0;
}

int func_25(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	var uVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;

	if (func_24())
	{
		Global_1935689->f_10191 = iParam0;
		func_106(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_23())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_107(iParam0, 0);
		func_106(func_108(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_109(iParam0, bParam4))
	{
		return 0;
	}
	if (func_110(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_111(iParam0, -2081717885))
	{
		func_112(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_111(iParam0, -1909684001))
	{
		func_113(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_111(iParam0, 587975446))
	{
		func_114(iParam0, Var10);
	}
	else if (func_111(iParam0, 566155764))
	{
		if (!func_115(iParam0))
		{
			return 0;
		}
	}
	if (func_116(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_111(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_117(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_111(iParam0, -1472964441) || func_111(iParam0, -228153877)) || func_111(iParam0, 566155764))
	{
	}
	else if (func_111(iParam0, 1919582297))
	{
		if (((func_118() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243: /* GXTEntry: "Herbivore Bait" */
			case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397: /* GXTEntry: "Predator Bait" */
			case 1831763320: /* GXTEntry: "Potent Predator Bait" */
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_117(Var10, 0);
		bVar32 = false;
	}
	else if (func_119(iParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_120(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_117(Var10, 0);
		iVar33 = 1;
	}
	else if (func_119(iParam0) == joaat("clothing"))
	{
		if (func_121(iParam0) == -999503751)
		{
			if (func_62() != -1)
			{
				return iVar33;
			}
			if (!func_122(iParam0))
			{
				func_123("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_124(7, iParam0);
			bVar36 = func_124(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_123("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_125(7))
			{
				func_123("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_86(Global_35, func_85(7), 0))
				{
					func_123("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_123("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_126(iParam0);
			if (iVar30 == -1)
			{
				func_127(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_127(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_121(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_128(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_129(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1946804->f_1497.f_1[23 /*3*/])
					{
						func_130(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_131(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_131(iParam0, 1);
					}
					break;
			}
			func_130(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_10(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_62() != -1)
				{
				}
				else if (!func_122(iParam0))
				{
					func_123("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_124(7, iParam0);
					bVar36 = func_124(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36558))
						{
							MAP::REMOVE_BLIP(&Global_36558);
						}
						Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
						func_123(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36558), 10000, 0, 0, 0, 1);
					}
					else if (!func_125(7))
					{
						func_123("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_86(Global_35, func_85(7), 0))
						{
							func_123("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36558))
							{
								MAP::REMOVE_BLIP(&Global_36558);
							}
							Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
							func_123(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36558), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_117(Var10, 0);
						}
						Jump @2534; //curOff = 1629
						func_132();
						Jump @2534; //curOff = 1636
						if (!func_133(Global_1392040->f_1, 1) || func_133(Global_1392040->f_1, 512))
						{
							if (func_62() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_134(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_135(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_122(iParam0) || ((!func_137(Global_35, func_85(7), func_136(7), 1) || func_138() != 0) && !func_137(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_133(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_133(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_117(Var10, 2);
								}
							}
							else if (func_122(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_139(1))
								{
									func_140(2);
								}
								else if (func_141(1))
								{
									func_123("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_123("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_123("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_142(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_123("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_142(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								func_123("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2534; //curOff = 2200
						if (func_143(Global_35, 1, 0, 0) != joaat("weapon_kit_binoculars"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
						}
						return 1;
						Jump @2534; //curOff = 2241
						if (func_143(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2534; //curOff = 2282
						iVar27 = func_145(func_144());
						iVar28 = func_146();
						if (func_147(iVar27))
						{
							if (iVar27 == iVar28 && !func_148())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_123("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2534; //curOff = 2352
						func_149(iParam0, 1, 0, 562618531, 0);
						Jump @2534; //curOff = 2370
						func_150(497, 1);
						Jump @2534; //curOff = 2381
						func_151(1);
						Jump @2534; //curOff = 2389
						func_149(iParam0, 1, 0, 562618531, 0);
						func_152(136579449 /* GXTEntry: "Beau\'s Bracelet" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2534; //curOff = 2430
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2534; //curOff = 2465
						Var0.f_2 = -7337301; /* GXTEntry: "English Spelling Practice" */
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_117(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2534; //curOff = 2525
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
		}
	}

int func_26()
{
	if (Global_1935689->f_17 == 1 || Global_1935689->f_17 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_27(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

void func_28()
{
	bool bVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;

	if (func_119(Global_1935689->f_10190) == 2085633299)
	{
		Global_1935496->f_31 = Global_1935689->f_10190;
	}
	else
	{
		Global_1935496->f_32 = Global_1935689->f_10190;
	}
	bVar0 = true;
	if (func_121(Global_1935689->f_10190) == -854348463)
	{
		Var1 = { func_153(Global_1935689->f_10190, 0, 0) };
		Var6 = { func_154(Global_1935689->f_10190, Var1, Var1.f_4, 0) };
		func_155(Var6, 1);
		if (Global_1935689->f_10189 == -156634416)
		{
			func_157(func_156(0), 0, -883547903);
		}
		else
		{
			func_157(func_156(0), 1, 0);
		}
		bVar0 = true;
	}
	else if (func_121(Global_1935689->f_10190) == 81053684 || func_121(Global_1935689->f_10190) == -525676072)
	{
		func_128(Global_1935689->f_10190, 0);
		bVar0 = false;
	}
	else if (func_111(Global_1935689->f_10190, 316290104))
	{
		if (func_158(Global_1935689->f_10190, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_159(Global_1935689->f_10190, 1, 0))
	{
		iVar10 = func_160(Global_1935689->f_10190);
		if (func_161(iVar10, 0))
		{
			if (func_162(iVar10))
			{
				bVar0 = false;
			}
		}
	}
	else if (func_25(Global_1935689->f_10190, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (func_24())
	{
		bVar0 = false;
	}
	Global_1935689->f_10191 = Global_1935689->f_10190;
	func_10(bVar0);
	Global_1911913 = MISC::GET_GAME_TIMER();
	if (!func_163())
	{
		func_90(0);
	}
}

void func_29(int iParam0, int iParam1)
{
	if (!func_161(iParam0, 0))
	{
		return;
	}
	func_164(iParam0, iParam1, 0, -327174699, 1);
	func_157(func_156(0), 0, 0);
}

void func_30(int iParam0)
{
	func_29(iParam0, func_166(func_165(0), iParam0, 0));
}

void func_31(int iParam0)
{
	if (func_167(32))
	{
		return;
	}
	func_168(32);
	if (func_169(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_170(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_171(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_172(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_173(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_174(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_175(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_176(0))
	{
		Global_1935496->f_7 |= 8192;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, 0, 1))
	{
		Global_1935496->f_7 |= 16384;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16384);
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		Global_1935496->f_7 |= 32768;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32768);
	}
	if (func_62() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496->f_7 |= 131072;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496->f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496->f_7 |= 256;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 256);
	}
	if (Global_1935630->f_24 || TASK::_0xC8B29D18022EA2B7(Global_35))
	{
		Global_1935496->f_7 |= 1024;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496->f_7 |= 4096;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || func_171(Global_35, 1369124074))
	{
		Global_1935496->f_7 |= 128;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496->f_7 |= 33554432;
		if (TASK::_0x2D0571BB55879DA2(Global_35) == -1241981548)
		{
			Global_1935496->f_7 |= 67108864;
		}
		else
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496->f_7 |= 65536;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496->f_7 |= 64;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496->f_7 |= 1048576;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1048576);
	}
	if (func_177(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_178(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_179(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_180())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_181(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
					break;
				default:
					Global_1935496->f_7 |= 134217728;
					break;
			}
		}
		if (PED::_0xFB4891BD7578CDC1(iParam0, 149557334))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
	}
	if (((((func_62() == -1 && func_182(32768)) || func_183()) || func_184()) || (func_185() && !func_186())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_143(Global_35, 1, 0, 0) == joaat("weapon_fishingrod"))
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

bool func_32(int iParam0)
{
	return func_187(iParam0);
}

int func_33()
{
	return 33284224;
}

int func_34(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((Global_1935496->f_29 && iParam2) != 0)
	{
		Global_1935496->f_27 = (Global_1935496->f_27 - (Global_1935496->f_27 && iParam2));
		return 0;
	}
	else
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1);
		Stack.Push(0);
		Call_Loc(iParam3);
		if (func_42(StackVal, StackVal, StackVal, StackVal))
		{
			Global_1935496->f_27 = (Global_1935496->f_27 || iParam2);
			return 1;
		}
		else
		{
			Global_1935496->f_27 = (Global_1935496->f_27 - (Global_1935496->f_27 && iParam2));
			return 0;
		}
	}
	return 0;
}

int func_35()
{
	return 33537239;
}

int func_36()
{
	return 26983431;
}

bool func_37()
{
	return func_188();
}

void func_38(int iParam0)
{
	func_76(&(Global_1935496->f_27), iParam0);
}

bool func_39(int iParam0)
{
	return func_190(func_189(iParam0));
}

bool func_40(int iParam0)
{
	return (Global_1935496->f_29 && iParam0) != 0;
}

int func_41()
{
	return func_191();
}

int func_42(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_31(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return 0;
	}
	if (func_62() == 0)
	{
		if (Global_1935496->f_7 & 131072 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496->f_7 & 1024 != 0)
		{
			return 0;
		}
	}
	if (Global_1935630->f_22)
	{
		return 0;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496->f_7 & 32 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496->f_7 & 4096 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496->f_7 & 512 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_192(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return 0;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_193(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return 0;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_194(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return 0;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_195(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_123("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_195(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630->f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return 0;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_197(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_123("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return 0;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496->f_7 & 8192 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496->f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_123("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496->f_7 & 32768 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496->f_7 & 16384 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496->f_7 & 16 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496->f_7 & 256 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_52();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_123("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496->f_7 & 524288 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496->f_7 & 262144 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496->f_7 & 2097152 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496->f_7 & 8388608 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496->f_7 & 33554432 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496->f_7 & 67108864 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496->f_7 & 134217728 == 0)
		{
			return 0;
		}
	}
	if (Global_1935496->f_7 & 17825988 != 0)
	{
		return 0;
	}
	return 1;
}

void func_43(int iParam0)
{
	func_198(&(Global_1935496->f_27), iParam0);
}

int func_44()
{
	return 33284224;
}

int func_45()
{
	return 16662519;
}

int func_46()
{
	return 16596983;
}

int func_47()
{
	return 16400295;
}

var func_48()
{
	return Global_1935496->f_10;
}

var func_49()
{
	return Global_1935496->f_11;
}

var func_50()
{
	return Global_1935496->f_12;
}

var func_51()
{
	return Global_1935496->f_13;
}

bool func_52()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

int func_53()
{
	return 26978304;
}

int func_54()
{
	return 18589696;
}

int func_55()
{
	return 26978448;
}

int func_56()
{
	return 33529847;
}

int func_57()
{
	return 32713860;
}

int func_58()
{
	return 32505855;
}

void func_59()
{
	Global_1935496->f_29 = 0;
}

void func_60(bool bParam0)
{
	var uVar0;

	if (func_167(64))
	{
		return;
	}
	if (!func_27(0) && !func_68())
	{
		uVar0 = func_199(0);
		if (func_200(uVar0, 0, 0, 0, bParam0))
		{
			func_201(uVar0);
		}
		func_202(uVar0);
		func_203();
		func_168(64);
	}
}

void func_61()
{
	var uVar0;

	uVar0 = func_199(0);
	func_200(uVar0, 1, 0, 0, 1);
	func_201(uVar0);
}

int func_62()
{
	return Global_1572887->f_12;
}

void func_63()
{
	func_204(-893403924, &(Global_1935689->f_10225), 600, -1, 0, 0);
	func_205();
}

int func_64(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	func_206();
	bVar0 = func_27(0);
	bVar1 = func_68();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1935689->f_10189 != -156634416) && Global_1935689->f_10189 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1935689->f_10196 = 1;
	if (!Global_1935689->f_9)
	{
		Global_1935689->f_10188 = -1;
	}
	Global_1935689->f_10199 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1935689->f_10200 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1935689->f_10213 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1935689->f_10214 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1935689->f_10215 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1935689->f_10216 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", -1896040097);
	Global_1935689->f_10217 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1935689->f_10218 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1935689->f_10221 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::_GET_LABEL_TEXT_BY_HASH(140984675));
	Global_1935689->f_10219 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1935689->f_10220 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1935689->f_10224 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1935689->f_10222 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);
	if ((func_62() == -1 && func_27(0)) && Global_1914319->f_16855 == 2)
	{
		Global_1935689->f_10223 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1935689->f_10223 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1935689->f_10204 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Name", 0);
	Global_1935689->f_10205 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Description", 0);
	if ((func_27(0) || func_23()) || func_26())
	{
		Global_1935689->f_10206 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Price", "");
	}
	else
	{
		Global_1935689->f_10206 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar3, "Price", false);
	}
	if ((func_62() == -1 && func_27(0)) && Global_1914319->f_16855 == 2)
	{
		Global_1935689->f_10207 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_SEND");
	}
	else
	{
		Global_1935689->f_10207 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1935689->f_10208 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Category", 0);
	Global_1935689->f_10202 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "DefaultCategoryIndex", 0);
	Global_1935689->f_10203 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryIndex", func_207());
	Global_1935689->f_10201 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryCount", 0);
	Global_1935689->f_10209 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "IndexDescription", "");
	Global_1935689->f_10210 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Tip", "");
	Global_1935689->f_10211 = INVENTORY::_0x9D21B185ABC2DBC4(uVar3, "effects", 0, 0);
	Global_1935689->f_10212 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Folder", 0);
	Global_1935689->f_10198 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_208(Global_1935689->f_10198);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689->f_10198, Global_1935689->f_10166);
	uVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	iVar5 = 485071447;
	if (func_209(-593948563 /* GXTEntry: "Legend of the East Satchel" */))
	{
		iVar5 = -1401261769;
	}
	iVar6 = func_210(uVar4, "player", iVar5, "ALL SATCHEL", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_84() || func_86(Global_35, func_85(7), 1)) || (!(func_87(7) || func_88(7)) && func_27(0)))
	{
		func_210(uVar4, "saddle", -1186165261, "ALL", 724026534);
	}
	func_102(iVar6, &uVar3);
	if (Global_1935689->f_9)
	{
		func_211(Global_1935689->f_10189);
		func_212(Global_1935689->f_10189, &uVar3, 0);
		func_157(1, 0, 0);
	}
	else
	{
		func_157(func_213(), 0, 0);
	}
	Global_1935689->f_9 = 0;
	return 1;
}

void func_65()
{
	if (Global_1572887->f_12 == -1)
	{
		return;
	}
	Global_1058888->f_2 = 1;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1346594033;
		case -1559802791:
			return -352057134;
		case -1268291907:
			return 845736308;
		case -96974025:
			return -2057617490;
		case -1666604090:
			return 991808728;
		case 1561961676:
			return -92112048;
		case -156634416:
			return 2047707540;
		case 1061777683:
			return -36657802;
		case -283002878:
			return 262409577;
		case -2074770370:
			return 1643818657;
		case -693134279:
			return -1077706770;
		case -182626652:
			if ((Global_1914319->f_17370 || Global_1914319->f_18996.f_1) && Global_1914319->f_16855 == 19)
			{
				return -332450398 /* GXTEntry: "Donate" */;
			}
			else
			{
				return -161395681;
			}
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1315938069;
		case -1559802791:
			return -1694952718;
		case -1268291907:
			return 1510785758;
		case -96974025:
			return 392871877;
		case -1666604090:
			return 92275361;
		case 1561961676:
			return 983460938;
		case -156634416:
			return -1579183876;
		case 1061777683:
			return -419081072;
		case -283002878:
			return -1202687131;
		case -2074770370:
			return 89311517;
		case -693134279:
			return 1001811369;
		case -182626652:
			return 288697952;
	}
	return 0;
}

int func_68()
{
	if (((Global_1935689->f_17 == 1 || Global_1935689->f_17 == 2) || func_23()) || func_24())
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, HUD::_GET_LABEL_TEXT_BY_HASH(-402412948));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, HUD::_GET_LABEL_TEXT_BY_HASH(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, "");
			break;
	}
	return 0;
}

void func_70(int iParam0)
{
	Global_1935689->f_18 = iParam0;
}

void func_71(int iParam0)
{
	Global_1935689->f_17 = iParam0;
}

void func_72(int iParam0)
{
	Global_1935689->f_12 = iParam0;
}

void func_73(var uParam0)
{
	MAP::DISPLAY_RADAR(true);
	Global_1935689->f_1 = 0;
	func_214();
	func_215(uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	HUD::_0x50C803A4CD5932C5(0);
	HUD::_0xD4EE21B7CC7FD350(0);
	uParam0->f_1 = 0;
}

void func_74(int iParam0)
{
	((*Global_1911894)[iParam0 /*6*/])->f_1 = 3;
	(*Global_1911894)[iParam0 /*6*/] = 0;
	((*Global_1911894)[iParam0 /*6*/])->f_5 = 0;
}

void func_75(int iParam0)
{
	Global_1935689->f_10165 = (Global_1935689->f_10165 - (Global_1935689->f_10165 && iParam0));
}

void func_76(var uParam0, int iParam1)
{
	func_216(uParam0, iParam1);
}

void func_77(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6[10];
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar25;

	uParam1->f_2 = 0;
	func_217(iParam0, 761605153, &bVar0, &iVar1);
	iVar2 = func_218(iParam0, 2);
	iVar3 = (iVar1 - iVar2);
	iVar4 = func_218(iParam0, 0);
	if (bVar0)
	{
		if (iVar3 > 0)
		{
			*uParam1 = 0;
			uParam1->f_2 = 1;
		}
		else
		{
			*uParam1 = 2;
		}
		if (iVar3 >= iVar4)
		{
			uParam1->f_1 = 0;
		}
		else
		{
			uParam1->f_1 = 3;
		}
	}
	else if (func_219(iParam0))
	{
		*uParam1 = 1;
		uParam1->f_1 = 1;
	}
	else
	{
		*uParam1 = 2;
		uParam1->f_1 = 2;
	}
	if (func_220(iParam0))
	{
		if (!func_221(iParam0, &iVar5))
		{
			iVar18 = func_222(iParam0);
			iVar19 = func_223(iParam0);
			uVar20 = func_224(iParam0);
			iVar17 = PED::_0xB29C553BA582D09E(&uVar6, iVar18, iVar19, uVar20);
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
				return;
			}
			iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
			if (PED::_0xFB4891BD7578CDC1(iVar21, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar5))
			{
				iVar17 = 0;
			}
			else
			{
				iVar17 = func_225(iVar21, &uVar6);
			}
		}
		if (iVar17 <= 0)
		{
			return;
		}
		iVar25 = 0;
		while (iVar25 < iVar17)
		{
			if (!func_161(&(uVar6[iVar25]), 0))
			{
			}
			else if (&uVar6[iVar25] == iParam0)
			{
			}
			else
			{
				func_77(&(uVar6[iVar25]), &iVar22);
				if (iVar22 == 0)
				{
					uParam1->f_2 = 1;
					*uParam1 = 0;
					uParam1->f_1 = 3;
				}
				else
				{
					iVar25++;
				}
			}
		}
	}

void func_78(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10213, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10222, iParam0);
}

int func_79(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	fVar0 = 1f;
	fVar1 = 1f;
	iVar2 = Global_1914319->f_16855.f_1;
	iVar3 = Global_1914319->f_16855;
	if (func_226(iVar2) && func_227(iVar3))
	{
		if (iVar3 == 10 || iVar3 == 18)
		{
			fVar1 = func_228(iVar2, iParam0);
		}
		fVar0 = func_229(&((Global_1914319->f_3[iVar3 /*446*/])->f_35), iParam0);
	}
	fVar4 = (fVar0 + fVar1);
	if (fVar0 <= 0f)
	{
		return 0;
	}
	fVar4 = (fVar4 - IntToFloat(BUILTIN::FLOOR(fVar4)));
	iVar5 = func_230(iParam0, 816454899, 0);
	iVar6 = BUILTIN::ROUND((IntToFloat(iVar5) + (IntToFloat(iVar5) * fVar4)));
	if (bParam1)
	{
		iVar6 = BUILTIN::ROUND((IntToFloat(iVar6) * 0.5f));
	}
	if (iVar6 <= 0)
	{
		return 0;
	}
	return iVar6;
}

char* func_80(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_231(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_81(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_82(int iParam0)
{
	return func_232(iParam0 == -283002878, 1, 0);
}

void func_83(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_233(&Var0, iVar14, func_82(Global_1935689->f_10189), *uParam0))
		{
		}
		else if (!func_234(Var0.f_4, iParam1))
		{
		}
		else if (!func_235(&Var0, 0, 1))
		{
		}
		else if (func_27(0))
		{
			if (!func_161(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1935689->f_10190 == 0)
				{
					func_90(Var0.f_4);
				}
				func_236(Var0, 0);
			}
			iVar14 = (iVar14 + -1);
		}
	}

int func_84()
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (func_27(0))
	{
		iVar0 = func_165(0);
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (Global_1914319->f_16855 == 10 || Global_1914319->f_16855 == 18)
		{
			fVar1 = 30f;
			if (Global_1914319->f_16855.f_1 == 55)
			{
				fVar1 = 40f;
			}
			fVar2 = func_237(iVar0, 0, 1);
			if (fVar2 < fVar1)
			{
				return 1;
			}
		}
		else if (Global_1914319->f_16855 == 2)
		{
			if (func_237(iVar0, 0, 1) < 75f)
			{
				return 1;
			}
		}
		else if (Global_1914319->f_16855 == 19)
		{
			if (func_238(iVar0))
			{
				return 1;
			}
		}
	}
	else
	{
		if (func_62() == -1)
		{
			if (func_239(Global_35))
			{
				iVar0 = PED::GET_MOUNT(Global_35);
			}
			else if (func_240(-283002878))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
		}
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (func_237(iVar0, 0, 1) < 1.7f)
		{
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	iParam0 = func_241(iParam0);
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

int func_86(int iParam0, int iParam1, bool bParam2)
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

int func_87(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (func_243(vVar1, vVar4) > func_136(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1)
{
	if (!func_244((Global_1935689->f_10181[iParam0 /*2*/])->f_1))
	{
		return 0;
	}
	return func_245("ALL", &((Global_1935689->f_10181[iParam0 /*2*/])->f_1), Global_1935689->f_10181[iParam0 /*2*/], iParam1, 0);
}

void func_90(int iParam0)
{
	Global_1935689->f_10190 = iParam0;
}

void func_91(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1935689->f_10189 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam2 == 0 && *uParam0 > 16)
	{
		iVar1 = (*uParam0 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1935689->f_19.f_1)
	{
		Global_1935689->f_19.f_2[iVar0 /*2*/] = 0;
		(Global_1935689->f_19.f_2[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
	Global_1935689->f_19.f_1 = 0;
	iVar0 = 0;
	if (*uParam0 > 0)
	{
		iVar0 = (*uParam0 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_233(uParam1, iVar0, uParam0->f_1, *uParam0))
			{
			}
			else if (!func_235(uParam1, iParam2, 1))
			{
			}
			else
			{
				func_246(*uParam1);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_92()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	Global_1935689->f_1224 = 0;
	if (func_247())
	{
		if (PED::_0xA911EE21EDF69DAF(Global_35))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
			if (ITEMSET::IS_ITEMSET_VALID(iVar2))
			{
				iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
					if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
					}
					else
					{
						iVar1 = func_248(iVar0);
						if (func_249(iVar1))
						{
							Global_1935689->f_1224 = iVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_93()
{
	if (func_250())
	{
		if (func_27(0))
		{
			if ((func_251() == 19 || func_251() == 18) || func_251() == 10)
			{
				func_252(1, 0);
			}
			else
			{
				func_253(1);
			}
		}
		else
		{
			func_253(1);
		}
	}
}

void func_94(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == 0)
	{
		func_254(uParam0, uParam1, iParam2);
	}
	else
	{
		iVar1 = 0;
		if (*uParam0 > 0)
		{
			iVar0 = (*uParam0 - 1);
			while (iVar0 >= 0)
			{
				if (!func_233(uParam1, iVar0, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(uParam1, iParam2, 1))
				{
				}
				else
				{
					func_255(*uParam1, 0);
					iVar1++;
					if (iParam2 == 0 && iVar1 >= 16)
					{
					}
					else
					{
						iVar0 = (iVar0 + -1);
					}
				}
			}
		}
	}

void func_95()
{
	switch (Global_1935689->f_10189)
	{
		case -156634416:
			func_256();
			break;
		case 1561961676:
			if (func_257(-1167047117 /* GXTEntry: "Diamond Brooch" */, 1, 0))
			{
				func_258(-1167047117 /* GXTEntry: "Diamond Brooch" */, 0);
			}
			break;
	}
}

void func_96()
{
	if (!func_161(Global_1935689->f_1224, 0))
	{
		return;
	}
	if (func_84() && func_166(func_165(0), Global_1935689->f_1224, 0) != 1)
	{
		return;
	}
	func_258(Global_1935689->f_1224, 0);
}

void func_97(int iParam0)
{
	if (Global_1935689->f_19.f_203 > 16)
	{
		if (Global_1935689->f_7)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10209, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689->f_10194));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10209, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689->f_19.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10209, "");
	}
}

void func_98()
{
	if (!func_161(Global_1935689->f_10190, 0))
	{
		Global_1935689->f_7 = 0;
	}
	else if ((((func_259(Global_1935689->f_10190, 1224357681) != 0 && Global_1935689->f_10189 != 0) && Global_1935689->f_10189 != -2074770370) && !func_27(0)) && !func_23())
	{
		Global_1935689->f_7 = 1;
	}
	else
	{
		Global_1935689->f_7 = 0;
	}
}

var func_99(var uParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(uParam0, "label");
	return uVar0;
}

void func_100(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;

	bVar0 = true;
	if (func_161(iParam0, 0))
	{
		if (func_111(iParam0, 1147021565))
		{
			if (Global_1935689->f_10189 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_27(0))
			{
				iVar2 = func_260(&iParam0);
				if (func_111(iParam0, 1573112293) && !func_261(iVar2))
				{
					bVar0 = false;
					ATTRIBUTE::_0xD962F8579D702DB5();
				}
				else
				{
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(iParam0, iVar1);
				}
			}
		}
		func_262(iParam0, uParam1);
		bVar3 = false;
		bVar4 = func_263(iParam0);
		if (func_84())
		{
			iVar5 = func_166(func_165(0), iParam0, 0);
		}
		else
		{
			iVar5 = func_264(iParam0, 0, 0);
			if (iParam0 == Global_1935689->f_1224)
			{
				iVar5++;
			}
		}
		iVar6 = func_265(iParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10204, func_266(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10205, func_267(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10224, bVar4);
		if (bVar4 && iVar5 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10220, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10219, bVar3);
		bVar7 = true;
		if (func_27(0) || func_68())
		{
			fVar8 = (BUILTIN::TO_FLOAT(func_268(iParam0, 1)) / 100f);
			if (Global_1914319->f_16855 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10206, MISC::_CREATE_VAR_STRING(10, "SEND_ITEM_VALUE", func_80(MISC::_0x2B6846401D68E563(fVar8, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1914319->f_16855 == 19)
			{
				if (uParam2->f_1)
				{
					Call_Loc(uParam2->f_2);
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10206, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_80(MISC::_0x2B6846401D68E563(fVar8, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!func_269(iParam0, Global_1914319->f_16855.f_1) && !func_68())
			{
				bVar7 = false;
			}
		}
		if (bVar7)
		{
			if (iVar6 > 1)
			{
				if (Global_1935689->f_19.f_203 <= 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, "");
				}
				else if (iVar5 >= iVar6)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar5, iVar6));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar5, iVar6));
				}
			}
			else if (iVar6 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar5));
			}
		}
		else if (func_251() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10204, func_66(Global_1935689->f_10189));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10205, func_66(Global_1935689->f_10189));
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1935689->f_10211, 0, 0);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1935689->f_10211, iParam0, 0);
	}
	func_90(iParam0);
}

void func_101(int iParam0, int iParam1)
{
	if ((!func_111(iParam1, 747873593) && !func_111(iParam1, -1661502552)) && !func_111(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1911894[iParam0 /*6*/])
	{
		((*Global_1911894)[iParam0 /*6*/])->f_1 = 3;
		(*Global_1911894)[iParam0 /*6*/] = iParam1;
		((*Global_1911894)[iParam0 /*6*/])->f_5 = 0;
	}
}

void func_102(int iParam0, var uParam1)
{
	Global_1935689->f_10187 = iParam0;
	if (func_24())
	{
		if (PED::_0xA911EE21EDF69DAF(Global_35) == 0)
		{
			func_211(-1559802791);
		}
	}
	if (func_23())
	{
		func_211(-2074770370);
	}
	func_212(Global_1935689->f_10189, uParam1, 0);
}

void func_103(int iParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10204, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10205, func_270(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689->f_10212, iParam0);
	func_90(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1935689->f_10211, 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689->f_10210, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10224, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10220, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10219, false);
	func_271(uParam1);
}

void func_104(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	Global_1935689->f_10167 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1935689->f_10203);
	iVar0 = &Global_1935689->f_10168[Global_1935689->f_10167];
	if (iVar0 != Global_1935689->f_10189)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_OPTION"), false);
		}
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION")))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		}
		Global_1935689->f_19.f_203 = 0;
		Global_1935689->f_10187 = func_82(iVar0);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10198, uParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar1, "CurrentCategory", 0);
		uVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10198, Global_1935689->f_10167);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar2, "CurrentCategory", 1);
		func_212(iVar0, &uVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 11)
		{
			if (&Global_1935689->f_10168[iVar3] == Global_1935689->f_10189)
			{
				uVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10198, Global_1935689->f_10167);
				if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory", 1);
				}
			}
			else
			{
				uVar5 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10198, Global_1935689->f_10167);
				if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uVar5, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar5, "CurrentCategory", 0);
				}
			}
			iVar3++;
		}
	}
}

int func_105(int iParam0, int iParam1)
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
	if (func_272(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_272(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_153(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_273(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_154(iParam0, Var0, Var0.f_4, bParam4) };
	return func_274(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_107(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_108()
{
	return Global_1357549->f_1672;
}

int func_109(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935689->f_8)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_275(iParam0);
		if (func_111(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_42(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_183())
		{
			return 0;
		}
	}
	if (!func_257(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_110(int iParam0)
{
	if (func_119(iParam0) == -1650247667)
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_199(0), iParam0, func_27(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463: /* GXTEntry: "Camp" */
		case 2019377485: /* GXTEntry: "Camp" */
			if (!Global_1392040->f_2)
			{
				func_173(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1807503187: /* GXTEntry: "Handheld Catalogue" */
			func_123(MISC::_CREATE_VAR_STRING(0, 163043886, Global_36558), 10000, 0, 0, 0, 1);
			break;
	}
	return 1;
}

int func_111(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_112(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case 1244838730: /* GXTEntry: "Faded Letter" */
			break;
		case -1952196650: /* GXTEntry: "Letter from the Mayor\'s Office" */
			if (func_276())
			{
				func_277(998229694 /* GXTEntry: "It ain\'t John Mark. It\'s Jean Marc, you fool. And he\'s now the mayor. I guess tha" +
    "t\'s good. Lemieux\'s done for." */, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(998229694))
			{
				func_277(1610852701 /* GXTEntry: "It ain\'t John Mark. It\'s Jean Marc, Arthur.~n~~n~These fellas are French.~n~And h" +
    "e\'s now the mayor. I guess that\'s good. Sounds like Lemieux was pretty awful." */, 0);
			}
			break;
		case -1566711999: /* GXTEntry: "Letter from the Mayor\'s Office" */
			func_277(-1741315348 /* GXTEntry: "Jean Marc won.~n~~n~He\'s now the mayor and Lemieux is disgraced." */, 0);
			break;
		case -1237758927: /* GXTEntry: "Letter to Mayor Timmins from Belinda" */
			break;
		case -631796932: /* GXTEntry: "Letter from Charles Châtenay" */
			func_278(((*Global_1347702)[80 /*49*/])->f_15, 1);
			if (func_276() == 1)
			{
				func_277(1565950479, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(1565950479))
			{
				if (func_279(77))
				{
					func_277(-553142873, 0);
				}
				else
				{
					func_277(-384883866, 0);
				}
			}
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			if ((func_280() && !func_281(51)) && !func_282(1048576))
			{
				func_283(2);
				func_284(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_286(1048576);
			}
			break;
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			if ((func_280() && !func_281(51)) && !func_282(16384))
			{
				func_283(1);
				func_284(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_286(16384);
			}
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			if ((func_280() && !func_281(40)) && !func_287(32))
			{
				func_288(4);
				func_284(39, 0, 0, 0, 0, -1, 0);
				func_285(39, 0, 0, 0, 0, 0, 2, 0);
				func_289(32);
			}
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			if ((func_280() && !func_281(42)) && !func_290(16))
			{
				func_291(8);
				func_284(41, 0, 0, 0, 0, -1, 0);
				func_285(41, 0, 0, 0, 0, 0, 2, 0);
				func_292(16);
			}
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			if ((func_280() && !func_281(50)) && !func_293(32))
			{
				func_294(4);
				func_284(49, 0, 0, 0, 0, -1, 0);
				func_285(49, 0, 0, 0, 0, 0, 2, 0);
				func_295(32);
				if (!func_296(((*Global_1347702)[50 /*49*/])->f_15, 1))
				{
					if (func_276() == 1)
					{
						func_277(-629995342 /* GXTEntry: "Sent him the location of those odd carvings. Now he wants me to go see him." */, 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-629995342))
					{
						func_277(-1367572831 /* GXTEntry: "Sent him the location of those odd carvings. Now he wants me to go see him." */, 0);
					}
				}
			}
			break;
		case -686755665:
			iParam27 = -2107709792;
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	}
}

void func_113(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case 1950809992: /* GXTEntry: "Farm, Field and Falconry" */
			func_291(16);
			break;
	}
}

void func_114(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (iParam0)
	{
		case -1280336729: /* GXTEntry: "Emmet Granger Photograph" */
		case -691125380: /* GXTEntry: "Flaco Hernandez Photograph" */
		case -287018478: /* GXTEntry: "Billy Midnight Photograph" */
		case 305626647: /* GXTEntry: "Black Belle Photograph" */
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

int func_115(int iParam0)
{
	return 1;
}

int func_116(int iParam0, bool bParam1, bool bParam2)
{
	if (func_297(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_259(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432);
				return 1;
			}
			break;
		case 1174751405:
			if (!bParam1)
			{
				func_298(iParam0);
				return 1;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_299())
				{
					if (func_300(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return 1;
				}
				else
				{
					func_123("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 1451036371:
			if (!bParam1)
			{
				func_301(iParam0);
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_302(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_303(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_304(iParam0);
				}
				else
				{
					func_305(iParam0);
				}
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_306(iParam0);
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_307(iParam0);
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_308(iParam0);
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_309(iParam0);
				return 1;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1893721798, 1, 0, -1082130432);
				return 1;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_310(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_311(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_312(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_313(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_314(iParam0);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_315(iParam0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_117(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_316(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_317(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_318(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_118()
{
	return Global_1894899 & 2 != 0;
}

int func_119(int iParam0)
{
	vector3 vVar0;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_121(int iParam0)
{
	struct<2> Var0;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_122(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_119(iParam0) == joaat("clothing"))
	{
		if (func_121(iParam0) == -999503751)
		{
			iVar0 = func_126(iParam0);
			if ((iVar0 != -1 && !func_319(iVar0)) || !func_257(iParam0, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_123(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_124(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_0xB676EFDA03DADA52(iVar0, 0) == Global_35)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_320(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_321())
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
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

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_322(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_323(Var0);
}

int func_128(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_188())
	{
		return 0;
	}
	if (!func_324(iParam0))
	{
		return 0;
	}
	if (func_325(iParam0))
	{
		iVar0 = 0;
		if (func_121(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_198(&iVar0, 2);
			}
		}
		return func_326(iParam0, iVar0);
	}
	return 0;
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1946804->f_1497.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_130(Global_35, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_131(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_130(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_327(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_328();
		func_322(128);
		return;
	}
	if (iVar1 == &Global_1946804->f_57[iVar0 /*11*/])
	{
		func_131(iParam0, 1);
		return;
	}
	if (func_329(-2061583405, 0))
	{
		if (func_209(iVar1))
		{
			func_131(iVar1, 0);
		}
		else
		{
			func_330(iVar1, 1, 1, 0);
		}
		func_131(iParam0, 1);
		return;
	}
	if (func_209(iVar1))
	{
		func_131(iVar1, 0);
		func_131(iParam0, 1);
	}
	else if (func_209(iParam0))
	{
		if (iParam0 != func_331(0))
		{
			func_332(iParam0, iVar1);
			func_131(iParam0, 0);
			func_131(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_322(128);
			func_131(iParam0, 1);
		}
	}
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_153(iParam1, 1, 0) };
		iParam3 = func_333(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_335(iParam1, iParam2, func_334(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_336(1, (func_62() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_334(iParam3, 1) /*11*/])
			{
				func_127(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_327(32768) && iParam1 != &Global_1946804->f_57[func_334(iParam3, 1) /*11*/])
			{
				func_328();
				func_127(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_127(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_337(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_127(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_338(0);
			func_339(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_127(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_131(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_153(iParam0, 0, 0) };
	Var5 = { func_154(iParam0, Var0, Var0.f_4, 0) };
	if (func_340(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_199(0), &Var5, bParam1);
}

void func_132()
{
	if (func_341())
	{
		return;
	}
	if (func_342())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_123(func_343(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

bool func_133(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_134(int iParam0)
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (!func_344(iParam0))
	{
		return 0;
	}
	return func_345(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_135(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_345(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

float func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_346(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_347(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_347(iParam0) + 1;
	fVar6 = func_348(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_349(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_137(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_138()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_139(int iParam0)
{
	if (!func_350(32))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
	{
		return 0;
	}
	if (!func_351())
	{
		return 0;
	}
	if (func_352(16))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1225638->f_14) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::INT_TO_PLAYERINDEX(&Global_1225638)))
	{
		return 0;
	}
	if (iParam0 == 1 && func_272(Global_1131432->f_8, 1))
	{
		return 0;
	}
	return 1;
}

int func_140(int iParam0)
{
	if (!func_353())
	{
		return 0;
	}
	func_354(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

bool func_141(int iParam0)
{
	return func_272(Global_1131432->f_8, iParam0);
}

void func_142(int iParam0)
{
	struct<16> Var0;

	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_356(Var0, func_355(0, 15), 0, 0);
}

int func_143(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_144()
{
	return Global_1894899->f_2;
}

int func_145(int iParam0)
{
	int iVar0;

	if (!func_357(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	int iVar0;

	iVar0 = func_358();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 2;
		case 3:
			return 6;
		case 5:
			return 5;
		case 6:
			return 0;
		case 4:
			return 3;
		case 7:
			return 7;
		case 8:
			return -1;
	}
	return -1;
}

bool func_147(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_148()
{
	return &Global_1395601;
}

int func_149(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_359(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_360(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_257(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_361(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_264(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_264(iParam0, 0, 0) - iParam1) < 0)
		{
			func_149(iParam0, func_264(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_119(iParam0) == joaat("weapon"))
	{
		if (!func_362(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_106(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_156(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_360(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_363(iParam0, iParam1);
	return 1;
}

void func_150(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_364(iParam0, &iVar0, &iVar1);
	if (!func_365(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_366(iVar0, iVar1);
}

void func_151(bool bParam0)
{
	if ((func_62() != -1 || !bParam0) || func_239(Global_35))
	{
		func_367();
		return;
	}
	if (func_368(8388608) && !func_133(Global_1392040->f_1, 2048))
	{
		func_369(16777216);
		return;
	}
	func_367();
}

int func_152(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!func_370(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_371(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_372(iParam0, bParam2);
	iVar2 = 0;
	if (func_264(iParam0, 0, 0) == 0)
	{
		if (func_373(iParam0))
		{
			iVar5 = func_374(iParam0);
			iVar6 = func_375(iVar5);
			iVar7 = func_376(iVar6) + 1;
			func_377(iVar5);
			if (func_281(38))
			{
				func_150(483, 0);
			}
			else
			{
				func_150(482, 0);
			}
			if (iVar7 == func_378(iVar6))
			{
				func_152(func_379(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_280() && func_380(4))
				{
					if (func_280() && (func_381(38) || func_281(38)))
					{
						func_285(38, func_379(iVar6), 0, 0, func_382(), 0, -1, 0);
						func_383(2);
					}
					else
					{
						func_285(38, func_379(iVar6), 0, 0, func_382(), 0, -1, 0);
						func_383(1);
					}
				}
			}
			else if (func_280() && func_380(4))
			{
				if (func_280() && (func_381(38) || func_281(38)))
				{
					func_285(38, 0, 0, 0, func_382(), 0, -1, 0);
					func_383(2);
				}
				else
				{
					func_285(38, 0, 0, 0, func_382(), 0, -1, 0);
					func_383(1);
				}
			}
			if (func_280() && func_380(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_280() && (func_381(38) || func_281(38)))
					{
						func_284(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_284(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_119(iParam0) == joaat("clothing"))
	{
		if ((!func_111(iParam0, 866047851) && !func_111(iParam0, -1979000645)) && !func_111(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_384(iParam0, 8388608) && !func_385(28))
	{
		func_386(28);
	}
	if (!bVar3)
	{
		if (func_111(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_121(iParam0) == -1447088266)
			{
				iVar1 = func_388(func_387(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_62() == -1)
					{
						func_389(iVar1);
					}
					if (func_156(0) && func_390(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_391(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_0x5C2EA6C44F515F34(iParam0);
				if (WEAPON::_0x1F7977C9101F807F(iVar1))
				{
					if (func_62() == -1)
					{
						func_389(iParam0);
					}
					if (func_156(0) && func_390(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_391(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_119(iParam0) == joaat("weapon"))
		{
			if (!func_392(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_119(iParam0) == joaat("ammo") && func_393(iParam0))
		{
			if (!func_394(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_111(iParam0, 866047851))
		{
			func_395(iParam0);
		}
		else if (func_111(iParam0, 2000026003))
		{
			func_396(iParam0);
		}
		else if (func_111(iParam0, -103750053))
		{
			func_398(func_397(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_398(func_399(-717883113, 2091222383), iVar0);
		}
		else if (func_111(iParam0, -121341956) && !func_111(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_296(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_150(498, 0);
				}
			}
			if (func_111(iParam0, -2017733358) || func_111(iParam0, -1369131378))
			{
				func_400(iParam0);
			}
		}
		else if (func_111(iParam0, -136654233))
		{
			if (func_111(iParam0, -1021472396))
			{
			}
		}
		else if (func_111(iParam0, -1466706512) && func_111(iParam0, 1147021565))
		{
			func_150(484, 0);
		}
		else if (func_111(iParam0, 1147021565) && func_111(iParam0, -524514947))
		{
		}
		else if (func_111(iParam0, 554195525))
		{
		}
		else if (func_111(iParam0, 589988438))
		{
			if (func_401())
			{
				func_402(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_111(iParam0, 787083290) && func_111(iParam0, 949916894))
		{
			func_403(iParam0);
		}
		else if (func_111(iParam0, -1718133314))
		{
			func_404(iParam0);
		}
		else if (func_111(iParam0, -1738650224))
		{
			func_405(iParam0);
		}
		else if (func_111(iParam0, -1112814642) && func_111(iParam0, 949916894))
		{
			func_406(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_111(iParam0, 1841149704))
		{
			func_407();
		}
		else if (func_111(iParam0, 606799272))
		{
			func_408(iParam0, iParam1);
			func_409(iParam0);
		}
		else if (func_111(iParam0, -1112814642) && func_111(iParam0, -1697809989))
		{
			func_410(iParam0, 0, 0, 0);
		}
		else if (func_111(iParam0, -2017733358) || func_111(iParam0, -1369131378))
		{
			func_400(iParam0);
		}
		else if (func_111(iParam0, -1921346699))
		{
			if (func_62() != -1)
			{
				return 0;
			}
			func_411(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_111(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_257(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_152(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_257(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_152(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_257(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_152(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_257(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_152(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_257(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_152(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_257(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_152(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_111(iParam0, -839724752) && func_384(iParam0, 4))
		{
			if (!func_281(42))
			{
				func_412(iParam0);
			}
		}
		else if (func_111(iParam0, 1399091007))
		{
			func_413(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_111(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					iVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					iVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					iVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					iVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					iVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					iVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					iVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (iVar8 != 0)
			{
				func_152(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
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
				func_386(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_130(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_414(&iVar9, 0))
				{
					func_390(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_62() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_130(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_150(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_415();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_416();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_417();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_418();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_419();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_420(499813453, 854119837, 0);
				func_421(499813453, 0);
				func_422(1);
				break;
			case 2127812557:
				func_420(499813453, -1292544588, 0);
				func_421(499813453, 0);
				func_422(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_420(499813453, -1003325394, 0);
				func_421(499813453, 0);
				func_422(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_420(666607663, -335460405, 0);
				func_421(666607663, 0);
				func_423(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_420(666607663, 903797617, 0);
				func_421(666607663, 0);
				func_423(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_420(666607663, 669728650, 0);
				func_421(666607663, 0);
				func_423(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_420(-220219788, 1214120047, 0);
				func_421(-220219788, 0);
				func_424(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_420(-220219788, 655769340, 0);
				func_421(-220219788, 0);
				func_424(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_420(-220219788, 885316185, 0);
				func_421(-220219788, 0);
				func_424(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_420(218622660, -1491419385, 0);
				func_421(218622660, 0);
				func_425(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_420(218622660, 1809565830, 0);
				func_421(218622660, 0);
				func_425(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_420(390004462, -628873767, 0);
				func_421(390004462, 0);
				func_426(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_420(390004462, -405421956, 0);
				func_421(390004462, 0);
				func_426(2);
				break;
			case 2142623221:
				func_420(390004462, -1108972386, 0);
				func_421(390004462, 0);
				func_426(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_420(6410548, 1053716392, 0);
				func_421(6410548, 0);
				func_427(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_420(6410548, 806507056, 0);
				func_421(6410548, 0);
				func_427(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_420(6410548, 1571925350, 0);
				func_421(6410548, 0);
				func_427(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_420(6410548, 1330352282, 0);
				func_421(6410548, 0);
				func_427(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_428(242, func_266(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_428(240, func_266(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_428(241, func_266(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_429(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_429(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_429(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_429(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_429(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_429(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_150(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_150(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_150(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_152(func_430(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_152(func_431(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_385(1))
				{
					func_150(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_150(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_62() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_150(496, 0);
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
		iVar10 = iParam0;
		func_432(&iVar10);
		if (!func_433(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_156(0))
		{
			return 1;
		}
		if (func_119(iParam0) == joaat("clothing"))
		{
			func_434(iParam0);
		}
		if (func_111(iParam0, -1979000645))
		{
			func_435(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_156(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_152(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_436(iVar2, 0);
		}
	}
	Var35 = { func_361(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_437(iParam0);
	if (fParam6 > 0f)
	{
		if (func_111(iParam0, -839724752))
		{
			func_438(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_360(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

struct<5> func_153(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_439(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_119(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_154(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_440(bParam1) };
			if (bParam2 && func_441(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_442(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_442(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_443(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_444(bParam1) };
			switch (func_121(iParam0))
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
			if (func_445(iParam0, -1823706425))
			{
				Var0 = { func_154(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_445(iParam0, -1483207246))
			{
				Var0 = { func_154(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_446(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_154(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_161(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_199(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_155(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_156(0))
	{
		return func_447(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_446(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_199(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_156(bool bParam0)
{
	if (func_62() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_199(bParam0));
}

void func_157(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689->f_4 = bParam0;
	Global_1935689->f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689->f_5 = 0;
	}
	if (bParam1 || (func_448() && iParam2 == 0))
	{
		func_17(1);
		func_18(1);
	}
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_223(iParam0);
	iVar2 = func_222(iParam0);
	if (iVar2 != 0)
	{
		func_149(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_449(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

int func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == 1453752912 || iParam0 == -1429211481)
	{
		return 0;
	}
	if (func_111(iParam0, -887064662) || func_111(iParam0, -839724752))
	{
		if (bParam2)
		{
			return func_111(iParam0, -1238310989);
		}
		else if (bParam1)
		{
			return !func_111(iParam0, -1238310989);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = func_259(iParam0, 1697966752);
	iVar1 = 0;
	if (iVar0 == 0)
	{
		return 0;
	}
	Var2 = { func_450(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar0, 0) };
	if (func_451(Var2, &iVar12, &iVar13, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			iVar15 = func_452(iVar14, iVar12);
			if (func_161(iVar15, 0))
			{
				iVar1 = iVar15;
			}
			else
			{
				iVar14++;
			}
		}
		func_453(iVar12);
	}
	return iVar1;
}

int func_161(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_162(int iParam0)
{
	Global_1911914->f_1577 = iParam0;
	Global_1392040->f_2 = 1;
	func_369(268435456);
	if (func_368(8388608))
	{
		func_369(16777216);
		return 1;
	}
	else if ((func_257(2019377485 /* GXTEntry: "Camp" */, 1, 0) && func_25(2019377485 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)) || (func_257(-1838434463 /* GXTEntry: "Camp" */, 1, 0) && func_25(-1838434463 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)))
	{
		Global_1392040->f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		return 1;
	}
	else
	{
		Global_1392040->f_2 = 0;
		func_454(268435456);
	}
	return 0;
}

bool func_163()
{
	return Global_1935689->f_10;
}

int func_164(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iParam1 = func_455(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_165(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_456(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_457(iParam0, iParam1, bParam2, iParam3);
}

int func_165(int iParam0)
{
	int iVar0;

	if (func_458(iParam0))
	{
		if (func_62() == -1)
		{
			iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_85(func_241(0));
			}
		}
		else
		{
			iVar0 = PED::_0x4C8B59171957BCF7(func_459());
		}
	}
	else if (func_62() == -1)
	{
		iVar0 = func_85(0);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_166(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_460())
	{
		iVar0 = func_461(iParam1, 0);
	}
	else
	{
		iVar0 = func_264(iParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = (iVar0 + func_462(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689->f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_167(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_168(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_169(int iParam0)
{
	return (func_463(iParam0, 4) || func_463(iParam0, 5));
}

int func_170(int iParam0)
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

int func_171(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
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

int func_173(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_62() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_464())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_169(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_465())
	{
		if (bParam0)
		{
			if (func_358() != 8 && func_358() != 7)
			{
				func_123("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_123("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0, 1) || PED::IS_PED_SWIMMING(iVar0))
				{
					return 0;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return 0;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_466(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (func_467(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_468())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_469(-608558181) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0)
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_470(0, 1, 1) && !func_471(1))
	{
		if (bParam0)
		{
			if (func_135(15))
			{
				func_123("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_123("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (func_472() == 8)
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_473(8388608))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_368(8388608))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_474(func_144()))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (((func_475() || func_476(func_144()) == 9) || func_477(func_144())) && !func_478())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_170(Global_35))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_479())
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { VEHICLE::_0x6DE03BCC15E81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_480(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_481(Global_36, 5f))
	{
		if (bParam0)
		{
			func_123("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (BUILTIN::VDIST2(Global_36, ((*Global_1347702)[74 /*49*/])->f_24) < 144f && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1822247127) > 0)
	{
		return 0;
	}
	return 1;
}

int func_174(bool bParam0)
{
	if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x42429C674B61238B(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x9682F850056C9ADE(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return 0;
	}
	if (!PED::_0xB65A4DAB460A19BD(Global_35) == 0)
	{
		return 0;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return 0;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return 0;
	}
	return 1;
}

int func_175(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_172(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_176(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_177(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_482();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = iParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_181(iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_178(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 1;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (!func_181(iVar0))
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (func_237(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		return 1;
	}
	iVar1 = iParam0;
	if (!func_181(iVar1))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

bool func_179(int iParam0)
{
	return func_463(iParam0, 7);
}

int func_180()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return 0;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return 0;
	}
	return 1;
}

bool func_181(int iParam0)
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

int func_182(int iParam0)
{
	switch (func_62())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

int func_183()
{
	int iVar0;
	int iVar1;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != -1241981548 && iVar1 != 1020517461) && iVar1 != 1259174088) && iVar1 != -1075420544) && iVar1 != -1767895052)
		{
			return 1;
		}
	}
	return 0;
}

int func_184()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return 0;
	}
	iVar0 = func_483(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return 1;
	}
	return 0;
}

bool func_185()
{
	return Global_1898164->f_163;
}

bool func_186()
{
	return Global_1911914->f_1578;
}

bool func_187(int iParam0)
{
	return func_272(Global_1935496->f_27, iParam0);
}

bool func_188()
{
	return Global_1946804->f_2792;
}

int func_189(int iParam0)
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

bool func_190(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_191()
{
	return 33537269;
}

int func_192(bool bParam0)
{
	int iVar0;

	if (func_484(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_484(2) && !Global_1392040->f_2) && MISC::GET_GAME_TIMER() >= Global_36614)
	{
		if (bParam0)
		{
			iVar0 = func_485(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_123("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_123("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_484(4194304))
	{
		return 0;
	}
	return 1;
}

int func_193(bool bParam0)
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_123("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_194(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
				{
					func_123("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
				{
					func_123("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_133(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_35 || bParam2)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0, int iParam1)
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

int func_196(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_197(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	func_486(iParam0, iParam1);
}

int func_199(bool bParam0)
{
	if (func_62() == -1)
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

bool func_200(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	struct<14> Var18;
	int iVar32;

	if (func_487(Global_35))
	{
		bParam2 = true;
	}
	bVar0 = false;
	if (!bParam2 && !bParam1)
	{
		if (Global_1935496->f_28 == Global_1935496->f_27)
		{
			return bVar0;
		}
	}
	iVar1 = -1;
	iVar3 = 0;
	Var4.f_9 = -1591664384;
	Var18 = { func_488(0, 1084182731, -1591664384, -1591664384, 0, 0) };
	if (func_489(&Var18, &iVar1, &iVar2, bParam3))
	{
		iVar32 = Global_36636 + 150;
		if (!bParam4)
		{
			if (iVar32 >= iVar2)
			{
				iVar32 = (iVar2 - 1);
				bVar0 = true;
			}
		}
		else
		{
			Global_36636 = 0;
			iVar32 = (iVar2 - 1);
			bVar0 = true;
		}
		iVar3 = Global_36636;
		while (iVar3 <= iVar32)
		{
			if (func_233(&Var4, iVar3, iVar1, iVar2))
			{
				if (!func_490(Var4.f_4))
				{
				}
				else
				{
					if (bParam1)
					{
						func_491(uParam0, Var4.f_4, 1);
					}
					else if (bParam2)
					{
						func_491(uParam0, Var4.f_4, 0);
					}
					else if (Var4.f_4 != 1259508039)
					{
						func_491(uParam0, Var4.f_4, func_492(Var4.f_4));
					}
					Global_36636 = iVar3;
				}
				iVar3++;
				if (bVar0)
				{
					Global_36636 = 0;
					Global_1935496->f_28 = Global_1935496->f_27;
				}
				func_244(iVar1);
				return bVar0;
			}
		}
	}

void func_201(var uParam0)
{
	func_491(uParam0, joaat("weapon_kit_binoculars"), func_32(32));
	func_491(uParam0, joaat("weapon_kit_camera"), func_32(64));
	func_491(uParam0, -1516555556 /* GXTEntry: "Horse Brush" */, func_32(1024));
	func_493(uParam0, func_32(16384));
	func_494(uParam0, func_32(128));
	func_495(uParam0, func_32(4));
	func_496(uParam0, func_32(8));
}

void func_202(var uParam0)
{
	int iVar0;
	struct<2> Var1;

	if (Global_1935496->f_72.f_41 <= 0)
	{
		return;
	}
	Var1.f_1 = -1;
	iVar0 = 0;
	while (iVar0 <= Global_1935496->f_72.f_41)
	{
		Var1 = { *(Global_1935496->f_72[iVar0 /*2*/]) };
		if (!func_161(Var1, 0))
		{
		}
		else
		{
			func_497(uParam0, &Var1);
			func_498(iVar0);
			iVar0++;
		}
	}
	Global_1935496->f_72.f_41 = 0;
}

void func_203()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= Global_1935496->f_72.f_41)
	{
		if (!func_498(iVar0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	Global_1935496->f_72.f_41 = 0;
}

int func_204(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (bVar1)
	{
		func_499();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_205()
{
	if (func_62() == -1)
	{
		if (!func_500(18, &(Global_1935689->f_10225)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689->f_10225, 3, "satchel_elements/name(id=%x):description0");
}

void func_206()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iVar0 = func_251();
	iVar1 = func_501(func_144(), iVar0);
	iVar2 = func_85(func_241(0));
	iVar3 = func_85(func_241(1));
	iVar4 = func_85(func_241(6));
	if (func_27(0))
	{
		if (iVar0 == 19)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_238(iVar2))
			{
				func_198(&(Global_1935689->f_10186), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_238(iVar3))
			{
				func_198(&(Global_1935689->f_10186), 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && func_238(iVar4))
			{
				func_198(&(Global_1935689->f_10186), 4);
			}
		}
		else if (iVar0 == 10 || iVar0 == 18)
		{
			fVar5 = 30f;
			if (iVar1 == 55)
			{
				fVar5 = 40f;
			}
			else if (iVar0 == 2)
			{
				fVar5 = 75f;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_502(iVar2, iVar1, fVar5))
			{
				func_198(&(Global_1935689->f_10186), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && func_502(iVar3, iVar1, fVar5))
			{
				func_198(&(Global_1935689->f_10186), 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && func_502(iVar4, iVar1, fVar5))
			{
				func_198(&(Global_1935689->f_10186), 4);
			}
		}
	}
}

int func_207()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (&Global_1935689->f_10168[iVar0] == Global_1935689->f_10189)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_208(var uParam0)
{
	Global_1935689->f_10166 = 0;
	if (!Global_1935689->f_9)
	{
		func_211(0);
		func_503();
	}
	else if ((((Global_1935689->f_10189 != -2074770370 && Global_1935689->f_10189 != -283002878) && Global_1935689->f_10189 != 822208792) && Global_1935689->f_10189 != -182626652) && Global_1935689->f_10189 != -693134279)
	{
		func_70(Global_1935689->f_10189);
	}
	else
	{
		func_211(0);
		func_503();
	}
	func_504(uParam0, 0, "All", 443945499);
	func_504(uParam0, -1666604090, "Provisions", 2049523496);
	func_504(uParam0, -96974025, "Remedies", -607937119);
	func_504(uParam0, -1268291907, "Ingredients", 1063323264);
	func_504(uParam0, -1559802791, "Materials", -2096783589);
	func_504(uParam0, -156634416, "Kit", -461468653);
	func_504(uParam0, 1561961676, "Valuables", -2043887681);
	func_504(uParam0, 1061777683, "Documents", 1761254900);
	func_505(uParam0);
	func_506(uParam0);
	if (func_27(0))
	{
		if (func_251() == 2)
		{
			func_211(-693134279);
		}
		else
		{
			func_211(-182626652);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689->f_10201, Global_1935689->f_10166);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689->f_10203, func_207());
}

bool func_209(int iParam0)
{
	var uVar0;

	return func_507(iParam0, &uVar0);
}

int func_210(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1935689->f_10180;
	if (iVar0 >= 2)
	{
		return -1;
	}
	if (!func_245(sParam3, &((Global_1935689->f_10181[iVar0 /*2*/])->f_1), Global_1935689->f_10181[iVar0 /*2*/], iParam4, 0))
	{
		return -1;
	}
	Global_1935689->f_10180++;
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0, -1, -1287062382, uVar1);
	return iVar0;
}

void func_211(int iParam0)
{
	if (Global_1935689->f_10189 != iParam0)
	{
		Global_1935689->f_10189 = iParam0;
		Global_1935689->f_10196 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689->f_10203, func_207());
	func_508(Global_1935689->f_10189 != -283002878);
}

void func_212(int iParam0, var uParam1, bool bParam2)
{
	func_211(iParam0);
	if (!bParam2)
	{
		func_13(iParam0);
	}
}

int func_213()
{
	var uVar0;
	int iVar1;

	if (Global_1935689->f_18 == 0)
	{
		Global_1935689->f_10167 = 0;
	}
	else
	{
		uVar0 = Global_1935689->f_10167;
		iVar1 = (Global_1935689->f_10166 - 1);
		switch (Global_1935689->f_18)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1935689->f_10167 = iVar1;
				break;
		}
		if (Global_1935689->f_18 == -283002878)
		{
			if (func_27(0))
			{
				Global_1935689->f_10167 = (iVar1 - 1);
			}
			else
			{
				Global_1935689->f_10167 = iVar1;
			}
		}
		func_104(uVar0);
		return 1;
	}
	return 0;
}

void func_214()
{
	if (Global_1572887->f_12 == -1)
	{
		return;
	}
	Global_1058888->f_2 = 0;
}

void func_215(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1935689->f_10180 > 0)
	{
		Global_1935689->f_10180 = (Global_1935689->f_10180 - 1);
		func_244((Global_1935689->f_10181[Global_1935689->f_10180 /*2*/])->f_1);
	}
}

void func_216(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_217(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	*bParam2 = 0;
	Var0 = { func_450(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_121(iVar13) == 526314052)
				{
					if (func_218(iVar13, 3) > 0)
					{
					}
					else
					{
						Jump @142; //curOff = 125
						if (func_218(iVar13, 0) > 0)
						{
						}
						else if (func_509(iVar13, iParam1, &Var14, &iVar45, 1, 0))
						{
							iVar46 = 0;
							while (iVar46 < iVar45)
							{
								if (iParam0 == &Var14[iVar46 /*2*/])
								{
									*bParam2 = 1;
									*iParam3 = (*iParam3 + (Var14[iVar46 /*2*/])->f_1);
								}
								iVar46++;
							}
						}
					}
					iVar12++;
					ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
					return 1;
				}
			}
		}
	}

int func_218(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_439(0) };
	Var0.f_4 = func_510(iParam1);
	Var5 = { func_154(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_199(0), &Var5, 0);
	return uVar9;
}

int func_219(int iParam0)
{
	if ((func_111(iParam0, -839724752) || func_111(iParam0, -887064662)) || func_111(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
	}
	if (func_111(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

bool func_221(int iParam0, int iParam1)
{
	return (func_511(iParam0, iParam1) || func_512(iParam0, iParam1));
}

int func_222(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -151356522: /* GXTEntry: "Poor Bluegill" */
		case 1006434513: /* GXTEntry: "Bluegill" */
			iVar0 = joaat("a_c_fishbluegil_01_sm");
			break;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
		case 1481288777: /* GXTEntry: "Poor Bullhead Catfish" */
			iVar0 = joaat("a_c_fishbullheadcat_01_sm");
			break;
		case -1824685471: /* GXTEntry: "Poor Chain Pickerel" */
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			iVar0 = joaat("a_c_fishchainpickerel_01_sm");
			break;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			iVar0 = joaat("a_c_fishchannelcatfish_01_lg");
			break;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			iVar0 = joaat("a_c_fishlakesturgeon_01_lg");
			break;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
		case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
			iVar0 = joaat("a_c_fishlargemouthbass_01_ms");
			break;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			iVar0 = joaat("a_c_fishlongnosegar_01_lg");
			break;
		case -1538397860: /* GXTEntry: "Muskie" */
		case -293259613: /* GXTEntry: "Poor Muskie" */
			iVar0 = joaat("a_c_fishmuskie_01_lg");
			break;
		case 193037129: /* GXTEntry: "Northern Pike" */
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			iVar0 = joaat("a_c_fishnorthernpike_01_lg");
			break;
		case -861419347: /* GXTEntry: "Poor Perch" */
		case 1416872916: /* GXTEntry: "Perch" */
			iVar0 = joaat("a_c_fishperch_01_sm");
			break;
		case 357567274: /* GXTEntry: "Poor Redfin Pickerel" */
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			iVar0 = joaat("a_c_fishredfinpickerel_01_sm");
			break;
		case 683583793: /* GXTEntry: "Poor Rock Bass" */
		case 1042542561: /* GXTEntry: "Rock Bass" */
			iVar0 = joaat("a_c_fishrockbass_01_sm");
			break;
		case -1202625002: /* GXTEntry: "Poor Smallmouth Bass" */
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			iVar0 = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
		case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			iVar0 = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
		case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
		case 785407605: /* GXTEntry: "Steelhead Trout" */
			iVar0 = joaat("a_c_fishrainbowtrout_01_ms");
			break;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			iVar0 = joaat("a_c_bat_01");
			break;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			iVar0 = joaat("a_c_bluejay_01");
			break;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			iVar0 = joaat("a_c_frogbull_01");
			break;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			iVar0 = joaat("a_c_cardinal_01");
			break;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			iVar0 = joaat("a_c_cedarwaxwing_01");
			break;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			iVar0 = joaat("a_c_chipmunk_01");
			break;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			iVar0 = joaat("a_c_crab_01");
			break;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			iVar0 = joaat("a_c_crow_01");
			break;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			iVar0 = joaat("a_c_oriole_01");
			break;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			iVar0 = joaat("a_c_carolinaparakeet_01");
			break;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			iVar0 = joaat("a_c_pigeon");
			break;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			iVar0 = joaat("a_c_quail_01");
			break;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			iVar0 = joaat("a_c_rat_01");
			break;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			iVar0 = joaat("a_c_robin_01");
			break;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			iVar0 = joaat("a_c_songbird_01");
			break;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			iVar0 = joaat("a_c_sparrow_01");
			break;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			iVar0 = joaat("a_c_squirrel_01");
			break;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			iVar0 = joaat("a_c_toad_01");
			break;
		case -1403731492: /* GXTEntry: "Good Woodpecker Carcass" */
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
		case 1496267371: /* GXTEntry: "Poor Woodpecker Carcass" */
			iVar0 = joaat("a_c_woodpecker_01");
			break;
	}
	return iVar0;
}

int func_223(int iParam0)
{
	if (func_111(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_111(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_111(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0)
{
	if (func_111(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_111(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_111(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_225(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_513(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

bool func_226(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_227(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

float func_228(int iParam0, int iParam1)
{
	float fVar0;

	fVar0 = 1f;
	if (!func_161(iParam1, 0))
	{
		return fVar0;
	}
	if (!func_514(iParam0, iParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_229(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch (((*uParam0)[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (iParam1 == ((*uParam0)[iVar0 /*7*/])->f_2)
				{
					return ((*uParam0)[iVar0 /*7*/])->f_6;
				}
				break;
			case 2:
				if (func_119(iParam1) == ((*uParam0)[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_515(iParam1, -915411861, 1, 0, 0));
				if (((*uParam0)[iVar0 /*7*/])->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = ((*uParam0)[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= ((*uParam0)[iVar0 /*7*/])->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * ((*uParam0)[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

int func_230(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_516(iParam0, iParam1, &Var0, &iVar21, bParam2))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (&Var0[iVar22 /*2*/] == 2084597891)
		{
			return (Var0[iVar22 /*2*/])->f_1;
		}
		else if (&Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

char* func_231(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_232(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_233(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_234(int iParam0, int iParam1)
{
	return iParam1 == func_259(iParam0, 1224357681);
}

int func_235(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_517(uParam0->f_9))
		{
			return 0;
		}
	}
	if (!func_490(uParam0->f_4))
	{
		return 0;
	}
	if (!func_518(uParam0->f_4, iParam1, 0))
	{
		return 0;
	}
	if (!func_249(uParam0->f_4))
	{
		return 0;
	}
	if (func_27(0))
	{
		if (!func_161(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return 0;
		}
	}
	if (Global_1935689->f_10190 == 0 && !func_163())
	{
		func_90(uParam0->f_4);
	}
	return 1;
}

void func_236(struct<11> Param0, var uParam11, var uParam12, var uParam13, int iParam14)
{
	char* sVar0;
	var uVar1;
	var uVar2;
	char* sVar3;
	int iVar4;

	if (func_161(Param0.f_4, 0))
	{
		sVar0 = func_266(Param0.f_4);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10200, Global_1935689->f_10194);
		uVar2 = uVar1;
		sVar3 = func_519(Param0.f_4);
		if (iParam14 > 0)
		{
			iVar4 = iParam14;
		}
		else
		{
			iVar4 = func_166(func_165(0), Param0.f_4, 0);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar2, sVar0, iVar4, Param0.f_10, sVar3, joaat("COLOR_PURE_WHITE"));
		Global_1935689->f_10194++;
	}
}

float func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_520(Global_35, iParam0, bParam1, bParam2);
}

int func_238(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	if (func_358() == 3)
	{
		vVar0 = { func_521(func_358()) };
		fVar3 = (func_522() + 7f);
		if (func_523(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
		{
			return 1;
		}
	}
	else if (func_524(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_239(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_240(int iParam0)
{
	if (iParam0 == Global_1935689->f_18)
	{
		return 1;
	}
	return 0;
}

int func_241(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_242(int iParam0)
{
	iParam0 = func_241(iParam0);
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

float func_243(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_244(int iParam0)
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

int func_245(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_199(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_246(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_259(Param0.f_4, 1224357681);
	bVar1 = func_519(Param0.f_4);
	if (func_525(iVar0))
	{
		if (Global_1935689->f_19.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1935689->f_19.f_1)
			{
				if (iVar0 == &Global_1935689->f_19.f_2[iVar2 /*2*/])
				{
					func_526(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_527(iVar0, bVar1);
		}
		else
		{
			func_527(iVar0, bVar1);
		}
	}
}

int func_247()
{
	if (Global_1935689->f_10189 == -182626652)
	{
		switch (func_251())
		{
			case 10:
			case 18:
			case 19:
				return 1;
		}
	}
	else if (Global_1935689->f_10189 == -2074770370)
	{
		return func_24();
	}
	else if (Global_1935689->f_10189 == -693134279)
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_528(iParam0);
		if (!func_161(iVar0, 0))
		{
			iVar0 = func_529(iParam0);
		}
	}
	else
	{
		iVar0 = func_529(iParam0);
	}
	return iVar0;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case -776155824: /* GXTEntry: "Animal Carcass Perfect" */
		case -45650221: /* GXTEntry: "Animal Carcass Poor" */
		case 1715058708: /* GXTEntry: "Animal Carcass Good Quality" */
			return 0;
	}
	if (func_27(0) && Global_1914319->f_16855 == 2)
	{
		if (!func_530(iParam0))
		{
			return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
				return 0;
		}
	}
	if (func_62() == 0)
	{
		if (func_111(iParam0, -805003139))
		{
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
			{
				return 0;
			}
		}
	}
	if (func_119(iParam0) == -2130996531 && !(func_111(iParam0, -1540973036) || func_111(iParam0, 1192444843)))
	{
		return 0;
	}
	return 1;
}

int func_250()
{
	int iVar0;

	if (func_27(0))
	{
		iVar0 = func_251();
		if ((iVar0 == 10 || iVar0 == 18) || iVar0 == 19)
		{
			if (Global_1935689->f_10189 == -283002878 || (Global_1935689->f_10189 == -182626652 && func_84()))
			{
				return 1;
			}
		}
		else if (func_251() == 2 && (Global_1935689->f_10189 == -693134279 || Global_1935689->f_10189 == -283002878))
		{
			return 1;
		}
	}
	else if (Global_1935689->f_10189 == -283002878)
	{
		return 1;
	}
	return 0;
}

int func_251()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (func_531(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_252(bool bParam0, bool bParam1)
{
	var uVar0;

	uVar0 = 1000;
	func_532(&uVar0, bParam1);
	return func_533(&uVar0, bParam0);
}

var func_253(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_165(0);
	func_534(&iVar0, &uVar1, bParam0);
	return uVar1;
}

void func_254(var uParam0, var uParam1, int iParam2)
{
	struct<2> Var0[16];
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 0)
	{
		if (*uParam0 > 0)
		{
			iVar36 = func_199(0);
			iVar33 = (*uParam0 - 1);
			while (iVar33 >= 0)
			{
				if (!func_233(uParam1, iVar33, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(uParam1, iParam2, 1))
				{
				}
				else
				{
					iVar37 = uParam1->f_4;
					iVar38 = func_535(iVar37, iVar36);
					bVar35 = false;
					iVar34 = 0;
					while (iVar34 < 16)
					{
						if (iVar37 == &Var0[iVar34 /*2*/])
						{
							bVar35 = true;
						}
						else
						{
							iVar34++;
						}
					}
					if (!bVar35)
					{
						iVar39 = 0;
						while (iVar39 < 16)
						{
							if (!func_161(&(Var0[iVar39 /*2*/]), 0))
							{
								Var0[iVar39 /*2*/] = iVar37;
								(Var0[iVar39 /*2*/])->f_1 = iVar38;
							}
							else
							{
								if (iVar38 > (Var0[iVar39 /*2*/])->f_1)
								{
									func_536(&Var0, iVar39, &iVar37, &iVar38);
								}
								iVar39++;
							}
						}
					}
				}
				iVar33 = (iVar33 + -1);
			}
			func_537(&Var0);
		}
	}
}

void func_255(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	bool bVar0;
	char* sVar1;
	bool bVar2;
	vector3 vVar3;
	char* sVar6;
	int iVar7;

	if (func_161(Param0.f_4, 0))
	{
		bVar0 = func_519(Param0.f_4);
		if (func_68())
		{
			if (!bVar0 || Param0.f_4 == 1566949660)
			{
				return;
			}
		}
		sVar1 = func_266(Param0.f_4);
		bVar2 = ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(Param0.f_4);
		vVar3 = { func_538(Param0.f_4) };
		sVar6 = func_539(Param0.f_4);
		if (iParam14 > 0)
		{
			iVar7 = iParam14;
		}
		else
		{
			iVar7 = func_166(func_165(0), Param0.f_4, 0);
		}
		func_540(-1553587059, sVar1, &vVar3, bVar0, iVar7, bVar2, sVar6, joaat("COLOR_PURE_WHITE"));
		Global_1935689->f_19.f_203++;
	}
}

void func_256()
{
	if (func_251() != 2)
	{
		if (func_257(joaat("weapon_kit_binoculars"), 1, 0))
		{
			func_258(joaat("weapon_kit_binoculars"), 0);
		}
		if (func_257(joaat("weapon_kit_camera"), 1, 0))
		{
			func_258(joaat("weapon_kit_camera"), 0);
		}
		func_541();
		if (func_257(-1838434463 /* GXTEntry: "Camp" */, 1, 0))
		{
			func_258(-1838434463 /* GXTEntry: "Camp" */, 0);
		}
		else if (func_257(2019377485 /* GXTEntry: "Camp" */, 1, 0))
		{
			func_258(2019377485 /* GXTEntry: "Camp" */, 0);
		}
		func_542();
	}
}

bool func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_161(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_119(iParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
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
		if (!func_543(iParam0, 1))
		{
			return false;
		}
	}
	return func_264(iParam0, 0, bParam2) >= iParam1;
}

void func_258(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = iParam0;
	if (!bParam1)
	{
		func_255(Var0, 1);
	}
	else
	{
		func_236(Var0, 0);
	}
}

int func_259(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
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

int func_260(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902: /* GXTEntry: "Ginseng" */
			return 2;
		case -1602657245: /* GXTEntry: "Bay Bolete" */
			return 4;
		case -1991037110: /* GXTEntry: "Blackberry" */
			return 5;
		case 1047281747: /* GXTEntry: "Currant" */
			return 6;
		case -398744080: /* GXTEntry: "Burdock Root" */
			return 7;
		case -1066874997: /* GXTEntry: "Chanterelle" */
			return 8;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
			return 11;
		case 2064962445: /* GXTEntry: "Creeping Thyme" */
			return 12;
		case -1620920647: /* GXTEntry: "English Mace" */
			return 15;
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
			return 16;
		case -597058368: /* GXTEntry: "Indian Tobacco" */
			return 20;
		case 128702355: /* GXTEntry: "Milkweed" */
			return 23;
		case -2051332199: /* GXTEntry: "Oleander Sage" */
			return 26;
		case 546981776: /* GXTEntry: "Oregano" */
			return 27;
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
			return 28;
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			return 29;
		case -746674788: /* GXTEntry: "Ram\'s Head" */
			return 31;
		case 599861917: /* GXTEntry: "Raspberry" */
			return 33;
		case -1781387050: /* GXTEntry: "Sage" */
			return 34;
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			return 37;
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
			return 38;
		case 1216456215: /* GXTEntry: "Wild Carrot" */
			return 39;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 40;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 41;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 42;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 43;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 1;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 9;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 10;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 14;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 17;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 21;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 22;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 24;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 25;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 30;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 32;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 35;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 36;
	}
	return 0;
}

int func_261(int iParam0)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	return func_545(iParam0, 4, 1);
}

void func_262(int iParam0, var uParam1)
{
	if (func_68())
	{
		func_546(1);
		if (func_23())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_547(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_547(), -31549930);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10218, true);
	}
	else if (func_27(0) || func_68())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_10215))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10214, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_548(iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_547(), func_549(iParam0));
		func_550(iParam0, uParam1);
	}
}

int func_263(int iParam0)
{
	if (func_551())
	{
		return 0;
	}
	if (func_62() == 0)
	{
		return 0;
	}
	else if (!func_27(0) && !func_68())
	{
		if ((((func_265(iParam0, 0) == 1 || func_111(iParam0, 173360570)) || func_111(iParam0, 1291597743)) || func_111(iParam0, -928967997)) || func_111(iParam0, 747873593))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_264(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_359(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_552(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_199(bParam2), iParam0, 0);
	return iVar2;
}

int func_265(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_153(iParam0, 0, 0) };
	return func_553(iParam0, &Var0, 0, bParam1);
}

int func_266(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_267(int iParam0)
{
	int iVar0;

	iVar0 = func_260(&iParam0);
	if (iVar0 != 0 && !func_554(func_260(&iParam0)))
	{
		if (!func_261(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return func_555(iParam0);
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_220(iParam0))
	{
		if (iParam1 > 1)
		{
			iVar1 = func_556(iParam0);
			iVar2 = (iParam1 - iVar1);
			iVar3 = func_79(iParam0, 0);
			iVar4 = func_79(iParam0, 1);
			iVar0 = ((iVar4 * iVar1) + (iVar3 * iVar2));
		}
		else
		{
			iVar0 = func_79(iParam0, func_557(iParam0));
		}
	}
	else
	{
		iVar0 = (func_79(iParam0, 0) * iParam1);
	}
	return iVar0;
}

int func_269(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_558(iParam0);
	}
	if (func_559(iParam0, iParam1))
	{
		return 0;
	}
	return func_560(iParam0, iParam1);
}

int func_270(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689->f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689->f_10225;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_271(var uParam0)
{
	func_546(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_547(), 327167317);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_561(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

bool func_272(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_273(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_562(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_156(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_199(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_274(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_562(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_446(*uParam1, &Var0, bParam6, 0))
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
	if (!func_156(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_199(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_275(int iParam0)
{
	if (func_111(iParam0, 1573112293))
	{
		return func_563(iParam0);
	}
	switch (func_121(iParam0))
	{
		case -77448735:
			if (func_564(iParam0))
			{
				return func_563(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_563(iParam0);
		case 1802292908:
			return func_44();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_191();
		case -525676072:
			return func_191();
		case 1779021115:
			if (func_161(iParam0, 0))
			{
				if (iParam0 == joaat("weapon_kit_camera"))
				{
					return func_54();
				}
			}
			return func_55();
		case -1823706425:
			return func_56();
		case -854348463:
			return func_53();
		default:
			if (func_161(iParam0, 0))
			{
				if (func_111(iParam0, 1192444843) || func_111(iParam0, -1540973036))
				{
					return func_58();
				}
				else if (func_111(iParam0, 1919582297))
				{
					return func_36();
				}
				else if (func_111(iParam0, 1147021565))
				{
					return func_35();
				}
				switch (iParam0)
				{
					case -2035110427: /* GXTEntry: "Mortar and Pestle" */
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return func_57();
					case -1516555556: /* GXTEntry: "Horse Brush" */
						return func_47();
				}
			}
			return func_33();
	}
	return func_33();
}

int func_276()
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_565(iParam0, 0);
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
		func_566(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_278(int iParam0, int iParam1)
{
	if (!func_567(iParam0))
	{
		return;
	}
	func_568(iParam0, iParam1);
}

bool func_279(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_280()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_281(int iParam0)
{
	if (func_62() != -1)
	{
		return 0;
	}
	return func_296(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_282(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_283(int iParam0)
{
	Global_40.f_12018.f_26 = (Global_40.f_12018.f_26 || iParam0);
}

void func_284(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_280() && (func_381(38) || func_281(38)))
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
			if (func_280() && (func_381(39) || func_281(39)))
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
			if (func_280() && (func_381(49) || func_281(49)))
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
		if (func_280() && (func_381(38) || func_281(38)))
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
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_571(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_570(func_379(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_280() && (func_381(39) || func_281(39)))
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
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_280() && (func_381(49) || func_281(49)))
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
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_569(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_280() && (func_381(38) || func_281(38)))
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
			if (func_280() && (func_381(39) || func_281(39)))
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
			iVar9 = func_572(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_280() && (func_381(41) || func_281(41)))
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
			if (func_280() && (func_381(49) || func_281(49)))
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
			iVar9 = func_572(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_573(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_574(iParam0, iVar13, iVar14))
	{
	}
	if (func_575(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_576(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_577(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_578(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_579(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_286(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_287(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_288(int iParam0)
{
	Global_40.f_12018.f_3 = (Global_40.f_12018.f_3 || iParam0);
}

void func_289(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_290(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_291(int iParam0)
{
	Global_40.f_12018.f_4 = (Global_40.f_12018.f_4 || iParam0);
}

void func_292(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_293(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_294(int iParam0)
{
	Global_40.f_12018.f_2 = (Global_40.f_12018.f_2 || iParam0);
}

void func_295(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_296(int iParam0, bool bParam1)
{
	switch (func_580(iParam0))
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

int func_297(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_259(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

void func_298(int iParam0)
{
	int iVar0;

	iVar0 = 1428936325;
	switch (func_581())
	{
		case 0:
			iVar0 = 1428936325;
			break;
		case 3:
			iVar0 = 1791580586;
			break;
		case 1:
			iVar0 = 1731192422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_299()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_300(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_584(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

void func_301(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_581())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_302(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_581())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_303(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_581())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_304(int iParam0)
{
	int iVar0;

	iVar0 = -362580870;
	switch (func_581())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_305(int iParam0)
{
	int iVar0;

	iVar0 = -680642132;
	switch (func_581())
	{
		case 0:
			iVar0 = -680642132;
			break;
		case 1:
			iVar0 = -267849149;
			break;
		case 3:
			iVar0 = 1759003815;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_306(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_581())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_307(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_581())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_308(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_581())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_309(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_581())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_310(int iParam0)
{
	int iVar0;

	iVar0 = 1076410848;
	switch (func_581())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_311(int iParam0)
{
	int iVar0;

	iVar0 = 1516413548;
	switch (func_581())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = -1454586679;
	switch (func_581())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_313(int iParam0)
{
	int iVar0;

	iVar0 = 406178289;
	switch (func_581())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_111(iParam0, 1573112293))
		{
			func_585(func_260(&iParam0), 1, 1);
		}
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_314(int iParam0)
{
	int iVar0;

	iVar0 = 1934039819;
	switch (func_581())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

void func_315(int iParam0)
{
	int iVar0;

	iVar0 = -1054661625;
	switch (func_581())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_582(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_583(iParam0, 1);
		func_149(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_316(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_317(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_318(int iParam0)
{
	if (func_316(iParam0, 1))
	{
		func_586(1);
	}
}

int func_319(int iParam0)
{
	if (!func_587(iParam0))
	{
		return 0;
	}
	if (func_588(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_589(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_321()
{
	return Global_40.f_1095.f_3054;
}

void func_322(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_323(struct<4> Param0)
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
			if (func_590(Param0))
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
			func_591(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_322(8);
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
			if (func_590(Param0))
			{
				return;
			}
			func_591(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_322(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_339(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_324(int iParam0)
{
	if (func_592())
	{
		return 0;
	}
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!func_257(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_325(int iParam0)
{
	return func_593(iParam0);
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_594(iParam0);
	if (func_111(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_595(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_596();
			}
			else
			{
				iVar0 = func_597();
			}
		}
		else if (func_272(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_598();
		}
		else
		{
			iVar0 = func_599();
		}
	}
	else if (func_600(&iVar2))
	{
		if (func_111(iVar2, -1303648999))
		{
			iVar0 = func_596();
		}
		else
		{
			iVar0 = func_597();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_598();
	}
	else
	{
		iVar0 = func_599();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_327(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_328()
{
	func_601(&(Global_1946804->f_2776));
	func_602(32768);
	func_603(1108822547, 8, 6);
}

bool func_329(int iParam0, bool bParam1)
{
	return func_604(iParam0, 0) < func_605(iParam0, bParam1);
}

void func_330(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_606(iParam0))
	{
		return;
	}
	iVar0 = func_121(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_607(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_607(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_607(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_607(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_607(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_607(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_331(0))
	{
		func_608(iParam0, 1);
		if (func_609() == 1160113249)
		{
			func_608(func_331(-2125499975), 0);
		}
		else
		{
			func_608(func_331(1160113249), 0);
		}
	}
	func_610();
	if (func_39(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_199(0), iParam0, 0);
	}
	func_131(iParam0, bParam3);
	if (bParam2)
	{
		func_611(0, 0);
	}
}

int func_331(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_609();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

void func_332(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_121(iParam1);
	if (iVar0 != func_121(iParam0))
	{
		return;
	}
	func_612(iParam0, iParam1, 1);
}

int func_333(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_613(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_334(int iParam0, int iParam1)
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

int func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_614();
	if (iParam2 == 39)
	{
		Var0 = { func_153(iParam0, 1, 0) };
		iParam2 = func_334(func_333(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_111(iParam0, 866047851) && func_615(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_327(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_616(func_613(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_617(iParam2);
	func_618(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_619(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_619(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_620(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_621(iParam0, iParam2, iParam1, func_62() != -1);
	if (bParam4)
	{
		func_622(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_622(&(Global_1946804->f_1378), 1, 0);
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
				func_603(func_613(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_336(bool bParam0, bool bParam1, bool bParam2)
{
	func_623(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_337(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_334(iParam0, 1);
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

void func_338(int iParam0)
{
	struct<4> Var0;

	if (func_624(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_625(Var0);
}

void func_339(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_625(Var0);
}

int func_340(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_154(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_199(bParam6), &Var0, 0);
	return uVar4;
}

bool func_341()
{
	return Global_1914319->f_18996.f_1;
}

bool func_342()
{
	return Global_1914319->f_18996;
}

char* func_343()
{
	switch (Global_1914319->f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		default:
			break;
	}
	return "";
}

bool func_344(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_345(int iParam0)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_346(int iParam0)
{
	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_347(int iParam0)
{
	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

float func_348(int iParam0)
{
	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_349(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_350(int iParam0)
{
	return func_272(((*Global_1129543)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/])->f_58, iParam0);
}

bool func_351()
{
	return !func_350(2);
}

bool func_352(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147325->f_1 && iParam0) != 0;
}

int func_353()
{
	if ((((func_27(0) && !func_626()) || func_627()) || Global_1935689->f_1) || func_628())
	{
		return 0;
	}
	return 1;
}

void func_354(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

var func_355(int iParam0, int iParam1)
{
	return func_629(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_356(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_630(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

bool func_357(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_358()
{
	return Global_40.f_4283;
}

int func_359(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_119(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_111(iParam0, 1399091007))
	{
		func_631(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_360(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_161(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_632())
	{
		func_633(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_634(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_634(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_384(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_119(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_635(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
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
	sVar15 = func_231(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_266(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_111(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_266(iParam0));
	}
	func_636(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_361(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_161(iParam0, 0))
	{
		return Var0;
	}
	if (func_111(iParam0, -305066475))
	{
		if (func_62() == -1)
		{
			if (func_111(iParam0, -537818634))
			{
				return func_637(189951448);
			}
			else
			{
				return func_637(1176172851);
			}
		}
	}
	else if (func_111(iParam0, -537818634))
	{
		return func_637(-963660207);
	}
	if (func_111(iParam0, 2084895747))
	{
		return func_637(1694039471);
	}
	return Var2;
}

int func_362(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_488(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_638(&Var0, func_440(0));
	}
	if (!func_489(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_233(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_274(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_244(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

void func_363(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_111(iParam0, 606799272))
		{
			func_639(iParam0, iParam1);
		}
		if (func_111(iParam0, -1112814642) && func_111(iParam0, -1697809989))
		{
			func_410(iParam0, iParam1, 1, 0);
		}
	}
}

void func_364(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_365(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_640(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_641(iParam0))
	{
		return 0;
	}
	if (func_642(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_643(iParam0, 1)) || func_644(32768))
	{
		if (!func_643(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_645())
	{
		return 0;
	}
	return 1;
}

void func_366(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_367()
{
	Global_1911914->f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914->f_1581 = 1;
}

bool func_368(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_369(int iParam0)
{
	if (!func_368(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

int func_370(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_62() == -1)
	{
		if (func_646(iParam0) && func_647(iParam0))
		{
			func_648(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_371(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_649(iParam0, iParam1);
	Var0 = { func_153(iParam0, 0, 1) };
	iVar5 = func_553(iParam0, &Var0, 0, 0);
	iVar6 = func_650(iParam0, 0);
	if ((iVar5 > 1 && !func_651()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_111(iParam0, -2051813666))
		{
			func_150(583, 1);
		}
		else
		{
			func_150(582, 0);
		}
	}
	if (func_652(iParam0, &Var0, *iParam1, 0, 0))
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

void func_372(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_259(iParam0, -949239683))
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
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_373(int iParam0)
{
	if (func_62() != -1)
	{
		return false;
	}
	return func_374(iParam0) != 0;
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_653())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_654(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_375(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_653())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_375(iVar0))
		{
			if (func_257(func_654(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_377(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_655(48);
	func_656(0, -1);
}

int func_378(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_379(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_380(int iParam0)
{
	if (func_62() != -1)
	{
		return 0;
	}
	return func_296(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_381(int iParam0)
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (!func_344(iParam0))
	{
		return 0;
	}
	return func_345(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_382()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_257(func_657(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_383(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

bool func_384(int iParam0, int iParam1)
{
	if (!func_161(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_385(int iParam0)
{
	if (!func_658(iParam0))
	{
		return 0;
	}
	return func_659(iParam0);
}

void func_386(int iParam0)
{
	if (!func_658(iParam0))
	{
		return;
	}
	func_660(iParam0);
	func_661(iParam0);
}

int func_387(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_161(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_662(iVar0) || func_663(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_388(int iParam0, bool bParam1)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_389(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_664(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_390(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_153(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_665((375 + iVar28), 1);
			if (func_442(iParam0, &Var0, iVar5, 0))
			{
				if (func_443(iParam0, &Var6, iVar5))
				{
					Var29 = { func_154(iParam0, Var0, iVar5, 0) };
					func_274(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_156(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_391(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_666(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_391(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_393(iParam0))
	{
		return 0;
	}
	if (!func_156(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_392(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_388(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_62() == -1)
		{
			func_389(iVar0);
			if (iParam1 == 1248274121)
			{
				func_667(iVar0);
			}
		}
		if (!func_652(iParam0, &uVar1, 1, 0, 0))
		{
			func_648(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_668(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_390(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_390(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_390(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_669())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_670(iVar0))
				{
					func_390(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_390(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_671(Global_35, 2, 0, 1);
				if ((((func_664(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_257(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_664(iVar7) && func_257(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_390(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_390(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_390(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_150(480, 1);
	}
	return 1;
}

bool func_393(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_393(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_664(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_257(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
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
		func_428(func_672(iParam0), func_266(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_62() == -1)
		{
			if (func_296(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_150(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_156(0))
	{
		if (func_391(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_433(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_395(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_673()) || iParam0 != -615217896)
	{
		if (func_674(Global_35, iParam0, &uVar0))
		{
			func_130(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_419();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_419();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_419();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_417();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_415();
			break;
	}
}

void func_396(int iParam0)
{
	switch (iParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_415();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_416();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_417();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_418();
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
			func_419();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_675();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_676();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_397(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_398(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_399(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_400(int iParam0)
{
	bool bVar0;

	bVar0 = func_111(iParam0, -2017733358);
	if (func_677() < 3)
	{
		if (bVar0)
		{
			if (func_679(func_678(iParam0), iParam0))
			{
				func_428(79, func_266(func_678(iParam0)), 1);
			}
			else
			{
				func_428(78, func_266(func_678(iParam0)), 1);
			}
		}
		else
		{
			func_428(80, func_266(func_680(iParam0)), 1);
		}
	}
}

int func_401()
{
	if (((((func_681(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_681(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_681(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_681(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_681(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_681(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_402(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_682(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_683(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_684(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_403(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_285(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_284(51, 0, 0, 0, 0, -1, 0);
			func_286(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_285(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_284(51, 0, 0, 0, 0, -1, 0);
			func_286(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_285(39, 0, 0, 0, 0, 0, 1, 0);
			func_284(39, 0, 0, 0, 0, -1, 0);
			func_289(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_285(41, 0, 0, 0, 0, 0, 1, 0);
			func_284(41, 0, 0, 0, 0, -1, 0);
			func_292(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_285(49, 0, 0, 0, 0, 0, 1, 0);
			func_284(49, 0, 0, 0, 0, -1, 0);
			func_295(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_285(43, 0, 0, -1791518714, func_685(1), 0, -1, 0);
			func_686(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_285(43, 0, 0, -2087881550, func_685(2), 0, -1, 0);
			func_686(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_285(43, 0, 0, 1908068621, func_685(4), 0, -1, 0);
			func_686(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_285(43, 0, 0, 1611247019, func_685(8), 0, -1, 0);
			func_686(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_285(43, 0, 0, 1319635688, func_685(16), 0, -1, 0);
			func_686(16);
			break;
	}
}

void func_404(int iParam0)
{
	if (func_687() == 1)
	{
		if (func_281(39))
		{
			func_150(342, 0);
		}
		else
		{
			func_150(343, 0);
			func_289(1);
		}
	}
	if (func_687() >= 30)
	{
		func_150(344, 0);
	}
	func_285(39, 0, 0, 0, 0, 0, -1, 0);
	func_284(39, 0, 0, func_687(), 30, 1, 0);
}

void func_405(int iParam0)
{
	if (func_688() == 1)
	{
		if (func_281(49))
		{
			func_150(409, 0);
		}
		else
		{
			func_150(410, 0);
			func_295(1);
		}
	}
	if (func_688() >= 10)
	{
		func_150(411, 0);
	}
	func_285(49, 0, 0, 0, 0, 0, -1, 0);
	func_284(49, 0, 0, func_688(), 10, 1, 0);
}

void func_406(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_150(437, 0);
			func_150(440, 0);
			func_689(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_285(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_572(-949689219, 20), 1, 0);
			func_286(1);
			func_690(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_689(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_285(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_572(-1248968496, 20), 1, 0);
			func_286(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_689(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_285(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_572(1706369307, 20), 1, 0);
			func_286(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_689(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_285(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_572(1520110311, 20), 1, 0);
			func_286(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_150(438, 0);
			func_689(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_285(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_284(51, 0, 0, sVar0, func_572(-1992824800, 20), 1, 0);
			func_286(32768);
			break;
		default:
			func_150(439, 0);
			break;
	}
}

void func_407()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_62() == -1)
	{
		if (!func_281(43))
		{
			if (iParam0 == 281887510)
			{
				func_150(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_150(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_150(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_150(400, 0);
			}
		}
		else if (func_111(iParam0, 412399755))
		{
			func_691(-1791518714);
			if (func_692() == 0)
			{
				func_656(0, 10);
				iVar1 = func_693(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_694(iParam0) < func_695(iParam0))
					{
						func_285(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_281(44))
		{
			if (iParam0 == -222563712)
			{
				func_150(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_150(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_150(401, 0);
			}
		}
		else if (func_111(iParam0, 709057512))
		{
			func_691(-2087881550);
			if (func_692() == 1)
			{
				func_656(0, 10);
				iVar1 = func_693(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_694(iParam0) < func_695(iParam0))
					{
						func_285(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_281(45))
		{
			if (iParam0 == 2116770557)
			{
				func_150(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_150(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_150(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_150(398, 0);
			}
		}
		else if (func_111(iParam0, -1478961327))
		{
			func_691(1908068621);
			if (func_692() == 2)
			{
				func_656(0, 10);
				iVar1 = func_693(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_696(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_697(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_655(48);
					}
					if (func_694(iParam0) < func_695(iParam0))
					{
						func_285(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_694(iParam0) < func_695(iParam0))
					{
						func_285(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_281(46))
		{
			if (iParam0 == 2085530337)
			{
				func_150(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_150(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_150(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_150(406, 0);
			}
		}
		else if (func_111(iParam0, -1238404098))
		{
			func_691(1611247019);
			if (func_692() == 3)
			{
				func_656(0, 10);
				iVar1 = func_693(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_694(iParam0) < func_695(iParam0))
					{
						func_285(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_281(47))
		{
			if (iParam0 == -1521783510)
			{
				func_150(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_150(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_150(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_150(403, 0);
			}
		}
		else if (func_111(iParam0, 1160548794))
		{
			func_691(1319635688);
			if (func_692() == 4)
			{
				func_656(0, 10);
				iVar1 = func_693(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_694(iParam0) < func_695(iParam0))
					{
						func_285(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_284(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_409(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_696(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_697(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_655(48);
		}
	}
}

void func_410(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_257(func_698(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_699(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_700(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_62() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_402(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_402(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_402(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_402(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_402(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_402(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_402(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_402(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_402(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_402(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_402(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_402(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_402(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_701())
			{
				func_402(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_402(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_402(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_402(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_402(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_402(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_402(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_402(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_402(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_402(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_402(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_402(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_402(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_412(int iParam0)
{
	if (func_281(41))
	{
		func_150(363, 0);
	}
	else
	{
		func_150(362, 0);
	}
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_702(-1865241121);
			func_703(-642026005);
			func_704(-642026005);
			func_656(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_702(2117142684);
			func_703(-940584364);
			func_704(-940584364);
			func_656(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_702(-1409326024);
			func_703(1972645282);
			func_704(1972645282);
			func_656(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_702(-641744968);
			func_703(1667205433);
			func_704(1667205433);
			func_656(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_702(-946988203);
			func_703(1362715885);
			func_704(1362715885);
			func_656(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_702(-646136018);
			func_703(1053540370);
			func_704(1053540370);
			func_656(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_702(-955835837);
			func_703(-1100103852);
			func_704(-1100103852);
			func_656(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_702(-179276075);
			func_703(-1409869209);
			func_704(-1409869209);
			func_656(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_702(-492711560);
			func_703(-1760235357);
			func_704(-1760235357);
			func_656(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_702(1764383959);
			func_703(-138366827);
			func_704(-138366827);
			func_656(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_702(317501533);
			func_703(-1261163843);
			func_704(-1261163843);
			func_656(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_702(817753087);
			func_703(-963523016);
			func_704(-963523016);
			func_656(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_702(576606016);
			func_703(560825326);
			func_704(560825326);
			func_656(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_702(814934957);
			func_703(858269539);
			func_704(858269539);
			break;
	}
}

void func_413(int iParam0, int iParam1)
{
	var uVar0;

	func_631(iParam0, iParam1, &uVar0);
}

int func_414(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_671(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_671(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_245("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_244(iVar0);
						if (*iParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_415()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_416()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_417()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_418()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_419()
{
	func_705();
	func_706();
	func_707();
}

void func_420(int iParam0, int iParam1, bool bParam2)
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

void func_421(int iParam0, bool bParam1)
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
	func_569(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_422(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_423(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_424(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_425(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_426(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_427(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_428(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_364(iParam0, &iVar0, &iVar1);
	if (!func_365(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_643(iParam0, 1024))
	{
		return;
	}
	func_366(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = sParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_429(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_364(iParam0, &iVar0, &iVar1);
	if (!func_365(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_643(iParam0, 1024))
	{
		return;
	}
	func_366(iVar0, iVar1);
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

int func_430()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_653())
	{
		return func_431();
	}
	iVar4 = (func_653() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_653())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_708(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_654(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_431()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_653());
	return func_654(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_432(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_433(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_153(iParam0, 0, 1) };
	Var5 = { func_154(iParam0, Var0, Var0.f_4, 0) };
	return func_709(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_434(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_62() != -1)
	{
		return;
	}
	switch (func_121(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_604(81053684, 0) <= 0)
			{
				func_127(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_127(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_126(iParam0);
			if (func_587(iVar0))
			{
				func_710(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_127(30, iParam0, 0, 0, 0);
			}
			if (func_609() == -2125499975 || func_609() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_127(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_609() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_127(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_329(-525676072, 0))
			{
				if (func_711(-525676072, &iVar1))
				{
					func_127(33, iVar1, 0, 0, 0);
				}
			}
			func_127(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_712(99217379))
		{
			func_130(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_386(24);
		if (func_414(&iVar2, 0))
		{
			func_390(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_435(int iParam0)
{
	if (func_111(iParam0, 943695443))
	{
		func_713(0, iParam0);
	}
	else if (func_111(iParam0, -2096528786))
	{
		func_713(1, iParam0);
	}
	else if (func_111(iParam0, -1094167013))
	{
		func_713(2, iParam0);
	}
	else if (func_111(iParam0, 1936654645))
	{
		func_713(3, iParam0);
	}
	else if (func_111(iParam0, 1306489306))
	{
		func_713(4, iParam0);
	}
	else if (func_111(iParam0, 435762317))
	{
		func_713(5, iParam0);
	}
	else if (func_111(iParam0, 1259363210))
	{
		func_713(6, iParam0);
	}
	else if (func_111(iParam0, 881398259))
	{
		func_713(7, iParam0);
	}
	else if (func_111(iParam0, -541549214))
	{
		func_713(8, iParam0);
	}
	else if (func_111(iParam0, 130796156))
	{
		func_713(-1, iParam0);
	}
}

int func_436(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_714(&Var4, 1356624740);
	return func_715(iParam0, &Var4, &uVar0, iParam1);
}

void func_437(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_62() == -1)
			{
				if (func_296(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_150(109, 1);
				}
			}
			break;
	}
}

void func_438(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_717(func_716(0));
	func_636(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_718(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

struct<4> func_439(bool bParam0)
{
	return func_154(joaat("character"), func_719(), -1591664384, bParam0);
}

struct<4> func_440(bool bParam0)
{
	int iVar0;

	iVar0 = func_199(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_154(923904168, func_439(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_154(923904168, func_439(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_154(923904168, func_439(bParam0), -740156546, 0);
}

int func_441(int iParam0, bool bParam1)
{
	if (func_121(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_650(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_442(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_340(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_443(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_720(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_444(bool bParam0)
{
	int iVar0;

	iVar0 = func_199(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_154(271701509, func_439(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_154(271701509, func_439(bParam0), 12999093, 0);
}

int func_445(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_121(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_446(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_199(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_447(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_446(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_119(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_721(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_722(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_723(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_724(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_725(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_726(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_448()
{
	if ((Global_1935689->f_10195 != (Global_1935689->f_19.f_203 - 1) || func_166(func_165(0), Global_1935689->f_10190, 0) > 0) || Global_1935689->f_10195 == 15)
	{
		return 1;
	}
	return 0;
}

int func_449(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, func_224(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_161(&(uVar0[iVar16]), 0) && !func_111(&(uVar0[iVar16]), 1286414894)) && !&uVar0[iVar16] == iParam2)
		{
			func_152(&(uVar0[iVar16]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_157(func_156(0), 1, 0);
	return iVar17;
}

struct<10> func_450(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_451(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_453(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_454(int iParam0)
{
	if (func_368(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

int func_455(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iParam1 = func_727(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_165(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_456(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_456(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(*iParam0);
	iVar1 = func_462(iVar0, iParam1);
	if (func_728(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_361(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (func_729(iParam1))
		{
			func_730(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_730(*iParam0, iParam1, *iParam2);
			func_727(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_462(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_457(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_264(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_149(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_731(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_123("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_458(int iParam0)
{
	int iVar0;

	if (func_62() == -1)
	{
		if ((Global_1914319->f_17370 || iParam0) || Global_1914319->f_16855 == 2)
		{
			iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
			if (iVar0 != func_85(7))
			{
				return 1;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_85(7))
			{
				return 1;
			}
		}
	}
	else
	{
		iVar0 = PED::_0x4C8B59171957BCF7(func_459());
		if (iVar0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_459()
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_460()
{
	if ((func_272(Global_1935689->f_10186, 1) || func_272(Global_1935689->f_10186, 2)) || func_272(Global_1935689->f_10186, 4))
	{
		return 1;
	}
	return 0;
}

int func_461(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_264(iParam0, bParam1, 0);
	if (func_272(Global_1935689->f_10186, 1))
	{
		iVar0 = func_85(func_241(0));
		iVar1 = (iVar1 + func_462(INVENTORY::_0x13D234A2A3F66E63(iVar0), iParam0));
	}
	if (func_272(Global_1935689->f_10186, 2))
	{
		iVar0 = func_85(func_241(1));
		iVar1 = (iVar1 + func_462(INVENTORY::_0x13D234A2A3F66E63(iVar0), iParam0));
	}
	if (func_272(Global_1935689->f_10186, 4))
	{
		iVar0 = func_85(func_241(6));
		iVar1 = (iVar1 + func_462(INVENTORY::_0x13D234A2A3F66E63(iVar0), iParam0));
	}
	return iVar1;
}

int func_462(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;

	if (!func_161(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_732(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_463(int iParam0, int iParam1)
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

bool func_464()
{
	return Global_1894899 & 4 != 0;
}

bool func_465()
{
	return func_733(512);
}

int func_466(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_734(bParam1, bParam2, bParam3);
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

bool func_467(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_468()
{
	return Global_1310750->f_16077 != 0;
}

int func_469(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_470(int iParam0, bool bParam1, bool bParam2)
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
		if (func_735())
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
		iVar0 = func_736(&(Global_1898164->f_1[0 /*5*/]));
		if (func_344(iVar0) && func_737(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_567(&(Global_1898164->f_1[0 /*5*/])))
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

bool func_471(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

int func_472()
{
	return Global_1897952->f_41;
}

bool func_473(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

int func_474(int iParam0)
{
	if (!func_357(iParam0))
	{
		return 0;
	}
	return func_738(iParam0, 33554432);
}

bool func_475()
{
	return (Global_1894899 & 1 != 0 && func_144() != -1);
}

int func_476(int iParam0)
{
	if (!func_357(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_477(int iParam0)
{
	if (func_476(iParam0) != 5)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_478()
{
	int iVar0;

	iVar0 = func_144();
	switch (iVar0)
	{
		case 3:
			return 1;
		case 51:
			return 1;
		case 41:
			return 1;
		case 108:
			return 1;
		case 44:
			return 1;
		case 84:
			return 1;
		case 103:
			return 1;
		case 53:
			return 1;
		case 73:
			return 1;
		case 18:
			return 1;
		case 0:
			return 1;
		case 106:
			return 1;
		case 47:
			return 1;
		case 63:
			return 1;
		case 24:
			return 1;
		case 46:
			return 1;
		case 107:
			return 1;
		case 80:
			return 1;
		case 85:
			return 1;
		case 7:
			return 1;
		case 82:
			return 1;
		case 110:
			return 1;
		case 120:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_479()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = func_144();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return 0;
	}
	else
	{
		iVar1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar2, vVar5, vVar8);
		if (func_739(Global_35, iVar1, 1, 0))
		{
			func_740(iVar1);
			return 1;
		}
		else
		{
			func_740(iVar1);
			return 0;
		}
	}
	return 0;
}

int func_480(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_741(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_481(vector3 vParam0, float fParam3)
{
	if (func_742(vParam0, fParam3))
	{
		return 1;
	}
	if (func_743(vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

int func_482()
{
	return -1;
}

int func_483(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_744(iVar0))
		{
			fVar3 = func_745(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_484(int iParam0)
{
	return func_272(Global_1935496->f_7, iParam0);
}

int func_485(int iParam0)
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
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_486(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_487(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = func_746();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_0x20A4BF0E09BEE146(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

struct<14> func_488(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (iParam0 != 0)
	{
		Var0 = iParam0;
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

int func_489(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_199(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0)
{
	int iVar0;

	iVar0 = func_119(iParam0);
	if ((iVar0 == joaat("weapon") && iParam0 != joaat("weapon_kit_binoculars")) && iParam0 != joaat("weapon_kit_camera"))
	{
		return 0;
	}
	if (iVar0 == joaat("money") && iParam0 != -1167047117)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -1977020088:
		case -1879562593:
		case joaat("horse"):
		case -1650247667:
		case -1013984273:
		case 26423971:
		case 129583122:
		case joaat("ammo"):
		case 658570475:
		case 810656527:
		case joaat("gold"):
		case joaat("component"):
		case 1495295997:
		case 1780172046:
		case 2071704023:
		case 2088138839:
			return 0;
		case joaat("clothing"):
			switch (func_121(iParam0))
			{
				case -525676072:
					if (iParam0 == 1147557067)
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				case 81053684:
					return 1;
				default:
					return 0;
			}
			break;
	}
	if (func_121(iParam0) == -829303394)
	{
		return 0;
	}
	return 1;
}

void func_491(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		INVENTORY::_0x6A564540FAC12211(iParam0, iParam1);
	}
	else
	{
		INVENTORY::_0x766315A564594401(iParam0, iParam1, 0);
	}
}

bool func_492(int iParam0)
{
	return func_747(func_121(iParam0), iParam0);
}

void func_493(var uParam0, bool bParam1)
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
	Var0.f_4 = -854348463;
	func_748(uParam0, Var0, bParam1, 0);
}

void func_494(var uParam0, bool bParam1)
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
	Var0.f_4 = -1823706425;
	func_748(uParam0, Var0, bParam1, 0);
}

void func_495(var uParam0, bool bParam1)
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
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_748(uParam0, Var0, bParam1, 0);
}

void func_496(var uParam0, bool bParam1)
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
	Var0.f_4 = -525676072;
	func_748(uParam0, Var0, bParam1, 0);
}

void func_497(int iParam0, int iParam1)
{
	if (iParam1->f_1 == 1)
	{
		INVENTORY::_0x6A564540FAC12211(iParam0, *iParam1);
	}
	else
	{
		INVENTORY::_0x766315A564594401(iParam0, *iParam1, 0);
	}
}

int func_498(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 19)
	{
		return 0;
	}
	if (&Global_1935496->f_72[iParam0 /*2*/] == 0)
	{
		return 0;
	}
	Global_1935496->f_72[iParam0 /*2*/] = 0;
	(Global_1935496->f_72[iParam0 /*2*/])->f_1 = -1;
	return 1;
}

void func_499()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_500(int iParam0, var uParam1)
{
	if (!func_749(iParam0))
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

int func_501(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_502(int iParam0, int iParam1, float fParam2)
{
	if (!func_226(iParam1))
	{
		return 0;
	}
	if (func_751(iParam0, func_750(iParam1), 1) < fParam2)
	{
		return 1;
	}
	return 0;
}

void func_503()
{
	int iVar0;

	iVar0 = func_752();
	if (func_752() == 822208792)
	{
		iVar0 = 0;
	}
	if (func_27(0))
	{
		if (func_251() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (func_68())
	{
		iVar0 = -2074770370;
	}
	func_70(iVar0);
}

void func_504(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0, Global_1935689->f_10166);
	bVar1 = func_240(iParam1);
	iVar2 = iParam1;
	uVar3 = uVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689->f_10202, Global_1935689->f_10166);
		Global_1935689->f_10167 = Global_1935689->f_10166;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, uVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1935689->f_10168[Global_1935689->f_10166] = iParam1;
	Global_1935689->f_10166++;
}

void func_505(var uParam0)
{
	if (func_84())
	{
		func_504(uParam0, -283002878, "Horse", 771764772);
	}
}

void func_506(var uParam0)
{
	if (func_27(0))
	{
		if (func_251() == 2)
		{
			func_504(uParam0, -693134279, "Send", -1346803962);
		}
		else
		{
			func_504(uParam0, -182626652, "Sell", -1523466777);
		}
	}
	else if (func_68())
	{
		func_504(uParam0, -2074770370, "Donations", -1966717115);
	}
}

int func_507(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_508(bool bParam0)
{
	if (bParam0)
	{
		HUD::_0x50C803A4CD5932C5(1);
		HUD::_0xD4EE21B7CC7FD350(0);
	}
	else
	{
		HUD::_0x50C803A4CD5932C5(0);
		HUD::_0xD4EE21B7CC7FD350(1);
	}
}

int func_509(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_753(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

int func_511(int iParam0, int iParam1)
{
	return func_754(Global_35, iParam0, iParam1);
}

int func_512(int iParam0, int iParam1)
{
	int iVar0;

	if (func_62() == -1)
	{
		iVar0 = func_85(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	return func_754(iVar0, iParam0, iParam1);
}

void func_513(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
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

int func_514(int iParam0, int iParam1, float fParam2)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;

	*fParam2 = 1f;
	if (!func_226(iParam0))
	{
		return 0;
	}
	if (!func_161(iParam1, 0))
	{
		return 0;
	}
	if (!func_500(22, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1023752283;
	Var0.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = func_755(iParam0);
		func_756(iVar6, &uVar5);
		Var0.f_2 = uVar5;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam2, &Var0);
		if (*fParam2 < 1f)
		{
			*fParam2 = 1f;
		}
		return 1;
	}
	return 0;
}

int func_515(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_111(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_509(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_259(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_452(iVar62, iVar61);
					if (func_161(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_515(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_515(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_509(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_516(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar25;

	*iParam3 = 0;
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (!bParam4)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return 0;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam4)
		{
		}
		*((*uParam2)[iVar25 /*2*/]) = { *(Var0.f_4[iVar25 /*2*/]) };
		iVar25++;
	}
	return 1;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case -1162387149:
		case 1084182731:
			return 1;
	}
	return 0;
}

int func_518(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == -2074770370) || bParam2) || func_27(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_161(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return 0;
		}
	}
	if (!bVar0 && func_757(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -283002878:
		case 0:
			if (!func_27(0))
			{
				if (iParam0 == 1807503187)
				{
					return 1;
				}
				if ((((((((((func_518(iParam0, -1559802791, 1) || func_518(iParam0, -1268291907, 1)) || func_518(iParam0, -96974025, 1)) || func_518(iParam0, -1666604090, 1)) || func_518(iParam0, 1561961676, 1)) || func_518(iParam0, -156634416, 1)) || func_518(iParam0, 1061777683, 1)) || func_518(iParam0, -2074770370, 1)) || func_518(iParam0, -693134279, 1)) || func_518(iParam0, -182626652, 1)) || func_758(iParam0))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case -1559802791:
			return func_111(iParam0, 1422457563);
		case -1268291907:
			return func_111(iParam0, 1360707454);
		case -96974025:
			return func_111(iParam0, 1009210113);
		case -1666604090:
			return func_111(iParam0, -193035453);
		case 1561961676:
			return func_111(iParam0, -111938901);
		case -156634416:
			return func_111(iParam0, -928967997);
		case 1061777683:
			return func_111(iParam0, 747873593);
		case -2074770370:
			if (Global_1935689->f_17 == 1 || Global_1935689->f_17 == 2)
			{
				return func_759(iParam0, iParam1);
			}
			else if (func_259(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return 1;
			}
			else
			{
				return func_111(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_384(iParam0, 8388608);
		case -182626652:
			if (func_269(iParam0, Global_1914319->f_16855.f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_519(int iParam0)
{
	if (func_26())
	{
		return func_518(iParam0, -2074770370, 0);
	}
	else if (func_23())
	{
		if (func_111(iParam0, 96549393))
		{
			return 0;
		}
		if (func_111(iParam0, -111938901) || func_259(iParam0, -949239683) == -1337515701)
		{
			return 1;
		}
		if (func_111(iParam0, -121341956))
		{
			return 1;
		}
		return 0;
	}
	else if (func_24())
	{
		if ((((((((func_111(iParam0, 1765172170) || func_111(iParam0, -458578204)) || func_111(iParam0, -1919515848)) || func_111(iParam0, 1443104131)) || func_111(iParam0, 1490540191)) || func_111(iParam0, 1573112293)) || func_111(iParam0, 1939071949)) || func_111(iParam0, 1174751405)) || func_111(iParam0, 845883585))
		{
			return 0;
		}
		if (((!func_111(iParam0, -887064662) && !func_111(iParam0, -839724752)) && !func_111(iParam0, -1457797660)) && !func_111(iParam0, 1286414894))
		{
			return 0;
		}
		if (func_760(iParam0) == 0)
		{
			return 0;
		}
	}
	if (func_27(0))
	{
		if (Global_1914319->f_16855 == 2)
		{
			return 1;
		}
		else if (!func_269(iParam0, Global_1914319->f_16855.f_1))
		{
			return 0;
		}
	}
	else if (!func_68())
	{
		if (func_111(iParam0, -1242251796))
		{
			return 0;
		}
	}
	if (func_111(iParam0, 949916894) || iParam0 == -569063887)
	{
		if (!func_492(iParam0))
		{
			return 0;
		}
	}
	if (!func_27(0))
	{
		if (INVENTORY::_0x3D10D7179D7034AF(func_199(0), iParam0, func_27(0)))
		{
			return 0;
		}
	}
	return 1;
}

float func_520(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

Vector3 func_521(int iParam0)
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
			return func_761();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_522()
{
	int iVar0;

	iVar0 = func_762();
	switch (iVar0)
	{
		case 79:
			return 50f;
		case 58:
			return 50f;
		case 71:
			return 50f;
		case 43:
			return 50f;
		case 4:
			return 50f;
		case 9:
			return 50f;
		case 22:
			return 120f;
		case 98:
			return 60f;
		case 37:
			return 120f;
	}
	return 25f;
}

bool func_523(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_741(vParam0, vParam3) <= (fParam6 * fParam6);
}

int func_524(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	vVar0 = { func_521(func_358()) };
	fVar3 = func_522();
	if (func_523(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vVar0, fVar3, 0))
	{
		return 1;
	}
	return 0;
}

bool func_525(int iParam0)
{
	return iParam0 != 0;
}

void func_526(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		(Global_1935689->f_19.f_2[iParam0 /*2*/])->f_1 = bParam1;
	}
}

void func_527(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1935689->f_19.f_1;
	func_763(iVar0, iParam0);
	func_526(iVar0, bParam1);
	if (func_68())
	{
		if (!func_764(iVar0))
		{
			func_765(iVar0);
			return;
		}
	}
	func_766(iParam0);
}

int func_528(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_513(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_767(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_768(iVar1);
		}
	}
	return iVar0;
}

int func_530(int iParam0)
{
	int iVar0;

	if (iParam0 != 0)
	{
		if (func_384(iParam0, 8388608))
		{
			iVar0 = func_698(func_769(iParam0), 10);
			if (iVar0 != 0 && func_257(iVar0, 1, 0))
			{
				Global_1901328->f_94 = 1;
				return func_770(func_769(iParam0), iParam0);
			}
			else if (iParam0 == func_698(func_771(iParam0), 5))
			{
				if (!func_772(39))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (iParam0 == func_698(func_773(iParam0), 5))
			{
				if (!func_772(49))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (func_774(iParam0))
			{
				if (!func_772(41))
				{
					return 0;
				}
				else
				{
					return func_776(func_775(iParam0), 5, 0);
				}
			}
			else if (func_777(iParam0))
			{
				if (func_257(-1813857561 /* GXTEntry: "Rare Orchids Order" */, 1, 0))
				{
					if (!func_772(48))
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (func_778(iParam0))
			{
				if (!func_772(38))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if (iParam0 == -1813857561)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_531(int iParam0)
{
	if (func_779())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_532(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_85(func_241(0));
	iVar1 = func_85(func_241(1));
	iVar2 = func_85(func_241(6));
	if (bParam1 || func_272(Global_1935689->f_10186, 1))
	{
		func_780(&iVar0, uParam0);
	}
	if (bParam1 || func_272(Global_1935689->f_10186, 2))
	{
		func_780(&iVar1, uParam0);
	}
	if (bParam1 || func_272(Global_1935689->f_10186, 4))
	{
		func_780(&iVar2, uParam0);
	}
}

int func_533(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_85(func_241(0));
	iVar1 = func_85(func_241(1));
	iVar2 = func_85(func_241(6));
	iVar3 = 0;
	while (iVar3 < 999)
	{
		if (func_161(uParam0[iVar3], 0))
		{
			if (func_272(Global_1935689->f_10186, 1))
			{
				iVar4 = INVENTORY::_0xE787F05DFC977BDE(INVENTORY::_0x13D234A2A3F66E63(iVar0), uParam0[iVar3], 0);
			}
			if (func_272(Global_1935689->f_10186, 2))
			{
				iVar4 = (iVar4 + INVENTORY::_0xE787F05DFC977BDE(INVENTORY::_0x13D234A2A3F66E63(iVar1), uParam0[iVar3], 0));
			}
			if (func_272(Global_1935689->f_10186, 4))
			{
				iVar4 = (iVar4 + INVENTORY::_0xE787F05DFC977BDE(INVENTORY::_0x13D234A2A3F66E63(iVar2), uParam0[iVar3], 0));
			}
			if (bParam1 && iVar4 > 0)
			{
				func_781(uParam0[iVar3], iVar4, 0);
			}
			iVar5++;
		}
		iVar3++;
	}
	return iVar5;
}

void func_534(int iParam0, var uParam1, bool bParam2)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<14> Var18;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
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
	Var0.f_1 = 1084182731;
	iVar14 = -1;
	iVar17 = INVENTORY::_0x13D234A2A3F66E63(*iParam0);
	Var18.f_9 = -1591664384;
	if (func_782(iVar17, &Var0, &iVar14, &iVar15))
	{
		iVar16 = 0;
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (func_233(&Var18, iVar16, iVar14, iVar15))
			{
				if (func_161(Var18.f_4, 0) && Var18.f_4 != 1259508039)
				{
					*uParam1++;
					if (bParam2 && func_249(Var18.f_4))
					{
						func_255(Var18, 0);
					}
				}
			}
			iVar16++;
		}
		func_244(iVar14);
	}
}

int func_535(int iParam0, int iParam1)
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
		iParam1 = func_199(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_783(&uVar6, iVar0);
	func_784(&uVar6, iVar1);
	func_785(&uVar6, iVar2);
	func_786(&uVar6, iVar3);
	func_787(&uVar6, iVar4);
	func_788(&uVar6, iVar5);
	return uVar6;
}

void func_536(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;

	iVar0 = iParam1;
	while (iVar0 <= 15)
	{
		uVar1 = iParam0[iVar0 /*2*/];
		uVar2 = ((*iParam0)[iVar0 /*2*/])->f_1;
		(*iParam0)[iVar0 /*2*/] = *iParam2;
		((*iParam0)[iVar0 /*2*/])->f_1 = *iParam3;
		*iParam2 = uVar1;
		*iParam3 = uVar2;
		iVar0++;
	}
}

void func_537(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_781(iParam0[iVar0 /*2*/], func_166(func_165(0), iParam0[iVar0 /*2*/], 0), 0);
		iVar0++;
	}
}

Vector3 func_538(var uParam0)
{
	vector3 vVar0;

	if (!func_789(uParam0, &vVar0, joaat("inventory"), 0, 0, -401018458))
	{
		vVar0.f_1 = -546782298;
		vVar0.x = -1102349958;
	}
	return vVar0;
}

int func_539(int iParam0)
{
	if (!INVENTORY::_0x245D07651B1D183B(iParam0, 1879048192))
	{
		return 0;
	}
	if (INVENTORY::_0x245D07651B1D183B(iParam0, 268435456))
	{
		return 1;
	}
	if (INVENTORY::_0x245D07651B1D183B(iParam0, 536870912))
	{
		return 2;
	}
	return 3;
}

void func_540(int iParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	var uVar1;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689->f_10199, Global_1935689->f_10193);
	uVar1 = uVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar1, sParam1, uParam2->f_1, *uParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1935689->f_10199, Global_1935689->f_10193, iParam0);
	Global_1935689->f_10193++;
}

void func_541()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (func_62() != -1)
	{
		return;
	}
	if (func_257(-1838434463 /* GXTEntry: "Camp" */, 1, 0))
	{
		if (func_790())
		{
			iVar0 = func_199(0);
			bVar1 = INVENTORY::_0x3D10D7179D7034AF(iVar0, -1838434463, func_27(0));
			func_149(-1838434463 /* GXTEntry: "Camp" */, 1, 1, -142743235, 0);
			func_152(2019377485 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496->f_125 = 0;
			Global_1935496->f_126 = 1;
			if (bVar1)
			{
				INVENTORY::_0x766315A564594401(iVar0, 2019377485, 0);
			}
			else
			{
				INVENTORY::_0x6A564540FAC12211(iVar0, 2019377485);
			}
		}
	}
	else if (func_257(2019377485 /* GXTEntry: "Camp" */, 1, 0))
	{
		if (!func_790())
		{
			iVar2 = func_199(0);
			bVar3 = INVENTORY::_0x3D10D7179D7034AF(iVar2, 2019377485, func_27(0));
			func_149(2019377485 /* GXTEntry: "Camp" */, 1, 1, -142743235, 0);
			func_152(-1838434463 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496->f_125 = 1;
			Global_1935496->f_126 = 0;
			if (bVar3)
			{
				INVENTORY::_0x766315A564594401(iVar2, -1838434463, 0);
			}
			else
			{
				INVENTORY::_0x6A564540FAC12211(iVar2, -1838434463);
			}
		}
	}
}

void func_542()
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
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_791(&Var0, 0, 1, 0);
}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_359(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_245("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_233(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_664(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_244(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_244(iVar1);
	}
	return 0;
}

bool func_544(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_545(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_544(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36637[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

void func_546(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10218, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10217, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10214, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10215, !bParam0);
}

var func_547()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_10218))
	{
		return Global_1935689->f_10216;
	}
	return Global_1935689->f_10213;
}

void func_548(int iParam0)
{
	if (func_121(iParam0) == -854348463)
	{
		if (iParam0 == 366019123)
		{
			func_792();
		}
		else
		{
			func_546(0);
		}
	}
	else if (func_259(iParam0, 1224357681) == -266827811)
	{
		switch (iParam0)
		{
			case -735913145: /* GXTEntry: "Naval Compass" */
			case -574122036: /* GXTEntry: "Pocket Mirror" */
			case 745296393: /* GXTEntry: "Beau\'s Gift" */
				func_546(0);
				break;
			default:
				func_792();
				break;
		}
	}
	else if ((((((((((((func_111(iParam0, 1101678925) || func_111(iParam0, 1686880204)) || func_111(iParam0, 173360570)) || func_111(iParam0, -121341956)) || func_111(iParam0, 2000026003)) || func_111(iParam0, -1540973036)) || func_111(iParam0, 1192444843)) || func_111(iParam0, -1242251796)) || func_111(iParam0, 2084895747)) || func_259(iParam0, 1224357681) == 1728734446) || (func_220(iParam0) && !func_111(iParam0, 316290104))) || iParam0 == -601932535) || iParam0 == -898386032)
	{
		func_792();
	}
	else if ((func_121(iParam0) == 1802292908 && func_259(iParam0, -949239683) == 0) && !iParam0 == -569063887)
	{
		func_792();
	}
	else if (func_220(iParam0))
	{
		if (func_111(iParam0, 316290104))
		{
			func_546(1);
		}
		else
		{
			func_546(1);
		}
	}
	else if (func_111(iParam0, 316290104) || func_159(iParam0, 1, 0))
	{
		func_546(1);
	}
	else
	{
		func_546(0);
	}
}

int func_549(int iParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_10218))
	{
		if (func_111(iParam0, 316290104))
		{
			return -1896040097;
		}
		else if (func_159(iParam0, 1, 0))
		{
			return -2086473757;
		}
	}
	else if (func_111(iParam0, 1147021565))
	{
		if (func_111(iParam0, -1242251796))
		{
			return -31549930;
		}
		switch (func_259(iParam0, -949239683))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -1925143884;
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 356040554;
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1174751405:
			case 1443104131:
				return -31549930;
		}
	}
	else if (func_259(iParam0, 1224357681) == -883547903)
	{
		return -1948542959;
	}
	return -31549930;
}

void func_550(int iParam0, var uParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;

	bVar0 = true;
	switch (func_121(iParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!func_111(iParam0, 949916894) && !func_111(iParam0, 747873593)) && !func_259(iParam0, -949239683) == -1337515701) && !func_111(iParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
		case -1691255343:
			if (iParam0 == 1993672959 || iParam0 == -898386032)
			{
				bVar0 = false;
			}
			break;
	}
	if (func_119(iParam0) == joaat("money"))
	{
		bVar0 = false;
	}
	if (func_259(iParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { func_153(iParam0, 0, 0) };
		if (func_793(Var15, -1162387149, &Var1, 0))
		{
			if (Var1.f_4 == iParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_111(iParam0, 316290104))
	{
		bVar0 = func_156(0);
		if (!bVar0)
		{
		}
	}
	else if (func_159(iParam0, 1, 0))
	{
		if (func_62() == 0 || !func_794())
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_561(), bVar0);
}

bool func_551()
{
	return Global_1935689->f_12;
}

int func_552(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_488(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_638(&Var0, func_440(0));
	}
	if (!func_489(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_244(iVar14);
	return uVar15;
}

int func_553(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!func_156(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_199(bParam3), iParam0);
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

int func_555(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

int func_556(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = func_795(iVar1);
		iVar0 = (iVar0 + func_796(iVar2, iParam0));
		iVar1++;
	}
	return iVar0;
}

int func_557(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = 0;
		iVar0 = iVar3;
		iVar1 = func_795(iVar0);
		func_797(iVar1, iParam0, &iVar4, &iVar5, &uVar2);
		iVar6 = (iVar4 + iVar5);
		switch (iVar0)
		{
			case 0:
				if (iVar4 > 0)
				{
					return 1;
				}
				else if (iVar5 > 0)
				{
					return 0;
				}
				break;
			default:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (iVar6)
					{
						case 2:
							if (iVar4 == 2)
							{
								return 1;
							}
							else if (iVar4 == 1)
							{
								return uVar2;
							}
							else
							{
								return 0;
							}
							break;
						case 1:
							if (iVar4 == 1)
							{
								return 1;
							}
							else
							{
								return 0;
							}
							break;
						case 0:
							break;
					}
				}
				break;
		}
		iVar3++;
	}
	return 0;
}

int func_558(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_559(int iParam0, int iParam1)
{
	if (func_62() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_111(iParam0, 1490540191))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_798(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_500(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_799(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

var func_561()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_10218))
	{
		return Global_1935689->f_10217;
	}
	return Global_1935689->f_10214;
}

int func_562(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_563(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		if (func_111(iParam0, -1242251796))
		{
			if (func_111(iParam0, 2060589226))
			{
				return func_46();
			}
			return func_45();
		}
		else if (func_111(iParam0, 1919582297))
		{
			return func_36();
		}
		else if (func_111(iParam0, 1147021565))
		{
			return func_35();
		}
	}
	if (Global_1935496->f_12)
	{
		return func_45();
	}
	else
	{
		return func_35();
	}
	return func_35();
}

int func_564(int iParam0)
{
	if ((((((((((func_111(iParam0, 1147021565) || func_111(iParam0, -136654233)) || func_111(iParam0, -524514947)) || func_111(iParam0, -1238310989)) || func_111(iParam0, 1765172170)) || func_111(iParam0, 1490540191)) || func_111(iParam0, 1573112293)) || func_111(iParam0, -1242251796)) || func_111(iParam0, 1919582297)) || func_111(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

void func_565(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_800(1);
	}
}

void func_566(int iParam0)
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
			func_565(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_800(1);
	}
}

bool func_567(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_568(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

var func_569(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_570(int iParam0)
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

var func_571(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_572(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_500(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_573(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_382() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_801(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_802(), 12);
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
			else if (func_687() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_803(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_687(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_804(), 13);
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
			else if (func_688() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_805(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_688(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_572(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_574(int iParam0, int iParam1, int iParam2)
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

int func_575(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_576(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_577(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_806(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_257(iVar2, 1, 0) || func_808(func_807(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_570(func_806(iVar0))), func_570(func_806(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_687() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_809(iVar0)), func_809(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_803() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_809(iVar0)), func_809(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_809(iVar0)), func_809(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_698(iParam3, func_810(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_694(iVar2) - iParam7) >= func_572(iParam3, func_811(iVar0));
				}
				else
				{
					bVar1 = func_694(iVar2) >= func_572(iParam3, func_811(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_694(iVar2) + iParam7) >= func_572(iParam3, func_811(iVar0));
			}
			else
			{
				bVar1 = func_694(iVar2) >= func_572(iParam3, func_811(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_812(iVar2)), func_812(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_813(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_814(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_814(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_688() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_815(iVar0)), func_815(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_805() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_815(iVar0)), func_815(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_815(iVar0)), func_815(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_698(iParam3, func_810(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_694(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_816(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_816(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_817(iVar2)), func_817(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_578(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_804() >= 13)
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

int func_579(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_567(func_818(0)) && ((func_819(0) == 1 || func_819(0) == 8) || func_819(0) == 6))
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

int func_580(int iParam0)
{
	if (!func_567(iParam0))
	{
		return -1;
	}
	return func_820(iParam0);
}

int func_581()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_821(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_821(iVar0)) || iVar0 == joaat("weapon_lasso"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_582(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	else
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1935496->f_26 = 1;
	}
}

void func_583(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;

	Var0.f_1 = 20;
	if ((func_111(iParam0, 1573112293) || func_111(iParam0, 672467738)) || func_111(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_119(iParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_822(0, Var22.f_2);
				func_823(Var22.f_2, 1);
				func_824(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_822(2, Var22.f_2);
				func_825(Var22.f_2);
				func_824(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_822(1, Var22.f_2);
				func_826(Var22.f_2);
				func_824(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_827(Var22.f_2, Var22.f_5);
				if (func_828(&uVar38, &uVar39, fVar33))
				{
					func_829(fVar33, 1, bVar37, bParam1);
					func_824(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_827(Var22.f_2, Var22.f_5);
				if (func_828(&uVar38, &uVar39, fVar34))
				{
					func_830(fVar34, 1, bVar37, bParam1);
					func_824(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_827(Var22.f_2, Var22.f_5);
				if (func_828(&uVar38, &uVar39, fVar35))
				{
					func_831(fVar35, 1, bVar37, bParam1);
					func_824(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_832(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_833(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_832(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_833(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_832(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_833(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_832(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_833(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_832(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_833(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_832(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_833(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_834(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				bVar42 = true;
			}
		}
		if (bVar42 || func_111(iParam0, -537818634))
		{
			func_398(func_637(-704089207), 1);
		}
		if (func_111(iParam0, -1457797660))
		{
			func_398(func_637(-1909697259), 1);
		}
		if (bVar40)
		{
			func_398(func_637(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

bool func_584(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

void func_585(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = func_835(iParam0);
	iVar1 = func_260(&uVar0);
	if (iVar1 != iParam0)
	{
		func_836(iVar1, 4);
	}
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_261(iParam0))
	{
		return;
	}
	func_836(iParam0, 4);
	func_837(iParam0, bParam1);
	if (!func_838(iParam0))
	{
		func_839(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_470(0, 0, 1))
		{
			func_656(1, 6);
		}
	}
}

void func_586(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_587(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

bool func_588(int iParam0, int iParam1)
{
	if (!func_587(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

int func_589(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_520(Global_35, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_35, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_590(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_591(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_592()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_840())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_593(int iParam0)
{
	int iVar0;

	iVar0 = func_121(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

int func_594(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_600(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_595(int iParam0)
{
	if (-1829635046 == func_841(81053684))
	{
		if (func_600(iParam0))
		{
			return 1;
		}
	}
	else if (func_842(-525676072, iParam0))
	{
		if (func_600(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_596()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_581())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_597()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_581())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_598()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_581())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_599()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_581())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_600(int iParam0)
{
	if (func_842(81053684, iParam0))
	{
		return 1;
	}
	if (func_842(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_601(var uParam0)
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

void func_602(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_603(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_334(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_334(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_334(iParam0, 1) /*11*/])->f_10 && iParam1));
}

int func_604(int iParam0, bool bParam1)
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
				return func_843();
			}
			break;
	}
	return 0;
}

int func_605(int iParam0, bool bParam1)
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

int func_606(int iParam0)
{
	if (func_62() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_607(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_507(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_844(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_121(iParam0) != -999503751)
	{
		func_845(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_608(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_153(iParam0, 0, 0) };
	Var5 = { func_154(iParam0, Var0, Var0.f_4, 0) };
	if (func_340(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_199(0), &Var5);
	return 1;
}

int func_609()
{
	return Global_1946804->f_1;
}

void func_610()
{
	int iVar0;

	if (func_62() == -1)
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

void func_611(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_846(0);
	}
	if (bParam0)
	{
		func_322(8);
		func_322(512);
	}
	else
	{
		func_322(8);
		func_322(16);
	}
}

void func_612(int iParam0, int iParam1, bool bParam2)
{
	func_847(iParam0, 0, 0);
	func_330(iParam1, 1, bParam2, 0);
}

int func_613(int iParam0, int iParam1)
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

void func_614()
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

int func_615(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_616(int iParam0)
{
	func_603(iParam0, 8, 6);
}

void func_617(int iParam0)
{
	func_848(&(Global_1946804->f_2589), iParam0);
}

void func_618(int iParam0, int iParam1)
{
	func_849(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_619(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_620(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_121(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_850(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_618(iVar1, iVar3);
		}
	}
	if (func_712(-1586649372) && func_850(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_618(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_618(iVar1, iVar3);
					}
				}
			}
			func_851(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_851(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_618(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_851(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_618(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_618(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_851(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_851(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_618(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_851(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_618(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_618(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_121(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_618(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_111(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_121(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_121(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_618(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_121(&(uParam0->f_1[iVar1 /*3*/])) || func_111(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_618(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_621(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_852(0);
	if (iParam2 != 0 && func_853(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_854(iParam0, func_613(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_622(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_62() != -1;
	iVar7 = func_852(0);
	if (func_327(32768))
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
			iVar5 = func_613(iVar0, 1);
			if (func_855(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_855(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_856(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_857(uParam0);
				if (iVar3 > 0)
				{
					if (!func_327(524288))
					{
						func_322(524288);
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
							iVar5 = func_613(iVar0, 1);
							if (func_855(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_855(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_856(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_618(iVar0, iParam2);
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
					func_602(524288);
				}
			}
		}
	}

void func_623(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_858(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_62() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_859(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_860(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_860(Global_40.f_7729);
				Global_1946804->f_1378 = func_860(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_861(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_611(0, 1);
	}
}

bool func_624(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_625(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_590(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_590(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_591(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_322(8);
}

bool func_626()
{
	return Global_1914319->f_17375;
}

int func_627()
{
	int iVar0;

	if (func_779())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return 0;
}

bool func_628()
{
	return &Global_1898068;
}

var func_629(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_862() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1225638->f_10;
	iVar6 = Global_1225638->f_14;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_863());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_863());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_863());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_864(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (&Global_1225638->f_21[iVar2])
		{
			iVar10 = &Global_1225638->f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_865(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1225638->f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_866(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_867(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

int func_630(var uParam0, struct<18> Param1)
{
	if (!func_868(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*18*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_631(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
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

bool func_632()
{
	return !&Global_1911774;
}

void func_633(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = iParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_634(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_635(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
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

var func_636(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_869(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_637(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_638(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_639(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_62() == -1)
	{
		if (func_281(43))
		{
			if (func_111(iParam0, 412399755))
			{
				func_691(-1791518714);
				if (func_692() == 0)
				{
					func_656(0, 10);
					iVar0 = func_870(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_694(iParam0) < func_695(iParam0))
						{
							func_285(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_281(44))
		{
			if (func_111(iParam0, 709057512))
			{
				func_691(-2087881550);
				if (func_692() == 1)
				{
					func_656(0, 10);
					iVar0 = func_870(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_694(iParam0) < func_695(iParam0))
						{
							func_285(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_281(45))
		{
			if (func_111(iParam0, -1478961327))
			{
				func_691(1908068621);
				if (func_692() == 2)
				{
					func_656(0, 10);
					iVar0 = func_870(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_694(iParam0) < func_695(iParam0))
						{
							func_285(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_281(46))
		{
			if (func_111(iParam0, -1238404098))
			{
				func_691(1611247019);
				if (func_692() == 3)
				{
					func_656(0, 10);
					iVar0 = func_870(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_694(iParam0) < func_695(iParam0))
						{
							func_285(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_281(47))
		{
			if (func_111(iParam0, 1160548794))
			{
				func_691(1319635688);
				if (func_692() == 4)
				{
					func_656(0, 10);
					iVar0 = func_870(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_694(iParam0) < func_695(iParam0))
						{
							func_285(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_640(int iParam0, int iParam1)
{
	if (func_62() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_641(int iParam0)
{
	if (func_62() != -1)
	{
		if (func_643(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_643(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_642(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_643(iParam0, 65536) && !func_643(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_643(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_643(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_643(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_644(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_645()
{
	return Global_1905944->f_5694;
}

bool func_646(int iParam0)
{
	return func_119(iParam0) == joaat("weapon");
}

int func_647(int iParam0)
{
	var uVar0;

	if (func_62() != -1)
	{
		return 0;
	}
	if (func_384(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_652(iParam0, &uVar0, 1, 0, 0);
	}
	return func_257(iParam0, 1, 0);
}

void func_648(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_119(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_388(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_663(iVar0))
	{
		if (func_62() == -1)
		{
			func_389(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_264(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_360(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_649(int iParam0, int iParam1)
{
	int iVar0;

	if (func_111(iParam0, 58855631))
	{
		func_871(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_650(int iParam0, bool bParam1)
{
	if (func_393(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_199(bParam1), iParam0, 0);
}

int func_651()
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (!func_280())
	{
		return 0;
	}
	if (!func_296(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_296(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_296(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_296(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_296(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_296(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_296(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_296(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_296(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_296(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_296(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_296(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_296(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_296(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_296(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_296(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_296(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_296(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_296(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_296(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_296(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_296(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_296(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_296(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_296(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_296(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_652(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_872(&iParam0);
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (!func_156(0))
	{
		bParam3 = true;
	}
	if (func_646(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_440(0) };
			Var4.f_9 = -1591664384;
			if (!func_442(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_443(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_441(iParam0, 1))
			{
				if (!func_442(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_443(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_873(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_553(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_340(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_199(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_653()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_654(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_655(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_62() != -1)
	{
		return;
	}
	iVar0 = func_874(iParam0);
	fVar1 = func_875(iParam0);
	if ((Global_1347477->f_117 || !func_385(31)) || !func_876(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_877(iVar0) >= 7)
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
	func_878(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_636(MISC::_CREATE_VAR_STRING(6, func_879(iParam0), fVar1), "itemtype_textures", func_880(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_656(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_881(&Global_0, 8);
	}
	if (!func_280() || func_62() != -1)
	{
		return;
	}
	func_881(&Global_0, 1);
}

int func_657(int iParam0)
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

int func_658(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_659(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_660(int iParam0)
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

void func_661(int iParam0)
{
	int iVar0;

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
			func_882(1);
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
			func_883(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_883(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_883(3);
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
			func_884(1);
			break;
		case 34:
			func_885(1);
			break;
		case 35:
			func_886(1);
			break;
		case 36:
			break;
		case 37:
			func_887(0);
			break;
		case 38:
			func_888(0);
			break;
		case 39:
			func_889(0);
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
			if ((!&Global_1879534 && func_280()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_571("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_150(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_280()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_571("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_150(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_280()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_571("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_150(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_280()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_571("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_150(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_62() == -1)
			{
				if (!func_712(99217379) || func_890(99217379) == 2110595215)
				{
					if (func_669())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_257(iVar0, 1, 0))
					{
						func_433(iVar0, 1, 752097756);
					}
					func_130(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_62() == -1)
			{
				if (!func_257(1013902307, 1, 0))
				{
					func_433(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_62() == -1)
			{
				if (!func_257(1013902307, 1, 0))
				{
					func_433(1013902307, 1, 752097756);
				}
				if (!func_257(142640135, 1, 0))
				{
					func_433(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_62() == -1)
			{
				if (!func_257(786809402, 1, 0))
				{
					func_433(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_62() == -1)
			{
				if (!func_257(786809402, 1, 0))
				{
					func_433(786809402, 1, 752097756);
				}
				if (!func_257(-518019409, 1, 0))
				{
					func_433(-518019409, 1, 752097756);
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
			func_891();
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

int func_662(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
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

int func_663(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
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

bool func_664(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_665(int iParam0, int iParam1)
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

void func_666(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_892(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_667(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_893();
	func_894(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_668(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_821(iParam0))
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
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(iParam0));
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

int func_669()
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_670(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_671(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_672(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_385(50))
			{
				if (!func_385(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_385(51))
			{
				if (!func_385(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_673()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_674(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_161(iParam1, 0))
	{
		return 0;
	}
	if (func_119(iParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_62() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_121(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_895(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_111(iParam1, 866047851))
	{
		iVar5 = func_334(iVar4, 1);
		if (func_615(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_121(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_111(iParam1, -1638171711))
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
			if (func_842(1868067663, &uVar0))
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
				iVar10 = func_856(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_856(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_121(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_111(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
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

void func_675()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_676()
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

int func_677()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_257(func_896(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_678(int iParam0)
{
	switch (iParam0)
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

int func_679(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				iVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				iVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				iVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				iVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984: /* GXTEntry: "Boar Tusk Talisman" */
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				iVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				iVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				iVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				iVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_257(iVar0, 1, 0) && func_257(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_680(int iParam0)
{
	switch (iParam0)
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

int func_681(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_897(iParam0);
	if (iVar0 != -15)
	{
		func_894(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_898(iVar0, 1);
	}
	return 0;
}

int func_682(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_257(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
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
			iVar25 = &Var1.f_1[iVar24];
			if (func_161(iVar25, 0) && func_111(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_683(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_636(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_684(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_899())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_636(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_900(iVar0);
			func_901(iVar0, 0, 0);
		}
		func_636(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_398(func_637(1644987397), iVar1);
	}
}

int func_685(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_694(iVar9);
	iVar2 = func_694(iVar10);
	iVar3 = func_694(iVar11);
	iVar5 = func_695(iVar9);
	iVar6 = func_695(iVar10);
	iVar7 = func_695(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_694(iVar12);
		iVar8 = func_695(iVar12);
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

void func_686(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_687()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_902(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_688()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_689(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				iVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				iVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				iVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				iVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				iVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				iVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				iVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				iVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				iVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar1))
		{
			*iParam2++;
		}
		if (func_816(iVar0) && func_816(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar1))
		{
			*iParam2++;
		}
		if (func_816(iVar2))
		{
			*iParam2++;
		}
		if ((func_816(iVar0) && func_816(iVar1)) && func_816(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_816(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_816(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_816(iVar0))
		{
			*iParam2++;
		}
		if (func_816(iVar1))
		{
			*iParam2++;
		}
		if (func_816(iVar2))
		{
			*iParam2++;
		}
		if (func_816(iVar3))
		{
			*iParam2++;
		}
		if (((func_816(iVar0) && func_816(iVar1)) && func_816(iVar2)) && func_816(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_690(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_903(1497516462);
			func_904(2016141805);
			func_904(1010885152);
			func_904(-502324015);
			break;
		case 2016141805:
			func_904(1497516462);
			func_903(2016141805);
			func_904(1010885152);
			func_904(-502324015);
			break;
		case 1010885152:
			func_904(1497516462);
			func_904(2016141805);
			func_903(1010885152);
			func_904(-502324015);
			break;
		case -502324015:
			func_904(1497516462);
			func_904(2016141805);
			func_904(1010885152);
			func_903(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_904(-538889627);
			func_904(-538880323);
			func_904(-1056767524);
			func_903(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_905();
			func_903(iParam0);
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
			func_906();
			func_903(iParam0);
			break;
		case 2019386373:
			func_904(-664252410);
			func_904(2109952320);
			func_903(2019386373);
			break;
		case -664252410:
			func_904(2019386373);
			func_904(2109952320);
			func_903(-664252410);
			break;
		case 2109952320:
			func_904(2019386373);
			func_904(-664252410);
			func_903(2109952320);
			break;
		case -1674179981:
			func_904(-1835851517);
			func_904(-1838352012);
			func_903(-1674179981);
			break;
		case -1835851517:
			func_904(-1674179981);
			func_904(-1838352012);
			func_903(-1835851517);
			break;
		case -1838352012:
			func_904(-1674179981);
			func_904(-1835851517);
			func_903(-1838352012);
			break;
		case -1717960576:
			func_904(210001842);
			func_903(-1717960576);
			break;
		case 210001842:
			func_904(-1717960576);
			func_903(210001842);
			break;
		case -150493654:
			func_904(-1271608261);
			func_904(1846061697);
			func_904(-1145519186);
			func_903(-150493654);
			break;
		case -1271608261:
			func_904(-150493654);
			func_904(1846061697);
			func_904(-1145519186);
			func_903(-1271608261);
			break;
		case 1846061697:
			func_904(-150493654);
			func_904(-1271608261);
			func_904(-1145519186);
			func_903(1846061697);
			break;
		case -1145519186:
			func_904(-150493654);
			func_904(-1271608261);
			func_904(1846061697);
			func_903(-1145519186);
			break;
		case 1766284049:
			func_904(280705402);
			func_904(1926308480);
			func_903(1766284049);
			break;
		case 280705402:
			func_904(1766284049);
			func_904(1926308480);
			func_903(280705402);
			break;
		case 1926308480:
			func_904(1766284049);
			func_904(280705402);
			func_903(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_904(439465264);
				func_903(1609506757);
			}
			else
			{
				func_904(1609506757);
				func_904(439465264);
			}
			break;
		case 439465264:
			if (func_907(1609506757))
			{
				if (bParam1)
				{
					func_903(439465264);
				}
				else
				{
					func_904(439465264);
				}
			}
			break;
		case 1822001510:
			func_904(-1612662716);
			func_903(1822001510);
			break;
		case -1612662716:
			func_904(1822001510);
			func_903(-1612662716);
			break;
		case 1306158345:
			func_904(1952610440);
			func_904(-223469678);
			func_904(-404698347);
			func_904(1517904467);
			func_903(1306158345);
			break;
		case 1952610440:
			func_904(1306158345);
			func_904(-223469678);
			func_904(-404698347);
			func_904(1517904467);
			func_903(1952610440);
			break;
		case -223469678:
			func_904(1306158345);
			func_904(1952610440);
			func_904(-404698347);
			func_904(1517904467);
			func_903(-223469678);
			break;
		case -404698347:
			func_904(1306158345);
			func_904(1952610440);
			func_904(-223469678);
			func_904(1517904467);
			func_903(-404698347);
			break;
		case 1517904467:
			func_904(1306158345);
			func_904(1952610440);
			func_904(-223469678);
			func_904(-404698347);
			func_903(1517904467);
			break;
		case 1376646519:
			func_904(931649776);
			func_904(-434590080);
			func_904(1743048395);
			func_904(449774763);
			func_903(1376646519);
			break;
		case 931649776:
			func_904(1376646519);
			func_904(-434590080);
			func_904(1743048395);
			func_904(449774763);
			func_903(931649776);
			break;
		case -434590080:
			func_904(1376646519);
			func_904(931649776);
			func_904(1743048395);
			func_904(449774763);
			func_903(-434590080);
			break;
		case 1743048395:
			func_904(1376646519);
			func_904(931649776);
			func_904(-434590080);
			func_904(449774763);
			func_903(1743048395);
			break;
		case 449774763:
			func_904(1376646519);
			func_904(931649776);
			func_904(-434590080);
			func_904(1743048395);
			func_903(449774763);
			break;
		case -1414537028:
			func_904(38162571);
			func_904(1350391819);
			func_904(54073871);
			func_903(-1414537028);
			break;
		case 38162571:
			func_904(-1414537028);
			func_904(1350391819);
			func_904(54073871);
			func_903(38162571);
			break;
		case 1350391819:
			func_904(-1414537028);
			func_904(38162571);
			func_904(54073871);
			func_903(1350391819);
			break;
		case 54073871:
			func_904(-1414537028);
			func_904(38162571);
			func_904(1350391819);
			func_903(54073871);
			break;
		case 198200492:
			func_903(198200492);
			func_904(-1124061431);
			func_904(52706132);
			func_904(-259123672);
			break;
		case -1124061431:
			func_904(198200492);
			func_903(-1124061431);
			func_904(52706132);
			func_904(-259123672);
			break;
		case 52706132:
			func_904(198200492);
			func_904(-1124061431);
			func_903(52706132);
			func_904(-259123672);
			break;
		case -259123672:
			func_904(198200492);
			func_904(-1124061431);
			func_904(52706132);
			func_903(-259123672);
			break;
		case -919512195:
			func_903(-919512195);
			func_904(-1925798111);
			func_904(420709909);
			func_904(1703426636);
			break;
		case -1925798111:
			func_903(-1925798111);
			func_904(-919512195);
			func_904(420709909);
			func_904(1703426636);
			break;
		case 420709909:
			func_903(420709909);
			func_904(-919512195);
			func_904(-1925798111);
			func_904(1703426636);
			break;
		case 1703426636:
			func_903(1703426636);
			func_904(-919512195);
			func_904(-1925798111);
			func_904(420709909);
			break;
		case -1223121209:
			func_903(-1223121209);
			func_904(630808005);
			break;
		case 630808005:
			func_903(630808005);
			func_904(-1223121209);
			break;
		case 1453909576:
			func_903(1453909576);
			func_904(1643531967);
			break;
		case 1643531967:
			func_903(1643531967);
			func_904(1453909576);
			break;
		case 0:
			func_903(0);
			func_904(473295046);
			func_904(-1738165526);
			break;
		case 473295046:
			func_903(473295046);
			func_904(0);
			func_904(-1738165526);
			break;
		case -1738165526:
			func_903(-1738165526);
			func_904(0);
			func_904(473295046);
			break;
		case 932909855:
			func_903(932909855);
			func_904(2051822093);
			break;
		case 2051822093:
			func_903(2051822093);
			func_904(932909855);
			break;
		case 405586984:
			func_903(405586984);
			func_904(1509509592);
			func_904(-959357075);
			func_904(-1311865656);
			break;
		case 1509509592:
			func_903(1509509592);
			func_904(405586984);
			func_904(-959357075);
			func_904(-1311865656);
			break;
		case -959357075:
			func_903(-959357075);
			func_904(1509509592);
			func_904(405586984);
			func_904(-1311865656);
			break;
		case -1311865656:
			func_903(-1311865656);
			func_904(1509509592);
			func_904(-959357075);
			func_904(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_903(-524145696);
			}
			else
			{
				func_904(-524145696);
			}
			func_904(1626481264);
			func_904(282809459);
			break;
		case 282809459:
			func_903(282809459);
			func_904(1626481264);
			func_904(-524145696);
			break;
		case 1626481264:
			func_903(1626481264);
			func_904(-524145696);
			func_904(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_903(885203519);
			}
			else
			{
				func_904(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_903(-1080627546);
			}
			else
			{
				func_904(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_907(iParam0))
				{
					func_903(iParam0);
				}
			}
			else if (func_907(iParam0))
			{
				func_904(iParam0);
			}
			break;
	}
}

void func_691(int iParam0)
{
	if (!func_908(iParam0))
	{
		func_910(func_909(iParam0));
	}
}

int func_692()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_908(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_693(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_694(iVar9);
	iVar2 = func_694(iVar10);
	iVar3 = func_694(iVar11);
	iVar5 = func_695(iVar9);
	iVar6 = func_695(iVar10);
	iVar7 = func_695(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_694(iVar12);
		iVar8 = func_695(iVar12);
	}
	if (iParam0 == iVar9)
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
	if (iParam0 == iVar10)
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
	if (iParam0 == iVar11)
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
		if (iParam0 == iVar12)
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

int func_694(int iParam0)
{
	int iVar0;

	if (func_257(iParam0, 1, 0))
	{
		iVar0 = func_264(iParam0, 0, 0);
	}
	return iVar0;
}

int func_695(int iParam0)
{
	switch (iParam0)
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

int func_696(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_697(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_698(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_500(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_699(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_698(iParam1, 5) || iParam0 == func_698(iParam1, 6)) || iParam0 == func_698(iParam1, 7)) || iParam0 == func_698(iParam1, 8)) || iParam0 == func_698(iParam1, 9))
	{
		func_689(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_285(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_284(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_700(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_698(iParam1, 5) || iParam0 == func_698(iParam1, 6)) || iParam0 == func_698(iParam1, 7)) || iParam0 == func_698(iParam1, 8)) || iParam0 == func_698(iParam1, 9))
	{
		if (func_689(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_285(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_284(51, 0, 0, iVar0, func_572(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_285(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_284(51, 0, 0, iVar0, func_572(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_701()
{
	if (func_345(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_702(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_703(int iParam0)
{
	if (!func_911(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_704(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

float func_705()
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

	if (func_912())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_913(2);
	}
	if (Global_1347477->f_119)
	{
		return func_913(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_914();
	fVar2 = func_915();
	fVar3 = func_916();
	fVar4 = func_917();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_918()));
	fVar7 = (func_913(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_919(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_920(3, fVar9, fVar9 > 100f);
	return func_921(fVar7, -100f, 100f);
}

float func_706()
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

	if (func_912())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_913(1);
	}
	if (Global_1347477->f_119)
	{
		return func_913(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_914();
	fVar2 = func_915();
	fVar3 = func_916();
	fVar4 = func_917();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_918()));
	fVar7 = (func_913(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_919(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_920(2, fVar9, fVar9 > 100f);
	return func_921(fVar7, -100f, 100f);
}

float func_707()
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

	if (func_912())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_913(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_922())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_923())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_913(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_914();
	fVar2 = func_915();
	fVar3 = func_916();
	fVar4 = func_917();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_918()));
	fVar7 = (func_913(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_919(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_920(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_913(0);
	}
	return func_921(fVar7, -100f, 100f);
}

bool func_708(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_709(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_161(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_652(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_156(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_199(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_710(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_587(iParam0))
	{
		return;
	}
	if (func_319(iParam0))
	{
		return;
	}
	if (!func_924(iParam0))
	{
		func_925(iParam0, 1, 0);
	}
	iVar0 = func_860(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_588(iParam0, 512))
		{
			func_127(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_926() && !bParam1) && !func_470(0, 0, 1))
	{
		func_123(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_927(iParam0, 6);
	if (bParam2)
	{
		if (!func_470(0, 0, 1))
		{
			func_656(1, 4);
		}
	}
}

int func_711(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_121(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_712(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_334(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_334(iParam0, 1) /*11*/];
}

void func_713(int iParam0, int iParam1)
{
	if (func_111(iParam1, 130796156))
	{
		func_928(iParam1, 0);
	}
	else if (func_111(iParam1, 930141731))
	{
		func_928(iParam1, 1);
		func_929(iParam0);
	}
}

void func_714(var uParam0, int iParam1)
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

int func_715(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_930(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_931(uParam2, iParam0, Var1);
	return 1;
}

int func_716(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_717(int iParam0)
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

int func_718(int iParam0)
{
	var uVar0;

	if (!func_789(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

struct<4> func_719()
{
	struct<4> Var0;

	return Var0;
}

int func_720(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_199(0);
	*uParam1 = { func_154(iParam0, func_440(0), iParam3, 0) };
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

struct<28> func_721(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_199(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_725(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_722(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_932(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_932(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_932(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_723(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_199(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_725(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_724(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_932(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_932(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_932(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_725(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_726(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_932(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_932(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_932(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_727(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					func_513(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
					func_767(&iVar0, iVar9, iVar5, uVar6);
					if (!func_161(iVar0, 0))
					{
						iVar0 = func_529(iVar2);
					}
				}
				else
				{
					iVar0 = func_529(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::_0xED00D72F81CF7278(iVar2, 0, 0);
					if (bParam3)
					{
						func_933(iVar2);
						ENTITY::_0x0D0DB2B6AF19A987(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

bool func_728(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	if (func_934(iParam0))
	{
		iVar1 = func_935(iParam0);
		if (func_161(iParam1, 0))
		{
			if (func_729(iParam1))
			{
				func_936(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_937(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_938(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_939(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_730(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0) == iVar1)
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

bool func_731(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_361(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_940(iParam0, iParam1);
	return func_941(iParam0, iParam1, bParam2, iParam3);
}

struct<4> func_732(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_942(iParam0) };
	return func_943(iParam0, iParam1, Var0, Var0.f_4);
}

int func_733(int iParam0)
{
	switch (func_62())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_734(bool bParam0, bool bParam1, bool bParam2)
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

int func_735()
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

int func_736(int iParam0)
{
	if (!func_567(iParam0))
	{
		return -1;
	}
	return func_945(func_944(iParam0));
}

bool func_737(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_738(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_739(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_740(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

float func_741(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_742(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_946(iVar0))
		{
			if (BUILTIN::VDIST(func_947(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_743(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (&Global_40.f_450[iVar0] > -1 && &Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(func_948(&(Global_40.f_450[iVar0])), vParam0) < fParam3)
			{
				return 1;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return 0;
}

int func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

float func_745(int iParam0, vector3 vParam1)
{
	if (func_949(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

int func_746()
{
	return Global_1900383->f_393;
}

bool func_747(int iParam0, int iParam1)
{
	if (func_111(iParam1, 1573112293))
	{
		return func_950(iParam1);
	}
	switch (iParam0)
	{
		case -77448735:
			if (func_564(iParam1))
			{
				return func_950(iParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_950(iParam1);
		case 1802292908:
			return func_187(16);
		case 81053684:
			return func_187(4);
		case -525676072:
			return func_187(8);
		case 1779021115:
			if (func_161(iParam1, 0))
			{
				if (iParam1 == joaat("weapon_kit_camera"))
				{
					return func_187(64);
				}
			}
			return func_187(32);
		case -1823706425:
			return func_187(128);
		case -854348463:
			return func_187(16384);
		default:
			if (func_161(iParam1, 0))
			{
				if (func_111(iParam1, 1192444843) || func_111(iParam1, -1540973036))
				{
					return func_187(4096);
				}
				else if (func_111(iParam1, 1919582297))
				{
					return func_187(8192);
				}
				else if (func_111(iParam1, 1147021565))
				{
					return func_187(2);
				}
				switch (iParam1)
				{
					case -2035110427: /* GXTEntry: "Mortar and Pestle" */
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return func_187(2048);
					case -1516555556: /* GXTEntry: "Horse Brush" */
						return func_187(1024);
				}
			}
			return func_187(1);
	}
	return func_187(1);
}

void func_748(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_489(&uParam1, &iVar0, &iVar1, bParam16))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&Var3, iVar2, iVar0, iVar1))
			{
				func_491(iParam0, Var3.f_4, bParam15);
			}
			iVar2++;
		}
	}
	func_244(iVar0);
}

bool func_749(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

Vector3 func_750(int iParam0)
{
	if (!func_226(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
		case 42:
			return 2825.607f, -1318.207f, 45.7557f;
		case 43:
			return 2718f, -1287f, 49.6f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2748.811f, -1398.277f, 45.18309f;
		case 46:
			return 2747.824f, -1396.384f, 45.18309f;
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1790f, -388.27f, 159.33f;
		case 62:
			return -1818.99f, -370.94f, 162.3f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -306.3f, 815.08f, 117.98f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
		case 74:
			return -324f, 803.72f, 116.88f;
		case 75:
			return -281.82f, 778.97f, 118.5f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -178.0316f, 628.0621f, 113.0896f;
		case 78:
			return -175.0377f, 631.7999f, 113.0896f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -325.532f, 773.6285f, 117.5038f;
		case 82:
			return 3025.786f, 562.7253f, 43.7167f;
		case 86:
			return 2986.224f, 569.9468f, 43.62284f;
		case 85:
			return 2986.94f, 574.9f, 43.64f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.83f, 399.7599f, 94.38248f;
		case 88:
			return -1299.891f, 401.3615f, 94.38248f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5487.197f, -2939.038f, -1.3872f;
		case 91:
			return -5507.993f, -2964.844f, -1.6215f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_751(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_752()
{
	return Global_1935689->f_18;
}

void func_753(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_754(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!func_161(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				func_513(iVar9, &uVar6, &uVar7, &iVar5, &uVar8);
				func_767(&iVar0, iVar9, iVar5, uVar6);
			}
			else
			{
				iVar0 = func_529(iVar2);
			}
			if (iVar0 == iParam1)
			{
				*iParam2 = iVar2;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return 1;
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return 0;
}

int func_755(int iParam0)
{
	return func_952(func_951(iParam0));
}

void func_756(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -153135980;
			break;
		case 1:
			*uParam1 = 12851681;
			break;
		case 2:
			*uParam1 = 1386325051;
			break;
		case 3:
			*uParam1 = 43722464;
			break;
		case 4:
			*uParam1 = -581476215;
			break;
		case 5:
			*uParam1 = -1906982261;
			break;
		case 9:
			*uParam1 = -1035806543;
			break;
		case 10:
			*uParam1 = 1579284209;
			break;
		case 11:
			*uParam1 = -1172613177;
			break;
		case 12:
			*uParam1 = 495869290;
			break;
		case 16:
			*uParam1 = -1382561665;
			break;
		case 15:
			*uParam1 = 684071069;
			break;
		case 14:
			*uParam1 = 1357371535;
			break;
		case 13:
			*uParam1 = -1221865546;
			break;
	}
}

int func_757(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935689->f_19.f_1)
	{
		if (func_234(iParam0, &(Global_1935689->f_19.f_2[iVar0 /*2*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_758(int iParam0)
{
	if (func_111(iParam0, -839724752))
	{
		return func_111(iParam0, 1937586541);
	}
	return 0;
}

int func_759(int iParam0, int iParam1)
{
	if (func_111(iParam0, 173360570))
	{
		return 0;
	}
	switch (Global_1935689->f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_111(iParam0, -887064662) || func_111(iParam0, -839724752)) || func_111(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_111(iParam0, -887064662) || func_111(iParam0, -839724752)) || func_111(iParam0, -136654233)) || func_111(iParam0, 554195525)) || func_111(iParam0, -1238310989)) || func_111(iParam0, 2127114599)) || func_111(iParam0, -1864584831)) || func_111(iParam0, 1068498601)) || func_111(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_760(int iParam0)
{
	if (func_384(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

Vector3 func_761()
{
	if (func_953(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_953(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_762()
{
	return Global_40.f_4283.f_1;
}

void func_763(int iParam0, int iParam1)
{
	Global_1935689->f_19.f_2[iParam0 /*2*/] = iParam1;
}

bool func_764(int iParam0)
{
	return (Global_1935689->f_19.f_2[iParam0 /*2*/])->f_1;
}

void func_765(int iParam0)
{
	Global_1935689->f_19.f_2[iParam0 /*2*/] = 0;
	(Global_1935689->f_19.f_2[iParam0 /*2*/])->f_1 = 0;
}

void func_766(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	Var1.f_1 = func_954(iVar0);
	Var1 = func_955(iVar0);
	func_540(-1715238242, iParam0, &Var1, func_956(iParam0), 1, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1935689->f_19.f_203++;
	Global_1935689->f_19.f_1++;
}

bool func_767(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::_0x9E7738B291706746(iParam0, iParam1, iParam2);
	return uVar2;
}

int func_768(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_513(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_767(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824 /* GXTEntry: "Animal Carcass Perfect" */;
		case 1:
			return 1715058708 /* GXTEntry: "Animal Carcass Good Quality" */;
		case 0:
			return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
		default:
			break;
	}
	return -45650221 /* GXTEntry: "Animal Carcass Poor" */;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			return -949689219;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			return -1248968496;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			return 1706369307;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			return 1520110311;
		case 754186760: /* GXTEntry: "Hunting Request" */
			return -1992824800;
		default:
			break;
	}
	return 0;
}

int func_770(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_572(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0)) && func_776(iParam0, 7, 0)) && func_776(iParam0, 8, 0)) && func_776(iParam0, 9, 0))
		{
			return func_384(iParam1, 8388608);
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0)) && func_776(iParam0, 7, 0)) && func_776(iParam0, 8, 0))
		{
			return func_384(iParam1, 8388608);
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0)) && func_776(iParam0, 7, 0))
		{
			return func_384(iParam1, 8388608);
		}
	}
	else if (iVar0 == 2)
	{
		if (func_776(iParam0, 5, 0) && func_776(iParam0, 6, 0))
		{
			return func_384(iParam1, 8388608);
		}
	}
	return 0;
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 925148953: /* GXTEntry: "Heartlands Oil Field Bone Location" */
			return 1175400068;
		case 1373101183: /* GXTEntry: "Heartlands Dewberry Creek Bone Location" */
			return 854689865;
		case -1728976206: /* GXTEntry: "Scarlett Meadows Dewberry Creek Bone Location" */
			return 1772877245;
		case 656082694: /* GXTEntry: "Heartlands Grassy Hill Bone Location" */
			return -891504611;
		case 1821250027: /* GXTEntry: "Big Valley Rocky Slope Bone Location" */
			return -1134748898;
		case -1967305143: /* GXTEntry: "Grizzlies Rock Wall Bone Location" */
			return -810270260;
		case -840313695: /* GXTEntry: "Heartlands Cliff Face Bone Location" */
			return 83602522;
		case -595627572: /* GXTEntry: "Heartlands Abandoned Shack Bone Location" */
			return -2054476413;
		case -1301013066: /* GXTEntry: "Cholla Springs High Desert Bone Location" */
			return 1934461192;
		case 1625521054: /* GXTEntry: "Cholla Springs Jorge\'s Gap Bone Location" */
			return -1434912930;
		case -1796283468: /* GXTEntry: "Hennigan\'s Stead Pike\'s Basin Bone Location" */
			return 491871729;
		case 1095777400: /* GXTEntry: "Hennigan\'s Stead San Luis River Bone Location" */
			return -1078418763;
		case 2005280995: /* GXTEntry: "Cumberland Forest Six Point Overlook Bone Location" */
			return -1360396008;
		case -2048965227: /* GXTEntry: "Grizzlies Calumet Ravine Bone Location" */
			return -462984174;
		case -638980695: /* GXTEntry: "Grizzlies Dakota River Ledge Bone Location" */
			return -751449681;
		case 1782156874: /* GXTEntry: "Grizzlies Northern Boundary Bone Location" */
			return -1973995525;
		case -1064322315: /* GXTEntry: "Grizzlies O\'Creagh\'s Run Overlook Bone Location" */
			return 1988923494;
		case -826878141: /* GXTEntry: "Roanoke Ridge Overlook Bone Location" */
			return -1386480124;
		case 583368543: /* GXTEntry: "Cumberland Forest Bacchus Station Bone Location" */
			return -1676256391;
		case 236671671: /* GXTEntry: "Roanoke Ridge Valley Overlook Bone Location" */
			return 901975752;
		case -1210046910: /* GXTEntry: "Roanoke Ridge Kamassa River Bone Location" */
			return 2119466214;
		case -1297277988: /* GXTEntry: "Roanoke Ridge Van Horn Bone Location" */
			return 1812453453;
		case -627446859: /* GXTEntry: "Heartlands Northern Boundary Bone Location" */
			return 797237060;
		case -866431176: /* GXTEntry: "Big Valley Beryl\'s Dream Overlook Bone Location" */
			return 468989987;
		case -1899965424: /* GXTEntry: "Heartlands Southern Gorge Bone Location" */
			return 1393010249;
		case 1761708178: /* GXTEntry: "Big Valley Northern Cave Bone Location" */
			return 1099957082;
		case 764875198: /* GXTEntry: "Rio Bravo Del Lobo Rock Bone Location" */
			return -415281478;
		case -1613859285: /* GXTEntry: "Rio Bravo San Luis River Bone Location" */
			return -722949619;
		case 1382734693: /* GXTEntry: "Gaptooth Ridge North Tumbleweed Bone Location" */
			return 202086482;
		case 1032366068: /* GXTEntry: "Gaptooth Ridge South Tumbleweed Bone Location" */
			return -87394864;
		default:
			break;
	}
	return 0;
}

int func_772(int iParam0)
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (!func_344(iParam0))
	{
		return 0;
	}
	return func_296(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 878840834: /* GXTEntry: "Rock Carving Coordinates 1" */
			return 790725359;
		case 1128245693: /* GXTEntry: "Rock Carving Coordinates 2" */
			return -1018620084;
		case -632432677: /* GXTEntry: "Rock Carving Coordinates 3" */
			return 1417352943;
		case -425693056: /* GXTEntry: "Rock Carving Coordinates 4" */
			return -198238953;
		case -37052716: /* GXTEntry: "Rock Carving Coordinates 5" */
			return -1572028097;
		case 204880811: /* GXTEntry: "Rock Carving Coordinates 6" */
			return 1013020015;
		case -905988301: /* GXTEntry: "Rock Carving Coordinates 7" */
			return 529834059;
		case -1746545912: /* GXTEntry: "Rock Carving Coordinates 8" */
			return -851121144;
		case -549854809: /* GXTEntry: "Rock Carving Coordinates 9" */
			return 489753387;
		case 1756820867: /* GXTEntry: "Rock Carving Coordinates 10" */
			return 288056757;
		default:
			break;
	}
	return 0;
}

int func_774(int iParam0)
{
	switch (iParam0)
	{
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
		case -161595323: /* GXTEntry: "Legendary Perch" */
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return 1;
	}
	return 0;
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			return -1865241121;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			return 2117142684;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			return -1409326024;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			return -641744968;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			return -946988203;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			return -646136018;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			return -955835837;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			return -179276075;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			return -492711560;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			return 1764383959;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			return 317501533;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			return 817753087;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return 576606016;
		default:
			break;
	}
	return 0;
}

int func_776(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_698(iParam0, iParam1);
	if ((((((((((((((((((((iVar0 == 444160793 || iVar0 == -1969404854) || iVar0 == 1761263432) || iVar0 == -843795569) || iVar0 == -832850511) || iVar0 == -1464585113) || iVar0 == -1290897778) || iVar0 == -100913452) || iVar0 == 313332607) || iVar0 == -124539232) || iVar0 == 59384454) || iVar0 == 905173572) || iVar0 == 1432949803) || iVar0 == -983831788) || iVar0 == -1882344824) || iVar0 == 323124696) || iVar0 == -2108314374) || iVar0 == -161595323) || iVar0 == -1114363619) || iVar0 == -368407134) || iVar0 == -1490884871)
	{
		if (func_257(iVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328->f_94 = 1;
				func_149(iVar0, 1, 0, -142743235, 0);
			}
			return 1;
		}
	}
	else if ((((((((((iVar0 == 102446365 || iVar0 == 924882045) || iVar0 == -935543049) || iVar0 == -1866642239) || iVar0 == -1193798153) || iVar0 == -804542901) || iVar0 == -1696275132) || iVar0 == -787702678) || iVar0 == 1997759228) || iVar0 == 1265573293) || iVar0 == -1030441283)
	{
		if (func_957(iVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_777(int iParam0)
{
	switch (iParam0)
	{
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
		case -404270094: /* GXTEntry: "Cigar Orchid" */
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
		case 1504361882: /* GXTEntry: "Spider Orchid" */
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 1;
	}
	return 0;
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 1;
	}
	return 0;
}

bool func_779()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

void func_780(int iParam0, var uParam1)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<10> Var19;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_13 = -1;
	Var1.f_1 = 1084182731;
	iVar15 = -1;
	iVar18 = INVENTORY::_0x13D234A2A3F66E63(*iParam0);
	Var19.f_9 = -1591664384;
	if (func_782(iVar18, &Var1, &iVar15, &iVar16))
	{
		iVar17 = 0;
		iVar17 = 0;
		while (iVar17 < iVar16)
		{
			if (func_233(&Var19, iVar17, iVar15, iVar16))
			{
				if (func_161(Var19.f_4, 0) && Var19.f_4 != 1259508039)
				{
					if (func_249(Var19.f_4))
					{
						iVar0 = 0;
						while (iVar0 < 999)
						{
							if (uParam1[iVar0] == Var19.f_4 || !func_161(uParam1[iVar0], 0))
							{
							}
							else
							{
								iVar0++;
							}
						}
						if (!func_161(&(Global_1935689->f_223[iVar0]), 0))
						{
							(*uParam1)[iVar0] = Var19.f_4;
						}
					}
				}
			}
			iVar17++;
		}
		func_244(iVar15);
	}
}

void func_781(var uParam0, int iParam1, bool bParam2)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_255(Var0, 0);
	}
	else
	{
		func_236(Var0, 0);
	}
}

int func_782(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = INVENTORY::_0x640F890C3E5A3FFD(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_783(int iParam0, int iParam1)
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

void func_784(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_785(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_958(*iParam0);
	iVar1 = func_959(*iParam0);
	if (iParam1 < 1 || iParam1 > func_960(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_787(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_788(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_789(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
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

int func_790()
{
	int iVar0;
	float fVar1;

	iVar0 = func_85(7);
	fVar1 = -1f;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_346(7) != 0)
		{
			fVar1 = func_136(7);
			if (fVar1 != -1f)
			{
				if (func_137(Global_35, iVar0, fVar1, 1))
				{
					return 0;
				}
			}
		}
	}
	if (func_138() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1900383->f_393))
		{
			if (func_137(Global_35, Global_1900383->f_393, 5f, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_791(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_489(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_235(&Var3, 0, 0))
				{
				}
				else if (bParam2)
				{
					func_258(Var3.f_4, bParam3);
				}
				else
				{
					func_246(Var3);
				}
			}
			iVar2++;
		}
	}
	func_244(iVar0);
}

void func_792()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10218, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10217, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10214, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689->f_10215, false);
}

int func_793(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_199(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_446(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_794()
{
	int iVar0;
	int iVar1;

	if (Global_1392040->f_2)
	{
		return 0;
	}
	if (func_185())
	{
		return 0;
	}
	if (func_118())
	{
		return 0;
	}
	if (Global_1935496->f_10)
	{
		return 0;
	}
	if (Global_1935496->f_11)
	{
		return 0;
	}
	if (Global_1935496->f_12)
	{
		return 0;
	}
	if (!func_953(15))
	{
		return 0;
	}
	if (func_779())
	{
		return 0;
	}
	if (func_961(8192))
	{
		return 0;
	}
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	if (func_368(8388608))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_35);
		iVar1 = iVar0;
		if (((iVar1 == 1020517461 || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052)
		{
			return 1;
		}
		return 0;
	}
	if (!func_173(0, 1))
	{
		return 0;
	}
	return 1;
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_35;
		case 1:
			if (func_272(Global_1935689->f_10186, 4))
			{
				return func_85(6);
			}
			break;
		case 2:
			if (func_272(Global_1935689->f_10186, 2))
			{
				return func_85(1);
			}
			break;
		case 3:
			if (func_272(Global_1935689->f_10186, 1))
			{
				return func_85(7);
			}
			break;
	}
	return func_482();
}

int func_796(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;

	func_797(iParam0, iParam1, &uVar0, &uVar1, &uVar2);
	return uVar0;
}

void func_797(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<4> Var0;
	var uVar4;
	int iVar5;
	int iVar6;
	var uVar7[10];
	int iVar18;

	if (!func_220(iParam1))
	{
		return;
	}
	if (func_962(iParam0))
	{
		iVar5 = 0;
		while (iVar5 < 3)
		{
			uVar4 = func_963(iVar5);
			if (!PED::_0x608BC6A6AACD5036(&Var0, iParam0, uVar4, 0))
			{
			}
			else
			{
				iVar6 = Var0.f_3;
				if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
				}
				else if (iParam1 == func_248(iVar6))
				{
					if (ENTITY::_0x8DE41E9902E85756(iVar6))
					{
						if (iVar5 == 0 || iVar5 == 2)
						{
							*uParam4 = 1;
						}
						*iParam2++;
					}
					else
					{
						*iParam3++;
					}
				}
			}
			iVar5++;
		}
	}
	else if (PED::_0xA911EE21EDF69DAF(iParam0))
	{
		func_964(Global_35, &uVar7, 1);
		iVar18 = 0;
		while (iVar18 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(uVar7[iVar18])))
			{
			}
			else if (iParam1 == func_248(&(uVar7[iVar18])))
			{
				if (ENTITY::_0x8DE41E9902E85756(&(uVar7[iVar18])))
				{
					if (iVar18 == 0)
					{
						*uParam4 = 1;
					}
					*iParam2++;
				}
				else
				{
					*iParam3++;
				}
			}
			iVar18++;
		}
	}
}

int func_798(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

int func_799(int iParam0)
{
	return func_965(iParam0);
}

void func_800(bool bParam0)
{
	if (bParam0)
	{
		func_966(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_967(&(Global_40.f_12018.f_42), 1);
	}
}

int func_801()
{
	return func_968(Global_40.f_12018);
}

int func_802()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_657(iVar1);
		if (func_257(iVar2, 1, 0) || func_808(func_807(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_803()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_969(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_804()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_813(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_805()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_806(int iParam0)
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

int func_807(int iParam0)
{
	switch (iParam0)
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

bool func_808(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_809(int iParam0)
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

int func_810(int iParam0)
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

int func_811(int iParam0)
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

char* func_812(int iParam0)
{
	switch (iParam0)
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

bool func_813(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_814(int iParam0)
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

char* func_815(int iParam0)
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

int func_816(int iParam0)
{
	if (func_970(iParam0) && func_257(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_971(iParam0) && func_972(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_817(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_266(iParam0));
}

int func_818(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_819(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_820(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_973(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_821(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

float func_822(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_0x775A1CA7893AA8B5(Global_35);
			fVar2 = PED::_0xCB42AFE2B613EE55(Global_35);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_823(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_824(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_825(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_826(int iParam0)
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_827(int iParam0, float fParam1)
{
	return func_974(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_828(var uParam0, var uParam1, float fParam2)
{
	if (func_62() != -1)
	{
		return 1;
	}
	if (!func_975(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_976(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_150(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_976(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_829(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_62() == 0)
	{
		func_977(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_913(0);
	if (bParam1)
	{
		func_978(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_979();
	}
	if (bParam2)
	{
		fParam0 = func_980(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_981(0, func_921(fParam0, -100f, 100f), bParam1);
}

void func_830(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_62() == 0)
	{
		func_977(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_913(2);
	if (bParam1)
	{
		func_978(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_980(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_981(2, func_921(fParam0, -100f, 100f), bParam1);
}

void func_831(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_62() == 0)
	{
		func_977(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_913(1);
	if (bParam1)
	{
		func_978(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_980(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_981(1, func_921(fParam0, -100f, 100f), bParam1);
}

float func_832(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 120f);
		case 3:
			return (fParam0 * 2880f);
		default:
			break;
	}
	return fParam0;
}

void func_833(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_982(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_983(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_984(-1);
			func_985(0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_983(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_986(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_983(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_987(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_988(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_988(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_988(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

void func_834(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_989(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_385(17))
	{
		return;
	}
	if (func_990())
	{
		iVar1 = func_991(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_991(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_893();
			func_894(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_992(&fVar3, &fVar4);
		func_993(13, func_921(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_150(94, 0);
		}
	}
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 3:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 4:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 6:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 7:
			return -398744080 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 11:
			return -2085219828 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 15:
			return -1620920647 /* GXTEntry: "English Mace" */;
		case 16:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 19:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 20:
			return -597058368 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return 128702355 /* GXTEntry: "Milkweed" */;
		case 26:
			return -2051332199 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 28:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return 228922461 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 34:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 37:
			return 2006811763 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -90546043 /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return 1216456215 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 42:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return -529638012 /* GXTEntry: "Yarrow" */;
		case 1:
			return -651064726 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -404270094 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return -1521783510 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return 1714875242 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 2093126853 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return 728781265 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1794857344 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return 1952409553 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return -150591160 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 1019229063 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -323969289 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 927763737 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return 1504361882 /* GXTEntry: "Spider Orchid" */;
		default:
			break;
	}
	return 0;
}

void func_836(int iParam0, int iParam1)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_62() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

void func_837(int iParam0, bool bParam1)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_994(iParam0))
	{
		return;
	}
	func_836(iParam0, 2);
	if (bParam1)
	{
		if (!func_470(0, 0, 1))
		{
			func_656(1, 6);
		}
	}
}

int func_838(int iParam0)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	return func_545(iParam0, 1, 1);
}

void func_839(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (func_838(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_554(iParam0);
	}
	if (!bParam1)
	{
		if (func_62() != -1)
		{
		}
		else
		{
			func_995(iParam0);
		}
	}
	func_836(iParam0, 1);
	if (func_62() == -1)
	{
		func_996(iParam0, func_276());
	}
	func_837(iParam0, 1);
	if (bParam2)
	{
		if (!func_470(0, 0, 1))
		{
			func_656(1, 6);
		}
	}
}

bool func_840()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_841(int iParam0)
{
	int iVar0;

	iVar0 = func_334(func_997(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_842(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_334(func_997(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_121(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_843()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_121(iVar1) == -999503751)
		{
			if (func_998() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_844(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_153(iParam0, 0, 0) };
	Var5 = { func_154(iParam0, Var0, Var0.f_4, 0) };
	if (func_340(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_199(0), &Var5, iParam1);
	return 1;
}

void func_845(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_999(iParam2, *uParam0);
	func_1000(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

void func_846(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_847(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_121(iParam0))
	{
		case -2061583405:
			bVar0 = func_1001(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1001(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1001(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1001(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1001(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1001(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_610();
	}
	if (bParam1)
	{
		func_611(0, 0);
	}
}

void func_848(var uParam0, int iParam1)
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
			if ((func_1002(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1002(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1003(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_849(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1004(uParam0, 1))
	{
		func_1005(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_850(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_851(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_618(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_618(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_618(iVar2, iVar0);
		}
	}
}

int func_852(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_609();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_853(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_854(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_855(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_334(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_856(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_334(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_327(524288))
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
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_857(var uParam0)
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

void func_858(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_62() == -1)
	{
		func_1006(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1007(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_859(int iParam0, int iParam1)
{
	if (func_62() == -1)
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

int func_860(int iParam0)
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

void func_861(int iParam0, bool bParam1, int iParam2)
{
	func_1008(&(Global_1946804->f_1378), iParam0);
	func_1009(2, iParam0, 6);
	if (bParam1)
	{
		func_611(0, 1);
	}
}

int func_862()
{
	return Global_1051081->f_11;
}

char* func_863()
{
	return "unnamed";
}

int func_864(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_865(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return func_1010(32, iParam0);
}

int func_866(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225638->f_21[iParam0])
	{
		return ((*Global_1108178)[iParam0 /*37*/])->f_1;
	}
	return 25;
}

bool func_867(int iParam0)
{
	if (func_1011(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) != 1)
		{
			func_1012(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) == 1;
}

int func_868(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_869(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_870(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			iVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			iVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			iVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			iVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			iVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			iVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			iVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			iVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			iVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			iVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			iVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			iVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			iVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			iVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			iVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			iVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_694(iVar9);
	iVar2 = func_694(iVar10);
	iVar3 = func_694(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_694(iVar12);
	}
	iVar5 = func_695(iVar9);
	iVar6 = func_695(iVar10);
	iVar7 = func_695(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_695(iVar12);
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

int func_871(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
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

int func_872(int iParam0)
{
	if (!func_161(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_873(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_153(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_665((375 + iVar29), 1);
		if (func_442(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_443(iParam0, &Var6, iVar5);
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

int func_874(int iParam0)
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

float func_875(int iParam0)
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
			return func_1013(iParam0);
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
			return func_1013(iParam0);
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
			return func_1013(iParam0);
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

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_385(18);
		case 2:
			return func_385(20);
		case 1:
			return func_385(19);
		default:
			break;
	}
	return 1;
}

int func_877(int iParam0)
{
	return func_1014(&(Global_40.f_11095.f_11[iParam0]));
}

void func_878(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_62() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_385(31))
	{
		return;
	}
	iVar0 = func_877(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_877(iParam0);
	if (func_1015(iParam0) && func_1016(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1017(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1018(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_150(func_1019(iParam0), 0);
					}
					func_1020(iParam0, iVar2, iVar3);
					func_824(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_879(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_880(int iParam0)
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

void func_881(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_882(bool bParam0)
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

void func_883(int iParam0)
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

void func_884(bool bParam0)
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

void func_885(bool bParam0)
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

void func_886(bool bParam0)
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

void func_887(bool bParam0)
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

void func_888(bool bParam0)
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

void func_889(bool bParam0)
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

int func_890(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_334(iParam0, 1) /*3*/]);
}

void func_891()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1021();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_389(joaat("weapon_revolver_cattleman_john"));
		func_433(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_389(joaat("weapon_melee_knife_john"));
		func_433(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_892(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_893()
{
	return &Global_1899515;
}

void func_894(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_959(*iParam0);
	iVar1 = func_958(*iParam0);
	iVar2 = func_1022(*iParam0);
	iVar3 = func_1023(*iParam0);
	iVar4 = func_1024(*iParam0);
	iVar5 = func_1025(*iParam0);
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
	iVar6 = func_960(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_960(iVar1, iVar0);
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
	func_1026(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_895(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_153(iParam0, 1, 0) };
	return func_333(Var0.f_4);
}

int func_896(int iParam0)
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

int func_897(int iParam0)
{
	return func_535(iParam0, -1);
}

bool func_898(int iParam0, bool bParam1)
{
	return func_1027(func_893(), iParam0, bParam1);
}

int func_899()
{
	if (func_673())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_900(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1028((Global_40.f_4283.f_325 + iParam0));
}

void func_901(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_899())
	{
		func_636(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_636(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_902(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1029(iParam0, 1);
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

void func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1029(iParam0, 1);
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

void func_905()
{
	func_904(-939420910);
	func_904(-1187950766);
	func_904(356365161);
	func_904(753127042);
	func_904(-2038424081);
	func_904(1884271742);
	func_904(459290420);
}

void func_906()
{
	func_904(704802028);
	func_904(588987611);
	func_904(2008888900);
	func_904(1649996811);
	func_904(227918160);
	func_904(168171957);
	func_904(1193080109);
	func_904(-491981251);
	func_904(-639037538);
	func_904(-618620429);
}

bool func_907(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1029(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_908(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_909(int iParam0)
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

void func_910(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_911(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_912()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_913(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_914()
{
	float fVar0;
	int iVar1;

	fVar0 = func_989(13);
	iVar1 = func_991(fVar0);
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

float func_915()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_916()
{
	if (func_673())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_917()
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

float func_918()
{
	return Global_1955565->f_3;
}

void func_919(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1030(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_920(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1030(iParam0, 2, 0, 0);
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

float func_921(float fParam0, float fParam1, float fParam2)
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

bool func_922()
{
	return func_989(12) <= -99f;
}

bool func_923()
{
	return func_989(12) >= 99f;
}

int func_924(int iParam0)
{
	if (!func_587(iParam0))
	{
		return 0;
	}
	if (func_588(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_925(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_587(iParam0))
	{
		return;
	}
	if (!func_924(iParam0))
	{
		func_927(iParam0, 2);
		if (bParam2)
		{
			if (!func_470(0, 0, 1))
			{
				func_656(1, 4);
			}
		}
		if ((!func_926() && !bParam1) && !func_470(0, 0, 1))
		{
			func_123(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1031(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_926()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_927(int iParam0, int iParam1)
{
	if (!func_587(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_928(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1032(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_386(50);
			}
			else
			{
				func_386(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_386(51);
			}
			else
			{
				func_386(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1033(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_415();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_415();
			}
			break;
		case 3:
			func_386(24);
			if (bParam1)
			{
				if (!func_1033(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_415();
				}
			}
			break;
	}
}

void func_929(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1034(0))
			{
				iVar0++;
			}
			if (func_1034(2))
			{
				iVar0++;
			}
			if (func_1034(4))
			{
				iVar0++;
			}
			if (!func_1035(16))
			{
				if (iVar0 == 1)
				{
					func_1036();
					func_150(456, 1);
					func_1037(16);
				}
			}
			if (!func_1035(32))
			{
				if (iVar0 >= 3)
				{
					func_1036();
					func_150(456, 1);
					func_1037(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1034(1))
			{
				iVar0++;
			}
			if (func_1034(3))
			{
				iVar0++;
			}
			if (func_1034(7))
			{
				iVar0++;
			}
			if (!func_1035(1))
			{
				if (iVar0 == 1)
				{
					func_1038();
					func_150(457, 1);
					func_1037(1);
				}
			}
			if (!func_1035(2))
			{
				if (iVar0 >= 3)
				{
					func_1038();
					func_150(457, 1);
					func_1037(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1034(5))
			{
				iVar0++;
			}
			if (func_1034(6))
			{
				iVar0++;
			}
			if (func_1034(8))
			{
				iVar0++;
			}
			if (!func_1035(4))
			{
				if (iVar0 == 1)
				{
					func_1039();
					func_150(455, 1);
					func_1037(4);
				}
			}
			if (!func_1035(8))
			{
				if (iVar0 >= 3)
				{
					func_1039();
					func_150(455, 1);
					func_1037(8);
				}
			}
			break;
	}
}

void func_930(var uParam0)
{
	func_714(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_714(uParam0, 617531372);
	}
	else
	{
		func_714(uParam0, 291123060);
	}
}

void func_931(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1040(uParam0))
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

void func_932(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1041(iParam0, iParam1);
}

void func_933(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = 878851736; /* GXTEntry: "Beef Stew" */
	iVar2 = Global_40.f_4283;
	if (func_1042(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	}
	else
	{
		func_225(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_161(&(uVar3[iVar15]), 0))
			{
			}
			else if (!func_219(&(uVar3[iVar15])))
			{
			}
			else
			{
				iVar14 = func_1043(&(uVar3[iVar15]), iVar2);
				if (func_1044(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_1045(&iVar1);
	if (func_1044(iVar1, Global_1357549->f_1492))
	{
		Global_1357549->f_1492 = iVar1;
	}
}

int func_934(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_935(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_935(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_936(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1046(iParam1);
	iVar1 = func_1047(iVar0, 1);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = (&(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] - iParam2);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1] = func_1048(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298[iVar1]), 0, 10);
}

int func_937(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_161(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1049(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_361(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_462(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_462(iParam0, iParam1) - iParam2) < 0)
		{
			func_937(iParam0, iParam1, func_264(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1050(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_156(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_360(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_938(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_939(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 1:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 2:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 3:
			return -150200864 /* GXTEntry: "Legendary Beaver Pelt" */;
		case 4:
			return 2109269555 /* GXTEntry: "Legendary Boar Pelt" */;
		case 5:
			return 2116849039;
		case 6:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 7:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 8:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 9:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 10:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 11:
			return -888740979 /* GXTEntry: "Legendary Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1528935719 /* GXTEntry: "Legendary Cougar Pelt" */;
		case 16:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 17:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 18:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 19:
			return -1517904196 /* GXTEntry: "Legendary Coyote Pelt" */;
		case 20:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 21:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 22:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 23:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 24:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 25:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 26:
			return 1642484975 /* GXTEntry: "Legendary Fox Pelt" */;
		case 27:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 28:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 29:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 30:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 31:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 32:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 33:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 34:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 35:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 36:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 37:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 38:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 39:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 40:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 41:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 42:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 43:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 44:
			return -103050851 /* GXTEntry: "Legendary Pronghorn Hide" */;
		case 45:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 46:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 47:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 48:
			return -734947450 /* GXTEntry: "Legendary Ram Hide" */;
		case 49:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 50:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 51:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 52:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 53:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 54:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 55:
			return 552246565 /* GXTEntry: "Legendary Wolf Pelt" */;
		case 56:
			return 0;
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

void func_940(int iParam0, int iParam1)
{
	int iVar0;

	if (func_62() == -1)
	{
		iVar0 = func_85(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_730(iVar0, iParam0, iParam1);
}

int func_941(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_439(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_154(iParam0, Var0, Var0.f_4, 0) };
	return func_274(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

struct<5> func_942(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_943(iParam0, joaat("character"), func_719(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_943(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_161(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_944(int iParam0)
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

int func_945(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_946(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1051(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

Vector3 func_947(int iParam0)
{
	return func_1052(iParam0);
}

Vector3 func_948(int iParam0)
{
	vector3 vVar0;

	if (!func_344(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1053(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

int func_949(int iParam0)
{
	if (func_1054(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

bool func_950(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		if (func_111(iParam0, -1242251796))
		{
			if (func_111(iParam0, 2060589226))
			{
				return func_187(512);
			}
			return func_187(256);
		}
		else if (func_111(iParam0, 1919582297))
		{
			return func_187(8192);
		}
	}
	if (Global_1935496->f_12)
	{
		return func_187(256);
	}
	else
	{
		return func_187(2);
	}
	return func_187(2);
}

int func_951(int iParam0)
{
	if (!func_226(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_144() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

int func_952(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_953(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_296(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_954(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689->f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689->f_10225;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_955(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1935689->f_10225))
	{
		return 0;
	}
	Var0 = Global_1935689->f_10225;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_956(int iParam0)
{
	if (func_1055(iParam0))
	{
		return func_32(16);
	}
	else if (func_1056(iParam0))
	{
		return func_1057();
	}
	else if (func_1058(iParam0))
	{
		return func_32(2);
	}
	return 1;
}

int func_957(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar14 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar14);
		if (ITEMSET::IS_ITEMSET_VALID(iVar14))
		{
			iVar15 = ITEMSET::GET_ITEMSET_SIZE(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar16, iVar14));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else if (ENTITY::_0x9A100F1CF4546629(iVar0) || ENTITY::_0xC346A546612C49A9(iVar0))
				{
					iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					iVar1 = func_225(iVar21, &uVar2);
					iVar23 = func_528(iVar0);
					if (iVar23 == iParam0)
					{
						if (bParam1)
						{
							Global_1901328->f_94 = 1;
							ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
							func_360(iVar23, -1, 0, 0, 0);
							Global_1901328->f_94 = 0;
						}
						ITEMSET::DESTROY_ITEMSET(iVar14);
						return 1;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (&uVar2[iVar22] == iParam0)
						{
							if (bParam1)
							{
								Global_1901328->f_94 = 1;
								ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
								func_360(&(uVar2[iVar22]), -1, 0, 0, 0);
								Global_1901328->f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					func_513(iVar24, &iVar18, &uVar19, &iVar17, &uVar20);
					if (func_767(&iVar13, iVar24, iVar17, iVar18))
					{
						if (iVar13 == iParam0)
						{
							if (bParam1)
							{
								Global_1901328->f_94 = 1;
								ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
								func_360(iVar13, -1, 0, 0, 0);
								Global_1901328->f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return 1;
						}
					}
				}
				iVar16++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar14);
		}
		else
		{
			return 0;
		}
	}
	return func_1059(iParam0, bParam1);
}

int func_958(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_959(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_232(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_960(int iParam0, int iParam1)
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

bool func_961(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

int func_962(int iParam0)
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

int func_963(int iParam0)
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

int func_964(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}

int func_965(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

void func_966(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_967(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_968(int iParam0)
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

bool func_969(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_970(int iParam0)
{
	switch (iParam0)
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

int func_971(int iParam0)
{
	switch (iParam0)
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

int func_972(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1060(&iVar0, 0, iVar95, &Var1) && !func_1060(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1061(iVar0, &Var1);
			if (func_161(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_973(int iParam0)
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

float func_974(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_975(int iParam0)
{
	if (func_669())
	{
		return 0;
	}
	return func_296(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_976(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_1062(uParam0, &Var0);
}

void func_977(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_980(iParam0, fParam1, 1);
	}
	func_1064(iParam0, (func_1063(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_978(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_979()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_980(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_893();
	func_1065(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1066(iParam0, 2);
	if (func_1027(iVar0, func_1067(iParam0, 2), 1))
	{
		func_1068(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_150(88, bParam2);
		return 0f;
	}
	func_1069(iParam0, func_893(), 2);
	func_1068(iParam0, iVar1 + 1, 2);
	return fParam1;
}

void func_981(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_62() != -1)
	{
		return;
	}
	if (!func_385(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1070(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_1071(iParam0), iVar0);
	func_1073(func_1072(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_1074(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_150(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_150(func_1075(iParam0), 1);
	}
	sVar1 = func_1076(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_983(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_984(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_1077(2);
	func_1078(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_985(bool bParam0)
{
	if (func_62() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_150(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_150(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_1079(1, bParam0, 1);
	func_419();
	Global_40.f_11095.f_43 = bParam0;
}

void func_986(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_1080(2);
	func_1081(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_987(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_1082(2);
	func_1083(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_988(int iParam0, bool bParam1, bool bParam2)
{
	func_1064(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_989(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_990()
{
	if (func_62() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_898(Global_1347477->f_195, 0);
}

int func_991(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_992(float fParam0, float fParam1)
{
	if (!func_280())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_993(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_634(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1084(1, bVar1, 1, sVar2);
		func_1085(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1070(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_419();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1070(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1070(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

int func_994(int iParam0)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	return func_545(iParam0, 2, 1);
}

void func_995(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_150(210, 0);
			break;
		case 16:
			func_150(211, 0);
			break;
		case 33:
			func_150(212, 0);
			break;
		case 42:
			func_150(213, 0);
			break;
		case 2:
			func_150(214, 0);
			break;
		case 3:
			func_150(215, 0);
			break;
		case 43:
			func_150(216, 0);
			break;
		case 15:
			func_150(217, 0);
			break;
		case 23:
			func_150(218, 0);
			break;
		case 37:
			func_150(219, 0);
			break;
		case 26:
			func_150(220, 0);
			break;
		case 13:
			func_150(221, 0);
			break;
		case 19:
			func_150(222, 0);
			break;
		case 34:
			func_150(223, 0);
			break;
		case 38:
			func_150(224, 0);
			break;
		case 40:
			func_150(225, 0);
			break;
		case 7:
			func_150(226, 0);
			break;
		case 20:
			func_150(227, 0);
			break;
		case 18:
			func_150(228, 0);
			break;
		case 6:
			func_150(229, 0);
			break;
		case 29:
			func_150(230, 0);
			break;
		case 39:
			func_150(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_150(233, 0);
			break;
		case 8:
			func_150(234, 0);
			break;
		case 28:
			func_150(235, 0);
			break;
		case 31:
			func_150(236, 0);
			break;
		case 12:
			func_150(237, 0);
			break;
		case 27:
			func_150(238, 0);
			break;
		case 41:
			func_150(239, 0);
			break;
	}
}

void func_996(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_277(1849379570, 0);
			}
			else
			{
				func_277(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_277(-837750081, 0);
			}
			else
			{
				func_277(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_277(-342875345, 0);
			}
			else
			{
				func_277(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_277(-1083564345, 0);
			}
			else
			{
				func_277(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_277(-363984637, 0);
			}
			else
			{
				func_277(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_277(205335377, 0);
			}
			else
			{
				func_277(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_277(-1389317844, 0);
			}
			else
			{
				func_277(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_277(-1907629529, 0);
			}
			else
			{
				func_277(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_277(240007023, 0);
			}
			else
			{
				func_277(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_277(1312152388, 0);
			}
			else
			{
				func_277(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_277(545314598, 0);
			}
			else
			{
				func_277(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_277(1230485961, 0);
			}
			else
			{
				func_277(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_277(-201902289, 0);
			}
			else
			{
				func_277(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_277(-564622057, 0);
			}
			else
			{
				func_277(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_277(-1303190422, 0);
			}
			else
			{
				func_277(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_277(-88060354, 0);
			}
			else
			{
				func_277(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_277(1312248008, 0);
			}
			else
			{
				func_277(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_277(428446588, 0);
			}
			else
			{
				func_277(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_277(37692363, 0);
			}
			else
			{
				func_277(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_277(877023893, 0);
			}
			else
			{
				func_277(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_277(-706642783, 0);
			}
			else
			{
				func_277(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_277(-918250703, 0);
			}
			else
			{
				func_277(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_277(722815515, 0);
			}
			else
			{
				func_277(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_277(1053305061, 0);
			}
			else
			{
				func_277(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_277(1024520106, 0);
			}
			else
			{
				func_277(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_277(1140872184, 0);
			}
			else
			{
				func_277(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_277(-1590595690, 0);
			}
			else
			{
				func_277(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_277(1164380735, 0);
			}
			else
			{
				func_277(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_277(301696279, 0);
			}
			else
			{
				func_277(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_277(-415970359, 0);
			}
			else
			{
				func_277(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_277(1669531798, 0);
			}
			else
			{
				func_277(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_277(-977383775, 0);
			}
			else
			{
				func_277(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_277(1183317680, 0);
			}
			else
			{
				func_277(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_277(667332266, 0);
			}
			else
			{
				func_277(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_277(-1578905205, 0);
			}
			else
			{
				func_277(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_277(-448931053, 0);
			}
			else
			{
				func_277(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_277(-1162930163, 0);
			}
			else
			{
				func_277(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_277(1004123602, 0);
			}
			else
			{
				func_277(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_277(281748406, 0);
			}
			else
			{
				func_277(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_277(-1351305881, 0);
			}
			else
			{
				func_277(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_277(-1644190131, 0);
			}
			else
			{
				func_277(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_277(-926127573, 0);
			}
			else
			{
				func_277(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_277(758690400, 0);
			}
			else
			{
				func_277(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

int func_997(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_333(iVar0);
}

int func_998()
{
	return Global_1946804->f_1497;
}

void func_999(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1000(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1086(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_334(func_895(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1087(uParam0);
	}
}

int func_1001(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_507(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_121(iParam0) != -999503751)
		{
			func_1088(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_121(iParam0) != -999503751)
	{
		func_1088(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_844(iParam0, 1);
	return 1;
}

bool func_1002(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1003(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1004(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1005(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1006(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1007(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1008(var uParam0, int iParam1)
{
	int iVar0;

	if (func_62() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1006(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_1007(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1009(int iParam0, int iParam1, int iParam2)
{
	if (func_62() == -1)
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

int func_1010(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1089(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1090())
	{
		return func_1089(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1089(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_1011(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888->f_49111), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1012(int iParam0)
{
	int iVar0;

	if (func_1091() != 0 || func_62() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225638->f_21[iVar0])
	{
		func_1092(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_1093(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 1;
}

float func_1013(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_874(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1014(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1094(iVar6) - func_1094(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1014(float fParam0)
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

int func_1015(int iParam0)
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

int func_1016(int iParam0)
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

int func_1017(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1014(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1094(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1094(iVar0 + 1));
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

int func_1018(int iParam0)
{
	int iVar0;

	if (func_1095(iParam0, &iVar0))
	{
		return func_1094(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1096())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1096())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1096())
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

int func_1019(int iParam0)
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

void func_1020(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1097(iParam0));
	sVar4 = func_1099(func_1098(iVar3, iParam2));
	sVar6 = func_1100(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1101(iParam0));
	iVar8 = func_1102(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1103(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_569(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1104(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1021()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1105(Global_35, &uVar0);
	Var30 = { func_439(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1106(0);
	func_1107(7);
	func_330(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_609() == 1160113249)
	{
		func_330(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_330(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1108(Global_35, &uVar0);
}

int func_1022(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1023(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1024(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1025(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

void func_1026(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_783(iParam0, iParam6);
	func_784(iParam0, iParam5);
	func_785(iParam0, iParam4);
	func_786(iParam0, iParam3);
	func_787(iParam0, iParam2);
	func_788(iParam0, iParam1);
}

bool func_1027(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1109(iParam1) || !func_1109(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1028(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_637(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1029(int iParam0, int iParam1)
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

char* func_1030(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_634(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_634(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

char* func_1031(int iParam0)
{
	int iVar0;

	iVar0 = func_860(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_817(iVar0);
}

int func_1032(int iParam0)
{
	int iVar0;

	if (func_1110(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1111(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1112(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1113(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1033(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_257(func_1114(iVar0, iParam0), 1, 0))
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

int func_1034(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_257(func_1115(iVar0, iParam0), 1, 0))
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

bool func_1035(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1036()
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	func_433(1654063339, 1, 752097756);
	iVar0 = func_877(1);
	func_1020(1, iVar0, 0);
}

void func_1037(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1038()
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	func_433(1623931083, 1, 752097756);
	iVar0 = func_877(2);
	func_1020(2, iVar0, 0);
}

void func_1039()
{
	int iVar0;

	if (func_62() != -1)
	{
		return;
	}
	func_433(-1845241476, 1, 752097756);
	iVar0 = func_877(0);
	func_1020(0, iVar0, 0);
}

int func_1040(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1041(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

int func_1042(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("a_c_rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1043(int iParam0, int iParam1)
{
	if (!func_161(iParam0, 0))
	{
		return 878851736 /* GXTEntry: "Beef Stew" */;
	}
	if (!func_219(iParam0))
	{
		return 878851736 /* GXTEntry: "Beef Stew" */;
	}
	if (func_1116(iParam0, iParam1))
	{
		return -1708424762 /* GXTEntry: "Regional Beef Stew" */;
	}
	else if (func_111(iParam0, -1690954218))
	{
		return -1760041550 /* GXTEntry: "High Quality Beef Stew" */;
	}
	else if (func_111(iParam0, 1149630095))
	{
		return -1760041550 /* GXTEntry: "High Quality Beef Stew" */;
	}
	else if (func_111(iParam0, 194498509))
	{
		return 116793994 /* GXTEntry: "Medium Quality Beef Stew" */;
	}
	else if (func_111(iParam0, 43251425))
	{
		return 1869130580 /* GXTEntry: "Low Quality Beef Stew" */;
	}
	return 1869130580 /* GXTEntry: "Low Quality Beef Stew" */;
}

bool func_1044(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0[0] = 878851736; /* GXTEntry: "Beef Stew" */
	iVar0[1] = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
	iVar0[2] = 1869130580; /* GXTEntry: "Low Quality Beef Stew" */
	iVar0[3] = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
	iVar0[4] = 116793994; /* GXTEntry: "Medium Quality Beef Stew" */
	iVar0[5] = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
	iVar0[6] = -1760041550; /* GXTEntry: "High Quality Beef Stew" */
	iVar0[7] = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
	iVar0[8] = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	iVar0[9] = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (&iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_1045(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case 878851736: /* GXTEntry: "Beef Stew" */
				*iParam0 = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
				break;
			case 1869130580: /* GXTEntry: "Low Quality Beef Stew" */
				*iParam0 = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
				break;
			case 116793994: /* GXTEntry: "Medium Quality Beef Stew" */
				*iParam0 = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
				break;
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
				*iParam0 = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
				break;
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
				*iParam0 = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
				break;
		}
	}
}

int func_1046(int iParam0)
{
	if (!func_729(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_1047(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 0;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return 7;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return 20;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 14;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 29;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 1;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 17;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return 43;
		case -1517904196: /* GXTEntry: "Legendary Coyote Pelt" */
			return 19;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 30;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return 49;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 40;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 22;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return 42;
		case -888740979: /* GXTEntry: "Legendary Buck Pelt" */
			return 11;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 8;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 18;
		case -734947450: /* GXTEntry: "Legendary Ram Hide" */
			return 48;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return 10;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 21;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return 45;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return 34;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 39;
		case -150200864: /* GXTEntry: "Legendary Beaver Pelt" */
			return 3;
		case -103050851: /* GXTEntry: "Legendary Pronghorn Hide" */
			return 44;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 31;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return 38;
		case 0:
			return 56;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return 53;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 23;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 12;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 25;
		case 552246565: /* GXTEntry: "Legendary Wolf Pelt" */
			return 55;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return 41;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 54;
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return 37;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 28;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 2;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return 52;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 16;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return 6;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 51;
		case 1528935719: /* GXTEntry: "Legendary Cougar Pelt" */
			return 15;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return 35;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 9;
		case 1642484975: /* GXTEntry: "Legendary Fox Pelt" */
			return 26;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 24;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return 27;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 50;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 47;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return 46;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return 13;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return 32;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return 36;
		case 2047376405: /* GXTEntry: "White Cougar Pelt" */
			return 33;
		case 2109269555: /* GXTEntry: "Legendary Boar Pelt" */
			return 4;
		case 2116849039:
			return 5;
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

int func_1048(int iParam0, int iParam1, int iParam2)
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

bool func_1049(int iParam0, int iParam1, int iParam2)
{
	if (!func_161(iParam1, 0))
	{
		return false;
	}
	return func_462(iParam0, iParam1) >= iParam2;
}

int func_1050(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_161(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_942(iParam0) };
	Var5 = { func_943(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1117(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_1051(int iParam0)
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
		iVar0 = func_820(iParam0);
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

Vector3 func_1052(int iParam0)
{
	if (func_1118(iParam0))
	{
		return func_1119(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_1053(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1120(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

int func_1054(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_1055(int iParam0)
{
	switch (iParam0)
	{
		case -1894830400:
		case -1661502552:
		case -1460119729:
		case -1434186802:
		case -1021077955:
		case -766632829:
		case -753201933:
		case -226501431:
		case 106537031:
		case 335574348:
		case 758990751:
		case 938635888:
		case 1130538400:
		case 1940412283:
		case 2108217528:
			return 1;
	}
	if (func_1121(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1056(int iParam0)
{
	switch (iParam0)
	{
		case -883547903:
			return 1;
	}
	return 0;
}

bool func_1057()
{
	return func_32(1);
}

int func_1058(int iParam0)
{
	switch (iParam0)
	{
		case -1434404074:
		case -1304157067:
		case -1153279214:
		case -907263478:
		case -863446379:
		case -743230903:
		case -592101023:
		case -193281342:
		case -182347589:
		case 13054047:
		case 178390301:
		case 634557535:
		case 707002774:
		case 1056119646:
		case 1365509591:
			return 1;
	}
	return 0;
}

int func_1059(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	int iVar31;
	int iVar32;

	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	Var17.f_9 = -1591664384;
	Var3.f_1 = 1084182731;
	iVar31 = func_165(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar31) && func_782(INVENTORY::_0x13D234A2A3F66E63(iVar31), &Var3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_233(&Var17, iVar2, iVar0, iVar1))
			{
				if (iParam0 == Var17.f_4)
				{
					if (bParam1)
					{
						iVar32 = 1;
						func_456(&iVar31, iParam0, &iVar32, 1, -142743235);
					}
					func_244(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		func_244(iVar0);
	}
	return 0;
}

int func_1060(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_242(iParam1) && !func_1122(iParam1))
	{
		iVar0 = func_85(iParam1);
	}
	else
	{
		return 0;
	}
	func_1123(uParam3);
	uVar5 = func_963(iParam2);
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
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*iParam0);
	return 1;
}

void func_1061(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_513(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_767(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

var func_1062(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_1063(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1124();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_1064(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_1124();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_1125(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_1126(iVar0, iParam0, fParam1);
	func_1127(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar0, func_1071(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1065(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_959(*iParam0);
	iVar1 = func_958(*iParam0);
	iVar2 = func_1022(*iParam0);
	iVar3 = func_1023(*iParam0);
	iVar4 = func_1024(*iParam0);
	iVar5 = func_1025(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_960(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1026(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1066(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1124();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_1067(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1124();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

void func_1068(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1124();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_1069(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1124();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_1070(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_1071(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1072(int iParam0)
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

void func_1073(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1030(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), bParam2);
}

float func_1074(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_1075(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_1076(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

int func_1077(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1124();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		case 1:
			return Global_1955569->f_866.f_115;
		default:
			break;
	}
	return -1;
}

void func_1078(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_1079(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

int func_1080(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1124();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		default:
			break;
	}
	return -1;
}

void func_1081(float fParam0)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iVar0, fParam0);
}

int func_1082(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1124();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		default:
			break;
	}
	return -1;
}

void func_1083(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

void func_1084(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_1085(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1030(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), true);
	}
}

void func_1086(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1128(&(uParam0->f_3));
}

void func_1087(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1129(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1088(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1130(iParam1);
	func_1131(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1132(&(uParam0->f_26), iVar1);
		if (func_1133(uParam0->f_26, &iVar0))
		{
			func_1134(iVar0, iVar1);
		}
	}
}

bool func_1089(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1090()
{
	return Global_1109400->f_244;
}

int func_1091()
{
	return Global_1572887->f_13;
}

void func_1092(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != 0 || Global_1572887->f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	func_1093(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 0;
}

void func_1093(int iParam0)
{
	if ((Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 != 0)
	{
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_2 = 0;
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 = 0;
	}
}

int func_1094(int iParam0)
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

int func_1095(var uParam0, var uParam1)
{
	return 0;
}

int func_1096()
{
	return 0;
}

int func_1097(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_199(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_199(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_199(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1098(int iParam0, int iParam1)
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

var func_1099(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1100(int iParam0)
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

char* func_1101(int iParam0)
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

int func_1102(int iParam0)
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

int func_1103(int iParam0)
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

int func_1104(int iParam0)
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

void func_1105(int iParam0, var uParam1)
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
		if (func_664(iVar31))
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

void func_1106(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_161(iVar1, 0))
		{
			func_847(iVar1, 0, bParam0);
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

void func_1107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_62() == -1)
	{
		func_1135(352481484);
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
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_121(iVar2) != -999503751)
		{
			func_845(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_844(iVar2, 0))
		{
			func_131(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1108(int iParam0, var uParam1)
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
				if (func_663(uParam1[iVar0]))
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

int func_1109(int iParam0)
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
	iVar0 = func_1025(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_1024(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_1023(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_959(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_958(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_1022(iParam0);
	if (iVar5 < 1 || iVar5 > func_960(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_1110(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (func_111(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1111(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (func_111(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1112(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (func_111(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1113(int iParam0)
{
	if (!func_161(iParam0, 0))
	{
		return 0;
	}
	if (func_111(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1114(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1136(iParam0);
		case 1:
			return func_1137(iParam0);
		case 2:
			return func_1138(iParam0);
		case 3:
			return func_1139(iParam0);
	}
	return 0;
}

int func_1115(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1140(iParam0);
		case 1:
			return func_1141(iParam0);
		case 2:
			return func_1142(iParam0);
		case 3:
			return func_1143(iParam0);
		case 4:
			return func_1144(iParam0);
		case 5:
			return func_1145(iParam0);
		case 6:
			return func_1146(iParam0);
		case 7:
			return func_1147(iParam0);
		case 8:
			return func_1148(iParam0);
	}
	return 0;
}

int func_1116(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
				case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
				case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
				case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
				case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
				case 1023080408: /* GXTEntry: "Good Duck Carcass" */
				case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
				case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
				case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
				case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
				case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
				case -1310590179: /* GXTEntry: "Good Buck Carcass" */
				case -244657613: /* GXTEntry: "Poor Buck Carcass" */
				case 58634176: /* GXTEntry: "Poor Deer Carcass" */
				case 472142656: /* GXTEntry: "Good Deer Carcass" */
				case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
				case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
				case 785407605: /* GXTEntry: "Steelhead Trout" */
				case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
					return 1;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
				case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
				case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
				case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
				case -5376850: /* GXTEntry: "Largemouth Bass" */
				case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
				case 915880986: /* GXTEntry: "Good Alligator Carcass" */
				case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
					return 1;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case -1726572562: /* GXTEntry: "Good Quail Carcass" */
				case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
				case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
				case 1471975165: /* GXTEntry: "Mature Venison Meat" */
				case 1570826681: /* GXTEntry: "Sockeye Salmon" */
				case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
					return 1;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1117(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_562(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1149(iParam0, *uParam2, &Var0, 0))
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
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1118(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1150((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_1119(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_1120(int iParam0)
{
	if (!func_567(iParam0))
	{
		return -1;
	}
	return func_1151(iParam0);
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case -1943756076:
		case -763325020:
		case -687000066:
		case -280003847:
		case -258175882:
		case 433947044:
		case 469223329:
		case 1014101275:
		case 1054139581:
		case 1447083768:
		case 1499469209:
		case 2078973319:
			return 1;
	}
	return 0;
}

int func_1122(int iParam0)
{
	int iVar0;

	iParam0 = func_241(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_242(iParam0))
	{
		return 0;
	}
	iVar0 = func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1123(var uParam0)
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

int func_1124()
{
	if (func_1152())
	{
		return 1;
	}
	return 0;
}

void func_1125(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1124();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1126(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1076(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_1153(iParam1), fParam2, -1);
	}
}

void func_1127(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_1124();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_1154(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1155(iParam0, iVar0, iParam3);
	}
}

void func_1128(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1129(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1156(func_609());
	if (*uParam0)
	{
		func_1128(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_62() != -1, uParam2);
	*uParam0 = 1;
}

int func_1130(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1131(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1086(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1133(int iParam0, int iParam1)
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

void func_1134(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1135(int iParam0)
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
	Var2 = { func_488(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_489(&Var2, &iVar0, &iVar1, 0))
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
		func_244(iVar0);
	}
}

int func_1136(int iParam0)
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

int func_1137(int iParam0)
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

int func_1138(int iParam0)
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

int func_1139(int iParam0)
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

int func_1140(int iParam0)
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

int func_1141(int iParam0)
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

int func_1142(int iParam0)
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

int func_1143(int iParam0)
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

int func_1144(int iParam0)
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

int func_1145(int iParam0)
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

int func_1146(int iParam0)
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

int func_1147(int iParam0)
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

int func_1148(int iParam0)
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

int func_1149(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, uParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1150(var uParam0)
{
	if (func_1157(&(uParam0->f_29), 62))
	{
		switch (func_1158())
		{
			case 1:
				if (!func_1157(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_1157(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_1157(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_1157(&(uParam0->f_29), 32))
				{
					if (func_1157(&(uParam0->f_29), 2))
					{
						if (func_1023(func_893()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

int func_1151(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

bool func_1152()
{
	return Global_1955569->f_866;
}

char* func_1153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1154(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1124();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1155(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1124();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

int func_1156(int iParam0)
{
	if (func_62() == -1)
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

int func_1157(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1158()
{
	return &Global_1899516;
}

