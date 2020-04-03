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
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	PED::SET_PED_RESET_FLAG(Global_34, 304, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		iVar0 = func_2(Global_34, 0);
		if ((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("weapon_melee_torch")) && iVar0 != joaat("weapon_fishingrod"))
		{
			if (Global_17140 == 0)
			{
				WEAPON::_0x6929E22158E52265(Global_34, 0, &Global_17141);
			}
		}
		iVar1 = func_2(Global_34, 1);
		if (WEAPON::_0xC212F1D05A8232BB(iVar1) || WEAPON::_0xDDC64F5E31EEDAB6(iVar1))
		{
			if (Global_17140 == 0)
			{
				WEAPON::_0x6929E22158E52265(Global_34, 1, &Global_17145);
			}
		}
		WEAPON::_0xFCCC886EDE3C63EC(Global_34, 2, 0);
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("weapon_unarmed"), 0);
	Global_1939231->f_10516 = 0;
	Global_1939231->f_10517 = 0;
	iVar2 = -1723036365;
	if (func_3(0))
	{
		iVar2 = joaat("shop");
	}
	while (!func_4())
	{
		PED::SET_PED_RESET_FLAG(Global_34, 304, true);
		switch (func_5())
		{
			case 0:
				if (func_6())
				{
					func_7();
				}
				if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-4058091, iVar2) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
			case 1:
				if (func_6())
				{
					func_7();
				}
				if (((((!UIAPPS::_IS_APP_ACTIVE(-4058091) || &Global_1939231 == 2) || Global_13) || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || !func_9(255)) || func_10(512))
				{
					func_8(2);
				}
				else
				{
					func_11();
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				break;
			case 2:
				if (func_6())
				{
					func_7();
					func_1();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	UIAPPS::_CLOSE_APP_BY_HASH(-4058091);
	if (!func_10(512))
	{
		func_12(0);
	}
	else
	{
		func_12(1);
		func_13(512);
	}
	Global_1939231->f_1 = 0;
	Global_17168 = 0;
	Global_1939231->f_12 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_4()
{
	if (func_14(1, 1))
	{
		return 1;
	}
	if (Global_1939231->f_12)
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	return Global_1939231->f_10516;
}

bool func_6()
{
	return Global_1939231->f_10517;
}

void func_7()
{
	Global_1939231->f_10517 = 0;
}

void func_8(int iParam0)
{
	if (Global_1939231->f_10516 != iParam0)
	{
		Global_1939231->f_10516 = iParam0;
		func_15();
	}
}

bool func_9(int iParam0)
{
	return !func_16(iParam0);
}

bool func_10(int iParam0)
{
	return (Global_1939231->f_10451 && iParam0) != 0;
}

void func_11()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PHONE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_NEXT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RADIAL_MENU_SLOT_NAV_PREV"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
}

void func_12(bool bParam0)
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

void func_13(int iParam0)
{
	Global_1939231->f_10451 = (Global_1939231->f_10451 - (Global_1939231->f_10451 && iParam0));
}

int func_14(bool bParam0, bool bParam1)
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

void func_15()
{
	Global_1939231->f_10517 = 1;
}

bool func_16(int iParam0)
{
	return func_17(1, iParam0);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_18(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_19())
	{
		return func_18(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_18(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

bool func_18(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_19()
{
	return Global_1099294->f_339;
}

