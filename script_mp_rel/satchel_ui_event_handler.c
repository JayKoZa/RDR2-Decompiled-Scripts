#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar0);
	func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_3(&uVar0);
	}
	func_4(1);
	bVar5 = PED::_0xD5FE956C70FF370B(Global_34);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_34) || PED::_0x3E592D0486DEC0F6(Global_34)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || PED::_0x3AA24CCC0D451379(Global_34))
		{
			func_5(0);
		}
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if ((PED::_0xD5FE956C70FF370B(Global_34) != bVar5 && !Global_1939231->f_6) && func_6(Global_1939231->f_10478, 1224357681) != 0)
		{
			func_7(func_6(Global_1939231->f_10478, 1224357681));
			bVar5 = !bVar5;
		}
		if (Global_1939231->f_4)
		{
			func_8();
			func_9();
			func_10(Global_1939231->f_10477);
			if (Global_1939231->f_34 == 0)
			{
			}
			else
			{
				func_7(Global_1939231->f_34);
			}
			func_2();
			if (Global_1939231->f_10485 != 0 && !func_11())
			{
				func_12(Global_1939231->f_10485, &(Var1.f_3));
			}
			Global_1939231->f_4 = 0;
			Global_1939231->f_34 = 0;
		}
		if (func_13())
		{
			func_12(Global_1939231->f_10485, &(Var1.f_3));
			func_2();
			func_14(0);
			Global_1939231->f_6 = 0;
		}
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var1))
			{
				Global_1939231->f_6 = 0;
				switch (Var1)
				{
					case -1740156697:
						Global_1939231->f_10485 = Var1.f_1;
						if (!func_11())
						{
							switch (Var1.f_2)
							{
								case -1287062382:
									func_15(Var1.f_1, &(Var1.f_3));
									break;
								case -1706653313:
								case 1086195311:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_12(Var1.f_1, &(Var1.f_3));
									break;
								case -1715238242:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_16(Var1.f_1, &(Var1.f_3));
									break;
							}
						}
						else
						{
							func_2();
							ATTRIBUTE::_0xD962F8579D702DB5();
						}
						func_17(Var1.f_2);
						func_4(2);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_18();
						func_2();
						ATTRIBUTE::_0xD962F8579D702DB5();
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var1.f_2)
						{
							case -1706653313:
							case -594808149:
							case 1086195311:
								if (func_19() || func_20())
								{
									if (func_21(Global_1939231->f_10478, 0, 0, 0, 1, 0, 0))
									{
										func_5(0);
									}
								}
								else if (func_22())
								{
								}
								else if (!func_23(0))
								{
									func_24();
								}
								func_4(4);
								break;
							case -1193234750: /* GXTEntry: "Discard" */
								func_25(Global_1939231->f_10478, 1);
								break;
							case 301804921:
								if (func_23(0))
								{
									func_4(32);
								}
								else
								{
									func_26(Global_1939231->f_10478);
								}
								break;
							case 1329361007:
								func_4(64);
								break;
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case 922460030:
						func_4(16);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -2075827635:
						func_4(8);
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
	func_3(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(var uParam0)
{
	if (func_27() == -1)
	{
		func_28();
	}
	(*Global_1913112)[0 /*11*/] = 0;
	func_29(uParam0);
	return 1;
}

void func_2()
{
	if (func_11())
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, 0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, func_30(Global_1939231->f_10477));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_31(Global_1939231->f_10477));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10514, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10510, false);
		if (func_23(0) || func_32())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, "");
		}
		if (func_33(29))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
		}
		else
		{
			func_34(Global_1939231->f_10477);
		}
	}
}

void func_3(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939231->f_6 = 0;
	Global_1939231->f_38 = 0;
	Global_1939231->f_33 = -1;
	Global_1939231->f_34 = 0;
	Global_1939231->f_10481 = 0;
	func_35(822208792);
	func_36(0);
	func_37(0);
	func_38(uParam0);
	if (!TASK::_0x038B1F1674F0E242(Global_34))
	{
		func_39(0);
	}
	func_40(1);
	func_41();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(int iParam0)
{
	Global_1939231->f_10451 = (Global_1939231->f_10451 || iParam0);
}

void func_5(bool bParam0)
{
	if (bParam0)
	{
		Global_1939231 = 1;
	}
	else
	{
		Global_1939231 = 2;
	}
}

int func_6(int iParam0, int iParam1)
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

void func_7(int iParam0)
{
	var uVar0;

	uVar0 = iParam0;
	Global_1939231->f_10484 = 0;
	func_43(Global_1939231->f_10468[func_42(Global_1939231->f_10477) /*2*/], iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10490, Global_1939231->f_10484);
	func_44(Global_1939231->f_33);
	Global_1939231->f_10476 = uVar0;
}

void func_8()
{
	int iVar0;
	var uVar1;
	bool bVar2;

	Global_1939231->f_10484 = 0;
	if (Global_1939231->f_10476 != -1)
	{
		iVar0 = Global_1939231->f_10476;
		func_43(Global_1939231->f_10468[func_42(Global_1939231->f_10477) /*2*/], iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10490, Global_1939231->f_10484);
	}
	uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1939231->f_10484 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "FolderEmpty", bVar2);
}

int func_9()
{
	if ((func_45() || func_47(Global_34, func_46(7), 1)) || (!(func_48(7) || func_49(7)) && func_23(0)))
	{
		return (func_50(0, -1591664384) && func_50(1, 724026534));
	}
	return func_50(0, -1591664384);
}

void func_10(int iParam0)
{
	struct<2> Var0;
	struct<10> Var2;

	Var0 = { *(Global_1939231->f_10468[Global_1939231->f_10475 /*2*/]) };
	Var2.f_9 = -1591664384;
	if (!func_51())
	{
		func_52(0);
	}
	Global_1939231->f_10483 = 0;
	Global_1939231->f_38.f_203 = 0;
	if (Global_1939231->f_10486)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10489, Global_1939231->f_10483);
		Global_1939231->f_10486 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10498, func_30(iParam0));
	if (!func_23(0) && !func_32())
	{
		func_53(func_42(iParam0), &Var0, &Var2, iParam0);
	}
	func_54();
	if (Global_1939231->f_10477 == -283002878)
	{
		func_55();
	}
	else if (Global_1939231->f_10477 == -889932290)
	{
		func_56();
	}
	else if (Global_1939231->f_10477 == -693134279)
	{
		func_57();
	}
	else
	{
		if (Global_1939231->f_10477 == -182626652 || Global_1939231->f_10477 == 1783698482)
		{
			if ((Global_1915180->f_19742 == 38 || Global_1915180->f_19742 == 2) && func_23(0))
			{
				func_57();
			}
		}
		func_58(func_42(iParam0), &Var0, &Var2, iParam0);
		if ((Global_1939231->f_10477 == -182626652 && (((Global_1915180->f_19742 == 10 || Global_1915180->f_19742 == 16) || Global_1915180->f_19742 == 15) || Global_1915180->f_19742 == 29)) || (Global_1939231->f_10477 == -693134279 && Global_1915180->f_19742 == 2))
		{
			if (func_45())
			{
				Var0 = { *(Global_1939231->f_10468[1 /*2*/]) };
				func_58(1, &Var0, &Var2, iParam0);
			}
			else if (func_59())
			{
				Var0 = { *(Global_1939231->f_10468[2 /*2*/]) };
				func_58(2, &Var0, &Var2, iParam0);
			}
		}
		func_60();
		func_55();
		func_56();
		func_61();
	}
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10489, Global_1939231->f_10483);
	func_44(0);
}

bool func_11()
{
	return Global_1939231->f_38.f_203 <= 0;
}

void func_12(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;

	func_62();
	if (func_13())
	{
		func_14(0);
		if (Global_1939231->f_6)
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10490, Global_1939231->f_10485);
		}
		else
		{
			uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10489, Global_1939231->f_10485);
		}
		iVar0 = func_63(uVar1);
	}
	else
	{
		iVar0 = func_63(*uParam1);
	}
	if (func_63(*uParam1) == iVar0)
	{
		func_64(iVar0, uParam1);
	}
	func_65(0, iVar0);
	func_62();
	func_44(iParam0);
}

bool func_13()
{
	return Global_1939231->f_10;
}

void func_14(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_15(int iParam0, var uParam1)
{
	if (iParam0 != Global_1939231->f_10475)
	{
		func_66(iParam0, uParam1);
	}
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Global_1939231->f_33 = uParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_67(iVar0, uParam1);
	iVar1 = iVar0;
	func_7(iVar1);
	if (func_68(Global_1939231->f_10478, 0))
	{
		if (Global_1939231->f_10477 == 1783698482 || func_69(Global_1939231->f_10478, 474910316))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
			func_70(Global_1939231->f_10478, 56759509);
			func_70(Global_1939231->f_10478, 1632674359);
			func_70(Global_1939231->f_10478, 2145533727);
			func_70(Global_1939231->f_10478, -623226361);
			func_70(Global_1939231->f_10478, 332438661);
			func_70(Global_1939231->f_10478, -1658668866);
			func_70(Global_1939231->f_10478, 1997097980);
			func_70(Global_1939231->f_10478, 90781239);
			func_70(Global_1939231->f_10478, -1874365462);
			func_70(Global_1939231->f_10478, 920487791);
			func_70(Global_1939231->f_10478, -668555046);
			func_70(Global_1939231->f_10478, -839148413);
			func_70(Global_1939231->f_10478, 10424351);
			func_70(Global_1939231->f_10478, -1452445456);
		}
	}
	else if (Global_1939231->f_10477 == 1783698482 || Global_1939231->f_10477 == -693134279)
	{
		iVar2 = iVar0;
		if (iVar2 != 0)
		{
			if (Global_1939231->f_10477 != -693134279)
			{
				func_71();
			}
			Var3.f_2 = 5;
			Var3.f_18 = 8;
			func_72(iVar2, &Var3);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, Var3.f_1);
			if (!func_23(0) && iVar2 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
			}
		}
	}
}

void func_17(int iParam0)
{
	if (iParam0 != -1715238242)
	{
		Global_1939231->f_10476 = -1;
	}
}

void func_18()
{
	var uVar0;

	uVar0 = Global_1939231->f_10453;
	func_73(uVar0);
}

int func_19()
{
	if (func_74(Global_34, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_34, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if (Global_1939231->f_36 == 3)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_20())
	{
		Global_1939231->f_10479 = iParam0;
		func_75(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_76(iParam0, bParam4))
	{
		return 0;
	}
	if (func_77(iParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_69(iParam0, -2081717885))
	{
		func_78(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_69(iParam0, -1909684001))
	{
		func_79(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_69(iParam0, 587975446))
	{
		func_80(iParam0, Var10);
	}
	else if (func_69(iParam0, 566155764))
	{
		if (!func_81(iParam0))
		{
			return 0;
		}
	}
	if (func_82(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1912976 = iParam0;
		Global_1913165 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_69(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_83(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_69(iParam0, -1472964441) || func_69(iParam0, -228153877)) || func_69(iParam0, 566155764))
	{
	}
	else if (func_69(iParam0, 1919582297))
	{
		if (((func_84() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
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
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_83(Var10, 0);
		bVar28 = false;
	}
	else if (func_85(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_86(Global_1070356->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_83(Var10, 0);
		iVar29 = 1;
	}
	else if (func_87(iParam0) == joaat("clothing"))
	{
		if (!func_88(iParam0))
		{
			func_89("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_90(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_91();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_92(PLAYER::PLAYER_ID()))
			{
				func_89("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_89("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951141->f_1657 != iParam0)
			{
				func_93(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_94(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_95(iParam0);
					func_93(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1951141->f_1657.f_1[23 /*3*/])
					{
						func_96(Global_34, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_97(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_97(iParam0, 1);
					}
					break;
				default:
					if (!func_69(iParam0, -1348134986))
					{
					}
					else
					{
						func_94(iParam0, 0);
					}
					break;
			}
			func_96(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_5(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_27() != -1)
				{
				}
				else if (!func_88(iParam0))
				{
					func_89("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_98(7, iParam0);
					bVar31 = func_98(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17094))
						{
							MAP::REMOVE_BLIP(&Global_17094);
						}
						Global_17094 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17094, 673950256);
						func_89(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17094), 10000, 0, 0, 0, 1);
					}
					else if (!func_99(7))
					{
						func_89("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_47(Global_34, func_46(7), 0))
						{
							func_89("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17094))
							{
								MAP::REMOVE_BLIP(&Global_17094);
							}
							Global_17094 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17094, 673950256);
							func_89(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17094), 10000, 0, 0, 0, 1);
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
							func_83(Var10, 0);
						}
						Jump @2060; //curOff = 1557
						func_100();
						Jump @2060; //curOff = 1564
						if (!func_101(Global_1956172->f_1, 1) || func_101(Global_1956172->f_1, 512))
						{
							if (func_88(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_102(1, 1))
								{
									func_103(2, 1);
								}
								else if (func_104(1))
								{
									func_89("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (func_105())
								{
									func_89("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_106();
									}
									else
									{
										func_89("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_107(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_89("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_107(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (func_105())
							{
								func_89("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								func_89("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956172->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2060; //curOff = 1839
						if (!WEAPON::_0xC853230E76A152DF(func_108(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, true, 0, false, false);
						}
						return 1;
						Jump @2060; //curOff = 1877
						if (func_108(Global_34, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2060; //curOff = 1918
						Jump @2060; //curOff = 1921
						func_109(533, 1);
						Jump @2060; //curOff = 1932
						func_110(1);
						Jump @2060; //curOff = 1940
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2060; //curOff = 1975
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_83(Var10, 0);
						}
						return 1;
						Jump @2060; //curOff = 2051
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
		}
	}

int func_22()
{
	if (Global_1939231->f_36 == 1 || Global_1939231->f_36 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_23(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

void func_24()
{
	bool bVar0;
	struct<5> Var1;
	struct<4> Var6;
	bool bVar10;
	int iVar11;

	if (func_87(Global_1939231->f_10478) == 2085633299)
	{
		Global_1939067->f_41 = Global_1939231->f_10478;
	}
	else
	{
		Global_1939067->f_42 = Global_1939231->f_10478;
	}
	bVar0 = true;
	if (func_90(Global_1939231->f_10478) == -854348463)
	{
		Var1 = { func_111(Global_1939231->f_10478, 0, 0) };
		Var6 = { func_112(Global_1939231->f_10478, Var1, Var1.f_4, 0) };
		func_113(Var6, 1);
		bVar10 = func_114(0);
		if (func_27() == 0)
		{
			bVar10 = true;
		}
		if (Global_1939231->f_10477 == -156634416)
		{
			func_115(bVar10, 0, -883547903);
		}
		else
		{
			func_115(bVar10, 1, 0);
		}
		bVar0 = true;
	}
	else if (Global_1939231->f_10478 == -898386032)
	{
		func_116();
		bVar0 = false;
	}
	else if ((func_90(Global_1939231->f_10478) == 81053684 || func_90(Global_1939231->f_10478) == -525676072) || func_69(Global_1939231->f_10478, -1348134986))
	{
		func_94(Global_1939231->f_10478, 0);
		bVar0 = false;
	}
	else if (func_69(Global_1939231->f_10478, 316290104))
	{
		if (func_117(Global_1939231->f_10478, 0, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_118(Global_1939231->f_10478, 1, 0))
	{
		if (func_27() == -1)
		{
			iVar11 = func_119(Global_1939231->f_10478);
			if (func_68(iVar11, 0))
			{
				if (func_120(iVar11))
				{
					bVar0 = false;
				}
			}
		}
	}
	else if (func_69(Global_1939231->f_10478, -1242251796))
	{
		func_123(Global_1939231->f_10478, func_122(func_121(0)));
	}
	else if (((func_69(Global_1939231->f_10478, -1472964441) && func_124(Global_1939231->f_10478)) && func_125()) && !func_126(Global_1939231->f_10478))
	{
		func_127();
		func_128(Global_17172.f_2954.f_17, 1, 0, -142743235);
		if (func_21(Global_1939231->f_10478, 0, 0, 0, 1, 0, 0))
		{
			bVar0 = false;
		}
	}
	else if (func_21(Global_1939231->f_10478, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (func_20())
	{
		bVar0 = false;
	}
	Global_1939231->f_10479 = Global_1939231->f_10478;
	func_5(bVar0);
	func_52(0);
}

void func_25(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return;
	}
	if (((func_69(iParam0, -1472964441) && func_124(iParam0)) && func_125()) && func_126(iParam0))
	{
		func_127();
	}
	if (!func_129(iParam0, iParam1, 0, -327174699))
	{
		if (!func_130(iParam0, iParam1, 0, 1, -327174699))
		{
		}
	}
	func_115(1, 1, func_6(iParam0, 1224357681));
}

void func_26(int iParam0)
{
	func_25(iParam0, func_131(func_121(0), iParam0, 0, 1, 1));
}

int func_27()
{
	return Global_1572887->f_13;
}

void func_28()
{
	func_132(-893403924, &(Global_1939231->f_10515), 600, -1, 0, 0);
	func_133();
}

int func_29(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	bVar0 = func_23(0);
	bVar1 = func_32();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1939231->f_10477 != -156634416) && Global_1939231->f_10477 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1939231->f_10486 = 1;
	Global_1939231->f_10489 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1939231->f_10490 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1939231->f_10503 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1939231->f_10504 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1939231->f_10505 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1939231->f_10506 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", -1896040097);
	Global_1939231->f_10507 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1939231->f_10508 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1939231->f_10511 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::_GET_LABEL_TEXT_BY_HASH(140984675));
	Global_1939231->f_10509 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1939231->f_10510 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1939231->f_10514 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1939231->f_10512 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);
	if ((func_27() == -1 && func_23(0)) && Global_1915180->f_19742 == 2)
	{
		Global_1939231->f_10513 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1939231->f_10513 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	uVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1939231->f_10494 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Name", 0);
	Global_1939231->f_10495 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Description", 0);
	if (func_23(0) || func_19())
	{
		Global_1939231->f_10496 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Price", "");
	}
	else
	{
		Global_1939231->f_10496 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar3, "Price", false);
	}
	if ((func_27() == -1 && func_23(0)) && Global_1915180->f_19742 == 2)
	{
		Global_1939231->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_SEND");
	}
	else if (Global_1915180->f_19742 == 29)
	{
		Global_1939231->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "MATERIAL_VALUE");
	}
	else
	{
		Global_1939231->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1939231->f_10498 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Category", 0);
	Global_1939231->f_10492 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "DefaultCategoryIndex", 0);
	Global_1939231->f_10493 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryIndex", func_134());
	Global_1939231->f_10491 = DATABINDING::_DATABINDING_ADD_DATA_INT(uVar3, "CategoryCount", 0);
	Global_1939231->f_10499 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "IndexDescription", "");
	Global_1939231->f_10500 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar3, "Tip", "");
	Global_1939231->f_10501 = INVENTORY::_0x9D21B185ABC2DBC4(uVar3, "effects", 0, 0);
	Global_1939231->f_10502 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar3, "Folder", 0);
	Global_1939231->f_10488 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_135(Global_1939231->f_10488);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939231->f_10488, Global_1939231->f_10452);
	uVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	iVar5 = 485071447;
	if (func_136(-593948563 /* GXTEntry: "Legend of the East Satchel" */))
	{
		iVar5 = -1401261769;
	}
	iVar6 = func_137(uVar4, "player", iVar5, "ALL SATCHEL", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_45() || func_47(Global_34, func_46(7), 1)) || (!(func_48(7) || func_49(7)) && func_23(0)))
	{
		func_137(uVar4, "saddle", -1186165261, "ALL", 724026534);
	}
	func_66(iVar6, &uVar3);
	if (Global_1939231->f_8)
	{
		func_138(Global_1939231->f_10477);
		func_139(Global_1939231->f_10477, &uVar3, 0);
		func_115(1, 0, 0);
	}
	else
	{
		func_115(func_140(), 0, 0);
	}
	Global_1939231->f_8 = 0;
	return 1;
}

int func_30(int iParam0)
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
			return 668180388;
		case -2074770370:
			return 1643818657;
		case -693134279:
			return -1077706770;
		case -182626652:
			if ((Global_1915180->f_20136 || Global_1915180->f_21989.f_1) && (Global_1915180->f_19742 == 16 || Global_1915180->f_19742 == 29))
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

int func_31(int iParam0)
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
			return -1875341370;
		case -2074770370:
			return 89311517;
		case -693134279:
			return 1001811369;
		case -182626652:
			if (Global_1915180->f_19742 == 29)
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

int func_32()
{
	if (((Global_1939231->f_36 == 1 || Global_1939231->f_36 == 2) || func_19()) || func_20())
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_141())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(-402412948));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
			break;
	}
	return 0;
}

void func_35(int iParam0)
{
	Global_1939231->f_37 = iParam0;
}

void func_36(int iParam0)
{
	Global_1939231->f_36 = iParam0;
}

void func_37(int iParam0)
{
	Global_1939231->f_11 = iParam0;
}

void func_38(var uParam0)
{
	int iVar0;

	MAP::DISPLAY_RADAR(true);
	Global_1939231->f_1 = 0;
	func_142();
	func_143(uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	HUD::_0x50C803A4CD5932C5(0);
	HUD::_0xD4EE21B7CC7FD350(0);
	if (func_27() == -1)
	{
	}
	else
	{
		while (!func_144(0, 0) && iVar0 < 15)
		{
			iVar0++;
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			BUILTIN::WAIT(0);
		}
	}
}

void func_39(int iParam0)
{
	((*Global_1913146)[iParam0 /*6*/])->f_1 = 3;
	(*Global_1913146)[iParam0 /*6*/] = 0;
	((*Global_1913146)[iParam0 /*6*/])->f_5 = 0;
}

void func_40(int iParam0)
{
	Global_1939231->f_10451 = (Global_1939231->f_10451 - (Global_1939231->f_10451 && iParam0));
}

void func_41()
{
	int iVar0;

	iVar0 = func_145(0);
	func_146(iVar0, 1, 0, 0);
	func_147(iVar0);
}

int func_42(int iParam0)
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

void func_43(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_148(&Var0, iVar14, func_42(Global_1939231->f_10477), *uParam0))
		{
		}
		else if (func_149(Var0.f_9))
		{
		}
		else if (!func_150(Var0.f_4, iParam1))
		{
		}
		else if (!func_151(Var0.f_4))
		{
		}
		else if (func_23(0))
		{
			if (!func_68(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1939231->f_10478 == 0)
				{
					func_52(Var0.f_4);
				}
				func_152(Var0);
			}
			iVar14 = (iVar14 + -1);
		}
	}

void func_44(int iParam0)
{
	if (Global_1939231->f_38.f_203 > 16)
	{
		if (Global_1939231->f_6)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10499, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1939231->f_10484));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10499, MISC::_CREATE_VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1939231->f_38.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10499, "");
	}
}

int func_45()
{
	int iVar0;

	if (func_23(0))
	{
		iVar0 = func_121(0);
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return 0;
		}
		if (!func_153(Global_1915180->f_19742.f_1))
		{
			return 0;
		}
		if (func_154(Global_1915180->f_19742.f_1, iVar0))
		{
			return 1;
		}
	}
	else
	{
		if (func_27() == -1)
		{
			if (func_155(Global_34))
			{
				iVar0 = PED::GET_MOUNT(Global_34);
			}
			else if (func_156(-283002878))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
		}
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return 0;
		}
		if (func_157(iVar0, 0, 1) < 1.7f || func_156(-283002878))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903007[iParam0 /*43*/];
}

int func_47(int iParam0, int iParam1, bool bParam2)
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

int func_48(int iParam0)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_159(iParam0))
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_159(iParam0))
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	if (func_160(vVar1, vVar4) > func_161(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1)
{
	if (!func_162((Global_1939231->f_10468[iParam0 /*2*/])->f_1))
	{
		return 0;
	}
	return func_163("ALL", &((Global_1939231->f_10468[iParam0 /*2*/])->f_1), Global_1939231->f_10468[iParam0 /*2*/], iParam1, 0);
}

bool func_51()
{
	return Global_1939231->f_9;
}

void func_52(int iParam0)
{
	Global_1939231->f_10478 = iParam0;
}

void func_53(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (Global_1939231->f_10477 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam3 == 0 && *uParam1 > 16)
	{
		iVar1 = (*uParam1 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1939231->f_38.f_1)
	{
		Global_1939231->f_38.f_2[iVar0 /*2*/] = 0;
		(Global_1939231->f_38.f_2[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
	Global_1939231->f_38.f_1 = 0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = (*uParam1 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_148(uParam2, iVar0, uParam1->f_1, *uParam1))
			{
			}
			else if (!func_164(uParam2, iParam3))
			{
			}
			else
			{
				func_165(uParam2->f_4);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	Global_1939231->f_10481 = 0;
	if (func_166())
	{
		if (PED::_0xA911EE21EDF69DAF(Global_34))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_34, iVar2);
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
						iVar1 = func_167(iVar0);
						if (func_151(iVar1))
						{
							Global_1939231->f_10481 = iVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_55()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_23(0))
	{
		iVar1 = func_168();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1939231->f_10477 == -283002878 || (Global_1939231->f_10477 == -182626652 && func_45()))
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 16)
		{
			if (Global_1939231->f_10477 == -283002878 || Global_1939231->f_10477 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 2 && Global_1939231->f_10477 == -693134279)
		{
			bVar0 = true;
		}
	}
	else if (Global_1939231->f_10477 == -283002878)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_27() == 0)
		{
			func_169(1);
		}
		else if (func_168() == 16)
		{
			func_170(1);
		}
		else
		{
			func_169(1);
		}
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_23(0))
	{
		iVar1 = func_168();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1939231->f_10477 == -889932290 || (Global_1939231->f_10477 == -182626652 && func_59()))
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 16)
		{
			if (Global_1939231->f_10477 == -889932290 || Global_1939231->f_10477 == -182626652)
			{
				bVar0 = true;
			}
		}
		else if (func_168() == 2 && Global_1939231->f_10477 == -693134279)
		{
			bVar0 = true;
		}
	}
	else if (Global_1939231->f_10477 == -889932290)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_27() == 0)
		{
			func_171(1);
		}
	}
}

void func_57()
{
	if ((Global_1939231->f_10477 == 1783698482 || Global_1939231->f_10477 == -693134279) || ((Global_1915180->f_19742 == 38 && func_23(0)) && Global_1939231->f_10477 == -182626652))
	{
		if (func_172(0) && COLLECTION::_0x6BAB7ACED1017204(-534000547, 0))
		{
			func_173(STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0));
		}
	}
	if (func_174(56759509))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(56759509, 0));
	}
	if (func_174(2145533727))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(2145533727, 0));
	}
	if (func_174(1632674359))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(1632674359, 0));
	}
	if (func_174(332438661))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(332438661, 0));
	}
	if (func_174(-1452445456))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(-1452445456, 0));
	}
	if (func_174(-623226361))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(-623226361, 0));
	}
	if (func_174(-1874365462))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(-1874365462, 0));
	}
	if (func_174(-1658668866))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(-1658668866, 0));
	}
	if (func_174(1997097980))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(1997097980, 0));
	}
	if (func_174(90781239))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(90781239, 0));
	}
	if (func_174(920487791))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(920487791, 0));
	}
	if (func_174(-668555046))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(-668555046, 0));
	}
	if (func_174(-839148413))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(-839148413, 0));
	}
	if (func_174(10424351))
	{
		func_173(COLLECTION::_0xCC644BC1DD655269(10424351, 0));
	}
}

