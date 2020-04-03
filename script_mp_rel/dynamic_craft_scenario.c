#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	var uLocal_48 = 1;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_65 = 1f;
	fLocal_66 = 1f;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return 1;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	var uVar0;
	bool bVar1;

	func_12();
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		switch (iLocal_68)
		{
			case 0:
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 1);
				func_13(&iLocal_68, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
				{
					if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, 0, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) == 0)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_34, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
						if (func_14() == 0)
						{
							if (func_15(-2035110427 /* GXTEntry: "Mortar and Pestle" */, 1) && (!func_16(0, 0, 1) || func_17()))
							{
								iLocal_69 = func_18("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
								func_19(iLocal_69, 342152817, 0, 1);
								MISC::SET_BIT(&(Global_1956131->f_1), 2);
								MISC::CLEAR_BIT(&(Global_1956131->f_1), 3);
							}
						}
						else
						{
							if (!(func_20("simple_crafting") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0))
							{
								if (func_15(-1448210800 /* GXTEntry: "Crafting Tools" */, 1) && (!func_16(0, 0, 1) || func_17()))
								{
									if (!func_21())
									{
										iLocal_69 = func_18("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
										func_19(iLocal_69, 342152817, 0, 1);
									}
								}
								if ((func_22(0, 0) && (!func_23(Global_1956172->f_1, 1) || func_23(Global_1956172->f_1, 512))) && (func_15(-1838434463 /* GXTEntry: "Camp" */, 1) || func_15(2019377485 /* GXTEntry: "Camp" */, 1)))
								{
									iLocal_70 = func_18("SET_CAMP", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
									func_19(iLocal_70, 342152817, 0, 1);
								}
							}
							MISC::SET_BIT(&(Global_1956131->f_1), 2);
							MISC::CLEAR_BIT(&(Global_1956131->f_1), 3);
						}
						iLocal_71 = func_18("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_24(iLocal_71, 17, 1, 1);
						func_19(iLocal_71, 342152817, 0, 1);
						func_13(&iLocal_68, 2);
					}
				}
				break;
			case 2:
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, 0, 0) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
				{
					func_25();
					func_13(&iLocal_68, 1);
					return;
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_34, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				bVar1 = PED::IS_PED_IN_COMBAT(Global_34, 0);
				if ((func_26(-608558181) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0) || Global_1913166->f_1581)
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
					func_13(&iLocal_68, 3);
					return;
				}
				else if (func_27())
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
					func_13(&iLocal_68, 4);
					return;
				}
				else if (func_28())
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
					func_13(&iLocal_68, 5);
					return;
				}
				else if (TASK::_0xEC7E480FF8BD0BED(Global_34))
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
					func_13(&iLocal_68, 6);
					return;
				}
				if (func_29(iLocal_69, 1))
				{
					func_30(0);
					func_25();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
					func_13(&iLocal_68, 3);
				}
				else if (func_29(iLocal_70, 1))
				{
					if ((func_15(-1838434463 /* GXTEntry: "Camp" */, 1) && func_31(-1838434463 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)) || (func_15(2019377485 /* GXTEntry: "Camp" */, 1) && func_31(2019377485 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)))
					{
						func_25();
						MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
					}
				}
				else if (func_32(iLocal_71, 1) || bVar1)
				{
					if (!bVar1)
					{
						PED::_0xD65FDC686A031C83(Global_34, 35709907, 2f);
					}
					TASK::CLEAR_PED_TASKS(Global_34, 0, 0);
					func_25();
				}
				if (!func_33(&uLocal_72))
				{
					if (func_34())
					{
						func_35(&uLocal_72);
					}
				}
				else if (!func_34())
				{
					bLocal_75 = false;
					func_36(&uLocal_72);
				}
				else if (!func_37(&uLocal_72, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SPRINT")))
					{
						bLocal_75 = true;
					}
				}
				else if (!bLocal_75)
				{
					PED::_0xD65FDC686A031C83(Global_34, 35709907, 0.2f);
				}
				break;
			case 3:
				if ((!func_20("simple_crafting") && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) == 0) && !Global_1913166->f_1581)
				{
					func_13(&iLocal_68, 1);
				}
				break;
			case 4:
				if (!func_27())
				{
					func_13(&iLocal_68, 1);
				}
				break;
			case 5:
				if (!func_28())
				{
					func_13(&iLocal_68, 1);
				}
				break;
			case 6:
				if (!TASK::_0xEC7E480FF8BD0BED(Global_34))
				{
					func_13(&iLocal_68, 1);
				}
				break;
		}
		if ((!PED::IS_PED_USING_ANY_SCENARIO(Global_34) || (iLocal_68 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1))) || TASK::_0xDF7993356F52359A(Global_34, 0) != iLocal_16)
		{
			iLocal_13 = 0;
		}
	}
}

void func_7()
{
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_34, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_25();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 0);
	MISC::CLEAR_BIT(&(Global_1956131->f_1), 2);
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_38(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_39(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_40(&iVar0);
	}
}

void func_12()
{
	func_41(0);
}

