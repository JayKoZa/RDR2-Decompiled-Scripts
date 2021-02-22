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
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	PED::SET_PED_RESET_FLAG(Global_34, 304, true);
	if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		iVar0 = func_2(Global_34, 0);
		if ((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("WEAPON_MELEE_TORCH")) && iVar0 != joaat("WEAPON_FISHINGROD"))
		{
			if (Global_17378 == 0)
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, 0, &Global_17379);
			}
		}
		iVar1 = func_2(Global_34, 1);
		if (WEAPON::_IS_WEAPON_REVOLVER(iVar1) || WEAPON::_IS_WEAPON_PISTOL(iVar1))
		{
			if (Global_17378 == 0)
			{
				WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, 1, &Global_17383);
			}
		}
		WEAPON::_HIDE_PED_WEAPONS(Global_34, 2, false);
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
	Global_1940311.f_10932 = 0;
	Global_1940311.f_10933 = 0;
	iVar2 = joaat("INGAME");
	if (func_3(0))
	{
		iVar2 = joaat("SHOP");
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
				if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("SATCHEL"), iVar2) != 0)
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
				if (((((!UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("SATCHEL")) || Global_1940311 == 2) || Global_13) || PED::IS_PED_DEAD_OR_DYING(Global_34, true)) || !func_9(255)) || func_10(512))
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
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("SATCHEL"));
	if (!func_10(512))
	{
		func_12(0);
	}
	else
	{
		func_12(1);
		func_13(512);
	}
	Global_1940311.f_1 = 0;
	Global_17406 = 0;
	Global_1940311.f_12 = 0;
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
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_4()
{
	if (func_14(1, 1))
	{
		return true;
	}
	if (Global_1940311.f_12)
	{
		return true;
	}
	return false;
}

int func_5()
{
	return Global_1940311.f_10932;
}

bool func_6()
{
	return Global_1940311.f_10933;
}

void func_7()
{
	Global_1940311.f_10933 = 0;
}

void func_8(int iParam0)
{
	if (Global_1940311.f_10932 != iParam0)
	{
		Global_1940311.f_10932 = iParam0;
		func_15();
	}
}

bool func_9(int iParam0)
{
	return !func_16(iParam0);
}

bool func_10(int iParam0)
{
	return (Global_1940311.f_10866 && iParam0) != 0;
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
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

void func_13(int iParam0)
{
	Global_1940311.f_10866 = (Global_1940311.f_10866 - (Global_1940311.f_10866 && iParam0));
}

bool func_14(bool bParam0, bool bParam1)
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

void func_15()
{
	Global_1940311.f_10933 = 1;
}

bool func_16(int iParam0)
{
	return func_17(1, iParam0);
}

bool func_17(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_18(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_19())
	{
		return func_18(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_18(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_18(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_19()
{
	return Global_1102219.f_3672;
}