void func_58(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0)
	{
		func_175(iParam0, uParam1, uParam2, iParam3);
	}
	else
	{
		iVar1 = 0;
		if (*uParam1 > 0)
		{
			iVar0 = (*uParam1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_148(uParam2, iVar0, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_164(uParam2, iParam3))
				{
				}
				else
				{
					func_176(*uParam2, 0);
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

int func_59()
{
	int iVar0;

	if (func_27() == -1)
	{
		return 0;
	}
	if (!func_177())
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_178(iVar0))
	{
		return 0;
	}
	if (func_23(0))
	{
		if (func_179(Global_1915180->f_19742.f_1, iVar0))
		{
			return 1;
		}
	}
	else if (func_157(iVar0, 0, 1) < 3.7f || func_156(-889932290))
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	switch (Global_1939231->f_10477)
	{
		case -156634416:
			func_180();
			break;
		case 1561961676:
			break;
	}
}

void func_61()
{
	if (func_68(Global_1939231->f_10481, 0) && (!func_45() || func_131(func_121(0), Global_1939231->f_10481, 0, 1, 1) == 0))
	{
		func_181(Global_1939231->f_10481, 0, 1);
	}
}

void func_62()
{
	if (!func_68(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_6(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

int func_63(var uParam0)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(uParam0, "label");
	return uVar0;
}

void func_64(int iParam0, var uParam1)
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
	bool bVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	float fVar15;
	struct<19> Var16;
	int iVar51;

	bVar0 = true;
	if (func_68(iParam0, 0))
	{
		if (func_69(iParam0, 1147021565))
		{
			if (Global_1939231->f_10477 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_23(0))
			{
				iVar2 = func_182(iParam0);
				if (func_69(iParam0, 1573112293) && !func_183(iVar2))
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
		func_184(iParam0, uParam1);
		bVar3 = false;
		bVar4 = func_185(iParam0);
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		iVar8 = 0;
		if ((func_69(iParam0, -1472964441) && func_124(iParam0)) && !func_23(0))
		{
			bVar5 = true;
			if (func_125())
			{
				if (func_126(iParam0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
					if (!func_186())
					{
						bVar4 = true;
						bVar6 = true;
					}
				}
				else
				{
					iVar8 = func_187(iParam0, 1);
					if (iVar8 == 0 || iVar8 == 2)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10506, -31549930);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10507, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
					}
					bVar7 = true;
				}
			}
			else
			{
				iVar8 = func_187(iParam0, 1);
				if (iVar8 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
				}
			}
		}
		if (func_6(iParam0, 1224357681) == -1529210462 || func_6(iParam0, 1224357681) == -1414243429)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10503, 1155235276);
		}
		if (func_45() || func_59())
		{
			iVar9 = func_131(func_121(0), iParam0, 0, 1, 1);
		}
		else
		{
			iVar9 = func_188(iParam0, 0, 0, 0);
		}
		if (iParam0 == Global_1939231->f_10481)
		{
			iVar9++;
		}
		iVar10 = func_189(iParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, func_190(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_191(iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10514, bVar4);
		if (bVar4 && iVar9 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10510, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10509, bVar3);
		bVar11 = true;
		if (func_23(0) || func_32())
		{
			fVar12 = (BUILTIN::TO_FLOAT(func_192(iParam0)) / 100f);
			fVar13 = (BUILTIN::TO_FLOAT(func_194(func_193(iParam0), 770694722)) / 100f);
			if (func_69(iParam0, 1064293907) || INVENTORY::_0x245D07651B1D183B(iParam0, 1073741824))
			{
				if (func_195())
				{
					fVar13 = (fVar13 * 1.25f);
				}
			}
			else if ((INVENTORY::_0x245D07651B1D183B(iParam0, 268435456) || INVENTORY::_0x245D07651B1D183B(iParam0, 134217728)) || func_69(iParam0, 1888974372))
			{
				fVar13 = (fVar13 * 0.4f);
			}
			else
			{
				fVar13 = (fVar13 * 0.6f);
			}
			if (Global_1915180->f_19742 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, MISC::_CREATE_VAR_STRING(10, "SEND_ITEM_VALUE", func_196(MISC::_0x2B6846401D68E563(fVar12, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1915180->f_19742 == 29)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, func_196(MISC::_0x2B6846401D68E563(fVar13, 2), joaat("COLOR_PURE_WHITE")));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_196(MISC::_0x2B6846401D68E563(fVar12, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!func_197(iParam0, Global_1915180->f_19742.f_1) && !func_32())
			{
				bVar11 = false;
			}
			if (func_168() == 29 && func_198(iParam0))
			{
				bVar11 = false;
			}
		}
		if (bVar5)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			if (bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			}
			else if (bVar7)
			{
				if (iVar8 == 0 || iVar8 == 2)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, func_199(iVar8)));
				}
			}
			else if (iVar8 != 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, func_199(iVar8)));
			}
		}
		else if (-492264119 == iParam0 && !func_200())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (bVar11)
		{
			if (iVar10 > 1)
			{
				if ((func_168() == 38 && func_68(iParam0, 0)) && func_69(iParam0, 474910316))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
					func_70(iParam0, 56759509);
					func_70(iParam0, 1632674359);
					func_70(iParam0, 2145533727);
					func_70(iParam0, -623226361);
					func_70(iParam0, 332438661);
					func_70(iParam0, -1658668866);
					func_70(iParam0, 1997097980);
					func_70(iParam0, 90781239);
					func_70(iParam0, -1874365462);
					func_70(iParam0, 920487791);
					func_70(iParam0, -668555046);
					func_70(iParam0, -839148413);
					func_70(iParam0, 10424351);
					func_70(iParam0, -1452445456);
				}
				else if (iVar9 >= iVar10)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar9, iVar10));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar9, iVar10));
				}
			}
			else if (iVar10 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar9));
			}
		}
		else if (func_168() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
		}
		else if (func_168() == 29)
		{
			if (func_198(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_SKINNED_ITEM"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
			}
		}
		else if ((func_201(func_168()) && ENTITY::DOES_ENTITY_EXIST((Global_1051388->f_69[func_168() /*76*/])->f_20)) && !PED::IS_PED_MALE((Global_1051388->f_69[func_168() /*76*/])->f_20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		iVar14 = iParam0;
		if (func_202(iVar14))
		{
			fVar15 = (BUILTIN::TO_FLOAT(func_203(iVar14)) / 100f);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, iVar14);
			Var16.f_2 = 5;
			Var16.f_18 = 8;
			if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(iVar14, &Var16))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, Var16.f_1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, 0);
			}
			if (func_23(0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", func_196(MISC::_0x2B6846401D68E563(fVar15, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10496, "");
			}
			if (iVar14 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0))
			{
				func_71();
			}
			else
			{
				iVar51 = COLLECTION::_0x9ADEE485726025D4(iVar14);
				if (iVar51 != 0)
				{
					func_204(iVar14);
				}
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, func_30(Global_1939231->f_10477));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_31(Global_1939231->f_10477));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
		}
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, 0, 0);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, iParam0, 0);
	}
	func_52(iParam0);
}

void func_65(int iParam0, int iParam1)
{
	if (!func_68(iParam1, 0))
	{
		return;
	}
	if ((!func_69(iParam1, 747873593) && !func_69(iParam1, -1661502552)) && !func_69(iParam1, 2108217528))
	{
		return;
	}
	if (iParam1 != Global_1913146[iParam0 /*6*/])
	{
		((*Global_1913146)[iParam0 /*6*/])->f_1 = 3;
		(*Global_1913146)[iParam0 /*6*/] = iParam1;
		((*Global_1913146)[iParam0 /*6*/])->f_5 = 0;
	}
}

void func_66(int iParam0, var uParam1)
{
	Global_1939231->f_10475 = iParam0;
	if (func_20())
	{
		if (PED::_0xA911EE21EDF69DAF(Global_34) == 0)
		{
			func_138(-1559802791);
		}
	}
	if (func_19())
	{
		func_138(-2074770370);
	}
	func_139(Global_1939231->f_10477, uParam1, 0);
}

void func_67(int iParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10494, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10495, func_205(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939231->f_10502, iParam0);
	func_52(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1939231->f_10501, 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10514, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10510, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10509, false);
	func_206(uParam1);
}

