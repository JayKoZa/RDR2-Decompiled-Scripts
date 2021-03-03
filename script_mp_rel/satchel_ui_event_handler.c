#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(1);
	func_2();
	func_3();
	while (Global_1940144.f_80.f_4)
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(&uVar0);
	func_5();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_6(&uVar0);
	}
	func_7(1);
	bVar5 = PED::_GET_PED_CROUCH_MOVEMENT(Global_34);
	bVar6 = func_8(2);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_34) || PED::_IS_PED_FALLING_2(Global_34)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || PED::_IS_PED_HOGTIED(Global_34))
		{
			func_9(0);
		}
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if ((PED::_GET_PED_CROUCH_MOVEMENT(Global_34) != bVar5 && !Global_1940311.f_6) && func_10(Global_1940311.f_10893, 1224357681) != 0)
		{
			func_11(func_10(Global_1940311.f_10893, 1224357681));
			bVar5 = !bVar5;
		}
		if (bVar6 && !func_12(Global_34))
		{
			func_2();
			func_1(1);
			func_3();
			bVar6 = false;
		}
		if (Global_1940311.f_4)
		{
			func_13();
			func_14();
			func_15(Global_1940311.f_10892);
			if (Global_1940311.f_34 != 0)
			{
				func_11(Global_1940311.f_34);
			}
			func_5();
			if (Global_1940311.f_10901 != 0 && !func_16())
			{
				func_17(Global_1940311.f_10901, &(Var1.f_3));
			}
			Global_1940311.f_4 = 0;
			Global_1940311.f_34 = 0;
		}
		if (func_18())
		{
			func_17(Global_1940311.f_10901, &(Var1.f_3));
			func_5();
			func_19(0);
			Global_1940311.f_6 = 0;
		}
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var1))
			{
				Global_1940311.f_6 = 0;
				switch (Var1)
				{
					case -1740156697:
						Global_1940311.f_10901 = Var1.f_1;
						if (!func_16())
						{
							switch (Var1.f_2)
							{
								case -1287062382:
									func_20(Var1.f_1, &(Var1.f_3));
									break;
								case joaat("USABLE_ITEM"):
								case 1086195311:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_17(Var1.f_1, &(Var1.f_3));
									break;
								case -1715238242:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_21(Var1.f_1, &(Var1.f_3));
									break;
							}
						}
						else
						{
							func_5();
							ATTRIBUTE::_0xD962F8579D702DB5();
						}
						func_22(Var1.f_2);
						func_7(2);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_23();
						func_5();
						ATTRIBUTE::_0xD962F8579D702DB5();
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var1.f_2)
						{
							case joaat("USABLE_ITEM"):
							case -594808149:
							case 1086195311:
								if (func_24() || func_25())
								{
									if (func_26(Global_1940311.f_10893, 0, 0, 0, 1, 0, 0))
									{
										func_9(0);
									}
								}
								else if (func_27())
								{
								}
								else if (!func_28(0))
								{
									func_29();
								}
								func_7(4);
								break;
							case joaat("DROP_ITEM"):
								func_30(Global_1940311.f_10893, 1);
								break;
							case 301804921:
								if (func_28(0))
								{
									func_7(32);
								}
								else
								{
									func_31(Global_1940311.f_10893);
								}
								break;
							case 1329361007:
								func_7(64);
								break;
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case 922460030:
						func_7(16);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -2075827635:
						func_7(8);
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
	func_6(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	func_32();
	bVar0 = func_33(1);
	if (func_35(1, 10329) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(2);
	if (func_35(2, 10407) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(65536);
	if (func_35(65536, 10420) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(1048576);
	if (func_35(1048576, 10433) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = (func_33(4) || func_33(8));
	if (!func_39())
	{
		func_40(4);
		func_40(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_41(81053684) || func_42(4))
		{
			func_40(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_41(-525676072) || func_42(8))
		{
			func_40(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_44(0, func_43()))
			{
				if (!bVar0)
				{
					Global_1940144.f_80.f_1 = 1;
				}
				if (bVar1)
				{
					func_45(4);
				}
				if (bVar2)
				{
					func_45(8);
				}
			}
			else
			{
				func_40(4);
				func_40(8);
				if (bVar0)
				{
					Global_1940144.f_80.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_33(16);
	if (func_35(16, 11569) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(256);
	if (func_35(256, 11582) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(512);
	if (func_35(512, 11595) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	bVar0 = func_33(1024);
	if (func_35(1024, 11608) != bVar0)
	{
		if (!Global_1940144.f_80.f_1)
		{
			Global_1940144.f_80.f_1 = 1;
		}
	}
	if (((((func_50() || func_51()) || func_52()) || func_53()) || func_54()) || bParam0)
	{
		bVar0 = func_33(8192);
		if (func_35(8192, 11703) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(64);
		if (func_35(64, 11716) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(131072);
		if (func_35(131072, 11716) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(32);
		if (func_35(32, 11729) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(128);
		if (func_35(128, 11742) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(262144);
		if (func_35(262144, 11755) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(2048);
		if (func_35(2048, 11768) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(32768);
		if (func_35(32768, 11781) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(4096);
		if (func_35(4096, 11794) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
		bVar0 = func_33(524288);
		if (func_35(524288, 11807) != bVar0)
		{
			if (!Global_1940144.f_80.f_1)
			{
				Global_1940144.f_80.f_1 = 1;
			}
		}
	}
	func_64();
}

void func_2()
{
	Global_1940144.f_80.f_4 = 0;
	Global_1940144.f_80 = 0;
}

void func_3()
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 3) == 0 || Global_1940144.f_80)
	{
		if (func_54() || (((func_50() || func_51()) || func_52()) || func_53()))
		{
			bVar0 = true;
		}
	}
	if (!Global_1940144.f_80.f_4 && !Global_1940144.f_80)
	{
		if (bVar0)
		{
			Global_1940144.f_80.f_4 = 1;
			Global_1940144.f_80 = 0;
			Global_1940144.f_80.f_3 = MISC::GET_FRAME_COUNT();
		}
	}
	if (Global_1940144.f_80.f_4 || Global_1940144.f_80)
	{
		if (!Global_1940144.f_80)
		{
			if (Global_1940144.f_80.f_4)
			{
				if (func_65())
				{
					Global_1940144.f_80.f_4 = 0;
					Global_1940144.f_80 = 1;
					if (Global_1940144.f_80.f_1)
					{
						func_66(1, 1, 0);
					}
					Global_1940144.f_80.f_1 = 0;
					Global_1940144.f_80.f_2 = 0;
					Global_1940144.f_80.f_3 = MISC::GET_FRAME_COUNT();
				}
			}
		}
		else if (!bVar0)
		{
			if (func_67())
			{
				Global_1940144.f_80 = 0;
				Global_1940144.f_80.f_1 = 0;
				Global_1940144.f_80.f_2 = 0;
			}
		}
		else
		{
			Global_1940144.f_80.f_3 = MISC::GET_FRAME_COUNT();
		}
	}
}

int func_4(var uParam0)
{
	if (func_68() == -1)
	{
		func_69();
	}
	Global_1913640[0 /*11*/] = 0;
	func_70(uParam0);
	return 1;
}

void func_5()
{
	if (func_16())
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		INVENTORY::_0x75CFAC49301E134F(Global_1940311.f_10917, 0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10910, func_71(Global_1940311.f_10892));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, func_72(Global_1940311.f_10892));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10930, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10926, false);
		if (func_28(0) || func_73())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10912, "");
		}
		if (func_74(29))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
		}
		else
		{
			func_75(Global_1940311.f_10892);
		}
	}
}

void func_6(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1940311.f_6 = 0;
	Global_1940311.f_38 = 0;
	Global_1940311.f_33 = -1;
	Global_1940311.f_34 = 0;
	Global_1940311.f_10897 = 0;
	Global_1940311.f_10896 = 0;
	func_76(822208792);
	func_77(0);
	func_78(0);
	func_79(uParam0);
	if (!TASK::_0x038B1F1674F0E242(Global_34))
	{
		func_80(0);
	}
	func_81(1);
	func_67();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0)
{
	Global_1940311.f_10866 = (Global_1940311.f_10866 || iParam0);
}

bool func_8(int iParam0)
{
	return func_82(Global_1940144.f_7, iParam0);
}

void func_9(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_10(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

void func_11(int iParam0)
{
	var uVar0;

	uVar0 = iParam0;
	Global_1940311.f_10900 = 0;
	func_84(&(Global_1940311.f_10883[func_83(Global_1940311.f_10892) /*2*/]), iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940311.f_10906, Global_1940311.f_10900);
	func_85(Global_1940311.f_33);
	Global_1940311.f_10891 = uVar0;
}

bool func_12(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

void func_13()
{
	int iVar0;
	var uVar1;
	bool bVar2;

	Global_1940311.f_10900 = 0;
	if (Global_1940311.f_10891 != -1)
	{
		iVar0 = Global_1940311.f_10891;
		func_84(&(Global_1940311.f_10883[func_83(Global_1940311.f_10892) /*2*/]), iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940311.f_10906, Global_1940311.f_10900);
	}
	uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1940311.f_10900 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "FolderEmpty", bVar2);
}

bool func_14()
{
	if ((func_86() || func_88(Global_34, func_87(7), 1)) || (!(func_89(7) || func_90(7)) && func_28(0)))
	{
		return (func_91(0, -1591664384) && func_91(1, 724026534));
	}
	return func_91(0, -1591664384);
}

void func_15(int iParam0)
{
	struct<2> Var0;
	struct<10> Var2;

	Var0 = { Global_1940311.f_10883[Global_1940311.f_10890 /*2*/] };
	Var2.f_9 = -1591664384;
	if (!func_92())
	{
		func_93(0);
	}
	Global_1940311.f_10899 = 0;
	Global_1940311.f_38.f_203 = 0;
	if (Global_1940311.f_10902)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940311.f_10905, Global_1940311.f_10899);
		Global_1940311.f_10902 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10914, func_71(iParam0));
	if (!func_28(0) && !func_73())
	{
		func_94(func_83(iParam0), &Var0, &Var2, iParam0);
	}
	func_95();
	if (Global_1940311.f_10892 == -283002878)
	{
		func_96();
	}
	else if (Global_1940311.f_10892 == -889932290)
	{
		func_97();
	}
	else if (Global_1940311.f_10892 == -693134279)
	{
		func_98();
	}
	else
	{
		if (Global_1940311.f_10892 == -182626652 || Global_1940311.f_10892 == 1783698482)
		{
			if ((Global_1915715.f_20241 == 38 || Global_1915715.f_20241 == 2) && func_28(0))
			{
				func_98();
			}
		}
		func_99(func_83(iParam0), &Var0, &Var2, iParam0);
		if ((Global_1940311.f_10892 == -182626652 && (((Global_1915715.f_20241 == 10 || Global_1915715.f_20241 == 16) || Global_1915715.f_20241 == 15) || Global_1915715.f_20241 == 29)) || (Global_1940311.f_10892 == -693134279 && Global_1915715.f_20241 == 2))
		{
			if (func_86())
			{
				Var0 = { Global_1940311.f_10883[1 /*2*/] };
				func_99(1, &Var0, &Var2, iParam0);
			}
			else if (func_100())
			{
				Var0 = { Global_1940311.f_10883[2 /*2*/] };
				func_99(2, &Var0, &Var2, iParam0);
			}
		}
		func_101();
		func_96();
		func_97();
		func_102();
	}
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940311.f_10905, Global_1940311.f_10899);
	func_85(0);
}

bool func_16()
{
	return Global_1940311.f_38.f_203 <= 0;
}

void func_17(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;

	func_103();
	if (func_18())
	{
		func_19(0);
		if (Global_1940311.f_6)
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10906, Global_1940311.f_10901);
			iVar0 = func_104(&uVar1);
		}
		else
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10905, Global_1940311.f_10901);
		}
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_106(uVar1);
		}
	}
	else
	{
		if (Global_1940311.f_6)
		{
			iVar0 = func_104(uParam1);
		}
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_106(*uParam1);
		}
	}
	if (func_106(*uParam1) == iVar0)
	{
		func_107(iVar0, uParam1);
	}
	func_108(0, iVar0);
	func_103();
	func_85(iParam0);
}

bool func_18()
{
	return Global_1940311.f_10;
}

void func_19(int iParam0)
{
	Global_1940311.f_10 = iParam0;
}

void func_20(int iParam0, var uParam1)
{
	if (iParam0 != Global_1940311.f_10890)
	{
		func_109(iParam0, uParam1);
	}
}

void func_21(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Global_1940311.f_33 = uParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_110(iVar0, uParam1);
	iVar1 = iVar0;
	func_11(iVar1);
	if (func_105(Global_1940311.f_10893, 0))
	{
		if (Global_1940311.f_10892 == 1783698482 || func_111(Global_1940311.f_10893, 474910316))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, "");
			func_112(Global_1940311.f_10893, joaat("ANTIQUE_BOTTLES"));
			func_112(Global_1940311.f_10893, joaat("ARROWHEADS"));
			func_112(Global_1940311.f_10893, joaat("BIRD_EGGS"));
			func_112(Global_1940311.f_10893, joaat("COINS"));
			func_112(Global_1940311.f_10893, joaat("FAMILY_HEIRLOOMS"));
			func_112(Global_1940311.f_10893, joaat("LOST_JEWELRY_BRACELETS"));
			func_112(Global_1940311.f_10893, joaat("LOST_JEWELRY_EARRINGS"));
			func_112(Global_1940311.f_10893, joaat("LOST_JEWELRY_NECKLACES"));
			func_112(Global_1940311.f_10893, joaat("LOST_JEWELRY_RINGS"));
			func_112(Global_1940311.f_10893, joaat("TAROT_CARDS_CUPS"));
			func_112(Global_1940311.f_10893, joaat("TAROT_CARDS_PENTACLES"));
			func_112(Global_1940311.f_10893, joaat("TAROT_CARDS_SWORDS"));
			func_112(Global_1940311.f_10893, joaat("TAROT_CARDS_WANDS"));
			func_112(Global_1940311.f_10893, joaat("WILD_FLOWERS"));
			func_112(Global_1940311.f_10893, 773314749);
			func_112(Global_1940311.f_10893, -246025274);
			func_112(Global_1940311.f_10893, -41527693);
		}
	}
	else if (Global_1940311.f_10892 == 1783698482 || Global_1940311.f_10892 == -693134279)
	{
		iVar2 = iVar0;
		if (iVar2 != 0)
		{
			if (Global_1940311.f_10892 != -693134279)
			{
				func_113();
			}
			Var3.f_2 = 5;
			Var3.f_18 = 8;
			func_114(iVar2, &Var3);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, Var3.f_1);
			if (!func_28(0) && iVar2 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10921, false);
			}
		}
	}
}

void func_22(int iParam0)
{
	if (iParam0 != -1715238242)
	{
		Global_1940311.f_10891 = -1;
	}
}

void func_23()
{
	var uVar0;

	uVar0 = Global_1940311.f_10868;
	func_115(uVar0);
}

bool func_24()
{
	if (func_116(Global_34, 0))
	{
		if (PED::_IS_PED_USING_SCENARIO_HASH(Global_34, joaat("PROP_PLAYER_OPEN_CASHBOX")))
		{
			return true;
		}
	}
	return false;
}

bool func_25()
{
	if (Global_1940311.f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_25())
	{
		Global_1940311.f_10894 = iParam0;
		func_117(iParam0, 1, -142743235, 0, 0);
		return false;
	}
	if (!func_118(iParam0, bParam4))
	{
		return false;
	}
	if (func_119(iParam0))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 108107462))
	{
		return false;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == joaat("KIT_MOONSHINER_MAGGIES_MAP"))
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_120(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = MISC::GET_GAME_TIMER();
		Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	if (func_111(iParam0, -2081717885))
	{
		func_121(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_111(iParam0, -1909684001))
	{
		func_122(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_111(iParam0, 587975446))
	{
		func_123(iParam0, Var10);
	}
	else if (func_111(iParam0, 566155764))
	{
		if (!func_124(iParam0))
		{
			return false;
		}
	}
	if (func_125(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (func_111(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_126(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_111(iParam0, -1472964441) || func_111(iParam0, -228153877)) || func_111(iParam0, 566155764))
	{
	}
	else if (func_111(iParam0, 1919582297))
	{
		if (((func_127() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
		{
			return false;
		}
		switch (iParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"):
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_126(Var10, 0);
		bVar28 = false;
	}
	else if (func_128(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_129(Global_1071686.f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_126(Var10, 0);
		iVar29 = 1;
	}
	else if (func_130(iParam0) == joaat("CLOTHING"))
	{
		if (!func_131(iParam0))
		{
			func_132("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_133(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_134();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_135(PLAYER::PLAYER_ID()))
			{
				func_132("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_132("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637.f_1675 != iParam0)
			{
				func_136(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_137(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_138(iParam0);
					func_136(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (iParam0 == Global_1952637.f_1675.f_1[23 /*3*/])
					{
						func_139(Global_34, joaat("CLOTHING_ITEM_GLOVES_NONE"), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayUnequipGlovesFidget", true, 15);
						func_140(iParam0, 0, 0);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayEquipGlovesFidget", true, 15);
						func_140(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == Global_1952637.f_1675.f_1[10 /*3*/])
					{
						func_139(Global_34, Global_1952637.f_83[10 /*12*/], 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_140(iParam0, 0, 0);
						return true;
					}
					else
					{
						func_140(iParam0, 1, 0);
						func_141(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_141(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_141(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_111(iParam0, 160827531))
					{
					}
					else
					{
						func_137(iParam0, 0);
					}
					break;
			}
			func_139(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("CUSTOM_SATCHEL"):
				func_9(1);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_68() != -1)
				{
				}
				else if (!func_131(iParam0))
				{
					func_132("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_142(7, iParam0);
					bVar31 = func_142(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17332))
						{
							MAP::REMOVE_BLIP(&Global_17332);
						}
						Global_17332 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::_BLIP_SET_MODIFIER(Global_17332, 673950256);
						func_132(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_143(7))
					{
						func_132("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_88(Global_34, func_87(7), 0))
						{
							func_132("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17332))
							{
								MAP::REMOVE_BLIP(&Global_17332);
							}
							Global_17332 = MAP::_0x3E593DF9C2962EC6(joaat("BLIP_STYLE_PLAYER_HORSE"));
							MAP::_BLIP_SET_MODIFIER(Global_17332, 673950256);
							func_132(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = joaat("PLAYER_WARDROBE");
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
							func_126(Var10, 0);
						}
						Jump @2396; //curOff = 1778
						func_144();
						Jump @2396; //curOff = 1785
						if (func_131(joaat("KIT_CAMP")))
						{
							if (func_145(1, 1))
							{
								func_146(2, 1);
							}
							else if (func_147(1))
							{
								func_132("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_148())
							{
								func_132("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
								{
									func_149();
								}
								else
								{
									func_132("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_150(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
						{
							func_132("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_150(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
						}
						else if (func_148())
						{
							func_132("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_132("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2396; //curOff = 2006
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_151(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, false, 0, false, false);
						}
						return true;
						Jump @2396; //curOff = 2044
						if (func_151(Global_34, 1, 0, 0) != iParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, false, 0, false, false);
						}
						return true;
						Jump @2396; //curOff = 2079
						Jump @2396; //curOff = 2082
						func_152(535, 1);
						Jump @2396; //curOff = 2093
						func_153(1);
						Jump @2396; //curOff = 2101
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("DOCUMENT_PLAYER_JOURNAL"), 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return true;
						Jump @2396; //curOff = 2136
						UIAPPS::_LAUNCH_APP_BY_HASH(joaat("COLLECTORS"));
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COLLECTORS")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_126(Var10, 0);
						}
						return true;
						Jump @2396; //curOff = 2212
						UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
						if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("SATCHEL_UI_EVENT_HANDLER"))
						{
							UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
						}
						else
						{
							UIAPPS::_LAUNCH_APP_BY_HASH(1976336482);
						}
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FIELD_GUIDE")) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_3 = !SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("SATCHEL_UI_EVENT_HANDLER");
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_126(Var10, 0);
						}
						return true;
						Jump @2396; //curOff = 2342
						if (Global_1138048[PLAYER::PLAYER_ID() /*8*/].f_4)
						{
							func_132("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_154();
						}
						return true;
						Jump @2396; //curOff = 2387
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_27()
{
	if (Global_1940311.f_36 == 1 || Global_1940311.f_36 == 2)
	{
		return true;
	}
	return false;
}

bool func_28(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

void func_29()
{
	bool bVar0;
	struct<5> Var1;
	struct<4> Var6;
	bool bVar10;

	if (func_130(Global_1940311.f_10893) == joaat("CONSUMABLE"))
	{
		Global_1940144.f_41 = Global_1940311.f_10893;
	}
	else
	{
		Global_1940144.f_42 = Global_1940311.f_10893;
	}
	bVar0 = true;
	if (func_133(Global_1940311.f_10893) == -854348463)
	{
		Var1 = { func_155(Global_1940311.f_10893, 0, 0) };
		Var6 = { func_156(Global_1940311.f_10893, Var1, Var1.f_4, 0) };
		func_157(Var6, 1, 0);
		bVar10 = func_158(0);
		if (func_68() == 0)
		{
			bVar10 = true;
		}
		if (Global_1940311.f_10892 == -156634416)
		{
			func_66(bVar10, 0, joaat("CI_TAG_FOLDER_KIT_WATCHES"));
		}
		else
		{
			func_66(bVar10, 1, 0);
		}
		bVar0 = true;
	}
	else if (Global_1940311.f_10893 == joaat("KIT_GUN_OIL"))
	{
		func_159();
		bVar0 = false;
	}
	else if ((func_133(Global_1940311.f_10893) == 81053684 || func_133(Global_1940311.f_10893) == -525676072) || func_111(Global_1940311.f_10893, 160827531))
	{
		func_137(Global_1940311.f_10893, 0);
		bVar0 = false;
	}
	else if (func_111(Global_1940311.f_10893, 316290104))
	{
		if (func_160(Global_1940311.f_10893, 0, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_161(Global_1940311.f_10893, 1, 0))
	{
	}
	else if (func_111(Global_1940311.f_10893, -1242251796))
	{
		func_164(Global_1940311.f_10893, func_163(func_162(0)));
	}
	else if (((func_111(Global_1940311.f_10893, -1472964441) && func_165(Global_1940311.f_10893)) && func_166()) && !func_167(Global_1940311.f_10893))
	{
		func_168();
		func_169(Global_17411.f_2966.f_17, 1, 0, -142743235);
		if (func_26(Global_1940311.f_10893, 0, 0, 0, 1, 0, 0))
		{
			bVar0 = false;
		}
	}
	else if (func_26(Global_1940311.f_10893, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (func_25())
	{
		bVar0 = false;
	}
	Global_1940311.f_10894 = Global_1940311.f_10893;
	func_9(bVar0);
	func_93(0);
}

void func_30(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return;
	}
	if (((func_111(iParam0, -1472964441) && func_165(iParam0)) && func_166()) && func_167(iParam0))
	{
		func_168();
		if (func_170() == 1061777683)
		{
			func_13();
			if (Global_1940311.f_10900 <= 0)
			{
				Global_1940311.f_10902 = 1;
				func_15(1061777683);
				UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("SATCHEL"), joaat("EXIT"));
			}
		}
	}
	if (!func_171(iParam0, iParam1, 0, -327174699))
	{
		if (!func_172(iParam0, iParam1, 0, 1, -327174699))
		{
		}
	}
	func_66(1, 1, func_10(iParam0, 1224357681));
}

void func_31(int iParam0)
{
	func_30(iParam0, func_173(func_162(0), iParam0, 0, 1, 1));
}

void func_32()
{
	float fVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (func_174(Global_34))
		{
			Global_1940144.f_7 |= 1;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 1);
		}
		if (func_12(Global_34))
		{
			Global_1940144.f_7 |= 2;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 2);
		}
		if (func_175(Global_34, 713668775))
		{
			Global_1940144.f_7 |= 4;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 4);
		}
		if (func_176(Global_34))
		{
			Global_1940144.f_7 |= 8;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8);
		}
		if (func_68() == 0)
		{
			if (func_145(1, 1))
			{
				Global_1940144.f_7 |= 16;
			}
			else
			{
				Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16);
			}
			if (func_177(0))
			{
				Global_1940144.f_7 |= 268435456;
			}
			else
			{
				Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 268435456);
			}
		}
		else if (func_178(0, 1))
		{
			Global_1940144.f_7 |= 16;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16);
		}
		if (!func_179(0))
		{
			Global_1940144.f_7 |= 32;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 32);
		}
		if (!func_180(0))
		{
			Global_1940144.f_7 |= 512;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 512);
		}
		if (!func_181(0))
		{
			Global_1940144.f_7 |= 8192;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8192);
		}
		if (PED::IS_PED_IN_COVER(Global_34, false, true))
		{
			Global_1940144.f_7 |= 16384;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16384);
		}
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
		{
			Global_1940144.f_7 |= 32768;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 32768);
		}
		if (func_68() == 0 && PED::_0xB655DB7582AEC805(Global_34))
		{
			Global_1940144.f_7 |= 131072;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 131072);
		}
		if (TASK::_0xEC7E480FF8BD0BED(Global_34) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 108107462))
		{
			Global_1940144.f_7 |= 256;
		}
		else if (PED::_0x7FC84E85D98F063D(Global_34))
		{
			Global_1940144.f_7 |= 256;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 256);
		}
		fVar0 = 30f;
		if (func_182() || func_183())
		{
			fVar0 = 50f;
		}
		if ((Global_1940258.f_18 || TASK::_IS_PED_DUELLING(Global_34)) || func_184(fVar0, 1024))
		{
			Global_1940144.f_7 |= 1024;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 1024);
		}
		if (TASK::IS_PED_RUNNING(Global_34))
		{
			Global_1940144.f_7 |= 4096;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 4096);
		}
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) || func_175(Global_34, 1369124074))
		{
			Global_1940144.f_7 |= 128;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 128);
		}
		if (TASK::IS_PED_GETTING_UP(Global_34))
		{
			Global_1940144.f_7 |= 1048576;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 1048576);
		}
		if (PED::IS_PED_MALE(Global_34))
		{
			Global_1940144.f_7 |= 16777216;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16777216);
		}
		if (func_185())
		{
			Global_1940144.f_7 |= 33554432;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 33554432);
		}
		if (func_186(0))
		{
			Global_1940144.f_7 |= 524288;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 524288);
		}
		if (func_187(0))
		{
			Global_1940144.f_7 |= 262144;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 262144);
		}
		if (func_188(Global_34))
		{
			Global_1940144.f_7 |= 4194304;
		}
		else
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 4194304);
		}
	}
	else
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 1);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 2);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 4);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 32);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 512);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8192);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16384);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 32768);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 131072);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 256);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 1024);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 4096);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 128);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 1048576);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 16777216);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 33554432);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 524288);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 262144);
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 4194304);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1940144.f_7 |= 65536;
	}
	else
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1940144.f_7 |= 64;
	}
	else
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 64);
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_189(iVar1))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iVar1))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8388608);
					break;
				default:
					Global_1940144.f_7 |= 8388608;
					break;
			}
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iVar1, 149557334))
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8388608);
		}
		if (!PED::IS_PED_RAGDOLL(iVar1) && PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8388608);
		}
	}
	else
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 8388608);
	}
	if ((func_190() || func_191()) || (func_192(0, 0, 1) && !func_193()))
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 2097152);
	}
	else
	{
		Global_1940144.f_7 |= 2097152;
	}
	if (func_194())
	{
		Global_1940144.f_7 |= 67108864;
	}
	else
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 67108864);
	}
	if (Global_1940258.f_52)
	{
		Global_1940144.f_7 |= 134217728;
	}
	else
	{
		Global_1940144.f_7 = (Global_1940144.f_7 - Global_1940144.f_7 & 134217728);
	}
}

bool func_33(int iParam0)
{
	return func_195(iParam0);
}

int func_34()
{
	return 234348672;
}

int func_35(int iParam0, int iParam1)
{
	if (func_42(iParam0))
	{
		func_40(iParam0);
		return 0;
	}
	else
	{
		Stack.Push(0);
		Call_Loc(iParam1);
		if (func_44(StackVal, StackVal))
		{
			func_45(iParam0);
			return 1;
		}
		else
		{
			func_40(iParam0);
			return 0;
		}
	}
	return 0;
}

int func_36()
{
	return 234339543;
}

int func_37()
{
	return 225949718;
}

int func_38()
{
	return 206022678;
}

bool func_39()
{
	return func_196();
}

void func_40(int iParam0)
{
	func_197(&(Global_1940144.f_38), iParam0);
}

bool func_41(int iParam0)
{
	return func_199(func_198(iParam0));
}

bool func_42(int iParam0)
{
	return (Global_1940144.f_39 && iParam0) != 0;
}

int func_43()
{
	return func_200();
}

bool func_44(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1940258.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return false;
	}
	if (func_68() == 0)
	{
		if (func_8(131072))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 1))
	{
		if (func_8(1024))
		{
			return false;
		}
	}
	if (Global_1940258.f_16)
	{
		return false;
	}
	if (!func_201(iParam1, 2) && func_8(32))
	{
		return false;
	}
	if (!func_201(iParam1, 4))
	{
		if (func_8(4096))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 8) && func_8(512))
	{
		return false;
	}
	if (!func_201(iParam1, 512) && !func_202(bParam0))
	{
		return false;
	}
	if (!func_201(iParam1, 262144) && !func_203(bParam0, func_201(iParam1, 524288)))
	{
		return false;
	}
	if (!func_201(iParam1, 64) && !func_204(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_201(iParam1, 128))
	{
		if (func_205(Global_34, 1868526510) || PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_201(iParam1, 16))
	{
		if (func_206(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_207(iVar0, 1))
			{
				if (bParam0)
				{
					func_132("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_201(iParam1, 256) && func_8(8192))
	{
		return false;
	}
	if (!func_201(iParam1, 1024) && func_8(65536))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_201(iParam1, 2048))
	{
		if (func_8(32768))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 4096))
	{
		if (func_8(16384))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 8192))
	{
		if (!func_8(16))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 67108864))
	{
		if (!func_8(268435456))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 16384))
	{
		if (func_8(256))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 32768))
	{
		if (func_54())
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_201(iParam1, 131072))
	{
		if (!func_8(524288))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 65536))
	{
		if (!func_8(262144))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 1048576))
	{
		if (!func_8(2097152))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 2097152))
	{
		if (!func_8(8388608))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 4194304))
	{
		if (!func_8(16777216))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 8388608))
	{
		if (func_8(33554432))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 16777216))
	{
		if (func_8(67108864))
		{
			return false;
		}
	}
	if (!func_201(iParam1, 33554432))
	{
		if (func_8(134217728))
		{
			return false;
		}
	}
	if (func_8(64))
	{
		return false;
	}
	else if (func_8(128))
	{
		return false;
	}
	else if (func_8(1048576))
	{
		return false;
	}
	else if (func_8(4))
	{
		return false;
	}
	if (!func_201(iParam1, 134217728))
	{
		if (func_208(256))
		{
			return false;
		}
	}
	return true;
}

void func_45(int iParam0)
{
	func_209(&(Global_1940144.f_38), iParam0);
}

int func_46()
{
	return 234086528;
}

int func_47()
{
	return 232439799;
}

int func_48()
{
	return 232341495;
}

int func_49()
{
	return 232407015;
}

var func_50()
{
	return Global_1940144.f_10;
}

var func_51()
{
	return Global_1940144.f_11;
}

var func_52()
{
	return Global_1940144.f_12;
}

var func_53()
{
	return Global_1940144.f_13;
}

bool func_54()
{
	return (Global_1940311.f_1 || Global_1940311 == 1);
}

int func_55()
{
	return 234596352;
}

int func_56()
{
	return 226211840;
}

int func_57()
{
	return 234596496;
}

int func_58()
{
	return 217554935;
}

int func_59()
{
	return 150191252;
}

int func_60()
{
	return 233516164;
}

int func_61()
{
	return 234596496;
}

int func_62()
{
	return 99859463;
}

int func_63()
{
	return 234350720;
}

void func_64()
{
	Global_1940144.f_39 = 0;
}

bool func_65()
{
	int iVar0;

	if (func_28(0) || func_73())
	{
		return true;
	}
	iVar0 = func_210(0);
	if (func_211(iVar0, 0, 0, 0))
	{
		func_212(iVar0);
		return true;
	}
	return false;
}

void func_66(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311.f_4 = bParam0;
	Global_1940311.f_34 = iParam2;
	if (bParam1 || (func_213() && iParam2 == 0))
	{
		func_19(1);
		func_214(1);
	}
}

bool func_67()
{
	int iVar0;

	iVar0 = func_210(0);
	if (func_211(iVar0, 1, 0, 0))
	{
		func_212(iVar0);
		return true;
	}
	return false;
}

int func_68()
{
	return Global_1572887.f_13;
}

void func_69()
{
	func_215(joaat("SATCHEL_ELEMENTS"), &(Global_1940311.f_10931), 600, -1, 0, 0);
	func_216();
}

