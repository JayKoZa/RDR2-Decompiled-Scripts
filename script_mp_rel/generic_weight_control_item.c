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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	uVar0 = ScriptParam_0.f_1;
	while (!func_1(0, 0) && !func_2())
	{
		func_3(&uVar0);
		BUILTIN::WAIT(0);
	}
	func_4(1);
	func_5();
}

bool func_1(bool bParam0, bool bParam1)
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

bool func_2()
{
	if (iLocal_15 == 9)
	{
		return true;
	}
	return false;
}

void func_3(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	func_6();
	func_7(1, 0, 1, 0);
	switch (iLocal_15)
	{
		case 0:
			func_8(1);
			WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(Global_34, 249, true);
			PED::SET_PED_CONFIG_FLAG(Global_34, 334, true);
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_34, false, 0, false);
			}
			func_9(*uParam0);
			func_10(&uLocal_18, 1);
			func_11(1);
			break;
		case 1:
			if (func_12(&uLocal_18) > 1f)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_13(iLocal_16)))
				{
					if (func_7(0, 0, 0, 0))
					{
						func_14(*uParam0, 8);
					}
					func_11(2);
				}
			}
			break;
		case 2:
			if (!func_7(1, 1, 1, 1))
			{
				TASK::TASK_PLAY_ANIM(Global_34, func_13(iLocal_16), func_15(iLocal_16), 4f, -4f, -1, 0, 0f, false, 1, false, 0, false);
			}
			func_10(&uLocal_18, 1);
			func_11(3);
			break;
		case 3:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			if (func_12(&uLocal_18) > 2.3f)
			{
				if (!func_7(1, 0, 0, 0))
				{
					if (!PED::IS_PED_RAGDOLL(Global_34))
					{
						PED::SET_PED_TO_RAGDOLL(Global_34, 0, 1, 0, false, false, false);
					}
					PED::RESET_PED_RAGDOLL_TIMER(Global_34);
					CAM::DO_SCREEN_FADE_OUT(2500);
					PED::_0x89F5E7ADECCCB49C(Global_34, "very_drunk");
					PED::_0x406CCF555B04FAD3(Global_34, 1, 0.6f);
					func_16(0.3f);
					func_10(&uLocal_18, 1);
					func_11(4);
				}
				else
				{
					func_14(*uParam0, iLocal_16);
				}
			}
			break;
		case 4:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_34);
			}
			if (CAM::IS_SCREEN_FADED_OUT() && func_12(&uLocal_18) > 1.5f)
			{
				if (!func_7(1, 0, 0, 0))
				{
					func_10(&uLocal_18, 1);
					func_16(0.03f);
					func_11(5);
				}
				else
				{
					func_14(*uParam0, 8);
				}
				func_17(uParam0);
			}
			break;
		case 5:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_34);
			}
			if (func_12(&uLocal_18) > 1.5f)
			{
				CAM::DO_SCREEN_FADE_IN(2500);
				func_11(6);
			}
			break;
		case 6:
			if (func_7(1, 0, 0, 0))
			{
				func_14(*uParam0, iLocal_16);
			}
			else
			{
				PED::_0x3AE3552E7C207CC5(Global_34, "NMBS_DRUNK_GETUPS", 1);
			}
			if (func_12(&uLocal_18) > 2.3f)
			{
				if (!TASK::IS_PED_GETTING_UP(Global_34))
				{
					func_11(7);
				}
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_34);
			}
			break;
		case 7:
			if (((!func_7(1, 0, 0, 1) && !PED::IS_PED_FALLING(Global_34)) && !ENTITY::IS_ENTITY_IN_WATER(Global_34)) && !func_18(Global_34, 12))
			{
				TASK::TASK_PLAY_ANIM(Global_34, func_13(iLocal_17), func_15(iLocal_17), 2f, -2f, -1, 68222992, 0f, false, 66048, false, 0, false);
			}
			func_19(1);
			func_10(&uLocal_18, 1);
			func_11(8);
			break;
		case 8:
			if (func_12(&uLocal_18) > 1.75f)
			{
				PED::SET_PED_CONFIG_FLAG(Global_34, 249, false);
				PED::SET_PED_CONFIG_FLAG(Global_34, 334, false);
				func_11(9);
			}
			break;
		case 9:
			break;
	}
}