int func_68(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_69(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return func_208(func_207(iParam0), iParam1);
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

int func_70(int iParam0, int iParam1)
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
	if (!func_209(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (&Var1[iVar33 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var1[iVar33 /*2*/] == iParam0)
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
		if (func_210(&(Var1[iVar33 /*2*/]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

int func_71()
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	iVar0 = STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_209(iVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_210(&(Var1[iVar33 /*2*/]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

bool func_72(int iParam0, var uParam1)
{
	return ITEMDATABASE::_0xF8D09EF8CE61D7BF(iParam0, uParam1);
}

void func_73(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	Global_1939231->f_10453 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939231->f_10493);
	iVar0 = &Global_1939231->f_10454[Global_1939231->f_10453];
	if (iVar0 != Global_1939231->f_10477)
	{
		Global_1939231->f_38.f_203 = 0;
		Global_1939231->f_10475 = func_42(iVar0);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, uParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar1, "CurrentCategory", 0);
		uVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, Global_1939231->f_10453);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar2, "CurrentCategory", 1);
		func_139(iVar0, &uVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (&Global_1939231->f_10454[iVar3] == Global_1939231->f_10477)
			{
				uVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, Global_1939231->f_10453);
				if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar4, "CurrentCategory", 1);
				}
			}
			else
			{
				uVar5 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10488, Global_1939231->f_10453);
				if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uVar5, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uVar5, "CurrentCategory", 0);
				}
			}
			iVar3++;
		}
	}
}

int func_74(int iParam0, int iParam1)
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
	if (func_211(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_211(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_213(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_111(iParam0, bParam4, 0) };
	Var6 = { func_112(iParam0, Var1, Var1.f_4, bParam4) };
	return func_214(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

int func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939231->f_7)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_215(iParam0);
		if (func_69(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_216(1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_217())
		{
			return 0;
		}
	}
	if (!func_210(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	if (func_85(iParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_145(0), iParam0, func_23(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463: /* GXTEntry: "Camp" */
		case 2019377485: /* GXTEntry: "Camp" */
			if (!Global_1956172->f_2)
			{
				func_218(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1807503187: /* GXTEntry: "Handheld Catalogue" */
			if (Global_1915180->f_21989.f_5 != 0)
			{
				func_89(func_219(), 10000, 0, 0, 0, 1);
				Global_1915180->f_21989.f_5 = 0;
			}
			break;
	}
	return 1;
}

void func_78(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_79(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_80(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

int func_81(int iParam0)
{
	if (func_27() == 0 && func_221(func_220(iParam0), 1, 0) != 0)
	{
		func_89("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

int func_82(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_222(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_6(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, 1245009814, 1, 0, -1082130432);
				return 1;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_223())
				{
					if (func_224(&Global_34))
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
					func_89("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
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
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
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
			Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_226(iParam0);
				}
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_227(iParam0, 1);
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_228(iParam0, 1);
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_229(iParam0);
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_230(iParam0);
				}
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_231(iParam0);
				}
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_232(iParam0);
				}
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_225(iParam0);
				}
				else
				{
					func_233(iParam0);
				}
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
				func_234(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_235(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_236(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_225(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_237(iParam0, bParam3);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_238(iParam0, bParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void func_83(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1938417->f_161 >= 10)
	{
		return;
	}
	if (!func_239(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_240(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1938417)[iVar0 /*16*/]) = { Param0 };
			Global_1938417->f_161++;
			func_241(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_84()
{
	return Global_1893575 & 2 != 0;
}

int func_85(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (func_87(iParam0) == -1650247667)
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0)
{
	return func_242(iParam0);
}

int func_87(int iParam0)
{
	vector3 vVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_88(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_87(iParam0) == joaat("clothing"))
	{
		if (func_90(iParam0) == -999503751)
		{
		}
	}
	return 1;
}

var func_89(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_90(int iParam0)
{
	struct<2> Var0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_0xF49F14462F0AE27C(iVar0);
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
		if (PED::_0xB676EFDA03DADA52(iVar1, 0) != iVar2)
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

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::_0xF49F14462F0AE27C(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_0xB676EFDA03DADA52(iVar1, 0) == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_243(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_244(Var0);
}

int func_94(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_245())
	{
		return 0;
	}
	if (!func_246(iParam0))
	{
		return 0;
	}
	if (func_247(iParam0))
	{
		iVar0 = 0;
		if (func_90(iParam0) == 81053684 || func_69(iParam0, -1348134986))
		{
			if (bParam1)
			{
				func_248(&iVar0, 2);
			}
		}
		return func_249(iParam0, iVar0);
	}
	return 0;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1951141->f_1657.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_96(Global_34, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_97(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_96(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_250(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_251();
		func_243(128);
		return;
	}
	if (iVar1 == &Global_1951141->f_81[iVar0 /*12*/])
	{
		func_97(iParam0, 1);
		return;
	}
	if (func_252(-2061583405, 0))
	{
		if (func_136(iVar1))
		{
			func_97(iVar1, 0);
		}
		else
		{
			func_253(iVar1, 1, 1, 0);
		}
		func_97(iParam0, 1);
		return;
	}
	if (func_136(iVar1))
	{
		func_97(iVar1, 0);
		func_97(iParam0, 1);
	}
	else if (func_136(iParam0))
	{
		if (iParam0 != func_254(0))
		{
			func_255(iParam0, iVar1);
			func_97(iParam0, 0);
			func_97(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_243(128);
			func_97(iParam0, 1);
		}
	}
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_111(iParam1, 1, 0) };
		iParam3 = func_256(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_258(iParam1, iParam2, func_257(iParam3, 1), bParam4, 1))
	{
		return 0;
	}
	func_259(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_260(iParam1, 0))
		{
			func_261(&(Global_1951141->f_1657.f_1[func_257(iParam3, 1) /*3*/]), 0);
		}
		else
		{
			func_261(iParam1, 1);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1951141->f_81[func_257(iParam3, 1) /*12*/])
			{
				func_93(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_250(32768))
			{
				func_251();
				func_93(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_262(iParam3);
	if (bParam8)
	{
		func_263(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_93(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_93(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_97(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_111(iParam0, 0, 0) };
	Var5 = { func_112(iParam0, Var0, Var0.f_4, 0) };
	if (func_264(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_145(0), &Var5, iParam1);
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
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
		if (PED::_0xB676EFDA03DADA52(iVar0, 0) == Global_34)
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
	if (func_265(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_266())
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

void func_100()
{
	if (func_267())
	{
		return;
	}
	if (func_268())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915180->f_21989.f_1 = 1;
		Global_1051388->f_42 = 0;
		func_269();
	}
	else if (Global_1915180->f_21989.f_5 != 0)
	{
		func_89(func_219(), 10000, 0, 0, 0, 1);
		Global_1051388->f_3577 = 0;
		func_270(0);
		Global_1915180->f_21989.f_5 = 0;
	}
}

bool func_101(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_271() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_272(16))
	{
		return 0;
	}
	if (func_273())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
		{
			return 0;
		}
	}
	if (!func_274())
	{
		return 0;
	}
	if (func_275(16))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_211(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_105())
	{
		return 0;
	}
	return 1;
}

int func_103(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_276();
	}
	if (!func_277(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_278(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

bool func_104(int iParam0)
{
	return func_211(Global_1131092->f_8, iParam0);
}

int func_105()
{
	int iVar0;

	iVar0 = func_279(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_211(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_106()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_280(0) };
	if (func_281(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_282(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_283(iVar2) == -785841056)
				{
					func_89("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_89("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_89("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_89("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_107(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_285(Var0, func_284(0, 8), 0, 0);
}

int func_108(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_109(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_288(iVar0, iVar1);
}

void func_110(bool bParam0)
{
	if ((func_27() != -1 || !bParam0) || func_155(Global_34))
	{
		func_289();
		return;
	}
}

struct<5> func_111(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_290(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_87(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_112(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_291(bParam1) };
			if (bParam2 && func_292(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_293(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_293(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_294(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_295(bParam1) };
			switch (func_90(iParam0))
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
		case -2130996531:
		case joaat("dog"):
			if (func_296(iParam0, -1823706425))
			{
				Var0 = { func_112(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_296(iParam0, -1483207246))
			{
				Var0 = { func_112(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_112(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_296(iParam0, -1653629781))
			{
				Var0 = { func_112(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_297(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_296(iParam0, -1653629781))
			{
				Var0 = { func_112(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
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

struct<4> func_112(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_68(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_145(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_113(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_114(0))
	{
		return func_298(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_297(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_145(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_114(bool bParam0)
{
	if (func_27() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_145(bParam0));
}

void func_115(bool bParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = bParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_299() && iParam2 == 0))
	{
		func_14(1);
		func_300(1);
	}
}

void func_116()
{
	int iVar0;

	if (!func_216(1, 124032))
	{
		return;
	}
	iVar0 = WEAPON::_0xDA37A053C1522F5D(Global_34, 0, 0, 0);
	if (func_301(iVar0))
	{
		func_303(1, iVar0, func_302());
	}
	else
	{
		func_89("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, 1);
	}
}

int func_117(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<16> Var13;

	iVar0 = -1;
	iVar1 = func_304(iParam0);
	iVar2 = func_305(iParam0);
	if (iVar2 != 0)
	{
		if (!func_114(0) || func_306())
		{
			if (bParam2)
			{
				func_308(func_307(149041100, -1740237568), 1);
				return func_309(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_111(iParam0, 1, 0) };
			Var8 = { func_112(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_310(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13 = 1;
				Var13.f_3 = 1;
				func_311(iVar12, Var13);
			}
			return 0;
		}
		if (func_128(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_309(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

int func_118(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == 1453752912 || iParam0 == -1429211481)
	{
		return 0;
	}
	if (func_69(iParam0, -887064662) || func_69(iParam0, -839724752))
	{
		if (bParam2)
		{
			return func_69(iParam0, -1238310989);
		}
		else if (bParam1)
		{
			return !func_69(iParam0, -1238310989);
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = func_6(iParam0, 1697966752);
	iVar1 = 0;
	if (iVar0 == 0)
	{
		return 0;
	}
	Var2 = { func_312(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar0, 0) };
	if (func_313(Var2, &iVar12, &iVar13, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			iVar15 = func_314(iVar14, iVar12);
			if (func_68(iVar15, 0))
			{
				iVar1 = iVar15;
			}
			else
			{
				iVar14++;
			}
		}
		func_315(iVar12);
	}
	return iVar1;
}

int func_120(int iParam0)
{
	Global_1913166->f_1577 = iParam0;
	Global_1956172->f_2 = 1;
	func_316(268435456);
	if (func_317(8388608))
	{
		func_316(16777216);
		return 1;
	}
	else if ((func_210(2019377485 /* GXTEntry: "Camp" */, 1) && func_21(2019377485 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)) || (func_210(-1838434463 /* GXTEntry: "Camp" */, 1) && func_21(-1838434463 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)))
	{
		Global_1956172->f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
		return 1;
	}
	else
	{
		Global_1956172->f_2 = 0;
		func_318(268435456);
	}
	return 0;
}

int func_121(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_122(int iParam0)
{
	return iParam0;
}

int func_123(int iParam0, int iParam1)
{
	if (func_27() == -1)
	{
		if (func_319(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_27() == 0)
	{
		if (func_319(iParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_124(int iParam0)
{
	if (func_69(iParam0, 566155764))
	{
		return 0;
	}
	if (func_69(iParam0, 2028734248))
	{
		return 1;
	}
	return 0;
}

bool func_125()
{
	return Global_17172.f_2954.f_21;
}

int func_126(int iParam0)
{
	if (Global_17172.f_2954.f_17 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_127()
{
	func_320(&(Global_17172.f_2954), 3);
}

int func_128(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_321(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_322(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_323(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_210(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_324(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_188(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_188(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_128(iParam0, func_188(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_87(iParam0) == joaat("weapon"))
	{
		if (!func_325(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_75(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_111(iParam0, 0, 0) };
		if (func_114(0) && Var7.f_4 == 1084182731)
		{
			func_115(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_114(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_323(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_129(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_326(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_327(iParam0, iParam1, bParam2, iParam3);
}

int func_130(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	if (bParam3)
	{
		if (!func_177())
		{
			return 0;
		}
	}
	if (!func_328(iParam0, iParam1, iParam4, iParam2, 1))
	{
		return 0;
	}
	func_329();
	return 1;
}

int func_131(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_188(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_330(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_331(iParam1, bParam4));
	}
	return iVar0;
}

int func_132(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
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
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_144(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_144(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_332();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_133()
{
	if (func_27() == -1)
	{
		if (!func_333(18, &(Global_1939231->f_10515)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 3, "satchel_elements/name(id=%x):description0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939231->f_10515, 4, "satchel_elements/name(id=%x):category0");
}

int func_134()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939231->f_10454[iVar0] == Global_1939231->f_10477)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_135(var uParam0)
{
	Global_1939231->f_10452 = 0;
	if (!Global_1939231->f_8)
	{
		func_138(0);
		func_334();
	}
	else if (((((Global_1939231->f_10477 != -2074770370 && Global_1939231->f_10477 != -283002878) && Global_1939231->f_10477 != -889932290) && Global_1939231->f_10477 != 822208792) && Global_1939231->f_10477 != -182626652) && Global_1939231->f_10477 != -693134279)
	{
		func_35(Global_1939231->f_10477);
	}
	else
	{
		func_138(0);
		func_334();
	}
	func_335(uParam0, 0, "All", 443945499);
	func_335(uParam0, -1666604090, "Provisions", 2049523496);
	func_335(uParam0, -96974025, "Remedies", -607937119);
	func_335(uParam0, -1268291907, "Ingredients", 1063323264);
	func_335(uParam0, -1559802791, "Materials", -2096783589);
	func_335(uParam0, -156634416, "Kit", -461468653);
	func_335(uParam0, 1561961676, "Valuables", -2043887681);
	func_335(uParam0, 1061777683, "Documents", 1761254900);
	if (func_210(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		func_335(uParam0, 1783698482, "Collections", -1401643540);
	}
	func_336(uParam0);
	func_337(uParam0);
	func_338(uParam0);
	if (func_23(0))
	{
		if (func_168() == 2)
		{
			func_138(-693134279);
		}
		else
		{
			func_138(-182626652);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10491, Global_1939231->f_10452);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10493, func_134());
}

bool func_136(int iParam0)
{
	var uVar0;

	return func_339(iParam0, &uVar0);
}

int func_137(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1939231->f_10467;
	if (iVar0 >= 3)
	{
		return -1;
	}
	if (!func_163(sParam3, &((Global_1939231->f_10468[iVar0 /*2*/])->f_1), Global_1939231->f_10468[iVar0 /*2*/], iParam4, 0))
	{
		return -1;
	}
	Global_1939231->f_10467++;
	uVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0, -1, -1287062382, uVar1);
	return iVar0;
}

void func_138(int iParam0)
{
	if (Global_1939231->f_10477 != iParam0)
	{
		Global_1939231->f_10477 = iParam0;
		Global_1939231->f_10486 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10493, func_134());
	func_340((Global_1939231->f_10477 != -283002878 && Global_1939231->f_10477 != -889932290));
}

void func_139(int iParam0, var uParam1, bool bParam2)
{
	func_138(iParam0);
	if (!bParam2)
	{
		func_10(iParam0);
	}
}

int func_140()
{
	var uVar0;
	int iVar1;

	if (Global_1939231->f_37 == 0)
	{
		Global_1939231->f_10453 = 0;
	}
	else
	{
		uVar0 = Global_1939231->f_10453;
		iVar1 = (Global_1939231->f_10452 - 1);
		switch (Global_1939231->f_37)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1939231->f_10453 = iVar1;
				break;
		}
		if (Global_1939231->f_37 == -283002878)
		{
			if (func_23(0))
			{
				Global_1939231->f_10453 = (iVar1 - 1);
			}
			else
			{
				Global_1939231->f_10453 = iVar1;
			}
		}
		func_73(uVar0);
		return 1;
	}
	return 0;
}

bool func_141()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

void func_142()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1070356->f_2 = 0;
}

void func_143(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1939231->f_10467 > 0)
	{
		Global_1939231->f_10467 = (Global_1939231->f_10467 - 1);
		func_162((Global_1939231->f_10468[Global_1939231->f_10467 /*2*/])->f_1);
	}
}

int func_144(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_145(bool bParam0)
{
	if (func_27() == -1)
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

void func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<14> Var17;

	if (func_341(Global_34))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	iVar2 = 0;
	Var3.f_9 = -1591664384;
	Var17 = { func_342(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (func_343(&Var17, &iVar0, &iVar1, bParam3))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_148(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_344(Var3))
				{
				}
				else if (bParam1)
				{
					func_345(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					func_345(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != 1259508039)
				{
					func_345(iParam0, Var3.f_4, func_346(Var3.f_4));
				}
			}
			iVar2++;
		}
		func_162(iVar0);
	}
}

void func_147(int iParam0)
{
	func_345(iParam0, joaat("weapon_kit_binoculars"), func_347(32));
	func_345(iParam0, 1652431022 /* GXTEntry: "Refined Binoculars" */, func_347(32));
	func_345(iParam0, joaat("weapon_kit_camera"), func_347(64));
	func_345(iParam0, -1516555556 /* GXTEntry: "Horse Brush" */, func_347(1024));
	func_345(iParam0, -862059856 /* GXTEntry: "Metal Detector" */, func_347(32768));
	func_348(iParam0, func_347(8192));
	func_349(iParam0, func_347(128));
	func_350(iParam0, func_347(4));
	func_351(iParam0, func_347(8));
	func_352(iParam0, func_347(1));
}

int func_148(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_149(int iParam0)
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
			return 1;
	}
	return 0;
}

bool func_150(int iParam0, int iParam1)
{
	return iParam1 == func_6(iParam0, 1224357681);
}

int func_151(int iParam0)
{
	int iVar0;

	if (Global_1939231->f_14.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1939231->f_14.f_16)
		{
			if (&Global_1939231->f_14[iVar0 /*3*/] != iParam0)
			{
			}
			else if ((Global_1939231->f_14[iVar0 /*3*/])->f_1 & 1 != 0)
			{
				return 0;
			}
			iVar0++;
		}
	}
	switch (iParam0)
	{
		case -776155824: /* GXTEntry: "Animal Carcass Perfect" */
		case -45650221: /* GXTEntry: "Animal Carcass Poor" */
		case 1715058708: /* GXTEntry: "Animal Carcass Good Quality" */
			return 0;
		case 1906048139: /* GXTEntry: "Ingredients Satchel Pamphlet" */
			if (func_264(-1898006219 /* GXTEntry: "Ingredients Satchel Pamphlet" */, func_290(1), 1084182731, 0, 0, 0) > 0)
			{
				return 0;
			}
			break;
		case -1331886426: /* GXTEntry: "Materials Satchel Pamphlet" */
			if (func_264(-1898852053 /* GXTEntry: "Materials Satchel Pamphlet" */, func_290(1), 1084182731, 0, 0, 0) > 0)
			{
				return 0;
			}
			break;
	}
	if (func_23(0) && Global_1915180->f_19742 == 2)
	{
		if (!func_353(iParam0))
		{
			return 0;
		}
	}
	if (func_69(iParam0, -805003139))
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
		{
			return 0;
		}
	}
	if (func_87(iParam0) == -2130996531)
	{
		if (!func_69(iParam0, -1540973036) && !func_69(iParam0, 1192444843))
		{
			return 0;
		}
		else if (iParam0 == 1872063208 || iParam0 == 1309979101)
		{
			return 0;
		}
	}
	if (Global_1915180->f_19742 == 29)
	{
		if (func_198(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_152(struct<12> Param0, var uParam12, var uParam13)
{
	char* sVar0;
	var uVar1;
	var uVar2;
	char* sVar3;
	int iVar4;
	int iVar5;

	if (func_68(Param0.f_4, 0))
	{
		sVar0 = func_190(Param0.f_4);
		uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10490, Global_1939231->f_10484);
		uVar2 = uVar1;
		sVar3 = func_354(Param0.f_4);
		if (func_69(Param0.f_4, 1397200408))
		{
			Param0.f_10 = 1;
		}
		if (func_212(Param0.f_4, joaat("default")) != 0)
		{
			iVar4 = func_264(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 1084182731 && iVar4 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar4;
		}
		iVar5 = joaat("COLOR_PURE_WHITE");
		if (func_355(Param0.f_4))
		{
			if (func_69(Param0.f_4, 1816585950))
			{
				iVar5 = -1777836132;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar2, sVar0, Param0.f_11, Param0.f_10, sVar3, iVar5);
		Global_1939231->f_10484++;
	}
}

bool func_153(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_356(iParam0);
	if (!func_201(iVar0))
	{
		return 0;
	}
	vVar1 = { (Global_1051388->f_69[iVar0 /*76*/])->f_3 };
	if (iParam0 == 150)
	{
		vVar1 = { func_357(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_358(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_359(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_359(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_359(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_155(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_156(int iParam0)
{
	if (iParam0 == Global_1939231->f_37)
	{
		return 1;
	}
	return 0;
}

float func_157(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_360(Global_34, iParam0, bParam1, bParam2);
}

int func_158(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_159(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1903007[iParam0 /*43*/]))
	{
		return 1;
	}
	return 0;
}

float func_160(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_161(int iParam0)
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

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_361(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_362(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_362(iParam0) + 1;
	fVar6 = func_363(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(func_364(iVar0, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(func_364(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_365(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_162(int iParam0)
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

int func_163(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_145(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;

	if (func_149(uParam0->f_9))
	{
		return 0;
	}
	if (!func_344(*uParam0))
	{
		return 0;
	}
	if (!func_366(uParam0->f_4, iParam1, 0))
	{
		return 0;
	}
	if (!func_151(uParam0->f_4))
	{
		return 0;
	}
	if (func_23(0))
	{
		if (!func_68(uParam0->f_4, 0))
		{
			return 0;
		}
		if (func_306())
		{
			iVar0 = func_367(uParam0->f_4, 1, 0, 0);
			if (iVar0 < func_264(uParam0->f_4, uParam0->f_5, uParam0->f_9, 0, 0, 0))
			{
				uParam0->f_11 = iVar0;
			}
		}
		if (uParam0->f_11 <= 0)
		{
			return 0;
		}
	}
	if (Global_1939231->f_10478 == 0 && !func_51())
	{
		func_52(uParam0->f_4);
	}
	else
	{
		func_300(0);
	}
	return 1;
}

void func_165(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_6(iParam0, 1224357681);
	bVar1 = func_354(iParam0);
	if (func_368(iVar0))
	{
		if (Global_1939231->f_38.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1939231->f_38.f_1)
			{
				if (iVar0 == &Global_1939231->f_38.f_2[iVar2 /*2*/])
				{
					func_369(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_370(iVar0, bVar1);
		}
		else
		{
			func_370(iVar0, bVar1);
		}
	}
}

int func_166()
{
	if (Global_1939231->f_10477 == -182626652)
	{
		switch (func_168())
		{
			case 10:
			case 15:
			case 16:
			case 29:
				return 1;
		}
	}
	else if (Global_1939231->f_10477 == -2074770370)
	{
		return func_20();
	}
	else if (Global_1939231->f_10477 == -693134279)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_371(&iParam0);
		if (!func_68(iVar0, 0))
		{
			iVar0 = func_372(iParam0);
		}
	}
	else
	{
		iVar0 = func_372(iParam0);
	}
	return iVar0;
}

int func_168()
{
	return Global_1915180->f_19742;
}

int func_169(bool bParam0)
{
	int iVar0;
	var uVar1;

	if (Global_1901929->f_638.f_31)
	{
		return 0;
	}
	if (func_27() == 0)
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	}
	else
	{
		iVar0 = func_121(0);
	}
	func_373(&iVar0, &uVar1, bParam0);
	return uVar1;
}

int func_170(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_46(0);
	iVar2 = func_46(1);
	func_373(&iVar1, &iVar0, bParam0);
	func_373(&iVar2, &iVar0, bParam0);
	return iVar0;
}

int func_171(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;

	if (Global_1901929->f_638.f_32)
	{
		return 0;
	}
	if (func_27() == 0)
	{
		iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::GET_PLAYER_INDEX());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (func_163("ALL SATCHEL", &iVar2, &iVar3, -2015960939, 1))
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
					if (!func_148(&Var5, iVar4, iVar2, iVar3))
					{
					}
					else if (!func_68(Var5.f_4, 0))
					{
					}
					else if (Var5.f_4 == 1259508039)
					{
					}
					else
					{
						iVar1++;
						if (bParam0)
						{
							if (!func_151(Var5.f_4))
							{
							}
							else
							{
								func_176(Var5, 1);
							}
						}
					}
					iVar4++;
				}
			}
			func_162(iVar2);
		}
		return iVar1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < STATS::WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(1332470872, iParam0))
	{
		if (STATS::WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(1332470872, iParam0, iVar0, &iVar1, &iVar2))
		{
			if (func_68(iVar1, 0))
			{
				iVar3 = func_188(iVar1, 0, 0, 0);
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

void func_173(int iParam0)
{
	struct<12> Var0;
	int iVar14;
	var uVar15;

	if (!func_202(iParam0))
	{
		return;
	}
	Var0.f_9 = -1591664384;
	Var0.f_11 = func_374(iParam0);
	iVar14 = iParam0;
	func_375(iParam0, &uVar15, 0, 0, 0, 0);
	if (!func_23(0))
	{
		func_376(-1715238242, iVar14, &uVar15, 1, Var0.f_11, 0, 0, joaat("COLOR_PURE_WHITE"));
	}
	else
	{
		func_376(-1553587059, iVar14, &uVar15, 1, Var0.f_11, 0, 0, joaat("COLOR_PURE_WHITE"));
	}
	Global_1939231->f_38.f_203++;
}

int func_174(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_210(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return 0;
	}
	iVar0 = COLLECTION::_0xCC644BC1DD655269(iParam0, 0);
	if (!func_202(iVar0))
	{
		return 0;
	}
	if (func_377(iVar0, -489628648, &uVar1))
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0[16];
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	if (iParam3 == 0)
	{
		if (*uParam1 > 0)
		{
			iVar17 = (*uParam1 - 1);
			while (iVar17 >= 0)
			{
				if (!func_148(uParam2, iVar17, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_68(uParam2->f_4, 0))
				{
				}
				else if (!func_164(uParam2, iParam3))
				{
				}
				else
				{
					iVar19 = uParam2->f_4;
					bVar20 = false;
					iVar21 = 0;
					iVar18 = 0;
					while (iVar18 < 16)
					{
						if (func_68(&(iVar0[iVar18]), 0))
						{
							iVar21++;
						}
						if (iVar19 == &iVar0[iVar18])
						{
							bVar20 = true;
						}
						iVar18++;
					}
					if (!bVar20)
					{
						if (iVar21 < 16)
						{
							iVar0[iVar21] = iVar19;
							iVar22 = 0;
							iVar22 = 15;
							while (iVar22 >= 1)
							{
								if (!func_68(&(iVar0[iVar22]), 0))
								{
								}
								else if (func_378(&(iVar0[iVar22])) > func_378(&(iVar0[(iVar22 - 1)])))
								{
									iVar23 = &iVar0[iVar22];
									iVar0[iVar22] = &iVar0[(iVar22 - 1)];
									iVar0[(iVar22 - 1)] = iVar23;
									func_379(&iVar0);
								}
								iVar22 = (iVar22 + -1);
							}
						}
						else if (func_378(iVar19) < func_378(&(iVar0[15])))
						{
						}
						else
						{
							iVar24 = 0;
							while (iVar24 < 16)
							{
								if (func_378(iVar19) > func_378(&(iVar0[iVar24])))
								{
									iVar25 = 14;
									while (iVar25 >= iVar24)
									{
										iVar0[iVar25 + 1] = &iVar0[iVar25];
										iVar25 = (iVar25 + -1);
									}
									iVar0[iVar24] = iVar19;
								}
								else
								{
									iVar24++;
								}
							}
							func_379(&iVar0);
						}
					}
				}
				iVar17 = (iVar17 + -1);
			}
			func_379(&iVar0);
			func_380(&iVar0);
		}
	}
}

void func_176(struct<12> Param0, var uParam12, var uParam13, bool bParam14)
{
	bool bVar0;
	char* sVar1;
	bool bVar2;
	vector3 vVar3;
	char* sVar6;
	int iVar7;

	if (func_68(Param0.f_4, 0))
	{
		bVar0 = func_354(Param0.f_4);
		if (func_32() || (func_381() && !bVar0))
		{
			return;
		}
		sVar1 = func_190(Param0.f_4);
		bVar2 = ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(Param0.f_4);
		vVar3 = { func_382(Param0.f_4) };
		sVar6 = func_383(Param0.f_4);
		if (!bParam14 && func_212(Param0.f_4, joaat("default")) != 0)
		{
			Param0.f_11 = func_264(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
		}
		func_384(&Param0);
		iVar7 = joaat("COLOR_PURE_WHITE");
		if (func_355(Param0.f_4))
		{
			if (func_69(Param0.f_4, 1816585950))
			{
				iVar7 = -1777836132;
			}
		}
		func_376(-1553587059, sVar1, &vVar3, bVar0, Param0.f_11, bVar2, sVar6, iVar7);
		Global_1939231->f_38.f_203++;
	}
}

int func_177()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_385(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_178(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_356(iParam0);
	vVar1 = { (Global_1051388->f_69[iVar0 /*76*/])->f_3 };
	if (iVar0 == 29)
	{
		vVar1 = { func_357(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_358(vVar1))
	{
		return 0;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = func_359(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return 1;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = func_359(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_359(iParam1, vVar1, 0) < 75f)
		{
			return 1;
		}
	}
	return 0;
}

void func_180()
{
	if (func_168() != 2)
	{
		if (func_210(joaat("weapon_kit_binoculars"), 1))
		{
			func_181(joaat("weapon_kit_binoculars"), 0, 0);
		}
		if (func_210(1652431022 /* GXTEntry: "Refined Binoculars" */, 1))
		{
			func_181(1652431022 /* GXTEntry: "Refined Binoculars" */, 0, 0);
		}
		if (func_210(joaat("weapon_kit_camera"), 1))
		{
			func_181(joaat("weapon_kit_camera"), 0, 0);
		}
		func_386();
		if (func_210(-1838434463 /* GXTEntry: "Camp" */, 1))
		{
			func_181(-1838434463 /* GXTEntry: "Camp" */, 0, 0);
		}
		else if (func_210(2019377485 /* GXTEntry: "Camp" */, 1))
		{
			func_181(2019377485 /* GXTEntry: "Camp" */, 0, 0);
		}
		func_387();
	}
}

void func_181(int iParam0, bool bParam1, int iParam2)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = iParam0;
	Var0.f_11 = 1;
	if (!bParam1)
	{
		func_176(Var0, iParam2);
	}
	else
	{
		func_152(Var0);
	}
}

int func_182(int iParam0)
{
	switch (iParam0)
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
			return 48;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 49;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 50;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 51;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 52;
		case 1338475089: /* GXTEntry: "Agarita" */
			return 39;
		case 2605459: /* GXTEntry: "Texas Bluebonnet" */
			return 40;
		case 1071702353: /* GXTEntry: "Bitterweed" */
			return 41;
		case -1183422860: /* GXTEntry: "Blood Flower" */
			return 42;
		case -1957546791: /* GXTEntry: "Cardinal Flower" */
			return 43;
		case -589542533: /* GXTEntry: "Chocolate Daisy" */
			return 44;
		case -1776738559: /* GXTEntry: "Creek Plum" */
			return 45;
		case 1602215994: /* GXTEntry: "Wild Rhubarb" */
			return 46;
		case -396757268: /* GXTEntry: "Wisteria" */
			return 47;
	}
	return 0;
}

int func_183(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	return func_389(iParam0, 4, 1);
}

void func_184(int iParam0, var uParam1)
{
	if (func_32())
	{
		func_390(1);
		if (func_19())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), -31549930);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, true);
	}
	else if (func_23(0) || func_32())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10505))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_392(iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), func_393(iParam0));
		func_394(iParam0, uParam1);
	}
}

int func_185(int iParam0)
{
	if (func_186())
	{
		return 0;
	}
	if (Global_1939231->f_10480 == iParam0)
	{
		return 0;
	}
	if (!func_23(0) && !func_32())
	{
		if ((((func_189(iParam0, 0) == 1 || func_69(iParam0, 173360570)) || func_69(iParam0, 1291597743)) || func_69(iParam0, -928967997)) || func_69(iParam0, 747873593))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_186()
{
	return Global_1939231->f_11;
}

int func_187(int iParam0, bool bParam1)
{
	if (!func_124(iParam0))
	{
		return 0;
	}
	if (func_395(0, 0, 1))
	{
		return 1;
	}
	if (iParam0 == -171130052)
	{
		if (!func_210(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
		{
			return 3;
		}
	}
	else if ((iParam0 == 1133082501 || iParam0 == -944411166) || iParam0 == 1850181232)
	{
		if (!func_210(-862059856 /* GXTEntry: "Metal Detector" */, 1))
		{
			return 4;
		}
	}
	if (bParam1)
	{
		if (Global_17172.f_2954 > 0)
		{
			return 2;
		}
	}
	return 0;
}

int func_188(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_87(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_322(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_396(iParam0, 0);
	}
	if (func_212(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_145(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_397(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_145(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_189(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_111(iParam0, 0, 0) };
	return func_398(iParam0, &Var0, 0, bParam1);
}

int func_190(int iParam0)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_399(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_191(int iParam0)
{
	int iVar0;

	iVar0 = func_182(iParam0);
	if ((iVar0 != 0 && !func_400(func_182(iParam0))) && !func_401(func_182(iParam0)))
	{
		if (!func_183(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return func_402(iParam0);
}

int func_192(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	if (func_27() == 0)
	{
		iVar0 = func_403(iParam0, 816454899, 1, 0);
	}
	else
	{
		fVar1 = 1f;
		fVar2 = 1f;
		iVar3 = Global_1915180->f_19742.f_1;
		iVar4 = Global_1915180->f_19742;
		if (func_153(iVar3) && func_201(iVar4))
		{
			if (iVar4 == 10 || iVar4 == 15)
			{
				fVar2 = func_404(iVar3, iParam0);
			}
			fVar1 = func_405(&((Global_1915180->f_3[iVar4 /*447*/])->f_36), iParam0);
		}
		fVar5 = (fVar1 + fVar2);
		if (fVar1 <= 0f)
		{
			return 0;
		}
		fVar5 = (fVar5 - IntToFloat(BUILTIN::FLOOR(fVar5)));
		iVar6 = func_403(iParam0, 816454899, 1, 0);
		iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar6) + (BUILTIN::TO_FLOAT(iVar6) * fVar5)));
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	return iVar0;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 1237770824: /* GXTEntry: "Animal Fat" */
			return -2059491326;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -2054061821;
		case 529305859: /* GXTEntry: "Buck Antlers" */
			return -2054061821;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return -276530555;
		case -407659715: /* GXTEntry: "Elk Antler" */
			return -276530555;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1786362058;
		case 895033262: /* GXTEntry: "Moose Antler" */
			return 1786362058;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -1925097470;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1925097470;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -1925097470;
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
			return -179784009;
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			return -179784009;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
			return -179784009;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -549843543;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return -549843543;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -549843543;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 547453549;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 547453549;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return 547453549;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return -185670568;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -185670568;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -185670568;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return -68530554;
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
			return -68530554;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
			return -68530554;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1882667332;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1882667332;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -1882667332;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return -549843543;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -549843543;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return -549843543;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 251523924;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
			return 251523924;
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			return 251523924;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return 128689452;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 128689452;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 128689452;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -795926005;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return -795926005;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -795926005;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1766735806;
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			return 1766735806;
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
			return 1766735806;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return -1260301848;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
			return -1260301848;
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
			return -1260301848;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 362062697;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 362062697;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 362062697;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return -557557374;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
			return -557557374;
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			return -557557374;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 2145928766;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 2145928766;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 2145928766;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 2103138183;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return 2103138183;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 2103138183;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return 1176634776;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 1176634776;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return 1176634776;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
			return -48308129;
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			return -48308129;
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
			return -48308129;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return -234392368;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -234392368;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return -234392368;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 489332694;
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
			return 489332694;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
			return 489332694;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -972505668;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -972505668;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -972505668;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1482721140;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1482721140;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -1482721140;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 1943206759;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 1943206759;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1943206759;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -479944273;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -479944273;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -479944273;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return -1900245017;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
			return 996737485;
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			return -317318063;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return -1179145184;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return 49841414;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
			return 1853004765;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return -613244561;
		case -1538397860: /* GXTEntry: "Muskie" */
			return 998459086;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return -1185304294;
		case 1416872916: /* GXTEntry: "Perch" */
			return 1606770041;
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			return 592705199;
		case 1042542561: /* GXTEntry: "Rock Bass" */
			return 1001427351;
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			return -2134757665;
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			return 1296165525;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -1389099466;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1389099466;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -1389099466;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 2032362047;
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			return 2032362047;
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
			return 2032362047;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return -600158588;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -600158588;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return -600158588;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -348997013;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -348997013;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -348997013;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -855155400;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -855155400;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -855155400;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return 1743453709;
		case 2144711797:
			return 1743453709;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1743453709;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -1910050550;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -1910050550;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1910050550;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -1634769991;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -1634769991;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -1634769991;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 556997951;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 556997951;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return 556997951;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 727714355;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 727714355;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 727714355;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return -71380070;
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
			return -71380070;
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			return -71380070;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -729503995;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -729503995;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -729503995;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1786644138;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 1786644138;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1786644138;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1466769106;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1466769106;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return -1466769106;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2079514583;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -2079514583;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return -2079514583;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -409309194;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return -409309194;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -409309194;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 2020893799;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 2020893799;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 2020893799;
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			return 195131818;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
			return 195131818;
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
			return 195131818;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1445465787;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return 1445465787;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 1445465787;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1817406451;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return -1817406451;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1817406451;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1521192478;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return 1521192478;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1521192478;
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
			return -1517999735;
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			return -1517999735;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
			return -1517999735;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -2084641708;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2084641708;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -2084641708;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -1125378664;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return -1125378664;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -1125378664;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 708951363;
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
			return 708951363;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
			return 708951363;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 714611525;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 714611525;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 714611525;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1699761828;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1699761828;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 1699761828;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return -158140634;
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
			return -158140634;
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			return -158140634;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return 1272884971;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 1272884971;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 1272884971;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -1552076723;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1552076723;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1552076723;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -334414989;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return -334414989;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -334414989;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return -352732121;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -352732121;
		case 2126795269:
			return -352732121;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 117556329;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 117556329;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 117556329;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 469453151;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 469453151;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 469453151;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return 621465116;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 621465116;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 621465116;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -523607607;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -523607607;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return -523607607;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return 1662628197;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 1662628197;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return 1662628197;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return 2084847747;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return 2084847747;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 2084847747;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1656226638;
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			return 1656226638;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
			return 1656226638;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return -1608525320;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
			return -1608525320;
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
			return -1608525320;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1717540687;
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
			return 1717540687;
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			return 1717540687;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1622797153;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
			return 1622797153;
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
			return 1622797153;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return -252750557;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -252750557;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -252750557;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 513869240;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 513869240;
			return 513869240;
			return -482152318;
			return -482152318;
			return -482152318;
			return -329015022;
			return -329015022;
			return -329015022;
			return 340488205;
			return 340488205;
			return 340488205;
			return 1228602887;
			return -1749311280;
			return -770230168;
			return -1761903019;
			return -202898890;
			return -324172879;
			return 221026557;
			return 2055874470;
			return 1383597214;
			return -695920779;
			return 1864240538;
			return 135251025;
			return -1380974753;
			return 1918940015;
			return 1606360364;
			return 949154977;
			return 1327585677;
			return -424223638;
			return -817814915;
			return 1324361660;
			return -1740875511;
			return -1114206422;
			return 1129016218;
			return 74265533;
			return -1687205102;
			return -2112352640;
			return -1179922595;
			return -1777044066;
			return -427774472;
			return -862133853;
			return -153093028;
			return 1961151934;
			return -1429428300;
			return 641025903;
			return 1014343203;
			return -977684174;
			return 753992067;
			return 975102591;
			return -742266708;
			return 1002050200;
			return 970250315;
			return 913562114;
			return 1415886451;
			return 1244458697;
			return 322165109;
			return -2083991045;
			return 709722347;
			return 709722347;
			return 709722347;
			return 144513283;
			return 144513283;
			return 144513283;
			return -78603574;
			return -78603574;
			return -78603574;
			return 956393401;
			return 956393401;
			return 956393401;
			return -1604538436;
			return -1604538436;
			return -1604538436;
			return -1583116953;
			return -1583116953;
			return -1583116953;
			return 1995645004;
			return 1995645004;
			return 1995645004;
			return 439094686;
			return 439094686;
			return 439094686;
			return 1069834732;
			return 1069834732;
			return 1069834732;
			return -1508151163;
			return -1508151163;
			return -1508151163;
			return 854098596;
			return 854098596;
			return 854098596;
			return 1467162138;
			return 1467162138;
			return 1467162138;
			return 1322026128;
			return 1322026128;
			return 1322026128;
			return 711086189;
			return 711086189;
			return 711086189;
			return -1334624683;
			return -1334624683;
			return -1334624683;
			return 2118150058;
			return 2118150058;
			return 2118150058;
			return 1889550255;
			return 1889550255;
			return 1889550255;
			return 1684561350;
			return 1684561350;
			return 1684561350;
			return 1763709491;
			return 1763709491;
			return 1763709491;
			return 1828340319;
			return 1828340319;
			return 1828340319;
			return 344414895;
			return 344414895;
			return 344414895;
			return -1875079046;
			return -1875079046;
			return -1875079046;
			return -1273558742;
			return -1273558742;
			return -1273558742;
			return -839975185;
			return -839975185;
			return -839975185;
			return -401745683;
			return -401745683;
			return -401745683;
			return -2096730839;
			return -2096730839;
			return -2096730839;
			return 1871609823;
			return 1871609823;
			return 1871609823;
			return -1028335922;
			return -1028335922;
			return -1028335922;
			return 172698521;
			return 172698521;
			return 172698521;
			return 212330241;
			return 212330241;
			return 212330241;
			return -555536739;
			return -555536739;
			return -555536739;
			return -1896091463;
			return -1896091463;
			return -1896091463;
			return 1854095100;
			return 1854095100;
			return 1854095100;
			return 1690246594;
			return 1690246594;
			return 1690246594;
			return -885435577;
			return -885435577;
			return -885435577;
			return -1923252111;
			return -1923252111;
			return -1923252111;
			return -470304000;
			return -1074986502;
			return -1042059910;
			return 1234479911;
			return -591134272;
			return 2092024647;
			return -1902618794;
			return 0;
		}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iParam0))
	{
		return 0;
	}
	if (!func_68(iParam1, 0))
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

bool func_195()
{
	return (Global_1140484->f_18706[60 /*195*/])->f_194;
}

char* func_196(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_406(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_197(int iParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_407(iParam0);
	}
	return func_408(iParam0, iParam1);
}

int func_198(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2[1];
	int iVar4[3];
	int iVar8;

	if (func_409(iParam0, &uVar0))
	{
		return 1;
	}
	if (!func_410(iParam0))
	{
		return 0;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_34))
	{
		func_411(Global_34, &uVar2, 1);
		iVar1 = func_412(&(uVar2[0]));
		if (iVar1 == iParam0)
		{
			if (ENTITY::_0x8DE41E9902E85756(&(uVar2[0])))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (PED::_0xA911EE21EDF69DAF(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID())))
	{
		func_411(PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()), &iVar4, 3);
		iVar8 = 0;
		while (iVar8 < iVar4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&(iVar4[iVar8])))
			{
			}
			else
			{
				iVar1 = func_371(iVar4[iVar8]);
				if (iVar1 == iParam0)
				{
					if (ENTITY::_0x8DE41E9902E85756(&(iVar4[iVar8])))
					{
						return 1;
					}
				}
			}
			iVar8++;
		}
	}
	return 0;
}

char* func_199(int iParam0)
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

int func_200()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (!func_413(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_201(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

bool func_202(int iParam0)
{
	return iParam0 != 0;
}

int func_203(int iParam0)
{
	return func_194(iParam0, 2084597891 /* GXTEntry: "Money" */);
}

int func_204(int iParam0)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	if (!func_209(iParam0, -489628648, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_210(&(Var0[iVar32 /*2*/]), 1))
		{
			iVar33++;
		}
		iVar34++;
		iVar32++;
	}
	if (iVar33 >= iVar34)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar33, iVar34));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar33, iVar34));
	}
	return 1;
}

int func_205(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_206(var uParam0)
{
	func_390(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), 327167317);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_414(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

int func_207(int iParam0)
{
	return iParam0;
}

int func_208(int iParam0, int iParam1)
{
	if (!func_415(iParam0, 2))
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

int func_209(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_416(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_417(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

bool func_210(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_87(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_418(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_419(iParam0))
			{
				return true;
			}
			break;
	}
	return func_188(iParam0, 0, 0, 0) >= iParam1;
}

bool func_211(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_420(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_114(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_421(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_422(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_423(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = bParam3;
			Var51.f_7 = iParam2;
			func_311(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_145(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_214(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_420(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_297(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_114(bParam6))
	{
		iVar14 = -1;
		if (func_27() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_423(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_311(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_145(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0)
{
	if (func_69(iParam0, 1573112293))
	{
		return func_424(iParam0);
	}
	switch (func_90(iParam0))
	{
		case -77448735:
			if (func_425(iParam0))
			{
				return func_424(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_424(iParam0);
		case -1520388130:
		case 1802292908:
			return func_426();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_427();
		case -525676072:
			return func_427();
		case 1779021115:
			if (iParam0 == joaat("weapon_kit_camera"))
			{
				return func_428();
			}
			return func_429();
		case -1823706425:
			return func_430();
		case -854348463:
			return func_431();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_432();
		default:
			if (func_68(iParam0, 0))
			{
				if (func_69(iParam0, 1919582297))
				{
					return func_433();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_434();
				}
				else if (iParam0 == -1516555556)
				{
					return func_435();
				}
				else if (func_69(iParam0, 1147021565))
				{
					return func_436();
				}
			}
			return func_437();
	}
	return func_437();
}

int func_216(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1939178->f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (func_27() == 0)
	{
		if (func_438(131072))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 1))
	{
		if (func_438(1024))
		{
			return 0;
		}
	}
	if (Global_1939178->f_16)
	{
		return 0;
	}
	if (!func_101(iParam1, 2) && func_438(32))
	{
		return 0;
	}
	if (!func_101(iParam1, 4))
	{
		if (func_438(4096))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 8) && func_438(512))
	{
		return 0;
	}
	if (!func_101(iParam1, 512) && !func_439(bParam0))
	{
		return 0;
	}
	if (!func_101(iParam1, 262144) && !func_440(bParam0, func_101(iParam1, 524288)))
	{
		return 0;
	}
	if (!func_101(iParam1, 64) && !func_441(bParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_101(iParam1, 128))
	{
		if (func_442(Global_34, 1868526510) || func_443(Global_34))
		{
			if (bParam0)
			{
				func_89("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_101(iParam1, 16))
	{
		if (func_443(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_444(iVar0, 1))
			{
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return 0;
			}
		}
	}
	if (!func_101(iParam1, 256) && func_438(8192))
	{
		return 0;
	}
	if (!func_101(iParam1, 1024) && func_438(65536))
	{
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_101(iParam1, 2048))
	{
		if (func_438(32768))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 4096))
	{
		if (func_438(16384))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 8192))
	{
		if (!func_438(16))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 16384))
	{
		if (func_438(256))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 32768))
	{
		if (func_445())
		{
			if (bParam0)
			{
				func_89("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_101(iParam1, 131072))
	{
		if (!func_438(524288))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 65536))
	{
		if (!func_438(262144))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 1048576))
	{
		if (!func_438(2097152))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 2097152))
	{
		if (!func_438(8388608))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 4194304))
	{
		if (!func_438(16777216))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 8388608))
	{
		if (func_438(33554432))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 16777216))
	{
		if (func_438(67108864))
		{
			return 0;
		}
	}
	if (!func_101(iParam1, 33554432))
	{
		if (func_438(134217728))
		{
			return 0;
		}
	}
	if (func_438(64))
	{
		return 0;
	}
	else if (func_438(128))
	{
		return 0;
	}
	else if (func_438(1048576))
	{
		return 0;
	}
	else if (func_438(4))
	{
		return 0;
	}
	return 1;
}

int func_217()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return 1;
		}
	}
	return 0;
}

bool func_218(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_1433.f_54.f_85);
}

char* func_219()
{
	switch (Global_1915180->f_21989.f_5)
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
		case 8:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 7:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 20:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 21:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 22:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		default:
			break;
	}
	return "";
}

int func_220(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_446(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_221(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_447(iParam0))
	{
		return 1;
	}
	if (!func_448())
	{
		return 5;
	}
	if (!bParam1 && (Global_1199613->f_48[iParam0 /*21*/])->f_17)
	{
		if (bParam2 || Global_1199613->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_449(iParam0))
	{
		return 3;
	}
	if (func_450(iParam0) && !func_451())
	{
		return 4;
	}
	return 0;
}

int func_222(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_6(iParam0, -949239683))
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
				return 1;
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
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_223()
{
	return (Global_1951141->f_1657.f_1[1 /*3*/])->f_1 == -282754472;
}

int func_224(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_452(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0)
{
	int iVar0;

	iVar0 = 406178289;
	switch (func_453())
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
		if (func_69(iParam0, 1573112293))
		{
			func_454(func_182(iParam0), 1, 1);
		}
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_226(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_227(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_228(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_229(int iParam0)
{
	int iVar0;

	iVar0 = -362580870;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_230(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_231(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_232(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_233(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_234(int iParam0)
{
	int iVar0;

	iVar0 = 1076410848;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_235(int iParam0)
{
	int iVar0;

	iVar0 = 1516413548;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_236(int iParam0)
{
	int iVar0;

	iVar0 = -1454586679;
	switch (func_453())
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
		func_455(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1934039819;
	switch (func_453())
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
		if (!func_455(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_456(iParam0);
			func_128(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

void func_238(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1054661625;
	switch (func_453())
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
		if (!func_455(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_456(iParam0);
			func_128(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_456(iParam0);
		func_128(iParam0, 1, 0, 562618531);
	}
}

bool func_239(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_240(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1938417)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_241(int iParam0)
{
	if (func_239(iParam0, 1))
	{
		func_457(1);
	}
}

int func_242(int iParam0)
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

void func_243(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_244(struct<4> Param0)
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
			if (Global_1951141->f_916 >= 25)
			{
				return;
			}
			if (func_458(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_916)
				{
					iVar1 = ((Global_1951141->f_921 + iVar0) % 25);
					if ((&Global_1951141->f_734[iVar1 /*4*/] == Param0 && (Global_1951141->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_459(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_243(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_458(Param0))
			{
				return;
			}
			func_459(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_243(8);
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
			if (Global_1951141->f_918 >= 20)
			{
				return;
			}
			if (func_458(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_918)
				{
					iVar1 = ((Global_1951141->f_919 + iVar0) % 20);
					if ((&Global_1951141->f_835[iVar1 /*4*/] == Param0 && (Global_1951141->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_459(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_243(8);
			break;
			break;
	}
}

bool func_245()
{
	return Global_1951141->f_3252;
}

int func_246(int iParam0)
{
	if (func_460())
	{
		return 0;
	}
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!func_210(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_247(int iParam0)
{
	return func_461(iParam0);
}

void func_248(int iParam0, int iParam1)
{
	func_462(iParam0, iParam1);
}

int func_249(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_463(iParam0);
	if (func_69(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_464(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_465();
			}
			else
			{
				iVar0 = func_466();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_467();
		}
		else
		{
			iVar0 = func_468();
		}
	}
	else if (func_469(&iVar2))
	{
		if (func_69(iVar2, -1303648999))
		{
			iVar0 = func_465();
		}
		else
		{
			iVar0 = func_466();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_467();
	}
	else
	{
		iVar0 = func_468();
	}
	if (iVar0 != 0)
	{
		Global_1951141->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_250(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_251()
{
	Global_1951141->f_3235 = 0;
	Global_1951141->f_3235.f_1 = 0;
	Global_1951141->f_3235.f_8 = 0;
	Global_1951141->f_3235.f_2 = 0;
	Global_1951141->f_3235.f_3[0] = 0;
	Global_1951141->f_3235.f_3[1] = 0;
	Global_1951141->f_3235.f_3[2] = 0;
	Global_1951141->f_3235.f_3[3] = 0;
	Global_1951141->f_3235.f_9 = 0;
	Global_1951141->f_3235.f_10 = 0;
	Global_1951141->f_3235.f_11 = 0;
	if (Global_1951141->f_3235.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1951141->f_3235.f_13);
	}
	Global_1951141->f_3235.f_12 = 0;
	func_470(32768);
	func_471(1108822547, 8, 6);
}

bool func_252(int iParam0, bool bParam1)
{
	return func_472(iParam0, 0) < func_473(iParam0, bParam1);
}

void func_253(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_90(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_27), Global_1951141->f_3109.f_32.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_26), Global_1951141->f_3109.f_32, bParam1);
			break;
		case -525676072:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_28), Global_1951141->f_3109.f_32.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		default:
			if (func_69(iParam0, -1348134986))
			{
				bVar1 = func_474(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_254(0))
	{
		func_475(iParam0, 1);
		if (func_476() == 1160113249)
		{
			func_475(func_254(-2125499975), 0);
		}
		else
		{
			func_475(func_254(1160113249), 0);
		}
	}
	func_477();
	if (func_478(iVar0) || (iVar0 != -999503751 && func_69(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_145(0), iParam0, 0);
	}
	func_97(iParam0, iParam3);
	if (bParam2)
	{
		func_479(0, 0);
	}
}

int func_254(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_476();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

void func_255(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_90(iParam1);
	if (iVar0 == func_90(iParam0) || (func_69(iParam0, -1348134986) && func_69(iParam1, -1348134986)))
	{
		func_480(iParam0, iParam1, 1);
		return;
	}
}

int func_256(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_481(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_257(int iParam0, int iParam1)
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

int func_258(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_482();
	if (iParam2 == 39)
	{
		Var0 = { func_111(iParam0, 1, 0) };
		iParam2 = func_257(func_256(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_250(32768) && iParam2 == 10)
	{
		func_483(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_484(iParam2);
	func_485(iParam2, iVar5);
	func_486(Global_1951141->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_486(Global_1951141->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_487(&(Global_1951141->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951141->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1 = func_488(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951141->f_2760)
		{
			if (&Global_1951141->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951141->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_471(func_481(&(Global_1951141->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_259(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_489(&(Global_1951141->f_2760), bParam0, bParam1, bParam2, bParam3);
}

int func_260(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return 0;
	}
	if (func_69(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_111(iParam0, 0, 0) };
	if (func_260(iParam0, 0))
	{
		iVar9 = func_490(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_111(iVar9, 0, 0) };
			Var0 = { func_112(iVar9, Var4, Var4.f_4, 0) };
			return func_113(Var0, 0);
		}
		return 1;
	}
	Var0 = { func_112(iParam0, Var4, Var4.f_4, 0) };
	return func_113(Var0, iParam1);
}

int func_262(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_257(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] == &Global_1951141->f_81[iVar1 /*12*/] || &Global_1951141->f_1538.f_1[iVar1 /*3*/] == &Global_1951141->f_81[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_264(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_212(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_112(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_145(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_145(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_265(int iParam0)
{
	int iVar0;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_46(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_491(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_266()
{
	return Global_39.f_277.f_3019;
}

bool func_267()
{
	return Global_1915180->f_21989.f_1;
}

bool func_268()
{
	return Global_1915180->f_21989;
}

void func_269()
{
	PAD::_0x2804658EB7D8A50B(4, 666989068);
}

void func_270(int iParam0)
{
	Global_1051388->f_3578 = iParam0;
}

int func_271()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

bool func_272(int iParam0)
{
	return func_211(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

int func_273()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_274()
{
	return !func_272(2);
}

bool func_275(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

void func_276()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_277(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_493(bParam2, func_492(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_278(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_279(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

struct<2> func_280(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_281(struct<2> Param0)
{
	if (!func_494(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_495(Param0))
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_496(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1185132->f_66[iVar1 /*20*/] >= 2)
					{
						return (Global_1184573->f_1[iVar1 /*26*/])->f_1;
					}
				}
				else if (&Global_1185132->f_66[iVar1 /*20*/] >= 5)
				{
					return (Global_1184573->f_1[iVar1 /*26*/])->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_283(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

var func_284(int iParam0, int iParam1)
{
	return func_497(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_285(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_498(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_499(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_500(iParam0))
	{
		return 0;
	}
	if (func_501(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_502(iParam0, 1)) || func_503(32768))
	{
		if (!func_502(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_504())
	{
		return 0;
	}
	return 1;
}

void func_288(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

void func_289()
{
	Global_1913166->f_1583 = MISC::GET_GAME_TIMER();
	Global_1913166->f_1581 = 1;
}

struct<4> func_290(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_145(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_112(joaat("character"), func_302(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_112(joaat("character"), func_302(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_112(joaat("character"), func_302(), -1591664384, bParam0);
}

struct<4> func_291(bool bParam0)
{
	int iVar0;

	iVar0 = func_145(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_112(923904168, func_290(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_112(923904168, func_290(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_112(923904168, func_290(bParam0), -740156546, 0);
}

int func_292(int iParam0, bool bParam1)
{
	if (func_90(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_505();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_293(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_264(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_294(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_506(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_295(bool bParam0)
{
	int iVar0;

	iVar0 = func_145(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_112(271701509, func_290(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_112(271701509, func_290(bParam0), 12999093, 0);
}

int func_296(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_90(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_507(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_297(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_508(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_298(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<25> Var44;
	struct<17> Var69;
	struct<16> Var86;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_297(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_87(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_509(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_510(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("coach"))
	{
		Var44 = { func_511(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_512(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var69 = { func_513(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_514(joaat("update"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_515(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_423(joaat("update"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_299()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_131(func_121(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_62();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_300(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

bool func_301(int iParam0)
{
	return func_87(iParam0) == joaat("weapon");
}

struct<4> func_302()
{
	struct<4> Var0;

	return Var0;
}

void func_303(int iParam0, int iParam1, struct<4> Param2)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	if (PED::IS_PED_ON_MOUNT(Global_34) && !func_443(Global_34))
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
		if (!Global_1939067->f_9 && !PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), iVar0, &Param2, 0, 0, 0, -1082130432);
			Global_1939067->f_8 = 1;
			Global_1939067->f_66 = { Param2 };
		}
	}
}

int func_304(int iParam0)
{
	if (func_69(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_69(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_69(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_305(int iParam0)
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

int func_306()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

struct<2> func_307(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_308(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_309(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_114(0) || func_306())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_517(iParam1, func_516(iParam2), &Var1, 1);
		if (func_518(iVar0, &Var1, 0))
		{
		}
		func_109(499, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_516(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_68(&(uVar13[iVar29]), 0) && !func_69(&(uVar13[iVar29]), 1286414894)) && !&uVar13[iVar29] == iParam2)
		{
			func_519(&(uVar13[iVar29]), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == &uVar13[iVar29])
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
	func_115(func_114(0), 0, 0);
	return iVar30;
}

int func_310(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<12> Var0;
	struct<16> Var14;
	int iVar30;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return -1;
	}
	if (func_420(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_297(*uParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_515(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_423(joaat("use"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31 = 1;
		func_311(iVar30, Var31);
	}
	return iVar30;
}

void func_311(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<10> func_312(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

int func_313(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, uParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
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

int func_315(int iParam0)
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

void func_316(int iParam0)
{
	if (!func_317(iParam0))
	{
		Global_1956172 = (Global_1956172 || iParam0);
	}
}

bool func_317(int iParam0)
{
	return (Global_1956172 && iParam0) != 0;
}

void func_318(int iParam0)
{
	if (func_317(iParam0))
	{
		Global_1956172 = (&Global_1956172 - (Global_1956172 && iParam0));
	}
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (func_520(iParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_520(iParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_521(iVar0, iParam0))
		{
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	if (func_522() == 1)
	{
		func_523(iVar0);
		func_524(iParam0);
		func_525(1);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_320(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_321(int iParam0)
{
	return func_87(iParam0) == 2085633299;
}

int func_322(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_69(iParam0, 1399091007))
	{
		func_526(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_323(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	char* sVar19;
	char cVar20[128];

	if (!func_68(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_527() || bParam6)
	{
		func_528(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_529(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_529(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_530(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_87(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_90(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_531(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_69(iParam0, 474910316))
	{
		sVar17 = func_532(iParam0);
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
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_69(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_190(iParam0);
	if ((func_533(iVar12) && func_69(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_534(iParam0);
	}
	sVar19 = func_406(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_69(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_535(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_69(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_536(iParam0, &cVar20))
			{
				sVar19 = func_196(func_537(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_538(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_324(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_68(iParam0, 0))
	{
		return Var0;
	}
	if (func_69(iParam0, -305066475))
	{
		if (func_27() == -1)
		{
			if (func_69(iParam0, -537818634))
			{
				return func_539(189951448);
			}
			else
			{
				return func_539(1176172851);
			}
		}
	}
	else if (func_69(iParam0, -537818634))
	{
		return func_539(-963660207);
	}
	if (func_69(iParam0, 2084895747))
	{
		return func_539(1694039471);
	}
	return Var2;
}

int func_325(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_342(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_540(&Var0, func_291(0));
	}
	if (!func_343(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_148(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_214(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_162(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_326(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_121(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_541(iVar0, iParam0);
		if (iParam1 < iVar1)
		{
			iVar1 = iParam1;
		}
		iParam1 = (iParam1 - iVar1);
		func_542(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
		iParam1 = (iParam1 + iVar1);
	}
	iParam1 = func_543(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_327(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_188(iParam0, 0, 0, 0);
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
		if (!func_128(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_544(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_545(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_544(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_89("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

int func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_290(bParam4) };
	Var0.f_4 = -2015960939;
	Var5 = { func_112(iParam0, Var0, Var0.f_4, bParam4) };
	return func_214(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_329()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1225057)[iVar0 /*686*/])->f_638 != 0)
		{
			uVar1 = func_546(((*Global_1225057)[iVar0 /*686*/])->f_638, 1);
			((*Global_1225057)[iVar0 /*686*/])->f_637 = uVar1;
		}
		iVar0++;
	}
}

int func_330(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_547(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_331(int iParam0, bool bParam1)
{
	if (!bParam1 || func_177())
	{
		return func_264(iParam0, func_290(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

void func_332()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_333(int iParam0, var uParam1)
{
	if (!func_548(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1915131[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_334()
{
	int iVar0;

	iVar0 = func_549();
	if (func_549() == 822208792)
	{
		iVar0 = 0;
	}
	if (func_23(0))
	{
		if (func_168() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (func_32())
	{
		iVar0 = -2074770370;
	}
	func_35(iVar0);
}

void func_335(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	var uVar3;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0, Global_1939231->f_10452);
	bVar1 = func_156(iParam1);
	iVar2 = iParam1;
	uVar3 = uVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939231->f_10492, Global_1939231->f_10452);
		Global_1939231->f_10453 = Global_1939231->f_10452;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, uVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1939231->f_10454[Global_1939231->f_10452] = iParam1;
	Global_1939231->f_10452++;
}

void func_336(var uParam0)
{
	if (func_45())
	{
		func_335(uParam0, -283002878, "Horse", 771764772);
	}
}

void func_337(var uParam0)
{
	if (func_59())
	{
		func_335(uParam0, -889932290, "Wagon", 771764772);
	}
}

void func_338(var uParam0)
{
	if (func_23(0))
	{
		if (func_168() == 2)
		{
			func_335(uParam0, -693134279, "Send", -1346803962);
		}
		else
		{
			func_335(uParam0, -182626652, "Sell", -1523466777);
		}
	}
	else if (func_32())
	{
		func_335(uParam0, -2074770370, "Donations", -1966717115);
	}
}

int func_339(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1951141->f_3109.f_25)
	{
		if (iParam0 == &Global_1951141->f_3109[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_340(bool bParam0)
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

int func_341(int iParam0)
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
	iVar0 = func_550();
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

struct<14> func_342(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_343(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_145(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_344(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;

	if (Param0.f_9 != 1084182731 && Param0.f_9 != -1162387149)
	{
		return 0;
	}
	iVar0 = func_87(Param0.f_4);
	if ((iVar0 == joaat("weapon") && !WEAPON::_0xC853230E76A152DF(Param0.f_4)) && Param0.f_4 != joaat("weapon_kit_camera"))
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
			switch (func_90(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == 1147557067)
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
				case 1477698721:
					if (func_69(Param0.f_4, -1348134986))
					{
						return 1;
					}
					return 0;
				default:
					return 0;
			}
			break;
	}
	if (func_90(Param0.f_4) == -829303394)
	{
		return 0;
	}
	return 1;
}

void func_345(int iParam0, int iParam1, bool bParam2)
{
	if (func_68(iParam1, 0))
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

bool func_346(int iParam0)
{
	return func_551(func_90(iParam0), iParam0);
}

bool func_347(int iParam0)
{
	return func_552(iParam0);
}

void func_348(int iParam0, bool bParam1)
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
	func_553(iParam0, Var0, bParam1, 0);
}

void func_349(int iParam0, bool bParam1)
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
	func_553(iParam0, Var0, bParam1, 0);
}

void func_350(int iParam0, bool bParam1)
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
	func_553(iParam0, Var0, bParam1, 0);
}

void func_351(int iParam0, bool bParam1)
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
	func_553(iParam0, Var0, bParam1, 0);
}

void func_352(int iParam0, bool bParam1)
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
	func_553(iParam0, Var0, bParam1, 0);
}

int func_353(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_202(iVar0))
	{
		return 0;
	}
	if (((((((((((((iVar0 == COLLECTION::_0xCC644BC1DD655269(-623226361, 0) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1452445456, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(332438661, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1632674359, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(56759509, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(2145533727, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1874365462, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-1658668866, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(90781239, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(1997097980, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(920487791, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-668555046, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(-839148413, 0)) || iVar0 == COLLECTION::_0xCC644BC1DD655269(10424351, 0))
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)
{
	int iVar0;

	if (func_22())
	{
		return func_366(iParam0, -2074770370, 0);
	}
	else if (func_19())
	{
		if (func_69(iParam0, 96549393))
		{
			return 0;
		}
		if (func_69(iParam0, -111938901) || func_6(iParam0, -949239683) == -1337515701)
		{
			return 1;
		}
		if (func_69(iParam0, -121341956))
		{
			return 1;
		}
		return 0;
	}
	else if (func_20())
	{
		if (((((((func_69(iParam0, 1765172170) || func_69(iParam0, -458578204)) || func_69(iParam0, -1919515848)) || func_69(iParam0, 1443104131)) || func_69(iParam0, 1490540191)) || func_69(iParam0, 1573112293)) || func_69(iParam0, 1939071949)) || func_69(iParam0, 845883585))
		{
			return 0;
		}
		if (((!func_69(iParam0, -887064662) && !func_69(iParam0, -839724752)) && !func_69(iParam0, -1457797660)) && !func_69(iParam0, 1286414894))
		{
			return 0;
		}
		if (func_554(iParam0) == 0)
		{
			return 0;
		}
	}
	if (func_23(0))
	{
		if (Global_1915180->f_19742 == 2)
		{
			return 1;
		}
		else if (!func_197(iParam0, Global_1915180->f_19742.f_1))
		{
			return 0;
		}
		else if (Global_1915180->f_19742 == 29)
		{
			if (func_198(iParam0))
			{
				return 0;
			}
		}
		else if (Global_1915180->f_19742 == 10)
		{
		}
	}
	if (func_69(iParam0, 949916894) || iParam0 == -569063887)
	{
		if (!func_346(iParam0))
		{
			return 0;
		}
	}
	if (INVENTORY::_0x3D10D7179D7034AF(func_145(0), iParam0, func_23(0)))
	{
		return 0;
	}
	if ((func_27() == 0 && func_69(iParam0, -1551542038)) && !func_274())
	{
		return 0;
	}
	if (func_69(iParam0, -1242251796))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) && PED::_0x4E76CB57222A00E5(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX()))
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_355(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	return func_90(iParam0) == 1802292908;
}

int func_356(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 176))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 149:
			return 28;
		case 150:
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
		case 151:
		case 155:
		case 160:
		case 164:
		case 168:
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
		case 152:
		case 156:
		case 161:
		case 165:
		case 169:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 153:
		case 157:
		case 162:
		case 166:
		case 170:
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
		case 159:
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
		case 172:
			return 19;
		case 173:
			return 20;
		case 174:
			return 21;
		case 12:
		case 60:
			return 18;
		case 148:
			return 34;
		case 154:
		case 158:
		case 163:
		case 167:
		case 171:
			return 23;
		case 175:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		default:
			break;
	}
	return -1;
}

Vector3 func_357(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_358(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

float func_359(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_360(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_361(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_9;
}

int func_362(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_369;
}

float func_363(int iParam0)
{
	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_39.f_277.f_1[iParam0 /*431*/])->f_369.f_1;
}

var func_364(int iParam0, int iParam1)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return uVar0;
}

float func_365(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_366(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_23(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_68(iParam0, 0) || iParam0 == 1259508039) || iParam0 == -727924611)
		{
			return 0;
		}
	}
	if (!bVar0 && func_555(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_23(0))
			{
				if (iParam0 == 1807503187)
				{
					return 1;
				}
				if (((((((((((func_366(iParam0, -1559802791, 1) || func_366(iParam0, -1268291907, 1)) || func_366(iParam0, -96974025, 1)) || func_366(iParam0, -1666604090, 1)) || func_366(iParam0, 1561961676, 1)) || func_366(iParam0, -156634416, 1)) || func_366(iParam0, 1061777683, 1)) || func_366(iParam0, -2074770370, 1)) || func_366(iParam0, -693134279, 1)) || func_366(iParam0, -182626652, 1)) || func_366(iParam0, 1783698482, 1)) || func_556(iParam0))
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
			return (func_69(iParam0, 1422457563) && !func_69(iParam0, 474910316));
		case -1268291907:
			return (func_69(iParam0, 1360707454) && !func_69(iParam0, 474910316));
		case -96974025:
			return (func_69(iParam0, 1009210113) && !func_69(iParam0, 474910316));
		case -1666604090:
			return (func_69(iParam0, -193035453) && !func_69(iParam0, 474910316));
		case 1561961676:
			return (func_69(iParam0, -111938901) && !func_69(iParam0, 474910316));
		case -156634416:
			return (func_69(iParam0, -928967997) && !func_69(iParam0, 474910316));
		case 1061777683:
			return (func_69(iParam0, 747873593) && !func_69(iParam0, 474910316));
		case 1783698482:
			return (func_69(iParam0, 474910316) && !func_23(0));
		case -2074770370:
			if (Global_1939231->f_36 == 1 || Global_1939231->f_36 == 2)
			{
				return func_557(iParam0, iParam1);
			}
			else if (func_6(iParam0, -949239683) == -1337515701 && iParam0 != -780677328)
			{
				return 1;
			}
			else
			{
				return func_69(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_530(iParam0, 8388608);
		case -182626652:
			if (func_197(iParam0, Global_1915180->f_19742.f_1))
			{
				func_345(func_145(0), iParam0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_367(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_558(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_145(bParam1), iParam0, iParam3);
}

bool func_368(int iParam0)
{
	return iParam0 != 0;
}

void func_369(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		(Global_1939231->f_38.f_2[iParam0 /*2*/])->f_1 = bParam1;
	}
}

void func_370(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1939231->f_38.f_1;
	func_559(iVar0, iParam0);
	func_369(iVar0, bParam1);
	if (func_32())
	{
		if (!func_560(iVar0))
		{
			func_561(iVar0);
			return;
		}
	}
	func_562(iParam0);
}

int func_371(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_563(iVar0);
}

int func_372(int iParam0)
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
			iVar0 = func_563(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

void func_373(int iParam0, int iParam1, bool bParam2)
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
	if (func_564(iVar17, &Var0, &iVar14, &iVar15))
	{
		iVar16 = 0;
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (func_148(&Var18, iVar16, iVar14, iVar15))
			{
				if (func_68(Var18.f_4, 0) && Var18.f_4 != 1259508039)
				{
					*iParam1++;
					if (bParam2 && func_151(Var18.f_4))
					{
						func_176(Var18, 1);
					}
				}
			}
			iVar16++;
		}
		func_162(iVar14);
	}
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	if (!func_202(iParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (func_209(iParam0, -489628648, &Var2, &iVar1, 0, 1))
	{
		iVar0 = 99;
		iVar33 = 0;
		while (iVar33 < iVar1)
		{
			if (&Var2[iVar33 /*2*/] == 0)
			{
			}
			else
			{
				iVar34 = func_188(&(Var2[iVar33 /*2*/]), 0, 0, 0);
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

int func_375(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_376(int iParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	var uVar1;

	uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939231->f_10489, Global_1939231->f_10483);
	uVar1 = uVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar1, sParam1, uParam2->f_1, *uParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1939231->f_10489, Global_1939231->f_10483, iParam0);
	Global_1939231->f_10483++;
}

int func_377(int iParam0, int iParam1, var uParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_209(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32 /*2*/] == 2084597891)
			{
				if (!func_565((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (&Var0[iVar32 /*2*/] == 773203532)
			{
				if (!func_566((Var0[iVar32 /*2*/])->f_1))
				{
					return 0;
				}
			}
			else if (func_188(&(Var0[iVar32 /*2*/]), 0, 0, 1) < (Var0[iVar32 /*2*/])->f_1)
			{
				*uParam2 = { *(Var0[iVar32 /*2*/]) };
				return 0;
			}
			iVar32++;
		}
	}
	return 1;
}

int func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (!INVENTORY::_0x112BCA290D2EB53C(func_145(0), iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_567(&uVar6, iVar0);
	func_568(&uVar6, iVar1);
	func_569(&uVar6, iVar2);
	func_570(&uVar6, iVar3);
	func_571(&uVar6, iVar4);
	func_572(&uVar6, iVar5);
	return uVar6;
}

void func_379(int iParam0)
{
}

void func_380(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_573(iParam0[iVar0], func_131(func_121(0), iParam0[iVar0], 0, 1, 1), 0, 0);
		iVar0++;
	}
}

int func_381()
{
	if (func_141())
	{
		if (Global_1915180->f_19742 == 29)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_382(var uParam0)
{
	vector3 vVar0;

	if (!func_574(uParam0, &vVar0, joaat("inventory"), 0, 0, -401018458))
	{
		vVar0.f_1 = -546782298;
		vVar0.x = -1102349958;
	}
	return vVar0;
}

int func_383(int iParam0)
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

void func_384(var uParam0)
{
	if ((uParam0->f_4 == Global_1939231->f_10481 && func_45()) && func_131(func_121(0), Global_1939231->f_10481, 0, 1, 1) > 0)
	{
		uParam0->f_11++;
	}
}

int func_385(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1698498246:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_386()
{
	if (func_27() != -1)
	{
		return;
	}
	if (func_210(-1838434463 /* GXTEntry: "Camp" */, 1))
	{
		if (func_575())
		{
			func_128(-1838434463 /* GXTEntry: "Camp" */, 1, 1, -142743235);
			func_519(2019377485 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else if (func_210(2019377485 /* GXTEntry: "Camp" */, 1))
	{
		if (!func_575())
		{
			func_128(2019377485 /* GXTEntry: "Camp" */, 1, 1, -142743235);
			func_519(-1838434463 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
}

void func_387()
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
	func_576(&Var0, 0, 1, 0);
}

bool func_388(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_389(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_388(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17172[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4458[iParam0] && iParam1) != 0;
}

void func_390(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10507, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, !bParam0);
}

var func_391()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10508))
	{
		return Global_1939231->f_10506;
	}
	return Global_1939231->f_10503;
}

void func_392(int iParam0)
{
	if (func_90(iParam0) == -854348463)
	{
		func_390(0);
	}
	else if (((((((((((((((func_69(iParam0, 1101678925) || func_69(iParam0, 1686880204)) || func_69(iParam0, 173360570)) || func_69(iParam0, -121341956)) || func_69(iParam0, 2000026003)) || func_69(iParam0, -1540973036)) || func_69(iParam0, 1192444843)) || func_6(iParam0, 1224357681) == 1728734446) || (func_410(iParam0) && !func_69(iParam0, 316290104))) || ((func_27() == 0 && func_118(iParam0, 1, 0)) && !func_69(iParam0, 316290104))) || iParam0 == -601932535) || iParam0 == -898386032) || iParam0 == 1305393429) || iParam0 == 85134332) || iParam0 == -1077794372) || iParam0 == 894654881)
	{
		func_577();
	}
	else if ((func_90(iParam0) == 1802292908 && func_6(iParam0, -949239683) == 0) && !iParam0 == -569063887)
	{
		func_577();
	}
	else if (func_410(iParam0))
	{
		if (func_69(iParam0, 316290104))
		{
			func_390(1);
		}
		else
		{
			func_390(1);
		}
	}
	else if (func_69(iParam0, 316290104) || func_118(iParam0, 1, 0))
	{
		func_390(1);
	}
	else
	{
		func_390(0);
	}
}

int func_393(int iParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10508))
	{
		if (func_69(iParam0, 316290104))
		{
			return -1896040097;
		}
		else if (func_118(iParam0, 1, 0))
		{
			return -2086473757;
		}
	}
	else if (func_69(iParam0, 1147021565))
	{
		if (func_69(iParam0, -1242251796))
		{
			return -31549930;
		}
		switch (func_6(iParam0, -949239683))
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
	else if (func_6(iParam0, 1224357681) == -883547903)
	{
		return -1948542959;
	}
	return -31549930;
}

void func_394(int iParam0, var uParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;

	bVar0 = true;
	switch (func_90(iParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!func_69(iParam0, 949916894) && !func_69(iParam0, 747873593)) && !func_6(iParam0, -949239683) == -1337515701) && !func_69(iParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
	}
	if (func_87(iParam0) == joaat("money"))
	{
		bVar0 = false;
	}
	if (85134332 == iParam0)
	{
		bVar0 = false;
	}
	if (-492264119 == iParam0 && !func_200())
	{
		bVar0 = false;
	}
	if (func_6(iParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { func_111(iParam0, 0, 0) };
		if (func_578(Var15, -1162387149, &Var1, 0, -1))
		{
			if (Var1.f_4 == iParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_69(iParam0, 316290104))
	{
		bVar0 = true;
	}
	else if (func_118(iParam0, 1, 0))
	{
		if (func_27() == 0 || !func_579())
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
	if (MISC::IS_BIT_SET(&Global_1051078, 0) && func_69(iParam0, 1573112293))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_414(), bVar0);
}

int func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900718->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900718->f_68;
		}
		if (func_580())
		{
			return 1;
		}
		if (Global_1070356->f_3 && !Global_1572887->f_9)
		{
			if ((((*Global_1055966)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900718->f_67;
		}
		else
		{
			return Global_1900718->f_68;
		}
	}
	if (iParam0 == 0 && func_281(func_280(0)))
	{
		return 1;
	}
	if ((Global_1939178 && 81919 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1900853)
		{
			return 1;
		}
	}
	switch (func_581(func_280(0)))
	{
		case -1:
			return 0;
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
	return 0;
}

int func_396(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_342(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_540(&Var0, func_291(0));
	}
	if (!func_343(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_162(iVar14);
	return uVar15;
}

struct<4> func_397(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_111(iParam0, bParam1, 0) };
	return func_112(iParam0, Var0, Var0.f_4, bParam1);
}

int func_398(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_68(iParam0, 0) && !func_415(func_207(iParam0), 2))
	{
		return 0;
	}
	if (func_87(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_212(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_145(bParam3), iParam0);
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_400(int iParam0)
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

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			return 1;
	}
	return 0;
}

int func_402(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0xA4550FE9C512E3DD(iParam0);
}

int func_403(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_582(iParam0, iParam1, &Var0, &iVar21, bParam2, bParam3))
	{
		if (!bParam3)
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
	if (!bParam3)
	{
	}
	return 0;
}

float func_404(int iParam0, int iParam1)
{
	float fVar0;

	fVar0 = 1f;
	if (!func_68(iParam1, 0))
	{
		return fVar0;
	}
	if (!func_583(iParam0, iParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_405(var uParam0, int iParam1)
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
				if (func_87(iParam1) == ((*uParam0)[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_584(iParam1, -915411861, 1, 0, 1, 0));
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

char* func_406(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915180->f_20144.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1915180->f_20144.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_356(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_333(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_585(iVar5);
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

bool func_409(int iParam0, int iParam1)
{
	*iParam1 = func_586(iParam0);
	return *iParam1 != 0;
}

int func_410(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
	}
	if (func_69(iParam0, 1286414894))
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0, int iParam1, int iParam2)
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

int func_412(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_371(&iParam0);
		if (!func_68(iVar0, 0))
		{
			iVar0 = func_372(iParam0);
		}
	}
	else
	{
		iVar0 = func_372(iParam0);
	}
	return iVar0;
}

int func_413(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if ((Global_1131092->f_9[iVar0 /*10*/])->f_4.f_2 != 0 && (Global_1131092->f_9[iVar0 /*10*/])->f_2 == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_89("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (func_588(func_587(iVar1)))
	{
		return 1;
	}
	if (bParam1)
	{
		func_89("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return 0;
}

var func_414()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_10508))
	{
		return Global_1939231->f_10507;
	}
	return Global_1939231->f_10504;
}

int func_415(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_416(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_417(int iParam0, int iParam1, var uParam2, int iParam3)
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_418(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_322(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_163("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_148(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_589(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_162(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_162(iVar1);
	}
	return 0;
}

bool func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_68(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_90(iParam0);
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
	iVar1 = func_590(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_591(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_592(iParam0);
	iVar2 = func_591(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_420(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_421(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_212(iParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_593(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_422(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_112(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_423(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_594(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

int func_424(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		if (func_69(iParam0, -1242251796))
		{
			if (func_69(iParam0, 2060589226))
			{
				return func_597();
			}
			return func_598();
		}
		else if (func_69(iParam0, 1919582297))
		{
			return func_433();
		}
		else if (func_69(iParam0, 1647670816))
		{
			return func_599();
		}
		else if (func_69(iParam0, 1147021565))
		{
			return func_436();
		}
	}
	if (Global_1939067->f_12)
	{
		return func_598();
	}
	else
	{
		return func_436();
	}
	return func_436();
}

int func_425(int iParam0)
{
	if ((((((((((func_69(iParam0, 1147021565) || func_69(iParam0, -136654233)) || func_69(iParam0, -524514947)) || func_69(iParam0, -1238310989)) || func_69(iParam0, 1765172170)) || func_69(iParam0, 1490540191)) || func_69(iParam0, 1573112293)) || func_69(iParam0, -1242251796)) || func_69(iParam0, 1919582297)) || func_69(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

int func_426()
{
	return 32759936;
}

int func_427()
{
	return 33012981;
}

int func_428()
{
	return 24885248;
}

int func_429()
{
	return 33269904;
}

int func_430()
{
	return 16228343;
}

int func_431()
{
	return 33269760;
}

int func_432()
{
	return 33030143;
}

int func_433()
{
	return 33274887;
}

int func_434()
{
	return 32189572;
}

int func_435()
{
	return 31080423;
}

int func_436()
{
	return 33012951;
}

int func_437()
{
	return 33022080;
}

bool func_438(int iParam0)
{
	return func_211(Global_1939067->f_7, iParam0);
}

int func_439(bool bParam0)
{
	int iVar0;

	if (func_438(1) && !Global_1956172->f_2)
	{
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_438(2) && !Global_1956172->f_2) && MISC::GET_GAME_TIMER() >= Global_17150)
	{
		if (bParam0)
		{
			iVar0 = func_600(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_89("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_89("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_438(4194304))
	{
		return 0;
	}
	return 1;
}

int func_440(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::_0xA911EE21EDF69DAF(Global_34))
	{
		PED::_0x6B67320E0D57856A(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return 1;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_89("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_441(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::_0x1D46B417F926D34D(Global_34))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_34);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
				{
					func_89("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_101(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (bParam2 || VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_34)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_34))
	{
		return 0;
	}
	return 1;
}

int func_442(int iParam0, int iParam1)
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

int func_443(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_444(int iParam0, bool bParam1)
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

bool func_445()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

int func_446(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && &(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_447(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_448()
{
	if (Global_17172.f_2954 == 1)
	{
		return 0;
	}
	if (func_601(4))
	{
		return 0;
	}
	if (func_451())
	{
		return 1;
	}
	if (func_602())
	{
		return 0;
	}
	if (func_603(1, 255))
	{
		return 0;
	}
	if (func_281(func_604()) && Global_1199613->f_1.f_20 != 3)
	{
		return 0;
	}
	return 1;
}

int func_449(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_210(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0]), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_605(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_451()
{
	return func_606(func_280(0));
}

bool func_452(int iParam0, int iParam1, bool bParam2)
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

int func_453()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_34))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_607(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_0xC853230E76A152DF(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_607(iVar0)) || WEAPON::_0x6E4E1A82081EABED(iVar0))
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

void func_454(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_608(iParam0);
	iVar1 = func_182(iVar0);
	if (iVar1 != iParam0)
	{
		func_609(iVar1, 4);
	}
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_183(iParam0))
	{
		return;
	}
	func_609(iParam0, 4);
	func_610(iParam0, bParam1);
	if (!func_611(iParam0))
	{
		func_612(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_395(0, 0, 1))
		{
			func_613(1, 6);
		}
	}
}

int func_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (TASK::_0x2D19BC4DF626CBE7(iParam0, iParam1, iParam2, iParam3))
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1939067->f_26 = 1;
		return 1;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	return 0;
}

void func_456(int iParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_69(iParam0, 1573112293) || func_69(iParam0, 672467738)) || func_69(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_87(iParam0) == 2085633299)
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
				uVar30 = func_614(0, Var22.f_2);
				func_615(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_614(2, Var22.f_2);
				func_616(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_614(1, Var22.f_2);
				func_617(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_618(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_619(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_618(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_619(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_618(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_619(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_620(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_621(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_622(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_69(iParam0, -537818634))
		{
			func_308(func_539(-704089207), 1);
		}
		if (func_69(iParam0, -1457797660))
		{
			func_308(func_539(-1909697259), 1);
		}
		if (bVar38)
		{
			func_308(func_539(704570463), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1517929953, 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

void func_457(int iParam0)
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

bool func_458(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_459(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_460()
{
	if (Global_1951141->f_3253)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1951141->f_3251)) < 1250)
	{
		return 1;
	}
	if (func_623())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 1;
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || func_69(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_462(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_463(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_469(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)
{
	if (-1829635046 == func_624(81053684))
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	else if (func_625(-525676072, iParam0))
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_465()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_453())
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

int func_466()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_453())
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

int func_467()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_453())
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

int func_468()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_453())
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

int func_469(int iParam0)
{
	if (func_625(81053684, iParam0))
	{
		return 1;
	}
	if (func_625(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_470(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 && iParam1));
}

int func_472(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1951141->f_3109.f_27;
		case 81053684:
			return Global_1951141->f_3109.f_29;
		case -525676072:
			return Global_1951141->f_3109.f_28;
		case -1719060085:
			return Global_1951141->f_3109.f_30;
		case -413129408:
			return Global_1951141->f_3109.f_31;
		case -999503751:
			if (bParam1)
			{
				return Global_1951141->f_3109.f_26;
			}
			else
			{
				return func_626();
			}
			break;
	}
	return 0;
}

int func_473(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1951141->f_3109.f_32.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1951141->f_3109.f_32.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1951141->f_3109.f_32;
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

int func_474(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1951141->f_3109.f_25 >= 24)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_339(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_627(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_628(iParam0, 0))
	{
		return 0;
	}
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = iVar1;
	Global_1951141->f_3109.f_25++;
	*uParam1++;
	return 1;
}

int func_475(int iParam0, int iParam1)
{
	return 1;
}

int func_476()
{
	return Global_1951141->f_1;
}

void func_477()
{
	int iVar0;

	if (func_27() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1951141->f_3109.f_25)
		{
			Global_11553[iVar0] = &Global_1951141->f_3109[iVar0];
			iVar0++;
		}
		Global_11553.f_26 = Global_1951141->f_3109.f_26;
		Global_11553.f_27 = Global_1951141->f_3109.f_27;
		Global_11553.f_28 = Global_1951141->f_3109.f_28;
		Global_11553.f_29 = Global_1951141->f_3109.f_29;
		Global_11553.f_30 = Global_1951141->f_3109.f_30;
		Global_11553.f_25 = Global_1951141->f_3109.f_25;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		Global_17172.f_54.f_644[iVar0] = &Global_1951141->f_3109[iVar0];
		iVar0++;
	}
	Global_17172.f_54.f_644.f_26 = Global_1951141->f_3109.f_26;
	Global_17172.f_54.f_644.f_27 = Global_1951141->f_3109.f_27;
	Global_17172.f_54.f_644.f_28 = Global_1951141->f_3109.f_28;
	Global_17172.f_54.f_644.f_29 = Global_1951141->f_3109.f_29;
	Global_17172.f_54.f_644.f_30 = Global_1951141->f_3109.f_30;
	Global_17172.f_54.f_644.f_25 = Global_1951141->f_3109.f_25;
}

bool func_478(int iParam0)
{
	return func_630(func_629(iParam0));
}

void func_479(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_631();
	}
	if (bParam0)
	{
		func_243(8);
		func_243(512);
	}
	else
	{
		func_243(8);
		func_243(16);
	}
}

void func_480(int iParam0, int iParam1, bool bParam2)
{
	func_632(iParam0, 0, 0);
	func_253(iParam1, 1, bParam2, 0);
}

int func_481(int iParam0, int iParam1)
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
			return 735520874;
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

void func_482()
{
	int iVar0;

	Global_1951141->f_1538 = Global_1951141->f_1657;
	Global_1951141->f_1534 = Global_1951141->f_1536;
	Global_1951141->f_1534.f_1 = Global_1951141->f_1536.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_483(int iParam0)
{
	func_471(iParam0, 8, 6);
}

void func_484(int iParam0)
{
	func_633(&(Global_1951141->f_2760), iParam0);
}

void func_485(int iParam0, int iParam1)
{
	func_634(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_486(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_487(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_90(iVar3);
	iVar5 = 0;
	if (func_476() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					func_485(iVar0, iVar5);
				}
				Jump @3216; //curOff = 253
				if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_485(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_485(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_90(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_485(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_485(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_69(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_635(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_90(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_485(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_90(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							func_485(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar1, 1090938458)) && func_69(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_485(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_485(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_485(16, iVar5);
							if (func_260(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_485(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_485(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_260(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_485(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_69(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											func_485(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_485(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_260(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_485(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_69(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_485(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_90(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_485(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_260(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951141->f_1657.f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_69(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_69(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_90(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												if ((func_69(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_90(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_69(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_69(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_485(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_69(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_90(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_485(iVar0, iVar5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			switch (func_481(iParam2, 1))
			{
				case -207860920:
					if (func_636(99217379) && func_69(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_485(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_485(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((iParam1 == &Global_1951141->f_81[iParam2 /*12*/] || func_69(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_485(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_260(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_69(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_260(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_69(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_485(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (iParam1 == -230310728 || iParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (iParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
		}

int func_488(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_476() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_635(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_637(iParam0, func_481(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_489(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_250(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_638(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1951141->f_1657 != 491602716 || !func_639(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_69(Global_1951141->f_1657, -166674229) && (Global_1951141->f_1657 != 491602716 || !func_639(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1951141->f_1657 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1951141->f_1538 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_640(-1, 0, 6);
			func_93(27, 0, 0, 0, 0);
		}
	}
	if (bParam3)
	{
		func_479(0, 1);
	}
}

int func_490(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_641(&uParam0, iParam4, bParam5, iParam6);
}

int func_491(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_360(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_492()
{
	return Global_1915180->f_20141;
}

int func_493(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	iVar0 = &Global_1275573->f_154[&Global_1275573];
	iVar1 = Global_1275573->f_8;
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
			if (PED::_0x4912DFE492DB98CD(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1099294->f_3 & 32 != 0)
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
		if (Global_1915180->f_20136 || Global_1915180->f_21989.f_1)
		{
			return 0;
		}
		if (TASK::_0xD04241BBF6D03A5E(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_642())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1939067->f_10 || Global_1939067->f_11) || Global_1939067->f_12) || Global_1939067->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1225057->f_9330 != -1)
		{
			return 0;
		}
		if (((*Global_1122836)[iVar4 /*54*/])->f_34 & 1 != 0 && ((*Global_1122836)[iVar4 /*54*/])->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1124829->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 10 && Global_1572887->f_106.f_75 < 14)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 14)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_494(int iParam0)
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
			return 1;
		default:
			break;
	}
	return 0;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

bool func_496(int iParam0, int iParam1, int iParam2)
{
	return func_211((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

var func_497(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_643() != 0)
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
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_644());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_644());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_644());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_645(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_646(iVar2))
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
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_647(iVar2) != 1)
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
					if (!func_648(iVar10))
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

int func_498(var uParam0, struct<21> Param1)
{
	if (!func_649(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

bool func_499(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_500(int iParam0)
{
	if (func_502(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_501(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_502(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_503(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_504()
{
	if (!func_273())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_505()
{
	return (func_367(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_490(func_112(889965687 /* GXTEntry: "Wardrobe" */, func_290(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_506(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_145(0);
	*uParam1 = { func_112(iParam0, func_291(0), iParam3, 0) };
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

int func_507(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_508(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_145(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

struct<28> func_509(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_145(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_515(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_510(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_594(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_511(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_145(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_515(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_512(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_513(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_145(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_515(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_514(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_594(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_595(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_596(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_515(var uParam0, bool bParam1)
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
		Var0.f_15 = func_212(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_302() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_516(int iParam0)
{
	if (func_69(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_69(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_69(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_517(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1112574294;
					break;
				case 1:
					iVar0 = -132480015;
					break;
				case 2:
					iVar0 = 1838524355;
					break;
				case 3:
					iVar0 = 781424689;
					break;
				case 4:
					iVar0 = 1547693994;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -684991368;
					break;
				case 1:
					iVar0 = -832325162;
					break;
				case 2:
					iVar0 = -346003361;
					break;
				case 3:
					iVar0 = 264694784;
					break;
				case 4:
					iVar0 = -559967702;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1341408997;
					break;
				case 1:
					iVar0 = -254777578;
					break;
				case 2:
					iVar0 = -379118674;
					break;
				case 3:
					iVar0 = -1624584872;
					break;
				case 4:
					iVar0 = 1526992527;
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_650(uParam2, 1528001899);
	}
	else
	{
		func_650(uParam2, 1884295263);
	}
	func_650(uParam2, iVar0);
	return *uParam2;
}

int func_518(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_651(iParam0, uParam1, &uVar0, iParam2);
}

int func_519(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!func_652(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_653(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_654(iParam0, bParam2);
	iVar2 = 0;
	if (func_87(iParam0) == joaat("clothing"))
	{
		if (!func_69(iParam0, 866047851) && !func_69(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_530(iParam0, 8388608) && !func_655(27))
	{
		func_656(27);
	}
	func_657(iParam0);
	if (!bVar3)
	{
		if (func_69(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_659(func_658(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_27() == -1)
				{
					func_660(iVar1);
				}
				if (func_114(0) && func_661(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_662(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_663(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_87(iParam0) == joaat("weapon"))
		{
			if (!func_664(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_87(iParam0) == joaat("ammo") && func_558(iParam0))
		{
			if (!func_665(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_69(iParam0, 866047851))
		{
		}
		else if (func_69(iParam0, 2000026003))
		{
		}
		else if (func_69(iParam0, -103750053))
		{
			func_308(func_666(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_308(func_307(-717883113, 2091222383), iVar0);
		}
		else if (func_69(iParam0, -121341956) && !func_69(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_109(534, 0);
			}
			if (func_69(iParam0, -2017733358) || func_69(iParam0, -1369131378))
			{
			}
		}
		else if (func_69(iParam0, -136654233))
		{
			if (func_69(iParam0, -1021472396))
			{
			}
		}
		else if (func_69(iParam0, -1466706512) && func_69(iParam0, 1147021565))
		{
			func_109(517, 0);
		}
		else if (func_69(iParam0, 1147021565) && func_69(iParam0, -524514947))
		{
		}
		else if (func_69(iParam0, 554195525))
		{
		}
		else if (func_69(iParam0, 589988438))
		{
			if (func_667())
			{
				func_668(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_69(iParam0, 787083290) && func_69(iParam0, 949916894))
		{
			func_669(iParam0);
		}
		else if (func_69(iParam0, -1718133314))
		{
			func_670(iParam0);
		}
		else if (func_69(iParam0, -1738650224))
		{
			func_671(iParam0);
		}
		else if (func_69(iParam0, -1112814642) && func_69(iParam0, 949916894))
		{
			func_672(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_69(iParam0, 1841149704))
		{
			func_673();
		}
		else if (func_69(iParam0, -1979000645))
		{
		}
		else if (func_69(iParam0, 606799272))
		{
		}
		else if (func_69(iParam0, -1112814642) && func_69(iParam0, -1697809989))
		{
		}
		else if (func_69(iParam0, -2017733358) || func_69(iParam0, -1369131378))
		{
		}
		else if (func_69(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_69(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_210(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_519(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_210(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_519(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_210(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_519(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_210(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_519(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_210(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_519(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_210(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_519(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_69(iParam0, -839724752) && func_530(iParam0, 4))
		{
		}
		else if (func_69(iParam0, 1399091007))
		{
			func_674(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
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
			case 1127253961: /* GXTEntry: "Reward" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case joaat("weapon_kit_binoculars"):
			case 1652431022: /* GXTEntry: "Refined Binoculars" */
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_675(271, func_190(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_675(269, func_190(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_675(270, func_190(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_676(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_109(524, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_109(527, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_655(1))
				{
					func_109(520, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_109(519, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_27() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_109(532, 0);
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
		func_677(&iVar5);
		if (!func_663(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_114(0))
		{
			return 1;
		}
		if (func_87(iParam0) == joaat("clothing"))
		{
			func_678(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_114(0) && !func_306())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_519(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_679(iVar2, 0);
		}
	}
	Var30 = { func_324(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_680(iParam0);
	if (fParam6 > 0f)
	{
		if (func_69(iParam0, -839724752))
		{
			func_681(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_323(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_520(int iParam0)
{
	switch (iParam0)
	{
		case -1795542128: /* GXTEntry: "Special Horse Reviver" */
		case 1627068364: /* GXTEntry: "Horse Reviver" */
			return 1;
	}
	return 0;
}

int func_521(int iParam0, int iParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_34))
	{
		return 0;
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 176, true);
	TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
	TASK::TASK_REVIVE_TARGET(Global_34, iParam0, iParam1);
	func_128(iParam1, 1, 0, 562618531);
	return 1;
}

int func_522()
{
	return &Global_1904591;
}

void func_523(int iParam0)
{
	Global_1904591->f_2 = iParam0;
}

void func_524(int iParam0)
{
	Global_1904591->f_1 = iParam0;
}

void func_525(int iParam0)
{
	Global_1904591->f_5 = iParam0;
}

void func_526(int iParam0, int iParam1, var uParam2)
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

bool func_527()
{
	return !&Global_1912978;
}

void func_528(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

char* func_529(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_530(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_531(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_532(int iParam0)
{
	if (func_69(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_69(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_69(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_69(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_69(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_69(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_69(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_69(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_534(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_68(iParam0, 0))
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
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_535(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_682(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_536(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_683(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_684(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_685(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

var func_537(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_538(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_686(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_539(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_540(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_541(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return func_330(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1);
	}
	return 0;
}

int func_542(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_687(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_324(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_543(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_688(iParam1))
			{
				if (!func_689(0, iParam1, *iParam2))
				{
				}
				if (func_690(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 1);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 0);
				}
				*iParam2 = func_691(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_115(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_543(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar101;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
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
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
			}
			else
			{
				iVar0 = func_412(iVar2);
				if (!func_409(iVar0, &uVar101))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_0x8DE41E9902E85756(iVar2)) || (iParam4 == 1 && !ENTITY::_0x8DE41E9902E85756(iVar2)))
						{
						}
						else if (iVar0 == iParam1)
						{
							iVar5 = 0;
							while (iVar5 < 3)
							{
								if ((Global_1270530->f_1002.f_245[iVar5 /*4*/])->f_3 == iVar2)
								{
									func_692(&Var6, Global_1903929->f_131[iVar5 /*95*/]);
								}
								else
								{
									iVar5++;
								}
							}
							if (bParam3)
							{
								func_693(iVar2);
								if (((Global_1915180->f_20136 || Global_1915180->f_21989.f_1) && Global_1915180->f_19742 == 29) && ENTITY::IS_ENTITY_A_PED(iVar2))
								{
									STATS::_0x831BF01C56149A8A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
								}
								ENTITY::_0x0D0DB2B6AF19A987(&iVar2);
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

void func_544(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915180->f_20135)
	{
		if (Global_1915180->f_19742 == 29)
		{
			if (func_410(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_694(iParam0))
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
					STATS::_0x7C2ABF6E556B21FC(func_695(iParam0), iVar1, func_69(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_545(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_324(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_696(iParam0, iParam1);
	return func_697(iParam0, iParam1, bParam2, iParam3);
}

int func_546(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_698(iParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (func_699(&Var3))
	{
		if (Var3.f_1 != 0)
		{
			if (func_700(Var3.f_1, &iVar1, bParam1))
			{
				iVar2 = (iVar2 + iVar1);
			}
		}
	}
	return iVar2;
}

struct<4> func_547(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_701(iParam0) };
	return func_702(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_548(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_549()
{
	return Global_1939231->f_37;
}

int func_550()
{
	return Global_1903007->f_379;
}

bool func_551(int iParam0, int iParam1)
{
	if (func_69(iParam1, 1573112293))
	{
		return func_703(iParam1);
	}
	switch (iParam0)
	{
		case -77448735:
			if (func_425(iParam1))
			{
				return func_703(iParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_703(iParam1);
		case -1520388130:
		case 1802292908:
			return func_552(16);
		case 81053684:
		case 1477698721:
			return func_552(4);
		case -525676072:
			return func_552(8);
		case 1779021115:
			if (func_68(iParam1, 0))
			{
				if (iParam1 == joaat("weapon_kit_camera"))
				{
					return func_552(64);
				}
			}
			return func_552(32);
		case -1823706425:
			return func_552(128);
		case -854348463:
			return func_552(8192);
		default:
			if (func_68(iParam1, 0))
			{
				if (func_69(iParam1, 1919582297))
				{
					return func_552(4096);
				}
				else if (iParam1 == -2035110427 || iParam1 == -1448210800)
				{
					return func_552(2048);
				}
				else if (iParam1 == -1516555556)
				{
					return func_552(1024);
				}
				else if (func_69(iParam1, 1147021565))
				{
					return func_552(2);
				}
			}
			return func_552(1);
	}
	return func_552(1);
}

bool func_552(int iParam0)
{
	return func_211(Global_1939067->f_38, iParam0);
}

void func_553(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_343(&uParam1, &iVar0, &iVar1, bParam16))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_148(&Var3, iVar2, iVar0, iVar1))
			{
				func_345(iParam0, Var3.f_4, bParam15);
			}
			iVar2++;
		}
	}
	func_162(iVar0);
}

int func_554(int iParam0)
{
	if (func_530(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_555(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1939231->f_38.f_1)
	{
		if (func_150(iParam0, &(Global_1939231->f_38.f_2[iVar0 /*2*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_556(int iParam0)
{
	if (func_69(iParam0, -839724752))
	{
		return func_69(iParam0, 1937586541);
	}
	return 0;
}

int func_557(int iParam0, int iParam1)
{
	switch (Global_1939231->f_36)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_69(iParam0, -887064662) || func_69(iParam0, -839724752)) || func_69(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_69(iParam0, -887064662) || func_69(iParam0, -839724752)) || func_69(iParam0, -136654233)) || func_69(iParam0, 554195525)) || func_69(iParam0, -1238310989)) || func_69(iParam0, 2127114599)) || func_69(iParam0, -1864584831)) || func_69(iParam0, 1068498601)) || func_69(iParam0, 1967571132))
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

bool func_558(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

void func_559(int iParam0, int iParam1)
{
	Global_1939231->f_38.f_2[iParam0 /*2*/] = iParam1;
}

bool func_560(int iParam0)
{
	return (Global_1939231->f_38.f_2[iParam0 /*2*/])->f_1;
}

void func_561(int iParam0)
{
	Global_1939231->f_38.f_2[iParam0 /*2*/] = 0;
	(Global_1939231->f_38.f_2[iParam0 /*2*/])->f_1 = 0;
}

void func_562(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = iParam0;
	Var1.f_1 = func_704(iVar0);
	Var1 = func_705(iVar0);
	iVar4 = 1;
	iVar5 = func_706(iVar0);
	iVar6 = COLLECTION::_0xCC644BC1DD655269(iVar5, 0);
	if (func_202(iVar6))
	{
		iVar4 = func_374(iVar6);
	}
	func_376(-1715238242, iParam0, &Var1, func_707(iParam0), iVar4, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1939231->f_38.f_203++;
	Global_1939231->f_38.f_1++;
}

int func_563(int iParam0)
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
	iVar1 = PED::_0x88EFFED5FE8B0B4A(iVar0);
	iVar2 = func_708(iVar0);
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
		if (PED::_0xFB4891BD7578CDC1(iVar0, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar0))
		{
			iVar6 = func_709(iVar5);
			if (iVar6 != 0)
			{
				return iVar6;
			}
		}
		return iVar5;
	}
	switch (iVar1)
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

int func_564(int iParam0, var uParam1, int iParam2, int iParam3)
{
	*iParam2 = INVENTORY::_0x640F890C3E5A3FFD(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_565(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_27() == 0)
	{
		return func_710(iParam0);
	}
	return iParam0 <= func_711();
}

bool func_566(int iParam0)
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

void func_567(int iParam0, int iParam1)
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

void func_568(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_569(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_712(*iParam0);
	iVar1 = func_713(*iParam0);
	if (iParam1 < 1 || iParam1 > func_714(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_570(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_571(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_572(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_573(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;

	Var0.f_9 = -1591664384;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_176(Var0, iParam3);
	}
	else
	{
		func_152(Var0);
	}
}

int func_574(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_575()
{
	int iVar0;
	float fVar1;

	iVar0 = func_46(7);
	fVar1 = -1f;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_361(7) != 0)
		{
			fVar1 = func_161(7);
			if (fVar1 != -1f)
			{
				if (func_715(Global_34, iVar0, fVar1, 1))
				{
					return 0;
				}
			}
		}
	}
	if (func_716() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1903007->f_379))
		{
			if (func_715(Global_34, Global_1903007->f_379, 5f, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_576(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (func_343(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_148(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_164(&Var3, 0))
				{
				}
				else if (bParam2)
				{
					func_181(Var3.f_4, bParam3, 0);
				}
				else
				{
					func_165(Var3.f_4);
				}
			}
			iVar2++;
		}
	}
	func_162(iVar0);
}

void func_577()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10508, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10507, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10504, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_10505, false);
}

bool func_578(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_717(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

int func_579()
{
	int iVar0;
	int iVar1;

	if (Global_1956172->f_2)
	{
		return 0;
	}
	if (func_718())
	{
		return 0;
	}
	if (func_84())
	{
		return 0;
	}
	if (Global_1939067->f_10)
	{
		return 0;
	}
	if (Global_1939067->f_11)
	{
		return 0;
	}
	if (Global_1939067->f_12)
	{
		return 0;
	}
	if (func_141())
	{
		return 0;
	}
	if (func_719())
	{
		return 0;
	}
	if (func_317(8388608))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_34);
		iVar1 = iVar0;
		if (((iVar1 == 1020517461 || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052)
		{
			return 1;
		}
		return 0;
	}
	if (!func_218(0, 1))
	{
		return 0;
	}
	return 1;
}

int func_580()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_281(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_581(var uParam0, var uParam1)
{
	return uParam0;
}

int func_582(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar25;

	*iParam3 = 0;
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SELL_PRICE(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	if (!bParam5)
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
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar25 /*2*/]) = { *(Var0.f_4[iVar25 /*2*/]) };
		iVar25++;
	}
	if (bParam4)
	{
		func_720(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_583(int iParam0, int iParam1, float fParam2)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;

	*fParam2 = 1f;
	if (!func_153(iParam0))
	{
		return 0;
	}
	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	if (!func_333(22, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -1023752283;
	Var0.f_3 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = func_721(iParam0);
		func_722(iVar6, &uVar5);
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

int func_584(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_723(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_724(iParam0))
	{
		return func_726(func_725(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_727(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
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

int func_585(int iParam0)
{
	if (func_27() != -1)
	{
		if (Global_1070356->f_10)
		{
			if (iParam0 == 3)
			{
				return -1033589769;
			}
		}
	}
	return func_728(iParam0);
}

int func_586(int iParam0)
{
	switch (iParam0)
	{
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 915880986 /* GXTEntry: "Good Alligator Carcass" */;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return -1424697962 /* GXTEntry: "Perfect Alligator Carcass" */;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1643384846 /* GXTEntry: "Poor Alligator Carcass" */;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -847420802 /* GXTEntry: "Good Armadillo Carcass" */;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -662726703 /* GXTEntry: "Perfect Armadillo Carcass" */;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return 1760886130 /* GXTEntry: "Poor Armadillo Carcass" */;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -1243653490 /* GXTEntry: "Good Badger Carcass" */;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 1988467099 /* GXTEntry: "Perfect Badger Carcass" */;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return -674590015 /* GXTEntry: "Poor Badger Carcass" */;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return -1480423460 /* GXTEntry: "Good Beaver Carcass" */;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 924882045 /* GXTEntry: "Perfect Beaver Carcass" */;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return 1415608202 /* GXTEntry: "Poor Beaver Carcass" */;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return -593311590 /* GXTEntry: "Good Bighorn Sheep Carcass" */;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 765085831 /* GXTEntry: "Perfect Bighorn Sheep Carcass" */;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return 2094730711 /* GXTEntry: "Poor Bighorn Sheep Carcass" */;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return -1310590179 /* GXTEntry: "Good Buck Carcass" */;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 992366796 /* GXTEntry: "Perfect Buck Carcass" */;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return -244657613 /* GXTEntry: "Poor Buck Carcass" */;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -2026210939 /* GXTEntry: "Good California Condor Carcass" */;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -980016656 /* GXTEntry: "Poor California Condor Carcass" */;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return -758005668 /* GXTEntry: "Good Chicken Carcass" */;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return -2139551030 /* GXTEntry: "Perfect Chicken Carcass" */;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return 1607144310 /* GXTEntry: "Poor Chicken Carcass" */;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 80093385 /* GXTEntry: "Good Cormorant Carcass" */;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -867655342 /* GXTEntry: "Perfect Cormorant Carcass" */;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 991092621 /* GXTEntry: "Poor Cormorant Carcass" */;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 871746664 /* GXTEntry: "Good Cougar Carcass" */;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1626949878 /* GXTEntry: "Perfect Cougar Carcass" */;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1722483116 /* GXTEntry: "Poor Cougar Carcass" */;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1739474417 /* GXTEntry: "Good Coyote Carcass" */;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -161524199 /* GXTEntry: "Perfect Coyote Carcass" */;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return 156979555 /* GXTEntry: "Poor Coyote Carcass" */;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 322141256 /* GXTEntry: "Good Crane Carcass" */;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1310120320 /* GXTEntry: "Perfect Crane Carcass" */;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return -1228376431 /* GXTEntry: "Poor Crane Carcass" */;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 472142656 /* GXTEntry: "Good Deer Carcass" */;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return -1837840093 /* GXTEntry: "Perfect Deer Carcass" */;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 58634176 /* GXTEntry: "Poor Deer Carcass" */;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 1023080408 /* GXTEntry: "Good Duck Carcass" */;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return 1001171791 /* GXTEntry: "Perfect Duck Carcass" */;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return 1210345318 /* GXTEntry: "Poor Duck Carcass" */;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return 399553313 /* GXTEntry: "Good Eagle Carcass" */;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -1422869557 /* GXTEntry: "Perfect Eagle Carcass" */;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -1378812236 /* GXTEntry: "Poor Eagle Carcass" */;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return 1011003885 /* GXTEntry: "Good Egret Carcass" */;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return 651035143 /* GXTEntry: "Perfect Egret Carcass" */;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2013022756 /* GXTEntry: "Poor Egret Carcass" */;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -1186289527 /* GXTEntry: "Good Fox Carcass" */;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 877935135 /* GXTEntry: "Perfect Fox Carcass" */;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return -39646495 /* GXTEntry: "Poor Fox Carcass" */;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return 1582593525 /* GXTEntry: "Good Gila Monster Carcass" */;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return -246542229 /* GXTEntry: "Perfect Gila Monster Carcass" */;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return -529454751 /* GXTEntry: "Poor Gila Monster Carcass" */;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -46978629 /* GXTEntry: "Good Goat Carcass" */;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1347000030 /* GXTEntry: "Perfect Goat Carcass" */;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -505583391 /* GXTEntry: "Poor Goat Carcass" */;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return 1645887374 /* GXTEntry: "Good Goose Carcass" */;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1559227925 /* GXTEntry: "Perfect Goose Carcass" */;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return 1562528937 /* GXTEntry: "Poor Goose Carcass" */;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return -1471526136 /* GXTEntry: "Good Hawk Carcass" */;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1440794801 /* GXTEntry: "Perfect Hawk Carcass" */;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return 2144711797;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 718825539 /* GXTEntry: "Good Heron Carcass" */;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return 2105263879 /* GXTEntry: "Perfect Heron Carcass" */;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -905842006 /* GXTEntry: "Poor Heron Carcass" */;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return 1191274340 /* GXTEntry: "Good Iguana Carcass" */;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return -1030182399 /* GXTEntry: "Poor Iguana Carcass" */;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return 987967309 /* GXTEntry: "Good Loon Carcass" */;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return -1060737769 /* GXTEntry: "Perfect Loon Carcass" */;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return 553310445 /* GXTEntry: "Poor Loon Carcass" */;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1838865945 /* GXTEntry: "Good Muskrat Carcass" */;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 1418092959 /* GXTEntry: "Perfect Muskrat Carcass" */;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 1197831625 /* GXTEntry: "Good Rabbit Carcass" */;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -1866642239 /* GXTEntry: "Perfect Rabbit Carcass" */;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return -1508120809 /* GXTEntry: "Poor Rabbit Carcass" */;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -1007681885 /* GXTEntry: "Good Raccoon Carcass" */;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return 434924608 /* GXTEntry: "Perfect Raccoon Carcass" */;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return 1666393029 /* GXTEntry: "Poor Raccoon Carcass" */;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return -1814593136 /* GXTEntry: "Good Ram Carcass" */;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -1188120304 /* GXTEntry: "Perfect Ram Carcass" */;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return 1978734761 /* GXTEntry: "Poor Ram Carcass" */;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return -824902132 /* GXTEntry: "Good Raven Carcass" */;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -1015531226 /* GXTEntry: "Perfect Raven Carcass" */;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -581619522 /* GXTEntry: "Poor Raven Carcass" */;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return -861854914 /* GXTEntry: "Good Red-footed Booby Carcass" */;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return -545447034 /* GXTEntry: "Perfect Red-footed Booby Carcass" */;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -1824684934 /* GXTEntry: "Poor Red-footed Booby Carcass" */;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 980653387 /* GXTEntry: "Good Rooster Carcass" */;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -1011598664 /* GXTEntry: "Perfect Rooster Carcass" */;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return -177476569 /* GXTEntry: "Poor Rooster Carcass" */;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return 416630124 /* GXTEntry: "Good Roseate Spoonbill Carcass" */;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return 1925728375 /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return -1080457688 /* GXTEntry: "Poor Roseate Spoonbill Carcass" */;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 1742676369 /* GXTEntry: "Good Seagull Carcass" */;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return -899751553 /* GXTEntry: "Perfect Seagull Carcass" */;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 431501574 /* GXTEntry: "Poor Seagull Carcass" */;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 2126795269;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1489051752 /* GXTEntry: "Perfect Sheep Carcass" */;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return -1705499323 /* GXTEntry: "Poor Sheep Carcass" */;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return -2013445740 /* GXTEntry: "Good Skunk Carcass" */;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return 102446365 /* GXTEntry: "Perfect Skunk Carcass" */;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -1927342740 /* GXTEntry: "Poor Skunk Carcass" */;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -410900360 /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return -1073614594 /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return 2060013792 /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 581032175 /* GXTEntry: "Good Red Boa Carcass" */;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -581931638 /* GXTEntry: "Perfect Red Boa Carcass" */;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return -1528265128 /* GXTEntry: "Poor Red Boa Carcass" */;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return -142632645 /* GXTEntry: "Good Copperhead Carcass" */;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2048519180 /* GXTEntry: "Perfect Copperhead Carcass" */;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 1442025993 /* GXTEntry: "Poor Copperhead Carcass" */;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return 441195430 /* GXTEntry: "Good Fer-de-Lance Carcass" */;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 748665395 /* GXTEntry: "Perfect Fer-de-Lance Carcass" */;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return 351048413 /* GXTEntry: "Poor Fer-de-Lance Carcass" */;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return -914779013 /* GXTEntry: "Good Snake Carcass" */;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return 1323485831 /* GXTEntry: "Perfect Snake Carcass" */;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -365111821 /* GXTEntry: "Poor Snake Carcass" */;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return 101495387 /* GXTEntry: "Good Water Snake Carcass" */;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 157917500 /* GXTEntry: "Perfect Water Snake Carcass" */;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return -936537044 /* GXTEntry: "Poor Water Snake Carcass" */;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1610329427 /* GXTEntry: "Good Turkey Carcass" */;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 619479575 /* GXTEntry: "Poor Turkey Carcass" */;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return -281211381 /* GXTEntry: "Good Vulture Carcass" */;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 493457089 /* GXTEntry: "Perfect Vulture Carcass" */;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -479485786 /* GXTEntry: "Poor Vulture Carcass" */;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 27838955 /* GXTEntry: "Good Wolf Carcass" */;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1641833719 /* GXTEntry: "Perfect Wolf Carcass" */;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -314933180 /* GXTEntry: "Poor Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

int func_587(int iParam0)
{
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_279(PLAYER::PLAYER_ID());
	}
	return func_729(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0));
}

int func_588(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_591(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_592(int iParam0)
{
	int iVar0;

	iVar0 = func_90(iParam0);
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

int func_593(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_594(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_211(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_211(iVar0, 8))
	{
		return 0;
	}
	else if (func_211(iVar0, 16))
	{
		return 0;
	}
	else if (func_211(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_595(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_730(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_730(iParam1, 2, 0, 0);
	return -1;
}

int func_596(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_730(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_597()
{
	return 31014903;
}

int func_598()
{
	return 31113207;
}

int func_599()
{
	return 28818647;
}

int func_600(int iParam0)
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

bool func_601(int iParam0)
{
	return func_211(Global_1199613->f_1196, iParam0);
}

bool func_602()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

bool func_603(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
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
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

struct<2> func_604()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_280(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_280(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_605(int iParam0)
{
	if (func_731(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

bool func_606(struct<2> Param0)
{
	return func_732(Param0, 1, 4);
}

bool func_607(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_608(int iParam0)
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
		case 48:
			return 1216456215 /* GXTEntry: "Wild Carrot" */;
		case 49:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 50:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 51:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		case 52:
			return -529638012 /* GXTEntry: "Yarrow" */;
		case 39:
			return 1338475089 /* GXTEntry: "Agarita" */;
		case 40:
			return 2605459 /* GXTEntry: "Texas Bluebonnet" */;
		case 41:
			return 1071702353 /* GXTEntry: "Bitterweed" */;
		case 42:
			return -1183422860 /* GXTEntry: "Blood Flower" */;
		case 43:
			return -1957546791 /* GXTEntry: "Cardinal Flower" */;
		case 44:
			return -589542533 /* GXTEntry: "Chocolate Daisy" */;
		case 45:
			return -1776738559 /* GXTEntry: "Creek Plum" */;
		case 46:
			return 1602215994 /* GXTEntry: "Wild Rhubarb" */;
		case 47:
			return -396757268 /* GXTEntry: "Wisteria" */;
		default:
			break;
	}
	return 0;
}

void func_609(int iParam0, int iParam1)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_27() != -1)
	{
		Global_17172[iParam0] = (Global_17172[iParam0] || iParam1);
		return;
	}
	Global_39.f_4458[iParam0] = (Global_39.f_4458[iParam0] || iParam1);
}

void func_610(int iParam0, bool bParam1)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_733(iParam0))
	{
		return;
	}
	func_609(iParam0, 2);
	if (bParam1)
	{
		if (!func_395(0, 0, 1))
		{
			if (func_27() == -1)
			{
				func_613(1, 6);
			}
			else
			{
				func_734(1, 1017438712);
			}
		}
	}
}

int func_611(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	return func_389(iParam0, 1, 1);
}

void func_612(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_388(iParam0))
	{
		return;
	}
	if (func_611(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_400(iParam0);
	}
	if (!bParam1)
	{
		func_735(iParam0);
	}
	func_609(iParam0, 1);
	func_610(iParam0, 1);
	if (bParam2)
	{
		if (!func_395(0, 0, 1))
		{
			func_613(1, 6);
		}
	}
}

void func_613(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_736(&Global_0, 8);
	}
	if (!func_737() || func_27() != -1)
	{
		return;
	}
	func_736(&Global_0, 1);
}

float func_614(int iParam0, int iParam1)
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
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_34, 0));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_0x775A1CA7893AA8B5(Global_34);
			fVar2 = PED::_0xCB42AFE2B613EE55(Global_34);
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

void func_615(int iParam0)
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
	iVar1 = func_738(2);
	func_739(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_616(int iParam0, bool bParam1)
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
	iVar0 = func_740(2);
	func_741(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_617(int iParam0)
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
	iVar1 = func_742(2);
	func_743(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_618(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_619(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_744(iParam0, fParam1, 1);
	}
	func_746(iParam0, (func_745(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_620(float fParam0, int iParam1)
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

int func_621(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_747(iParam0, fParam1, bParam2, iParam3);
}

void func_622(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_748(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_749())
	{
		iVar1 = func_750(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_750(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_751();
			func_752(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_754(13, func_753(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_109(109, 0);
		}
	}
}

bool func_623()
{
	int iVar0;

	iVar0 = &Global_1951141->f_593[8];
	iVar0 = (&Global_1951141->f_593[10] + iVar0);
	iVar0 = (&Global_1951141->f_593[1] + iVar0);
	iVar0 = (&Global_1951141->f_593[2] + iVar0);
	iVar0 = (&Global_1951141->f_593[5] + iVar0);
	iVar0 = (&Global_1951141->f_593[25] + iVar0);
	iVar0 = (&Global_1951141->f_593[22] + iVar0);
	iVar0 = (&Global_1951141->f_593[18] + iVar0);
	iVar0 = (&Global_1951141->f_593[19] + iVar0);
	return iVar0 > 0;
}

int func_624(int iParam0)
{
	int iVar0;

	iVar0 = func_257(func_755(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_625(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_257(func_755(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951141->f_1657.f_1[iVar1 /*3*/] != &Global_1951141->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951141->f_1657.f_1[iVar1 /*3*/];
		if (func_90(iVar0) == iParam0 || (iParam0 == 81053684 && func_69(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_626()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		iVar1 = &Global_1951141->f_3109[iVar0];
		if (func_90(iVar1) == -999503751)
		{
			if (func_756() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_627(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_757(0);
	}
	if (func_90(iParam0) == -999503751 && func_758(iParam0) != -1)
	{
		return 1;
	}
	if (iParam1 == 2026485318)
	{
		return func_69(iParam0, -287432114);
	}
	else if (iParam1 == 24043185)
	{
		return func_69(iParam0, -133342564);
	}
	return 0;
}

int func_628(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_111(iParam0, 0, 0) };
	Var5 = { func_112(iParam0, Var0, Var0.f_4, 0) };
	if (func_264(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_145(0), &Var5, iParam1);
	return 1;
}

int func_629(int iParam0)
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

bool func_630(var uParam0)
{
	return (Global_1951141->f_3109.f_32.f_6 && uParam0) != 0;
}

void func_631()
{
	Global_1951141->f_1054 = 0;
}

void func_632(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	var uVar119;
	int iVar120;
	int iVar121;

	switch (func_90(iParam0))
	{
		case -2061583405:
			func_759(iParam0, &(Global_1951141->f_3109.f_27));
			break;
		case 81053684:
			func_759(iParam0, &(Global_1951141->f_3109.f_29));
			break;
		case -999503751:
			func_759(iParam0, &(Global_1951141->f_3109.f_26));
			if (func_69(iParam0, -166674229))
			{
				Var0.f_1 = 39;
				if (func_760(&Var0, iParam0, &uVar119, 0, 1, 0, 0, 0))
				{
					iVar120 = 0;
					while (iVar120 < 39)
					{
						iVar121 = &Var0.f_1[iVar120 /*3*/];
						if (func_68(iVar121, 0))
						{
							func_632(iVar121, 0, 0);
						}
						iVar120++;
					}
				}
			}
			break;
		case -525676072:
			func_759(iParam0, &(Global_1951141->f_3109.f_28));
			break;
		case -1719060085:
			func_759(iParam0, &(Global_1951141->f_3109.f_30));
			break;
		case -413129408:
			func_759(iParam0, &(Global_1951141->f_3109.f_31));
			break;
		default:
			if (func_69(iParam0, -1348134986))
			{
				func_759(iParam0, &(Global_1951141->f_3109.f_29));
			}
			break;
	}
	if (bParam2)
	{
		func_477();
	}
	if (bParam1)
	{
		func_479(0, 0);
	}
}

void func_633(var uParam0, int iParam1)
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
			if ((func_761(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_761(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_762(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_634(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_763(uParam0, 1))
	{
		func_764(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			return;
		}
		if ((Global_1951141->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951141->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_635(int iParam0, int iParam1, int iParam2)
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

bool func_636(int iParam0)
{
	return &Global_1951141->f_1657.f_1[func_257(iParam0, 1) /*3*/] != &Global_1951141->f_81[func_257(iParam0, 1) /*12*/];
}

int func_637(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

void func_638(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1951141->f_1657.f_1[iParam0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	func_765(Global_1951141->f_1657.f_1[iParam0 /*3*/], iParam0, Global_17172.f_54.f_644.f_1776);
}

int func_639(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17172.f_54.f_644.f_32[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_640(int iParam0, bool bParam1, int iParam2)
{
	func_766(&(Global_1951141->f_1538), iParam0);
	func_767(2, iParam0, 6);
	if (bParam1)
	{
		func_479(0, 1);
	}
}

int func_641(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_717(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_642()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_643()
{
	return Global_1051202->f_12;
}

char* func_644()
{
	return "unnamed";
}

int func_645(int iParam0)
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

int func_646(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_768(35, iParam0);
}

int func_647(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

bool func_648(int iParam0)
{
	if (func_769(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_770(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_649(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_650(var uParam0, int iParam1)
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
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
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

int func_651(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_771(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_772(uParam2, iParam0, Var1);
	return 1;
}

int func_652(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_27() == -1)
	{
		if (func_301(iParam0) && func_773(iParam0))
		{
			func_774(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_653(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_775(iParam0, iParam1);
	Var0 = { func_111(iParam0, 0, 1) };
	iVar5 = func_398(iParam0, &Var0, 0, 0);
	iVar6 = func_367(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_69(iParam0, -2051813666))
		{
			func_109(672, 1);
		}
		else if (func_27() == -1)
		{
			func_109(671, 0);
		}
	}
	if (func_776(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_654(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_777())
	{
		return;
	}
	switch (func_6(iParam0, -949239683))
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
			Global_1939067->f_70.f_5 = 1;
			Global_1939067->f_70.f_6 = 0;
			Global_1939067->f_70.f_1 = iParam0;
			break;
	}
}

int func_655(int iParam0)
{
	if (!func_778(iParam0))
	{
		return 0;
	}
	return func_779(iParam0);
}

void func_656(int iParam0)
{
	if (!func_778(iParam0))
	{
		return;
	}
	func_780(iParam0);
	func_781(iParam0);
}

void func_657(int iParam0)
{
	if (func_69(iParam0, -1522723129))
	{
		func_782(-848633709, 0, 255, 0, 0);
	}
	else if (func_69(iParam0, -283942357))
	{
		func_782(-981153234, 0, 255, 0, 0);
	}
	else if (func_69(iParam0, 683680997))
	{
		func_782(-756350192, 0, 255, 0, 0);
	}
	else if (func_69(iParam0, 1307628809))
	{
		func_782(603094518, 0, 255, 0, 0);
	}
}

int func_658(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1860710511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1507636870:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1828724907:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1270940175:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1857826511:
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
		case 34372170: /* GXTEntry: "Bolas" */
			iVar0 = 1151374672; /* GXTEntry: "Bolas" */
			break;
		case 963726415:
			iVar0 = -577893115;
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
	if (func_68(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_783(iVar0) || func_784(iVar0))
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

int func_659(int iParam0, bool bParam1)
{
	if (!func_68(iParam0, 0))
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

void func_660(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_589(iParam0))
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

int func_661(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		Var0 = { func_111(iParam0, 0, 1) };
		if (func_293(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_294(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_112(iParam0, Var0, Var0.f_4, 0) };
				func_214(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_114(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
		{
			return 0;
		}
		func_662(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
		func_785(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_662(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_558(iParam0))
	{
		return 0;
	}
	if (!func_114(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

int func_663(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_786(iParam0, iParam1, iParam2);
	}
	Var1 = { func_111(iParam0, 0, 1) };
	Var6 = { func_112(iParam0, Var1, Var1.f_4, 0) };
	return func_787(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_664(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_659(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_27() == -1)
		{
			func_660(iVar0);
			if (iParam1 == 1248274121)
			{
				func_788(iVar0);
			}
		}
		if (!func_776(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_774(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_789(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_661(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || WEAPON::_0xC853230E76A152DF(iVar0))
			{
				func_661(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x6E4E1A82081EABED(iVar0))
			{
				func_661(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_790())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_791(iVar0))
				{
					func_661(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_661(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_792(Global_34, 2, 0, 1);
				if ((((func_589(iVar7) && !Global_26386) && iVar7 != iVar0) && !func_210(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_589(iVar7) && func_210(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1))
				{
					if (!func_661(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_661(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_661(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_109(513, 1);
	}
	return 1;
}

int func_665(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_558(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_589(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
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
		func_675(func_793(iParam0), func_190(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_114(0))
	{
		if (func_662(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_663(iParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_666(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_667()
{
	return 0;
}

int func_668(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_27() == 0)
	{
		func_679(iParam0, 0);
		return 0;
	}
	iVar0 = func_794(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_795(iVar0, sParam4, iParam5, 0);
	}
	func_796(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_669(int iParam0)
{
}

void func_670(int iParam0)
{
}

void func_671(int iParam0)
{
}

void func_672(int iParam0)
{
}

void func_673()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_674(int iParam0, int iParam1)
{
	var uVar0;

	func_526(iParam0, iParam1, &uVar0);
}

void func_675(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_502(iParam0, 1024))
	{
		return;
	}
	func_288(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = sParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_676(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_286(iParam0, &iVar0, &iVar1);
	if (!func_287(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_502(iParam0, 1024))
	{
		return;
	}
	func_288(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

void func_677(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

void func_678(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
}

int func_679(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_650(&Var4, 1356624740);
	return func_651(iParam0, &Var4, &uVar0, iParam1);
}

void func_680(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			break;
	}
}

void func_681(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_797(Global_1902942->f_37);
	func_538(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_798(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_682(int iParam0, int iParam1)
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
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_683(int iParam0)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_190(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_684(int iParam0)
{
	if (func_90(iParam0) == -126813555 || func_90(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_685(int iParam0)
{
	int iVar0;

	if (!func_68(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_534(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_686(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

bool func_687(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_799(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1, iParam2, bParam3, iParam4);
}

int func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_800(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 51)
	{
		iVar1 = func_801(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_689(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_158(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_802(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_803(iVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = &Global_1903929->f_417[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_804(iVar3, 0))
				{
				}
				Global_1903929->f_417[iVar1] = (&Global_1903929->f_417[iVar1] - iVar3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_690(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_805(iVar0, bParam2) >= func_806(bParam2);
}

int func_691(int iParam0, int iParam1, int iParam2)
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
		if (iParam0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
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
			iVar1 = &((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0];
			if (iVar1 == iParam1)
			{
				((*Global_1269869)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0] = 0;
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

void func_692(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 95);
}

void func_693(int iParam0)
{
	int iVar0;
	var uVar1[10];
	int iVar12;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	func_807(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar1);
	iVar12 = 0;
	while (iVar12 < 10)
	{
		if (func_68(&(uVar1[iVar12]), 0))
		{
			if (func_69(&(uVar1[iVar12]), -1690954218))
			{
				func_808(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_69(&(uVar1[iVar12]), 1149630095))
			{
				func_808(iVar0, -1760041550 /* GXTEntry: "High Quality Beef Stew" */);
			}
			else if (func_69(&(uVar1[iVar12]), 194498509))
			{
				func_808(iVar0, 116793994 /* GXTEntry: "Medium Quality Beef Stew" */);
			}
			else if (func_69(&(uVar1[iVar12]), 43251425))
			{
				func_808(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
			else
			{
				func_808(iVar0, 1869130580 /* GXTEntry: "Low Quality Beef Stew" */);
			}
		}
		iVar12++;
	}
}

int func_694(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_409(iParam0, &iVar1))
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

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case -151356522: /* GXTEntry: "Poor Bluegill" */
		case 1006434513: /* GXTEntry: "Bluegill" */
			return 158537911 /* GXTEntry: "Bluegill" */;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
		case 1481288777: /* GXTEntry: "Poor Bullhead Catfish" */
			return -1062286052 /* GXTEntry: "Bullhead Catfish" */;
		case -1824685471: /* GXTEntry: "Poor Chain Pickerel" */
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			return -785236358 /* GXTEntry: "Chain Pickerel" */;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return -1450728546 /* GXTEntry: "Channel Catfish" */;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			return -1295437670 /* GXTEntry: "Lake Sturgeon" */;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
		case 1425358430: /* GXTEntry: "Poor Largemouth Bass" */
			return 1767657451 /* GXTEntry: "Largemouth Bass" */;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return -1222065966 /* GXTEntry: "Longnose Gar" */;
		case -1538397860: /* GXTEntry: "Muskie" */
		case -293259613: /* GXTEntry: "Poor Muskie" */
			return -897542141 /* GXTEntry: "Muskie" */;
		case 193037129: /* GXTEntry: "Northern Pike" */
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			return -1458047097 /* GXTEntry: "Northern Pike" */;
		case -861419347: /* GXTEntry: "Poor Perch" */
		case 1416872916: /* GXTEntry: "Perch" */
			return -1713740144 /* GXTEntry: "Perch" */;
		case 357567274: /* GXTEntry: "Poor Redfin Pickerel" */
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			return -1518011865 /* GXTEntry: "Redfin Pickerel" */;
		case 683583793: /* GXTEntry: "Poor Rock Bass" */
		case 1042542561: /* GXTEntry: "Rock Bass" */
			return -1268607968 /* GXTEntry: "Rock Bass" */;
		case -1202625002: /* GXTEntry: "Poor Smallmouth Bass" */
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			return -1666587802 /* GXTEntry: "Smallmouth Bass" */;
		case 485620834: /* GXTEntry: "Poor Sockeye Salmon" */
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			return 759956813 /* GXTEntry: "Sockeye Salmon" */;
		case 727522818: /* GXTEntry: "Poor Steelhead Trout" */
		case 785407605: /* GXTEntry: "Steelhead Trout" */
			return -129858069 /* GXTEntry: "Steelhead Trout" */;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 783089120 /* GXTEntry: "Bat" */;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			return 1516275256 /* GXTEntry: "Blue Jay" */;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			return 1339926283 /* GXTEntry: "Bullfrog" */;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return -1273168083 /* GXTEntry: "Cedar Waxwing" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 1677450645 /* GXTEntry: "Cormorant" */;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			return -1906789582 /* GXTEntry: "Parakeet" */;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 613321581 /* GXTEntry: "Crow" */;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			return -581264978 /* GXTEntry: "Squirrel" */;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			return 1075520399 /* GXTEntry: "Cardinal" */;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			return -2045434273 /* GXTEntry: "Chipmunk" */;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			return 1220494366 /* GXTEntry: "Crab" */;
		case -1974778216: /* GXTEntry: "Poor Crawfish Carcass" */
		case -381243381: /* GXTEntry: "Perfect Crawfish Carcass" */
		case -210676278: /* GXTEntry: "Good Crawfish Carcass" */
			return 1798104140;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1735171971 /* GXTEntry: "Lizard" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 843200239 /* GXTEntry: "Iguana" */;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			return 562612880 /* GXTEntry: "Oriole" */;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			return 1948286917 /* GXTEntry: "Pigeon" */;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			return -756458312 /* GXTEntry: "Quail" */;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return -705312705 /* GXTEntry: "Rat" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 886059398 /* GXTEntry: "Bird" */;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			return 2018874380 /* GXTEntry: "Robin" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -1181288733 /* GXTEntry: "Spoonbill" */;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return -143561573 /* GXTEntry: "Sparrow" */;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			return 395345271 /* GXTEntry: "Songbird" */;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 725092441 /* GXTEntry: "Toad" */;
		case -1403731492: /* GXTEntry: "Good Woodpecker Carcass" */
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
		case 1496267371: /* GXTEntry: "Poor Woodpecker Carcass" */
			return -391309265;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -1472826885 /* GXTEntry: "Alligator" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -43987615 /* GXTEntry: "Armadillo" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 597440621 /* GXTEntry: "Badger" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return 1297902195 /* GXTEntry: "Beaver" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -1427844561 /* GXTEntry: "Sheep" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -1055552242 /* GXTEntry: "Buck" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return -1847199476 /* GXTEntry: "Californian Condor" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 2059272711 /* GXTEntry: "Chicken" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -1071812884 /* GXTEntry: "Cougar" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return -564442545 /* GXTEntry: "Coyote" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return -1923720634 /* GXTEntry: "Crane" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -510702611 /* GXTEntry: "Deer" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1350246467 /* GXTEntry: "Duck" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 2104011353 /* GXTEntry: "Eagle" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return 1157397403 /* GXTEntry: "Egret" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -1003674917 /* GXTEntry: "Fox" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return 365206122 /* GXTEntry: "Goat" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 731537518 /* GXTEntry: "Goose" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
		case 2144711797:
			return 524696643 /* GXTEntry: "Hawk" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 768271981 /* GXTEntry: "Heron" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -1453172462 /* GXTEntry: "Loon" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1053713682 /* GXTEntry: "Muskrat" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -905573570 /* GXTEntry: "Opossum" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return 313926162 /* GXTEntry: "Owl" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 184430925 /* GXTEntry: "Panther" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 1623821606 /* GXTEntry: "Parrot" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -454952368 /* GXTEntry: "Pelican" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1315516671 /* GXTEntry: "Pheasant" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 238849077 /* GXTEntry: "Pig" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -943371758 /* GXTEntry: "Chicken" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return -10873946 /* GXTEntry: "Pronghorn" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -1523680261 /* GXTEntry: "Rabbit" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 915670869 /* GXTEntry: "Raccoon" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -868889795;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return -1592962144 /* GXTEntry: "Raven" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -262717989 /* GXTEntry: "Rooster" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 1398366530;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
		case 2126795269:
			return -1427844561 /* GXTEntry: "Sheep" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -998653403 /* GXTEntry: "Skunk" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return -946474842 /* GXTEntry: "Black-tailed Rattlesnake" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -547357240 /* GXTEntry: "Snake" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -518676029;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -764925634 /* GXTEntry: "Snake" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return -946474842 /* GXTEntry: "Black-tailed Rattlesnake" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -2050228659 /* GXTEntry: "Snake" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2087684184 /* GXTEntry: "Turkey" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 288450344;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return 848629876 /* GXTEntry: "Vulture" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return -439919843 /* GXTEntry: "Wolf" */;
		default:
			break;
	}
	return -1740237568;
}

void func_696(int iParam0, int iParam1)
{
	int iVar0;

	if (func_27() == -1)
	{
		iVar0 = func_46(7);
	}
	else
	{
		iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	}
	func_691(iVar0, iParam0, iParam1);
}

int func_697(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_290(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_112(iParam0, Var0, Var0.f_4, 0) };
	return func_214(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

var func_698(int iParam0)
{
	var uVar0;

	if (Local_0.f_12)
	{
		func_809();
	}
	func_810(&Local_0);
	func_811(&Local_0);
	switch (iParam0)
	{
		case joaat("a_c_deer_01"):
			if (((((!func_812(&Local_0, -1837840093 /* GXTEntry: "Perfect Deer Carcass" */) || !func_812(&Local_0, 472142656 /* GXTEntry: "Good Deer Carcass" */)) || !func_812(&Local_0, 58634176 /* GXTEntry: "Poor Deer Carcass" */)) || !func_812(&Local_0, -1426520714 /* GXTEntry: "Perfect Skinned Deer Carcass" */)) || !func_812(&Local_0, 337839068 /* GXTEntry: "Good Skinned Deer Carcass" */)) || !func_812(&Local_0, -1456429189 /* GXTEntry: "Poor Skinned Deer Carcass" */))
			{
			}
			break;
		case joaat("a_c_pronghorn_01"):
			if (((((!func_812(&Local_0, 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */) || !func_812(&Local_0, -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */)) || !func_812(&Local_0, -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */)) || !func_812(&Local_0, 1615521415 /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */)) || !func_812(&Local_0, 1018306802 /* GXTEntry: "Good Skinned Pronghorn Carcass" */)) || !func_812(&Local_0, -1499066338 /* GXTEntry: "Poor Skinned Pronghorn Carcass" */))
			{
			}
			break;
		case joaat("a_c_turkeywild_01"):
			if (((((!func_812(&Local_0, 619479575 /* GXTEntry: "Poor Turkey Carcass" */) || !func_812(&Local_0, -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */)) || !func_812(&Local_0, -1610329427 /* GXTEntry: "Good Turkey Carcass" */)) || !func_812(&Local_0, 1171158615 /* GXTEntry: "Perfect Skinned Turkey Carcass" */)) || !func_812(&Local_0, -1178150148 /* GXTEntry: "Good Skinned Turkey Carcass" */)) || !func_812(&Local_0, -2123554124 /* GXTEntry: "Poor Skinned Turkey Carcass" */))
			{
			}
			break;
		case joaat("a_c_fox_01"):
			if (((((!func_812(&Local_0, 877935135 /* GXTEntry: "Perfect Fox Carcass" */) || !func_812(&Local_0, -1186289527 /* GXTEntry: "Good Fox Carcass" */)) || !func_812(&Local_0, -39646495 /* GXTEntry: "Poor Fox Carcass" */)) || !func_812(&Local_0, -886117938 /* GXTEntry: "Perfect Skinned Fox Carcass" */)) || !func_812(&Local_0, -784020903 /* GXTEntry: "Good Skinned Fox Carcass" */)) || !func_812(&Local_0, -1416771220 /* GXTEntry: "Poor Skinned Fox Carcass" */))
			{
			}
			break;
		case joaat("a_c_duck_01"):
			if ((!func_812(&Local_0, 1001171791 /* GXTEntry: "Perfect Duck Carcass" */) || !func_812(&Local_0, 1023080408 /* GXTEntry: "Good Duck Carcass" */)) || !func_812(&Local_0, 1210345318 /* GXTEntry: "Poor Duck Carcass" */))
			{
			}
			break;
		case joaat("a_c_californiacondor_01"):
			if ((!func_812(&Local_0, -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */) || !func_812(&Local_0, -2026210939 /* GXTEntry: "Good California Condor Carcass" */)) || !func_812(&Local_0, -980016656 /* GXTEntry: "Poor California Condor Carcass" */))
			{
			}
			break;
		case joaat("a_c_turtlesnapping_01"):
			if ((!func_812(&Local_0, -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */) || !func_812(&Local_0, -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */)) || !func_812(&Local_0, -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */))
			{
			}
			break;
		case 412583060:
			if ((!func_812(&Local_0, -1332163079 /* GXTEntry: "Perfect Elk Pelt" */) || !func_812(&Local_0, 1181652728 /* GXTEntry: "Good Elk Pelt" */)) || !func_812(&Local_0, 2053771712 /* GXTEntry: "Poor Elk Pelt" */))
			{
			}
			break;
		case -2004866590:
			if (((!func_812(&Local_0, -444893329 /* GXTEntry: "Legendary Alligator Skin" */) || !func_812(&Local_0, -1625078531 /* GXTEntry: "Perfect Alligator Skin" */)) || !func_812(&Local_0, -802026654 /* GXTEntry: "Good Alligator Skin" */)) || !func_812(&Local_0, 1806153689 /* GXTEntry: "Poor Alligator Skin" */))
			{
			}
			break;
		case joaat("a_c_iguanadesert_01"):
			if ((!func_812(&Local_0, 1191274340 /* GXTEntry: "Good Iguana Carcass" */) || !func_812(&Local_0, 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */)) || !func_812(&Local_0, -1030182399 /* GXTEntry: "Poor Iguana Carcass" */))
			{
			}
			break;
		case -1258513246:
			if ((((!func_812(&Local_0, -987731097 /* GXTEntry: "Legendary Tatanka Bison Pelt" */) || !func_812(&Local_0, 2022985736 /* GXTEntry: "Legendary White Bison Pelt" */)) || !func_812(&Local_0, -591117838 /* GXTEntry: "Good Bison Pelt" */)) || !func_812(&Local_0, -1730060063 /* GXTEntry: "Poor Bison Pelt" */)) || !func_812(&Local_0, -237756948 /* GXTEntry: "Perfect Bison Pelt" */))
			{
			}
			break;
	}
	uVar0 = func_813(&Local_0);
	Local_0.f_12 = 1;
	return uVar0;
}

int func_699(var uParam0)
{
	if (!func_814())
	{
		return 0;
	}
	*uParam0 = Local_0.f_11;
	uParam0->f_1 = &Local_0[*uParam0];
	Local_0.f_11++;
	return 1;
}

int func_700(int iParam0, int iParam1, bool bParam2)
{
	*iParam1 = 0;
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!bParam2 || func_177())
	{
		*iParam1 = func_264(iParam0, func_290(1), -2015960939, 1, 1, 0);
		return *iParam1 > 0;
	}
	return 0;
}

struct<5> func_701(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_702(iParam0, joaat("character"), func_302(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_702(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_68(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

bool func_703(int iParam0)
{
	if (func_68(iParam0, 0))
	{
		if (func_69(iParam0, -1242251796))
		{
			if (func_69(iParam0, 2060589226))
			{
				return func_552(512);
			}
			return func_552(256);
		}
		else if (func_69(iParam0, 1919582297))
		{
			return func_552(4096);
		}
		else if (func_69(iParam0, 1647670816))
		{
			return func_552(16384);
		}
	}
	if (Global_1939067->f_12)
	{
		return func_552(256);
	}
	else
	{
		return func_552(2);
	}
	return func_552(2);
}

int func_704(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_705(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_706(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939231->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939231->f_10515;
	Var0.f_2 = 4;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0);
	return MISC::GET_HASH_KEY(&uVar5);
}

int func_707(int iParam0)
{
	if (func_815(iParam0))
	{
		return func_347(16);
	}
	else if (func_816(iParam0))
	{
		return func_817();
	}
	else if (func_818(iParam0))
	{
		return func_347(2);
	}
	return 1;
}

int func_708(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_0x7BCC6087D130312A(iParam0);
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

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return 1908704263 /* GXTEntry: "Good Skinned Alligator Carcass" */;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -2112217546 /* GXTEntry: "Perfect Skinned Alligator Carcass" */;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1745255175 /* GXTEntry: "Poor Skinned Alligator Carcass" */;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -237368063 /* GXTEntry: "Good Skinned Armadillo Carcass" */;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 1598967299 /* GXTEntry: "Perfect Skinned Armadillo Carcass" */;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return -1809464109 /* GXTEntry: "Poor Skinned Armadillo Carcass" */;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -165201917 /* GXTEntry: "Good Skinned Badger Carcass" */;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 815147738 /* GXTEntry: "Perfect Skinned Badger Carcass" */;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return 1287583539 /* GXTEntry: "Poor Skinned Badger Carcass" */;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -2126985311 /* GXTEntry: "Good Skinned Beaver Carcass" */;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1268352491 /* GXTEntry: "Perfect Skinned Beaver Carcass" */;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1940225526 /* GXTEntry: "Poor Skinned Beaver Carcass" */;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -212307068 /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 355421032 /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return 1657729714 /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 1350692346 /* GXTEntry: "Good Skinned Buck Carcass" */;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -257850294 /* GXTEntry: "Perfect Skinned Buck Carcass" */;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return -918541014 /* GXTEntry: "Poor Skinned Buck Carcass" */;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -947573795 /* GXTEntry: "Good Plucked California Condor Carcass" */;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -2068302756 /* GXTEntry: "Perfect Plucked California Condor Carcass" */;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 1650829985 /* GXTEntry: "Poor Plucked California Condor Carcass" */;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return -1808044035 /* GXTEntry: "Good Skinned Chicken Carcass" */;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return -1952647655 /* GXTEntry: "Perfect Skinned Chicken Carcass" */;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 1293221440 /* GXTEntry: "Poor Skinned Chicken Carcass" */;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return -642946194 /* GXTEntry: "Good Plucked Cormorant Carcass" */;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 819214075 /* GXTEntry: "Perfect Plucked Cormorant Carcass" */;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return -858652427 /* GXTEntry: "Poor Plucked Cormorant Carcass" */;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 395625948 /* GXTEntry: "Good Skinned Cougar Carcass" */;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return -2063800922 /* GXTEntry: "Perfect Skinned Cougar Carcass" */;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -2117103642 /* GXTEntry: "Poor Skinned Cougar Carcass" */;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1583694057 /* GXTEntry: "Good Skinned Coyote Carcass" */;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1550918713 /* GXTEntry: "Perfect Skinned Coyote Carcass" */;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 836539658 /* GXTEntry: "Poor Skinned Coyote Carcass" */;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 773062352 /* GXTEntry: "Good Plucked Crane Carcass" */;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1306100270 /* GXTEntry: "Perfect Plucked Crane Carcass" */;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1063194668 /* GXTEntry: "Poor Plucked Crane Carcass" */;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return 337839068 /* GXTEntry: "Good Skinned Deer Carcass" */;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -1426520714 /* GXTEntry: "Perfect Skinned Deer Carcass" */;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -1456429189 /* GXTEntry: "Poor Skinned Deer Carcass" */;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -2032809253 /* GXTEntry: "Good Skinned Duck Carcass" */;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return 781728005 /* GXTEntry: "Perfect Skinned Duck Carcass" */;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return 1202409779 /* GXTEntry: "Poor Skinned Duck Carcass" */;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1520877300 /* GXTEntry: "Good Plucked Eagle Carcass" */;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return -1736624361 /* GXTEntry: "Perfect Plucked Eagle Carcass" */;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 719465997 /* GXTEntry: "Poor Plucked Eagle Carcass" */;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -361486526 /* GXTEntry: "Good Skinned Egret Carcass" */;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -765274711 /* GXTEntry: "Perfect Skinned Egret Carcass" */;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -887205673 /* GXTEntry: "Poor Skinned Egret Carcass" */;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -784020903 /* GXTEntry: "Good Skinned Fox Carcass" */;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -886117938 /* GXTEntry: "Perfect Skinned Fox Carcass" */;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1416771220 /* GXTEntry: "Poor Skinned Fox Carcass" */;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 1648676911 /* GXTEntry: "Good Skinned Gila Monster Carcass" */;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 2103833563 /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -831636369 /* GXTEntry: "Poor Skinned Gila Monster Carcass" */;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -852290935 /* GXTEntry: "Good Skinned Goat Carcass" */;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -1870415962 /* GXTEntry: "Perfect Skinned Goat Carcass" */;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -788684109 /* GXTEntry: "Poor Skinned Goat Carcass" */;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return 1416435145 /* GXTEntry: "Good Skinned Goose Carcass" */;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -1483088274 /* GXTEntry: "Perfect Skinned Goose Carcass" */;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -791867098 /* GXTEntry: "Poor Skinned Goose Carcass" */;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return -1689552552 /* GXTEntry: "Good Plucked Hawk Carcass" */;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -1850779170 /* GXTEntry: "Perfect Plucked Hawk Carcass" */;
		case 2144711797:
			return -121487803 /* GXTEntry: "Poor Plucked Hawk Carcass" */;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1280499288 /* GXTEntry: "Good Skinned Heron Carcass" */;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return 820245961 /* GXTEntry: "Perfect Skinned Heron Carcass" */;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -889526774 /* GXTEntry: "Poor Skinned Heron Carcass" */;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -521025998 /* GXTEntry: "Good Skinned Iguana Carcass" */;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return 1583031244 /* GXTEntry: "Perfect Skinned Iguana Carcass" */;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -2115599211 /* GXTEntry: "Poor Skinned Iguana Carcass" */;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -767176802 /* GXTEntry: "Good Skinned Loon Carcass" */;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return -750945821 /* GXTEntry: "Perfect Skinned Loon Carcass" */;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return -2135749211 /* GXTEntry: "Poor Skinned Loon Carcass" */;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 2063108046 /* GXTEntry: "Good Skinned Muskrat Carcass" */;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1299111759 /* GXTEntry: "Perfect Skinned Muskrat Carcass" */;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 1595322723 /* GXTEntry: "Poor Skinned Muskrat Carcass" */;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 784918835 /* GXTEntry: "Good Skinned Opossum Carcass" */;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return -676310905 /* GXTEntry: "Perfect Skinned Opossum Carcass" */;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return -1719545959 /* GXTEntry: "Poor Skinned Opossum Carcass" */;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -2142423934 /* GXTEntry: "Good Plucked Owl Carcass" */;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return 747751566 /* GXTEntry: "Perfect Plucked Owl Carcass" */;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -1942682403 /* GXTEntry: "Poor Plucked Owl Carcass" */;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1018433784 /* GXTEntry: "Good Skinned Panther Carcass" */;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return -796185392 /* GXTEntry: "Perfect Skinned Panther Carcass" */;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return -49549406 /* GXTEntry: "Poor Skinned Panther Carcass" */;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 857788498 /* GXTEntry: "Good Plucked Parrot Carcass" */;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return 1223148871 /* GXTEntry: "Perfect Plucked Parrot Carcass" */;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return 939407236 /* GXTEntry: "Poor Plucked Parrot Carcass" */;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 1608778431 /* GXTEntry: "Good Plucked Pelican Carcass" */;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2033821082 /* GXTEntry: "Perfect Plucked Pelican Carcass" */;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -993340234 /* GXTEntry: "Poor Plucked Pelican Carcass" */;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -1861062075 /* GXTEntry: "Good Skinned Pheasant Carcass" */;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return 1645001514 /* GXTEntry: "Perfect Skinned Pheasant Carcass" */;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 782371031 /* GXTEntry: "Poor Skinned Pheasant Carcass" */;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1255529169 /* GXTEntry: "Good Skinned Pig Carcass" */;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 70898308 /* GXTEntry: "Perfect Skinned Pig Carcass" */;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return -1050350982 /* GXTEntry: "Poor Skinned Pig Carcass" */;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 581781784 /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1363330863 /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1780911288 /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1018306802 /* GXTEntry: "Good Skinned Pronghorn Carcass" */;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1615521415 /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1499066338 /* GXTEntry: "Poor Skinned Pronghorn Carcass" */;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return 1711081908 /* GXTEntry: "Good Skinned Rabbit Carcass" */;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -164705 /* GXTEntry: "Perfect Skinned Rabbit Carcass" */;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2044044647 /* GXTEntry: "Poor Skinned Rabbit Carcass" */;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -859583379 /* GXTEntry: "Good Skinned Raccoon Carcass" */;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -759504052 /* GXTEntry: "Perfect Skinned Raccoon Carcass" */;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 700225820 /* GXTEntry: "Poor Skinned Raccoon Carcass" */;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 136458586 /* GXTEntry: "Good Skinned Ram Carcass" */;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 799105420 /* GXTEntry: "Perfect Skinned Ram Carcass" */;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -481655757 /* GXTEntry: "Poor Skinned Ram Carcass" */;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 484160931 /* GXTEntry: "Good Plucked Raven Carcass" */;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 1010699907 /* GXTEntry: "Perfect Plucked Raven Carcass" */;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 1550264248 /* GXTEntry: "Poor Plucked Raven Carcass" */;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return -371992731 /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1090294483 /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return -274175035 /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return -1064414912 /* GXTEntry: "Good Skinned Rooster Carcass" */;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -2091620305 /* GXTEntry: "Perfect Skinned Rooster Carcass" */;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return -468684824 /* GXTEntry: "Poor Skinned Rooster Carcass" */;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return 1668870118 /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -534004020 /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -2126925270 /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 2008380517 /* GXTEntry: "Good Plucked Seagull Carcass" */;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -510697884 /* GXTEntry: "Perfect Plucked Seagull Carcass" */;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -955209948 /* GXTEntry: "Poor Plucked Seagull Carcass" */;
		case 2126795269:
			return 1459836898 /* GXTEntry: "Good Skinned Sheep Carcass" */;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 303969766 /* GXTEntry: "Perfect Skinned Sheep Carcass" */;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -1707588662 /* GXTEntry: "Poor Skinned Sheep Carcass" */;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return -1224075784 /* GXTEntry: "Good Skinned Skunk Carcass" */;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return -1806671048 /* GXTEntry: "Perfect Skinned Skunk Carcass" */;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 749765420 /* GXTEntry: "Poor Skinned Skunk Carcass" */;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 462936163 /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -8888941 /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1640227110 /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -1241188722 /* GXTEntry: "Good Skinned Red Boa Carcass" */;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return -1030962659 /* GXTEntry: "Perfect Skinned Red Boa Carcass" */;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 112552982 /* GXTEntry: "Poor Skinned Red Boa Carcass" */;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return -1599578931 /* GXTEntry: "Good Skinned Copperhead Carcass" */;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return 1296331626 /* GXTEntry: "Perfect Skinned Copperhead Carcass" */;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return -1256398198 /* GXTEntry: "Poor Skinned Copperhead Carcass" */;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1297800973 /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return 1772582754 /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1459876379 /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 1127406863 /* GXTEntry: "Good Skinned Snake Carcass" */;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 1779996957 /* GXTEntry: "Perfect Skinned Snake Carcass" */;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 1885306923 /* GXTEntry: "Poor Skinned Snake Carcass" */;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 1244107697 /* GXTEntry: "Good Skinned Water Snake Carcass" */;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -1201555940 /* GXTEntry: "Perfect Skinned Water Snake Carcass" */;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return -668487833 /* GXTEntry: "Poor Skinned Water Snake Carcass" */;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -1178150148 /* GXTEntry: "Good Skinned Turkey Carcass" */;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1171158615 /* GXTEntry: "Perfect Skinned Turkey Carcass" */;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -2123554124 /* GXTEntry: "Poor Skinned Turkey Carcass" */;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1806705761 /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 404581836 /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 987197489 /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return -1259715647 /* GXTEntry: "Good Plucked Vulture Carcass" */;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return -1716717840 /* GXTEntry: "Perfect Plucked Vulture Carcass" */;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return -196277007 /* GXTEntry: "Poor Plucked Vulture Carcass" */;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -2064457926 /* GXTEntry: "Good Skinned Wolf Carcass" */;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return 561267454 /* GXTEntry: "Perfect Skinned Wolf Carcass" */;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return 686253083 /* GXTEntry: "Poor Skinned Wolf Carcass" */;
		default:
			break;
	}
	return 0;
}

bool func_710(int iParam0)
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

int func_711()
{
	if (func_27() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_712(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_713(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_819(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_714(int iParam0, int iParam1)
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

int func_715(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_716()
{
	return Global_39.f_277.f_3019.f_1;
}

int func_717(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_145(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_508(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_718()
{
	return Global_1900718->f_67;
}

bool func_719()
{
	return (Global_1893575 & 1 != 0 && func_820() != -1);
}

void func_720(int iParam0, int iParam1, var uParam2, int iParam3)
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
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 + (Var19.f_1 - 1f));
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

int func_721(int iParam0)
{
	return func_822(func_821(iParam0));
}

void func_722(int iParam0, var uParam1)
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

bool func_723(int iParam0, int iParam1)
{
	if (!func_68(iParam0, 0))
	{
		return false;
	}
	if (func_724(iParam0))
	{
		return func_823(func_725(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_724(int iParam0)
{
	if (func_69(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_725(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_68(iParam0, 0))
	{
		return func_824(func_207(iParam0), bParam1);
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

int func_726(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_209(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
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
	if (!bParam2)
	{
	}
	return 0;
}

int func_727(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
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
		func_825(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 33:
			return -395929392;
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
		case 22:
			return -1433937760;
		case 23:
			return -681691620;
		case 24:
			return -706234936;
		case 25:
			return -282099500;
		case 26:
			return 1450105278;
		case 5:
			return 379756162;
		case 12:
			return 2128397741;
		case 14:
			return -924263120;
		case 30:
			return 1915478031;
		case 31:
			return -1816941102;
		case 32:
			return 1350021532;
		case 15:
			return 1442571063;
		case 16:
			return -997221403;
		case 17:
			return 1489861748;
		case 27:
			return -2132712788;
		case 28:
			return -995716959;
		case 29:
			return 1414815075;
		case 34:
			return 1427539511;
		case 19:
			return -967055532;
		case 20:
			return 662159626;
		case 21:
			return 1743191502;
		case 18:
			return -830712656;
		case 35:
			return 1570650502;
		case 36:
			return -1980461700;
		case 38:
			return -486915945;
		case 37:
			return -1023568458;
		default:
			break;
	}
	return 0;
}

int func_729(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1125276->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_9 == iParam0 && Global_1125276[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_730(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_826(iParam0, iParam1, iParam2, iParam3);
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case -934992753: /* GXTEntry: "Treasure Map - South Dewberry" */
		case -841961450: /* GXTEntry: "Treasure Map - South Dewberry" */
		case 451529179: /* GXTEntry: "Treasure Map - South Dewberry" */
		case 612720002: /* GXTEntry: "Treasure Map - South Dewberry" */
		case 847313273: /* GXTEntry: "Treasure Map - South Dewberry" */
			return 0;
		case -1640936415: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -1069379473: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -737921038: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -447391084: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
		case -148898263: /* GXTEntry: "Treasure Map - Valentine Outskirts" */
			return 1;
		case -1577213137: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -1100096485: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -1094001463: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -863930314: /* GXTEntry: "Treasure Map - Montana River Bend" */
		case -862160776: /* GXTEntry: "Treasure Map - Montana River Bend" */
			return 2;
		case -1809751726: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 640288085: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 931276805: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 1236716654: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
		case 1855821387: /* GXTEntry: "Treasure Map - Gaptooth Desert" */
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_732(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_281(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_827(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_733(int iParam0)
{
	if (!func_388(iParam0))
	{
		return 0;
	}
	return func_389(iParam0, 2, 1);
}

int func_734(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_828())
	{
		return 0;
	}
	if (!func_273())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_736(&Global_0, 8);
	}
	func_736(&Global_0, 1);
	return 1;
}

void func_735(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_109(239, 0);
			break;
		case 16:
			func_109(240, 0);
			break;
		case 33:
			func_109(241, 0);
			break;
		case 51:
			func_109(242, 0);
			break;
		case 2:
			func_109(243, 0);
			break;
		case 3:
			func_109(244, 0);
			break;
		case 52:
			func_109(245, 0);
			break;
		case 15:
			func_109(246, 0);
			break;
		case 23:
			func_109(247, 0);
			break;
		case 37:
			func_109(248, 0);
			break;
		case 26:
			func_109(249, 0);
			break;
		case 13:
			func_109(250, 0);
			break;
		case 19:
			func_109(251, 0);
			break;
		case 34:
			func_109(252, 0);
			break;
		case 38:
			func_109(253, 0);
			break;
		case 49:
			func_109(254, 0);
			break;
		case 7:
			func_109(255, 0);
			break;
		case 20:
			func_109(256, 0);
			break;
		case 18:
			func_109(257, 0);
			break;
		case 6:
			func_109(258, 0);
			break;
		case 29:
			func_109(259, 0);
			break;
		case 48:
			func_109(260, 0);
			break;
		case 11:
			break;
		case 4:
			func_109(262, 0);
			break;
		case 8:
			func_109(263, 0);
			break;
		case 28:
			func_109(264, 0);
			break;
		case 31:
			func_109(265, 0);
			break;
		case 12:
			func_109(266, 0);
			break;
		case 27:
			func_109(267, 0);
			break;
		case 50:
			func_109(268, 0);
			break;
	}
}

void func_736(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_737()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_738(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_829(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

void func_739(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
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

int func_740(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_829(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_741(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_830(iVar0))
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

int func_742(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_829(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_743(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iParam1, fParam0);
}

float func_744(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_751();
	func_831(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_832(iParam0, 2);
	if (func_834(iVar0, func_833(iParam0, 2), 1))
	{
		func_835(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_109(103, bParam2);
		return 0f;
	}
	func_836(iParam0, func_751(), 2);
	func_835(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_745(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

int func_746(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_829(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_837(iVar0, iParam0, fParam1))
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
			func_838(iParam0, 7000, iParam5);
		}
		func_839(iVar0, iParam0, fParam1);
		func_840(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_747(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_841(iParam0))
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
				sVar0 = func_842(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_615(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_842(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_843(1775828486);
			func_617(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_842(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_616(-1, 0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_843(350943398);
			func_844(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_844(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_844(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

float func_748(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_749()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_845(Global_1954472->f_1331.f_107, 0);
}

int func_750(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_751()
{
	return &Global_1902689;
}

void func_752(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_713(*iParam0);
	iVar1 = func_712(*iParam0);
	iVar2 = func_846(*iParam0);
	iVar3 = func_847(*iParam0);
	iVar4 = func_848(*iParam0);
	iVar5 = func_849(*iParam0);
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
	iVar6 = func_714(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_714(iVar1, iVar0);
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
	func_850(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

float func_753(float fParam0, float fParam1, float fParam2)
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

int func_754(int iParam0, float fParam1, int iParam2)
{
	if (!func_851(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	func_852(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_755(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_256(iVar0);
}

int func_756()
{
	return Global_1951141->f_1657;
}

int func_757(bool bParam0)
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
	Var15 = { func_112(889965687 /* GXTEntry: "Wardrobe" */, func_290(1), 1034665895, 1) };
	iVar19 = func_490(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_342(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_343(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_148(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_162(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_113(Var0, 1);
			}
			func_162(iVar20);
			return iVar14;
		}
		func_162(iVar20);
	}
	return 0;
}

int func_758(int iParam0)
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

int func_759(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_339(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1951141->f_3109.f_25 == 1)
	{
		Global_1951141->f_3109.f_25 = 0;
		*uParam1 = 0;
		Global_1951141->f_3109[0] = 0;
		return 1;
	}
	Global_1951141->f_3109.f_25 = (Global_1951141->f_3109.f_25 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1951141->f_3109[iVar0] = &Global_1951141->f_3109[Global_1951141->f_3109.f_25];
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = 0;
	func_628(iParam0, 1);
	return 1;
}

int func_760(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_853(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_855(uParam0, func_854(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_854(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_257(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2 && iVar11 != 0)
				{
					func_856(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @361; //curOff = 296
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_857(iVar3) && func_637(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2 && iVar11 != 0)
					{
						func_859(uParam0, iVar11, func_858(iParam1) != 0);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

bool func_761(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_762(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_763(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_764(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_765(var uParam0, int iParam1, int iParam2)
{
	*((Global_17172.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

void func_766(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	(Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_765(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_767(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17172.f_54.f_644.f_32[iParam1 /*120*/] = (Global_17172.f_54.f_644.f_32[iParam1 /*120*/] || iParam0);
	}
}

int func_768(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_860(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_861())
	{
		return func_860(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_860(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_769(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_770(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_862(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_863(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_771(var uParam0)
{
	func_650(uParam0, 143479330);
	if (func_476() == 2026485318)
	{
		func_650(uParam0, 617531372);
	}
	else
	{
		func_650(uParam0, 291123060);
	}
}

void func_772(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_864(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

int func_773(int iParam0)
{
	var uVar0;

	if (func_27() != -1)
	{
		return 0;
	}
	if (func_530(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_776(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_210(iParam0, 1);
}

void func_774(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_87(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_659(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_784(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, 0) && func_188(iParam0, 0, 0, 0) == 0))
		{
			if (func_27() == -1)
			{
				func_660(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_323(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_775(int iParam0, int iParam1)
{
	if (func_69(iParam0, 58855631))
	{
		func_865(iParam0, -915411861, iParam1, 1);
	}
}

int func_776(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_866(&iParam0);
	if (!func_68(iParam0, 0) && !func_415(func_207(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_212(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_301(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_291(0) };
		Var4.f_9 = -1591664384;
		if (!func_293(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_294(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_292(iParam0, 1))
		{
			if (!func_293(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_294(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_398(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_264(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_777()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_867(Global_34, 1369124074)) && !func_867(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_778(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_779(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_780(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3434[iVar1] = uVar3;
}

void func_781(int iParam0)
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
			func_868(1);
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
			func_869(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_869(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_869(3);
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
			func_870(1);
			break;
		case 33:
			func_871(1);
			break;
		case 34:
			func_872(1);
			break;
		case 35:
			break;
		case 36:
			func_873(0);
			break;
		case 37:
			func_874(0);
			break;
		case 38:
			func_875(0);
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
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_737() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_109(675, 0);
			break;
		case 3:
			if (func_737() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_109(676, 0);
			break;
		case 4:
			if (func_737() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_109(677, 0);
			break;
		case 5:
			if (func_737() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_876("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_109(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_27() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_663(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_27() == -1)
			{
				if (!func_210(1013902307, 1))
				{
					func_663(1013902307, 1, 752097756);
				}
				if (!func_210(142640135, 1))
				{
					func_663(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_27() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_663(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_27() == -1)
			{
				if (!func_210(786809402, 1))
				{
					func_663(786809402, 1, 752097756);
				}
				if (!func_210(-518019409, 1))
				{
					func_663(-518019409, 1, 752097756);
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
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939178->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_782(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_877(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_783(int iParam0)
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

int func_784(int iParam0)
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

void func_785(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar2 = func_878(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_786(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_212(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_111(iParam0, 0, 0) };
	if (func_776(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_114(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_145(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_787(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_776(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_114(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_145(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_788(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
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
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_751();
	func_752(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_789(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_607(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, 954660191) <= 0)
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
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_0x5C2EA6C44F515F34(iParam0));
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

int func_790()
{
	return 0;
}

bool func_791(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_792(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_793(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_655(49))
			{
				if (!func_655(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_655(50))
			{
				if (!func_655(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_794(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_27() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_210(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
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
			if (func_68(iVar25, 0) && func_69(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_795(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_879(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_538(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_796(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_880() || func_881())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_538(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_538(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_308(func_539(1644987397), iVar1);
	}
}

char* func_797(int iParam0)
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

int func_798(int iParam0)
{
	var uVar0;

	if (!func_574(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

int func_799(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_882(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_324(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_330(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_330(iParam0, iParam1) - iParam2) < 0)
		{
			func_799(iParam0, iParam1, func_188(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_883(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != 1309979101)
	{
		func_323(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_800(int iParam0)
{
	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_801(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -802026654 /* GXTEntry: "Good Alligator Skin" */;
		case 1:
			return 1806153689 /* GXTEntry: "Poor Alligator Skin" */;
		case 2:
			return -1625078531 /* GXTEntry: "Perfect Alligator Skin" */;
		case 3:
			return -2059726619 /* GXTEntry: "Good Beaver Pelt" */;
		case 4:
			return -1569450319 /* GXTEntry: "Poor Beaver Pelt" */;
		case 5:
			return 854596618 /* GXTEntry: "Perfect Beaver Pelt" */;
		case 6:
			return 2116849039;
		case 7:
			return 1248540072 /* GXTEntry: "Poor Boar Pelt" */;
		case 8:
			return -1858513856 /* GXTEntry: "Perfect Boar Pelt" */;
		case 9:
			return -868657362 /* GXTEntry: "Good Buck Pelt" */;
		case 10:
			return 1603936352 /* GXTEntry: "Poor Buck Pelt" */;
		case 11:
			return -702790226 /* GXTEntry: "Perfect Buck Pelt" */;
		case 12:
			return 459744337 /* GXTEntry: "Good Cougar Pelt" */;
		case 13:
			return 1914602340 /* GXTEntry: "Poor Cougar Pelt" */;
		case 14:
			return -1791452194 /* GXTEntry: "Perfect Cougar Pelt" */;
		case 15:
			return 1150939141 /* GXTEntry: "Good Coyote Pelt" */;
		case 16:
			return -1558096473 /* GXTEntry: "Poor Coyote Pelt" */;
		case 17:
			return -794277189 /* GXTEntry: "Perfect Coyote Pelt" */;
		case 18:
			return -1827027577 /* GXTEntry: "Good Deer Pelt" */;
		case 19:
			return -662178186 /* GXTEntry: "Poor Deer Pelt" */;
		case 20:
			return -1035515486 /* GXTEntry: "Perfect Deer Pelt" */;
		case 21:
			return 238733925 /* GXTEntry: "Good Fox Pelt" */;
		case 22:
			return 1647012424 /* GXTEntry: "Poor Fox Pelt" */;
		case 23:
			return 500722008 /* GXTEntry: "Perfect Fox Pelt" */;
		case 24:
			return 1710714415 /* GXTEntry: "Good Goat Hide" */;
		case 25:
			return 699990316 /* GXTEntry: "Poor Goat Hide" */;
		case 26:
			return -1648383828 /* GXTEntry: "Perfect Goat Hide" */;
		case 27:
			return -1379330323 /* GXTEntry: "Good Collared Peccary Pig Pelt" */;
		case 28:
			return -99092070 /* GXTEntry: "Poor Collared Peccary Pig Pelt" */;
		case 29:
			return 1963510418 /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */;
		case 30:
			return 2047376405 /* GXTEntry: "White Cougar Pelt" */;
		case 31:
			return -395646254 /* GXTEntry: "Good Panther Pelt" */;
		case 32:
			return 1584468323 /* GXTEntry: "Poor Panther Pelt" */;
		case 33:
			return 1969175294 /* GXTEntry: "Perfect Panther Pelt" */;
		case 34:
			return 657906142 /* GXTEntry: "Legendary Panther Pelt" */;
		case 35:
			return -57190831 /* GXTEntry: "Good Pig Hide" */;
		case 36:
			return -308965548 /* GXTEntry: "Poor Pig Hide" */;
		case 37:
			return -1102272634 /* GXTEntry: "Perfect Pig Hide" */;
		case 38:
			return 554578289 /* GXTEntry: "Good Pronghorn Hide" */;
		case 39:
			return -983605026 /* GXTEntry: "Poor Pronghorn Hide" */;
		case 40:
			return -1544126829 /* GXTEntry: "Perfect Pronghorn Hide" */;
		case 41:
			return -476045512 /* GXTEntry: "Good Ram Hide" */;
		case 42:
			return 1796037447 /* GXTEntry: "Poor Ram Hide" */;
		case 43:
			return 1795984405 /* GXTEntry: "Perfect Ram Hide" */;
		case 44:
			return -1317365569 /* GXTEntry: "Good Sheep Hide" */;
		case 45:
			return 1729948479 /* GXTEntry: "Poor Sheep Hide" */;
		case 46:
			return 1466150167 /* GXTEntry: "Perfect Sheep Hide" */;
		case 47:
			return 1145777975 /* GXTEntry: "Good Wolf Pelt" */;
		case 48:
			return 85441452 /* GXTEntry: "Poor Wolf Pelt" */;
		case 49:
			return 653400939 /* GXTEntry: "Perfect Wolf Pelt" */;
		case 50:
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

int func_802(int iParam0)
{
	if (!func_688(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_803(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 3;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return 8;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return 18;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 14;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 26;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return 2;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 4;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 16;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return 40;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 27;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return 44;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 37;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 20;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return 39;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 9;
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return 0;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 17;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return 11;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 19;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return 41;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return 31;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 36;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 28;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return 35;
		case 0:
			return 50;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return 48;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 21;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 12;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 23;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return 38;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 49;
		case 657906142: /* GXTEntry: "Legendary Panther Pelt" */
			return 34;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 25;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 5;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return 47;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 15;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return 7;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 46;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return 32;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 10;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 22;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return 24;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 45;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 43;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return 42;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return 1;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return 13;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return 29;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return 33;
		case 2047376405: /* GXTEntry: "White Cougar Pelt" */
			return 30;
		case 2116849039:
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

int func_804(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	if (func_805(iVar1, bParam1) == 0)
	{
		return 0;
	}
	iVar2 = iParam0;
	if (iVar2 > func_805(iVar1, bParam1))
	{
		iVar2 = func_805(iVar1, bParam1);
	}
	if (!bParam1)
	{
		((*Global_1269869)[iVar1 /*20*/])->f_8 = (((*Global_1269869)[iVar1 /*20*/])->f_8 - iVar2);
	}
	else
	{
		((*Global_1269869)[iVar1 /*20*/])->f_9 = (((*Global_1269869)[iVar1 /*20*/])->f_9 - iVar2);
	}
	if (func_805(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = 0;
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = 0;
		}
	}
	else if (func_805(iVar1, bParam1) > func_806(bParam1))
	{
		if (!bParam1)
		{
			((*Global_1269869)[iVar1 /*20*/])->f_8 = func_806(bParam1);
		}
		else
		{
			((*Global_1269869)[iVar1 /*20*/])->f_9 = func_806(bParam1);
		}
	}
	return 1;
}

int func_805(int iParam0, bool bParam1)
{
	return func_819(bParam1, ((*Global_1269869)[iParam0 /*20*/])->f_9, ((*Global_1269869)[iParam0 /*20*/])->f_8);
}

int func_806(bool bParam0)
{
	return func_819(bParam0, Global_1901929->f_638.f_30, Global_1901929->f_638.f_29);
}

int func_807(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	iVar1 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = PED::_0x7BCC6087D130312A(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17095.f_2 != 3)
	{
		iVar1 = Global_17095.f_2;
	}
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

void func_808(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1[10];
	int iVar12;
	int iVar13;

	iVar1[0] = 878851736; /* GXTEntry: "Beef Stew" */
	iVar1[1] = 1762298001; /* GXTEntry: "Beef and Eggs Stew" */
	iVar1[2] = 1869130580; /* GXTEntry: "Low Quality Beef Stew" */
	iVar1[3] = 1336518004; /* GXTEntry: "Low Quality Beef and Eggs Stew" */
	iVar1[4] = 116793994; /* GXTEntry: "Medium Quality Beef Stew" */
	iVar1[5] = 515084529; /* GXTEntry: "Medium Quality Beef and Eggs Stew" */
	iVar1[6] = -1760041550; /* GXTEntry: "High Quality Beef Stew" */
	iVar1[7] = -1977068039; /* GXTEntry: "High Quality Beef and Eggs Stew" */
	iVar1[8] = -1708424762; /* GXTEntry: "Regional Beef Stew" */
	iVar1[9] = -399865011; /* GXTEntry: "Regional Beef and Eggs Stew" */
	iVar12 = 0;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iParam1 == &iVar1[iVar13])
		{
			if (iVar13 > iVar12)
			{
				uVar0 = &iVar1[iVar13];
			}
		}
		iVar13++;
	}
	func_884(iParam0, &uVar0);
	func_885(&uVar0);
}

void func_809()
{
	struct<9> Var0;

	Var0 = 7;
	Var0.f_8 = -1;
	MISC::_COPY_MEMORY(&Local_0, &Var0, 13);
}

void func_810(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_811(var uParam0)
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

int func_812(var uParam0, int iParam1)
{
	if (!func_886(uParam0))
	{
		return 0;
	}
	if (iParam1 != 0)
	{
		(*uParam0)[uParam0->f_8] = iParam1;
		if (!func_887(uParam0))
		{
		}
		return 1;
	}
	return 0;
}

int func_813(var uParam0)
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

int func_814()
{
	if (Local_0.f_11 < 0 || Local_0.f_11 >= 7)
	{
		return 0;
	}
	if (Local_0.f_9 == 0)
	{
		if (Local_0.f_11 >= func_813(&Local_0))
		{
			return 0;
		}
	}
	return 1;
}

int func_815(int iParam0)
{
	switch (iParam0)
	{
		case -1894830400:
		case -1661502552:
		case -1460119729:
		case -1434186802:
		case -1274632976:
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
	if (func_888(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case -883547903:
			return 1;
	}
	return 0;
}

bool func_817()
{
	return func_347(1);
}

int func_818(int iParam0)
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

int func_819(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_820()
{
	return Global_1893575->f_2;
}

int func_821(int iParam0)
{
	if (!func_153(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_820() == 137)
	{
		return 137;
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
		case 151:
		case 152:
		case 153:
		case 154:
			return 84;
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
			return 104;
		case 4:
			return 14;
		case 160:
		case 161:
		case 162:
		case 163:
			return 76;
		case 164:
		case 165:
		case 166:
		case 167:
			return 4;
		case 40:
			return 95;
		case 168:
		case 169:
		case 170:
		case 171:
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
			return 135;
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
			return 136;
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
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_822(int iParam0)
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
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_823(int iParam0, int iParam1, bool bParam2)
{
	if (!func_416(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_889(iParam0, iParam1);
	}
	return 1;
}

int func_824(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_415(iParam0, 2))
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

void func_825(int iParam0, int iParam1, var uParam2, int iParam3)
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
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

void func_826(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_827(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_890(Param0);
	}
	return -1;
}

bool func_828()
{
	return !Global_1572887->f_9;
}

int func_829(int iParam0)
{
	return func_892(func_891(iParam0));
}

bool func_830(int iParam0)
{
	float fVar0;

	fVar0 = (func_893(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_831(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_713(*iParam0);
	iVar1 = func_712(*iParam0);
	iVar2 = func_846(*iParam0);
	iVar3 = func_847(*iParam0);
	iVar4 = func_848(*iParam0);
	iVar5 = func_849(*iParam0);
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
		iVar7 = func_714(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_850(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_832(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2;
		default:
			break;
	}
	return -1;
}

int func_833(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_829(2);
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1;
		case 1:
			return (Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1;
		default:
			break;
	}
	return -15;
}

bool func_834(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_894(iParam1) || !func_894(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_835(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_836(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/])->f_1 = iParam1;
			break;
		default:
			break;
	}
}

int func_837(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_0xC6258F41D86676E0(iParam0, func_895(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_838(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_839(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_896(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_897(iParam1), fParam2, -1);
	}
}

void func_840(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_829(2);
	}
	uVar0 = Global_1275573->f_21;
	func_898(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_899(iParam0, uVar0, iParam3);
	}
}

int func_841(int iParam0)
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

char* func_842(int iParam0)
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

void func_843(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_900(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_901(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_844(int iParam0, bool bParam1, bool bParam2)
{
	func_746(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_845(int iParam0, bool bParam1)
{
	return func_834(func_751(), iParam0, bParam1);
}

int func_846(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_847(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_848(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_849(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

void func_850(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_567(iParam0, iParam6);
	func_568(iParam0, iParam5);
	func_569(iParam0, iParam4);
	func_570(iParam0, iParam3);
	func_571(iParam0, iParam2);
	func_572(iParam0, iParam1);
}

int func_851(int iParam0)
{
	if (func_841(iParam0))
	{
		return 1;
	}
	else if (func_902(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_852(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_829(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_853(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_476();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
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

void func_855(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_903(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_904(iVar0, iParam1))
			{
				vVar4 = { func_905(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_906(iVar0, 4))
				{
					func_907(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_908(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1951141->f_81[iVar0 /*12*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

void func_856(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_257(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_857(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_909(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_858(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_68(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_859(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_69(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_858(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_904(iVar0, iParam1))
		{
		}
		else if (func_906(iVar0, 16))
		{
			func_907(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

bool func_860(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_861()
{
	return Global_1099294->f_339;
}

void func_862(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_863(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_863(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_864(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_865(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_68(iParam0, 0) && !func_415(func_207(iParam0), 2))
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

int func_866(int iParam0)
{
	if (!func_68(*iParam0, 0))
	{
		return 0;
	}
	if (!func_910(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			break;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		default:
			return 0;
	}
	return 1;
}

int func_867(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_868(bool bParam0)
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

void func_869(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[iParam0 /*82*/]));
}

void func_870(bool bParam0)
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

void func_871(bool bParam0)
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

void func_872(bool bParam0)
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

void func_873(bool bParam0)
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

void func_874(bool bParam0)
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

void func_875(bool bParam0)
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

var func_876(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_877(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_911(iParam2, -372840566);
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
	func_912(uParam1, iParam0, Var3);
	return 1;
}

int func_878(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_879(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_913())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_880()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_881()
{
	return DLC::IS_DLC_PRESENT(-2112896652);
}

bool func_882(int iParam0, int iParam1, int iParam2)
{
	if (!func_68(iParam1, 0))
	{
		return false;
	}
	return func_330(iParam0, iParam1) >= iParam2;
}

int func_883(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_68(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_701(iParam0) };
	Var5 = { func_702(iParam0, iParam1, Var0, Var0.f_4) };
	return func_914(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

void func_884(int iParam0, var uParam1)
{
}

void func_885(var uParam0)
{
}

int func_886(var uParam0)
{
	if (uParam0->f_8 < 0 || uParam0->f_8 >= 7)
	{
		return 0;
	}
	return 1;
}

int func_887(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8++;
			break;
		case 1:
			if (uParam0->f_10 <= 0)
			{
				return 0;
			}
			uParam0->f_8 = (uParam0->f_8 - 1);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_888(int iParam0)
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

int func_889(int iParam0, int iParam1)
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
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

int func_890(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_915(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_891(int iParam0)
{
	return func_860(&(Global_1954472->f_1465), iParam0, 1);
}

int func_892(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_893(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_916(2)));
}

int func_894(int iParam0)
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
	iVar0 = func_849(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_848(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_847(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_713(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_712(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_846(iParam0);
	if (iVar5 < 1 || iVar5 > func_714(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_895(int iParam0)
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

char* func_896(int iParam0)
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

char* func_897(int iParam0)
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

void func_898(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_899(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_829(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

int func_900(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
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
			return 163;
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
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
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
			return 162;
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
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
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
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
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
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
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

int func_901(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_917(iParam0))
	{
		return 0;
	}
	iVar0 = func_900(iParam0, 1);
	if (!func_918(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_919(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_920(iParam0, iVar1))
		{
			case 0:
				func_921(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_921(iVar1, iParam0, iVar4);
						func_922(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_922(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_923(iVar1, 1);
				func_924(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_925(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_926(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_903(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_904(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_905(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

bool func_906(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_907(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

void func_908(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_909(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_910(int iParam0)
{
	return func_69(iParam0, 1279601681);
}

void func_911(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_912(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_864(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

bool func_913()
{
	return Global_1912978->f_127 == 0;
}

int func_914(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_420(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_927(iParam0, *uParam2, &Var0, 0))
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

int func_915(struct<2> Param0, var uParam2)
{
	if (!func_281(Param0))
	{
		return 0;
	}
	func_928(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_916(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_738(2) * 2;
		case 1:
			return func_742(2) * 2;
		case 2:
			return func_740(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_917(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_918(int iParam0)
{
	int iVar0;

	iVar0 = func_919(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_919(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
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

int func_920(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_929(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_923(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
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

int func_921(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_917(iParam1))
	{
		return 0;
	}
	if (!func_930(iParam0))
	{
		return 0;
	}
	iVar0 = func_923(iParam0, 1);
	func_931(iParam0, iParam1, iParam2);
	if (func_932(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_933(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_934((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_935(vVar1))
		{
			if (func_936(vVar1.x, vVar1.y, vVar1.z))
			{
				func_937((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_938((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_938((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_922(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_923(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
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

void func_924(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_925(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_926(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

int func_927(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam0, &uParam1, iParam5, !bParam6))
	{
		return 0;
	}
	return 1;
}

void func_928(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_929(int iParam0)
{
	if (func_939(iParam0))
	{
		return (func_940(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_930(int iParam0)
{
	int iVar0;

	iVar0 = func_923(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_931(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_900(iParam1, 1);
	iVar1 = func_923(iParam0, 1);
	iVar2 = func_919(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_941(iVar3, 1);
		if (!func_942(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_943((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_944(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_945(iVar6))
		{
		}
		else
		{
			iVar8 = func_946(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_947(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_932(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_933(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_930(iParam0))
	{
		return false;
	}
	if (!func_948(iParam1))
	{
		return false;
	}
	iVar0 = func_949(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_934(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_950(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_935(vector3 vParam0)
{
	if (!func_930(vParam0.x))
	{
		return 0;
	}
	if (!func_917(vParam0.y))
	{
		return 0;
	}
	if (!func_951(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_936(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_900(iParam1, 1);
	iVar1 = func_923(iParam0, 1);
	iVar2 = func_919(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_941(iVar3, 1);
		if (!func_942(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_943((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_952(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_945(iVar6))
		{
		}
		else if (!func_953((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_946(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_954(iVar6);
			}
		}
		iVar7++;
	}
	func_955((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_937(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_948(iParam0))
	{
		return;
	}
	iVar0 = func_949(iParam0, 1);
	if (!func_930(iParam1))
	{
		return;
	}
	if (!func_917(iParam2))
	{
		return;
	}
	if (!func_951(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_938(int iParam0)
{
	int iVar0;

	if (!func_948(iParam0))
	{
		return;
	}
	iVar0 = func_949(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_939(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_940(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (func_939(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_956(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_957(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_958(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_959(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_960(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_941(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
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

int func_942(int iParam0)
{
	int iVar0;

	iVar0 = func_941(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_943(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_961(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_944(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_942(iParam0))
	{
		return;
	}
	iVar0 = func_941(iParam0, 1);
	if (!func_962(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_963((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_964((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = Global_1140484->f_41529[iVar1 /*25*/][(Global_1140484->f_41529[iVar1 /*25*/])->f_23];
			(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

int func_945(int iParam0)
{
	int iVar0;

	iVar0 = func_946(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_946(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 49;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 60;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 50;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1604680733:
			return 10;
		case -1511575465:
			return 34;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 55;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 61;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 56;
		case -191252842:
			return 22;
		case -166765081:
			return 51;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 57;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 52;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1159158432:
			return 58;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 59;
		case 1341326366:
			return 54;
		case 1348456703:
			return 35;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 53;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
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

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_965();
			break;
		case -2103256604:
			func_966();
			break;
		case 692490127:
			PED::_0x66B1CB778D911F49(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_109(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_967(iParam0));
			break;
		case 1204983685:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case 1442295985:
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case 656937467:
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case -430422799:
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_969(func_968(iParam0));
			break;
		case -1771755729:
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 2113555978:
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 793826854:
			func_970();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_962(17);
			break;
		case -824728332:
			func_962(16);
			break;
	}
}

int func_948(int iParam0)
{
	int iVar0;

	iVar0 = func_949(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_949(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
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

int func_950(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_971(iParam0);
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
	while (iVar65 < Global_1140484->f_30603.f_10924)
	{
		iVar64 = func_923(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_972(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_973(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
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

int func_951(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_952(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_942(iParam0))
	{
		return;
	}
	iVar0 = func_941(iParam0, 1);
	if (!func_962(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_963((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_964((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = &((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] == &Global_1140484->f_2001[iVar0 /*192*/])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1140484->f_41529[iVar1 /*25*/])[(Global_1140484->f_41529[iVar1 /*25*/])->f_23] = &Global_1140484->f_2001[iVar0 /*192*/];
	(Global_1140484->f_41529[iVar1 /*25*/])->f_23++;
}

int func_953(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_974(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_954(int iParam0)
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
		case -488644714:
			func_965();
			break;
		case -2103256604:
			func_966();
			break;
		case 692490127:
			PED::_0xFFD54D9FE71B966A(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_109(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_967(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case 539654946:
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_968(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 0));
			func_976(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 1));
			func_976(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 2));
			func_976(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_975(iParam0, 3));
			func_976(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_968(iParam0);
			func_976(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_968(iParam0);
			func_976(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case -1771755729:
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case 2113555978:
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case 785261183:
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 793826854:
			func_977();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_962(17);
			break;
		case -824728332:
			func_962(16);
			break;
	}
}

void func_955(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_978(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_979(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_0x6FB1DA3CA9DA7D90(sVar0, Global_1275573->f_8, sVar1, 0, 0, 0);
}

int func_956(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_957(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_958(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_959(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_960(int iParam0)
{
	int iVar0;

	iVar0 = func_900(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_961(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_980(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_962(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

int func_963(int iParam0)
{
	int iVar0;

	iVar0 = func_964(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_964(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
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

void func_965()
{
	bool bVar0;
	bool bVar1;

	if ((Global_1140484->f_18706[3 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 550, bVar0);
	if ((Global_1140484->f_18706[4 /*195*/])->f_194)
	{
		bVar1 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 556, bVar1);
}

void func_966()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_967(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_968(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_969(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (((*Global_1182208)[iVar0 /*8*/])->f_5 == iParam0)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_7 = 1;
			((*Global_1182208)[iVar0 /*8*/])->f_5 = 0;
		}
		iVar0++;
	}
}

void func_970()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_971(int iParam0)
{
	int iVar0;

	if (!func_948(iParam0))
	{
		return -1;
	}
	iVar0 = func_949(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_972(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_930(iParam0))
	{
		return 0;
	}
	iVar0 = func_923(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_932(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_949(iVar2, 1) /*3*/];
		Var4 = { func_973(iVar3) };
		if (iVar3 != iParam0 && (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_5 <= Var4.f_5)
		{
			return 0;
		}
	}
	switch (&Global_1140484->f_30603.f_2900[iVar0 /*31*/])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return 1;
		case 1245579893:
			if (!func_981() && !func_982())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_981())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_929(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_929(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1275573->f_154[&Global_1275573])))
			{
				return 0;
			}
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		case 190804938:
			iVar1 = func_929(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_648(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_983(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_929(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (PED::_0x0C31C51168E80365(Global_1275573->f_8) != PLAYER::GET_PLAYER_PED(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			return 1;
		default:
			break;
	}
	return 0;
}

struct<31> func_973(int iParam0)
{
	int iVar0;

	iVar0 = func_923(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_974(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_980(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_975(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
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

void func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1182208[iVar0 /*8*/]) && !((*Global_1182208)[iVar0 /*8*/])->f_6)
		{
			((*Global_1182208)[iVar0 /*8*/])->f_5 = iParam0;
			((*Global_1182208)[iVar0 /*8*/])->f_1 = iParam1;
			((*Global_1182208)[iVar0 /*8*/])->f_2 = iParam2;
			((*Global_1182208)[iVar0 /*8*/])->f_3 = iParam3;
			((*Global_1182208)[iVar0 /*8*/])->f_4 = iParam4;
			((*Global_1182208)[iVar0 /*8*/])->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_977()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_978(int iParam0)
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

char* func_979(int iParam0)
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

int func_980(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("name");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("name")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("type"));
		uParam2->f_10.f_3 = func_984(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("default")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("default")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("default")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("min"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("min"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("min"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("max"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("max"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("max"));
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
		return 1;
	}
	return 0;
}

bool func_981()
{
	return Global_1572887->f_6;
}

int func_982()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_281(func_280(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_985(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_983(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_984(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("int"):
			iVar0 = 0;
			break;
		case joaat("float"):
			iVar0 = 1;
			break;
		case joaat("bool"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_985(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