int func_70(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	bVar0 = func_28(0);
	bVar1 = func_73();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1940311.f_10892 != -156634416) && Global_1940311.f_10892 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1940311.f_10902 = 1;
	Global_1940311.f_10905 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1940311.f_10906 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1940311.f_10919 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1940311.f_10920 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1940311.f_10921 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1940311.f_10922 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", joaat("SATCHEL_PROMPT_BREAKDOWN"));
	Global_1940311.f_10923 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1940311.f_10924 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1940311.f_10927 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::_GET_LABEL_TEXT_BY_HASH(joaat("SATCHEL_PROMPT_DISCARD_ALL")));
	Global_1940311.f_10925 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1940311.f_10926 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1940311.f_10930 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1940311.f_10928 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);
	if ((func_68() == -1 && func_28(0)) && Global_1915715.f_20241 == 2)
	{
		Global_1940311.f_10929 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1940311.f_10929 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1940311.f_10910 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Name", 0);
	Global_1940311.f_10911 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Description", 0);
	if (func_28(0) || func_24())
	{
		Global_1940311.f_10912 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Price", "");
	}
	else
	{
		Global_1940311.f_10912 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar3, "Price", false);
	}
	if ((func_68() == -1 && func_28(0)) && Global_1915715.f_20241 == 2)
	{
		Global_1940311.f_10913 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_SEND");
	}
	else if (Global_1915715.f_20241 == 29)
	{
		Global_1940311.f_10913 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "MATERIAL_VALUE");
	}
	else
	{
		Global_1940311.f_10913 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1940311.f_10914 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Category", 0);
	Global_1940311.f_10908 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "DefaultCategoryIndex", 0);
	Global_1940311.f_10909 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryIndex", func_217());
	Global_1940311.f_10907 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryCount", 0);
	Global_1940311.f_10915 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "IndexDescription", "");
	Global_1940311.f_10916 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Tip", "");
	Global_1940311.f_10917 = INVENTORY::_0x9D21B185ABC2DBC4(uVar3, "effects", 0, 0);
	Global_1940311.f_10918 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Folder", 0);
	Global_1940311.f_10904 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_218(Global_1940311.f_10904);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940311.f_10904, Global_1940311.f_10867);
	uVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	iVar5 = joaat("SATCHEL_TITLE");
	if (func_219(joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1")))
	{
		iVar5 = -1401261769;
	}
	iVar6 = func_220(uVar4, "player", iVar5, "ALL SATCHEL EXCLUDING CLOTHING", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_86() || func_88(Global_34, func_87(7), 1)) || (!(func_89(7) || func_90(7)) && func_28(0)))
	{
		func_220(uVar4, "saddle", -1186165261, "ALL EXCLUDING CLOTHING", 724026534);
	}
	func_109(iVar6, &uVar3);
	if (Global_1940311.f_8)
	{
		func_221(Global_1940311.f_10892);
		func_222(Global_1940311.f_10892, &uVar3, 0);
		func_66(1, 0, 0);
	}
	else
	{
		func_66(func_223(), 0, 0);
	}
	Global_1940311.f_8 = 0;
	return 1;
}

int func_71(int iParam0)
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
		case 1783698482:
			return -1236163301;
		case -283002878:
			return 262409577;
		case -889932290:
			return joaat("HWAGON_TITLE");
		case -2074770370:
			return 1643818657;
		case -693134279:
			return -1077706770;
		case -182626652:
			if ((Global_1915715.f_20638 || Global_1915715.f_22504.f_1) && (Global_1915715.f_20241 == 16 || Global_1915715.f_20241 == 29))
			{
				return joaat("SHOP_PEARSON_DONATE");
			}
			else
			{
				return -161395681;
			}
			break;
	}
	return 0;
}

int func_72(int iParam0)
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
		case 1783698482:
			return 2061483699;
		case -283002878:
			return -1202687131;
		case -889932290:
			return joaat("HWAGON_TITLE_DESC");
		case -2074770370:
			return 89311517;
		case -693134279:
			return 1001811369;
		case -182626652:
			if (Global_1915715.f_20241 == 29)
			{
				return 89311517;
			}
			else
			{
				return 288697952;
			}
			break;
	}
	return 0;
}

bool func_73()
{
	if (((Global_1940311.f_36 == 1 || Global_1940311.f_36 == 2) || func_24()) || func_25())
	{
		return true;
	}
	return false;
}

bool func_74(int iParam0)
{
	if (func_224())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, HUD::_GET_LABEL_TEXT_BY_HASH(-402412948));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, HUD::_GET_LABEL_TEXT_BY_HASH(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, "");
			break;
	}
	return 0;
}

void func_76(int iParam0)
{
	Global_1940311.f_37 = iParam0;
}

void func_77(int iParam0)
{
	Global_1940311.f_36 = iParam0;
}

void func_78(int iParam0)
{
	Global_1940311.f_11 = iParam0;
}

void func_79(var uParam0)
{
	int iVar0;

	MAP::DISPLAY_RADAR(true);
	Global_1940311.f_1 = 0;
	func_225();
	func_226(uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);
	if (func_68() == -1)
	{
	}
	else
	{
		while (!func_227(0, 0) && iVar0 < 15)
		{
			iVar0++;
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			BUILTIN::WAIT(0);
		}
	}
}

void func_80(int iParam0)
{
	Global_1913674[iParam0 /*6*/].f_1 = 3;
	Global_1913674[iParam0 /*6*/] = 0;
	Global_1913674[iParam0 /*6*/].f_5 = 0;
}

void func_81(int iParam0)
{
	Global_1940311.f_10866 = (Global_1940311.f_10866 - (Global_1940311.f_10866 && iParam0));
}

bool func_82(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
		case -283002878:
			return 1;
		case -889932290:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_84(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_228(&Var0, iVar14, func_83(Global_1940311.f_10892), *uParam0))
		{
		}
		else if (func_229(Var0.f_9))
		{
		}
		else if (!func_230(Var0.f_4, iParam1))
		{
		}
		else if (!func_231(Var0.f_4))
		{
		}
		else if (func_28(0))
		{
			if (!func_105(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1940311.f_10893 == 0)
				{
					func_93(Var0.f_4);
				}
				func_232(Var0);
			}
			iVar14 = (iVar14 + -1);
		}
	}
}

void func_85(int iParam0)
{
	if (Global_1940311.f_38.f_203 > 16)
	{
		if (Global_1940311.f_6)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10915, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940311.f_10900));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10915, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940311.f_38.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10915, "");
	}
}

bool func_86()
{
	int iVar0;

	if (func_28(0))
	{
		iVar0 = func_162(0);
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return false;
		}
		if (!func_233(Global_1915715.f_20241.f_1))
		{
			return false;
		}
		if (func_234(Global_1915715.f_20241.f_1, iVar0))
		{
			return true;
		}
	}
	else
	{
		if (func_68() == -1)
		{
			if (func_235(Global_34))
			{
				iVar0 = PED::GET_MOUNT(Global_34);
			}
			else if (func_236(-283002878))
			{
				return true;
			}
		}
		else
		{
			iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
		}
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return false;
		}
		if (func_237(iVar0, 0, 1) < 1.7f || func_236(-283002878))
		{
			return true;
		}
	}
	return false;
}

int func_87(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0 /*43*/];
}

bool func_88(int iParam0, int iParam1, bool bParam2)
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
	return false;
}

int func_89(int iParam0)
{
	int iVar0;

	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_239(iParam0))
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_239(iParam0))
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	if (func_240(vVar1, vVar4) > func_241(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_91(int iParam0, int iParam1)
{
	if (!func_242(Global_1940311.f_10883[iParam0 /*2*/].f_1))
	{
		return false;
	}
	return func_243("ALL EXCLUDING CLOTHING", &(Global_1940311.f_10883[iParam0 /*2*/].f_1), &(Global_1940311.f_10883[iParam0 /*2*/]), iParam1, 0);
}

bool func_92()
{
	return Global_1940311.f_9;
}

void func_93(int iParam0)
{
	Global_1940311.f_10893 = iParam0;
}

void func_94(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (Global_1940311.f_10892 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam3 == 0 && *uParam1 > 16)
	{
		iVar1 = (*uParam1 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1940311.f_38.f_1)
	{
		Global_1940311.f_38.f_2[iVar0 /*2*/] = 0;
		Global_1940311.f_38.f_2[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1940311.f_38.f_1 = 0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = (*uParam1 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_228(uParam2, iVar0, uParam1->f_1, *uParam1))
			{
			}
			else if (!func_244(uParam2, iParam3))
			{
			}
			else
			{
				func_245(uParam2->f_4);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	Global_1940311.f_10897 = 0;
	Global_1940311.f_10896 = 0;
	if (func_246())
	{
		if (PED::_IS_PED_CARRYING(Global_34))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_34, iVar2);
			if (ITEMSET::IS_ITEMSET_VALID(iVar2))
			{
				iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
					if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
					}
					else
					{
						iVar1 = func_247(iVar0);
						if (func_231(iVar1))
						{
							Global_1940311.f_10897 = iVar0;
							Global_1940311.f_10896 = iVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_96()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	if (func_28(0))
	{
		iVar2 = func_248();
		if (((iVar2 == 10 || iVar2 == 15) || iVar2 == 29) || iVar2 == 16)
		{
			if (Global_1940311.f_10892 == -283002878 || (Global_1940311.f_10892 == -182626652 && func_86()))
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 16)
		{
			if (Global_1940311.f_10892 == -283002878 || Global_1940311.f_10892 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 2 && Global_1940311.f_10892 == -693134279)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			bVar1 = true;
		}
	}
	else if (Global_1940311.f_10892 == -283002878)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_68() == 0)
		{
			func_249(1, bVar1);
		}
		else if (func_248() == 16)
		{
			func_250(1, 1);
		}
		else
		{
			func_249(1, 1);
		}
	}
}

void func_97()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_28(0))
	{
		iVar1 = func_248();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1940311.f_10892 == -889932290 || (Global_1940311.f_10892 == -182626652 && func_100()))
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 16)
		{
			if (Global_1940311.f_10892 == -889932290 || Global_1940311.f_10892 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_248() == 2 && Global_1940311.f_10892 == -693134279)
		{
			bVar0 = true;
		}
	}
	else if (Global_1940311.f_10892 == -889932290)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_68() == 0)
		{
			func_251(1);
		}
	}
}

void func_98()
{
	if ((Global_1940311.f_10892 == 1783698482 || Global_1940311.f_10892 == -693134279) || ((Global_1915715.f_20241 == 38 && func_28(0)) && Global_1940311.f_10892 == -182626652))
	{
		if (func_252(0) && COLLECTION::_0x6BAB7ACED1017204(joaat("WEEKLY_COLLECTABLES"), 0))
		{
			func_253(STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0));
		}
	}
	if (func_254(joaat("ANTIQUE_BOTTLES")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("ANTIQUE_BOTTLES"), 0));
	}
	if (func_254(joaat("BIRD_EGGS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("BIRD_EGGS"), 0));
	}
	if (func_254(joaat("ARROWHEADS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("ARROWHEADS"), 0));
	}
	if (func_254(joaat("FAMILY_HEIRLOOMS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("FAMILY_HEIRLOOMS"), 0));
	}
	if (func_254(joaat("WILD_FLOWERS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("WILD_FLOWERS"), 0));
	}
	if (func_254(joaat("COINS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("COINS"), 0));
	}
	if (func_254(joaat("LOST_JEWELRY_RINGS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_RINGS"), 0));
	}
	if (func_254(joaat("LOST_JEWELRY_BRACELETS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_BRACELETS"), 0));
	}
	if (func_254(joaat("LOST_JEWELRY_EARRINGS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_EARRINGS"), 0));
	}
	if (func_254(joaat("LOST_JEWELRY_NECKLACES")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_NECKLACES"), 0));
	}
	if (func_254(joaat("TAROT_CARDS_CUPS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_CUPS"), 0));
	}
	if (func_254(joaat("TAROT_CARDS_PENTACLES")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_PENTACLES"), 0));
	}
	if (func_254(joaat("TAROT_CARDS_SWORDS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_SWORDS"), 0));
	}
	if (func_254(joaat("TAROT_CARDS_WANDS")))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_WANDS"), 0));
	}
	if (func_254(773314749))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(773314749, 0));
	}
	if (func_254(-246025274))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(-246025274, 0));
	}
	if (func_254(-41527693))
	{
		func_253(COLLECTION::_0xCC644BC1DD655269(-41527693, 0));
	}
}

void func_99(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0)
	{
		func_255(uParam2, iParam3);
	}
	else
	{
		iVar1 = 0;
		if (*uParam1 > 0)
		{
			iVar0 = (*uParam1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_228(uParam2, iVar0, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_244(uParam2, iParam3))
				{
				}
				else
				{
					func_256(*uParam2, 0);
					iVar1++;
					if (iParam3 == 0 && iVar1 >= 16)
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
}

bool func_100()
{
	int iVar0;

	if (func_68() == -1)
	{
		return false;
	}
	if (!func_257())
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_258(iVar0))
	{
		return false;
	}
	if (func_28(0))
	{
		if (func_259(Global_1915715.f_20241.f_1, iVar0))
		{
			return true;
		}
	}
	else if (func_237(iVar0, 0, 1) < 3.7f || func_236(-889932290))
	{
		return true;
	}
	return false;
}

void func_101()
{
	switch (Global_1940311.f_10892)
	{
		case -156634416:
			func_260();
			break;
		case 1561961676:
			break;
	}
}

void func_102()
{
	if (func_105(Global_1940311.f_10896, 0) && (!func_86() || func_173(func_162(0), Global_1940311.f_10896, 0, 1, 1) == 0))
	{
		func_261(Global_1940311.f_10896, 0, 1);
	}
}

void func_103()
{
	if (!func_105(Global_1940311.f_10893, 0))
	{
		Global_1940311.f_6 = 0;
	}
	else if ((((func_10(Global_1940311.f_10893, 1224357681) != 0 && Global_1940311.f_10892 != 0) && Global_1940311.f_10892 != -2074770370) && !Global_1915715.f_20638) && !Global_1915715.f_22504.f_1)
	{
		Global_1940311.f_6 = 1;
	}
	else
	{
		Global_1940311.f_6 = 0;
	}
}

int func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1940311.f_10893;
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "item");
	if (!func_105(Global_1940311.f_10893, 0) || iVar1 != Global_1940311.f_10893)
	{
		iVar0 = iVar1;
	}
	if (func_111(iVar0, -189374246))
	{
		func_262();
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10910, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "label"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, func_263(iVar0));
	}
	return iVar0;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_106(var uParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(uParam0, "label");
	return uVar0;
}

void func_107(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	struct<19> Var22;
	int iVar57;

	bVar0 = true;
	if (func_105(iParam0, 0))
	{
		if (func_111(iParam0, 1147021565))
		{
			if (Global_1940311.f_10892 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_28(0))
			{
				iVar2 = func_264(iParam0);
				if (func_111(iParam0, 1573112293) && !func_265(iVar2))
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
		func_266(iParam0, uParam1);
		bVar3 = false;
		bVar4 = func_267(iParam0);
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		iVar8 = 0;
		if ((func_111(iParam0, -1472964441) && func_165(iParam0)) && !func_28(0))
		{
			bVar5 = true;
			if (func_166())
			{
				if (func_167(iParam0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10921, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, false);
					if (!func_268())
					{
						bVar4 = true;
						bVar6 = true;
					}
				}
				else
				{
					iVar8 = func_269(iParam0, 1);
					if (iVar8 == 0 || iVar8 == 2)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10921, false);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10922, -31549930);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10923, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10924, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, false);
					}
					bVar7 = true;
				}
			}
			else
			{
				iVar8 = func_269(iParam0, 1);
				if (iVar8 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, false);
				}
			}
		}
		if (func_10(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_SKILL_PAMPHLETS") || func_10(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_SATCHEL_PAMPHLETS"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10919, joaat("READ"));
		}
		iVar9 = 0;
		iVar10 = 0;
		iVar11 = 0;
		iVar13 = 0;
		iVar14 = 0;
		iVar9 = func_270(iParam0, 0, 0, 0);
		if (func_86())
		{
			iVar10 = func_271(PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID()), iParam0);
			if (iVar10 > 0)
			{
				iVar15 = 0;
				while (iVar15 < 3)
				{
					if (Global_1904087.f_113[iVar15 /*96*/].f_1 == iParam0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_938.f_245[iVar15 /*4*/].f_3))
						{
							iVar13++;
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1291734.f_938.f_245[iVar15 /*4*/].f_3))
							{
								iVar14++;
							}
						}
					}
					iVar15++;
				}
			}
		}
		if (func_100())
		{
			iVar11 = func_272(iParam0, 1);
		}
		if (iParam0 == Global_1940311.f_10896)
		{
			iVar9++;
			iVar13++;
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940311.f_10897))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1940311.f_10897))
				{
					iVar14++;
				}
			}
		}
		iVar12 = ((iVar9 + iVar10) + iVar11);
		iVar16 = func_273(iParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10910, func_274(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, func_263(iParam0));
		if (bVar4)
		{
			if (iVar14 > 0 || iVar13 <= 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10930, true);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10930, false);
				bVar4 = false;
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10930, false);
		}
		if (bVar4 && iVar12 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10926, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10925, (bVar3 && iVar14 == iVar13));
		bVar17 = true;
		if (func_28(0) || func_73())
		{
			fVar18 = (BUILTIN::TO_FLOAT(func_275(iParam0)) / 100f);
			fVar19 = (BUILTIN::TO_FLOAT(func_277(func_276(iParam0), 770694722)) / 100f);
			if (((func_111(iParam0, 1064293907) || INVENTORY::_0x245D07651B1D183B(iParam0, 1073741824 /* Float: 2f */)) || func_111(iParam0, -1257428961)) || func_111(iParam0, 173360570))
			{
				if (func_278())
				{
					fVar19 = (fVar19 * 1.25f);
				}
			}
			else if ((INVENTORY::_0x245D07651B1D183B(iParam0, 268435456) || INVENTORY::_0x245D07651B1D183B(iParam0, 134217728)) || func_111(iParam0, 1888974372))
			{
				fVar19 = (fVar19 * 0.4f);
			}
			else if (func_111(iParam0, 1286414894) || func_111(iParam0, 1686880204))
			{
				fVar19 = (fVar19 * 0.6f);
			}
			if (Global_1915715.f_20241 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10912, MISC::_CREATE_VAR_STRING(10, "SEND_ITEM_VALUE", func_279(MISC::_0x2B6846401D68E563(fVar18, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1915715.f_20241 == 29)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10912, func_279(MISC::_0x2B6846401D68E563(fVar19, 2), joaat("COLOR_PURE_WHITE")));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10912, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_279(MISC::_0x2B6846401D68E563(fVar18, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!func_280(iParam0, Global_1915715.f_20241.f_1) && !func_73())
			{
				bVar17 = false;
			}
			if (func_248() == 29 && func_281(iParam0))
			{
				bVar17 = false;
			}
		}
		if (bVar5)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			if (bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			}
			else if (bVar7)
			{
				if (iVar8 == 0 || iVar8 == 2)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, func_282(iVar8)));
				}
			}
			else if (iVar8 != 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, func_282(iVar8)));
			}
		}
		else if (-492264119 == iParam0 && !func_283())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (bVar17)
		{
			if (iVar16 > 1)
			{
				if ((func_248() == 38 && func_105(iParam0, 0)) && func_111(iParam0, 474910316))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, "");
					func_112(iParam0, joaat("ANTIQUE_BOTTLES"));
					func_112(iParam0, joaat("ARROWHEADS"));
					func_112(iParam0, joaat("BIRD_EGGS"));
					func_112(iParam0, joaat("COINS"));
					func_112(iParam0, joaat("FAMILY_HEIRLOOMS"));
					func_112(iParam0, joaat("LOST_JEWELRY_BRACELETS"));
					func_112(iParam0, joaat("LOST_JEWELRY_EARRINGS"));
					func_112(iParam0, joaat("LOST_JEWELRY_NECKLACES"));
					func_112(iParam0, joaat("LOST_JEWELRY_RINGS"));
					func_112(iParam0, joaat("TAROT_CARDS_CUPS"));
					func_112(iParam0, joaat("TAROT_CARDS_PENTACLES"));
					func_112(iParam0, joaat("TAROT_CARDS_SWORDS"));
					func_112(iParam0, joaat("TAROT_CARDS_WANDS"));
					func_112(iParam0, joaat("WILD_FLOWERS"));
					func_112(iParam0, 773314749);
					func_112(iParam0, -246025274);
					func_112(iParam0, -41527693);
				}
				else if (iVar12 >= iVar16)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar12, iVar16));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar12, iVar16));
				}
			}
			else if (iVar16 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar12));
			}
		}
		else if (func_248() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, "");
		}
		else if (func_248() == 29)
		{
			if (func_281(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_SKINNED_ITEM"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
			}
		}
		else if ((func_284(func_248()) && ENTITY::DOES_ENTITY_EXIST(Global_1051439.f_72[func_248() /*75*/].f_20)) && !PED::IS_PED_MALE(Global_1051439.f_72[func_248() /*75*/].f_20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		iVar20 = iParam0;
		if (func_285(iVar20))
		{
			fVar21 = (BUILTIN::TO_FLOAT(func_286(iVar20)) / 100f);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10910, iVar20);
			Var22.f_2 = 5;
			Var22.f_18 = 8;
			if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(iVar20, &Var22))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, Var22.f_1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, 0);
			}
			if (func_28(0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10912, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_279(MISC::_0x2B6846401D68E563(fVar21, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10912, "");
			}
			if (iVar20 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0))
			{
				func_113();
			}
			else
			{
				iVar57 = COLLECTION::_0x9ADEE485726025D4(iVar20);
				if (iVar57 != 0)
				{
					func_287(iVar20);
				}
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10910, func_71(Global_1940311.f_10892));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, func_72(Global_1940311.f_10892));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, "");
		}
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1940311.f_10917, 0, 0);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1940311.f_10917, iParam0, 0);
	}
	func_93(iParam0);
}

void func_108(int iParam0, int iParam1)
{
	if (!func_105(iParam1, 0))
	{
		return;
	}
	if ((!func_111(iParam1, 747873593) && !func_111(iParam1, joaat("CI_TAG_FOLDER_LETTERS"))) && !func_111(iParam1, joaat("CI_TAG_FOLDER_NOTES")))
	{
		return;
	}
	if (iParam1 != Global_1913674[iParam0 /*6*/])
	{
		Global_1913674[iParam0 /*6*/].f_1 = 3;
		Global_1913674[iParam0 /*6*/] = iParam1;
		Global_1913674[iParam0 /*6*/].f_5 = 0;
	}
}

void func_109(int iParam0, var uParam1)
{
	Global_1940311.f_10890 = iParam0;
	if (func_25())
	{
		if (PED::_IS_PED_CARRYING(Global_34) == 0)
		{
			func_221(-1559802791);
		}
	}
	if (func_24())
	{
		func_221(-2074770370);
	}
	func_222(Global_1940311.f_10892, uParam1, 0);
}

void func_110(int iParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10910, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10911, func_288(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940311.f_10918, iParam0);
	func_93(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1940311.f_10917, 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10930, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10926, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10925, false);
	func_289(uParam1);
}