void func_4(bool bParam0)
{
	CAM::_0x4285804FD65D8066("DRUNK_SHAKE", 0);
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	GRAPHICS::_0x37D7BDBA89F13959("PlayerDrunk01");
	PED::_0x58F7DB5BD8FA2288(Global_34);
	PED::_0x88A95BB640FC186F(Global_34);
	PED::_0x406CCF555B04FAD3(Global_34, 1, 0f);
	func_8(0);
	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_34, 249, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, 249, false);
	}
	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_34, 334, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_34, 334, false);
	}
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1296859.f_8, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1296859.f_8, 103, true);
}

bool func_7(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (((PED::IS_PED_DEAD_OR_DYING(Global_34, true) || PED::_IS_PED_LASSOED(Global_34)) || PED::_GET_LASSOER_OF_PED(Global_34)) || CAM::_0x81DCFD13CF39920E())
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_34) && bParam0)
	{
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_34) && iParam1)
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_34, 0) && bParam3)
	{
		return true;
	}
	if (((PED::_0x84D0BF2B21862059(Global_34) || PED::GET_PED_CONFIG_FLAG(Global_34, 227, true)) || func_20(Global_34)) && bParam2)
	{
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
		return true;
	}
	return false;
}

void func_8(int iParam0)
{
	Global_1293332.f_12 = iParam0;
}

void func_9(int iParam0)
{
	if (PED::IS_PED_MALE(Global_34))
	{
		if (iParam0 == joaat("CONSUMABLE_TONIC_WEIGHT_LOSS") || iParam0 == joaat("CONSUMABLE_TONIC_POTENT_WEIGHT_LOSS"))
		{
			iLocal_16 = 4;
			iLocal_17 = 5;
			STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_16));
		}
		else
		{
			iLocal_16 = 6;
			iLocal_17 = 7;
			STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_16));
		}
	}
	else if (iParam0 == joaat("CONSUMABLE_TONIC_WEIGHT_LOSS") || iParam0 == joaat("CONSUMABLE_TONIC_POTENT_WEIGHT_LOSS"))
	{
		iLocal_16 = 0;
		iLocal_17 = 1;
		STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_16));
	}
	else
	{
		iLocal_16 = 2;
		iLocal_17 = 3;
		STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_16));
	}
}

void func_10(var uParam0, bool bParam1)
{
	if (bParam1 || !func_21(uParam0))
	{
		func_22(uParam0);
	}
}

void func_11(int iParam0)
{
	iLocal_15 = iParam0;
}

float func_12(var uParam0)
{
	if (!func_21(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_23(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_24() - uParam0->f_1);
}

char* func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 1:
			return "script_mp@naturalist@player_potions@female@skinny";
		case 2:
			return "script_mp@naturalist@player_potions@female@fat";
		case 3:
			return "script_mp@naturalist@player_potions@female@fat";
		case 4:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 5:
			return "script_mp@naturalist@player_potions@male@skinny";
		case 6:
			return "script_mp@naturalist@player_potions@male@fat";
		case 7:
			return "script_mp@naturalist@player_potions@male@fat";
		default:
			break;
	}
	return "";
}

void func_14(var uParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(2500);
	}
	if (iParam1 != 8)
	{
		TASK::STOP_ANIM_TASK(Global_34, func_13(iParam1), func_15(iParam1), -4f);
	}
	func_17(&uParam0);
	func_11(7);
}

char* func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "passout_skinny_female";
		case 1:
			return "recover_skinny_upper_female";
		case 2:
			return "passout_fat_female";
		case 3:
			return "recover_fat_upper_female";
		case 4:
			return "passout_skinny_male";
		case 5:
			return "recover_skinny_upper_male";
		case 6:
			return "passout_fat_male";
		case 7:
			return "recover_fat_upper_male";
		case 8:
			return "";
		default:
			break;
	}
	return "";
}

void func_16(float fParam0)
{
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 1f);
	}
	GRAPHICS::_0x5199405EABFBD7F0("PlayerDrunk01");
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01");
	}
	PED::_0x58F7DB5BD8FA2288(Global_34);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fParam0);
	GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", fParam0);
}