void func_13(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_14()
{
	return Global_1572887->f_13;
}

bool func_15(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_42(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_43(iParam0);
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
			if (!func_44(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_45(iParam0))
			{
				return true;
			}
			break;
	}
	return func_46(iParam0, 0, 0, 0) >= iParam1;
}

int func_16(int iParam0, bool bParam1, bool bParam2)
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
		if (func_47())
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
	if (iParam0 == 0 && func_49(func_48(0)))
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
	switch (func_50(func_48(0)))
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

bool func_17()
{
	return Global_1913166->f_1578;
}

int func_18(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_51(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_52(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_53(iParam0))
	{
		return;
	}
	iVar0 = func_54(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

int func_20(char* sParam0)
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

int func_21()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_34))
	{
		return 0;
	}
	return 0;
}

bool func_22(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939231->f_1433.f_54.f_85);
}

bool func_23(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_53(iParam0))
	{
		return;
	}
	iVar0 = func_54(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_25()
{
	if (func_53(iLocal_69))
	{
		func_55(&iLocal_69, 1, 1);
	}
	if (func_53(iLocal_70))
	{
		func_55(&iLocal_70, 1, 1);
	}
	if (func_53(iLocal_71))
	{
		func_55(&iLocal_71, 1, 1);
	}
}

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_27()
{
	return (Global_1939231->f_1 || &Global_1939231 == 1);
}

bool func_28()
{
	return Global_1896726->f_382;
}

bool func_29(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_53(iParam0))
	{
		return false;
	}
	iVar0 = func_54(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_30(bool bParam0)
{
	if ((func_14() != -1 || !bParam0) || func_56(Global_34))
	{
		func_57();
		return;
	}
}

int func_31(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_58())
	{
		Global_1939231->f_10479 = iParam0;
		func_59(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_60(iParam0, bParam4))
	{
		return 0;
	}
	if (func_61(iParam0))
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
	if (func_62(iParam0, -2081717885))
	{
		func_63(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_62(iParam0, -1909684001))
	{
		func_64(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_62(iParam0, 587975446))
	{
		func_65(iParam0, Var10);
	}
	else if (func_62(iParam0, 566155764))
	{
		if (!func_66(iParam0))
		{
			return 0;
		}
	}
	if (func_67(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1912976 = iParam0;
		Global_1913165 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_62(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_68(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_62(iParam0, -1472964441) || func_62(iParam0, -228153877)) || func_62(iParam0, 566155764))
	{
	}
	else if (func_62(iParam0, 1919582297))
	{
		if (((func_69() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1)) || TASK::_0x0C3CB2E600C8977D(Global_34, 1)) || !PED::IS_PED_ON_FOOT(Global_34))
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
		func_68(Var10, 0);
		bVar28 = false;
	}
	else if (func_70(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_71(Global_1070356->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_68(Var10, 0);
		iVar29 = 1;
	}
	else if (func_43(iParam0) == joaat("clothing"))
	{
		if (!func_72(iParam0))
		{
			func_73("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_74(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_75();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_76(PLAYER::PLAYER_ID()))
			{
				func_73("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_73("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951141->f_1657 != iParam0)
			{
				func_77(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_78(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_79(iParam0);
					func_77(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1951141->f_1657.f_1[23 /*3*/])
					{
						func_80(Global_34, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_81(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_81(iParam0, 1);
					}
					break;
				default:
					if (!func_62(iParam0, -1348134986))
					{
					}
					else
					{
						func_78(iParam0, 0);
					}
					break;
			}
			func_80(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_82(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_14() != -1)
				{
				}
				else if (!func_72(iParam0))
				{
					func_73("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_83(7, iParam0);
					bVar31 = func_83(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17094))
						{
							MAP::REMOVE_BLIP(&Global_17094);
						}
						Global_17094 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17094, 673950256);
						func_73(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17094), 10000, 0, 0, 0, 1);
					}
					else if (!func_84(7))
					{
						func_73("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_86(Global_34, func_85(7), 0))
						{
							func_73("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17094))
							{
								MAP::REMOVE_BLIP(&Global_17094);
							}
							Global_17094 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17094, 673950256);
							func_73(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17094), 10000, 0, 0, 0, 1);
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
							func_68(Var10, 0);
						}
						Jump @2063; //curOff = 1560
						func_87();
						Jump @2063; //curOff = 1567
						if (!func_23(Global_1956172->f_1, 1) || func_23(Global_1956172->f_1, 512))
						{
							if (func_72(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_88(1, 1))
								{
									func_89(2, 1);
								}
								else if (func_90(1))
								{
									func_73("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (func_91())
								{
									func_73("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_92();
									}
									else
									{
										func_73("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_73("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (func_91())
							{
								func_73("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								func_73("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956172->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2063; //curOff = 1842
						if (!WEAPON::_0xC853230E76A152DF(func_94(Global_34, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, iParam0, true, 0, false, false);
						}
						return 1;
						Jump @2063; //curOff = 1880
						if (func_94(Global_34, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2063; //curOff = 1921
						Jump @2063; //curOff = 1924
						func_95(533, 1);
						Jump @2063; //curOff = 1935
						func_30(1);
						Jump @2063; //curOff = 1943
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2063; //curOff = 1978
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
							func_68(Var10, 0);
						}
						return 1;
						Jump @2063; //curOff = 2054
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

bool func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_53(iParam0))
	{
		return false;
	}
	iVar0 = func_54(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

bool func_33(var uParam0)
{
	return func_96(*uParam0, 1);
}

int func_34()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.1f * 0.1f))
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0)
{
	func_97(uParam0, 0f);
}

void func_36(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_37(var uParam0, float fParam1)
{
	if (func_98(uParam0, fParam1))
	{
		func_36(uParam0);
		return 1;
	}
	return 0;
}

void func_38(int iParam0)
{
}

void func_39(int iParam0)
{
}

void func_40(int iParam0)
{
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_99(4);
	}
	func_99(2);
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
}

int func_42(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_43(int iParam0)
{
	vector3 vVar0;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_100(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_101("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_102(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_103(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_104(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_104(iVar1);
	}
	return 0;
}

bool func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_42(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_74(iParam0);
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
	iVar1 = func_105(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_106(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_107(iParam0);
	iVar2 = func_106(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_46(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_43(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_100(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_108(iParam0, 0);
	}
	if (func_109(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_110(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_111(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_110(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_47()
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
	if (!func_49(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_48(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_49(struct<2> Param0)
{
	if (!func_112(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_113(Param0))
	{
		return 0;
	}
	return 1;
}

int func_50(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_52(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
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
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_114(iParam0, 1);
	func_115(iParam0, 1);
	func_116(iParam0, 128);
}

bool func_53(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

int func_54(int iParam0)
{
	return iParam0;
}

void func_55(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_53(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_54(*iParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_117(iVar0);
	*iParam0 = 0;
}

bool func_56(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_57()
{
	Global_1913166->f_1583 = MISC::GET_GAME_TIMER();
	Global_1913166->f_1581 = 1;
}

int func_58()
{
	if (Global_1939231->f_36 == 3)
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_109(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_118(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_119(iParam0, bParam4, 0) };
	Var6 = { func_120(iParam0, Var1, Var1.f_4, bParam4) };
	return func_121(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

int func_60(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939231->f_7)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_122(iParam0);
		if (func_62(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_123(1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_124())
		{
			return 0;
		}
	}
	if (!func_15(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	if (func_70(iParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_110(0), iParam0, func_125(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463: /* GXTEntry: "Camp" */
		case 2019377485: /* GXTEntry: "Camp" */
			if (!Global_1956172->f_2)
			{
				func_22(1, 1);
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
				func_73(func_126(), 10000, 0, 0, 0, 1);
				Global_1915180->f_21989.f_5 = 0;
			}
			break;
	}
	return 1;
}

int func_62(int iParam0, int iParam1)
{
	if (!func_42(iParam0, 0))
	{
		return func_128(func_127(iParam0), iParam1);
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

void func_63(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_64(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_65(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

int func_66(int iParam0)
{
	if (func_14() == 0 && func_130(func_129(iParam0), 1, 0) != 0)
	{
		func_73("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return 0;
	}
	return 1;
}

int func_67(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_131(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1912977 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_132(iParam0, -949239683))
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
				if (!func_133())
				{
					if (func_134(&Global_34))
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
					func_73("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
					func_135(iParam0);
				}
				else
				{
					func_136(iParam0);
				}
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_137(iParam0, 1);
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_138(iParam0, 1);
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_139(iParam0);
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_135(iParam0);
				}
				else
				{
					func_140(iParam0);
				}
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_135(iParam0);
				}
				else
				{
					func_141(iParam0);
				}
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_135(iParam0);
				}
				else
				{
					func_142(iParam0);
				}
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_34, 0) || PED::_0x5407B7288D0478B7(Global_34, 0) > 0)
				{
					func_135(iParam0);
				}
				else
				{
					func_143(iParam0);
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
				func_144(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_145(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_146(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_135(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_147(iParam0, bParam3);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_148(iParam0, bParam3);
				return 1;
			}
			break;
	}
	return 0;
}

void func_68(struct<16> Param0, int iParam16)
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
	if (!func_149(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_20(&(Param0.f_10)))
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
			func_150(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_69()
{
	return Global_1893575 & 2 != 0;
}

int func_70(int iParam0)
{
	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (func_43(iParam0) == -1650247667)
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
{
	return func_151(iParam0);
}

int func_72(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_43(iParam0) == joaat("clothing"))
	{
		if (func_74(iParam0) == -999503751)
		{
		}
	}
	return 1;
}

var func_73(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_74(int iParam0)
{
	struct<2> Var0;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_75()
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

int func_76(int iParam0)
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

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_152(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_153(Var0);
}

int func_78(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_154())
	{
		return 0;
	}
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (func_156(iParam0))
	{
		iVar0 = 0;
		if (func_74(iParam0) == 81053684 || func_62(iParam0, -1348134986))
		{
			if (bParam1)
			{
				func_157(&iVar0, 2);
			}
		}
		return func_158(iParam0, iVar0);
	}
	return 0;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1951141->f_1657.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_80(Global_34, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_81(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_80(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_159(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
		func_160();
		func_152(128);
		return;
	}
	if (iVar1 == &Global_1951141->f_81[iVar0 /*12*/])
	{
		func_81(iParam0, 1);
		return;
	}
	if (func_161(-2061583405, 0))
	{
		if (func_162(iVar1))
		{
			func_81(iVar1, 0);
		}
		else
		{
			func_163(iVar1, 1, 1, 0);
		}
		func_81(iParam0, 1);
		return;
	}
	if (func_162(iVar1))
	{
		func_81(iVar1, 0);
		func_81(iParam0, 1);
	}
	else if (func_162(iParam0))
	{
		if (iParam0 != func_164(0))
		{
			func_165(iParam0, iVar1);
			func_81(iParam0, 0);
			func_81(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_34, false, true, false, true);
			func_152(128);
			func_81(iParam0, 1);
		}
	}
}

int func_80(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_119(iParam1, 1, 0) };
		iParam3 = func_166(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_168(iParam1, iParam2, func_167(iParam3, 1), bParam4, 1))
	{
		return 0;
	}
	func_169(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_170(iParam1, 0))
		{
			func_171(&(Global_1951141->f_1657.f_1[func_167(iParam3, 1) /*3*/]), 0);
		}
		else
		{
			func_171(iParam1, 1);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1951141->f_81[func_167(iParam3, 1) /*12*/])
			{
				func_77(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_159(32768))
			{
				func_160();
				func_77(21, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_172(iParam3);
	if (bParam8)
	{
		func_173(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_77(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_77(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_81(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_119(iParam0, 0, 0) };
	Var5 = { func_120(iParam0, Var0, Var0.f_4, 0) };
	if (func_174(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_110(0), &Var5, iParam1);
}

void func_82(bool bParam0)
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

int func_83(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_175(iParam0);
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
	if (func_176(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0)
{
	int iVar0;

	iParam0 = func_175(iParam0);
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
		if (iParam0 == func_177())
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

int func_85(int iParam0)
{
	iParam0 = func_175(iParam0);
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

void func_87()
{
	if (func_178())
	{
		return;
	}
	if (func_179())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915180->f_21989.f_1 = 1;
		Global_1051388->f_42 = 0;
		func_180();
	}
	else if (Global_1915180->f_21989.f_5 != 0)
	{
		func_73(func_126(), 10000, 0, 0, 0, 1);
		Global_1051388->f_3577 = 0;
		func_181(0);
		Global_1915180->f_21989.f_5 = 0;
	}
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_182() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 0;
	}
	if (!func_183(16))
	{
		return 0;
	}
	if (func_184())
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
		{
			return 0;
		}
	}
	if (!func_185())
	{
		return 0;
	}
	if (func_186(16))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	if (iParam0 == 1 && func_187(Global_1131092->f_8, 1))
	{
		return 0;
	}
	if (func_91())
	{
		return 0;
	}
	return 1;
}

int func_89(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_188();
	}
	if (!func_189(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_190(iParam0);
	Global_1896726->f_386 = 1;
	Global_1896726->f_387 = bParam1;
	return 1;
}

bool func_90(int iParam0)
{
	return func_187(Global_1131092->f_8, iParam0);
}

int func_91()
{
	int iVar0;

	iVar0 = func_191(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (((*Global_1125276)[iVar0 /*27*/])->f_18.f_1 != 0 && func_187(((*Global_1125276)[iVar0 /*27*/])->f_18, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_92()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_48(0) };
	if (func_49(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_192(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_193(iVar2) == -785841056)
				{
					func_73("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_73("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_73("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_73("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_93(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_195(Var0, func_194(0, 8), 0, 0);
}

int func_94(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_196(iParam0, &iVar0, &iVar1);
	if (!func_197(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_198(iVar0, iVar1);
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_97(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_199() - fParam1);
	func_200(uParam0, 1);
	func_201(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_98(var uParam0, float fParam1)
{
	if (!func_33(uParam0))
	{
		return 0;
	}
	if (func_202(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	Global_1903007->f_302 = (Global_1903007->f_302 || iParam0);
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_43(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_62(iParam0, 1399091007))
	{
		func_203(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_101(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_110(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_103(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_104(int iParam0)
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

int func_105(int iParam0)
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

int func_106(var uParam0, int iParam1)
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

int func_107(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0);
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

int func_108(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_204(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_206(&Var0, func_205(0));
	}
	if (!func_207(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_104(iVar14);
	return uVar15;
}

int func_109(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_110(bool bParam0)
{
	if (func_14() == -1)
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

struct<4> func_111(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_119(iParam0, bParam1, 0) };
	return func_120(iParam0, Var0, Var0.f_4, bParam1);
}

int func_112(int iParam0)
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

int func_113(int iParam0)
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

void func_114(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_51(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_115(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_116(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_117(int iParam0)
{
	if (!func_208(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

int func_118(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_209(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_109(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_210(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_211(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_212(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_213(joaat("use"), &Var35, 1);
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
			func_214(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_110(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_119(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_215(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_43(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_120(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_205(bParam1) };
			if (iParam2 && func_216(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_217(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_217(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_218(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_219(bParam1) };
			switch (func_74(iParam0))
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
			if (func_220(iParam0, -1823706425))
			{
				Var0 = { func_120(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_220(iParam0, -1483207246))
			{
				Var0 = { func_120(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_120(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_220(iParam0, -1653629781))
			{
				Var0 = { func_120(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_221(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_220(iParam0, -1653629781))
			{
				Var0 = { func_120(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_120(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_42(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_110(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_121(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_209(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_221(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_210(bParam6))
	{
		iVar14 = -1;
		if (func_14() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_213(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_214(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_110(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0)
{
	if (func_62(iParam0, 1573112293))
	{
		return func_222(iParam0);
	}
	switch (func_74(iParam0))
	{
		case -77448735:
			if (func_223(iParam0))
			{
				return func_222(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_222(iParam0);
		case -1520388130:
		case 1802292908:
			return func_224();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_225();
		case -525676072:
			return func_225();
		case 1779021115:
			if (iParam0 == joaat("weapon_kit_camera"))
			{
				return func_226();
			}
			return func_227();
		case -1823706425:
			return func_228();
		case -854348463:
			return func_229();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_230();
		default:
			if (func_42(iParam0, 0))
			{
				if (func_62(iParam0, 1919582297))
				{
					return func_231();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_232();
				}
				else if (iParam0 == -1516555556)
				{
					return func_233();
				}
				else if (func_62(iParam0, 1147021565))
				{
					return func_234();
				}
			}
			return func_235();
	}
	return func_235();
}

int func_123(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1939178->f_6 || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	if (func_14() == 0)
	{
		if (func_236(131072))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 1))
	{
		if (func_236(1024))
		{
			return 0;
		}
	}
	if (Global_1939178->f_16)
	{
		return 0;
	}
	if (!func_23(iParam1, 2) && func_236(32))
	{
		return 0;
	}
	if (!func_23(iParam1, 4))
	{
		if (func_236(4096))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 8) && func_236(512))
	{
		return 0;
	}
	if (!func_23(iParam1, 512) && !func_237(bParam0))
	{
		return 0;
	}
	if (!func_23(iParam1, 262144) && !func_238(bParam0, func_23(iParam1, 524288)))
	{
		return 0;
	}
	if (!func_23(iParam1, 64) && !func_239(bParam0, iParam1, 1))
	{
		return 0;
	}
	if (!func_23(iParam1, 128))
	{
		if (func_240(Global_34, 1868526510) || func_241(Global_34))
		{
			if (bParam0)
			{
				func_73("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_23(iParam1, 16))
	{
		if (func_241(Global_34))
		{
			iVar0 = PED::GET_MOUNT(Global_34);
			if (!func_242(iVar0, 1))
			{
				if (bParam0)
				{
					func_73("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return 0;
			}
		}
	}
	if (!func_23(iParam1, 256) && func_236(8192))
	{
		return 0;
	}
	if (!func_23(iParam1, 1024) && func_236(65536))
	{
		if (bParam0)
		{
			func_73("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_23(iParam1, 2048))
	{
		if (func_236(32768))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 4096))
	{
		if (func_236(16384))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 8192))
	{
		if (!func_236(16))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 16384))
	{
		if (func_236(256))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 32768))
	{
		if (func_27())
		{
			if (bParam0)
			{
				func_73("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (!func_23(iParam1, 131072))
	{
		if (!func_236(524288))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 65536))
	{
		if (!func_236(262144))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 1048576))
	{
		if (!func_236(2097152))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 2097152))
	{
		if (!func_236(8388608))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 4194304))
	{
		if (!func_236(16777216))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 8388608))
	{
		if (func_236(33554432))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 16777216))
	{
		if (func_236(67108864))
		{
			return 0;
		}
	}
	if (!func_23(iParam1, 33554432))
	{
		if (func_236(134217728))
		{
			return 0;
		}
	}
	if (func_236(64))
	{
		return 0;
	}
	else if (func_236(128))
	{
		return 0;
	}
	else if (func_236(1048576))
	{
		return 0;
	}
	else if (func_236(4))
	{
		return 0;
	}
	return 1;
}

int func_124()
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

var func_125(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

char* func_126()
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

int func_127(int iParam0)
{
	return iParam0;
}

int func_128(int iParam0, int iParam1)
{
	if (!func_243(iParam0, 2))
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

int func_129(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_244(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_130(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_245(iParam0))
	{
		return 1;
	}
	if (!func_246())
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
	if (!bParam2 && !func_247(iParam0))
	{
		return 3;
	}
	if (func_248(iParam0) && !func_249())
	{
		return 4;
	}
	return 0;
}

int func_131(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_132(iParam0, -949239683))
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

int func_132(int iParam0, int iParam1)
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

bool func_133()
{
	return (Global_1951141->f_1657.f_1[1 /*3*/])->f_1 == -282754472;
}

int func_134(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_250(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

void func_135(int iParam0)
{
	int iVar0;

	iVar0 = 406178289;
	switch (func_251())
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
		if (func_62(iParam0, 1573112293))
		{
			func_253(func_252(iParam0), 1, 1);
		}
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_136(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_137(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_138(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_139(int iParam0)
{
	int iVar0;

	iVar0 = -362580870;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_140(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_141(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_142(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_143(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_144(int iParam0)
{
	int iVar0;

	iVar0 = 1076410848;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_145(int iParam0)
{
	int iVar0;

	iVar0 = 1516413548;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_146(int iParam0)
{
	int iVar0;

	iVar0 = -1454586679;
	switch (func_251())
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
		func_254(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_147(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1934039819;
	switch (func_251())
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
		if (!func_254(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_255(iParam0);
			func_256(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

void func_148(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1054661625;
	switch (func_251())
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
		if (!func_254(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_255(iParam0);
			func_256(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_255(iParam0);
		func_256(iParam0, 1, 0, 562618531);
	}
}

bool func_149(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_150(int iParam0)
{
	if (func_149(iParam0, 1))
	{
		func_257(1);
	}
}

int func_151(int iParam0)
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

void func_152(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

void func_153(struct<4> Param0)
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
			if (func_258(Param0))
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
			func_259(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_152(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_258(Param0))
			{
				return;
			}
			func_259(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_152(8);
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
			if (func_258(Param0))
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
			func_259(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_152(8);
			break;
			break;
	}
}

bool func_154()
{
	return Global_1951141->f_3252;
}

int func_155(int iParam0)
{
	if (func_260())
	{
		return 0;
	}
	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (!func_15(iParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_156(int iParam0)
{
	return func_261(iParam0);
}

void func_157(int iParam0, int iParam1)
{
	func_262(iParam0, iParam1);
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_263(iParam0);
	if (func_62(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_264(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_265();
			}
			else
			{
				iVar0 = func_266();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_267();
		}
		else
		{
			iVar0 = func_268();
		}
	}
	else if (func_269(&iVar2))
	{
		if (func_62(iVar2, -1303648999))
		{
			iVar0 = func_265();
		}
		else
		{
			iVar0 = func_266();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_267();
	}
	else
	{
		iVar0 = func_268();
	}
	if (iVar0 != 0)
	{
		Global_1951141->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_159(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_160()
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
	func_270(32768);
	func_271(1108822547, 8, 6);
}

bool func_161(int iParam0, bool bParam1)
{
	return func_272(iParam0, 0) < func_273(iParam0, bParam1);
}

bool func_162(int iParam0)
{
	var uVar0;

	return func_274(iParam0, &uVar0);
}

void func_163(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_74(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_27), Global_1951141->f_3109.f_32.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_26), Global_1951141->f_3109.f_32, bParam1);
			break;
		case -525676072:
			bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_28), Global_1951141->f_3109.f_32.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_30), 1, bParam1);
			break;
		default:
			if (func_62(iParam0, -1348134986))
			{
				bVar1 = func_275(iParam0, &(Global_1951141->f_3109.f_29), 1, bParam1);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_164(0))
	{
		func_276(iParam0, 1);
		if (func_277() == 1160113249)
		{
			func_276(func_164(-2125499975), 0);
		}
		else
		{
			func_276(func_164(1160113249), 0);
		}
	}
	func_278();
	if (func_279(iVar0) || (iVar0 != -999503751 && func_62(iParam0, -166674229)))
	{
		INVENTORY::_0x766315A564594401(func_110(0), iParam0, 0);
	}
	func_81(iParam0, iParam3);
	if (bParam2)
	{
		func_280(0, 0);
	}
}

int func_164(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_277();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

void func_165(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_74(iParam1);
	if (iVar0 == func_74(iParam0) || (func_62(iParam0, -1348134986) && func_62(iParam1, -1348134986)))
	{
		func_281(iParam0, iParam1, 1);
		return;
	}
}

int func_166(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1951141->f_81[iVar0 /*12*/])->f_9 == iParam0)
		{
			return func_282(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_167(int iParam0, int iParam1)
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

int func_168(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_283();
	if (iParam2 == 39)
	{
		Var0 = { func_119(iParam0, 1, 0) };
		iParam2 = func_167(func_166(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_159(32768) && iParam2 == 10)
	{
		func_284(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_285(iParam2);
	func_286(iParam2, iVar5);
	func_287(Global_1951141->f_1538.f_1[iParam2 /*3*/], 4, 6);
	func_287(Global_1951141->f_1657.f_1[iParam2 /*3*/], 4, 6);
	func_288(&(Global_1951141->f_1538), iParam0, iParam2, bParam4);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1951141->f_1538.f_1[iParam2 /*3*/] = iParam0;
	(Global_1951141->f_1538.f_1[iParam2 /*3*/])->f_1 = func_289(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1951141->f_2760)
		{
			if (&Global_1951141->f_2760.f_2[iVar6 /*2*/] >= 0 && &Global_1951141->f_2760.f_2[iVar6 /*2*/] < 39)
			{
				Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1951141->f_2627[&Global_1951141->f_2760.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_271(func_282(&(Global_1951141->f_2760.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_169(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_290(&(Global_1951141->f_2760), bParam0, bParam1, bParam2, bParam3);
}

int func_170(int iParam0, bool bParam1)
{
	if (!func_42(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return 0;
	}
	if (func_62(iParam0, 265372629))
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { func_119(iParam0, 0, 0) };
	if (func_170(iParam0, 0))
	{
		iVar9 = func_291(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_119(iVar9, 0, 0) };
			Var0 = { func_120(iVar9, Var4, Var4.f_4, 0) };
			return func_292(Var0, 0);
		}
		return 1;
	}
	Var0 = { func_120(iParam0, Var4, Var4.f_4, 0) };
	return func_292(Var0, iParam1);
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_167(iParam0, 1);
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

void func_173(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_174(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_109(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_120(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_110(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_110(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_175(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_277;
	}
	return iParam0;
}

int func_176(int iParam0)
{
	int iVar0;

	iParam0 = func_175(iParam0);
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
	if (func_293(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_177()
{
	return Global_39.f_277.f_3019;
}

bool func_178()
{
	return Global_1915180->f_21989.f_1;
}

bool func_179()
{
	return Global_1915180->f_21989;
}

void func_180()
{
	PAD::_0x2804658EB7D8A50B(4, 666989068);
}

void func_181(int iParam0)
{
	Global_1051388->f_3578 = iParam0;
}

int func_182()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_3;
}

bool func_183(int iParam0)
{
	return func_187(((*Global_1128435)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_73, iParam0);
}

int func_184()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_185()
{
	return !func_183(2);
}

bool func_186(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_187(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_188()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

int func_189(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_295(bParam2, func_294(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

void func_190(int iParam0)
{
	Global_1896726->f_390 = iParam0;
}

int func_191(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return ((*Global_1128435)[iVar0 /*83*/])->f_38.f_3;
	}
	return -1;
}

int func_192(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if ((Global_1184573->f_1[iVar1 /*26*/])->f_1 != -1 && func_296(iVar1, 64, iVar0))
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

int func_193(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

var func_194(int iParam0, int iParam1)
{
	return func_297(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_195(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_298(&(Global_1070356->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_197(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_299(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_300(iParam0))
	{
		return 0;
	}
	if (func_301(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_302(iParam0, 1)) || func_303(32768))
	{
		if (!func_302(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_304())
	{
		return 0;
	}
	return 1;
}

void func_198(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

float func_199()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_200(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_202(var uParam0)
{
	if (!func_33(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_305(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_199() - uParam0->f_1);
}

void func_203(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_205(bool bParam0)
{
	int iVar0;

	iVar0 = func_110(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_120(923904168, func_215(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_120(923904168, func_215(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_120(923904168, func_215(bParam0), -740156546, 0);
}

void func_206(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_207(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_110(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0)
{
	return func_51(iParam0, 2);
}

int func_209(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_210(bool bParam0)
{
	if (func_14() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_110(bParam0));
}

int func_211(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_109(iParam2, joaat("default"));
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
	if (!func_306(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_212(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_120(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_213(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_307(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_308(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_309(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_214(int iParam0, struct<16> Param1)
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

struct<4> func_215(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_110(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_120(joaat("character"), func_310(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_120(joaat("character"), func_310(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_120(joaat("character"), func_310(), -1591664384, bParam0);
}

int func_216(int iParam0, bool bParam1)
{
	if (func_74(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_311();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_217(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_174(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_218(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_312(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_219(bool bParam0)
{
	int iVar0;

	iVar0 = func_110(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_120(271701509, func_215(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_120(271701509, func_215(bParam0), 12999093, 0);
}

int func_220(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_74(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_313(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_221(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_314(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_222(int iParam0)
{
	if (func_42(iParam0, 0))
	{
		if (func_62(iParam0, -1242251796))
		{
			if (func_62(iParam0, 2060589226))
			{
				return func_315();
			}
			return func_316();
		}
		else if (func_62(iParam0, 1919582297))
		{
			return func_231();
		}
		else if (func_62(iParam0, 1647670816))
		{
			return func_317();
		}
		else if (func_62(iParam0, 1147021565))
		{
			return func_234();
		}
	}
	if (Global_1939067->f_12)
	{
		return func_316();
	}
	else
	{
		return func_234();
	}
	return func_234();
}

int func_223(int iParam0)
{
	if ((((((((((func_62(iParam0, 1147021565) || func_62(iParam0, -136654233)) || func_62(iParam0, -524514947)) || func_62(iParam0, -1238310989)) || func_62(iParam0, 1765172170)) || func_62(iParam0, 1490540191)) || func_62(iParam0, 1573112293)) || func_62(iParam0, -1242251796)) || func_62(iParam0, 1919582297)) || func_62(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return 32759936;
}

int func_225()
{
	return 33012981;
}

int func_226()
{
	return 24885248;
}

int func_227()
{
	return 33269904;
}

int func_228()
{
	return 16228343;
}

int func_229()
{
	return 33269760;
}

int func_230()
{
	return 33030143;
}

int func_231()
{
	return 33274887;
}

int func_232()
{
	return 32189572;
}

int func_233()
{
	return 31080423;
}

int func_234()
{
	return 33012951;
}

int func_235()
{
	return 33022080;
}

bool func_236(int iParam0)
{
	return func_187(Global_1939067->f_7, iParam0);
}

int func_237(bool bParam0)
{
	int iVar0;

	if (func_236(1) && !Global_1956172->f_2)
	{
		if (bParam0)
		{
			func_73("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_236(2) && !Global_1956172->f_2) && MISC::GET_GAME_TIMER() >= Global_17150)
	{
		if (bParam0)
		{
			iVar0 = func_318(Global_34);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_73("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_73("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_236(4194304))
	{
		return 0;
	}
	return 1;
}

int func_238(bool bParam0, bool bParam1)
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
			func_73("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_239(bool bParam0, int iParam1, bool bParam2)
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
					func_73("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
				{
					func_73("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_23(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_34))
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

int func_240(int iParam0, int iParam1)
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

int func_241(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_242(int iParam0, bool bParam1)
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

int func_243(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_244(int iParam0, int iParam1)
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

bool func_245(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_246()
{
	if (Global_17172.f_2954 == 1)
	{
		return 0;
	}
	if (func_319(4))
	{
		return 0;
	}
	if (func_249())
	{
		return 1;
	}
	if (func_320())
	{
		return 0;
	}
	if (func_321(1, 255))
	{
		return 0;
	}
	if (func_49(func_322()) && Global_1199613->f_1.f_20 != 3)
	{
		return 0;
	}
	return 1;
}

int func_247(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_15(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0]), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&(Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0] != 0 && func_323(&((Global_1199613->f_48[iParam0 /*21*/])->f_18[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_249()
{
	return func_324(func_48(0));
}

int func_250(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

int func_251()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_325(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_34, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_34, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_0xC853230E76A152DF(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_325(iVar0)) || WEAPON::_0x6E4E1A82081EABED(iVar0))
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

int func_252(int iParam0)
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

void func_253(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_326(iParam0);
	iVar1 = func_252(iVar0);
	if (iVar1 != iParam0)
	{
		func_327(iVar1, 4);
	}
	if (!func_328(iParam0))
	{
		return;
	}
	if (func_329(iParam0))
	{
		return;
	}
	func_327(iParam0, 4);
	func_330(iParam0, bParam1);
	if (!func_331(iParam0))
	{
		func_332(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_16(0, 0, 1))
		{
			func_333(1, 6);
		}
	}
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

void func_255(int iParam0)
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
	if ((func_62(iParam0, 1573112293) || func_62(iParam0, 672467738)) || func_62(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_43(iParam0) == 2085633299)
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
				uVar30 = func_334(0, Var22.f_2);
				func_335(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_334(2, Var22.f_2);
				func_336(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_334(1, Var22.f_2);
				func_337(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_338(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_339(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_338(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_339(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_338(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_339(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_340(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_341(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_340(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_341(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_340(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_341(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_340(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_341(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_340(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_341(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_340(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_341(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_342(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_62(iParam0, -537818634))
		{
			func_344(func_343(-704089207), 1);
		}
		if (func_62(iParam0, -1457797660))
		{
			func_344(func_343(-1909697259), 1);
		}
		if (bVar38)
		{
			func_344(func_343(704570463), 1);
		}
		if (iParam0 == -241345764 || iParam0 == -1735850413)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1823988672, 1517929953, 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(uVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

int func_256(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_345(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_100(iParam0, 1);
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
			func_346(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_15(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_347(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_46(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_46(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_256(iParam0, func_46(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_43(iParam0) == joaat("weapon"))
	{
		if (!func_348(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_59(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_119(iParam0, 0, 0) };
		if (func_210(0) && Var7.f_4 == 1084182731)
		{
			func_349(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1939067->f_21 = 0;
	}
	if (!func_210(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_346(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_257(int iParam0)
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

bool func_258(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_259(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_260()
{
	if (Global_1951141->f_3253)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1951141->f_3251)) < 1250)
	{
		return 1;
	}
	if (func_350())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_34))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || func_62(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

void func_262(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_263(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_269(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	if (-1829635046 == func_351(81053684))
	{
		if (func_269(iParam0))
		{
			return 1;
		}
	}
	else if (func_352(-525676072, iParam0))
	{
		if (func_269(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_265()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_251())
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

int func_266()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_251())
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

int func_267()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_251())
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

int func_268()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_251())
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

int func_269(int iParam0)
{
	if (func_352(81053684, iParam0))
	{
		return 1;
	}
	if (func_352(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_270(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_167(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_167(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_167(iParam0, 1) /*12*/])->f_11 && iParam1));
}

int func_272(int iParam0, bool bParam1)
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
				return func_353();
			}
			break;
	}
	return 0;
}

int func_273(int iParam0, bool bParam1)
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

int func_274(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1951141->f_3109.f_25)
	{
		if (iParam0 == &Global_1951141->f_3109[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

int func_275(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_274(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_354(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_355(iParam0, 0))
	{
		return 0;
	}
	Global_1951141->f_3109[Global_1951141->f_3109.f_25] = iVar1;
	Global_1951141->f_3109.f_25++;
	*uParam1++;
	return 1;
}

int func_276(int iParam0, int iParam1)
{
	return 1;
}

int func_277()
{
	return Global_1951141->f_1;
}

void func_278()
{
	int iVar0;

	if (func_14() == -1)
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

bool func_279(int iParam0)
{
	return func_357(func_356(iParam0));
}

void func_280(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_358();
	}
	if (bParam0)
	{
		func_152(8);
		func_152(512);
	}
	else
	{
		func_152(8);
		func_152(16);
	}
}

void func_281(int iParam0, int iParam1, bool bParam2)
{
	func_359(iParam0, 0, 0);
	func_163(iParam1, 1, bParam2, 0);
}

int func_282(int iParam0, int iParam1)
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

void func_283()
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

void func_284(int iParam0)
{
	func_271(iParam0, 8, 6);
}

void func_285(int iParam0)
{
	func_360(&(Global_1951141->f_2760), iParam0);
}

void func_286(int iParam0, int iParam1)
{
	func_361(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_288(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = func_74(iVar3);
	iVar5 = 0;
	if (func_277() == 24043185)
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
					func_286(iVar0, iVar5);
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
						func_286(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						func_286(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_286(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == func_74(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							func_286(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						func_286(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_62(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (func_362(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_74(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								func_286(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (func_74(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							func_286(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar1, 1090938458)) && func_62(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							func_286(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_74(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								func_286(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							func_286(16, iVar5);
							if (func_170(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_286(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, -985549034))
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
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									func_286(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (func_170(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										func_286(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && func_62(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											func_286(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											func_286(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (func_170(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											func_286(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (func_62(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												func_286(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && 1769055947 == func_74(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													func_286(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (func_170(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_286(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_286(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951141->f_1657.f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/] && func_62(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951141->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == func_74(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((func_62(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_74(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
												}
												if ((func_62(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/]) && func_74(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
												}
												iVar0 = 37;
												if (func_62(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (func_62(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951141->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == func_74(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == func_74(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!func_62(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == func_74(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													func_286(iVar0, iVar5);
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
			switch (func_282(iParam2, 1))
			{
				case -207860920:
					if (func_363(99217379) && func_62(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_286(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						func_286(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						func_286(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((iParam1 == &Global_1951141->f_81[iParam2 /*12*/] || func_62(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							func_286(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_62(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_286(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && func_62(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						func_286(iVar0, iVar5);
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

int func_289(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (func_277() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_362(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_364(iParam0, func_282(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_290(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_159(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_365(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1951141->f_1657 != 491602716 || !func_366(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_62(Global_1951141->f_1657, -166674229) && (Global_1951141->f_1657 != 491602716 || !func_366(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1951141->f_1657 = 491602716; /* GXTEntry: "Custom Outfit" */
			Global_1951141->f_1538 = 491602716; /* GXTEntry: "Custom Outfit" */
			func_367(-1, 0, 6);
			func_77(27, 0, 0, 0, 0);
		}
	}
	if (bParam3)
	{
		func_280(0, 1);
	}
}

int func_291(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_368(&uParam0, iParam4, bParam5, iParam6);
}

int func_292(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_210(0))
	{
		return func_369(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_221(Param0, &Var0, 0, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_110(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_370(Global_34, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_34, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_294()
{
	return Global_1915180->f_20141;
}

int func_295(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_371())
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

bool func_296(int iParam0, int iParam1, int iParam2)
{
	return func_187((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

var func_297(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_372() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_373());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_373());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_373());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_374(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_375(iVar2))
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
				if (iVar9 & 8192 != 0 && func_376(iVar2) != 1)
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
					if (!func_377(iVar10))
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
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_298(var uParam0, struct<21> Param1)
{
	if (!func_378(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*21*/]) = { Param1 };
	*uParam0++;
	return 1;
}

bool func_299(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_300(int iParam0)
{
	if (func_302(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_301(int iParam0)
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

bool func_302(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_303(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_304()
{
	if (!func_184())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_305(var uParam0)
{
	return func_96(*uParam0, 2);
}

int func_306(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
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

int func_307(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_187(uVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_187(uVar0, 8))
	{
		return 0;
	}
	else if (func_187(uVar0, 16))
	{
		return 0;
	}
	else if (func_187(uVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_308(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_379(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_379(iParam1, 2, 0, 0);
	return -1;
}

int func_309(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_379(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

struct<4> func_310()
{
	struct<4> Var0;

	return Var0;
}

bool func_311()
{
	return (func_380(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_291(func_120(889965687 /* GXTEntry: "Wardrobe" */, func_215(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_312(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_110(0);
	*uParam1 = { func_120(iParam0, func_205(0), iParam3, 0) };
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

int func_313(int iParam0, int iParam1, int iParam2)
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

int func_314(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_110(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_315()
{
	return 31014903;
}

int func_316()
{
	return 31113207;
}

int func_317()
{
	return 28818647;
}

int func_318(int iParam0)
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

bool func_319(int iParam0)
{
	return func_187(Global_1199613->f_1196, iParam0);
}

bool func_320()
{
	return Global_262996[&Global_1275573 /*70*/] > 2;
}

bool func_321(int iParam0, int iParam1)
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

struct<2> func_322()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_48(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_48(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

int func_323(int iParam0)
{
	if (func_381(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

bool func_324(struct<2> Param0)
{
	return func_382(Param0, 1, 4);
}

bool func_325(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_326(int iParam0)
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

void func_327(int iParam0, int iParam1)
{
	if (!func_328(iParam0))
	{
		return;
	}
	if (func_14() != -1)
	{
		Global_17172[iParam0] = (Global_17172[iParam0] || iParam1);
		return;
	}
	Global_39.f_4458[iParam0] = (Global_39.f_4458[iParam0] || iParam1);
}

bool func_328(int iParam0)
{
	return !iParam0 <= 0;
}

int func_329(int iParam0)
{
	if (!func_328(iParam0))
	{
		return 0;
	}
	return func_383(iParam0, 4, 1);
}

void func_330(int iParam0, bool bParam1)
{
	if (!func_328(iParam0))
	{
		return;
	}
	if (func_384(iParam0))
	{
		return;
	}
	func_327(iParam0, 2);
	if (bParam1)
	{
		if (!func_16(0, 0, 1))
		{
			if (func_14() == -1)
			{
				func_333(1, 6);
			}
			else
			{
				func_385(1, 1017438712);
			}
		}
	}
}

int func_331(int iParam0)
{
	if (!func_328(iParam0))
	{
		return 0;
	}
	return func_383(iParam0, 1, 1);
}

void func_332(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_328(iParam0))
	{
		return;
	}
	if (func_331(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_386(iParam0);
	}
	if (!bParam1)
	{
		func_387(iParam0);
	}
	func_327(iParam0, 1);
	func_330(iParam0, 1);
	if (bParam2)
	{
		if (!func_16(0, 0, 1))
		{
			func_333(1, 6);
		}
	}
}

void func_333(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_388(&Global_0, 8);
	}
	if (!func_389() || func_14() != -1)
	{
		return;
	}
	func_388(&Global_0, 1);
}

float func_334(int iParam0, int iParam1)
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

void func_335(int iParam0)
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
	iVar1 = func_390(2);
	func_391(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_336(int iParam0, bool bParam1)
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
	iVar0 = func_392(2);
	func_393(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_337(int iParam0)
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
	iVar1 = func_394(2);
	func_395(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_338(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 100f);
	}
	return ((fParam0 / 8f) * 100f);
}

void func_339(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_396(iParam0, fParam1, 1);
	}
	func_398(iParam0, (func_397(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_340(float fParam0, int iParam1)
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

int func_341(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_399(iParam0, fParam1, bParam2, iParam3);
}

void func_342(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_400(13, 2);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (func_401())
	{
		iVar1 = func_402(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_402(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1954472->f_1331.f_107 = func_403();
			func_404(&(Global_1954472->f_1331.f_107), 0, 0, 1, 0, 0, 0, 0);
		}
		func_406(13, func_405(fVar0, 0f, 100f), 2);
	}
	if (bParam1)
	{
		Global_17172.f_54.f_2438.f_41++;
		if (5 == Global_17172.f_54.f_2438.f_41)
		{
			func_95(109, 0);
		}
	}
}

struct<2> func_343(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_344(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

bool func_345(int iParam0)
{
	return func_43(iParam0) == 2085633299;
}

void func_346(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_42(iParam0, 0))
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
	if (!func_407() || bParam6)
	{
		func_408(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_409(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_409(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_410(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_43(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_74(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_411(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_62(iParam0, 474910316))
	{
		sVar17 = func_412(iParam0);
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
	if (func_62(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_413(iParam0);
	if ((func_414(iVar12) && func_62(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_415(iParam0);
	}
	sVar19 = func_416(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_62(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_417(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_62(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_418(iParam0, &cVar20))
			{
				sVar19 = func_420(func_419(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_421(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_347(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_42(iParam0, 0))
	{
		return Var0;
	}
	if (func_62(iParam0, -305066475))
	{
		if (func_14() == -1)
		{
			if (func_62(iParam0, -537818634))
			{
				return func_343(189951448);
			}
			else
			{
				return func_343(1176172851);
			}
		}
	}
	else if (func_62(iParam0, -537818634))
	{
		return func_343(-963660207);
	}
	if (func_62(iParam0, 2084895747))
	{
		return func_343(1694039471);
	}
	return Var2;
}

int func_348(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_204(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_206(&Var0, func_205(0));
	}
	if (!func_207(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_102(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_121(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_104(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

void func_349(int iParam0, bool bParam1, int iParam2)
{
	Global_1939231->f_4 = iParam0;
	Global_1939231->f_34 = iParam2;
	if (bParam1 || (func_422() && iParam2 == 0))
	{
		func_423(1);
		func_424(1);
	}
}

bool func_350()
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

int func_351(int iParam0)
{
	int iVar0;

	iVar0 = func_167(func_425(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1951141->f_1657.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_167(func_425(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1951141->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951141->f_1657.f_1[iVar1 /*3*/] != &Global_1951141->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951141->f_1657.f_1[iVar1 /*3*/];
		if (func_74(iVar0) == iParam0 || (iParam0 == 81053684 && func_62(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_353()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1951141->f_3109.f_25)
	{
		iVar1 = &Global_1951141->f_3109[iVar0];
		if (func_74(iVar1) == -999503751)
		{
			if (func_426() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_354(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_427(0);
	}
	if (func_74(iParam0) == -999503751 && func_428(iParam0) != -1)
	{
		return 1;
	}
	if (iParam1 == 2026485318)
	{
		return func_62(iParam0, -287432114);
	}
	else if (iParam1 == 24043185)
	{
		return func_62(iParam0, -133342564);
	}
	return 0;
}

int func_355(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_119(iParam0, 0, 0) };
	Var5 = { func_120(iParam0, Var0, Var0.f_4, 0) };
	if (func_174(iParam0, Var0, Var0.f_4, 0, 0, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_110(0), &Var5, iParam1);
	return 1;
}

int func_356(int iParam0)
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

bool func_357(var uParam0)
{
	return (Global_1951141->f_3109.f_32.f_6 && uParam0) != 0;
}

void func_358()
{
	Global_1951141->f_1054 = 0;
}

void func_359(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	var uVar119;
	int iVar120;
	int iVar121;

	switch (func_74(iParam0))
	{
		case -2061583405:
			func_429(iParam0, &(Global_1951141->f_3109.f_27));
			break;
		case 81053684:
			func_429(iParam0, &(Global_1951141->f_3109.f_29));
			break;
		case -999503751:
			func_429(iParam0, &(Global_1951141->f_3109.f_26));
			if (func_62(iParam0, -166674229))
			{
				Var0.f_1 = 39;
				if (func_430(&Var0, iParam0, &uVar119, 0, 1, 0, 0, 0))
				{
					iVar120 = 0;
					while (iVar120 < 39)
					{
						iVar121 = &Var0.f_1[iVar120 /*3*/];
						if (func_42(iVar121, 0))
						{
							func_359(iVar121, 0, 0);
						}
						iVar120++;
					}
				}
			}
			break;
		case -525676072:
			func_429(iParam0, &(Global_1951141->f_3109.f_28));
			break;
		case -1719060085:
			func_429(iParam0, &(Global_1951141->f_3109.f_30));
			break;
		case -413129408:
			func_429(iParam0, &(Global_1951141->f_3109.f_31));
			break;
		default:
			if (func_62(iParam0, -1348134986))
			{
				func_429(iParam0, &(Global_1951141->f_3109.f_29));
			}
			break;
	}
	if (bParam2)
	{
		func_278();
	}
	if (bParam1)
	{
		func_280(0, 0);
	}
}

void func_360(var uParam0, int iParam1)
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
			if ((func_431(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_431(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_432(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_361(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_433(uParam0, 1))
	{
		func_434(uParam0, 1);
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

int func_362(int iParam0, int iParam1, int iParam2)
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

bool func_363(int iParam0)
{
	return &Global_1951141->f_1657.f_1[func_167(iParam0, 1) /*3*/] != &Global_1951141->f_81[func_167(iParam0, 1) /*12*/];
}

int func_364(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

void func_365(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1951141->f_1657.f_1[iParam0 /*3*/]) = { *(Global_1951141->f_1538.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	func_435(Global_1951141->f_1657.f_1[iParam0 /*3*/], iParam0, Global_17172.f_54.f_644.f_1776);
}

int func_366(int iParam0, int iParam1)
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

void func_367(int iParam0, bool bParam1, int iParam2)
{
	func_436(&(Global_1951141->f_1538), iParam0);
	func_437(2, iParam0, 6);
	if (bParam1)
	{
		func_280(0, 1);
	}
}

int func_368(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_438(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_369(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_221(Param0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_43(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_439(Param0, 1, 0) };
		Var16.f_10 = iParam4;
		iVar0 = func_440(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("coach"))
	{
		Var44 = { func_441(Param0, 1, 0) };
		Var44.f_10 = iParam4;
		iVar0 = func_442(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var69 = { func_443(Param0, 1, 0) };
		Var69.f_10 = iParam4;
		iVar0 = func_444(joaat("update"), &Var69, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_445(&Var1, 0) };
		Var86.f_10 = iParam4;
		iVar0 = func_213(joaat("update"), &Var86, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_370(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_371()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_26285) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_26285, 0));
}

int func_372()
{
	return Global_1051202->f_12;
}

char* func_373()
{
	return "unnamed";
}

int func_374(int iParam0)
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

int func_375(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_446(35, iParam0);
}

int func_376(int iParam0)
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

bool func_377(int iParam0)
{
	if (func_447(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_448(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

int func_378(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_449(iParam0, iParam1, iParam2, iParam3);
}

int func_380(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_450(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_110(bParam1), iParam0, iParam3);
}

int func_381(int iParam0)
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

bool func_382(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_49(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_451(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_383(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_328(iParam0))
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

int func_384(int iParam0)
{
	if (!func_328(iParam0))
	{
		return 0;
	}
	return func_383(iParam0, 2, 1);
}

int func_385(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_452())
	{
		return 0;
	}
	if (!func_184())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_388(&Global_0, 8);
	}
	func_388(&Global_0, 1);
	return 1;
}

int func_386(int iParam0)
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

void func_387(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_95(239, 0);
			break;
		case 16:
			func_95(240, 0);
			break;
		case 33:
			func_95(241, 0);
			break;
		case 51:
			func_95(242, 0);
			break;
		case 2:
			func_95(243, 0);
			break;
		case 3:
			func_95(244, 0);
			break;
		case 52:
			func_95(245, 0);
			break;
		case 15:
			func_95(246, 0);
			break;
		case 23:
			func_95(247, 0);
			break;
		case 37:
			func_95(248, 0);
			break;
		case 26:
			func_95(249, 0);
			break;
		case 13:
			func_95(250, 0);
			break;
		case 19:
			func_95(251, 0);
			break;
		case 34:
			func_95(252, 0);
			break;
		case 38:
			func_95(253, 0);
			break;
		case 49:
			func_95(254, 0);
			break;
		case 7:
			func_95(255, 0);
			break;
		case 20:
			func_95(256, 0);
			break;
		case 18:
			func_95(257, 0);
			break;
		case 6:
			func_95(258, 0);
			break;
		case 29:
			func_95(259, 0);
			break;
		case 48:
			func_95(260, 0);
			break;
		case 11:
			break;
		case 4:
			func_95(262, 0);
			break;
		case 8:
			func_95(263, 0);
			break;
		case 28:
			func_95(264, 0);
			break;
		case 31:
			func_95(265, 0);
			break;
		case 12:
			func_95(266, 0);
			break;
		case 27:
			func_95(267, 0);
			break;
		case 50:
			func_95(268, 0);
			break;
	}
}

void func_388(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_389()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_390(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_453(1);
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

void func_391(float fParam0, int iParam1)
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

int func_392(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_453(1);
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

void func_393(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_454(iVar0))
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

int func_394(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_453(1);
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

void func_395(float fParam0, int iParam1)
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

float func_396(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_403();
	func_455(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_456(iParam0, 2);
	if (func_458(iVar0, func_457(iParam0, 2), 1))
	{
		func_459(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_95(103, bParam2);
		return 0f;
	}
	func_460(iParam0, func_403(), 2);
	func_459(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_397(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_453(2);
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

int func_398(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_453(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_461(iVar0, iParam0, fParam1))
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
			func_462(iParam0, 7000, iParam5);
		}
		func_463(iVar0, iParam0, fParam1);
		func_464(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_399(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_465(iParam0))
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
				sVar0 = func_466(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_335(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_466(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_467(1775828486);
			func_337(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_466(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_336(-1, 0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_467(350943398);
			func_468(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_468(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_468(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

float func_400(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_453(1);
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

int func_401()
{
	if (Global_1954472->f_1331.f_107 == -15)
	{
		return 1;
	}
	return func_469(Global_1954472->f_1331.f_107, 0);
}

int func_402(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_403()
{
	return &Global_1902689;
}

void func_404(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_470(*uParam0);
	iVar1 = func_471(*uParam0);
	iVar2 = func_472(*uParam0);
	iVar3 = func_473(*uParam0);
	iVar4 = func_474(*uParam0);
	iVar5 = func_475(*uParam0);
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
	iVar6 = func_476(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_476(iVar1, iVar0);
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
	func_477(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

float func_405(float fParam0, float fParam1, float fParam2)
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

int func_406(int iParam0, float fParam1, int iParam2)
{
	if (!func_478(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_453(2);
	}
	func_479(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

bool func_407()
{
	return !&Global_1912978;
}

void func_408(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_409(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_410(int iParam0, int iParam1)
{
	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_411(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_412(int iParam0)
{
	if (func_62(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_62(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_62(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_62(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_62(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_62(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_62(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_62(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_413(int iParam0)
{
	int iVar0;

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_480(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_414(int iParam0)
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

int func_415(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_42(iParam0, 0))
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

char* func_416(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_417(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_481(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_418(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_482(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_483(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_484(iParam0), 128);
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

var func_419(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_420(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_416(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_421(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_485(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_422()
{
	if ((Global_1939231->f_10485 != (Global_1939231->f_38.f_203 - 1) || func_487(func_486(0), Global_1939231->f_10478, 0, 1, 1) > 0) || Global_1939231->f_10485 == 15)
	{
		return 1;
	}
	func_488();
	if (Global_1939231->f_6)
	{
		return 1;
	}
	return 0;
}

void func_423(int iParam0)
{
	Global_1939231->f_10 = iParam0;
}

void func_424(int iParam0)
{
	Global_1939231->f_9 = iParam0;
}

int func_425(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_166(iVar0);
}

int func_426()
{
	return Global_1951141->f_1657;
}

int func_427(bool bParam0)
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
	Var15 = { func_120(889965687 /* GXTEntry: "Wardrobe" */, func_215(1), 1034665895, 1) };
	iVar19 = func_291(Var15, 552979403, 1, -1);
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
	Var22 = { func_204(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_207(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_102(&Var0, 0, iVar20, iVar21))
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
				func_104(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_292(Var0, 1);
			}
			func_104(iVar20);
			return iVar14;
		}
		func_104(iVar20);
	}
	return 0;
}

int func_428(int iParam0)
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

int func_429(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_274(iVar1, &iVar0))
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
	func_355(iParam0, 1);
	return 1;
}

int func_430(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_489(iParam6);
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
		func_491(uParam0, func_490(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_490(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_167(iVar3, 1);
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
					func_492(iVar3, 16, 6);
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
							if (func_493(iVar3) && func_364(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
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
						func_495(uParam0, iVar11, func_494(iParam1) != 0);
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

bool func_431(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_432(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_433(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_434(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_435(var uParam0, int iParam1, int iParam2)
{
	*((Global_17172.f_54.f_644.f_32[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
}

void func_436(var uParam0, int iParam1)
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
		func_435(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_437(int iParam0, int iParam1, int iParam2)
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

int func_438(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_110(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_314(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

struct<28> func_439(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_110(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_445(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_440(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_307(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_308(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28), iVar0, uParam1);
		}
	}
	else
	{
		return func_309(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_441(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_110(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_445(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_442(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_308(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 25), iVar0, uParam1);
		}
	}
	else
	{
		return func_309(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_443(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_110(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_445(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_444(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_307(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_308(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17), iVar0, uParam1);
		}
	}
	else
	{
		return func_309(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_445(var uParam0, bool bParam1)
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
		Var0.f_15 = func_109(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_310() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_446(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_496(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_497())
	{
		return func_496(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_496(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_447(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_448(int iParam0)
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
		func_498(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_499(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_450(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_451(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_500(Param0);
	}
	return -1;
}

bool func_452()
{
	return !Global_1572887->f_9;
}

int func_453(int iParam0)
{
	return func_502(func_501(iParam0));
}

bool func_454(int iParam0)
{
	float fVar0;

	fVar0 = (func_503(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

void func_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_470(*iParam0);
	iVar1 = func_471(*iParam0);
	iVar2 = func_472(*iParam0);
	iVar3 = func_473(*iParam0);
	iVar4 = func_474(*iParam0);
	iVar5 = func_475(*iParam0);
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
		iVar7 = func_476(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_477(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_456(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_453(2);
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

int func_457(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_453(2);
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

bool func_458(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_504(iParam1) || !func_504(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_459(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_453(2);
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

void func_460(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_453(2);
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

int func_461(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_505(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_462(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_453(2);
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

void func_463(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_506(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_507(iParam1), fParam2, -1);
	}
}

void func_464(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_453(2);
	}
	uVar0 = Global_1275573->f_21;
	func_508(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_509(iParam0, uVar0, iParam3);
	}
}

int func_465(int iParam0)
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

char* func_466(int iParam0)
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

void func_467(int iParam0)
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
		iVar3 = func_510(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_511(iVar0);
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

void func_468(int iParam0, bool bParam1, bool bParam2)
{
	func_398(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_469(int iParam0, bool bParam1)
{
	return func_458(func_403(), iParam0, bParam1);
}

int func_470(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_512(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_471(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_472(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_473(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_474(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_475(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_476(int iParam0, int iParam1)
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

void func_477(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_513(iParam0, iParam6);
	func_514(iParam0, iParam5);
	func_515(iParam0, iParam4);
	func_516(iParam0, iParam3);
	func_517(iParam0, iParam2);
	func_518(iParam0, iParam1);
}

int func_478(int iParam0)
{
	if (func_465(iParam0))
	{
		return 1;
	}
	else if (func_519(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_479(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_453(1);
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

int func_480(int iParam0)
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

int func_481(int iParam0, int iParam1)
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

char* func_482(int iParam0)
{
	int iVar0;

	if (!func_42(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_413(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_483(int iParam0)
{
	if (func_74(iParam0) == -126813555 || func_74(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_484(int iParam0)
{
	int iVar0;

	if (!func_42(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_415(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_485(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_486(int iParam0)
{
	return PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
}

int func_487(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_46(iParam1, bParam2, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = (iVar0 + func_520(INVENTORY::_0x13D234A2A3F66E63(iParam0), iParam1));
	}
	if (bParam3)
	{
		iVar0 = (iVar0 + func_521(iParam1, bParam4));
	}
	return iVar0;
}

void func_488()
{
	if (!func_42(Global_1939231->f_10478, 0))
	{
		Global_1939231->f_6 = 0;
	}
	else if ((((func_132(Global_1939231->f_10478, 1224357681) != 0 && Global_1939231->f_10477 != 0) && Global_1939231->f_10477 != -2074770370) && !Global_1915180->f_20136) && !Global_1915180->f_21989.f_1)
	{
		Global_1939231->f_6 = 1;
	}
	else
	{
		Global_1939231->f_6 = 0;
	}
}

int func_489(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_277();
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

int func_490(int iParam0)
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

void func_491(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_522(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_523(iVar0, iParam1))
			{
				vVar4 = { func_524(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_525(iVar0, 4))
				{
					func_526(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_527(iVar0, 4, 6);
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

void func_492(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_167(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_167(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_493(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_528(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_494(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_42(iParam0, 0))
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

void func_495(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_62(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_494(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_523(iVar0, iParam1))
		{
		}
		else if (func_525(iVar0, 16))
		{
			func_526(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

bool func_496(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_497()
{
	return Global_1099294->f_339;
}

void func_498(int iParam0)
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
	func_499(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_499(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_500(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_529(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

bool func_501(int iParam0)
{
	return func_496(&(Global_1954472->f_1465), iParam0, 1);
}

int func_502(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_503(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_530(2)));
}

int func_504(int iParam0)
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
	iVar0 = func_475(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_474(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_473(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_470(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_471(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_472(iParam0);
	if (iVar5 < 1 || iVar5 > func_476(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_505(int iParam0)
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

char* func_506(int iParam0)
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

char* func_507(int iParam0)
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

void func_508(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_453(2);
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

void func_509(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_453(2);
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

int func_510(int iParam0, int iParam1)
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

int func_511(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_531(iParam0))
	{
		return 0;
	}
	iVar0 = func_510(iParam0, 1);
	if (!func_532(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_533(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_534(iParam0, iVar1))
		{
			case 0:
				func_535(iVar1, iParam0, iVar4);
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
						func_535(iVar1, iParam0, iVar4);
						func_536(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_536(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_537(iVar1, 1);
				func_538(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_539(iVar2, 0);
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
			func_540(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

int func_512(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_513(int iParam0, int iParam1)
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

void func_514(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_515(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_471(*iParam0);
	iVar1 = func_470(*iParam0);
	if (iParam1 < 1 || iParam1 > func_476(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_516(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_517(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_518(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_519(int iParam0)
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

int func_520(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_42(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_541(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_521(int iParam0, bool bParam1)
{
	if (!bParam1 || func_542())
	{
		return func_174(iParam0, func_215(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_522(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_523(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_524(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

bool func_525(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_526(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

void func_527(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_528(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_529(struct<2> Param0, var uParam2)
{
	if (!func_49(Param0))
	{
		return 0;
	}
	func_543(uParam2);
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

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_390(2) * 2;
		case 1:
			return func_394(2) * 2;
		case 2:
			return func_392(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_531(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_532(int iParam0)
{
	int iVar0;

	iVar0 = func_533(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_533(int iParam0, int iParam1)
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

int func_534(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_544(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_537(iParam1, 1);
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

int func_535(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_531(iParam1))
	{
		return 0;
	}
	if (!func_545(iParam0))
	{
		return 0;
	}
	iVar0 = func_537(iParam0, 1);
	func_546(iParam0, iParam1, iParam2);
	if (func_547(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_548(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_549((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_550(vVar1))
		{
			if (func_551(vVar1.x, vVar1.y, vVar1.z))
			{
				func_552((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_553((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_553((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_536(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_537(int iParam0, int iParam1)
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

void func_538(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_539(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_540(var uParam0)
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

struct<4> func_541(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_554(iParam0) };
	return func_555(iParam0, iParam1, Var0, Var0.f_4);
}

int func_542()
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
	if (!func_556(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_543(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_544(int iParam0)
{
	if (func_557(iParam0))
	{
		return (func_558(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_545(int iParam0)
{
	int iVar0;

	iVar0 = func_537(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_546(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_510(iParam1, 1);
	iVar1 = func_537(iParam0, 1);
	iVar2 = func_533(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
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
		iVar5 = func_559(iVar3, 1);
		if (!func_560(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_561((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_562(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_563(iVar6))
		{
		}
		else
		{
			iVar8 = func_564(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_565(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_547(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_548(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_545(iParam0))
	{
		return false;
	}
	if (!func_566(iParam1))
	{
		return false;
	}
	iVar0 = func_567(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_549(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_568(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_550(vector3 vParam0)
{
	if (!func_545(vParam0.x))
	{
		return 0;
	}
	if (!func_531(vParam0.y))
	{
		return 0;
	}
	if (!func_569(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_551(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_510(iParam1, 1);
	iVar1 = func_537(iParam0, 1);
	iVar2 = func_533(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
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
		iVar5 = func_559(iVar3, 1);
		if (!func_560(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_561((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_570(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_563(iVar6))
		{
		}
		else if (!func_571((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_564(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_572(iVar6);
			}
		}
		iVar7++;
	}
	func_573((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_567(iParam0, 1);
	if (!func_545(iParam1))
	{
		return;
	}
	if (!func_531(iParam2))
	{
		return;
	}
	if (!func_569(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_553(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = func_567(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

struct<5> func_554(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_555(iParam0, joaat("character"), func_310(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_555(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_42(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_556(int iParam0)
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

int func_557(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_558(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (func_557(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_574(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_575(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_576(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_577(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_578(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_559(int iParam0, int iParam1)
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

int func_560(int iParam0)
{
	int iVar0;

	iVar0 = func_559(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_561(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_579(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_562(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_560(iParam0))
	{
		return;
	}
	iVar0 = func_559(iParam0, 1);
	if (!func_580(&(Global_1140484->f_2001[iVar0 /*192*/])))
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
	if (!func_581((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_582((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
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

int func_563(int iParam0)
{
	int iVar0;

	iVar0 = func_564(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 61)
	{
		return 0;
	}
	return 1;
}

int func_564(int iParam0, int iParam1)
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

void func_565(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_583();
			break;
		case -2103256604:
			func_584();
			break;
		case 692490127:
			PED::_0x66B1CB778D911F49(iVar0, 0f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 0, 0);
			GRAPHICS::_0xC5CB91D65852ED7E(func_585(iParam0));
			break;
		case 1870637439:
			GRAPHICS::_0xC5CB91D65852ED7E(func_585(iParam0));
			break;
		case 492808644:
			GRAPHICS::_0xC5CB91D65852ED7E(func_585(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_95(105, 1);
			break;
		case -106166013:
			GRAPHICS::_0xC5CB91D65852ED7E(func_585(iParam0));
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
			func_587(func_586(iParam0));
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
			func_588();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_580(17);
			break;
		case -824728332:
			func_580(16);
			break;
	}
}

int func_566(int iParam0)
{
	int iVar0;

	iVar0 = func_567(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_567(int iParam0, int iParam1)
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

int func_568(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_589(iParam0);
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
		iVar64 = func_537(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), 1);
		if ((Global_1140484->f_30603.f_2900[iVar64 /*31*/])->f_4 != iParam0)
		{
		}
		else if (&Global_1140484->f_30603.f_8871[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_590(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/]), (Global_1140484->f_30603.f_8871[iVar65 /*3*/])->f_1))
		{
		}
		else
		{
			Var1 = { func_591(&(Global_1140484->f_30603.f_8871[iVar65 /*3*/])) };
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

int func_569(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

void func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_560(iParam0))
	{
		return;
	}
	iVar0 = func_559(iParam0, 1);
	if (!func_580(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = (*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] + 1;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 1;
	if (!func_581((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_582((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
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

int func_571(var uParam0)
{
	var uVar0;

	if (uParam0->f_1 != 0)
	{
		uVar0 = func_592(794259616, uParam0->f_1, 1, "");
		return uVar0;
	}
	return 1;
}

void func_572(int iParam0)
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
			func_583();
			break;
		case -2103256604:
			func_584();
			break;
		case 692490127:
			PED::_0xFFD54D9FE71B966A(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			PED::_0xA5950E16B8F31052(iVar0, 1, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_585(iParam0));
			break;
		case 1870637439:
			GRAPHICS::ANIMPOSTFX_PLAY(func_585(iParam0));
			break;
		case 492808644:
			GRAPHICS::ANIMPOSTFX_PLAY(func_585(iParam0));
			break;
		case 125946764:
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_95(104, 1);
			break;
		case -106166013:
			GRAPHICS::ANIMPOSTFX_PLAY(func_585(iParam0));
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
			iVar2 = func_586(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_593(iParam0, 0));
			func_594(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_593(iParam0, 1));
			func_594(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_593(iParam0, 2));
			func_594(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_593(iParam0, 3));
			func_594(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_586(iParam0);
			func_594(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_586(iParam0);
			func_594(iVar2, 4, 1, -1, 0);
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
			func_595();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_580(17);
			break;
		case -824728332:
			func_580(16);
			break;
	}
}

void func_573(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_596(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_597(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1275573->f_8, sVar1, 0, 0, 0);
}

int func_574(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_575(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return 1;
	}
	return 0;
}

int func_576(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 >= 162 && iVar0 <= 169)
	{
		return 1;
	}
	return 0;
}

int func_577(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 >= 170 && iVar0 <= 170)
	{
		return 1;
	}
	return 0;
}

int func_578(int iParam0)
{
	int iVar0;

	iVar0 = func_510(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 160)
	{
		return 1;
	}
	return 0;
}

float func_579(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_598(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

int func_580(int iParam0)
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

int func_581(int iParam0)
{
	int iVar0;

	iVar0 = func_582(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return 0;
	}
	return 1;
}

int func_582(int iParam0, int iParam1)
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

void func_583()
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

void func_584()
{
	bool bVar0;

	bVar0 = false;
	if ((Global_1140484->f_18706[12 /*195*/])->f_194)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 263, bVar0);
}

char* func_585(int iParam0)
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

int func_586(int iParam0)
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

void func_587(int iParam0)
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

void func_588()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1275573->f_8);
}

int func_589(int iParam0)
{
	int iVar0;

	if (!func_566(iParam0))
	{
		return -1;
	}
	iVar0 = func_567(iParam0, 1);
	return &(Global_1140484->f_30603.f_8667[iVar0 /*3*/]);
}

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_545(iParam0))
	{
		return 0;
	}
	iVar0 = func_537(iParam0, 1);
	iVar2 = (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4;
	if (func_547(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])))
	{
		iVar3 = &Global_1140484->f_30603.f_8667[func_567(iVar2, 1) /*3*/];
		Var4 = { func_591(iVar3) };
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
			if (!func_599() && !func_600())
			{
				return 0;
			}
			return 1;
		case -2010146101:
			if (!func_599())
			{
				return 0;
			}
			return 1;
		case -2139108927:
			iVar1 = func_544(iParam1);
			if (iVar1 == &Global_1275573)
			{
				return 0;
			}
			return 1;
		case -2129621195:
			iVar1 = func_544(iParam1);
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
			iVar1 = func_544(iParam1);
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (iVar1 != &Global_1275573 && !func_377(&(Global_1275573->f_154[iVar1])))
			{
				return 0;
			}
			if (!func_601(512, iVar1))
			{
				return 0;
			}
			return 1;
		case -1503245593:
			if (!&Global_1954472->f_1616[8])
			{
				return 0;
			}
			iVar1 = func_544(iParam1);
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

struct<31> func_591(int iParam0)
{
	int iVar0;

	iVar0 = func_537(iParam0, 1);
	return *(Global_1140484->f_30603.f_2900[iVar0 /*31*/]);
}

bool func_592(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_598(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_593(int iParam0, int iParam1)
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

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_595()
{
	PED::SET_PED_CONFIG_FLAG(Global_1275573->f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1275573->f_8, 0.7f);
}

char* func_596(int iParam0)
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

char* func_597(int iParam0)
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

int func_598(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_602(iVar7);
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

bool func_599()
{
	return Global_1572887->f_6;
}

int func_600()
{
	if (!&Global_1048577)
	{
		return 0;
	}
	if (!func_49(func_48(0)))
	{
		return 0;
	}
	if (&Global_3145858 != -504335712)
	{
		return 0;
	}
	if (func_603(Global_524288->f_39792))
	{
		return 1;
	}
	return 0;
}

bool func_601(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

int func_602(int iParam0)
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

bool func_603(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