bool func_111(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return func_291(func_290(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_112(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;

	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam1, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_292(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (Var1[iVar33 /*2*/] == 0)
		{
		}
		else
		{
			if (Var1[iVar33 /*2*/] == iParam0)
			{
				bVar36 = true;
			}
			iVar33++;
		}
	}
	if (!bVar36)
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_293(Var1[iVar33 /*2*/], 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

int func_113()
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	iVar0 = STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_292(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_293(Var1[iVar33 /*2*/], 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

bool func_114(int iParam0, var uParam1)
{
	return ITEMDATABASE::_0xF8D09EF8CE61D7BF(iParam0, uParam1);
}

void func_115(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;

	Global_1940311.f_10868 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_10909);
	iVar0 = Global_1940311.f_10869[Global_1940311.f_10868];
	if (iVar0 != Global_1940311.f_10892)
	{
		Global_1940311.f_38.f_203 = 0;
		Global_1940311.f_10890 = func_83(iVar0);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10904, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar1, "CurrentCategory", false);
		uVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10904, Global_1940311.f_10868);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar2, "CurrentCategory", true);
		func_222(iVar0, &uVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < Global_1940311.f_10867)
		{
			uVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10904, iVar3);
			bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory");
			bVar6 = !Global_1940311.f_10869[iVar3] != Global_1940311.f_10892;
			if (bVar5 != bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory", bVar6);
			}
			iVar3++;
		}
		Global_1940311.f_10890 = func_83(Global_1940311.f_10892);
	}
}

bool func_116(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_82(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_82(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_82(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_82(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_117(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_294(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_295(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_155(iParam0, bParam4, 0) };
	Var6 = { func_156(iParam0, Var1, Var1.f_4, bParam4) };
	return func_296(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_118(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311.f_7)
	{
		return false;
	}
	if (((iParam0 != joaat("CUSTOM_SATCHEL") && iParam0 != joaat("KIT_CAMP")) && iParam0 != joaat("KIT_CAMP_SIMPLE")) && bParam1)
	{
		iVar0 = func_297(iParam0);
		if (func_111(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_44(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE"))
	{
		if (func_190())
		{
			return false;
		}
	}
	if (!func_293(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_119(int iParam0)
{
	if (func_128(iParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_210(0), iParam0, func_28(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_178(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_298() != -1)
			{
				func_132(func_299(), 10000, 0, 0, 0, 1);
				func_300(-1);
			}
			break;
	}
	return true;
}

bool func_120(int iParam0)
{
	struct<16> Var0;

	if (iParam0 == joaat("DOCUMENT_MAP_ROLE_NATURALIST_LEGENDARY_ANIMAL"))
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_126(Var0, 0);
		return true;
	}
	return false;
}

void func_121(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_122(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_123(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_124(int iParam0)
{
	if (func_68() == 0 && func_302(func_301(iParam0), 1, 0) != 0)
	{
		func_132("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_125(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_303(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_10(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_304())
				{
					if (func_305(&Global_34))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("APPLY_POMADE_WITH_NO_HAT"), 1, 0, -1082130432 /* Float: -1f */);
					}
					return true;
				}
				else
				{
					func_132("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 280850861, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -268993254, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1834614641, 1, 0, -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913503 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_307(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_308(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_309(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_310(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_311(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_312(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_313(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_306(iParam0);
				}
				else
				{
					func_314(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, joaat("POCKET_WATCH_INSPECT_UNHOLSTER"), 1, 0, -1082130432 /* Float: -1f */);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_315(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_316(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_317(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_306(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_318(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_319(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_126(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493.f_161 >= 10)
	{
		return;
	}
	if (!func_320(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_321(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			Global_1939493[iVar0 /*16*/] = { Param0 };
			Global_1939493.f_161++;
			func_322(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_127()
{
	return Global_1893587 & 2 != 0;
}

bool func_128(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (func_130(iParam0) == joaat("EMOTE"))
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	return func_323(iParam0);
}

int func_130(int iParam0)
{
	vector3 vVar0;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_131(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_130(iParam0) == joaat("CLOTHING"))
	{
		if (func_133(iParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_132(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_133(int iParam0)
{
	struct<2> Var0;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::_0xD543D3A8FDE4F185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_135(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_GET_MOUNT_OF_PLAYER(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_324(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_325(Var0);
}

int func_137(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_196())
	{
		return 0;
	}
	if (!func_326(iParam0))
	{
		return 0;
	}
	if (func_327(iParam0))
	{
		iVar0 = 0;
		if ((func_133(iParam0) == 81053684 || func_111(iParam0, 160827531)) && !func_111(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_209(&iVar0, 2);
			}
		}
		return func_328(iParam0, iVar0);
	}
	return 0;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = Global_1952637.f_1675.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayUnequipHatFidget", true, 15);
		func_139(Global_34, joaat("CLOTHING_ITEM_HAT_NONE"), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_140(iParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_34, "PlayEquipHatFidget", true, 15);
	func_139(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_329(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_330();
		func_324(128);
		return;
	}
	if (iVar1 == Global_1952637.f_83[iVar0 /*12*/])
	{
		func_140(iParam0, 1, 0);
		return;
	}
	if (func_331(-2061583405, 0))
	{
		if (func_219(iVar1))
		{
			func_140(iVar1, 0, 0);
		}
		else
		{
			func_332(iVar1, 1, 1, 0, 0, 0);
		}
		func_140(iParam0, 1, 0);
		return;
	}
	if (func_219(iVar1))
	{
		func_140(iVar1, 0, 0);
		func_140(iParam0, 1, 0);
	}
	else if (func_219(iParam0))
	{
		if (iParam0 != func_333(0))
		{
			func_334(iParam0, iVar1, 0, 0, 0);
			func_140(iParam0, 0, 0);
			func_140(iVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_324(128);
			func_140(iParam0, 1, 0);
		}
	}
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_155(iParam1, 1, 0) };
		iParam3 = func_335(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_337(iParam1, iParam2, func_336(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_338(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_339(iParam1, 0))
		{
			func_340(Global_1952637.f_1675.f_1[func_336(iParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_340(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != Global_1952637.f_83[func_336(iParam3, 1) /*12*/])
			{
				func_136(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_329(32768))
			{
				func_330();
				func_136(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_341(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_342(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_136(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_136(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_155(iParam0, bParam2, 0) };
	Var5 = { func_156(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_343(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_210(bParam2), &Var5, iParam1);
}

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	struct<4> Var8;

	iVar2 = 0;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_156(joaat("WARDROBE"), func_344(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		iVar1 = Global_1952637.f_3334[iVar0];
		if (func_133(iVar1) == iParam0 || (iParam0 == 81053684 && func_111(iVar1, 160827531)))
		{
			Var3 = { func_156(iVar1, Var8, iVar7, bParam1) };
			if (INVENTORY::_0x70E3A884ED000A01(func_210(bParam1), &Var3))
			{
				iVar2 = iVar1;
				INVENTORY::_0x65A5F70F4A292EBE(func_210(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_34) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_34)
		{
			if (iParam1 == joaat("KIT_WARDROBE"))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_345(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_143(int iParam0)
{
	int iVar0;

	iParam0 = func_238(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_346())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

void func_144()
{
	int iVar0;

	if (func_347())
	{
		return;
	}
	if (func_348(8))
	{
		switch (Global_1051439.f_3629)
		{
			case 0:
				if (func_348(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
					{
						PED::_0xF1C03A5352243A30(Global_34);
						TASK::CLEAR_PED_TASKS(Global_34, true, false);
					}
					func_349(16);
				}
				func_350(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
				{
				}
				else
				{
					func_349(8);
					func_350(0);
				}
		}
		return;
	}
	if (func_351())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432 /* Float: -1f */);
		Global_1915715.f_22504.f_1 = 1;
		Global_1051439.f_43 = 0;
		func_352();
	}
	else
	{
		iVar0 = func_354(func_353());
		if (iVar0 != -1)
		{
			func_132(func_299(), 10000, 0, 0, 0, 1);
			Global_1051439.f_3628 = 0;
			Global_1051439.f_3629 = 0;
			func_355(0);
			func_300(-1);
		}
	}
}

bool func_145(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_356() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_357(16))
	{
		return false;
	}
	if (func_358())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		{
			return false;
		}
	}
	if (!func_359())
	{
		return false;
	}
	if (func_360(16))
	{
		return false;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::_0xD6F6ACF4392187FB(iVar0) || !GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_82(Global_1137047.f_8, 1))
	{
		return false;
	}
	if (func_148())
	{
		return false;
	}
	return true;
}

int func_146(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_361();
	}
	if (!func_362(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_363(iParam0);
	Global_1896738.f_386 = 1;
	Global_1896738.f_387 = bParam1;
	return 1;
}

bool func_147(int iParam0)
{
	return func_82(Global_1137047.f_8, iParam0);
}

bool func_148()
{
	int iVar0;

	iVar0 = func_364(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1131196[iVar0 /*27*/].f_18.f_1 != 0 && func_82(Global_1131196[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_149()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_365(0) };
	if (func_366(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_367(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_368(iVar2) == joaat("POSSE_VERSUS"))
				{
					func_132("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_132("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_132("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_132("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_150(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_370(Var0, func_369(0, 8), 0, 0);
}

int func_151(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
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

void func_152(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_373(iVar0, iVar1);
}

void func_153(bool bParam0)
{
	if ((func_68() != -1 || !bParam0) || func_235(Global_34))
	{
		func_374();
		return;
	}
}

void func_154()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	func_375(1, iVar0);
}

struct<5> func_155(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_344(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_130(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_156(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_376(bParam1) };
			if (bParam2 && func_377(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_378(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_378(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_379(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_380(bParam1) };
			switch (func_133(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_381(iParam0, -1823706425))
			{
				Var0 = { func_156(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_381(iParam0, -1483207246))
			{
				Var0 = { func_156(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_156(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_381(iParam0, -1653629781))
			{
				Var0 = { func_156(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_382(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_381(iParam0, -1653629781))
			{
				Var0 = { func_156(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_156(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_105(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_210(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_157(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_158(0))
	{
		return func_383(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_382(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_210(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_158(bool bParam0)
{
	if (func_68() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_210(bParam0));
}

void func_159()
{
	int iVar0;

	if (!func_44(1, 124032))
	{
		return;
	}
	iVar0 = WEAPON::_0xDA37A053C1522F5D(Global_34, 0, 0, 0);
	if (func_384(iVar0))
	{
		func_386(1, iVar0, func_385());
	}
	else
	{
		func_132("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, 1);
	}
}

int func_160(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<17> Var13;

	iVar0 = -1;
	iVar1 = func_387(iParam0);
	iVar2 = func_388(iParam0);
	if (iVar2 != 0)
	{
		if (!func_158(0) || func_389())
		{
			if (bParam2)
			{
				func_391(func_390(joaat("BROKEN_DOWN"), joaat("SMALL_ANIMALS")), 1);
				return func_392(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_155(iParam0, 1, 0) };
			Var8 = { func_156(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_393(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_394(iVar12, Var13);
			}
			return 0;
		}
		if (func_169(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_392(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

bool func_161(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == joaat("PROVISION_ROTTEN_MEAT") || iParam0 == joaat("CONSUMABLE_CORNEDBEEF_CAN"))
	{
		return false;
	}
	if (func_111(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_111(iParam0, -839724752))
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
			return true;
		}
	}
	return false;
}

int func_162(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_163(int iParam0)
{
	return iParam0;
}

int func_164(int iParam0, int iParam1)
{
	if (func_68() == -1)
	{
		if (func_395(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_68() == 0)
	{
		if (func_395(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_165(int iParam0)
{
	if (func_111(iParam0, 566155764))
	{
		return false;
	}
	if (func_111(iParam0, 2028734248))
	{
		return true;
	}
	return false;
}

bool func_166()
{
	return Global_17411.f_2966.f_21;
}

bool func_167(int iParam0)
{
	if (Global_17411.f_2966.f_17 == iParam0)
	{
		return true;
	}
	return false;
}

void func_168()
{
	func_396(&(Global_17411.f_2966), 3);
}

bool func_169(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_397(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_398(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_399(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_293(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_400(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_270(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_270(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_169(iParam0, func_270(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_130(iParam0) == joaat("WEAPON"))
	{
		if (!func_401(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_117(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_155(iParam0, 0, 0) };
		if (func_158(0) && Var7.f_4 == 1084182731)
		{
			func_66(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940144.f_21 = 0;
	}
	if (!func_158(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_399(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_170()
{
	return Global_1940311.f_10892;
}

bool func_171(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_402(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return true;
	}
	return func_403(iParam0, iParam1, bParam2, iParam3);
}

bool func_172(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	if (bParam3)
	{
		if (!func_257())
		{
			return false;
		}
	}
	if (!func_404(iParam0, iParam1, iParam4, iParam2, 1))
	{
		return false;
	}
	func_405();
	return true;
}

int func_173(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_270(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_271(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_272(iParam1, bParam4));
	}
	return iVar0;
}

bool func_174(int iParam0)
{
	return (func_406(iParam0, 4) || func_406(iParam0, 5));
}

bool func_175(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_176(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT")) || iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_177(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (Global_1138048[iVar1 /*8*/].f_4)
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_34, 0))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_407(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_408(joaat("SIMPLE_CRAFTING")) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SIMPLE_CRAFTING")) > 0)
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) || (!PED::IS_PED_RAGDOLL(Global_34) && PED::IS_PED_ON_VEHICLE(Global_34, false))) || PED::IS_PED_IN_ANY_BOAT(Global_34)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_34))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_192(0, 1, 1) && !func_409(1))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_410())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_208(8))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_12(Global_34))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_ANY_HOSTILE_PED_NEAR_POINT(Global_34, Global_35, 10f))
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_HOSTILE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_411())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (Global_1915715.f_20637 || Global_1915715.f_22504.f_1)
	{
		if (bParam0)
		{
			func_132("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_178(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_1433.f_54.f_85);
}

bool func_179(bool bParam0)
{
	if (PED::_IS_PED_HOGTIED(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_PED_HOGTYING(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_PED_LASSOED(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_34))
	{
		return false;
	}
	if (!PED::_GET_LASSO_TARGET(Global_34) == 0)
	{
		return false;
	}
	if (PED::_0x226CF9B159E38F42(Global_34))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_34))
	{
		return false;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_34) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 4096, 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_34, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_180(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_176(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::_IS_PED_FALLING_2(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_181(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_34))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_182()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_366(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_183()
{
	return Global_1248240.f_9296 != -1;
}

bool func_184(float fParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_34)) || func_201(iParam1, 1024)) && PED::_0x336B3D200AB007CB(Global_34, Global_35, fParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_185()
{
	return PED::_0x2942457417A5FD24(Global_34) >= 1f;
}

bool func_186(bool bParam0)
{
	int iVar0;

	iVar0 = func_412();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = HUD::_0x0501D52D24EA8934(1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_189(iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_34, iVar0))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_187(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		return true;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (!func_189(iVar0))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PED::_0xE4770DA1B8FF4FD1(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_237(iVar0, 1, 1) > 2f)
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_34, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam0)
			{
				func_132("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	if (!func_189(iVar1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_0xE4770DA1B8FF4FD1(iVar1)))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_34, iVar1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_188(int iParam0)
{
	return func_406(iParam0, 7);
}

bool func_189(int iParam0)
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
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_190()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		iVar1 = iVar0;
		if (iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
		{
			return true;
		}
	}
	return false;
}

bool func_191()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		return false;
	}
	return false;
}

bool func_192(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736.f_68;
		}
		if (func_182())
		{
			return true;
		}
		if (Global_1071686.f_3 && !Global_1572887.f_9)
		{
			if ((Global_1056141[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*471*/].f_463 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736.f_67;
		}
		else
		{
			return Global_1900736.f_68;
		}
	}
	if (iParam0 == 0 && func_366(func_365(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900871)
		{
			return true;
		}
	}
	switch (func_413(func_365(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_193()
{
	return Global_1913694.f_1578;
}

bool func_194()
{
	if ((func_182() || Global_1572887.f_106.f_75 > 10) || func_414())
	{
		if ((!func_415() && Global_265377.f_124517.f_71.f_21.f_2 != -504335712) && !func_416(Global_265377.f_124517.f_71.f_21.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_195(int iParam0)
{
	return func_82(Global_1940144.f_38, iParam0);
}

bool func_196()
{
	return Global_1952637.f_3484;
}

void func_197(var uParam0, int iParam1)
{
	func_417(uParam0, iParam1);
}

int func_198(int iParam0)
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
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_199(int iParam0)
{
	return (Global_1952637.f_3334.f_33.f_6 && iParam0) != 0;
}

int func_200()
{
	return 234339573;
}

bool func_201(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_202(bool bParam0)
{
	int iVar0;

	if (func_8(1))
	{
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_8(2) && MISC::GET_GAME_TIMER() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_418(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_132("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_132("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_8(4194304))
	{
		return false;
	}
	return true;
}

bool func_203(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		PED::_0x6B67320E0D57856A(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_132("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_204(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_34))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_132("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_132("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_201(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam2 || VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return false;
	}
	return true;
}

bool func_205(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_206(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return false;
}

bool func_207(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

void func_209(int iParam0, int iParam1)
{
	func_419(iParam0, iParam1);
}

int func_210(bool bParam0)
{
	if (func_68() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_211(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<14> Var17;
	int iVar31;

	if (func_420(Global_34))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	iVar2 = 0;
	Var3.f_9 = -1591664384;
	if (Global_1940144.f_80.f_2 == 0)
	{
		iVar0 = INVENTORY::_0xBB7F968675B34B0C(func_210(0), 32, &iVar1);
		if (iVar0 < 0)
		{
		}
		else
		{
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < 32)
				{
					if (!func_228(&Var3, iVar2, iVar0, iVar1))
					{
					}
					else if (!func_421(Var3))
					{
					}
					else if (bParam1)
					{
						func_422(iParam0, Var3.f_4, 1);
					}
					else if (bParam2)
					{
						func_422(iParam0, Var3.f_4, 0);
					}
					else if (Var3.f_4 != joaat("CUSTOM_SATCHEL"))
					{
						func_422(iParam0, Var3.f_4, func_423(Var3.f_4));
					}
					iVar2++;
				}
			}
			func_242(iVar0);
		}
	}
	Var17 = { func_424(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (func_425(&Var17, &iVar0, &iVar1, bParam3))
	{
		if (Global_1940144.f_80.f_2 > iVar1)
		{
			func_242(iVar0);
			return true;
		}
		iVar31 = 0;
		iVar2 = Global_1940144.f_80.f_2;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar31++;
			if (iVar31 > 100)
			{
				Global_1940144.f_80.f_2 = iVar2;
				func_242(iVar0);
				return false;
			}
			if (func_228(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_421(Var3))
				{
				}
				else if (bParam1)
				{
					func_422(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					func_422(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != joaat("CUSTOM_SATCHEL"))
				{
					func_422(iParam0, Var3.f_4, func_423(Var3.f_4));
				}
			}
			iVar2++;
		}
		func_242(iVar0);
	}
	return true;
}

void func_212(int iParam0)
{
	func_422(iParam0, joaat("WEAPON_KIT_BINOCULARS"), func_33(32));
	func_422(iParam0, joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), func_33(32));
	func_422(iParam0, joaat("WEAPON_KIT_CAMERA"), func_33(64));
	func_422(iParam0, joaat("WEAPON_KIT_CAMERA_ADVANCED"), func_33(131072));
	func_422(iParam0, joaat("KIT_HORSE_BRUSH"), func_33(1024));
	func_422(iParam0, joaat("WEAPON_KIT_METAL_DETECTOR"), (func_33(32768) && !func_208(256)));
	func_422(iParam0, joaat("KIT_ROLE_NATURALIST_COMPENDIUM"), func_33(524288));
	func_426(iParam0, func_33(8192));
	func_427(iParam0, func_33(128));
	func_422(iParam0, joaat("KIT_CAMP_WILDERNESS"), func_33(262144));
	func_428(iParam0, func_33(4));
	func_429(iParam0, func_33(8));
	func_430(iParam0, func_33(1));
}

bool func_213()
{
	if ((Global_1940311.f_10901 != (Global_1940311.f_38.f_203 - 1) || func_173(func_162(0), Global_1940311.f_10893, 0, 1, 1) > 0) || Global_1940311.f_10901 == 15)
	{
		return true;
	}
	func_103();
	if (Global_1940311.f_6)
	{
		return true;
	}
	return false;
}

void func_214(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

int func_215(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (Global_1572887.f_13 != -1)
		{
			bVar1 = func_227(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_13 != -1)
	{
		bVar1 = func_227(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_431();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_216()
{
	if (func_68() == -1)
	{
		if (!func_432(18, &(Global_1940311.f_10931)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1940311.f_10931, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1940311.f_10931, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1940311.f_10931, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1940311.f_10931, 3, "satchel_elements/name(id=%x):description0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1940311.f_10931, 4, "satchel_elements/name(id=%x):category0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1940311.f_10931, 5, "satchel_elements/name(id=%x):colorid0");
}

int func_217()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1940311.f_10869[iVar0] == Global_1940311.f_10892)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_218(var uParam0)
{
	Global_1940311.f_10867 = 0;
	if (!Global_1940311.f_8)
	{
		func_221(0);
		func_433();
	}
	else if (((((Global_1940311.f_10892 != -2074770370 && Global_1940311.f_10892 != -283002878) && Global_1940311.f_10892 != -889932290) && Global_1940311.f_10892 != 822208792) && Global_1940311.f_10892 != -182626652) && Global_1940311.f_10892 != -693134279)
	{
		func_76(Global_1940311.f_10892);
	}
	else
	{
		func_221(0);
		func_433();
	}
	func_434(uParam0, 0, "ALL EXCLUDING CLOTHING", joaat("SATCHEL_NAV_ALL"));
	func_434(uParam0, -1666604090, "Provisions", joaat("SATCHEL_NAV_PROVISIONS"));
	func_434(uParam0, -96974025, "Remedies", joaat("SATCHEL_NAV_REMEDIES"));
	func_434(uParam0, -1268291907, "Ingredients", joaat("SATCHEL_NAV_INGREDIENTS"));
	func_434(uParam0, -1559802791, "Materials", joaat("SATCHEL_NAV_MATERIALS"));
	func_434(uParam0, -156634416, "Kit", joaat("SATCHEL_NAV_KIT"));
	func_434(uParam0, 1561961676, "Valuables", joaat("SATCHEL_NAV_VALUABLES"));
	func_434(uParam0, 1061777683, "Documents", joaat("SATCHEL_NAV_DOCUMENTS"));
	if (func_293(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		func_434(uParam0, 1783698482, "Collections", -1401643540);
	}
	func_435(uParam0);
	func_436(uParam0);
	func_437(uParam0);
	if (func_28(0))
	{
		if (func_248() == 2)
		{
			func_221(-693134279);
		}
		else
		{
			func_221(-182626652);
		}
	}
	else if (func_236(-283002878))
	{
		func_221(-283002878);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940311.f_10907, Global_1940311.f_10867);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940311.f_10909, func_217());
}

bool func_219(int iParam0)
{
	var uVar0;

	return func_438(iParam0, &uVar0);
}

int func_220(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1940311.f_10882;
	if (iVar0 >= 3)
	{
		return -1;
	}
	if (!func_243(sParam3, &(Global_1940311.f_10883[iVar0 /*2*/].f_1), &(Global_1940311.f_10883[iVar0 /*2*/]), iParam4, 0))
	{
		return -1;
	}
	Global_1940311.f_10882++;
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0, -1, -1287062382, uVar1);
	return iVar0;
}

void func_221(int iParam0)
{
	int iVar0;

	if (Global_1940311.f_10892 != iParam0)
	{
		Global_1940311.f_10892 = iParam0;
		Global_1940311.f_10902 = 1;
	}
	iVar0 = func_217();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940311.f_10909, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940311.f_10908, iVar0);
	func_439((Global_1940311.f_10892 != -283002878 && Global_1940311.f_10892 != -889932290));
}

void func_222(int iParam0, var uParam1, bool bParam2)
{
	func_221(iParam0);
	if (!bParam2)
	{
		func_15(iParam0);
	}
}

bool func_223()
{
	int iVar0;
	int iVar1;

	if (Global_1940311.f_37 == 0)
	{
		Global_1940311.f_10868 = 0;
	}
	else
	{
		iVar0 = Global_1940311.f_10868;
		iVar1 = (Global_1940311.f_10867 - 1);
		switch (Global_1940311.f_37)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1940311.f_10868 = iVar1;
				break;
		}
		if (Global_1940311.f_37 == -283002878)
		{
			if (func_28(0))
			{
				Global_1940311.f_10868 = (iVar1 - 1);
			}
			else
			{
				Global_1940311.f_10868 = iVar1;
			}
		}
		func_115(iVar0);
		return true;
	}
	return false;
}

bool func_224()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

void func_225()
{
	if (Global_1572887.f_13 == -1)
	{
		return;
	}
	Global_1071686.f_2 = 0;
}

void func_226(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1940311.f_10882 > 0)
	{
		Global_1940311.f_10882 = (Global_1940311.f_10882 - 1);
		func_242(Global_1940311.f_10883[Global_1940311.f_10882 /*2*/].f_1);
	}
}

bool func_227(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_228(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_229(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}
	return false;
}

bool func_230(int iParam0, int iParam1)
{
	return iParam1 == func_10(iParam0, 1224357681);
}

bool func_231(int iParam0)
{
	int iVar0;

	if (Global_1940311.f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1940311.f_14.f_16)
		{
			if (Global_1940311.f_14[iVar0 /*3*/] != iParam0)
			{
			}
			else if (Global_1940311.f_14[iVar0 /*3*/].f_1 & 1 != 0)
			{
				return false;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (func_111(iParam0, 1989861793) && func_343(func_440(iParam0), func_344(1), 1084182731, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_28(0))
	{
		if (Global_1940311.f_10892 == -182626652 && !func_280(iParam0, Global_1915715.f_20241.f_1))
		{
			return false;
		}
		switch (Global_1915715.f_20241)
		{
			case 2:
				if (!func_441(iParam0))
				{
					return false;
				}
				break;
		}
	}
	if (func_111(iParam0, -805003139))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
		{
			return false;
		}
	}
	if (func_130(iParam0) == joaat("UPGRADE"))
	{
		if (!func_111(iParam0, -1540973036) && !func_111(iParam0, 1192444843))
		{
			return false;
		}
		else if (iParam0 == joaat("UPGRADE_FSH_LURE_NONE") || iParam0 == joaat("UPGRADE_FSH_BAIT_NONE"))
		{
			return false;
		}
	}
	return true;
}

void func_232(struct<12> Param0, var uParam12, var uParam13)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (func_105(Param0.f_4, 0))
	{
		iVar0 = func_442(Param0.f_4);
		if (iVar0 == 0)
		{
			iVar0 = func_274(Param0.f_4);
		}
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10906, Global_1940311.f_10900);
		uVar2 = uVar1;
		bVar3 = func_443(Param0.f_4);
		if (func_111(Param0.f_4, 1397200408))
		{
			Param0.f_10 = 1;
		}
		if (func_294(Param0.f_4, joaat("DEFAULT")) != 0)
		{
			iVar4 = func_343(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 1084182731 && iVar4 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar4;
		}
		iVar5 = joaat("COLOR_PURE_WHITE");
		if (func_444(Param0.f_4))
		{
			if (func_111(Param0.f_4, 1816585950))
			{
				iVar5 = joaat("COLOR_YELLOW");
			}
		}
		else if (func_445(Param0.f_4))
		{
			iVar5 = joaat("COLOR_YELLOW");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar2, iVar0, Param0.f_11, Param0.f_10, bVar3, iVar5, Param0.f_4);
		Global_1940311.f_10900++;
	}
}

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_234(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_446(iParam0);
	if (!func_284(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051439.f_72[iVar0 /*75*/].f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_447(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_448(vVar1))
	{
		return false;
	}
	fVar4 = func_449(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_450(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_450(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

bool func_235(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_236(int iParam0)
{
	if (iParam0 == Global_1940311.f_37)
	{
		return true;
	}
	return false;
}

float func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_451(Global_34, iParam0, bParam1, bParam2);
}

int func_238(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_239(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903136[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

float func_240(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_241(int iParam0)
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
	float fVar12;

	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_452(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_453(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_453(iParam0) + 1;
	fVar6 = func_454(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(func_455(iVar0, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(func_455(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_456(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_242(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return false;
	}
	return true;
}

bool func_243(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_210(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_244(var uParam0, int iParam1)
{
	int iVar0;

	if (func_229(uParam0->f_9))
	{
		return false;
	}
	if (!func_421(*uParam0))
	{
		return false;
	}
	if (!func_457(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_231(uParam0->f_4))
	{
		return false;
	}
	if (func_28(0))
	{
		if (!func_105(uParam0->f_4, 0))
		{
			return false;
		}
		if (func_389())
		{
			iVar0 = func_458(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_343(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1940311.f_10893 == 0 && !func_92())
	{
		func_93(uParam0->f_4);
	}
	else
	{
		func_214(0);
	}
	return true;
}

void func_245(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_10(iParam0, 1224357681);
	bVar1 = func_443(iParam0);
	if (func_459(iVar0))
	{
		if (Global_1940311.f_38.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1940311.f_38.f_1)
			{
				if (iVar0 == Global_1940311.f_38.f_2[iVar2 /*2*/])
				{
					func_460(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_461(iVar0, bVar1);
		}
		else
		{
			func_461(iVar0, bVar1);
		}
	}
}

bool func_246()
{
	if (Global_1940311.f_10892 == -182626652)
	{
		switch (func_248())
		{
			case 10:
			case 15:
			case 16:
			case 29:
				return true;
		}
	}
	else if (Global_1940311.f_10892 == -2074770370)
	{
		return func_25();
	}
	else if (Global_1940311.f_10892 == -693134279)
	{
		return true;
	}
	return false;
}

int func_247(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_462(&iParam0);
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_463(iParam0);
		}
	}
	else
	{
		iVar0 = func_463(iParam0);
	}
	return iVar0;
}

int func_248()
{
	return Global_1915715.f_20241;
}

int func_249(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (Global_1901947.f_681.f_31)
	{
		return 0;
	}
	if (func_68() == 0)
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	else
	{
		iVar0 = func_162(0);
	}
	func_464(&iVar0, &uVar1, bParam0, bParam1);
	return uVar1;
}

int func_250(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_87(0);
	iVar2 = func_87(1);
	func_464(&iVar1, &iVar0, bParam0, bParam1);
	func_464(&iVar2, &iVar0, bParam0, bParam1);
	return iVar0;
}

int func_251(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;

	if (Global_1901947.f_681.f_32)
	{
		return 0;
	}
	if (func_68() == 0)
	{
		iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (func_243("ALL SATCHEL EXCLUDING CLOTHING", &iVar2, &iVar3, -2015960939, 1))
		{
			if (iVar3 < 1)
			{
			}
			else
			{
				Var5.f_9 = -1591664384;
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					if (!func_228(&Var5, iVar4, iVar2, iVar3))
					{
					}
					else if (!func_105(Var5.f_4, 0))
					{
					}
					else if (Var5.f_4 == joaat("CUSTOM_SATCHEL"))
					{
					}
					else
					{
						iVar1++;
						if (bParam0)
						{
							if (!func_231(Var5.f_4))
							{
							}
							else
							{
								func_256(Var5, 1);
							}
						}
					}
					iVar4++;
				}
			}
			func_242(iVar2);
		}
		return iVar1;
	}
	return 0;
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < STATS::WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), iParam0))
	{
		if (STATS::WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), iParam0, iVar0, &iVar1, &iVar2))
		{
			if (func_105(iVar1, 0))
			{
				iVar3 = func_270(iVar1, 0, 0, 0);
				if (iVar3 < iVar2)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_253(int iParam0)
{
	struct<12> Var0;
	int iVar14;
	var uVar15;

	if (!func_285(iParam0))
	{
		return;
	}
	Var0.f_9 = -1591664384;
	Var0.f_11 = func_465(iParam0);
	iVar14 = iParam0;
	func_466(iParam0, &uVar15, 0, 0, 0, 0);
	if (!func_28(0))
	{
		func_467(-1715238242, iVar14, &uVar15, 1, Var0.f_11, 0, 0, joaat("COLOR_PURE_WHITE"));
	}
	else
	{
		func_467(joaat("INVENTORY_ITEM"), iVar14, &uVar15, 1, Var0.f_11, 0, 0, joaat("COLOR_PURE_WHITE"));
	}
	Global_1940311.f_38.f_203++;
}

bool func_254(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_293(joaat("KIT_COLLECTORS_BAG"), 1))
	{
		return false;
	}
	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam0, 0);
	if (!func_285(iVar0))
	{
		return false;
	}
	if (func_468(iVar0, -489628648, &uVar1, 1, 0))
	{
		return true;
	}
	return false;
}

void func_255(var uParam0, int iParam1)
{
	var uVar0[16];
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (iParam1 == 0)
	{
		iVar19 = INVENTORY::_0xBB7F968675B34B0C(func_210(0), 32, &iVar18);
		if (iVar19 < 0)
		{
			return;
		}
		if (iVar18 > 0)
		{
			iVar17 = 0;
			while (iVar17 < 32)
			{
				if (!func_228(uParam0, iVar17, iVar19, iVar18))
				{
				}
				else if (!func_105(uParam0->f_4, 0))
				{
				}
				else if (!func_244(uParam0, iParam1))
				{
				}
				else if (func_469(uParam0->f_4, &uVar0, iVar20))
				{
				}
				else
				{
					uVar0[iVar20] = uParam0->f_4;
					iVar20++;
					if (iVar20 >= 16)
					{
					}
					else
					{
						iVar17++;
					}
					func_470(&uVar0);
					func_471(&uVar0);
					func_242(iVar19);
				}
			}
		}
	}
}

void func_256(struct<12> Param0, var uParam12, var uParam13, bool bParam14)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (func_105(Param0.f_4, 0))
	{
		bVar0 = func_443(Param0.f_4);
		if (func_73() || (func_472() && !bVar0))
		{
			return;
		}
		iVar1 = func_274(Param0.f_4);
		bVar2 = ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(Param0.f_4);
		vVar3 = { func_473(Param0.f_4) };
		iVar6 = func_474(Param0.f_4);
		if (!bParam14 && func_294(Param0.f_4, joaat("DEFAULT")) != 0)
		{
			iVar7 = func_343(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 1084182731 && iVar7 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar7;
		}
		func_475(&Param0);
		iVar8 = joaat("COLOR_PURE_WHITE");
		if (func_444(Param0.f_4))
		{
			if (func_111(Param0.f_4, 1816585950))
			{
				iVar8 = joaat("COLOR_YELLOW");
			}
		}
		else if (func_445(Param0.f_4))
		{
			iVar8 = joaat("COLOR_YELLOW");
		}
		func_467(joaat("INVENTORY_ITEM"), iVar1, &vVar3, bVar0, Param0.f_11, bVar2, iVar6, iVar8);
		Global_1940311.f_38.f_203++;
	}
}

bool func_257()
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_476(iVar0))
	{
		return false;
	}
	return true;
}

bool func_258(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_259(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_446(iParam0);
	if (!func_284(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051439.f_72[iVar0 /*75*/].f_3 };
	if (iVar0 == 29)
	{
		vVar1 = { func_447(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_448(vVar1))
	{
		return false;
	}
	fVar4 = func_449(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_450(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_450(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

void func_260()
{
	if (func_248() != 2)
	{
		if (func_293(joaat("WEAPON_KIT_BINOCULARS"), 1))
		{
			func_261(joaat("WEAPON_KIT_BINOCULARS"), 0, 0);
		}
		if (func_293(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 1))
		{
			func_261(joaat("WEAPON_KIT_BINOCULARS_IMPROVED"), 0, 0);
		}
		if (func_293(joaat("WEAPON_KIT_CAMERA"), 1))
		{
			func_261(joaat("WEAPON_KIT_CAMERA"), 0, 0);
		}
		if (func_293(joaat("WEAPON_KIT_CAMERA_ADVANCED"), 1))
		{
			func_261(joaat("WEAPON_KIT_CAMERA_ADVANCED"), 0, 0);
		}
		if (func_293(joaat("KIT_CAMP"), 1))
		{
			func_261(joaat("KIT_CAMP"), 0, 0);
		}
		else if (func_293(joaat("KIT_CAMP_SIMPLE"), 1))
		{
			func_261(joaat("KIT_CAMP_SIMPLE"), 0, 0);
		}
		else if (func_293(joaat("KIT_CAMP_WILDERNESS"), 1))
		{
			func_261(joaat("KIT_CAMP_WILDERNESS"), 0, 0);
		}
		func_477();
	}
}

void func_261(int iParam0, bool bParam1, int iParam2)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = iParam0;
	Var0.f_11 = 1;
	if (!bParam1)
	{
		func_256(Var0, iParam2);
	}
	else
	{
		func_232(Var0);
	}
}

void func_262()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10924, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10923, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10921, false);
}

int func_263(int iParam0)
{
	int iVar0;

	iVar0 = func_264(iParam0);
	if ((iVar0 != 0 && !func_478(func_264(iParam0))) && !func_479(func_264(iParam0)))
	{
		if (!func_265(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return func_480(iParam0);
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 21;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 24;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 27;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 28;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 29;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 30;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 32;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 34;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 35;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 38;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 50;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 51;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 52;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 53;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 40;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 42;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 45;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 47;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 48;
	}
	return 0;
}

bool func_265(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return func_482(iParam0, 4, 1);
}

void func_266(int iParam0, var uParam1)
{
	if (func_73())
	{
		func_483(1);
		if (func_24())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_484(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_484(), -31549930);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10924, true);
	}
	else if (func_28(0) || func_73())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_10921))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_485(iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_484(), func_486(iParam0));
		func_487(iParam0, uParam1);
	}
}

int func_267(int iParam0)
{
	if (func_268())
	{
		return 0;
	}
	if (Global_1940311.f_10895 == iParam0)
	{
		return 0;
	}
	if (!func_28(0) && !func_73())
	{
		if ((((func_273(iParam0, 0) == 1 || func_111(iParam0, 1291597743)) || func_111(iParam0, -928967997)) || func_111(iParam0, 747873593)) || func_111(iParam0, -189374246))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_268()
{
	return Global_1940311.f_11;
}

int func_269(int iParam0, bool bParam1)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	if (func_192(0, 0, 1))
	{
		return 1;
	}
	if (iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_ARROWHEADS"))
	{
		if (!func_293(joaat("KIT_COLLECTOR_SPADE"), 1))
		{
			return 3;
		}
	}
	else if ((iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_JEWELRY") || iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_COINS")) || iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_HEIRLOOMS"))
	{
		if (!func_293(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
		{
			return 4;
		}
	}
	if (iParam0 == joaat("DOCUMENT_COLLECTOR_MAP_FOSSILS"))
	{
		if (!func_293(joaat("WEAPON_KIT_METAL_DETECTOR"), 1))
		{
			return 4;
		}
		else if (!func_488())
		{
			return 5;
		}
	}
	if (bParam1)
	{
		if (Global_17411.f_2966 > 0)
		{
			return 2;
		}
	}
	return 0;
}

int func_270(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_130(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_398(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_489(iParam0, 0);
	}
	if (func_294(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_210(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_490(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_210(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_491(iParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1904087.f_113[iVar1 /*96*/].f_1 == iParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_492(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
		}
	}
	return 0;
}

int func_272(int iParam0, bool bParam1)
{
	if (!bParam1 || func_257())
	{
		return func_343(iParam0, func_344(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

int func_273(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_155(iParam0, 0, 0) };
	return func_493(iParam0, &Var0, 0, bParam1);
}

int func_274(int iParam0)
{
	int iVar0;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_494(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	if (func_68() == 0)
	{
		iVar1 = 0;
		if (func_133(iParam0) == -1553950009)
		{
			iVar1 = func_495(iParam0, 1);
		}
		else
		{
			switch (Global_1915715.f_20241)
			{
				case 10:
					if (func_111(iParam0, 1010929620))
					{
						iVar1 = func_496(iParam0);
					}
					break;
				case 15:
					iVar1 = func_497(iParam0);
					break;
			}
		}
		if (iVar1 != 0 && ITEMDATABASE::_0xEF254F1A4C08B7E6(iVar1))
		{
			iVar0 = func_277(iVar1, joaat("CURRENCY_CASH"));
		}
		else
		{
			iVar0 = func_498(iParam0, 816454899, 1, 0);
		}
	}
	else
	{
		fVar2 = 1f;
		fVar3 = 1f;
		iVar4 = Global_1915715.f_20241.f_1;
		iVar5 = Global_1915715.f_20241;
		if (func_233(iVar4) && func_284(iVar5))
		{
			if (iVar5 == 10 || iVar5 == 15)
			{
				fVar3 = func_499(iVar4, iParam0);
			}
			fVar2 = func_500(&(Global_1915715.f_3[iVar5 /*447*/].f_36), iParam0);
		}
		fVar6 = (fVar2 + fVar3);
		if (fVar2 <= 0f)
		{
			return 0;
		}
		fVar6 = (fVar6 - IntToFloat(BUILTIN::FLOOR(fVar6)));
		iVar7 = func_498(iParam0, 816454899, 1, 0);
		iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar7) + (BUILTIN::TO_FLOAT(iVar7) * fVar6)));
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	return iVar0;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_FAT"):
			return -2059491326;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -2054061821;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return -2054061821;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -276530555;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -276530555;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return 1786362058;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return 1786362058;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1925097470;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -179784009;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 547453549;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -185670568;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -68530554;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1882667332;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -549843543;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 251523924;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 128689452;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -795926005;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return 1766735806;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1260301848;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 362062697;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -557557374;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 2145928766;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 2103138183;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 1176634776;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -48308129;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -234392368;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 489332694;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -972505668;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -1482721140;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1943206759;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -479944273;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -479944273;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return -1900245017;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 996737485;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -317318063;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -1179145184;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 49841414;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return 1853004765;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -613244561;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 998459086;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -1185304294;
		case joaat("PROVISION_FISH_PERCH"):
			return 1606770041;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 592705199;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 1001427351;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -2134757665;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 1296165525;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1389099466;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2032362047;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -600158588;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -348997013;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -855155400;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1743453709;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -1910050550;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1634769991;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 556997951;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 727714355;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -71380070;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -729503995;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 1786644138;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1466769106;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2079514583;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -409309194;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 2020893799;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 195131818;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1445465787;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1817406451;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1521192478;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -1517999735;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -2084641708;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1125378664;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 708951363;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 714611525;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1699761828;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -158140634;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 1272884971;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1552076723;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -334414989;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -352732121;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 117556329;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 469453151;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 621465116;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -523607607;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1662628197;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2084847747;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1656226638;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -1608525320;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return 1717540687;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1622797153;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -252750557;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 513869240;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -482152318;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -329015022;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 340488205;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 340488205;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 340488205;
		case joaat("PROVISION_BADGER_CLAW"):
			return 1228602887;
		case joaat("PROVISION_BEAR_CLAW"):
			return -1749311280;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return -770230168;
		case joaat("PROVISION_COUGAR_FANG"):
			return -1761903019;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -202898890;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -324172879;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 221026557;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 2055874470;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return 1383597214;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -695920779;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 1864240538;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 135251025;
		case joaat("PROVISION_CROW_FEATHER"):
			return -1380974753;
		case joaat("PROVISION_DUCK_FEATHER"):
			return 1918940015;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1606360364;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 949154977;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 1327585677;
		case joaat("PROVISION_HAWK_FEATHER"):
			return -424223638;
		case joaat("PROVISION_HERON_FEATHER"):
			return -817814915;
		case joaat("PROVISION_LOON_FEATHER"):
			return 1324361660;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return -1740875511;
		case joaat("PROVISION_OWL_FEATHER"):
			return -1114206422;
		case joaat("PROVISION_PARROT_FEATHER"):
			return 1129016218;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 74265533;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1687205102;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return -2112352640;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return -1179922595;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return -1777044066;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return -427774472;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -862133853;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -153093028;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1961151934;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -1429428300;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return 641025903;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 1014343203;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -977684174;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 753992067;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return 975102591;
		case joaat("PROVISION_WOLF_HEART"):
			return -742266708;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 1002050200;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 970250315;
		case joaat("PROVISION_BULL_HORNS"):
			return 913562114;
		case joaat("PROVISION_OXEN_HORN"):
			return 1415886451;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 1244458697;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 322165109;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -2083991045;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 709722347;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_PRISTINE"):
			return 2068018854;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_POOR"):
			return 2068018854;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE"):
			return 2068018854;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 144513283;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 144513283;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 144513283;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return -78603574;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return -78603574;
		case joaat("PROVISION_BADGER_PELT"):
			return -78603574;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return 956393401;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 956393401;
		case joaat("PROVISION_BEAR_FUR"):
			return 956393401;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1604538436;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1604538436;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -1604538436;
		case joaat("PROVISION_BEAVER_FUR"):
			return -1583116953;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1583116953;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -1583116953;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 1995645004;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 1995645004;
		case joaat("PROVISION_RAM_HIDE"):
			return 1995645004;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 439094686;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 439094686;
		case joaat("PROVISION_BOAR_SKIN"):
			return 439094686;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1069834732;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 1069834732;
		case joaat("PROVISION_BUCK_FUR"):
			return 1069834732;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -1508151163;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1508151163;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -1508151163;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 854098596;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 854098596;
		case joaat("PROVISION_BULL_HIDE"):
			return 854098596;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1467162138;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 1467162138;
		case joaat("PROVISION_COUGAR_FUR"):
			return 1467162138;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1322026128;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1322026128;
		case joaat("PROVISION_COW_HIDE"):
			return 1322026128;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 711086189;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 711086189;
		case joaat("PROVISION_COYOTE_FUR"):
			return 711086189;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -1334624683;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -1334624683;
		case joaat("PROVISION_DEER_HIDE"):
			return -1334624683;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 2118150058;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 2118150058;
		case joaat("PROVISION_ELK_FUR"):
			return 2118150058;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 1889550255;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 1889550255;
		case joaat("PROVISION_FOX_FUR"):
			return 1889550255;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1684561350;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1684561350;
		case joaat("PROVISION_GOAT_HAIR"):
			return 1684561350;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1763709491;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1763709491;
		case joaat("PROVISION_GILA_SKIN"):
			return 1763709491;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return 1828340319;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 1828340319;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 1828340319;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 344414895;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 344414895;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 344414895;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -1875079046;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return -1875079046;
		case joaat("PROVISION_MOOSE_FUR"):
			return -1875079046;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return -1273558742;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1273558742;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return -1273558742;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -839975185;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -839975185;
		case joaat("PROVISION_OXEN_HIDE"):
			return -839975185;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -401745683;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -401745683;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -401745683;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return -2096730839;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -2096730839;
		case joaat("PROVISION_PANTHER_FUR"):
			return -2096730839;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1871609823;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1871609823;
		case joaat("PROVISION_PIG_SKIN"):
			return 1871609823;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1028335922;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -1028335922;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return -1028335922;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 172698521;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 172698521;
		case joaat("PROVISION_RABBIT_PELT"):
			return 172698521;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 212330241;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 212330241;
		case joaat("PROVISION_RACCOON_FUR"):
			return 212330241;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -555536739;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -555536739;
		case joaat("PROVISION_RAT_FUR"):
			return -555536739;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -1896091463;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return -1896091463;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -1896091463;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 1854095100;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1854095100;
		case joaat("PROVISION_SKUNK_FUR"):
			return 1854095100;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 1690246594;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 1690246594;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 1690246594;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -885435577;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -885435577;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return -885435577;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -1923252111;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return -1923252111;
		case joaat("PROVISION_WOLF_FUR"):
			return -1923252111;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return -470304000;
		case joaat("PROVISION_EAGLE_TALON"):
			return -1074986502;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -1042059910;
		case joaat("PROVISION_BOAR_TUSK"):
			return 1234479911;
		case joaat("PROVISION_BAT_WING"):
			return -591134272;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 2092024647;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return -1902618794;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01"):
			return -330669109;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02"):
			return -578894284;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03"):
			return -1884018016;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01"):
			return 2049850175;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02"):
			return -1949114744;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03"):
			return -710315468;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01"):
			return 1242869591;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02"):
			return -1170632889;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03"):
			return -393778206;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01"):
			return 110440596;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02"):
			return -672378045;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03"):
			return -364251138;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01"):
			return 1729475114;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02"):
			return 963696353;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03"):
			return -2103416513;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01"):
			return 1438015400;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02"):
			return -1954723019;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03"):
			return 906666065;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01"):
			return 2129552482;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02"):
			return 559753509;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03"):
			return 865783200;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01"):
			return 393871699;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02"):
			return 683975656;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03"):
			return -99694979;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_ALLIGATOR_TOOTH"):
			return 1870161468;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BEAR_CLAW"):
			return -637307085;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BEAVER_TOOTH"):
			return -1156529631;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BISON_HORN"):
			return 1590950150;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BOAR_TUSK"):
			return 1619300873;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BUCK_ANTLER"):
			return -64299595;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_COUGAR_FANG"):
			return -1836028969;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_COYOTE_FANG"):
			return 85710394;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_ELK_ANTLER"):
			return -1655807359;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_FOX_CLAW"):
			return -1962643264;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_MOOSE_ANTLER"):
			return 232569057;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_PANTHER_EYE"):
			return 1199221978;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_RAM_HORN"):
			return -1797419634;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_01"):
			return 2065655105;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_02"):
			return 1825917101;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_03"):
			return 1593945350;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_01"):
			return -1224696681;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_02"):
			return -1575718189;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_03"):
			return 793611591;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01"):
			return 902257336;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02"):
			return -364133422;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03"):
			return -605083879;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_01"):
			return 732434481;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_02"):
			return -700390032;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_03"):
			return -932263476;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01"):
			return 751785819;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02"):
			return -1395009678;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03"):
			return -633621963;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01"):
			return -853038002;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02"):
			return -618837959;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03"):
			return -1297877177;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01"):
			return 1827754323;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02"):
			return 2134308318;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03"):
			return 1349228616;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01"):
			return 1303473658;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02"):
			return 394330510;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03"):
			return 1244718829;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_01"):
			return 115722091;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_02"):
			return -183098420;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_03"):
			return 2055286420;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01"):
			return -2037558216;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02"):
			return -1798573899;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03"):
			return 872099605;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_01"):
			return -874157148;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_02"):
			return 346258719;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_03"):
			return -427089681;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01"):
			return 839022204;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02"):
			return 999131546;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03"):
			return 1300573577;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01"):
			return 1144711679;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02"):
			return 878987858;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03"):
			return 708589058;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01"):
			return 700750583;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02"):
			return -1885772129;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03"):
			return 2094711074;
		default:
			break;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iParam0))
	{
		return 0;
	}
	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_0x3FAA928A79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == iParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_278()
{
	return Global_1146212.f_21645[64 /*209*/].f_208;
}

char* func_279(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_501(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_280(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_502(iParam0);
	}
	return func_503(iParam0, iParam1);
}

bool func_281(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2[1];
	int iVar4;
	int iVar5[3];
	int iVar9;

	if (func_504(iParam0, &uVar0))
	{
		return true;
	}
	if (!func_505(iParam0))
	{
		return false;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		func_506(Global_34, &uVar2, 1);
		iVar1 = func_507(uVar2[0]);
		if (iVar1 == iParam0)
		{
			if (ENTITY::_0x8DE41E9902E85756(uVar2[0]))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	iVar4 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4)) && PED::_IS_PED_CARRYING(iVar4))
	{
		func_506(iVar4, &iVar5, 3);
		iVar9 = 0;
		while (iVar9 < iVar5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5[iVar9]))
			{
			}
			else
			{
				iVar1 = func_462(&(iVar5[iVar9]));
				if (iVar1 == iParam0)
				{
					if (ENTITY::_0x8DE41E9902E85756(iVar5[iVar9]))
					{
						return true;
					}
				}
			}
			iVar9++;
		}
	}
	return false;
}

char* func_282(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}
	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

bool func_283()
{
	int iVar0;

	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (GANG::_0xD6F6ACF4392187FB(iVar0))
	{
		if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (!func_508(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

bool func_284(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_285(int iParam0)
{
	return iParam0 != 0;
}

int func_286(int iParam0)
{
	return func_277(iParam0, joaat("CURRENCY_CASH"));
}

int func_287(int iParam0)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	if (!func_292(iParam0, -489628648, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_293(Var0[iVar32 /*2*/], 1))
		{
			iVar33++;
		}
		iVar34++;
		iVar32++;
	}
	if (iVar33 >= iVar34)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar33, iVar34));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_10916, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar33, iVar34));
	}
	return 1;
}

int func_288(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1940311.f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311.f_10931;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_289(var uParam0)
{
	func_483(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_484(), joaat("SATCHEL_PROMPT_OPEN"));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_509(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

int func_290(int iParam0)
{
	return iParam0;
}

int func_291(int iParam0, int iParam1)
{
	if (!func_510(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_292(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_511(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_512(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_293(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_130(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_513(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_514(iParam0))
			{
				return true;
			}
			break;
	}
	return func_270(iParam0, 0, 0, 0) >= iParam1;
}

int func_294(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_295(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_515(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_294(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_158(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_516(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_517(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_518(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_394(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_210(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_296(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_515(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_382(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_158(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_68() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_518(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_394(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_210(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_297(int iParam0)
{
	if (func_111(iParam0, 1573112293))
	{
		return func_519(iParam0);
	}
	if (func_520(iParam0))
	{
		return func_63();
	}
	switch (func_133(iParam0))
	{
		case -77448735:
			if (func_521(iParam0))
			{
				return func_519(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_519(iParam0);
		case -1520388130:
		case 1802292908:
			return func_46();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_200();
		case -525676072:
			return func_200();
		case 1779021115:
			if (iParam0 == joaat("WEAPON_KIT_CAMERA") || iParam0 == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
			{
				return func_56();
			}
			return func_57();
		case -1823706425:
			if (iParam0 == joaat("KIT_CAMP_WILDERNESS"))
			{
				return func_59();
			}
			else
			{
				return func_58();
			}
			break;
		case -854348463:
			return func_55();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_522();
		default:
			if (func_105(iParam0, 0))
			{
				if (func_111(iParam0, 1919582297))
				{
					return func_62();
				}
				else if (iParam0 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam0 == -1448210800)
				{
					return func_60();
				}
				else if (iParam0 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_49();
				}
				else if (func_111(iParam0, 1147021565))
				{
					return func_36();
				}
			}
			return func_34();
	}
	return func_34();
}

int func_298()
{
	return Global_1915715.f_22504.f_5;
}

char* func_299()
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = func_298();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_365(0) };
			if (!func_366(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_523(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_524(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_526(func_525(iVar3, 461218520));
	}
	return "";
}

void func_300(int iParam0)
{
	Global_1915715.f_22504.f_5 = iParam0;
}

int func_301(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_527(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_302(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_528(iParam0))
	{
		return 1;
	}
	if (!func_529(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392.f_48[iParam0 /*21*/].f_17)
	{
		if (bParam2 || Global_1211392.f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_530(iParam0))
	{
		return 3;
	}
	if (func_531(iParam0) && !func_415())
	{
		return 4;
	}
	return 0;
}

bool func_303(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_10(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
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
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
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
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
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
				return true;
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
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

bool func_304()
{
	return Global_1952637.f_1675.f_1[1 /*3*/].f_1 == joaat("POMADE");
}

bool func_305(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_532(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_306(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_HANDFULL_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_111(iParam0, 1573112293))
		{
			func_534(func_264(iParam0), 1, 1);
		}
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_307(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_308(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_309(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_310(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_LARGE_BOTTLE_COMBAT_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_311(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_313(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_314(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_533())
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
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_315(int iParam0)
{
	int iVar0;

	iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("USE_STIMULANT_INJECTION_QUICK_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_316(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGARETTE_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_317(int iParam0)
{
	int iVar0;

	iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_LEFT_HAND");
			break;
		case 1:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIGHT_HAND");
			break;
		case 3:
			iVar0 = joaat("QUICK_SMOKE_CIGAR_RIFLE");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_535(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_318(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_535(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_536(iParam0);
			func_169(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

void func_319(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_LEFT_HAND_QUICK");
			break;
		case 1:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_UNARMED_QUICK");
			break;
		case 3:
			iVar0 = joaat("USE_TONIC_POTENT_SATCHEL_RIFLE_QUICK");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_535(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_536(iParam0);
			func_169(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_536(iParam0);
		func_169(iParam0, 1, 0, 562618531);
	}
}

bool func_320(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_321(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939493[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_322(int iParam0)
{
	if (func_320(iParam0, 1))
	{
		func_537(1);
	}
}

int func_323(int iParam0)
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
	return -1;
}

void func_324(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_325(struct<4> Param0)
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
		case 23:
			if (Global_1952637.f_918 >= 25)
			{
				return;
			}
			if (func_538(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_918)
				{
					iVar1 = ((Global_1952637.f_923 + iVar0) % 25);
					if ((Global_1952637.f_736[iVar1 /*4*/] == Param0 && Global_1952637.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_539(Param0);
			Global_1952637.f_736[Global_1952637.f_924 /*4*/] = { Param0 };
			Global_1952637.f_918++;
			Global_1952637.f_924 = (Global_1952637.f_924 + 1 % 25);
			func_324(8);
			break;
		case 24:
		case 25:
			if (Global_1952637.f_919 >= 25)
			{
				return;
			}
			if (func_538(Param0))
			{
				return;
			}
			func_539(Param0);
			Global_1952637.f_635[Global_1952637.f_919 /*4*/] = { Param0 };
			Global_1952637.f_919++;
			func_324(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637.f_920 >= 20)
			{
				return;
			}
			if (func_538(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_920)
				{
					iVar1 = ((Global_1952637.f_921 + iVar0) % 20);
					if ((Global_1952637.f_837[iVar1 /*4*/] == Param0 && Global_1952637.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_539(Param0);
			Global_1952637.f_837[Global_1952637.f_922 /*4*/] = { Param0 };
			Global_1952637.f_920++;
			Global_1952637.f_922 = (Global_1952637.f_922 + 1 % 20);
			func_324(8);
			break;
			break;
	}
}

bool func_326(int iParam0)
{
	if (func_540())
	{
		return false;
	}
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (!func_293(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_327(int iParam0)
{
	return func_541(iParam0);
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_542(iParam0);
	if (func_133(iParam0) == -525676072 || func_111(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_543(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_544();
			}
			else
			{
				iVar0 = func_545();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_546();
		}
		else
		{
			iVar0 = func_547();
		}
	}
	else if (func_548(&iVar2))
	{
		if (func_111(iVar2, -1303648999) || func_133(iVar2) == -525676072)
		{
			iVar0 = func_544();
		}
		else
		{
			iVar0 = func_545();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_546();
	}
	else
	{
		iVar0 = func_547();
	}
	if (iVar0 != 0)
	{
		Global_1952637.f_3483 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_329(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_330()
{
	Global_1952637.f_3467 = 0;
	Global_1952637.f_3467.f_1 = 0;
	Global_1952637.f_3467.f_8 = 0;
	Global_1952637.f_3467.f_2 = 0;
	Global_1952637.f_3467.f_3[0] = 0;
	Global_1952637.f_3467.f_3[1] = 0;
	Global_1952637.f_3467.f_3[2] = 0;
	Global_1952637.f_3467.f_3[3] = 0;
	Global_1952637.f_3467.f_9 = 0;
	Global_1952637.f_3467.f_10 = 0;
	Global_1952637.f_3467.f_11 = 0;
	if (Global_1952637.f_3467.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1952637.f_3467.f_13);
	}
	Global_1952637.f_3467.f_12 = 0;
	func_549(32768);
	func_550(1108822547, 8, 6);
}

bool func_331(int iParam0, bool bParam1)
{
	return func_551(iParam0, 0) < func_552(iParam0, bParam1);
}

void func_332(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_133(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_111(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_28), Global_1952637.f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_27), Global_1952637.f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_29), Global_1952637.f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_111(iParam0, 160827531))
			{
				bVar1 = func_553(iParam0, &(Global_1952637.f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_554();
	if (func_41(iVar0) || (iVar0 != -999503751 && func_111(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_210(bParam5), iParam0, 0);
	}
	func_140(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_555(1, iParam0);
	}
	if (bParam2)
	{
		func_556(0, 0);
	}
}

int func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_557();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

void func_334(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_558(iParam0, iParam1))
	{
		func_559(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_335(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_560(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_336(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
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

bool func_337(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_561();
	if (iParam2 == 39)
	{
		Var0 = { func_155(iParam0, 1, 0) };
		iParam2 = func_336(func_335(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_329(32768) && iParam2 == 10)
	{
		func_562(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_339(iParam0, 1))
	{
		func_563(&(Global_1952637.f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_564(iParam2);
	}
	func_565(iParam2, iVar5);
	func_566(&(Global_1952637.f_1556.f_1[iParam2 /*3*/]), 4, 6);
	func_566(&(Global_1952637.f_1675.f_1[iParam2 /*3*/]), 4, 6);
	func_567(&(Global_1952637.f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1;
	}
	Global_1952637.f_1556.f_1[iParam2 /*3*/] = iParam0;
	Global_1952637.f_1556.f_1[iParam2 /*3*/].f_1 = func_568(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637.f_2897)
		{
			if (Global_1952637.f_2897.f_2[iVar6 /*2*/] >= 0 && Global_1952637.f_2897.f_2[iVar6 /*2*/] < 39)
			{
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1952637.f_2764[Global_1952637.f_2897.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_550(func_560(Global_1952637.f_2897.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_338(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_569(&(Global_1952637.f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_339(int iParam0, bool bParam1)
{
	if (!func_105(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_111(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_340(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_155(iParam0, bParam2, 0) };
	if (func_339(iParam0, 0))
	{
		iVar9 = func_570(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_155(iVar9, bParam2, 0) };
			Var0 = { func_156(iVar9, Var4, Var4.f_4, bParam2) };
			return func_157(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_156(iParam0, Var4, Var4.f_4, bParam2) };
	return func_157(Var0, iParam1, bParam2);
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_336(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1952637.f_1675.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/] || Global_1952637.f_1556.f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_342(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_343(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_294(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_156(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_210(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_210(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

struct<4> func_344(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_210(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_156(joaat("CHARACTER"), func_385(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_156(joaat("CHARACTER"), func_385(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_156(joaat("CHARACTER"), func_385(), -1591664384, bParam0);
}

bool func_345(int iParam0)
{
	int iVar0;

	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_571(iVar0))
	{
		return true;
	}
	return false;
}

int func_346()
{
	return Global_39.f_281.f_3222;
}

bool func_347()
{
	return Global_1915715.f_22504.f_1;
}

bool func_348(int iParam0)
{
	return (Global_1051439.f_3628 && iParam0) != 0;
}

void func_349(int iParam0)
{
	Global_1051439.f_3628 = (Global_1051439.f_3628 - (Global_1051439.f_3628 && iParam0));
}

void func_350(int iParam0)
{
	Global_1051439.f_3629 = iParam0;
}

bool func_351()
{
	return Global_1915715.f_22504;
}

void func_352()
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HANDHELDCATALOGUE"));
}

bool func_353()
{
	return func_348(4);
}

int func_354(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_572())
	{
		return 3;
	}
	if ((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PAUSE_MENU")) > 0 && Global_1051439.f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715.f_20638)
	{
		return 10;
	}
	if (Global_1051439.f_3718 != 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 12;
	}
	if ((func_184(1106247680 /* Float: 30f */, 0) || PED::_IS_PED_HOGTIED(Global_34)) || PED::_IS_PED_HOGTYING(Global_34))
	{
		return 13;
	}
	if (PED::_0x1D46B417F926D34D(Global_34) || PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			switch (iVar2)
			{
				case joaat("BREACH_CANNON"):
				case joaat("GATLING_GUN"):
				case joaat("GATLINGMAXIM02"):
				case joaat("HOTCHKISS_CANNON"):
					return 14;
			}
		}
		return 11;
	}
	if (TASK::_0x038B1F1674F0E242(Global_34) && !Global_1915715.f_22504.f_1)
	{
		return 16;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 17;
	}
	if (TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 18;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		iVar3 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_34);
		if ((iVar3 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar3 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")) && iVar3 != joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC"))
		{
			return 19;
		}
	}
	if (func_573(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108365.f_935.f_28 != -1 && Global_1108365.f_935.f_28 != 6) && Global_1108365.f_935.f_28 != 8)
	{
		if (func_574(Global_1108365.f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (PED::_0x2942457417A5FD24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887.f_106.f_75 >= 11 && Global_1572887.f_106.f_75 < 15)
	{
		return 42;
	}
	if (((PED::IS_PED_FALLING(Global_34) || PED::IS_PED_CLIMBING(Global_34)) || PED::_IS_PED_SLIDING(Global_34)) || PED::IS_PED_SWIMMING(Global_34))
	{
		return 15;
	}
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		return 21;
	}
	if (func_575())
	{
		return 43;
	}
	return -1;
}

void func_355(int iParam0)
{
	int iVar0;

	if (!func_353())
	{
		func_576(1);
	}
	Global_1051439.f_3630 = iParam0;
	iVar0 = func_354(1);
	if (iVar0 != -1)
	{
		func_300(iVar0);
		func_577(0);
	}
	else
	{
		func_577(1);
	}
}

bool func_356()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_3;
}

bool func_357(int iParam0)
{
	return func_82(Global_1134390[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_358()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_359()
{
	return !func_357(2);
}

bool func_360(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

void func_361()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

bool func_362(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_579(bParam2, func_578(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_363(int iParam0)
{
	Global_1896738.f_390 = iParam0;
}

int func_364(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

struct<2> func_365(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_366(struct<2> Param0)
{
	if (!func_580(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_581(Param0))
	{
		return false;
	}
	return true;
}

int func_367(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339.f_1[iVar1 /*26*/].f_1 != -1 && func_582(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1196898.f_78[iVar1 /*20*/] >= 2)
					{
						return Global_1196339.f_1[iVar1 /*26*/].f_1;
					}
				}
				else if (Global_1196898.f_78[iVar1 /*20*/] >= 5)
				{
					return Global_1196339.f_1[iVar1 /*26*/].f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_368(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1196898.f_1[iParam0 /*4*/];
}

var func_369(int iParam0, int iParam1)
{
	return func_583(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_370(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_584(&(Global_1071686.f_23044), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_371(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_372(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_585(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_586(iParam0))
	{
		return false;
	}
	if (func_587(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_588(iParam0, 1)) || func_589(32768))
	{
		if (!func_588(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_590())
	{
		return false;
	}
	return true;
}

void func_373(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

void func_374()
{
	Global_1913694.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913694.f_1581 = 1;
}

void func_375(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1138048[iVar0 /*8*/].f_7 = (Global_1138048[iVar0 /*8*/].f_7 || iParam0);
}

struct<4> func_376(bool bParam0)
{
	int iVar0;

	iVar0 = func_210(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_156(923904168, func_344(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_156(923904168, func_344(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_156(923904168, func_344(bParam0), -740156546, 0);
}

bool func_377(int iParam0, bool bParam1)
{
	if (func_133(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_591();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_378(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_343(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_379(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_592(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_380(bool bParam0)
{
	int iVar0;

	iVar0 = func_210(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_156(271701509, func_344(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_156(271701509, func_344(bParam0), 12999093, 0);
}

bool func_381(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_133(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_593(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_382(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_594(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_383(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_382(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_130(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_595(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_596(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_597(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_598(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_599(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_600(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_601(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_518(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_384(int iParam0)
{
	return func_130(iParam0) == joaat("WEAPON");
}

struct<4> func_385()
{
	struct<4> Var0;

	return Var0;
}

void func_386(int iParam0, int iParam1, struct<4> Param2)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	if (PED::IS_PED_ON_MOUNT(Global_34) && !func_206(Global_34))
	{
		return;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return;
	}
	else if (PED::IS_PED_RELOADING(Global_34))
	{
		return;
	}
	if (iParam0 == 1)
	{
		iVar0 = iParam1;
		if (!Global_1940144.f_9 && !PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), iVar0, &Param2, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1940144.f_8 = 1;
			Global_1940144.f_66 = { Param2 };
		}
	}
}

int func_387(int iParam0)
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

int func_388(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

bool func_389()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

struct<2> func_390(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_391(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_392(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_158(0) || func_389())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_603(iParam1, func_602(iParam2), &Var1, 1);
		if (func_604(iVar0, &Var1, 0, 0))
		{
		}
		func_152(501, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_602(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_105(uVar13[iVar29], 0) && !func_111(uVar13[iVar29], 1286414894)) && !uVar13[iVar29] == iParam2)
		{
			func_605(uVar13[iVar29], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_66(func_158(0), 0, 0);
	return iVar30;
}

int func_393(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<14> Var0;
	struct<16> Var14;
	int iVar30;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return -1;
	}
	if (func_515(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_382(*uParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (Var0.f_13)
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_601(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_518(joaat("USE"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31.f_16 = -1;
		Var31 = 1;
		func_394(iVar30, Var31);
	}
	return iVar30;
}

void func_394(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_395(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (func_606(iParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_606(iParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_607(iVar0, iParam0))
		{
			return true;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return false;
	}
	if (func_608() == 1)
	{
		func_609(iVar0);
		func_610(iParam0);
		func_611(1);
	}
	else
	{
		return false;
	}
	return true;
}

void func_396(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_397(int iParam0)
{
	return func_130(iParam0) == joaat("CONSUMABLE");
}

int func_398(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_130(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_111(iParam0, 1399091007))
	{
		func_612(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_399(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_105(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_613() || bParam6)
	{
		func_614(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_615(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_615(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_616(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_130(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_133(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_617(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_111(iParam0, 474910316))
	{
		sVar17 = func_618(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_111(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_445(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	iVar18 = func_274(iParam0);
	if ((func_619(iVar12) && func_111(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_442(iParam0);
	}
	else if (func_130(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_620(iParam0);
		if (func_105(iVar19, 0))
		{
			iVar18 = func_274(iVar19);
		}
	}
	if (func_621(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_622(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_501(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_623(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_624(iParam0, &cVar22))
		{
			sVar21 = func_279(func_625(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_626(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_400(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_105(iParam0, 0))
	{
		return Var0;
	}
	if (func_111(iParam0, -305066475))
	{
		if (func_68() == -1)
		{
			if (func_111(iParam0, -537818634))
			{
				return func_627(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_627(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_111(iParam0, -537818634))
	{
		return func_627(joaat("MEDICINE_ITEMS"));
	}
	if (func_111(iParam0, 2084895747))
	{
		return func_627(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_401(int iParam0, int iParam1, bool bParam2, int iParam3)
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
		return false;
	}
	Var0 = { func_424(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_628(&Var0, func_376(0));
	}
	if (!func_425(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
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
			if (!func_228(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_296(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_242(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

int func_402(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_162(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_629(iVar0, iParam0);
		if (iVar1 > 0)
		{
			if (iParam1 < iVar1)
			{
				iVar1 = iParam1;
			}
			iParam1 = (iParam1 - iVar1);
			func_630(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
			iParam1 = (iParam1 + iVar1);
		}
	}
	iParam1 = func_631(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_403(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_270(iParam0, 0, 0, 0);
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
		if (!func_169(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_632(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_633(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_632(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_132("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_404(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_344(bParam4) };
	Var0.f_4 = -2015960939;
	Var5 = { func_156(iParam0, Var0, Var0.f_4, bParam4) };
	return func_296(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_405()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1248240[iVar0 /*683*/].f_632 != 0)
		{
			iVar1 = func_634(Global_1248240[iVar0 /*683*/].f_632, 1);
			Global_1248240[iVar0 /*683*/].f_631 = iVar1;
		}
		iVar0++;
	}
}

int func_406(int iParam0, int iParam1)
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

int func_407(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_635(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

bool func_408(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_409(int iParam0)
{
	return (Global_1915692.f_22 && iParam0) != 0;
}

bool func_410()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_ADVANCED_CAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_411()
{
	return (Global_1893587 & 1 != 0 && func_636() != -1);
}

int func_412()
{
	return -1;
}

int func_413(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_414()
{
	return func_366(Global_1051213);
}

bool func_415()
{
	return func_637(func_365(0));
}

bool func_416(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_417(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_418(int iParam0)
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

void func_419(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_638();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
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
		return true;
	}
	return false;
}

bool func_421(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<10> Var0;
	int iVar14;

	if ((((Param0.f_9 != 1084182731 && Param0.f_9 != -140655024) && Param0.f_9 != -1162387149) && Param0.f_9 != 1784584921) && Param0.f_9 != -511891179)
	{
		Var0.f_9 = -1591664384;
		if (!func_382(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_111(Var0.f_4, 1093867179))
		{
			return false;
		}
	}
	iVar14 = func_130(Param0.f_4);
	if (((iVar14 == joaat("WEAPON") && !WEAPON::_IS_WEAPON_BINOCULARS(Param0.f_4)) && Param0.f_4 != joaat("WEAPON_KIT_CAMERA")) && Param0.f_4 != joaat("WEAPON_KIT_CAMERA_ADVANCED"))
	{
		return false;
	}
	switch (iVar14)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (func_133(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == joaat("KIT_MASK_GREY_CLOTH"))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				case 1477698721:
					if (func_111(Param0.f_4, 160827531))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_133(Param0.f_4) == -829303394)
	{
		return false;
	}
	return true;
}

void func_422(int iParam0, int iParam1, bool bParam2)
{
	if (func_105(iParam1, 0))
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
}

bool func_423(int iParam0)
{
	return func_639(func_133(iParam0), iParam0);
}

struct<14> func_424(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

bool func_425(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_210(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_426(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_427(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_428(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_429(int iParam0, bool bParam1)
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
	func_640(iParam0, Var0, bParam1, 0);
}

void func_430(int iParam0, bool bParam1)
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
	Var0.f_4 = -1719060085;
	func_640(iParam0, Var0, bParam1, 0);
}

void func_431()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_432(int iParam0, var uParam1)
{
	if (!func_641(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915666[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

void func_433()
{
	int iVar0;

	iVar0 = func_642();
	if (func_642() == 822208792)
	{
		iVar0 = 0;
	}
	if (func_28(0))
	{
		if (func_248() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (func_73())
	{
		iVar0 = -2074770370;
	}
	func_76(iVar0);
}

void func_434(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0, Global_1940311.f_10867);
	bVar1 = func_236(iParam1);
	iVar2 = iParam1;
	uVar3 = uVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940311.f_10908, Global_1940311.f_10867);
		Global_1940311.f_10868 = Global_1940311.f_10867;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, uVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1940311.f_10869[Global_1940311.f_10867] = iParam1;
	Global_1940311.f_10867++;
}

void func_435(var uParam0)
{
	if (func_86())
	{
		func_434(uParam0, -283002878, "Horse", joaat("SATCHEL_NAV_HORSE"));
	}
}

void func_436(var uParam0)
{
	if (func_100())
	{
		func_434(uParam0, -889932290, "Wagon", joaat("SATCHEL_NAV_HORSE"));
	}
}

void func_437(var uParam0)
{
	if (func_28(0))
	{
		if (func_248() == 2)
		{
			func_434(uParam0, -693134279, "Send", joaat("SATCHEL_NAV_SEND"));
		}
		else
		{
			func_434(uParam0, -182626652, "Sell", joaat("SATCHEL_NAV_SELL"));
		}
	}
	else if (func_73())
	{
		func_434(uParam0, -2074770370, "Donations", joaat("SATCHEL_NAV_DONATE"));
	}
}

bool func_438(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637.f_3334.f_26)
	{
		if (iParam0 == Global_1952637.f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_439(bool bParam0)
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}
}

int func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;

	if (!func_111(iParam0, 1989861793))
	{
		return 0;
	}
	iVar0 = func_495(iParam0, 0);
	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iVar0))
	{
		return 0;
	}
	iVar5 = ITEMDATABASE::_0x3FAA928A79591761(iVar0);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iVar0, iVar4, &iVar1))
		{
		}
		else if (func_111(iVar1, 1989861793))
		{
			return iVar1;
		}
		iVar4++;
	}
	return 0;
}

bool func_441(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_285(iVar0))
	{
		return false;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("COINS"), 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("WILD_FLOWERS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("FAMILY_HEIRLOOMS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("ARROWHEADS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("ANTIQUE_BOTTLES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("BIRD_EGGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_RINGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_BRACELETS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_NECKLACES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("LOST_JEWELRY_EARRINGS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_CUPS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_PENTACLES"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_SWORDS"), 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(joaat("TAROT_CARDS_WANDS"), 0))
	{
		return true;
	}
	return false;
}

int func_442(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_443(int iParam0)
{
	int iVar0;

	if (func_27())
	{
		return func_457(iParam0, -2074770370, 0);
	}
	else if (func_24())
	{
		if (func_111(iParam0, 96549393))
		{
			return false;
		}
		if (func_111(iParam0, -111938901) || func_10(iParam0, -949239683) == -1337515701)
		{
			return true;
		}
		if (func_111(iParam0, -121341956))
		{
			return true;
		}
		return false;
	}
	else if (func_25())
	{
		if (((((((func_111(iParam0, 1765172170) || func_111(iParam0, -458578204)) || func_111(iParam0, -1919515848)) || func_111(iParam0, 1443104131)) || func_111(iParam0, 1490540191)) || func_111(iParam0, 1573112293)) || func_111(iParam0, 1939071949)) || func_111(iParam0, 845883585))
		{
			return false;
		}
		if (((!func_111(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) && !func_111(iParam0, -839724752)) && !func_111(iParam0, -1457797660)) && !func_111(iParam0, 1286414894))
		{
			return false;
		}
		if (func_643(iParam0) == 0)
		{
			return false;
		}
	}
	if (func_28(0))
	{
		if (Global_1915715.f_20241 == 2)
		{
			return true;
		}
		else if (!func_280(iParam0, Global_1915715.f_20241.f_1))
		{
			return false;
		}
		else if (Global_1915715.f_20241 == 29)
		{
			if (func_281(iParam0))
			{
				return false;
			}
		}
		else if (Global_1915715.f_20241 == 10)
		{
		}
	}
	if (func_111(iParam0, 949916894) || iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		if (!func_423(iParam0))
		{
			return false;
		}
	}
	if (INVENTORY::_0x3D10D7179D7034AF(func_210(0), iParam0, func_28(0)))
	{
		return false;
	}
	if ((func_68() == 0 && func_111(iParam0, -1551542038)) && !func_359())
	{
		return false;
	}
	if (func_111(iParam0, -1242251796))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) && PED::_GET_SEAT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return false;
		}
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 != PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_444(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return func_133(iParam0) == 1802292908;
}

bool func_445(int iParam0)
{
	if (func_111(iParam0, -189374246))
	{
		if (((func_644(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_644(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_644(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_644(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_111(iParam0, -753854379) || func_111(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_446(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

Vector3 func_447(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_448(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_449(int iParam0)
{
	int iVar0;

	iVar0 = func_446(iParam0);
	switch (iVar0)
	{
		case 10:
			return 10f;
		case 29:
			return 70f;
		case 2:
			return 75f;
		case 15:
			if (iParam0 == 63)
			{
				return 40f;
			}
			else
			{
				return 25f;
			}
			break;
	}
	return 10f;
}

float func_450(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_451(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_452(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0 /*460*/].f_9;
}

int func_453(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_39.f_281.f_1[iParam0 /*460*/].f_398;
}

float func_454(int iParam0)
{
	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_39.f_281.f_1[iParam0 /*460*/].f_398.f_1;
}

int func_455(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

float func_456(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_457(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_28(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_105(iParam0, 0) || iParam0 == joaat("CUSTOM_SATCHEL")) || iParam0 == joaat("KIT_WARDROBE"))
		{
			return false;
		}
	}
	if (!bVar0 && func_645(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_28(0))
			{
				if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return true;
				}
				if (((((((((((func_457(iParam0, -1559802791, 1) || func_457(iParam0, -1268291907, 1)) || func_457(iParam0, -96974025, 1)) || func_457(iParam0, -1666604090, 1)) || func_457(iParam0, 1561961676, 1)) || func_457(iParam0, -156634416, 1)) || func_457(iParam0, 1061777683, 1)) || func_457(iParam0, -2074770370, 1)) || func_457(iParam0, -693134279, 1)) || func_457(iParam0, -182626652, 1)) || func_457(iParam0, 1783698482, 1)) || func_646(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_111(iParam0, 1422457563);
		case -1268291907:
			return (func_111(iParam0, 1360707454) && !func_111(iParam0, 474910316));
		case -96974025:
			return (func_111(iParam0, 1009210113) && !func_111(iParam0, 474910316));
		case -1666604090:
			return (func_111(iParam0, -193035453) && !func_111(iParam0, 474910316));
		case 1561961676:
			if (func_111(iParam0, -111938901) && !func_111(iParam0, 474910316))
			{
				return true;
			}
			else if (func_111(iParam0, -189374246) || func_111(iParam0, -1257428961))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -156634416:
			return (func_111(iParam0, -928967997) && !func_111(iParam0, 474910316));
		case 1061777683:
			return (func_111(iParam0, 747873593) && !func_111(iParam0, 474910316));
		case 1783698482:
			return ((func_111(iParam0, 474910316) && !func_28(0)) && func_647(iParam0));
		case -2074770370:
			if (Global_1940311.f_36 == 1 || Global_1940311.f_36 == 2)
			{
				return func_648(iParam0, iParam1);
			}
			else if (func_10(iParam0, -949239683) == -1337515701 && iParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return true;
			}
			else
			{
				return func_111(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_616(iParam0, 8388608);
		case -182626652:
			if (func_280(iParam0, Global_1915715.f_20241.f_1))
			{
				func_422(func_210(0), iParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

int func_458(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_649(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_210(bParam1), iParam0, iParam3);
}

bool func_459(int iParam0)
{
	return iParam0 != 0;
}

void func_460(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1940311.f_38.f_2[iParam0 /*2*/].f_1 = bParam1;
	}
}

void func_461(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1940311.f_38.f_1;
	func_650(iVar0, iParam0);
	func_460(iVar0, bParam1);
	if (func_73())
	{
		if (!func_651(iVar0))
		{
			func_652(iVar0);
			return;
		}
	}
	func_653(iParam0);
}

int func_462(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_654(iVar0);
}

int func_463(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_654(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

void func_464(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	struct<14> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<14> Var20;
	int iVar34;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
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
	Var2.f_1 = 1084182731;
	iVar16 = -1;
	iVar19 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	Var20.f_9 = -1591664384;
	if (func_655(iVar19, &Var2, &iVar16, &iVar17))
	{
		iVar18 = 0;
		iVar18 = 0;
		while (iVar18 < iVar17)
		{
			if (func_228(&Var20, iVar18, iVar16, iVar17))
			{
				if (func_105(Var20.f_4, 0) && Var20.f_4 != joaat("CUSTOM_SATCHEL"))
				{
					if (bParam3 && func_491(Var20.f_4))
					{
						bVar1 = false;
						Var20.f_11 = 0;
						iVar34 = 0;
						while (iVar34 < 3)
						{
							if (!MISC::IS_BIT_SET(iVar0, iVar34))
							{
								if (Global_1904087.f_113[iVar34 /*96*/].f_1 == Var20.f_4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_938.f_245[iVar34 /*4*/].f_3))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1291734.f_938.f_245[iVar34 /*4*/].f_3))
										{
											*iParam1++;
											Var20.f_11++;
											bVar1 = true;
											MISC::SET_BIT(&iVar0, iVar34);
										}
									}
								}
							}
							iVar34++;
						}
						if ((bVar1 && bParam2) && func_231(Var20.f_4))
						{
							func_256(Var20, 1);
						}
					}
					else
					{
						*iParam1++;
						if (bParam2 && func_231(Var20.f_4))
						{
							func_256(Var20, 1);
						}
					}
				}
			}
			iVar18++;
		}
		func_242(iVar16);
	}
}

int func_465(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	if (!func_285(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (func_292(iParam0, -489628648, &Var2, &iVar1, 0, 1))
	{
		iVar0 = 99;
		iVar33 = 0;
		while (iVar33 < iVar1)
		{
			if (Var2[iVar33 /*2*/] == 0)
			{
			}
			else
			{
				iVar34 = func_270(Var2[iVar33 /*2*/], 0, 0, 0);
				if (iVar34 < iVar0)
				{
					iVar0 = iVar34;
				}
				iVar33++;
			}
		}
	}
	if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_466(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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

void func_467(int iParam0, char* sParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	var uVar1;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940311.f_10905, Global_1940311.f_10899);
	uVar1 = uVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar1, sParam1, iParam2->f_1, *iParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1940311.f_10905, Global_1940311.f_10899, iParam0);
	Global_1940311.f_10899++;
}

bool func_468(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_292(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715.f_20638)
	{
		iVar34 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH"))
			{
				if (!bParam4 && !func_656(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_657(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_658(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_659(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_270(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_469(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if ((*uParam1)[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_470(var uParam0)
{
}

void func_471(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_660((*uParam0)[iVar0], func_173(func_162(0), (*uParam0)[iVar0], 0, 1, 1), 0, 0);
		iVar0++;
	}
}

bool func_472()
{
	if (func_224())
	{
		if (Global_1915715.f_20241 == 29)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_473(var uParam0)
{
	vector3 vVar0;

	if (!func_661(uParam0, &vVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		vVar0.f_1 = joaat("INVENTORY_ITEMS");
		vVar0.x = joaat("_PLACEHOLDER");
	}
	return vVar0;
}

int func_474(int iParam0)
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

void func_475(var uParam0)
{
	if ((uParam0->f_4 == Global_1940311.f_10896 && func_86()) && func_173(func_162(0), Global_1940311.f_10896, 0, 1, 1) > 0)
	{
		uParam0->f_11++;
	}
}

bool func_476(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_477()
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
	func_662(&Var0, 0, 1, 0);
}

bool func_478(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return true;
		default:
			return false;
	}
	return false;
}

bool func_479(int iParam0)
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}
	return false;
}

int func_480(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

bool func_481(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_482(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_481(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

void func_483(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10924, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10923, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10920, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_10921, !bParam0);
}

var func_484()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_10924))
	{
		return Global_1940311.f_10922;
	}
	return Global_1940311.f_10919;
}

void func_485(int iParam0)
{
	if (func_133(iParam0) == -854348463)
	{
		func_483(0);
	}
	else if ((((((((((((((((((func_111(iParam0, 1101678925) || func_111(iParam0, 1686880204)) || func_111(iParam0, 173360570)) || func_111(iParam0, -121341956)) || func_111(iParam0, 2000026003)) || func_111(iParam0, -1540973036)) || func_111(iParam0, 1192444843)) || func_111(iParam0, -189374246)) || func_10(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEYCHAIN")) || (func_505(iParam0) && !func_111(iParam0, 316290104))) || ((func_68() == 0 && func_161(iParam0, 1, 0)) && !func_111(iParam0, 316290104))) || iParam0 == joaat("CONSUMABLE_COFFEE_GNDS_REG")) || iParam0 == joaat("KIT_GUN_OIL")) || iParam0 == joaat("CONSUMABLE_LOCK_BREAKER")) || iParam0 == joaat("KIT_COLLECTOR_SPADE")) || iParam0 == joaat("KIT_PLACED_EXPLOSIVES")) || iParam0 == joaat("PROVISION_MOONSHINE_POISON")) || iParam0 == joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER")) || iParam0 == joaat("KIT_ROLE_NATURALIST_SAMPLE_KIT"))
	{
		func_262();
	}
	else if ((func_133(iParam0) == 1802292908 && func_10(iParam0, -949239683) == 0) && !iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		func_262();
	}
	else if (func_505(iParam0))
	{
		if (func_111(iParam0, 316290104))
		{
			func_483(1);
		}
		else
		{
			func_483(1);
		}
	}
	else if (func_111(iParam0, 316290104) || func_161(iParam0, 1, 0))
	{
		func_483(1);
	}
	else
	{
		func_483(0);
	}
}

int func_486(int iParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_10924))
	{
		if (func_111(iParam0, 316290104))
		{
			return joaat("SATCHEL_PROMPT_BREAKDOWN");
		}
		else if (func_161(iParam0, 1, 0))
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
		switch (func_10(iParam0, -949239683))
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
			case 1443104131:
				return -31549930;
		}
	}
	else if (func_10(iParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_WATCHES"))
	{
		return -1948542959;
	}
	else if (iParam0 == joaat("CONSUMABLE_HERB_HARRIETUM"))
	{
		return 356040554;
	}
	return -31549930;
}

void func_487(int iParam0, var uParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;

	bVar0 = true;
	switch (func_133(iParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!func_111(iParam0, 949916894) && !func_111(iParam0, 747873593)) && !func_10(iParam0, -949239683) == -1337515701) && !func_111(iParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
	}
	if (func_130(iParam0) == joaat("MONEY"))
	{
		bVar0 = false;
	}
	if (joaat("KIT_COLLECTOR_SPADE") == iParam0)
	{
		bVar0 = false;
	}
	if (-492264119 == iParam0 && !func_283())
	{
		bVar0 = false;
	}
	if (func_10(iParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { func_155(iParam0, 0, 0) };
		if (func_663(Var15, -1162387149, &Var1, 0, -1))
		{
			if (Var1.f_4 == iParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_111(iParam0, 316290104))
	{
		bVar0 = true;
	}
	else if (func_161(iParam0, 1, 0))
	{
		if (func_68() == 0)
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
	if (MISC::IS_BIT_SET(Global_1051125, 0) && func_111(iParam0, 1573112293))
	{
		bVar0 = false;
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_10924) && !DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_10921))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_509(), bVar0);
}

bool func_488()
{
	if (!((UNLOCK::_UNLOCK_IS_VISIBLE(-474252899) || UNLOCK::_UNLOCK_IS_VISIBLE(294305054)) || UNLOCK::_UNLOCK_IS_VISIBLE(-296143697)))
	{
		return false;
	}
	else if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("DOCUMENT_COLLECTOR_MAP_FOSSILS")))
	{
		return false;
	}
	return true;
}

int func_489(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_424(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_628(&Var0, func_376(0));
	}
	if (!func_425(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_242(iVar14);
	return uVar15;
}

struct<4> func_490(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_155(iParam0, bParam1, 0) };
	return func_156(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_491(int iParam0)
{
	if (!func_621(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_664(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_492(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_665(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_493(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_105(iParam0, 0) && !func_510(func_290(iParam0), 2))
	{
		return 0;
	}
	if (func_130(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_294(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_210(bParam3), iParam0);
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_495(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_105(iParam0, 0))
	{
		return func_666(func_290(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return -113609972;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 940277804;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return -2021981862;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE"):
			return -2035151058;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_POOR"):
			return -654359890;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_PRISTINE"):
			return -395420997;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return -1493288070;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return -710989256;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return -47986288;
		case joaat("PROVISION_BADGER_PELT"):
			return 803974758;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return 373952588;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return 1242607258;
		case joaat("PROVISION_BEAR_FUR"):
			return 1997574525;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return -1985838637;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return -1813237797;
		case joaat("PROVISION_BEAVER_FUR"):
			return -2016089088;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 2146572053;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -1839367994;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -1091189928;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1635115397;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -2042006570;
		case joaat("PROVISION_BOAR_SKIN"):
			return -1314791863;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return -1823555382;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return -1940860112;
		case joaat("PROVISION_BUCK_FUR"):
			return 1415794275;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 125158553;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return -653766286;
		case joaat("PROVISION_BUFFALO_FUR"):
			return 1895811321;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return 299919606;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return 753379773;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 1352867568;
		case joaat("PROVISION_BULL_HIDE"):
			return 1097784084;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return -1943430854;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 182141962;
		case joaat("PROVISION_COUGAR_FUR"):
			return -1468691308;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return -57484815;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1946049104;
		case joaat("PROVISION_COW_HIDE"):
			return 1185884283;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return -321839561;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return -2120314726;
		case joaat("PROVISION_COYOTE_FUR"):
			return -1364771053;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 1278304830;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return -1708243835;
		case joaat("PROVISION_DEER_HIDE"):
			return -396086695;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -1091137361;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -354836003;
		case joaat("PROVISION_ELK_FUR"):
			return -861596076;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 205905613;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return -1196787069;
		case joaat("PROVISION_FOX_FUR"):
			return 881436265;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return -2014005467;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 1738298985;
		case joaat("PROVISION_FROG_SKIN"):
			return 1211835284;
		case joaat("PROVISION_FROG_SKIN_POOR"):
			return 1658545555;
		case joaat("PROVISION_FROG_SKIN_PRISTINE"):
			return 2004662589;
		case joaat("PROVISION_GILA_SKIN"):
			return 432134278;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 56287881;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 2038260929;
		case joaat("PROVISION_GOAT_HAIR"):
			return -292516362;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1097330746;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return -1664486394;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 715839674;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return -1754534999;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return -224255707;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 1582863244;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 1014727010;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return -493748684;
		case joaat("PROVISION_MOOSE_FUR"):
			return -506979242;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return 1790050043;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -420589518;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return 1740405833;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -294760237;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return 399589289;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -779978170;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -1474732778;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -859460682;
		case joaat("PROVISION_OXEN_HIDE"):
			return -37721227;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -2119897246;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -1197044283;
		case joaat("PROVISION_PANTHER_FUR"):
			return 286691937;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -876261935;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 695977222;
		case joaat("PROVISION_PIG_SKIN"):
			return -1126723863;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 755838510;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return -871797197;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 1445549666;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -954694400;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -327638924;
		case joaat("PROVISION_RABBIT_PELT"):
			return 608806106;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 445332351;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 391928970;
		case joaat("PROVISION_RACCOON_FUR"):
			return 683327822;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return -217595210;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 334167008;
		case joaat("PROVISION_RAM_HIDE"):
			return 311086070;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 1413149376;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return -1469642502;
		case joaat("PROVISION_RAT_FUR"):
			return -146398768;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -357528239;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -1936951665;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -85737661;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 1710562692;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -1912945257;
		case joaat("PROVISION_SKUNK_FUR"):
			return -2035397573;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1925504740;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return -1261342366;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 498542642;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 1958005095;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 1942918539;
		case joaat("PROVISION_WOLF_FUR"):
			return -16864021;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 781168718;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -630360032;
		case joaat("PROVISION_FISH_BLUEGILL"):
			return 1888465490;
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
			return -543054460;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return -1037558485;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return 71874057;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
			return 827985446;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return 652886453;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
			return -1039971240;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return -1106747914;
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return -550722674;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return -1444987366;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return -1471435589;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return 1193731881;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
			return -1017619862;
		case joaat("PROVISION_FISH_MUSKIE"):
			return -1698910498;
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return -1134347623;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -719421785;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return -1406416279;
		case joaat("PROVISION_FISH_PERCH"):
			return 482295805;
		case joaat("PROVISION_FISH_PERCH_POOR"):
			return -520151885;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 1901018987;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
			return 935219765;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return -615433613;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
			return -1149578066;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 1228716113;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
			return -1898963991;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -763965887;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
			return -91027264;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return 998052367;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
			return -1841069460;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return 319613183;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return 89885133;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -236264927;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return -661841886;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 882369722;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 230068405;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 708397125;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 1663105645;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2104496586;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -867628281;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1127988903;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return 1177722124;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 2095431713;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return -1946085310;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -50004308;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return 1066632230;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -1593775395;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -1462436745;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 128688729;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 1036479497;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 525245761;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1434203725;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return -540853698;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return -817013819;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return 222702434;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -372998867;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -1765786196;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -597920617;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -986217609;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return 1591915275;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return 434164104;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return 2010460530;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
			return 798445127;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -1512781803;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 1951854232;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return 685557689;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -655396129;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -138348534;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -615195506;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -1143073531;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -76512165;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return 435345037;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 566505619;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 2061704444;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return -420922520;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return 1402000467;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -571080009;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return 1856405476;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 234473853;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return -459025832;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -1538065056;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1513811193;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -376064362;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1362644733;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return 1527066094;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -1135994830;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -411118339;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return 1934921511;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1664302460;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1370325893;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1597885804;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -82035689;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return 399214021;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 333629896;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 354443590;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return -1043338230;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return -591593823;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1914687828;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return -728170563;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 1026974357;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 1847023377;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return -102918483;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -749802886;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 1171297014;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return 1888858793;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 696072937;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 1744784728;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return -191973744;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 1013351618;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return 930648145;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -218437162;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1654489460;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 1362828838;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1558424746;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 1074454855 /* Float: 2.17f */;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return 661991465;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 217385405;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 1863856147;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return -1783404197;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 127122;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 1568268202;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -907802863;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return 1885588858;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 2135346669;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 1564672281;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -149209420;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 431321694;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 2054544328;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 961836667;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 487431050;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1103475665;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 322947093;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return 1204808018;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -2033244642;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 981960619;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return 1448526072;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PACKS/BASE/DATA/AI/TRANSPORTANIMATIONS/DEFAULT_WAGON_UTILITY/TYPES/ENTRY_EXIT/FRONT_LEFT/JACKING");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -1266905662;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return -2080399983;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 33483590;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return -1838135661;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -1573277590;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return 261129135;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return 1243458250;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -185030876;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return 1317537296;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return 1018367377;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return 824037606;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -1731017100;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return 1615937768;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -251297033;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -759993020;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -1625595431;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 1402002731;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return -893738363;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1168912955;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -883362976;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return 439065517;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 2028934772;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 1635254052;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -1876315724;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 2125035709;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return -688961870;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return -1534250051;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return -121066912;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -1571202765;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1007184712;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 750199142;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return 223717659;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return 25399937;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -1970088555;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return -555756782;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 1373687372;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -595937662;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -383405751;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -827185700;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -835681068;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return 1758422954;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1350812151;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -971769000;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 232508262;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1733134177;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 1122586172;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return -1735702522;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 859638047;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return -2079288781;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1007285267;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 281050817;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -2005182834;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1716047352;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return -860252225;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -825143744;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -19626769;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -2135500076;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1818491588;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 1492572787;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 1750541244;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -182749690;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -874350081;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -1243014409;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -1312925436;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return -1354257753;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 610016221;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return -898492052;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 721113188;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -1900079889;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -1717931006;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -1752692172;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 728009189;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return 393351033;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -755636829;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -1849715375;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -751278632;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -2061292617;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 927949229;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -1371828520;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return -1153167846;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 674701766;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 1934089692;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1607434899;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -979794154;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 973446589;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 184660339;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return -482133347;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -498483069;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return 1217842783;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return 432212831;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 452336188;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return 1979660764;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 471441354;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -1694997273;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -928742863;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 623939807;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -650616528;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return 834057600;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -823379321;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -1155190042;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return -1215385959;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return -2021366376;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 909323574;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return 371810529;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return 2081548585;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return 1601387810;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -989449592;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -1089443869;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -1569242066;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return 1971632203;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return 714162759;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 160408746;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_01"):
			return -1242547752;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_02"):
			return -1340101181;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_03"):
			return -1603006868;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_01"):
			return 72669789;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_02"):
			return 1721048796;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_03"):
			return 1412594203;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_01"):
			return -217402064;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_02"):
			return 26497603;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_03"):
			return 524914097;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_01"):
			return -1784221863;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_02"):
			return 1721340223;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_03"):
			return 2014983232;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_01"):
			return 1210657277;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_02"):
			return 1484245658;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_03"):
			return -1304035787;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_01"):
			return 199331010;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_02"):
			return 765055026;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_03"):
			return 1788037640;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_01"):
			return 1418722292;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_02"):
			return 1102632518;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_03"):
			return 1878373059;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_01"):
			return -495171328;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_02"):
			return 1156746735;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_03"):
			return 1966632570;
		default:
			break;
	}
	return 0;
}

int func_497(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01"):
			return 1737301198;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02"):
			return -1786971987;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03"):
			return -1408358961;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01"):
			return 2128665752;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02"):
			return 1841511005;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03"):
			return 1549277063;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01"):
			return 1393748763;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02"):
			return 544769519;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03"):
			return 774971744;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01"):
			return -744009123;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02"):
			return -1682808204;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03"):
			return 2054234098;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01"):
			return 1922044680;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02"):
			return 2145332646;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03"):
			return 1308510689;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01"):
			return -952513206;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02"):
			return -1264506855;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03"):
			return -1561393995;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01"):
			return -2115797779;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02"):
			return 1891949232;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03"):
			return 1593292566;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01"):
			return 1461107206;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02"):
			return 1201281805;
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03"):
			return 1970304697;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_ALLIGATOR_TOOTH"):
			return 1164491261;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BEAR_CLAW"):
			return 1446763677;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BEAVER_TOOTH"):
			return -1298448148;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BISON_HORN"):
			return -1735939928;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BOAR_TUSK"):
			return -1926107629;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_BUCK_ANTLER"):
			return -346963495;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_COUGAR_FANG"):
			return -1966419150;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_COYOTE_FANG"):
			return 555279871;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_ELK_ANTLER"):
			return 256434231;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_FOX_CLAW"):
			return -503159532;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_MOOSE_ANTLER"):
			return -251683498;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_PANTHER_EYE"):
			return 964465987;
		case joaat("PROVISION_ROLE_NATURALIST_LEGENDARY_ITEM_RAM_HORN"):
			return 1599024134;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_01"):
			return -616698490;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_02"):
			return -1132220398;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ALLIGATOR_LEGENDARY_03"):
			return 1995351273;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_01"):
			return -1619790277;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_02"):
			return 967060121;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAR_LEGENDARY_03"):
			return 1263980030;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01"):
			return -1465574082;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02"):
			return 1916317794;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03"):
			return -999893823;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_01"):
			return -2040203687;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_02"):
			return 726253600;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BISON_LEGENDARY_03"):
			return 588492724;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01"):
			return 661620688;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02"):
			return -1722651740;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03"):
			return -1980773153;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01"):
			return -910932346;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02"):
			return 259609103;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03"):
			return -295170067;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01"):
			return 803542225;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02"):
			return -328167959;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03"):
			return 1311920491;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01"):
			return -987379013;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02"):
			return -632031977;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03"):
			return -374238254;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_01"):
			return 351245498;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_02"):
			return 1124298977;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_ELK_LEGENDARY_03"):
			return 871944908;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01"):
			return 1045565446;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02"):
			return 1964539282;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03"):
			return 769814315;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_01"):
			return -2113905148;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_02"):
			return 347177840;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_MOOSE_LEGENDARY_03"):
			return 1609243098;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01"):
			return -2012858293;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02"):
			return -1705059076;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03"):
			return 439245973;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01"):
			return 2105504738;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02"):
			return 924542747;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03"):
			return 701582471;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01"):
			return -666885817;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02"):
			return -1365586435;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03"):
			return -1160452495;
		default:
			break;
	}
	switch (iParam0)
	{
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return -729940969;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 141813558;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 1963533652;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE"):
			return 1117271069;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_POOR"):
			return 1519472001;
		case joaat("PROVISION_ALLIGATOR_SKIN_LARGE_PRISTINE"):
			return 182553822;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -1852874823;
		case joaat("PROVISION_ANIMAL_FAT"):
			return -150332788;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 1709152297;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 1273594044;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return -454793815;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 673699503;
		case joaat("PROVISION_BADGER_CLAW"):
			return 1754189413;
		case joaat("PROVISION_BADGER_PELT"):
			return -1290349264;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return 1147391076;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return 1886042555;
		case joaat("PROVISION_BAT_WING"):
			return 105310482;
		case joaat("PROVISION_BEAR_CLAW"):
			return 602510756;
		case joaat("PROVISION_BEAR_FUR"):
			return -213803059;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 577741466;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return -64816897;
		case joaat("PROVISION_BEAVER_FUR"):
			return -1790213107;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 140548906;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 538248064;
		case joaat("PROVISION_BEAVER_TOOTH"):
			return 416375309;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 751278189;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return 2089437645;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -394567432;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -317450551;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1616683815;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return 998362875;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return 915240180;
		case joaat("PROVISION_BOAR_SKIN"):
			return -421637077;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return -2025148846;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 1555730333;
		case joaat("PROVISION_BOAR_TUSK"):
			return 934266484;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return 2052325776;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return 515017930;
		case joaat("PROVISION_BUCK_FUR"):
			return -1822857932;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return -1661833274;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 75788492;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -1740575947;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1305999829;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -317313952;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 305994581;
		case joaat("PROVISION_BULL_HIDE"):
			return 1719491621;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 711968992;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return -2807153;
		case joaat("PROVISION_BULL_HORNS"):
			return 1715192274;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 1543866786;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return -1873585305;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -662932093;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return 109373257;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 1876858085;
		case joaat("PROVISION_COUGAR_FANG"):
			return -155545682;
		case joaat("PROVISION_COUGAR_FUR"):
			return -845846009;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return -2085506453;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 232078681;
		case joaat("PROVISION_COW_HIDE"):
			return -975719856;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1348773445;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 66210245;
		case joaat("PROVISION_COYOTE_FUR"):
			return -175228229;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return -998078564;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 973957142;
		case joaat("PROVISION_CROW_FEATHER"):
			return -257934339;
		case joaat("PROVISION_DEER_HIDE"):
			return -325167203;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 287595526;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 1645648597;
		case joaat("PROVISION_DUCK_FEATHER"):
			return -1324308768;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1105699934;
		case joaat("PROVISION_EAGLE_TALON"):
			return -2141386199;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 720338807;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return -1015436070;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 254756397;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 642877259;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -366421835;
		case joaat("PROVISION_ELK_FUR"):
			return -1721580072;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return -560324616;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return -506698333;
		case joaat("PROVISION_FOX_FUR"):
			return 2001831582;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return -308176910;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 709570394;
		case joaat("PROVISION_FROG_SKIN"):
			return -626746681;
		case joaat("PROVISION_FROG_SKIN_POOR"):
			return 1916142044;
		case joaat("PROVISION_FROG_SKIN_PRISTINE"):
			return -1701132833;
		case joaat("PROVISION_GILA_SKIN"):
			return 1497343107;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1924021902;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1367123410;
		case joaat("PROVISION_GOAT_HAIR"):
			return -1252121718;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1439503490;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 2075605647;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 874416043;
		case joaat("PROVISION_HAWK_FEATHER"):
			return 1441079450;
		case joaat("PROVISION_HERON_FEATHER"):
			return 872004206;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 1251011851;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return -617676900;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return -811158466;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 443733012;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return -393194118;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 189129655;
		case joaat("PROVISION_JAVELINA_TUSK"):
			return 710582811;
		case joaat("PROVISION_LOON_FEATHER"):
			return -1604182722;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return -1933370531;
		case joaat("PROVISION_MOOSE_FUR"):
			return 2143881314;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return 261464608;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return 533169045;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return 1559256431;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -664455397;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return 1321025026;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return 1078802600;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return 75907104;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return 2076872795;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return 2038781126;
		case joaat("PROVISION_OWL_FEATHER"):
			return -994580234;
		case joaat("PROVISION_OXEN_HIDE"):
			return 1453304549;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return 2037563793;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -984195334;
		case joaat("PROVISION_OXEN_HORN"):
			return -102667065;
		case joaat("PROVISION_PANTHER_FUR"):
			return 766738878;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -439771682;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 1987222394;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 2006254811;
		case joaat("PROVISION_PARROT_FEATHER"):
			return -515812748;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 650331389;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return 319232918;
		case joaat("PROVISION_PIG_SKIN"):
			return 44257110;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1513760857;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1351967896;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return 840821070;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 1736690424;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -484605156;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 671730736;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return 1291827453;
		case joaat("PROVISION_RABBIT_PELT"):
			return -563629672;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 1610805859;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 1193711685;
		case joaat("PROVISION_RACCOON_FUR"):
			return -1589890131;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 172710122;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return -373561552;
		case joaat("PROVISION_RAM_HIDE"):
			return -1697884196;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return -511225893;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return -1361338784;
		case joaat("PROVISION_RAT_FUR"):
			return -2132052800;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return 1075249;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return 563724690;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return 1784173995;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return 1356124641;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -2006574994;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -1804893584;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 852477829;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 492443708;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -473984871;
		case joaat("PROVISION_SKUNK_FUR"):
			return -1754474288;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 643377789;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 1803121683;
		case joaat("PROVISION_SNAKE_SKIN"):
			return -661883621;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return -926826161;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 620515243;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return -839229372;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 1147065893;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1100436208;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return 1892048883;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -161210360;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return 516276755;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return 766814122;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return 457527259;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 527405344;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 1728967914;
		case joaat("PROVISION_WOLF_FUR"):
			return 932384479;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 1180333503;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 993930516;
		case joaat("PROVISION_WOLF_HEART"):
			return 287596349;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return -1125201769;
		default:
			break;
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL"):
			return -2006827790;
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
			return 1062068465;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 1196662225;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return 1870328732;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
			return 707201280;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -1473598265;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
			return -1084421789;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 1756638081;
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return 1321469365;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return -1803638668;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return -1221284958;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -191086281;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
			return -6716069;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 670163126;
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return -1112301401;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -1532517667;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return 1728443538;
		case joaat("PROVISION_FISH_PERCH"):
			return -43253473;
		case joaat("PROVISION_FISH_PERCH_POOR"):
			return 699462615;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return -1750520428;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
			return 219352253;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 166032929;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
			return -2035446565;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 1468262744;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
			return -702150099;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -982559496;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
			return -1009657226;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return 1712149826;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
			return 137308405;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -2017882358;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -684493390;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 1002602374;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return -1483430189;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return -1002611416;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return -988437272;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 1912274811;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return -1103469855;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 602224616;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1786026048;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return 1267576255;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -93762301;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 1560746874;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 456481242;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -913993577;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return 719164880;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -3379701;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return 2029277432;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 1940135629;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return -1001259776;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 1633965430;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 369737235;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return -926789976;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1733620897;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -1691123411;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return 1668855076;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return 193838959;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -396770599;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return 507273585;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return 2132202059;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return 1999319663;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return -738256282;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
			return 1859995253;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -1406486282;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -1800293671;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -1517895381;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return 446238129;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1392581698;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1221148056;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return 1513566869;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -1951931021;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -161231515;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 364033016;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return -537899065;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 401461100;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return 1223809963;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return 944110311;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1492480176;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 1280054159;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return -373224618;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -641533288;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 75052460;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1245805785;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1046531369;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -974080310;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return 81120984;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -1985659799;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -783858773;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 225754854;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1809464590;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1598922009;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return 275412539;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1705997274;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return -580638205;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return -70837723;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return -1829279760;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return -82403140;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1862079367;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 2047450143;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return -1432602913;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return -644660892;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return -946834167;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return 1800041756;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -43847478;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -2091042332;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -64154430;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2146679785;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 1440511737;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 2106477246;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return 1238836439;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 715588111;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1913114484;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 651914172;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 32080080;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 1049493474;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -501826187;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 64971655;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return -1894912735;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 763480295;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -1878430686;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 613844620;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return 920173178;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return 596420802;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 1605888983;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 788459402;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -1216606326;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 1292597331;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return -1149750759;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -1396948758;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1289050487;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1872286321;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return -975908522;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -409367013;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return 779088744;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 1711042298;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1413161219;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return 1182246979;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -985527980;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return -72615570;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1665004985;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 21034941;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -648011160;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return 171702437;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -1827280206;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return 1034372784;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -71154754;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return 655003317;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return 537980983;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -1283272411;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -1362831402;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return 1214467902;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 1102758634;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return 965680356;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return -497486600;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 2123917083;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -747843967;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return 215558127;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -448269050;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -465284970;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return -112530487;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 1058515088;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 1081153967;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return -684605659;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 694612862;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 818552661;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 869821653;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return -1558848228;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return -2024255176;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -1772716910;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return 1214255904;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return 159219251;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 725440584;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return -1035022170;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -1206378980;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1877144237;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -962097996;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1722580089;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return 2029769794;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -635036270;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return 831089430;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -2135979865;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return 1915095215;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 549704977;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 1967237703;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 793462056;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 1799595146;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1434842719;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -339256624;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -175125903;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1766675716;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1176560958;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -1017734953;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return 1301232714;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return 1715317931;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 484920071;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 1943993797;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 1077656284;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return 1677116399;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return 914114641;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -2022525106;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -814448540;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 741087971;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 182568440;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return -1010591546;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 2138711331;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -738750296;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -1864268272;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return 579112106;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -899794521;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return 64674852;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return 744947689;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -955879408;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -334450814;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -54533226;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 351539261;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1499766071;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return -2059559175;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 1261953498;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return -278084343;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return -1299605277;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1486754346;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return -535872870;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 64899457;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 404778336;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -365574371;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -2040509534;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -1855203366;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 840225041;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -1326666930;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -768854386;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -1447829381;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -954430157;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 1011639849;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -1049843758;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return 1871055552;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return 1016504142;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -2048967430;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return -1555436909;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 360646178;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return -1976493300;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -226591008;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -302032060;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -687553153;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -1776607096;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return 1394617857;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return 775708056;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -1193980640;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -542292419;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 72574110;
		default:
			break;
	}
	return 0;
}

int func_498(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_667(iParam0, iParam1, &Var0, &iVar21, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (Var0[iVar22 /*2*/] == joaat("CURRENCY_CASH"))
		{
			return Var0[iVar22 /*2*/].f_1;
		}
		else if (Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

float func_499(int iParam0, int iParam1)
{
	float fVar0;

	fVar0 = 1f;
	if (!func_105(iParam1, 0))
	{
		return fVar0;
	}
	if (!func_668(iParam0, iParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_500(var uParam0, int iParam1)
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
		switch ((uParam0[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (iParam1 == (uParam0[iVar0 /*7*/])->f_2)
				{
					return (uParam0[iVar0 /*7*/])->f_6;
				}
				break;
			case 2:
				if (func_130(iParam1) == (uParam0[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_669(iParam1, -915411861, 1, 0, 1, 0));
				if ((uParam0[iVar0 /*7*/])->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = (uParam0[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= (uParam0[iVar0 /*7*/])->f_4)
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
			fVar1 = (fVar1 * (uParam0[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

char* func_501(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_502(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915715.f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1915715.f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_503(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_446(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_432(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_670(iVar5);
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

bool func_504(int iParam0, int iParam1)
{
	*iParam1 = func_671(iParam0);
	return *iParam1 != 0;
}

bool func_505(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
	}
	if (func_111(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_506(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*iParam1)[iVar4] = iVar1;
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
}

int func_507(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_462(&iParam0);
		if (!func_105(iVar0, 0))
		{
			iVar0 = func_463(iParam0);
		}
	}
	else
	{
		iVar0 = func_463(iParam0);
	}
	return iVar0;
}

bool func_508(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1137047.f_9[iVar0 /*10*/].f_4.f_2 != 0 && Global_1137047.f_9[iVar0 /*10*/].f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_132("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = GANG::_0x901E0DC25080C8B9(iParam0);
	if (func_673(func_672(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_132("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

var func_509()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940311.f_10924))
	{
		return Global_1940311.f_10923;
	}
	return Global_1940311.f_10920;
}

bool func_510(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_511(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_512(int iParam0, int iParam1, var uParam2, int iParam3)
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
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_133((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_513(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_398(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_243("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_228(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_674(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_242(iVar1);
				return true;
			}
			iVar3++;
		}
		func_242(iVar1);
	}
	return false;
}

bool func_514(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_133(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_675(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_676(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_677(iParam0);
	iVar2 = func_676(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

bool func_515(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_516(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_294(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_678(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_517(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_156(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_518(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_679(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_681(func_680(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_519(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		if (func_111(iParam0, -1242251796))
		{
			if (func_111(iParam0, 2060589226))
			{
				return func_48();
			}
			return func_47();
		}
		else if (func_111(iParam0, 1919582297))
		{
			return func_62();
		}
		else if (func_111(iParam0, 1647670816))
		{
			return func_683();
		}
		else if (func_111(iParam0, 1147021565))
		{
			return func_36();
		}
	}
	if (Global_1940144.f_12)
	{
		return func_47();
	}
	else
	{
		return func_36();
	}
	return func_36();
}

bool func_520(int iParam0)
{
	return (iParam0 == joaat("KIT_ROLE_NATURALIST_COMPENDIUM") || iParam0 == joaat("KIT_COLLECTORS_BAG"));
}

bool func_521(int iParam0)
{
	if ((((((((((func_111(iParam0, 1147021565) || func_111(iParam0, -136654233)) || func_111(iParam0, -524514947)) || func_111(iParam0, -1238310989)) || func_111(iParam0, 1765172170)) || func_111(iParam0, 1490540191)) || func_111(iParam0, 1573112293)) || func_111(iParam0, -1242251796)) || func_111(iParam0, 1919582297)) || func_111(iParam0, -2085281117)) || iParam0 == joaat("CONSUMABLE_OFFAL"))
	{
		return true;
	}
	return false;
}

int func_522()
{
	return 167247871;
}

int func_523(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_366(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_684(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_685(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_686(iVar1);
			}
			break;
		case 3:
			iVar3 = func_687(iVar5);
			iVar4 = func_688(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_689(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_524(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::_IS_STRING_SPACE(func_526(func_690(iParam0, iParam1, bParam2)));
}

struct<8> func_525(int iParam0, int iParam1)
{
	return func_690(iParam0, iParam1, 1);
}

char* func_526(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_527(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_528(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_529(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1 /*5*/].f_4 == 0)
			{
			}
			else if (func_448(Global_17411.f_2966.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_448(Global_1211392.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_240(Global_17411.f_2966.f_1[iVar1 /*5*/].f_1, Global_1211392.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_691(4))
	{
		return false;
	}
	if (func_415())
	{
		return true;
	}
	if (func_692())
	{
		return false;
	}
	if (func_693(1, 255))
	{
		return false;
	}
	if (func_366(func_694()) && Global_1211392.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_530(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_293(Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_531(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_695(Global_1211392.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_532(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

int func_533()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_34))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_696(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_696(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_534(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_697(iParam0);
	iVar1 = func_264(iVar0);
	if (iVar1 != iParam0)
	{
		func_698(iVar1, 4);
	}
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_265(iParam0))
	{
		return;
	}
	func_698(iParam0, 4);
	func_699(iParam0, bParam1);
	if (!func_700(iParam0))
	{
		func_701(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_192(0, 0, 1))
		{
			func_702(1, 6);
		}
	}
}

bool func_535(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432 /* Float: -1f */);
		Global_1940144.f_26 = 1;
		return true;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	return false;
}

void func_536(int iParam0)
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
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_111(iParam0, 1573112293) || func_111(iParam0, 672467738)) || func_111(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_130(iParam0) == joaat("CONSUMABLE"))
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_703(0, Var22.f_2);
				func_704(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_703(2, Var22.f_2);
				func_705(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_703(1, Var22.f_2);
				func_706(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_707(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_708(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_707(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_708(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_707(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_708(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_709(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_710(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_709(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_710(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_709(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_710(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_709(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_710(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_709(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_710(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_709(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_710(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_711(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_111(iParam0, -537818634))
		{
			func_391(func_627(joaat("MEDICINE_ITEMS_USED")), 1);
		}
		if (func_111(iParam0, -1457797660))
		{
			func_391(func_627(joaat("PROVISION_ITEMS_USED")), 1);
		}
		if (bVar38)
		{
			func_391(func_627(joaat("DEADEYE_ITEMS_USED")), 1);
		}
		switch (iParam0)
		{
			case -1735850413: /* GXTEntry: "Pickled Egg" */
			case -241345764: /* GXTEntry: "Almonds" */
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_CONSUMABLE_SALOONSNACK_00"), 1);
				break;
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_537(int iParam0)
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

bool func_538(int iParam0)
{
	return Global_1952637.f_595[iParam0] > 0;
}

void func_539(int iParam0)
{
	Global_1952637.f_595[iParam0]++;
}

bool func_540()
{
	if (Global_1952637.f_3485)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1952637.f_3483)) < 1250)
	{
		return true;
	}
	if (func_712())
	{
		return true;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return true;
	}
	return false;
}

int func_541(int iParam0)
{
	int iVar0;

	iVar0 = func_133(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_111(iParam0, 160827531)) || func_111(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

int func_542(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_548(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_543(int iParam0)
{
	if (-1829635046 == func_713(81053684))
	{
		if (func_548(iParam0))
		{
			return true;
		}
	}
	else if (func_714(-525676072, iParam0) || func_111(func_715(1742327865), -1303648999))
	{
		if (func_548(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_544()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_545()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_546()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_547()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_533())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_548(int iParam0)
{
	if (func_714(81053684, iParam0))
	{
		return true;
	}
	if (func_714(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_549(int iParam0)
{
	Global_1952637 = (Global_1952637 - (Global_1952637 && iParam0));
}

void func_550(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_336(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_336(iParam0, 1) /*12*/].f_11 - (Global_1952637.f_83[func_336(iParam0, 1) /*12*/].f_11 && iParam1));
}

int func_551(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637.f_3334.f_28;
		case 81053684:
			return Global_1952637.f_3334.f_30;
		case -525676072:
			return Global_1952637.f_3334.f_29;
		case -1719060085:
			return Global_1952637.f_3334.f_31;
		case 1388798186:
			return Global_1952637.f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637.f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637.f_3334.f_27;
			}
			else
			{
				return func_716();
			}
			break;
	}
	return 0;
}

int func_552(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637.f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637.f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637.f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
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

int func_553(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1952637.f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_438(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_717(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_718(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637.f_3334[Global_1952637.f_3334.f_26] = iVar1;
	Global_1952637.f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_554()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = Global_1952637.f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637.f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637.f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637.f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637.f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637.f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637.f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637.f_3334.f_26;
}

void func_555(bool bParam0, int iParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	if (!func_105(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_617(iParam1, &Var0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_719(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_720(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_526(func_721(iVar7));
		}
		else
		{
			iVar8 = func_620(iParam1);
			if (func_105(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_274(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = joaat("COLOR_PURE_WHITE");
		iVar7 = func_719(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_720(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_526(func_721(iVar7));
		}
		else
		{
			iVar9 = func_620(iParam1);
			if (func_105(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::_CREATE_VAR_STRING(0, func_274(iParam1));
		}
	}
	sVar10 = func_501(MISC::_CREATE_VAR_STRING(10, sVar3, sVar5), iVar6);
	func_626(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_556(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_722();
	}
	if (bParam0)
	{
		func_324(8);
		func_324(512);
	}
	else
	{
		func_324(8);
		func_324(16);
	}
}

int func_557()
{
	return Global_1952637.f_1;
}

bool func_558(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_133(iParam1);
	iVar1 = func_133(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_723(iParam1) && func_723(iParam0))
	{
		return true;
	}
	return false;
}

void func_559(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_724(iParam0, 0, 0, bParam3, bParam5);
	func_332(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

int func_560(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
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
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
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

void func_561()
{
	int iVar0;

	Global_1952637.f_1556 = Global_1952637.f_1675;
	Global_1952637.f_1552 = Global_1952637.f_1554;
	Global_1952637.f_1552.f_1 = Global_1952637.f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1556.f_1[iVar0 /*3*/] = { Global_1952637.f_1675.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_562(int iParam0)
{
	func_550(iParam0, 8, 6);
}

void func_563(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*iParam1 == joaat("CLOTHING_ITEM_OVERALLS_NONE") || *iParam1 == joaat("CLOTHING_ITEM_PANTS_NONE")) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_133(uParam0->f_1[iVar0 /*3*/]) != 1882579758)
			{
				return;
			}
			iVar1 = func_725(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1952637.f_83[iParam2 /*12*/])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_726(*iParam1, iParam2))
		{
			*iParam1 = Global_1952637.f_1675.f_1[iParam2 /*3*/];
			return;
		}
	}
	*iParam1 = Global_1952637.f_83[iParam2 /*12*/];
}

void func_564(int iParam0)
{
	func_727(&(Global_1952637.f_2897), iParam0);
}

void func_565(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_728(&(Global_1952637.f_2897), iParam0, iParam1);
}

void func_566(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_567(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam1;
	bVar1 = func_339(iVar0, 1);
	if (bParam3 && func_111(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_729(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_560(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_730(uParam0, iVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_731(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_732(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_733(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_734(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_735(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_736(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_737(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_738(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_739(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_740(uParam0, bVar1, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_741(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_742(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_743(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_744(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_745(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_568(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_746(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_747(iParam0, func_560(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_569(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_329(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_748(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637.f_1675 != 491602716 || !func_720(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_111(Global_1952637.f_1675, -166674229) && (Global_1952637.f_1675 != 491602716 || !func_720(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637.f_1675 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1952637.f_1556 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_749(-1, 0, 6);
			func_136(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_556(0, 1);
	}
}

int func_570(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_750(&uParam0, iParam4, bParam5, iParam6);
}

bool func_571(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_451(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_572()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SHOP_ANYWHERE_HANDHELD")))
	{
		func_300(2);
		return false;
	}
	if (!func_358())
	{
		func_300(9);
		return false;
	}
	if (Global_1051439.f_72[34 /*75*/].f_1 & 128 != 0)
	{
		func_300(3);
		return false;
	}
	Var0 = { func_365(0) };
	if (func_366(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_367(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_751(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_523(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_524(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_300(iVar2);
			return false;
		}
	}
	if (func_194())
	{
		func_300(4);
		return false;
	}
	if (func_693(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051439.f_72[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_300(5);
		return false;
	}
	if (func_752(131072, 255))
	{
		func_300(7);
		return false;
	}
	if (func_753())
	{
		func_300(8);
		return false;
	}
	return true;
}

bool func_573(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_3 & 32 != 0;
	}
	return func_752(32, iParam0);
}

bool func_574(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_575()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_576(bool bParam0)
{
	if (bParam0)
	{
		func_754(4);
	}
	else
	{
		func_349(4);
	}
}

void func_577(bool bParam0)
{
	if (!(bParam0 && Global_1915715.f_22504))
	{
		if (bParam0)
		{
			INVENTORY::_0x6A564540FAC12211(2, joaat("KIT_HANDHELD_CATALOG"));
		}
		else
		{
			INVENTORY::_0x766315A564594401(2, joaat("KIT_HANDHELD_CATALOG"), 0);
		}
	}
	Global_1915715.f_22504 = bParam0;
}

bool func_578()
{
	return Global_1915715.f_20643;
}

int func_579(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return 0;
	}
	iVar0 = Global_1296859.f_154[Global_1296859];
	iVar1 = Global_1296859.f_8;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::_0xB655DB7582AEC805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::_0xEC7E480FF8BD0BED(Global_34))
			{
				return 0;
			}
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102219.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_755())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144.f_10 || Global_1940144.f_11) || Global_1940144.f_12) || Global_1940144.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1248240.f_9297 != -1)
		{
			return 0;
		}
		if (Global_1128574[iVar4 /*56*/].f_34 & 1 != 0 && Global_1128574[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_106.f_75 > 11 && Global_1572887.f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_580(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686.f_636.f_601;
		case 3:
			return Global_1071686.f_636.f_2103;
		case 4:
			return Global_1071686.f_636.f_12605;
		case 5:
			return Global_1071686.f_636.f_12907;
		case 6:
			return Global_1071686.f_636.f_15909;
		case 7:
			return Global_1071686.f_636.f_16511;
		case 8:
			return Global_1071686.f_636.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_582(int iParam0, int iParam1, int iParam2)
{
	return func_82(Global_1196567[iParam2 /*10*/][iParam0], iParam1);
}

var func_583(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_756() != 0)
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
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
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
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_757());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_757());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_757());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_758(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_759(iVar2))
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
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_760(iVar2) != 1)
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
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_761(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
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
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_584(var uParam0, struct<21> Param1)
{
	if (!func_762(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_585(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_586(int iParam0)
{
	if (func_588(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_587(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_588(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_589(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_590()
{
	if (!func_358())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_591()
{
	return (func_458(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_570(func_156(joaat("WARDROBE"), func_344(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_592(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_210(0);
	*uParam1 = { func_156(iParam0, func_376(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_593(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_594(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_210(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

struct<28> func_595(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_210(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_601(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_596(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_679(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_681(func_763(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_597(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<25> Var0;
	struct<24> Var25;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_210(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_601(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_598(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_681(func_764(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_599(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_210(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_601(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_600(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_679(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_681(func_765(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_682(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_601(var uParam0, bool bParam1)
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
	if (bParam1)
	{
		Var0.f_15 = func_294(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_385() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_602(int iParam0)
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

struct<12> func_603(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_POOR_QUALITY_LEGENDARY");
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_GOOD_QUALITY_LEGENDARY");
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_POOR");
					break;
				case 1:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_GOOD");
					break;
				case 2:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_PERFECT");
					break;
				case 3:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_RARE");
					break;
				case 4:
					iVar0 = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_LEGENDARY");
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_766(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	}
	else
	{
		func_766(uParam2, joaat("LOOT_TYPE_SKINNING"));
	}
	func_766(uParam2, iVar0);
	return *uParam2;
}

bool func_604(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (0 == iParam0)
	{
		return false;
	}
	return func_767(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

int func_605(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!func_768(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_769(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_770(iParam0, bParam2);
	iVar2 = 0;
	if (func_130(iParam0) == joaat("CLOTHING"))
	{
		if (!func_111(iParam0, 866047851) && !func_111(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_616(iParam0, 8388608) && !func_771(27))
	{
		func_772(27);
	}
	func_773(iParam0);
	if (!bVar3)
	{
		if (func_111(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_775(func_774(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_68() == -1)
				{
					func_776(iVar1);
				}
				if (func_158(0) && func_777(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_778(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_779(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_130(iParam0) == joaat("WEAPON"))
		{
			if (!func_780(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_130(iParam0) == joaat("AMMO") && func_649(iParam0))
		{
			if (!func_781(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_111(iParam0, -103750053))
		{
			func_391(func_782(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_391(func_390(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_111(iParam0, -121341956) && !func_111(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_152(536, 0);
			}
			if (func_111(iParam0, -2017733358) || func_111(iParam0, -1369131378))
			{
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
			func_152(519, 0);
		}
		else if (func_111(iParam0, 1147021565) && func_111(iParam0, -524514947))
		{
		}
		else if (func_111(iParam0, 554195525))
		{
		}
		else if (func_111(iParam0, 589988438))
		{
			if (func_783())
			{
				func_784(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_111(iParam0, 787083290) && func_111(iParam0, 949916894))
		{
			func_785(iParam0);
		}
		else if (func_111(iParam0, -1718133314))
		{
			func_786(iParam0);
		}
		else if (func_111(iParam0, -1738650224))
		{
			func_787(iParam0);
		}
		else if (func_111(iParam0, -1112814642) && func_111(iParam0, 949916894))
		{
			func_788(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_111(iParam0, 1841149704))
		{
			func_789();
		}
		else if (func_111(iParam0, -1979000645))
		{
		}
		else if (func_111(iParam0, 606799272))
		{
		}
		else if (func_111(iParam0, -1112814642) && func_111(iParam0, -1697809989))
		{
		}
		else if (func_111(iParam0, -2017733358) || func_111(iParam0, -1369131378))
		{
		}
		else if (func_111(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_111(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_293(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_605(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_293(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_605(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_293(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_605(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_293(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_605(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_293(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_605(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_293(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_605(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_111(iParam0, -839724752) && func_616(iParam0, 4))
		{
		}
		else if (func_111(iParam0, 1399091007))
		{
			func_790(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_791(272, func_274(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_791(270, func_274(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_791(271, func_274(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_792(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_792(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_792(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_792(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_792(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_792(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_152(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_152(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_771(1))
				{
					func_152(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_152(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_68() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_152(534, 0);
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
		iVar5 = iParam0;
		func_793(&iVar5);
		if (!func_779(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_158(0))
		{
			return 1;
		}
		if (func_130(iParam0) == joaat("CLOTHING"))
		{
			func_794(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_158(0) && !func_389())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_605(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_795(iVar2, 0);
		}
	}
	Var30 = { func_400(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_796(iParam0);
	if (fParam6 > 0f)
	{
		if (func_111(iParam0, -839724752))
		{
			func_797(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_399(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

bool func_606(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			return true;
	}
	return false;
}

bool func_607(int iParam0, int iParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 176, true);
	TASK::CLEAR_PED_TASKS(Global_34, true, false);
	TASK::TASK_REVIVE_TARGET(Global_34, iParam0, iParam1);
	return true;
}

int func_608()
{
	return Global_1904628;
}

void func_609(int iParam0)
{
	Global_1904628.f_2 = iParam0;
}

void func_610(int iParam0)
{
	Global_1904628.f_1 = iParam0;
}

void func_611(int iParam0)
{
	Global_1904628.f_5 = iParam0;
}

void func_612(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

bool func_613()
{
	return !Global_1913504;
}

void func_614(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913504.f_3)
	{
		if ((((Global_1913504.f_4[iVar0 /*6*/] == iParam0 && Global_1913504.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913504.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913504.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913504.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913504.f_4[iVar0 /*6*/].f_1 = (Global_1913504.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504.f_3 < 19)
	{
		Global_1913504.f_4[Global_1913504.f_3 /*6*/] = iParam0;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_1 = iParam1;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_2 = bParam2;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_3 = bParam3;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_4 = bParam4;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_5 = bParam5;
		Global_1913504.f_3++;
	}
}

char* func_615(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_616(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_617(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_618(int iParam0)
{
	if (func_111(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_111(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_111(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_111(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_111(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_111(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_111(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_111(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_111(iParam0, -352095726) || func_111(iParam0, -2014783736)) || func_111(iParam0, -545064757)) || func_111(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_619(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_620(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_798(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_799(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_800(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_801(iVar14))
			{
				func_802(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_802(iVar11);
	}
	return 0;
}

bool func_621(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_622(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_105(iParam0, 0) && !func_510(func_290(iParam0), 2))
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

int func_623(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_803(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_624(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_804(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_805(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_806(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_625(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_626(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_807(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_627(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_628(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_629(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_491(iParam1))
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1904087.f_113[iVar0 /*96*/].f_1 == iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1291734.f_938.f_245[iVar0 /*4*/].f_3))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1291734.f_938.f_245[iVar0 /*4*/].f_3))
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		return iVar1;
	}
	return func_271(iParam0, iParam1);
}

int func_630(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_808(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_400(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_631(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_809(iParam1))
			{
				if (!func_810(0, iParam1, *iParam2))
				{
				}
				if (func_811(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 1);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 0);
				}
				*iParam2 = func_812(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_66(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_631(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar102;

	if (!PED::_IS_PED_CARRYING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
			}
			else
			{
				iVar0 = func_507(iVar2);
				if (!func_504(iVar0, &uVar102))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_0x8DE41E9902E85756(iVar2)) || (iParam4 == 1 && !ENTITY::_0x8DE41E9902E85756(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							if (iParam0 == PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID()))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Global_1291734.f_938.f_245[iVar5 /*4*/].f_3 == iVar2)
									{
										func_813(&Var6, &(Global_1904087.f_113[iVar5 /*96*/]));
									}
									else
									{
										iVar5++;
									}
								}
							}
							if (bParam3)
							{
								if (Global_1915715.f_20638 || Global_1915715.f_22504.f_1)
								{
									if (Global_1915715.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(iVar2))
									{
										if (func_111(iVar0, -753854379) || func_111(iVar0, 173360570))
										{
											PED::_SET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 2);
										}
										STATS::_0x831BF01C56149A8A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
									}
									if (iParam0 == PLAYER::PLAYER_PED_ID())
									{
										func_399(iVar0, -1, 0, 1, 0, 0, 0);
									}
								}
								ENTITY::_DELETE_CARRIABLE(&iVar2);
							}
							else
							{
								PED::_0xED00D72F81CF7278(iVar2, 0, 0);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return iParam2;
					}
				}
			}
		}
	}
}

void func_632(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915715.f_20637)
	{
		if (Global_1915715.f_20241 == 29)
		{
			if (func_505(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_814(iParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					STATS::_0x7C2ABF6E556B21FC(func_815(iParam0), iVar1, func_111(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_633(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_400(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_816(iParam0, iParam1);
	return func_817(iParam0, iParam1, bParam2, iParam3);
}

int func_634(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_818(iParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (func_819(&Var3))
	{
		if (Var3.f_1 != 0)
		{
			if (func_820(Var3.f_1, &iVar1, bParam1))
			{
				iVar2 = (iVar2 + iVar1);
			}
		}
	}
	return iVar2;
}

int func_635(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_636()
{
	return Global_1893587.f_2;
}

bool func_637(struct<2> Param0)
{
	return func_821(Param0, 1, 4);
}

int func_638()
{
	return Global_1903136.f_379;
}

bool func_639(int iParam0, int iParam1)
{
	if (func_111(iParam1, 1573112293))
	{
		return func_822(iParam1);
	}
	if (func_520(iParam1))
	{
		return func_195(524288);
	}
	switch (iParam0)
	{
		case -77448735:
			if (func_521(iParam1))
			{
				return func_822(iParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_822(iParam1);
		case -1520388130:
		case 1802292908:
			return func_195(16);
		case 81053684:
		case 1477698721:
			return func_195(4);
		case -525676072:
			return func_195(8);
		case 1779021115:
			if (func_105(iParam1, 0))
			{
				if (iParam1 == joaat("WEAPON_KIT_CAMERA"))
				{
					return func_195(64);
				}
				if (iParam1 == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
				{
					return func_195(131072);
				}
			}
			return func_195(32);
		case -1823706425:
			if (iParam1 == joaat("KIT_CAMP_WILDERNESS"))
			{
				return func_195(262144);
			}
			else
			{
				return func_195(128);
			}
			break;
		case -854348463:
			return func_195(8192);
		default:
			if (func_105(iParam1, 0))
			{
				if (func_111(iParam1, 1919582297))
				{
					return func_195(4096);
				}
				else if (iParam1 == joaat("UPGRADE_UPG_MORTAR_PESTLE") || iParam1 == -1448210800)
				{
					return func_195(2048);
				}
				else if (iParam1 == joaat("KIT_HORSE_BRUSH"))
				{
					return func_195(1024);
				}
				else if (func_111(iParam1, 1147021565))
				{
					return func_195(2);
				}
			}
			return func_195(1);
	}
	return func_195(1);
}

void func_640(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_425(&uParam1, &iVar0, &iVar1, bParam16))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_228(&Var3, iVar2, iVar0, iVar1))
			{
				func_422(iParam0, Var3.f_4, bParam15);
			}
			iVar2++;
		}
	}
	func_242(iVar0);
}

bool func_641(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_642()
{
	return Global_1940311.f_37;
}

int func_643(int iParam0)
{
	if (func_616(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_644(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

bool func_645(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1940311.f_38.f_1)
	{
		if (func_230(iParam0, Global_1940311.f_38.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_646(int iParam0)
{
	if (func_111(iParam0, -839724752))
	{
		return func_111(iParam0, 1937586541);
	}
	return false;
}

bool func_647(int iParam0)
{
	if ((((((((((((((((func_823(iParam0, joaat("ANTIQUE_BOTTLES")) || func_823(iParam0, joaat("BIRD_EGGS"))) || func_823(iParam0, joaat("ARROWHEADS"))) || func_823(iParam0, joaat("FAMILY_HEIRLOOMS"))) || func_823(iParam0, joaat("WILD_FLOWERS"))) || func_823(iParam0, joaat("COINS"))) || func_823(iParam0, joaat("LOST_JEWELRY_RINGS"))) || func_823(iParam0, joaat("LOST_JEWELRY_BRACELETS"))) || func_823(iParam0, joaat("LOST_JEWELRY_EARRINGS"))) || func_823(iParam0, joaat("LOST_JEWELRY_NECKLACES"))) || func_823(iParam0, joaat("TAROT_CARDS_CUPS"))) || func_823(iParam0, joaat("TAROT_CARDS_PENTACLES"))) || func_823(iParam0, joaat("TAROT_CARDS_SWORDS"))) || func_823(iParam0, joaat("TAROT_CARDS_WANDS"))) || func_823(iParam0, 773314749)) || func_823(iParam0, -246025274)) || func_823(iParam0, -41527693))
	{
		return true;
	}
	return false;
}

int func_648(int iParam0, int iParam1)
{
	switch (Global_1940311.f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_111(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_111(iParam0, -839724752)) || func_111(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_111(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_111(iParam0, -839724752)) || func_111(iParam0, -136654233)) || func_111(iParam0, 554195525)) || func_111(iParam0, -1238310989)) || func_111(iParam0, 2127114599)) || func_111(iParam0, -1864584831)) || func_111(iParam0, 1068498601)) || func_111(iParam0, 1967571132))
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

bool func_649(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_650(int iParam0, int iParam1)
{
	Global_1940311.f_38.f_2[iParam0 /*2*/] = iParam1;
}

bool func_651(int iParam0)
{
	return Global_1940311.f_38.f_2[iParam0 /*2*/].f_1;
}

void func_652(int iParam0)
{
	Global_1940311.f_38.f_2[iParam0 /*2*/] = 0;
	Global_1940311.f_38.f_2[iParam0 /*2*/].f_1 = 0;
}

void func_653(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = iParam0;
	Var1.f_1 = func_824(iVar0);
	Var1 = func_825(iVar0);
	iVar4 = 1;
	iVar5 = func_826(iVar0);
	iVar6 = COLLECTION::_0xCC644BC1DD655269(iVar5, 0);
	if (func_285(iVar6))
	{
		iVar4 = func_465(iVar6);
	}
	iVar7 = func_827(iVar0);
	if (iVar7 == 0)
	{
		iVar7 = joaat("COLOR_PURE_WHITE");
	}
	func_467(-1715238242, iParam0, &Var1, func_828(iParam0), iVar4, 0, 0, iVar7);
	Global_1940311.f_38.f_203++;
	Global_1940311.f_38.f_1++;
}

int func_654(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE(iVar0);
	iVar2 = func_829(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::_0x9E7738B291706746(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_830(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

bool func_655(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = INVENTORY::_0x640F890C3E5A3FFD(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return true;
	}
	return false;
}

bool func_656(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_68() == 0)
	{
		return func_831(iParam0);
	}
	return iParam0 <= func_832();
}

bool func_657(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_658(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_111(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_659(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_344(0) };
	Var0.f_4 = func_833(iParam1);
	Var5 = { func_156(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_210(0), &Var5, 0);
	return iVar9;
}

void func_660(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_256(Var0, iParam3);
	}
	else
	{
		func_232(Var0);
	}
}

bool func_661(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
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
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_662(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_425(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_228(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_244(&Var3, 0))
				{
				}
				else if (bParam2)
				{
					func_261(Var3.f_4, bParam3, 0);
				}
				else
				{
					func_245(Var3.f_4);
				}
			}
			iVar2++;
		}
	}
	func_242(iVar0);
}

bool func_663(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_834(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_664(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_835(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_665(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_836(iParam0) };
	return func_837(iParam0, iParam1, Var0, Var0.f_4);
}

int func_666(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_510(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_667(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar25;

	*iParam3 = 0;
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(uParam2[iVar25 /*2*/]) = { Var0.f_4[iVar25 /*2*/] };
		iVar25++;
	}
	if (bParam4)
	{
		func_838(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_668(int iParam0, int iParam1, float fParam2)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;

	*fParam2 = 1f;
	if (!func_233(iParam0))
	{
		return false;
	}
	if (!func_105(iParam1, 0))
	{
		return false;
	}
	if (!func_432(22, &Var0))
	{
		return false;
	}
	Var0.f_2 = -1023752283;
	Var0.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = func_839(iParam0);
		func_840(iVar6, &uVar5);
		Var0.f_2 = uVar5;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam2, &Var0);
		if (*fParam2 < 1f)
		{
			*fParam2 = 1f;
		}
		return true;
	}
	return false;
}

int func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_841(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_842(iParam0))
	{
		return func_843(func_495(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_844(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

int func_670(int iParam0)
{
	if (func_68() != -1)
	{
		if (Global_1071686.f_12)
		{
			if (iParam0 == 3)
			{
				return joaat("ST_GENERAL_INTRO");
			}
		}
	}
	return func_845(iParam0);
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03");
		default:
			break;
	}
	return 0;
}

int func_672(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_364(PLAYER::PLAYER_ID());
	}
	return func_846(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

bool func_673(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_674(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_676(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_677(int iParam0)
{
	int iVar0;

	iVar0 = func_133(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

bool func_678(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_847(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_385() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_679(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_848(uParam1->f_8, iParam0, iVar0, 2048) || func_848(uParam1->f_8, iParam0, iVar0, 32768)) || func_848(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_848(uParam1->f_8, iParam0, iVar0, 4) || func_848(uParam1->f_8, iParam0, iVar0, 256)) || func_848(uParam1->f_8, iParam0, iVar0, 65536)) || func_848(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_848(uParam1->f_8, iParam0, iVar0, 1) || func_848(uParam1->f_8, iParam0, iVar0, 8)) || func_848(uParam1->f_8, iParam0, iVar0, 65536)) || func_848(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_848(uParam1->f_8, iParam0, iVar0, 1) || func_848(uParam1->f_8, iParam0, iVar0, 16)) || func_848(uParam1->f_8, iParam0, iVar0, 2)) || func_848(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_848(uParam1->f_8, iParam0, iVar0, 8) || func_848(uParam1->f_8, iParam0, iVar0, 4096)) || func_848(uParam1->f_8, iParam0, iVar0, 256)) || func_848(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_681(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_849(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_849(iParam1, 2, 0, 0);
	return -1;
}

int func_682(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_849(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_683()
{
	return 230145239;
}

int func_684(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_850(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_685(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_851(&Var1, iParam0))
	{
		iVar0 = ((func_852() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_686(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1257541[iParam0 /*5*/].f_1;
}

int func_687(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
		case 1:
			return 2124631622;
		case 2:
			return joaat("ROBBERY_TRAIN");
		case 3:
			return 1443764480;
		case 4:
			return -668110249;
		case 5:
			return -1381389849;
		case 6:
			return 536699577;
		case 7:
			return 541147288;
		case 8:
			return 377122918;
		case 9:
			return 1158195437;
		case 10:
			return joaat("AMBUSH");
		case 11:
			return -621956193;
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
		case 14:
			return -867762478;
		case 15:
			return 602097925;
		case 16:
			return joaat("TRAIN_ESCORT");
		case 17:
			return joaat("IWD_1V1");
		case 18:
			return joaat("IWD_PVP");
		case 20:
			return joaat("IWD_PF");
		case 21:
			return joaat("IWD_PLF");
		case 28:
			return joaat("IWD_F");
		case 19:
			return joaat("IWD_INF");
		case 22:
			return joaat("ASSASSINATION");
		case 23:
			return joaat("ASSASSINATION_TRACKING");
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
		case 30:
			return 1518877519;
		default:
			break;
	}
	return 0;
}

var func_688(int iParam0)
{
	int iVar0;

	iVar0 = func_854(0, (func_853() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_855(iVar0);
}

int func_689(int iParam0)
{
	return Global_1109804.f_5737[iParam0 /*5*/];
}

struct<8> func_690(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_856(iParam0))
	{
		return Var5;
	}
	if (!func_857(&Var0))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_858(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_859(Var0);
}

bool func_691(int iParam0)
{
	return func_82(Global_1211392.f_1196, iParam0);
}

bool func_692()
{
	return Global_263042[Global_1296859 /*70*/] > 2;
}

bool func_693(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_694()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_365(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_365(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_695(int iParam0)
{
	if (func_860(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_696(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 3:
			return joaat("CONSUMABLE_HERB_GINSENG");
		case 4:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 5:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 6:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 7:
			return joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
		case 8:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 11:
			return joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
		case 12:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 13:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 15:
			return joaat("CONSUMABLE_HERB_ENGLISH_MACE");
		case 16:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("CONSUMABLE_HERB_CURRANT");
		case 19:
			return joaat("CONSUMABLE_HERB_HARRIETUM");
		case 20:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 21:
			return joaat("CONSUMABLE_HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("CONSUMABLE_HERB_MILKWEED");
		case 27:
			return joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
		case 28:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 29:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("CONSUMABLE_HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 34:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 35:
			return joaat("CONSUMABLE_HERB_SAGE");
		case 38:
			return joaat("CONSUMABLE_HERB_VANILLA_FLOWER");
		case 39:
			return joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("CONSUMABLE_HERB_WILD_CARROTS");
		case 50:
			return joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
		case 51:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 52:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("CONSUMABLE_HERB_YARROW");
		case 40:
			return joaat("PROVISION_WLDFLWR_AGARITA");
		case 41:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 42:
			return joaat("PROVISION_WLDFLWR_BITTERWEED");
		case 43:
			return joaat("PROVISION_WLDFLWR_BLOOD_FLOWER");
		case 44:
			return joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("PROVISION_WLDFLWR_CREEK_PLUM");
		case 47:
			return joaat("PROVISION_WLDFLWR_WILD_RHUBARB");
		case 48:
			return joaat("PROVISION_WLDFLWR_WISTERIA");
		default:
			break;
	}
	return 0;
}

void func_698(int iParam0, int iParam1)
{
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_68() != -1)
	{
		Global_17411[iParam0] = (Global_17411[iParam0] || iParam1);
		return;
	}
	Global_39.f_4667[iParam0] = (Global_39.f_4667[iParam0] || iParam1);
}

void func_699(int iParam0, bool bParam1)
{
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_861(iParam0))
	{
		return;
	}
	func_698(iParam0, 2);
	if (bParam1)
	{
		if (!func_192(0, 0, 1))
		{
			if (func_68() == -1)
			{
				func_702(1, 6);
			}
			else
			{
				func_862(1, 1017438712);
			}
		}
	}
}

bool func_700(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return func_482(iParam0, 1, 1);
}

void func_701(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_481(iParam0))
	{
		return;
	}
	if (func_700(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_478(iParam0);
	}
	if (!bParam1)
	{
		func_863(iParam0);
	}
	func_698(iParam0, 1);
	func_699(iParam0, 1);
	if (bParam2)
	{
		if (!func_192(0, 0, 1))
		{
			func_702(1, 6);
		}
	}
}

void func_702(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	if (!func_865() || func_68() != -1)
	{
		return;
	}
	func_864(&Global_0, 1);
}

float func_703(int iParam0, int iParam1)
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
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_34));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_34);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_34);
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

void func_704(int iParam0)
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
	iVar1 = func_866(2);
	func_867(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_705(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_868(2);
	func_869(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_706(int iParam0)
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
	iVar1 = func_870(2);
	func_871(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_707(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_708(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_872(iParam0, fParam1, 1);
	}
	func_874(iParam0, (func_873(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_709(float fParam0, int iParam1)
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

int func_710(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_875(iParam0, fParam1, bParam2, bParam3);
}

void func_711(float fParam0, bool bParam1)
{
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_876())
	{
		func_877(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17411.f_55.f_2439.f_41++;
		if (5 == Global_17411.f_55.f_2439.f_41)
		{
			func_152(109, 0);
		}
	}
}

bool func_712()
{
	int iVar0;

	iVar0 = Global_1952637.f_595[8];
	iVar0 = (iVar0 + Global_1952637.f_595[10]);
	iVar0 = (iVar0 + Global_1952637.f_595[1]);
	iVar0 = (iVar0 + Global_1952637.f_595[2]);
	iVar0 = (iVar0 + Global_1952637.f_595[5]);
	iVar0 = (iVar0 + Global_1952637.f_595[25]);
	iVar0 = (iVar0 + Global_1952637.f_595[23]);
	iVar0 = (iVar0 + Global_1952637.f_595[18]);
	iVar0 = (iVar0 + Global_1952637.f_595[19]);
	return iVar0 > 0;
}

int func_713(int iParam0)
{
	int iVar0;

	iVar0 = func_336(func_878(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637.f_1675.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_714(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_336(func_878(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1952637.f_1675.f_1[iVar1 /*3*/] != 0 && Global_1952637.f_1675.f_1[iVar1 /*3*/] != Global_1952637.f_83[iVar1 /*12*/])
	{
		iVar0 = Global_1952637.f_1675.f_1[iVar1 /*3*/];
		if (func_133(iVar0) == iParam0 || (iParam0 == 81053684 && func_111(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_715(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_336(iParam0, 1) /*3*/];
}

int func_716()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1952637.f_3334.f_26)
	{
		iVar1 = Global_1952637.f_3334[iVar0];
		if (func_133(iVar1) == -999503751)
		{
			if (func_879() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_717(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_880(0);
	}
	if (func_133(iParam0) == -999503751 && func_719(iParam0) != -1)
	{
		return true;
	}
	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return func_111(iParam0, -287432114);
	}
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return func_111(iParam0, -133342564);
	}
	return false;
}

bool func_718(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_155(iParam0, bParam2, 0) };
	Var5 = { func_156(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_343(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_210(bParam2), &Var5, iParam1);
	return true;
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_720(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

struct<8> func_721(int iParam0)
{
	char cVar0[64];

	if (func_720(4, iParam0))
	{
		return Global_17411.f_2625[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(func_881(iParam0)), 64);
	return cVar0;
}

void func_722()
{
	Global_1952637.f_1057 = 0;
}

int func_723(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (func_111(iParam0, 160827531) || func_133(iParam0) == 81053684)
	{
		return 1;
	}
	return 0;
}

void func_724(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	int iVar122;

	bVar0 = false;
	switch (func_133(iParam0))
	{
		case -2061583405:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_27), bParam4);
			if (func_111(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_883(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_105(iVar122, 0))
						{
							func_724(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_111(iParam0, 160827531))
			{
				bVar0 = func_882(iParam0, &(Global_1952637.f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_555(0, iParam0);
	}
	if (bParam2)
	{
		func_554();
	}
	if (bParam1)
	{
		func_556(0, 0);
	}
}

int func_725(int iParam0)
{
	var uVar0;
	var uVar1;

	func_884(&uVar1, 9044914, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_726(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_133(Global_1952637.f_1675.f_1[iParam1 /*3*/]);
	if (func_133(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_BANDANA_NONE"))
	{
		return func_111(Global_1952637.f_1675.f_1[iParam1 /*3*/], 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_CHAPS_NONE"))
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == joaat("CLOTHING_ITEM_SHIRT_NONE"))
	{
		return iVar0 == 1882579758;
	}
	return false;
}

void func_727(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1952637.f_2897.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_885(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_885(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_886(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1952637.f_2897.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1952637.f_2897.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_728(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_887(uParam0, 1))
	{
		func_888(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1952637.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1952637.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_729(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_889(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_336(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1952637.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_565(iVar8, 0);
			}
		}
	}
}

void func_730(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
	iVar0 = 10;
	iVar1 = func_133(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 119907797)
	{
		if (func_111(iParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_111(iParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_111(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_111(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam1, -93469181)) && func_111(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_731(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
}

void func_732(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_339(iVar1, 0) && func_111(iVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_133(iVar1) == 2086043523) && func_111(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_733(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case -525676072:
			func_890(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_891(uParam0, bParam1, iParam3);
			break;
	}
}

void func_734(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_133(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_133(iParam2) == 81053684 || func_111(iParam2, 160827531))
	{
		func_892(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_111(iParam2, -180472385) && !func_339(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	if (func_111(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_565(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_565(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		func_565(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_565(iVar0, iParam3);
		}
	}
}

void func_735(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	iVar1 = 0;
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_111(iParam2, 1872585553)) || func_133(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_339(uParam0->f_1[iVar0 /*3*/], 0) && func_111(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_339(uParam0->f_1[iVar0 /*3*/], 0) && func_111(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_133(iVar2) == 1759215194 && func_133(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_725(iParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam4);
	}
	else if (func_893(iVar2, bParam1, iVar1))
	{
		iVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_133(iVar2) == 912453393 && func_894(32))
		{
			iVar3 |= 1;
		}
		if (func_111(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_895(Global_1952637.f_83[iVar0 /*12*/].f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = iVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam4);
			func_743(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_339(uParam0->f_1[iVar0 /*3*/], 0))
	{
		return;
	}
	func_565(iVar0, iParam4);
	if (uParam0->f_1[iParam3 /*3*/].f_1 == -1539589426 || uParam0->f_1[iParam3 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3 /*3*/].f_1 == 0 || uParam0->f_1[iParam3 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_746(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3 /*3*/].f_1 = -1539589426;
			return;
		}
	}
	if (func_746(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3 /*3*/].f_1 = 1334603721;
	}
}

void func_736(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_737(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_133(iParam2))
	{
		case 698653232:
			func_896(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_897(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_738(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_898(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_899(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_739(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 18;
	if (func_133(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_565(iVar0, iParam3);
		if (uParam0->f_1[iVar0 /*3*/].f_1 == -1539589426 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
		{
			if (func_746(uParam0->f_1[iVar0 /*3*/], iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
				return;
			}
		}
		if (func_746(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		}
	}
}

void func_740(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(uParam0->f_1[iVar0 /*3*/], 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_741(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_900(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_111(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_339(uParam0->f_1[iVar0 /*3*/], 0) && func_111(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_742(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_743(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case 1759215194:
			func_901(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_902(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_903(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_904(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_905(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_906(uParam0, bParam1, iParam3);
			break;
	}
}

void func_744(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_133(iParam2))
	{
		case 1769055947:
			func_907(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_908(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_745(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		func_909(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_111(iParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_133(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	if ((func_111(iParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_133(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_111(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

int func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_747(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_748(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1952637.f_1675.f_1[iParam0 /*3*/] = { Global_1952637.f_1556.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	func_910(&(Global_1952637.f_1675.f_1[iParam0 /*3*/]), iParam0, Global_17411.f_55.f_644.f_1777);
}

void func_749(int iParam0, bool bParam1, int iParam2)
{
	func_911(&(Global_1952637.f_1556), iParam0);
	func_912(2, iParam0, 6);
	if (bParam1)
	{
		func_556(0, 1);
	}
}

int func_750(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_834(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_751(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_368(iParam0) == joaat("POSSE_VERSUS"))
	{
		return 37;
	}
	return 23;
}

bool func_752(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

bool func_753()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051439.f_3259 == iVar0 || Global_1051439.f_3259 == (iVar0 - 1));
}

void func_754(int iParam0)
{
	Global_1051439.f_3628 = (Global_1051439.f_3628 || iParam0);
}

bool func_755()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

int func_756()
{
	return Global_1051252.f_12;
}

char* func_757()
{
	return "unnamed";
}

int func_758(int iParam0)
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

bool func_759(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_913(36, iParam0);
}

int func_760(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/].f_1;
	}
	return 26;
}

bool func_761(int iParam0)
{
	if (func_914(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_915(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_762(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_763(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_764(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_765(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_766(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_767(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_916(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_917(uParam2, iParam0, Var1);
	return 1;
}

bool func_768(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_68() == -1)
	{
		if (func_384(iParam0) && func_918(iParam0))
		{
			func_919(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_769(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_920(iParam0, iParam1);
	Var0 = { func_155(iParam0, 0, 1) };
	iVar5 = func_493(iParam0, &Var0, 0, 0);
	iVar6 = func_458(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_111(iParam0, -2051813666))
		{
			func_152(674, 1);
		}
		else if (func_68() == -1)
		{
			func_152(673, 0);
		}
	}
	if (func_921(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_770(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_922())
	{
		return;
	}
	switch (func_10(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940144.f_70.f_5 = 1;
			Global_1940144.f_70.f_6 = 0;
			Global_1940144.f_70.f_1 = iParam0;
			break;
	}
}

bool func_771(int iParam0)
{
	if (!func_923(iParam0))
	{
		return false;
	}
	return func_924(iParam0);
}

void func_772(int iParam0)
{
	if (!func_923(iParam0))
	{
		return;
	}
	func_925(iParam0);
	func_926(iParam0);
}

void func_773(int iParam0)
{
	if (func_111(iParam0, -1522723129))
	{
		func_927(-848633709, 0, 255, 0, 0);
	}
	else if (func_111(iParam0, -283942357))
	{
		func_927(-981153234, 0, 255, 0, 0);
	}
	else if (func_111(iParam0, 683680997))
	{
		func_927(-756350192, 0, 255, 0, 0);
	}
	else if (func_111(iParam0, 1307628809))
	{
		func_927(603094518, 0, 255, 0, 0);
	}
}

int func_774(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			iVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			iVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_105(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_928(iVar0) || func_929(iVar0))
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

int func_775(int iParam0, bool bParam1)
{
	if (!func_105(iParam0, 0))
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

void func_776(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_674(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_777(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_155(iParam0, 0, 1) };
		if (func_378(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_379(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_156(iParam0, Var0, Var0.f_4, 0) };
				func_296(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_158(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_778(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_930(iParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_778(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_649(iParam0))
	{
		return false;
	}
	if (!func_158(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

int func_779(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_294(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_931(iParam0, iParam1, iParam2);
	}
	Var1 = { func_155(iParam0, 0, 1) };
	Var6 = { func_156(iParam0, Var1, Var1.f_4, 0) };
	return func_932(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_780(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_68() == -1)
		{
			func_776(iVar0);
			if (iParam1 == 1248274121)
			{
				func_933(iVar0);
			}
		}
		if (!func_921(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_919(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_934(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_777(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_777(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_777(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_935())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_936(iVar0))
				{
					func_777(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_777(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_937(Global_34, 2, 0, 1);
				if ((((func_674(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_293(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_674(iVar7) && func_293(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_777(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_777(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_777(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_152(515, 1);
	}
	return true;
}

int func_781(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_649(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_674(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
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
		func_791(func_938(iParam0), func_274(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_158(0))
	{
		if (func_778(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_779(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_782(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

bool func_783()
{
	return false;
}

int func_784(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_68() == 0)
	{
		func_795(iParam0, 0);
		return 0;
	}
	iVar0 = func_939(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_940(iVar0, sParam4, iParam5, 0);
	}
	func_941(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_785(int iParam0)
{
}

void func_786(int iParam0)
{
}

void func_787(int iParam0)
{
}

void func_788(int iParam0)
{
}

void func_789()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_790(int iParam0, int iParam1)
{
	var uVar0;

	func_612(iParam0, iParam1, &uVar0);
}

void func_791(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_588(iParam0, 1024))
	{
		return;
	}
	func_373(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_792(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_371(iParam0, &iVar0, &iVar1);
	if (!func_372(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_588(iParam0, 1024))
	{
		return;
	}
	func_373(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_793(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_794(int iParam0)
{
	if (func_68() != -1)
	{
		return;
	}
}

int func_795(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_766(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_767(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_796(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_797(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_942(Global_1903071.f_37);
	func_626(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_943(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_798(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_799(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_800(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_801(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
	}
	if (func_111(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_802(int iParam0)
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

int func_803(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_804(int iParam0)
{
	int iVar0;

	if (!func_105(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_274(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_805(int iParam0)
{
	if (func_133(iParam0) == -126813555 || func_133(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_806(int iParam0)
{
	int iVar0;

	if (!func_105(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_442(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_807(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_808(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_944(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_809(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_945(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_946(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_810(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_238(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_947(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_948(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = Global_1904087.f_402[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_949(iVar3, 0))
				{
				}
				Global_1904087.f_402[iVar1] = (Global_1904087.f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_811(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_950(iVar0, bParam2) >= func_951(bParam2);
}

int func_812(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			iVar1 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0);
			if (iVar1 == iParam1)
			{
				PED::_0x627F7F3A0C4C51FF(iParam0, iParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = Global_1291106[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0];
			if (iVar1 == iParam1)
			{
				Global_1291106[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
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

void func_813(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 96);
}

int func_814(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_504(iParam0, &iVar1))
	{
		iParam0 = iVar1;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			return joaat("AT_FBLUEGIL");
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			return joaat("AT_FBULLHEADCATFISH");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return joaat("AT_FCHAINPICKEREL");
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return joaat("AT_FCHANNELCATFISH");
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return joaat("AT_FLAKESTURGEON");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return joaat("AT_FLARGEMOUTHBASS");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return joaat("AT_FLONGNOSEGAR");
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return joaat("AT_FMUSKIE");
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return joaat("AT_FNORTHERNPIKE");
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			return joaat("AT_FPERCH");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return joaat("AT_FREDFINPICKEREL");
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return joaat("AT_FROCKBASS");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return joaat("AT_FSMALLMOUTHBASS");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return joaat("AT_FSALMONSOCKEYE");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return joaat("AT_FRAINBOWTROUT");
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return joaat("AT_BAT");
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return joaat("AT_BLUEJAY");
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return joaat("AT_BULLFROG");
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return joaat("AT_CEDARWAXWING");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("AT_CORMORANT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return joaat("AT_CAROLINAPARAKEET");
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return joaat("AT_CROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return joaat("AT_SQUIRREL");
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return joaat("AT_CARDINAL");
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return joaat("AT_CHIPMUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return joaat("AT_CRAB");
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return joaat("AT_CRAYFISH");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("AT_GILAMONSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("AT_IGUANA");
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return joaat("AT_ORIOLE");
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return joaat("AT_PIGEON");
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return joaat("AT_QUAIL");
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return joaat("AT_RAT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("AT_REDFOOTEDBOOBY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return joaat("AT_ROBIN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("AT_ROSESPOONBILL");
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return joaat("AT_SPARROW");
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return joaat("AT_SONGBIRD");
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return joaat("AT_TOAD");
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return joaat("AT_WOODPECKER_PILEATED");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("AT_GATOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("AT_ARMADILLO");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("AT_BADGER");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("AT_BEAVER");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("AT_SHEEP");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("AT_BUCK");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("AT_CALIFORNIACONDOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("AT_CHICKEN");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("AT_COUGAR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("AT_COYOTE");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("AT_CRANE");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("AT_DEER");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("AT_DUCK");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("AT_EAGLE");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("AT_EGRET");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("AT_FOX");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("AT_GOAT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("AT_GOOSE");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("AT_HAWK");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("AT_HERON");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("AT_LOON");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("AT_MUSKRAT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("AT_POSSUM");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("AT_OWL");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("AT_PANTHER");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("AT_PARROT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("AT_PELICAN");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("AT_PHEASANT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("AT_PIG");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("AT_CHICKEN_PRAIRIE");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("AT_PRONGHORN");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("AT_RABBIT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("AT_RACCOON");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("AT_RAM_DESERT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("AT_RAVEN");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("AT_ROOSTER");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("AT_SEAGULL");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("AT_SHEEP");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("AT_SKUNK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("AT_SNAKE_BLACK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("AT_SNAKE_BOA");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("AT_SNAKE_COPPER_NORTH");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("AT_SNAKE_FERDELANCE");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("AT_SNAKE_BLACK");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("AT_SNAKE_WATER");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("AT_TURKEY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("AT_TURTLE_SNAP");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("AT_VULTURE");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("AT_WOLF");
		default:
			break;
	}
	return joaat("SMALL_ANIMALS");
}

void func_816(int iParam0, int iParam1)
{
	int iVar0;

	if (func_68() == -1)
	{
		iVar0 = func_87(7);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	}
	func_812(iVar0, iParam0, iParam1);
}

bool func_817(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_344(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_156(iParam0, Var0, Var0.f_4, 0) };
	return func_296(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_818(int iParam0)
{
	int iVar0;

	if (Local_0.f_12)
	{
		func_952();
	}
	func_953(&Local_0);
	func_954(&Local_0);
	switch (iParam0)
	{
		case joaat("A_C_DEER_01"):
			if (((((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_DEER_POOR")))
			{
			}
			break;
		case joaat("A_C_PRONGHORN_01"):
			if (((((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR")))
			{
			}
			break;
		case joaat("A_C_TURKEYWILD_01"):
			if (((((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR")))
			{
			}
			break;
		case joaat("A_C_FOX_01"):
			if (((((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_SKINNED_CARCASS_FOX_POOR")))
			{
			}
			break;
		case joaat("A_C_DUCK_01"):
			if ((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR")))
			{
			}
			break;
		case joaat("A_C_CALIFORNIACONDOR_01"):
			if ((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR")))
			{
			}
			break;
		case joaat("A_C_TURTLESNAPPING_01"):
			if ((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR")))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_ELK"):
			if ((!func_955(&Local_0, joaat("PROVISION_ELK_FUR_PRISTINE")) || !func_955(&Local_0, joaat("PROVISION_ELK_FUR"))) || !func_955(&Local_0, joaat("PROVISION_ELK_FUR_POOR")))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_ALLIGATOR"):
			if ((!func_955(&Local_0, joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE")) || !func_955(&Local_0, joaat("PROVISION_ALLIGATOR_SKIN"))) || !func_955(&Local_0, joaat("PROVISION_ALLIGATOR_SKIN_POOR")))
			{
			}
			break;
		case joaat("A_C_IGUANADESERT_01"):
			if ((!func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY")) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"))) || !func_955(&Local_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR")))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_BUFFALO"):
			if ((!func_955(&Local_0, joaat("PROVISION_BUFFALO_FUR")) || !func_955(&Local_0, joaat("PROVISION_BUFFALO_FUR_POOR"))) || !func_955(&Local_0, joaat("PROVISION_BUFFALO_FUR_PRISTINE")))
			{
			}
			break;
	}
	iVar0 = func_956(&Local_0);
	Local_0.f_12 = 1;
	return iVar0;
}

bool func_819(var uParam0)
{
	if (!func_957())
	{
		return false;
	}
	*uParam0 = Local_0.f_11;
	uParam0->f_1 = Local_0[*uParam0];
	Local_0.f_11++;
	return true;
}

bool func_820(int iParam0, int iParam1, bool bParam2)
{
	*iParam1 = 0;
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (!bParam2 || func_257())
	{
		*iParam1 = func_343(iParam0, func_344(1), -2015960939, 1, 1, 0);
		return *iParam1 > 0;
	}
	return false;
}

bool func_821(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_366(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_958(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_822(int iParam0)
{
	if (func_105(iParam0, 0))
	{
		if (iParam0 == joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"))
		{
			return func_195(1048576);
		}
		if (func_111(iParam0, -1242251796))
		{
			if (func_111(iParam0, 2060589226))
			{
				return func_195(512);
			}
			return func_195(256);
		}
		else if (func_111(iParam0, 1919582297))
		{
			return func_195(4096);
		}
		else if (func_111(iParam0, 1647670816))
		{
			return func_195(16384);
		}
		else if (func_111(iParam0, 1147021565))
		{
			if (((iParam0 != joaat("CONSUMABLE_TONIC_WEIGHT_GAIN") && iParam0 != joaat("CONSUMABLE_TONIC_WEIGHT_LOSS")) && iParam0 != joaat("CONSUMABLE_TONIC_POTENT_WEIGHT_LOSS")) && iParam0 != joaat("CONSUMABLE_TONIC_POTENT_WEIGHT_GAIN"))
			{
				return func_195(2);
			}
			else
			{
				return func_195(65536);
			}
		}
	}
	if (Global_1940144.f_12)
	{
		return func_195(256);
	}
	else
	{
		return func_195(2);
	}
	return func_195(2);
}

int func_823(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];

	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam1, 0);
	if (!func_285(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMDATABASE::_0xF540239F9937033B(iVar0, -489628648);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ITEMDATABASE::_0xF27F01BBF5ACD3F3(iVar0, -489628648, iVar2, &(Var3[iVar2 /*2*/])))
		{
			if (func_105(Var3[iVar2 /*2*/], 0) && Var3[iVar2 /*2*/] == iParam0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_824(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1940311.f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311.f_10931;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_825(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1940311.f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311.f_10931;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_826(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1940311.f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311.f_10931;
	Var0.f_2 = 4;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0);
	return MISC::GET_HASH_KEY(&uVar5);
}

int func_827(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1940311.f_10931))
	{
		return 0;
	}
	Var0 = Global_1940311.f_10931;
	Var0.f_2 = 5;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0);
	return MISC::GET_HASH_KEY(&uVar5);
}

bool func_828(int iParam0)
{
	if (func_959(iParam0))
	{
		return func_33(16);
	}
	else if (func_960(iParam0))
	{
		return func_961();
	}
	else if (func_962(iParam0))
	{
		return func_33(2);
	}
	return true;
}

int func_829(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BEAVER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BEAVER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_BUCK_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_BUCK_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COUGAR_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COUGAR_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_COYOTE_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_COYOTE_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_FOX_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_FOX_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_PANTHER_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_PANTHER_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_RAM_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_RAM_LEGENDARY_03");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_01"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_01");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_02"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_02");
		case joaat("PROVISION_ROLE_NATURALIST_CARCASS_WOLF_LEGENDARY_03"):
			return joaat("PROVISION_ROLE_NATURALIST_CARCASS_SKINNED_WOLF_LEGENDARY_03");
		default:
			break;
	}
	return 0;
}

bool func_831(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_832()
{
	if (func_68() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_833(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

bool func_834(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_210(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_594(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_835(int iParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_836(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_837(iParam0, joaat("CHARACTER"), func_385(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_837(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_105(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

void func_838(int iParam0, int iParam1, var uParam2, int iParam3)
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
	struct<2> Var21[10];

	if (*uParam2 < 10)
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
		Var21[iVar0 /*2*/] = (*uParam2)[iVar0 /*2*/];
		Var21[iVar0 /*2*/].f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
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
							if (Var21[iVar0 /*2*/] == Var19)
							{
								Var21[iVar0 /*2*/].f_1 = (Var21[iVar0 /*2*/].f_1 + (Var19.f_1 - 1f));
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
		if (Var21[iVar0 /*2*/].f_1 != 1f)
		{
			(uParam2[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat((uParam2[iVar0 /*2*/])->f_1) * (Var21[iVar0 /*2*/].f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_839(int iParam0)
{
	return func_964(func_963(iParam0));
}

void func_840(int iParam0, var uParam1)
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

bool func_841(int iParam0, int iParam1)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	if (func_842(iParam0))
	{
		return func_965(func_495(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_842(int iParam0)
{
	if (func_111(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_843(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_292(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_844(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_966(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 33:
			return joaat("ST_MOONSHINE_STILL");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 22:
			return joaat("ST_QUARTERMASTER");
		case 23:
			return joaat("ST_HORSE_TRAINER");
		case 24:
			return joaat("ST_BLACKSMITH");
		case 25:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 26:
			return joaat("ST_COACH");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 12:
			return joaat("ST_BANK");
		case 14:
			return joaat("ST_BAIT");
		case 30:
			return joaat("ST_BARTENDER");
		case 31:
			return joaat("ST_PIANIST");
		case 32:
			return joaat("ST_MUSICIAN");
		case 15:
			return joaat("ST_TRAPPER");
		case 16:
			return joaat("ST_PEARSON");
		case 17:
			return joaat("ST_HOTEL");
		case 27:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 28:
			return joaat("ST_CAMP_LOCKBOX");
		case 29:
			return joaat("ST_CAMP_BUTCHERTABLE");
		case 34:
			return joaat("ST_HANDHELD");
		case 19:
			return joaat("ST_WEAPON_MOD_STORE");
		case 20:
			return joaat("ST_CLOTHING");
		case 21:
			return joaat("ST_CAMP_SHAVING");
		case 18:
			return joaat("ST_PHOTO_STUDIO");
		case 35:
			return joaat("ST_HONOR_MP");
		case 36:
			return joaat("ST_THEATER_MP");
		case 38:
			return joaat("ST_TRAVELLING_SALESMAN");
		case 37:
			return joaat("ST_MOONSHINE_PROPERTY");
		case 39:
			return 374439621;
		default:
			break;
	}
	return 0;
}

int func_846(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1131196.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1131196[iVar0 /*27*/].f_9 == iParam0 && Global_1131196[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_847(var uParam0)
{
	if (!func_967(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_848(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_82(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_849(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_968(iParam0, iParam1, iParam2, iParam3);
}

bool func_850(struct<2> Param0, var uParam2)
{
	if (!func_366(Param0))
	{
		return false;
	}
	func_969(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_851(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_852()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_853()
{
	return Global_1109804.f_5737.f_632;
}

int func_854(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_854(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1109804.f_5737.f_451[iVar0 /*2*/])
	{
		return func_854(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_855(int iParam0)
{
	return Global_1109804.f_5737.f_451[iParam0 /*2*/].f_1;
}

bool func_856(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 70);
}

bool func_857(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_970();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_858(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_859(struct<5> Param0)
{
	return func_971(Param0, 52, 1);
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_861(int iParam0)
{
	if (!func_481(iParam0))
	{
		return false;
	}
	return func_482(iParam0, 2, 1);
}

int func_862(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_972())
	{
		return 0;
	}
	if (!func_358())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_864(&Global_0, 8);
	}
	func_864(&Global_0, 1);
	return 1;
}

void func_863(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_152(239, 0);
			break;
		case 16:
			func_152(240, 0);
			break;
		case 34:
			func_152(241, 0);
			break;
		case 52:
			func_152(242, 0);
			break;
		case 2:
			func_152(243, 0);
			break;
		case 3:
			func_152(244, 0);
			break;
		case 53:
			func_152(245, 0);
			break;
		case 15:
			func_152(246, 0);
			break;
		case 24:
			func_152(247, 0);
			break;
		case 38:
			func_152(248, 0);
			break;
		case 27:
			func_152(249, 0);
			break;
		case 13:
			func_152(250, 0);
			break;
		case 19:
			func_152(251, 0);
			break;
		case 20:
			func_152(252, 0);
			break;
		case 35:
			func_152(253, 0);
			break;
		case 39:
			func_152(254, 0);
			break;
		case 50:
			func_152(255, 0);
			break;
		case 7:
			func_152(256, 0);
			break;
		case 21:
			func_152(257, 0);
			break;
		case 18:
			func_152(258, 0);
			break;
		case 6:
			func_152(259, 0);
			break;
		case 30:
			func_152(260, 0);
			break;
		case 49:
			func_152(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_152(263, 0);
			break;
		case 8:
			func_152(264, 0);
			break;
		case 29:
			func_152(265, 0);
			break;
		case 32:
			func_152(266, 0);
			break;
		case 12:
			func_152(267, 0);
			break;
		case 28:
			func_152(268, 0);
			break;
		case 51:
			func_152(269, 0);
			break;
	}
}

void func_864(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_865()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_866(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_973(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546;
		case 1:
			return Global_1956200.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_867(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
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

int func_868(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_973(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_1;
		case 1:
			return Global_1956200.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_869(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_974(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
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
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
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

int func_870(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_973(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_2;
		case 1:
			return Global_1956200.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_871(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

float func_872(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_975();
	func_976(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_977(iParam0, 2);
	if (func_979(iVar0, func_978(iParam0, 2), 1))
	{
		func_980(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_152(103, bParam2);
		return 0f;
	}
	func_981(iParam0, func_975(), 2);
	func_980(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_873(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

int func_874(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_973(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_982(iVar0, iParam0, fParam1))
	{
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
			func_983(iParam0, 7000, iParam5);
		}
		func_984(iVar0, iParam0, fParam1);
		func_985(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_875(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_986(iParam0))
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
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_987(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_704(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_987(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_988(joaat("STATUS_EFFECT__TRACKING"));
			func_706(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_987(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_705(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_988(joaat("STATUS_EFFECT__POISON"));
			func_989(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_989(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_989(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_876()
{
	if (Global_1956200.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_990(Global_1956200.f_1431.f_107, 0);
}

void func_877(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_991(13, 2);
	iVar1 = func_992(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_993(fVar0, 0f, 100f);
	iVar2 = func_992(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200.f_1431.f_107 = func_975();
		func_994(&(Global_1956200.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_995(13, fVar0, 2);
	Global_1956200.f_1431.f_99 = iParam1;
}

int func_878(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_335(iVar0);
}

int func_879()
{
	return Global_1952637.f_1675;
}

int func_880(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<14> Var22;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_156(joaat("WARDROBE"), func_344(1), 1034665895, 1) };
	iVar19 = func_570(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		}
		else if (iVar19 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
		{
			iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
		}
		return iVar14;
	}
	Var22 = { func_424(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_425(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_228(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == joaat("CLOTHING_MP_FEMALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (Var0.f_4 == joaat("CLOTHING_MP_MALE_PLAYER_CHARACTER"))
			{
				iVar14 = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_242(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_157(Var0, 1, 0);
			}
			func_242(iVar20);
			return iVar14;
		}
		func_242(iVar20);
	}
	return 0;
}

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793 /* GXTEntry: "Outfit One" */;
		case 2:
			return 97391779 /* GXTEntry: "Outfit Two" */;
		case 3:
			return -808817534 /* GXTEntry: "Outfit Three" */;
		case 4:
			return 1270922359 /* GXTEntry: "Outfit Four" */;
		case 5:
			return -2011879201 /* GXTEntry: "Outfit Five" */;
		case 6:
			return -1063340820 /* GXTEntry: "Outfit Six" */;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201 /* GXTEntry: "Outfit Eight" */;
		case 9:
			return 1632140501 /* GXTEntry: "Outfit Nine" */;
		case 10:
			return 967218463 /* GXTEntry: "Outfit Ten" */;
		default:
			break;
	}
	return 0;
}

bool func_882(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1952637.f_3334.f_26 <= 1)
	{
		Global_1952637.f_3334.f_26 = 0;
		*uParam1 = 0;
		Global_1952637.f_3334[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1952637.f_3334.f_26 - 1))
	{
		if (iParam0 == Global_1952637.f_3334[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1952637.f_3334.f_26 - 1))
		{
			Global_1952637.f_3334[iVar0] = Global_1952637.f_3334[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1952637.f_3334.f_26 = (Global_1952637.f_3334.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1952637.f_3334[Global_1952637.f_3334.f_26] = 0;
		func_718(iParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_883(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_889(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_997(uParam0, func_996(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_564(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_996(iVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_336(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_998(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_999(iVar3) && func_747(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1001(uParam0, iVar11, func_1000(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/]) && func_1000(uParam0->f_1[34 /*3*/]) == 0) && !func_329(32)) && !func_329(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_895(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						func_567(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_884(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_885(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_886(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_887(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_888(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_889(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_557();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

void func_890(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_111(iVar1, 160827531) || func_133(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_891(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_892(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_133(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

bool func_893(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_133(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_894(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_895(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_424(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_425(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1002(iVar0, iVar1, iParam1);
		}
		func_242(iVar0);
	}
	return iVar2;
}

void func_896(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, -1527414429)) && !func_111(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_111(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_565(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
			func_565(iVar0, iParam3);
		}
	}
}

void func_897(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_111(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_565(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_133(iVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_565(iParam2, iParam3);
			}
		}
	}
}

void func_898(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_565(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_565(iVar0, iParam3);
			func_739(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, -1527414429)) && !func_111(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_899(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_565(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && !func_111(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

bool func_900(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_336(iParam0, 1) /*3*/] != Global_1952637.f_83[func_336(iParam0, 1) /*12*/];
}

void func_901(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_565(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_565(iVar0, iParam1);
	}
}

void func_902(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_133(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_895(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_565(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, -1473580422))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_111(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_746(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_133(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_111(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_565(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_133(iVar1) == 1868067663 && func_111(iParam2, -1016441646))
		{
			func_1003(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_133(uParam0->f_1[iVar0 /*3*/]))
	{
		func_565(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, -1650340550))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_133(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
}

void func_903(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_133(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_895(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_111(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_909(uParam0, iParam3, 1, 0);
		}
		else if (func_111(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	func_565(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iVar1, 1090938458)) && func_111(iParam2, 475297062))
	{
		func_1003(uParam0, iVar0, iParam3);
	}
}

void func_904(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	func_565(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_895(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_111(iVar1, 353024991))
	{
		func_1003(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_133(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
}

void func_905(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_133(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_133(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_565(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_565(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_111(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_909(uParam0, iParam3, 1, 0);
		}
		else if (func_111(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
}

void func_906(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1003(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_111(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_909(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_565(iVar0, iParam2);
		}
	}
}

void func_907(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_565(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_565(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_111(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_133(iVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_565(iVar0, iParam3);
		}
	}
}

void func_908(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_111(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam3);
	}
}

void func_909(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_133(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_565(iVar0, iParam1);
	}
}

void func_910(var uParam0, int iParam1, int iParam2)
{
	Global_17411.f_55.f_644.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_911(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_910(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_912(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1 /*120*/] = (Global_17411.f_55.f_644.f_33[iParam1 /*120*/] || iParam0);
	}
}

bool func_913(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1004(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_1005())
	{
		return func_1004(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_1004(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_914(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_915(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1296859.f_22[iVar0])
	{
		func_1006(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1007(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

void func_916(var uParam0)
{
	func_766(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_766(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_766(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_917(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_1008(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

bool func_918(int iParam0)
{
	var uVar0;

	if (func_68() != -1)
	{
		return false;
	}
	if (func_616(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_921(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_293(iParam0, 1);
}

void func_919(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_130(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_929(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_270(iParam0, 0, 0, 0) == 0))
		{
			if (func_68() == -1)
			{
				func_776(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_399(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_920(int iParam0, int iParam1)
{
	if (func_111(iParam0, 58855631))
	{
		func_622(iParam0, -915411861, iParam1, 1);
	}
}

bool func_921(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_1009(&iParam0);
	if (!func_105(iParam0, 0) && !func_510(func_290(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_294(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_384(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_376(0) };
		Var4.f_9 = -1591664384;
		if (!func_378(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_379(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_377(iParam0, 1))
		{
			if (!func_378(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_379(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_493(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_343(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_922()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_175(Global_34, 1369124074)) && !func_175(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_923(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_924(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

void func_925(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_39.f_3643[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_926(int iParam0)
{
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
			func_1010(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1011(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1011(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1011(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_1012(1);
			break;
		case 33:
			func_1013(1);
			break;
		case 34:
			func_1014(1);
			break;
		case 35:
			break;
		case 36:
			func_1015(0);
			break;
		case 37:
			func_1016(0);
			break;
		case 38:
			func_1017(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_865() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_152(677, 0);
			break;
		case 3:
			if (func_865() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_152(678, 0);
			break;
		case 4:
			if (func_865() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_152(679, 0);
			break;
		case 5:
			if (func_865() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1018("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_152(680, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_68() == -1)
			{
				if (!func_293(1013902307, 1))
				{
					func_779(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_68() == -1)
			{
				if (!func_293(1013902307, 1))
				{
					func_779(1013902307, 1, 752097756);
				}
				if (!func_293(142640135, 1))
				{
					func_779(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_68() == -1)
			{
				if (!func_293(786809402, 1))
				{
					func_779(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_68() == -1)
			{
				if (!func_293(786809402, 1))
				{
					func_779(786809402, 1, 752097756);
				}
				if (!func_293(-518019409, 1))
				{
					func_779(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940258.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_927(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1019(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_928(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_929(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_930(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_1020(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_931(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_294(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_155(iParam0, 0, 0) };
	if (func_921(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_158(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_210(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_932(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_921(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_158(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_210(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_933(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_975();
	func_994(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_934(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_696(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, joaat("AMMO_ARROW")) <= 0)
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
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
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

bool func_935()
{
	return false;
}

bool func_936(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_937(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_938(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_771(49))
			{
				if (!func_771(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_771(50))
			{
				if (!func_771(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_939(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_68() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_293(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_105(iVar25, 0) && func_111(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_940(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1021(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_626(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_941(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_1022() || func_1023())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_626(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_626(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_391(func_627(joaat("CAREER_CASH")), iVar1);
	}
}

char* func_942(int iParam0)
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

int func_943(int iParam0)
{
	var uVar0;

	if (!func_661(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_944(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_1024(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_400(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_492(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_492(iParam0, iParam1) - iParam2) < 0)
		{
			func_944(iParam0, iParam1, func_270(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1025(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_399(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_945(int iParam0)
{
	if (!func_105(iParam0, 0))
	{
		return false;
	}
	return (func_111(iParam0, 1686880204) || INVENTORY::_0x4AEF1FB5B9011D75(iParam0));
}

int func_946(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_ALLIGATOR_SKIN");
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_FUR");
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 6:
			return joaat("PROVISION_BOAR_SKIN");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 9:
			return joaat("PROVISION_BUCK_FUR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COYOTE_FUR");
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 18:
			return joaat("PROVISION_DEER_HIDE");
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 21:
			return joaat("PROVISION_FOX_FUR");
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 24:
			return joaat("PROVISION_GOAT_HAIR");
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 27:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 30:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 31:
			return joaat("PROVISION_PANTHER_FUR");
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 34:
			return joaat("PROVISION_PIG_SKIN");
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 37:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 40:
			return joaat("PROVISION_RAM_HIDE");
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 43:
			return joaat("PROVISION_SHEEP_WOOL");
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 46:
			return joaat("PROVISION_WOLF_FUR");
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 49:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01");
		case 50:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02");
		case 51:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03");
		case 52:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01");
		case 53:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02");
		case 54:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03");
		case 55:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01");
		case 56:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02");
		case 57:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03");
		case 58:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01");
		case 59:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02");
		case 60:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03");
		case 61:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01");
		case 62:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02");
		case 63:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03");
		case 64:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01");
		case 65:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02");
		case 66:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03");
		case 67:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01");
		case 68:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02");
		case 69:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03");
		case 70:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01");
		case 71:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02");
		case 72:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03");
		case 73:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01");
		case 74:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02");
		case 75:
			return joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03");
		case 76:
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

int func_947(int iParam0)
{
	if (!func_809(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_948(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 3;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_01"):
			return 73;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
		case joaat("PROVISION_DEER_HIDE"):
			return 18;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_03"):
			return 51;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_01"):
			return 52;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_02"):
			return 74;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 43;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_02"):
			return 65;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_02"):
			return 53;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_02"):
			return 56;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_01"):
			return 61;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_03"):
			return 66;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BOAR_LEGENDARY_03"):
			return 54;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_WOLF_LEGENDARY_03"):
			return 75;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_02"):
			return 71;
		case joaat("PROVISION_BUCK_FUR"):
			return 9;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 0;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_01"):
			return 70;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_RAM_LEGENDARY_03"):
			return 72;
		case joaat("PROVISION_RAM_HIDE"):
			return 40;
		case joaat("PROVISION_PANTHER_FUR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_01"):
			return 55;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_02"):
			return 50;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
		case joaat("PROVISION_PIG_SKIN"):
			return 34;
		case 0:
			return 76;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BEAVER_LEGENDARY_01"):
			return 49;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_03"):
			return 60;
		case joaat("PROVISION_FOX_FUR"):
			return 21;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_02"):
			return 59;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 37;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COUGAR_LEGENDARY_01"):
			return 58;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_02"):
			return 68;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_BUCK_LEGENDARY_03"):
			return 57;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_03"):
			return 63;
		case joaat("PROVISION_WOLF_FUR"):
			return 46;
		case joaat("PROVISION_COYOTE_FUR"):
			return 15;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_FOX_LEGENDARY_01"):
			return 64;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_03"):
			return 69;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
		case joaat("PROVISION_GOAT_HAIR"):
			return 24;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_COYOTE_LEGENDARY_02"):
			return 62;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 30;
		case joaat("PROVISION_ROLE_NATURALIST_PELT_PANTHER_LEGENDARY_01"):
			return 67;
		case joaat("PROVISION_BOAR_SKIN"):
			return 6;
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

bool func_949(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_950(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_950(iVar1, bParam1))
	{
		iVar2 = func_950(iVar1, bParam1);
	}
	if (!bParam1)
	{
		Global_1291106[iVar1 /*19*/].f_7 = (Global_1291106[iVar1 /*19*/].f_7 - iVar2);
	}
	else
	{
		Global_1291106[iVar1 /*19*/].f_8 = (Global_1291106[iVar1 /*19*/].f_8 - iVar2);
	}
	if (func_950(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			Global_1291106[iVar1 /*19*/].f_7 = 0;
		}
		else
		{
			Global_1291106[iVar1 /*19*/].f_8 = 0;
		}
	}
	else if (func_950(iVar1, bParam1) > func_951(bParam1))
	{
		if (!bParam1)
		{
			Global_1291106[iVar1 /*19*/].f_7 = func_951(bParam1);
		}
		else
		{
			Global_1291106[iVar1 /*19*/].f_8 = func_951(bParam1);
		}
	}
	return true;
}

int func_950(int iParam0, bool bParam1)
{
	return func_1026(bParam1, Global_1291106[iParam0 /*19*/].f_8, Global_1291106[iParam0 /*19*/].f_7);
}

int func_951(bool bParam0)
{
	return func_1026(bParam0, Global_1901947.f_681.f_30, Global_1901947.f_681.f_29);
}

void func_952()
{
	struct<9> Var0;

	Var0 = 7;
	Var0.f_8 = -1;
	MISC::_COPY_MEMORY(&Local_0, &Var0, 13);
}

void func_953(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_954(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8 = 0;
			break;
		case 1:
			uParam0->f_8 = (uParam0->f_10 - 1);
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_955(var uParam0, int iParam1)
{
	if (!func_1027(uParam0))
	{
		return false;
	}
	if (iParam1 != 0)
	{
		(*uParam0)[uParam0->f_8] = iParam1;
		if (!func_1028(uParam0))
		{
		}
		return true;
	}
	return false;
}

int func_956(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			return uParam0->f_8;
		case 1:
			iVar0 = ((uParam0->f_10 - uParam0->f_8) - 1);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			else if (iVar0 != uParam0->f_10)
			{
			}
			break;
	}
	return iVar0;
}

bool func_957()
{
	if (Local_0.f_11 < 0 || Local_0.f_11 >= 7)
	{
		return false;
	}
	if (Local_0.f_9 == 0)
	{
		if (Local_0.f_11 >= func_956(&Local_0))
		{
			return false;
		}
	}
	return true;
}

int func_958(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_684(Param0);
	}
	return -1;
}

bool func_959(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
		case joaat("CI_TAG_FOLDER_COLLECTOR_MAPS"):
		case joaat("CI_TAG_FOLDER_RECIPE_PAMPHLETS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPER_SCRAPS"):
		case joaat("CI_TAG_FOLDER_BUSINESS_CARDS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPERS"):
		case joaat("CI_TAG_FOLDER_DINOSAUR_NOTES"):
		case joaat("CI_TAG_FOLDER_ROCK_CARVING_NOTES"):
		case joaat("CI_TAG_FOLDER_BOOKS"):
		case joaat("CI_TAG_FOLDER_DRAWINGS"):
		case joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"):
		case joaat("CI_TAG_FOLDER_MAPS"):
		case joaat("CI_TAG_FOLDER_NOTES"):
			return true;
	}
	if (func_1029(iParam0))
	{
		return true;
	}
	return false;
}

bool func_960(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return true;
	}
	return false;
}

bool func_961()
{
	return func_33(1);
}

bool func_962(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_GAMEY_BIRD"):
		case joaat("CI_TAG_FOLDER_BIG_GAME"):
		case joaat("CI_TAG_FOLDER_GRISTLY_MUTTON"):
		case joaat("CI_TAG_FOLDER_HERPTILE_MEAT"):
		case joaat("CI_TAG_FOLDER_SUCCULENT_FISH"):
		case joaat("CI_TAG_FOLDER_STRINGY_MEAT"):
		case joaat("CI_TAG_FOLDER_MATURE_VENISON"):
		case joaat("CI_TAG_FOLDER_GAME"):
		case joaat("CI_TAG_FOLDER_CRUSTACEAN"):
		case joaat("CI_TAG_FOLDER_FLAKEY_FISH"):
		case joaat("CI_TAG_FOLDER_PLUMP_BIRD"):
		case joaat("CI_TAG_FOLDER_PRIME_BEEF"):
		case joaat("CI_TAG_FOLDER_GRITTY_FISH"):
		case joaat("CI_TAG_FOLDER_TENDER_PORK"):
		case joaat("CI_TAG_FOLDER_EXOTIC_BIRD"):
			return true;
	}
	return false;
}

int func_963(int iParam0)
{
	if (!func_233(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_636() == 139)
	{
		return 139;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
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
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
		case 4:
			return 14;
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
		case 40:
			return 95;
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 136;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 137;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 149:
			return 138;
		case 150:
			return 25;
		case 151:
			return 3;
		case 148:
			return 134;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_964(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_965(int iParam0, int iParam1, bool bParam2)
{
	if (!func_511(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1030(iParam0, iParam1);
	}
	return true;
}

void func_966(int iParam0, int iParam1, var uParam2, int iParam3)
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
	float fVar21[15];

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
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
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
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_133((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_967(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_968(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_1031(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_969(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_970()
{
	return Global_1071686.f_28448[32 /*4*/].f_3;
}

struct<8> func_971(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(&Var0, &vParam0))
	{
	}
	return Var0;
}

bool func_972()
{
	return !Global_1572887.f_9;
}

int func_973(int iParam0)
{
	return func_1033(func_1032(iParam0));
}

bool func_974(int iParam0)
{
	float fVar0;

	fVar0 = (func_1034(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_975()
{
	return Global_1902818;
}

void func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1035(*iParam0);
	iVar1 = func_1036(*iParam0);
	iVar2 = func_1037(*iParam0);
	iVar3 = func_1038(*iParam0);
	iVar4 = func_1039(*iParam0);
	iVar5 = func_1040(*iParam0);
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
		iVar7 = func_1041(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1042(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_977(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/].f_2;
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_978(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/].f_1;
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

bool func_979(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1043(iParam1) || !func_1043(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_980(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_981(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_982(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1044(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_983(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_984(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1045(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1046(iParam1), fParam2, -1);
	}
}

void func_985(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_973(2);
	}
	uVar0 = Global_1296859.f_21;
	func_1047(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1048(iParam0, uVar0, iParam3);
	}
}

bool func_986(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

char* func_987(int iParam0)
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

void func_988(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1146212.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146212.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_1049(iVar0, 1);
		if (Global_1146212.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_1050(iVar0);
			Global_1146212.f_47689.f_1.f_42 = (Global_1146212.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1146212.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1146212.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_989(int iParam0, bool bParam1, bool bParam2)
{
	func_874(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_990(int iParam0, bool bParam1)
{
	return func_979(func_975(), iParam0, bParam1);
}

float func_991(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_973(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_26[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

int func_992(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_993(float fParam0, float fParam1, float fParam2)
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

void func_994(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1035(*iParam0);
	iVar1 = func_1036(*iParam0);
	iVar2 = func_1037(*iParam0);
	iVar3 = func_1038(*iParam0);
	iVar4 = func_1039(*iParam0);
	iVar5 = func_1040(*iParam0);
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
	iVar6 = func_1041(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1041(iVar1, iVar0);
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
	func_1042(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_995(int iParam0, float fParam1, int iParam2)
{
	if (!func_1051(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	func_1052(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1296859.f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1296859.f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_996(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_997(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1053(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_1054(iVar0, iParam1))
			{
				vVar4 = { func_1055(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1952637.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1056(iVar0, 4))
				{
					func_1057(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1058(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1952637.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_998(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_336(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_336(iParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_999(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1952637.f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_884(&(Global_1952637.f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

int func_1000(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_105(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_1001(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_111(uParam0->f_1[34 /*3*/], -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1056(iVar0, 16);
		if (bVar1)
		{
			func_1057(iVar0, 16, 9);
		}
		if (Global_1952637.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_565(iVar0, iParam3);
			}
			if (!bParam2 && func_1000(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_1054(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_567(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_565(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_567(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1002(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_557() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_228(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_1000(Var1.f_4) != 0)
			{
			}
			else if (func_111(Var1.f_4, -166674229))
			{
			}
			else if (func_111(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_133(Var1.f_4);
				if (func_1060(iParam2, func_1059(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

void func_1003(var uParam0, int iParam1, int iParam2)
{
	if (func_111(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_729(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1952637.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_565(iParam1, iParam2);
	}
}

bool func_1004(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1005()
{
	return Global_1102219.f_3672;
}

void func_1006(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_1007(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_1007(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_1008(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1009(int iParam0)
{
	if (!func_105(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1061(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

void func_1010(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
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

void func_1011(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1956200.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956200.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956200.f_5.f_7, iParam0);
		if (iVar0 == Global_1956200.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956200.f_5.f_14[iParam0 /*102*/]);
}

void func_1012(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_1013(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_1014(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_1015(bool bParam0)
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

void func_1016(bool bParam0)
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

void func_1017(bool bParam0)
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

var func_1018(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_1019(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::_0xD6F6ACF4392187FB(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_1062(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1063(uParam1, iParam0, Var3);
	return 1;
}

int func_1020(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1021(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1064())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_1022()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_1023()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

bool func_1024(int iParam0, int iParam1, int iParam2)
{
	if (!func_105(iParam1, 0))
	{
		return false;
	}
	return func_492(iParam0, iParam1) >= iParam2;
}

int func_1025(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_105(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_836(iParam0) };
	Var5 = { func_837(iParam0, iParam1, Var0, Var0.f_4) };
	return func_1065(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_1026(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_1027(var uParam0)
{
	if (uParam0->f_8 < 0 || uParam0->f_8 >= 7)
	{
		return false;
	}
	return true;
}

bool func_1028(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8++;
			break;
		case 1:
			if (uParam0->f_10 <= 0)
			{
				return false;
			}
			uParam0->f_8 = (uParam0->f_8 - 1);
			break;
		default:
			return false;
	}
	return true;
}

bool func_1029(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_CIG_CARD_SPT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_AML_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GUN_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GRL_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_LND_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ACT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PLT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_INV_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ART_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PAM_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_HOR_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_VEH_SET"):
			return true;
	}
	return false;
}

bool func_1030(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

void func_1031(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1066(&(uParam0->f_4));
}

bool func_1032(int iParam0)
{
	return func_1004(&(Global_1956200.f_1565), iParam0, 1);
}

int func_1033(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_1034(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1067(2)));
}

int func_1035(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1026(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1036(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1037(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1038(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1039(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1040(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1041(int iParam0, int iParam1)
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

void func_1042(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1068(iParam0, iParam6);
	func_1069(iParam0, iParam5);
	func_1070(iParam0, iParam4);
	func_1071(iParam0, iParam3);
	func_1072(iParam0, iParam2);
	func_1073(iParam0, iParam1);
}

bool func_1043(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1040(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1039(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1038(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1035(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1036(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1037(iParam0);
	if (iVar5 < 1 || iVar5 > func_1041(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1044(int iParam0)
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

char* func_1045(int iParam0)
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

char* func_1046(int iParam0)
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

void func_1047(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1048(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_973(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_1050(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1074(iParam0))
	{
		return 0;
	}
	iVar0 = func_1049(iParam0, 1);
	if (!func_1075(Global_1146212.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_1076(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146212.f_35859[iVar3 /*6*/][iVar4];
		switch (func_1077(iParam0, iVar1))
		{
			case 0:
				func_1078(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212.f_35859.f_11700)
				{
					if (Global_1146212.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1146212.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1078(iVar1, iParam0, iVar4);
						func_1079(&(Global_1146212.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146212.f_35859.f_11700 = (Global_1146212.f_35859.f_11700 - 1);
						Global_1146212.f_35859.f_9503[iVar5 /*3*/] = { Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/] };
						func_1079(&(Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1080(iVar1, 1);
				func_1081(iVar2, -1);
				if (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1082(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212.f_35859.f_9502)
					{
						if (Global_1146212.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212.f_35859.f_9302[iVar6] = -1;
							Global_1146212.f_35859.f_9502 = (Global_1146212.f_35859.f_9502 - 1);
							Global_1146212.f_35859.f_9302[iVar6] = Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502];
							Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212.f_35859.f_919[iVar0 /*12*/] = -1;
			func_1083(&(Global_1146212.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_1051(int iParam0)
{
	if (func_986(iParam0))
	{
		return true;
	}
	else if (func_1084(iParam0))
	{
		return true;
	}
	return false;
}

void func_1052(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_973(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_1053(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1054(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_1055(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_1056(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_1057(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 - (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1));
}

void func_1058(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 || iParam1);
}

int func_1059(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1060(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1061(int iParam0)
{
	return func_111(iParam0, 1279601681);
}

void func_1062(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_1063(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1008(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

bool func_1064()
{
	return Global_1913504.f_127 == 0;
}

int func_1065(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_515(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1085(iParam0, *uParam2, &Var0, 0))
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

void func_1066(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

int func_1067(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_866(2) * 2;
		case 1:
			return func_870(2) * 2;
		case 2:
			return func_868(2) * 2;
		default:
			break;
	}
	return -1;
}

void func_1068(int iParam0, int iParam1)
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

void func_1069(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1070(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1036(*iParam0);
	iVar1 = func_1035(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1041(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1071(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1072(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1073(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_1074(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1075(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1076(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_1077(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1086(iParam0);
	iVar1 = Global_1296859;
	iVar2 = func_1080(iParam1, 1);
	switch (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1078(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1074(iParam1))
	{
		return 0;
	}
	if (!func_1087(iParam0))
	{
		return 0;
	}
	iVar0 = func_1080(iParam0, 1);
	func_1088(iParam0, iParam1, iParam2);
	if (func_1089(Global_1146212.f_35859.f_3116[iVar0 /*31*/]) && func_1090(iParam0, Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1091(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1092(vVar1))
		{
			if (func_1093(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1094(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1095(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1095(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1079(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1080(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_1081(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1082(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1083(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

bool func_1084(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1085(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1086(int iParam0)
{
	if (func_1096(iParam0))
	{
		return (func_1097(iParam0) % 32);
	}
	return Global_1296859;
}

bool func_1087(int iParam0)
{
	int iVar0;

	iVar0 = func_1080(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1088(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1049(iParam1, 1);
	iVar1 = func_1080(iParam0, 1);
	iVar2 = func_1076(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1098(iVar3, 1);
		if (!func_1099(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 - func_1100(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1101(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1102(iVar6))
		{
		}
		else
		{
			iVar8 = func_1103(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1] = (Global_1146212.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146212.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146212.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1104(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1089(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1090(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1087(iParam0))
	{
		return false;
	}
	if (!func_1105(iParam1))
	{
		return false;
	}
	iVar0 = func_1106(iParam1, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1091(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1107(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146212.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1092(vector3 vParam0)
{
	if (!func_1087(vParam0.x))
	{
		return false;
	}
	if (!func_1074(vParam0.y))
	{
		return false;
	}
	if (!func_1108(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1093(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1049(iParam1, 1);
	iVar1 = func_1080(iParam0, 1);
	iVar2 = func_1076(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1296859.f_21;
	if (Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1098(iVar3, 1);
		if (!func_1099(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 + func_1100(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1109(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1102(iVar6))
		{
		}
		else if (!func_1110(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1103(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146212.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1111(iVar6);
			}
		}
		iVar7++;
	}
	func_1112(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1094(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1105(iParam0))
	{
		return;
	}
	iVar0 = func_1106(iParam0, 1);
	if (!func_1087(iParam1))
	{
		return;
	}
	if (!func_1074(iParam2))
	{
		return;
	}
	if (!func_1108(iParam3))
	{
		return;
	}
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1095(int iParam0)
{
	int iVar0;

	if (!func_1105(iParam0))
	{
		return;
	}
	iVar0 = func_1106(iParam0, 1);
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_1096(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1097(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (func_1096(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1113(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1114(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1115(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1116(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1117(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1118(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1098(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
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

bool func_1099(int iParam0)
{
	int iVar0;

	iVar0 = func_1098(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1100(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1119(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1099(iParam0))
	{
		return;
	}
	iVar0 = func_1098(iParam0, 1);
	if (!func_1120(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_1121(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1122(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] != Global_1146212.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1146212.f_47561[iVar1 /*25*/].f_23 = (Global_1146212.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23];
			Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1102(int iParam0)
{
	int iVar0;

	iVar0 = func_1103(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_1104(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1123();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1124();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_1125(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1125(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1125(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_152(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1125(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1127(func_1126(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 1f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1128();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1120(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1120(16);
			break;
	}
}

bool func_1105(int iParam0)
{
	int iVar0;

	iVar0 = func_1106(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_1107(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1129(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212.f_35859.f_11700)
	{
		iVar64 = func_1080(Global_1146212.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1146212.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146212.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1130(Global_1146212.f_35859.f_9503[iVar65 /*3*/], Global_1146212.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_1131(Global_1146212.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_1108(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1109(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1099(iParam0))
	{
		return;
	}
	iVar0 = func_1098(iParam0, 1);
	if (!func_1120(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_1121(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1122(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] == Global_1146212.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = Global_1146212.f_2169[iVar0 /*205*/];
	Global_1146212.f_47561[iVar1 /*25*/].f_23++;
}

bool func_1110(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1132(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1123();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1124();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1125(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1125(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1125(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_152(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1125(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_1126(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1133(iParam0, 0));
			func_1134(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1133(iParam0, 1));
			func_1134(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1133(iParam0, 2));
			func_1134(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1133(iParam0, 3));
			func_1134(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1126(iParam0);
			func_1134(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1126(iParam0);
			func_1134(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1135();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1120(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1120(16);
			break;
	}
}

void func_1112(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1136(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1137(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1296859.f_8, sVar1, false, 0, 0);
}

bool func_1113(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1114(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1115(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1116(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1117(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1118(int iParam0)
{
	int iVar0;

	iVar0 = func_1049(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1119(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1138(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1120(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146212.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212.f_2165 >= 21)
	{
		return false;
	}
	Global_1146212.f_2143[Global_1146212.f_2165] = iParam0;
	Global_1146212.f_2165++;
	return true;
}

bool func_1121(int iParam0)
{
	int iVar0;

	iVar0 = func_1122(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_1123()
{
	bool bVar0;
	bool bVar1;

	if (Global_1146212.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 550, bVar0);
	if (Global_1146212.f_21645[4 /*209*/].f_208)
	{
		if (!func_82(Global_1298536[Global_1296859 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 556, bVar1);
}

void func_1124()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1146212.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 263, bVar0);
}

char* func_1125(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1126(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_1127(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1193972[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1193972[iVar0 /*8*/].f_7 = 1;
			Global_1193972[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_1128()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1296859.f_8);
}

int func_1129(int iParam0)
{
	int iVar0;

	if (!func_1105(iParam0))
	{
		return -1;
	}
	iVar0 = func_1106(iParam0, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/];
}

bool func_1130(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1087(iParam0))
	{
		return false;
	}
	iVar0 = func_1080(iParam0, 1);
	iVar2 = Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1089(Global_1146212.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146212.f_35859.f_9286[func_1106(iVar2, 1) /*3*/];
		Var4 = { func_1131(iVar3) };
		if (iVar3 != iParam0 && Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1146212.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1139() && !func_1140())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1139())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1086(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1086(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				return false;
			}
			if (!GANG::_0x81FB74C83C2ED69F(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_1086(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1296859 && !func_761(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (!func_752(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956200.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1086(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (PED::_0x0C31C51168E80365(Global_1296859.f_8) != PLAYER::GET_PLAYER_PED(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1131(int iParam0)
{
	int iVar0;

	iVar0 = func_1080(iParam0, 1);
	return Global_1146212.f_35859.f_3116[iVar0 /*31*/];
}

bool func_1132(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1138(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1133(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1134(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1193972[iVar0 /*8*/]) && !Global_1193972[iVar0 /*8*/].f_6)
		{
			Global_1193972[iVar0 /*8*/].f_5 = iParam0;
			Global_1193972[iVar0 /*8*/].f_1 = iParam1;
			Global_1193972[iVar0 /*8*/].f_2 = iParam2;
			Global_1193972[iVar0 /*8*/].f_3 = iParam3;
			Global_1193972[iVar0 /*8*/].f_4 = iParam4;
			Global_1193972[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1135()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1296859.f_8, 0.7f);
}

char* func_1136(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1137(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_1138(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_1141(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1139()
{
	return Global_1572887.f_6;
}

bool func_1140()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_366(func_365(0)))
	{
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_416(Global_524288.f_40400))
	{
		return true;
	}
	return false;
}

int func_1141(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