void func_17(var uParam0)
{
	float fVar0;

	fVar0 = func_25(13, 2);
	if (*uParam0 == joaat("CONSUMABLE_TONIC_WEIGHT_GAIN"))
	{
		func_27(func_26(joaat("USED"), 340025142), 1);
		if (fVar0 < 25f)
		{
			func_28(75f, 1);
		}
		else if (fVar0 >= 25f && fVar0 < 50f)
		{
			func_28(50f, 1);
		}
		else
		{
			func_28(25f, 1);
		}
	}
	else if (*uParam0 == joaat("CONSUMABLE_TONIC_WEIGHT_LOSS"))
	{
		func_27(func_26(joaat("USED"), 1644594284), 1);
		if (fVar0 > 75f)
		{
			func_28(-75f, 1);
		}
		else if (fVar0 <= 75f && fVar0 > 50f)
		{
			func_28(-50f, 1);
		}
		else
		{
			func_28(-25f, 1);
		}
	}
	else if (*uParam0 == joaat("CONSUMABLE_TONIC_POTENT_WEIGHT_GAIN"))
	{
		func_27(func_26(joaat("USED"), 340025142), 1);
		func_28(100f, 1);
	}
	else
	{
		func_27(func_26(joaat("USED"), 1644594284), 1);
		func_28(-100f, 1);
	}
}

bool func_18(int iParam0, int iParam1)
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, iParam1, false);
	return func_29(iVar0);
}

void func_19(bool bParam0)
{
	Global_1913638 = !bParam0;
	if (Global_1913638)
	{
		Global_1913638.f_1 = MISC::GET_GAME_TIMER();
	}
}

bool func_20(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	if (((PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_IS_PED_USING_SCENARIO_HASH(iParam0, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return true;
	}
	return false;
}

bool func_21(var uParam0)
{
	return func_30(*uParam0, 1);
}

void func_22(var uParam0)
{
	func_31(uParam0, 0f);
}

bool func_23(var uParam0)
{
	return func_30(*uParam0, 2);
}

float func_24()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

float func_25(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_32(1);
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

struct<2> func_26(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_28(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_25(13, 2);
	iVar1 = func_33(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_34(fVar0, 0f, 100f);
	iVar2 = func_33(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956200.f_1431.f_107 = func_35();
		func_36(&(Global_1956200.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_37(13, fVar0, 2);
	Global_1956200.f_1431.f_99 = iParam1;
}

bool func_29(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_30(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_31(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_24() - fParam1);
	func_38(uParam0, 1);
	func_39(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_32(int iParam0)
{
	return func_41(func_40(iParam0));
}

int func_33(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 100f);
	return BUILTIN::ROUND(((fVar0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

float func_34(float fParam0, float fParam1, float fParam2)
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

var func_35()
{
	return Global_1902818;
}

void func_36(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_42(*uParam0);
	iVar1 = func_43(*uParam0);
	iVar2 = func_44(*uParam0);
	iVar3 = func_45(*uParam0);
	iVar4 = func_46(*uParam0);
	iVar5 = func_47(*uParam0);
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
	iVar6 = func_48(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_48(iVar1, iVar0);
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
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_37(int iParam0, float fParam1, int iParam2)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_32(2);
	}
	func_51(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1296859.f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1296859.f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_40(int iParam0)
{
	return func_52(&(Global_1956200.f_1565), iParam0, 1);
}

int func_41(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_42(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_53(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_43(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_44(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_45(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_46(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_47(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1)
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

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_54(uParam0, iParam6);
	func_55(uParam0, iParam5);
	func_56(uParam0, iParam4);
	func_57(uParam0, iParam3);
	func_58(uParam0, iParam2);
	func_59(uParam0, iParam1);
}

bool func_50(int iParam0)
{
	if (func_60(iParam0))
	{
		return true;
	}
	else if (func_61(iParam0))
	{
		return true;
	}
	return false;
}

void func_51(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_32(1);
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

bool func_52(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_53(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_56(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_43(*uParam0);
	iVar1 = func_42(*uParam0);
	if (iParam1 < 1 || iParam1 > func_48(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_57(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_58(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_59(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_60(int iParam0)
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

bool func_61(int iParam0)
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

