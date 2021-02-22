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
	struct<62> Local_15 = { 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
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
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	bool bVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Local_15, 0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = true;
	while (bVar0)
	{
		if (func_2(128) || func_3(&Local_15))
		{
			bVar0 = false;
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (func_4() || func_5())
			{
				if (!func_2(8192))
				{
					if (!func_6(&Local_15, 4))
					{
						func_7(Local_15.f_28);
					}
					func_8(0);
					func_9(8192);
				}
			}
		}
		else if (func_4() || func_5())
		{
			if (func_2(8192))
			{
				if (!func_6(&Local_15, 4))
				{
					func_10(Local_15.f_28);
				}
				func_11(0);
				func_12(8192);
			}
		}
		func_13(&Local_15);
		func_14();
		func_15();
		func_16(&Local_15);
		switch (func_17(&Local_15))
		{
			case 0:
				func_18();
				func_19();
				func_20(&Local_15);
				func_21();
				func_22();
				func_23();
				func_9(256);
				func_24(&Local_15);
				func_25(&Local_15, 1);
				break;
			case 1:
				func_19();
				if (func_26(&Local_15))
				{
					func_24(&Local_15);
					func_25(&Local_15, 2);
				}
				break;
			case 2:
				func_19();
				if (func_27(&Local_15))
				{
					func_28(948, 0);
					func_29(&Local_15);
					func_30(&Local_15);
					func_31(&Local_15, 0);
					func_25(&Local_15, 3);
				}
				break;
			case 3:
				if (!func_32())
				{
					func_33(&Local_15);
				}
				func_34(&(Local_15.f_61));
				func_35(&(Local_15.f_61));
				func_36(&Local_15);
				func_37(&Local_15);
				func_38(&Local_15);
				if (func_39(Local_15.f_5[12], 1))
				{
					func_40(20);
					func_25(&Local_15, 4);
				}
				if (func_41(&Local_15))
				{
					if (func_42(&Local_15))
					{
						func_43(&Local_15, 0);
					}
				}
				break;
			case 4:
				func_1(&Local_15, 1);
				func_25(&Local_15, 5);
				break;
			case 5:
				if (func_44(Global_34, 0, 1, 0) != joaat("WEAPON_KIT_CAMERA_ADVANCED"))
				{
					func_12(256);
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_15, 0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, bool bParam1)
{
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
	GRAPHICS::_0x9F6D859C80708B26(0, 1);
	if (func_45(uParam0->f_5[0]))
	{
		HUD::_UIPROMPT_REMOVE_GROUP(func_46(uParam0->f_5[0]), -1469232623);
	}
	if (func_45(uParam0->f_5[12]))
	{
		HUD::_UIPROMPT_REMOVE_GROUP(func_46(uParam0->f_5[12]), -1469232623);
	}
	func_47(uParam0);
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		PED::_0xF1C03A5352243A30(Global_34);
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
	}
	func_23();
	func_48(uParam0);
	func_49(uParam0);
	if (func_50(Global_34, 0))
	{
		Global_1958008 = 1;
	}
	func_7(uParam0->f_28);
	func_51(uParam0->f_28);
	func_8(2);
	func_52(2);
	func_8(0);
	func_52(0);
	func_53(1);
	func_54(&(uParam0->f_5));
	func_55(uParam0);
	func_56(&(uParam0->f_61));
	func_57();
	if (bParam1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Global_34, 1, 1, 0, 0);
	}
}

bool func_2(int iParam0)
{
	return func_58(Global_1301321, iParam0);
}

bool func_3(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (Global_1958008)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1958008 = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1120070[iVar0 /*2115*/].f_14 == 1)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		iVar0++;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SWIMMING(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::_0x7FC84E85D98F063D(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::_IS_PED_LASSOED(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::_IS_PED_CLIMBING_LADDER(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_IN_MELEE_COMBAT(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_FALLING(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
		if (PED::IS_PED_RAGDOLL(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
	}
	if (!func_59(joaat("WEAPON_KIT_CAMERA_ADVANCED"), 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940258.f_38 = joaat("WEAPON_UNARMED");
		return true;
	}
	if (!func_60(Global_34, 0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_61(0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (Global_1956123.f_1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_62())
	{
		if ((func_63(16) || func_63(37)) || func_64(Global_1915715.f_20241.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return true;
		}
	}
	if (PED::_0x336B3D200AB007CB(Global_34, ENTITY::GET_ENTITY_COORDS(Global_34, true, false), 10f, 256) > 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_65())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_34, true)))
	{
		func_66("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (Global_1940258.f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return true;
	}
	if (func_44(Global_34, 0, 1, 0) != joaat("WEAPON_KIT_CAMERA_ADVANCED"))
	{
		switch (func_67(uParam0))
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				break;
		}
	}
	return false;
}

bool func_4()
{
	return func_2(32);
}

bool func_5()
{
	return func_2(64);
}

bool func_6(var uParam0, int iParam1)
{
	return func_58(uParam0->f_55, iParam1);
}

void func_7(int iParam0)
{
	func_69(func_68(iParam0));
}

void func_8(int iParam0)
{
	func_69(func_70(iParam0));
}

void func_9(int iParam0)
{
	func_71(&Global_1301321, iParam0);
}

void func_10(int iParam0)
{
	func_72(func_68(iParam0));
}

void func_11(int iParam0)
{
	func_72(func_70(iParam0));
}

void func_12(int iParam0)
{
	func_73(&Global_1301321, iParam0);
}

void func_13(var uParam0)
{
	if (func_17(uParam0) >= 0 && func_17(uParam0) <= 3)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (func_74(PLAYER::PLAYER_ID(), 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
		}
	}
	func_75();
	switch (func_67(uParam0))
	{
		case 0:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_DOF"), false);
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PED::SET_PED_RESET_FLAG(Global_34, 21, true);
			if (func_76(uParam0->f_5[7], 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -310714049, false);
			}
			else if (func_76(uParam0->f_5[8], 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, -1089155097, false);
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
			break;
	}
	if (func_67(uParam0) != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_77(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
}

void func_14()
{
	func_78(2);
	func_78(4);
	func_78(8);
	func_78(16);
	func_78(32);
	func_78(32768);
	func_78(65536);
	func_78(1048576);
	func_78(128);
	func_78(256);
	func_78(512);
	func_78(1024);
	func_78(2048);
	func_78(1);
	func_78(4096);
	func_78(16384);
}

void func_15()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(12);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(15);
}

void func_16(var uParam0)
{
	int iVar0;

	if (!func_6(uParam0, 131072))
	{
		iVar0 = GRAPHICS::_0xB28894CD7408BD0C();
		switch (iVar0)
		{
			case 1:
				break;
			case 2:
				break;
			case 0:
				uParam0->f_25 = func_79();
				uParam0->f_26 = func_80();
				func_81(uParam0, 1);
				func_82(uParam0, 131072);
				func_83(uParam0);
				break;
		}
	}
}

int func_17(var uParam0)
{
	return uParam0->f_62;
}

void func_18()
{
	HUD::_TEXT_DATABASE_REQUEST(func_84(2));
	STREAMING::REQUEST_ANIM_DICT(func_84(0));
	STREAMING::REQUEST_CLIP_SET(func_84(1));
	GRAPHICS::_0x5199405EABFBD7F0(func_70(0));
	GRAPHICS::_0x5199405EABFBD7F0(func_70(1));
}

void func_19()
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

void func_20(var uParam0)
{
	uParam0->f_27 = 1f;
	uParam0->f_56 = -1;
	uParam0->f_57 = -1;
	uParam0->f_33 = 1;
	uParam0->f_72 = 0;
	GRAPHICS::_0xA42EDF1E88734A7E();
}

void func_21()
{
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
}

void func_22()
{
	func_57();
	Global_1301321.f_1 = ITEMSET::CREATE_ITEMSET(true);
}

void func_23()
{
	func_12(1);
	func_12(16);
	func_12(32);
	func_12(64);
	func_12(256);
	func_12(128);
}

void func_24(var uParam0)
{
	uParam0->f_54 = MISC::GET_GAME_TIMER();
}

void func_25(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

bool func_26(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (GRAPHICS::_0xBF2DD155B2ADCD0A(func_70(0)))
	{
		iVar0 = 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A(func_70(1)))
	{
		iVar0 = 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_84(2)))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(func_84(1)))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_84(0)))
	{
		iVar0 = 0;
	}
	if (!AUDIO::_0xD9130842D7226045(func_84(6), 0))
	{
		if (func_85(uParam0) > 7000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 <= (14 - 1))
	{
		iVar1 = iVar0;
		if (!func_86(&(uParam0->f_5[iVar1]), iVar1))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

void func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_87(iParam0, &iVar0, &iVar1);
	if (!func_88(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_89(iVar0, iVar1);
}

void func_29(var uParam0)
{
	uParam0->f_29 = func_90(uParam0->f_29, 0);
	uParam0->f_30 = func_90(uParam0->f_28, 1);
	func_91(uParam0->f_29);
	func_91(uParam0->f_30);
}

void func_30(var uParam0)
{
	uParam0->f_25 = func_79();
	uParam0->f_26 = func_80();
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel0", " ");
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_21, "photoModeLabel1", " ");
	func_83(uParam0);
}

void func_31(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam1)
	{
		case 0:
			func_53(0);
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 4 || iVar2 == 0)
				{
					if (iVar1 == 3 && !func_93(uParam0))
					{
						func_94(uParam0->f_5[iVar1], 0, 1, 1);
						func_82(uParam0, 32);
					}
					else
					{
						func_94(uParam0->f_5[iVar1], 1, 1, 1);
					}
					func_94(uParam0->f_5[iVar1], 1, 1, 1);
					func_95(uParam0->f_5[iVar1], 1, 1);
				}
				else
				{
					func_94(uParam0->f_5[iVar1], 0, 1, 1);
					func_95(uParam0->f_5[iVar1], 0, 1);
				}
				iVar0++;
			}
			if (func_44(Global_34, 0, 1, 0) != joaat("WEAPON_KIT_CAMERA_ADVANCED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_KIT_CAMERA_ADVANCED"), true, 0, false, false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, true, true, true, false);
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 3 || iVar2 == 1)
				{
					if (iVar1 == 6 || iVar1 == 8)
					{
						func_94(uParam0->f_5[iVar1], 0, 1, 1);
						func_95(uParam0->f_5[iVar1], 0, 1);
					}
					else
					{
						func_94(uParam0->f_5[iVar1], 1, 1, 1);
						func_95(uParam0->f_5[iVar1], 1, 1);
					}
				}
				else
				{
					func_94(uParam0->f_5[iVar1], 0, 1, 1);
					func_95(uParam0->f_5[iVar1], 0, 1);
				}
				iVar0++;
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_KIT_CAMERA_ADVANCED"), true, 0, false, false);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, true, true, true, false);
			func_96(uParam0);
			func_97(uParam0);
			break;
		case 2:
			func_11(1);
			iVar0 = 0;
			while (iVar0 <= (14 - 1))
			{
				iVar1 = iVar0;
				iVar2 = func_92(iVar1);
				if (iVar2 == 3 || iVar2 == 2)
				{
					if (iVar1 == 10 || iVar1 == 9)
					{
						switch (func_98(uParam0))
						{
							case 0:
								func_94(uParam0->f_5[iVar1], 1, 1, 1);
								func_95(uParam0->f_5[iVar1], 1, 1);
								break;
							case 1:
								func_94(uParam0->f_5[iVar1], 0, 1, 1);
								func_95(uParam0->f_5[iVar1], 0, 1);
								break;
						}
					}
					else if (iVar1 == 5 || iVar1 == 4)
					{
						switch (func_98(uParam0))
						{
							case 0:
								func_94(uParam0->f_5[iVar1], 0, 1, 1);
								func_95(uParam0->f_5[iVar1], 0, 1);
								break;
							case 1:
								func_94(uParam0->f_5[iVar1], 1, 1, 1);
								func_95(uParam0->f_5[iVar1], 1, 1);
								break;
						}
					}
					else
					{
						func_94(uParam0->f_5[iVar1], 1, 1, 1);
						func_95(uParam0->f_5[iVar1], 1, 1);
					}
				}
				else
				{
					func_94(uParam0->f_5[iVar1], 0, 1, 1);
					func_95(uParam0->f_5[iVar1], 0, 1);
				}
				iVar0++;
			}
			func_96(uParam0);
			func_97(uParam0);
			break;
	}
}

bool func_32()
{
	return Global_1896738.f_382;
}

void func_33(var uParam0)
{
	if (func_6(uParam0, 16))
	{
		HUD::_0xC9CAEAEEC1256E54(959420967);
	}
	switch (func_67(uParam0))
	{
		case 0:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, func_84(5), 1, 0, 0, 0);
			if (func_99(func_70(1)) || func_99(func_70(0)))
			{
				return;
			}
			func_100(uParam0);
			func_101(uParam0);
			if ((func_39(uParam0->f_5[3], 1) && func_6(uParam0, 65536)) && func_93(uParam0))
			{
				func_102(uParam0, 2);
				return;
			}
			if (func_39(uParam0->f_5[2], 1))
			{
				func_102(uParam0, 1);
				return;
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_103();
			}
			break;
		case 1:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, func_84(3), 1, 0, 0, 0);
			func_104(uParam0);
			break;
		case 2:
			PAD::_SET_CONTROL_CONTEXT(4, 1487066970);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1469232623, func_84(4), 1, 0, 0, 0);
			CAM::_0x3C8F74E8FE751614();
			func_105(uParam0);
			break;
	}
}

void func_34(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || func_58(Global_1301321, 16))
	{
		func_106(uParam0);
	}
}

void func_35(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || func_58(Global_1301321, 16))
	{
		func_107();
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
		{
			return;
		}
		func_108(uParam0);
	}
	if (func_58(Global_1301321, 16))
	{
		func_73(&Global_1301321, 16);
	}
}

void func_36(var uParam0)
{
	int iVar0;
	bool bVar1;

	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_70(0)))
		{
			func_109(&iVar0);
			if (func_6(uParam0, 524288))
			{
				if (func_110() <= 0)
				{
					if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || func_111(iVar0, 1)) || (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_112(iVar0)))
					{
						func_113();
						func_81(uParam0, 524288);
					}
				}
			}
			else
			{
				bVar1 = false;
				if (func_110() > 0)
				{
					bVar1 = true;
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_114(iVar0)) && func_115(iVar0)) && !func_111(iVar0, 1))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					func_116(0, 255, 0, 128);
					func_82(uParam0, 524288);
				}
			}
		}
		else if (func_6(uParam0, 524288))
		{
			func_113();
			func_81(uParam0, 524288);
		}
	}
}

void func_37(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	if (func_109(&iVar0))
	{
		if (func_111(iVar0, 1))
		{
			if (!func_6(uParam0, 2097152))
			{
				bVar1 = true;
				func_82(uParam0, 2097152);
			}
		}
		else if (func_6(uParam0, 2097152))
		{
			bVar1 = true;
			func_81(uParam0, 2097152);
		}
	}
	else if (func_111(iVar0, 1))
	{
		bVar1 = true;
		func_81(uParam0, 2097152);
	}
	if (bVar1)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 30, 2, func_6(uParam0, 2097152));
	}
}

void func_38(var uParam0)
{
	if (func_6(uParam0, 262144))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
		{
			_NAMESPACE77::_0x00A15B94CBA4F76F(uParam0->f_20);
			func_81(uParam0, 1);
			func_81(uParam0, 262144);
		}
	}
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

int func_40(int iParam0)
{
	if (AUDIO::_0x4AD019591E94C064(func_84(iParam0), Global_34, func_84(6), -2))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY(func_84(iParam0), Global_34, func_84(6), false, 0, 1);
		return 1;
	}
	return 0;
}

bool func_41(var uParam0)
{
	if (uParam0->f_65 != 2 && uParam0->f_65 != 1)
	{
		return false;
	}
	return uParam0->f_2;
}

bool func_42(var uParam0)
{
	struct<8> Var0;
	bool bVar19;
	int iVar20;

	switch (uParam0->f_63)
	{
		case 0:
			if (uParam0->f_25 >= uParam0->f_26 && !Global_1958005)
			{
				if (uParam0->f_20 == 0)
				{
					Var0.f_2 = 0;
					Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
					Var0.f_7.f_3 = 0;
					uParam0->f_20 = func_118(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
					func_119(uParam0, 0);
					func_82(uParam0, 262144);
					return true;
				}
				func_82(uParam0, 1048576);
				func_119(uParam0, 0);
				func_82(uParam0, 262144);
			}
			if (!Global_1958005 && !func_6(uParam0, 1048576))
			{
				if (CAM::IS_GAMEPLAY_CAM_SHAKING())
				{
					CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
				}
				func_120(0);
				GRAPHICS::_0xD45547D8396F002A();
				if (GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO())
				{
					func_9(16);
					func_11(2);
					func_121(uParam0, 1);
				}
			}
			else
			{
				func_9(16);
				func_11(2);
				func_121(uParam0, 1);
			}
			break;
		case 1:
			bVar19 = false;
			if (!Global_1958005 && !func_6(uParam0, 1048576))
			{
				iVar20 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
				switch (iVar20)
				{
					case 1:
						break;
					case 0:
						GRAPHICS::_0x0D5B19C34068FEE7(1);
						func_122(0);
						if (GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0))
						{
							func_119(uParam0, 1);
							bVar19 = true;
						}
						break;
					case 2:
						func_122(0);
						func_119(uParam0, 0);
						bVar19 = true;
						break;
				}
			}
			else
			{
				func_119(uParam0, 0);
				bVar19 = true;
			}
			if (bVar19)
			{
				func_121(uParam0, 2);
			}
			break;
		case 2:
			if (func_99(func_70(2)))
			{
				return false;
			}
			if (AUDIO::_0x4AD019591E94C064(func_84(7), Global_34, func_84(6), -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY(func_84(7), Global_34, func_84(6), false, 0, 0);
			}
			func_123();
			func_81(uParam0, 1048576);
			func_121(uParam0, 0);
			return true;
	}
	return false;
}

void func_43(var uParam0, int iParam1)
{
	if (iParam1 != uParam0->f_2)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_44(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_45(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

int func_46(var uParam0)
{
	int iVar0;

	iVar0 = func_117(uParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1951255[iVar0 /*23*/].f_3;
}

void func_47(var uParam0)
{
	if (uParam0->f_69 == 1)
	{
		SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_70, 0);
	}
	uParam0->f_69 = 0;
}

void func_48(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
}

void func_49(var uParam0)
{
	func_124(&(uParam0->f_56));
	func_124(&(uParam0->f_57));
}

bool func_50(int iParam0, bool bParam1)
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
	return true;
}

void func_51(int iParam0)
{
	func_125(func_68(iParam0));
}

void func_52(int iParam0)
{
	func_125(func_70(iParam0));
}

void func_53(int iParam0)
{
	func_126(func_70(iParam0));
}

void func_54(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_127(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_55(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	func_128(uParam0);
	func_49(uParam0);
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	AUDIO::_0x531A78D6BF27014B(func_84(6));
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
	STREAMING::REMOVE_CLIP_SET(func_84(1));
	STREAMING::REMOVE_ANIM_DICT(func_84(0));
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_129(1);
	HUD::_TEXT_DATABASE_DELETE(func_84(2));
}

void func_56(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_57()
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1301321.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1301321.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1301321.f_1);
	}
}

bool func_58(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_59(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_130(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_131(iParam0);
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
			if (!func_132(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_133(iParam0))
			{
				return true;
			}
			break;
	}
	return func_134(iParam0, 0, 0, 0) >= iParam1;
}

bool func_60(int iParam0, int iParam1)
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
	if (func_58(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_58(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_58(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_61(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_62()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

int func_63(int iParam0)
{
	if (func_62())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	int iVar0;

	if (!func_135(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return Global_1940311.f_1;
}

var func_66(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_67(var uParam0)
{
	return uParam0->f_65;
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "No_PostFX_Applied";
		case 1:
			return "PhotoMode_FilterVintage01";
		case 2:
			return "PhotoMode_FilterVintage02";
		case 3:
			return "PhotoMode_FilterVintage03";
		case 4:
			return "PhotoMode_FilterVintage04";
		case 5:
			return "PhotoMode_FilterVintage05";
		case 6:
			return "PhotoMode_FilterVintage06";
		case 7:
			return "PhotoMode_FilterVintage07";
		case 8:
			return "PhotoMode_FilterVintage08";
		case 9:
			return "PhotoMode_FilterVintage09";
		case 10:
			return "PhotoMode_FilterVintage10";
		case 11:
			return "PhotoMode_FilterModern01";
		case 12:
			return "PhotoMode_FilterModern02";
		case 13:
			return "PhotoMode_FilterModern03";
		case 14:
			return "PhotoMode_FilterModern04";
		case 15:
			return "PhotoMode_FilterModern05";
		case 16:
			return "PhotoMode_FilterModern06";
		case 17:
			return "PhotoMode_FilterModern07";
		case 18:
			return "PhotoMode_FilterModern08";
		case 19:
			return "PhotoMode_FilterModern09";
		case 20:
			return "PhotoMode_FilterModern10";
		case 21:
			return "PhotoMode_FilterGame01";
		case 22:
			return "PhotoMode_FilterGame02";
		case 23:
			return "PhotoMode_FilterGame03";
		case 24:
			return "PhotoMode_FilterGame04";
		case 25:
			return "PhotoMode_FilterGame05";
		case 26:
			return "PhotoMode_FilterGame06";
		case 27:
			return "PhotoMode_FilterGame07";
		case 28:
			return "PhotoMode_FilterGame08";
		case 29:
			return "PhotoMode_FilterGame09";
		case 30:
			return "PhotoMode_FilterGame10";
		case 31:
			return "PhotoMode_FilterGame11";
		case 32:
			return "PhotoMode_FilterGame12";
		case 33:
			return "PhotoMode_FilterGame13";
		case 34:
			return "PhotoMode_FilterGame14";
		case 35:
			return "PhotoMode_FilterGame15";
		case 36:
			return "PhotoMode_FilterGame16";
		case 37:
			return "PhotoMode_FilterGame17";
		case 38:
			return "PhotoMode_FilterGame18";
		default:
			break;
	}
	return "No_PostFX_Applied";
}

void func_69(char* sParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sParam0);
	}
}

char* func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CameraViewfinderAdv";
		case 1:
			return "CameraTransitionBlinkAdv";
		case 2:
			return "CameraTakePictureAdv";
		default:
			break;
	}
	return "CameraViewfinder";
}

void func_71(var uParam0, int iParam1)
{
	func_137(uParam0, iParam1);
}

void func_72(char* sParam0)
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sParam0);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sParam0);
	}
}

void func_73(var uParam0, int iParam1)
{
	func_138(uParam0, iParam1);
}

bool func_74(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_58(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

void func_75()
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_34, 129, true);
	PED::SET_PED_RESET_FLAG(Global_34, 173, true);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		iVar0 = PED::GET_MOUNT(Global_34);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

bool func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		func_139(4);
	}
	func_139(2);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

void func_78(int iParam0)
{
	Global_1940144.f_39 = (Global_1940144.f_39 || iParam0);
}

int func_79()
{
	return GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
}

int func_80()
{
	return GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
}

void func_81(var uParam0, int iParam1)
{
	func_73(&(uParam0->f_55), iParam1);
}

void func_82(var uParam0, int iParam1)
{
	func_71(&(uParam0->f_55), iParam1);
}

void func_83(var uParam0)
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar0, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_25, "%i", &cVar0);
	StringConCat(&cVar0, " / ", 32);
	StringCopy(&cVar4, "", 32);
	MISC::_INT_TO_STRING(uParam0->f_26, "%i", &cVar4);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_6(uParam0, 131072))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, &cVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_22, " ");
	}
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FACE_HUMAN@GEN_MALE@PORTRAIT";
		case 1:
			return "facials@gen_male@portrait";
		case 2:
			return "CAMERA";
		case 3:
			return "CAM_CONG_HC";
		case 4:
			return "CAM_CONG_HSP";
		case 5:
			return "CAM_CONG_AC";
		case 6:
			return "CAMERA_SOUNDSET";
		case 7:
			return "Wind_On_Film";
		case 8:
			return "Zoom_In";
		case 9:
			return "Zoom_Out";
		case 10:
			return "zoom_in_single";
		case 11:
			return "zoom_out_single";
		case 12:
			return "Collapse_Camera";
		case 13:
			return "Place_Tripod";
		case 14:
			return "Expand_Camera";
		case 15:
			return "Take_Photo";
		case 16:
			return "Change_Expression";
		case 17:
			return "Change_Pose";
		case 18:
			return "Change_Filter";
		case 19:
			return "Change_Intensity";
		case 20:
			return "Put_Away";
		case 21:
			return "Remove_Tripod";
		default:
			break;
	}
	return "";
}

int func_85(var uParam0)
{
	return (MISC::GET_GAME_TIMER() - func_140(uParam0));
}

bool func_86(var uParam0, int iParam1)
{
	if (!func_45(*uParam0))
	{
		if ((((iParam1 == 9 || iParam1 == 10) || iParam1 == 5) || iParam1 == 4) || iParam1 == 6)
		{
			*uParam0 = func_143(func_141(iParam1), func_142(iParam1, 0), func_142(iParam1, 1), 0);
		}
		else
		{
			*uParam0 = func_144(func_141(iParam1), func_142(iParam1, 0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		func_145(*uParam0, -1469232623, 0, 1);
	}
	return true;
}

void func_87(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_88(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_146(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_147(iParam0))
	{
		return false;
	}
	if (func_148(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_149(iParam0, 1)) || func_150(32768))
	{
		if (!func_149(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_151())
	{
		return false;
	}
	return true;
}

void func_89(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_90(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		iVar0 = iParam0 + 1;
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 >= 39)
			{
				iVar0 = 0;
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_152(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = (iParam0 - 1);
		bVar1 = true;
		while (bVar1)
		{
			if (iVar0 < 0)
			{
				iVar0 = (39 - 1);
			}
			if (iVar0 == iParam0)
			{
				bVar1 = false;
				return iParam0;
			}
			if (func_152(iVar0))
			{
				bVar1 = false;
				return iVar0;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
	}
	return iVar0;
}

void func_91(int iParam0)
{
	func_153(func_68(iParam0));
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 5:
			return 3;
		case 4:
			return 3;
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 2;
		case 10:
			return 2;
		case 11:
			return 3;
		case 12:
			return 0;
		case 13:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_93(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	float fVar8;
	var uVar9;
	float fVar10;

	bVar0 = false;
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	fVar4 = ENTITY::GET_ENTITY_HEADING(Global_34);
	vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, fVar4, 0f, 4f, 0f) };
	if (func_154(Global_34, 1))
	{
		vVar5.f_2 = (vVar5.z + 1f);
	}
	else
	{
		vVar5.f_2 = (vVar5.z + 50f);
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar8, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar9, false);
	if (vVar1.z > fVar8)
	{
		if ((vVar1.z - fVar8) > 2f)
		{
			return false;
		}
	}
	else if ((fVar8 - vVar1.z) > 2f)
	{
		return false;
	}
	if (func_2(1024))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		return false;
	}
	if (PED::_0x50F124E6EF188B22(Global_34))
	{
		return false;
	}
	if (PED::_IS_PED_SLIDING(Global_34))
	{
		return false;
	}
	if (PED::IS_PED_FALLING(Global_34) || PED::_IS_PED_FALLING_2(Global_34))
	{
		return false;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar1, 2f) > 0)
	{
		return false;
	}
	if ((fVar8 - vVar1.z) > 1f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_34))
	{
		return false;
	}
	if (func_155(Global_34, 0))
	{
		return false;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
	{
		return false;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar5, 0, &(vVar5.f_2)) == 1)
	{
		return false;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar5.x, vVar5.y, fVar8, 0))
	{
		return false;
	}
	fVar10 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar5.x, vVar5.y, (fVar8 + fVar10), 3167))
	{
		bVar0 = true;
	}
	else
	{
		return false;
	}
	if (bVar0)
	{
		uParam0->f_49 = { vVar1.x, vVar1.y, (vVar1.z - 1f) };
		uParam0->f_52 = fVar4;
		uParam0->f_46 = { vVar5.x, vVar5.y, (fVar8 + fVar10) };
	}
	return true;
}

void func_94(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (bParam1)
	{
		func_156(iParam0, 4);
		if (bParam3)
		{
			func_157(iVar0, 1);
		}
		func_158(iVar0, 1);
	}
	else
	{
		func_159(iParam0, 4);
		func_158(iVar0, 0);
	}
}

void func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	func_157(iVar0, bParam1);
}

void func_96(var uParam0)
{
	uParam0->f_25 = func_79();
}

void func_97(var uParam0)
{
	func_83(uParam0);
	func_160(uParam0);
	func_161(uParam0);
}

int func_98(var uParam0)
{
	return uParam0->f_68;
}

bool func_99(char* sParam0)
{
	return GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0);
}

void func_100(var uParam0)
{
	func_162(uParam0);
	if ((MISC::GET_FRAME_COUNT() % 15) == 0)
	{
		if (func_93(uParam0) && !uParam0->f_71)
		{
			if (!func_6(uParam0, 65536))
			{
				func_82(uParam0, 65536);
			}
			if (func_6(uParam0, 32))
			{
				func_81(uParam0, 32);
			}
		}
		else
		{
			if (func_6(uParam0, 65536))
			{
				func_81(uParam0, 65536);
			}
			if (!func_6(uParam0, 32))
			{
				func_82(uParam0, 32);
			}
		}
	}
}

void func_101(var uParam0)
{
	if ((func_163(uParam0) || func_2(512)) || !func_6(uParam0, 131072))
	{
		if (!func_6(uParam0, 1))
		{
			func_82(uParam0, 1);
		}
	}
	else if (func_6(uParam0, 1) && !func_41(uParam0))
	{
		func_81(uParam0, 1);
	}
	switch (func_67(uParam0))
	{
		case 2:
			func_164(uParam0, 0, 1, 0);
			func_164(uParam0, 11, 2, 0);
			func_164(uParam0, 6, 512, 1);
			func_164(uParam0, 7, 8388608, 0);
			func_164(uParam0, 8, 4194304, 1);
			func_165(uParam0, 4, 4, 16384);
			func_164(uParam0, 10, 4096, 1);
			func_164(uParam0, 9, 8192, 1);
			func_164(uParam0, 5, 32768, 1);
			func_164(uParam0, 13, 1024, 0);
			if (func_6(uParam0, 128) || func_41(uParam0))
			{
				if (func_166(uParam0->f_5[10], 0))
				{
					func_94(uParam0->f_5[10], 0, 1, 1);
				}
			}
			else if (func_167(uParam0) == 0)
			{
				if (!func_166(uParam0->f_5[10], 0))
				{
					func_94(uParam0->f_5[10], 1, 1, 1);
				}
			}
			else if (func_166(uParam0->f_5[10], 0))
			{
				func_94(uParam0->f_5[10], 0, 1, 1);
			}
			break;
		case 1:
			func_164(uParam0, 0, 1, 0);
			func_164(uParam0, 4, 4, 0);
			func_164(uParam0, 5, 8, 0);
			func_164(uParam0, 11, 2, 0);
			break;
		case 0:
			if (func_2(2048))
			{
				if (!func_6(uParam0, 2048))
				{
					func_82(uParam0, 2048);
				}
			}
			else if (func_6(uParam0, 2048))
			{
				func_81(uParam0, 2048);
			}
			func_164(uParam0, 3, 32, 0);
			func_164(uParam0, 2, 2048, 0);
			break;
	}
}

void func_102(var uParam0, int iParam1)
{
	uParam0->f_65 = iParam1;
}

void func_103()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

void func_104(var uParam0)
{
	switch (func_168(uParam0))
	{
		case 0:
			if (uParam0->f_28 == 0)
			{
				func_82(uParam0, 4);
			}
			func_169(uParam0, 1);
			break;
		case 1:
			func_40(14);
			func_169(uParam0, 2);
			break;
		case 2:
			CAM::_0x90DA5BA5C2635416();
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				func_11(0);
				if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
				{
					GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", 0f);
				}
				GRAPHICS::_0x9F6D859C80708B26(1, 1);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
				PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), true);
				func_31(uParam0, 1);
				func_10(uParam0->f_28);
				GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
				func_170();
				func_82(uParam0, 16);
				func_169(uParam0, 3);
			}
			break;
		case 3:
			CAM::_0x90DA5BA5C2635416();
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			func_171(uParam0);
			func_172(uParam0);
			func_173(uParam0);
			func_174(uParam0);
			func_175(uParam0);
			func_101(uParam0);
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], 1))
			{
				func_40(15);
				func_43(uParam0, 1);
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_103();
				return;
			}
			if (!func_6(uParam0, 2) && ((func_39(uParam0->f_5[11], 1) || func_176()) || func_177()))
			{
				func_169(uParam0, 4);
				return;
			}
			break;
		case 4:
			if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
			{
				GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", func_178());
			}
			GRAPHICS::_0x9F6D859C80708B26(0, 1);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
			PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::GET_PLAYER_INDEX(), false);
			func_40(12);
			if (uParam0->f_28 > 0)
			{
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
			}
			if (uParam0->f_29 > 0)
			{
				func_7(uParam0->f_29);
				func_51(uParam0->f_29);
			}
			func_179();
			func_81(uParam0, 16);
			func_102(uParam0, 0);
			func_31(uParam0, 0);
			func_169(uParam0, 0);
			break;
	}
}

void func_105(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_180(uParam0) >= 3)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	}
	switch (func_180(uParam0))
	{
		case 0:
			func_181(uParam0, 0);
			func_82(uParam0, 32768);
			func_82(uParam0, 16384);
			func_182(uParam0, 1);
			uParam0->f_69 = 0;
			break;
		case 1:
			func_91(uParam0->f_28);
			func_40(13);
			func_182(uParam0, 2);
			break;
		case 2:
			if (func_183(uParam0))
			{
				func_11(0);
				if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
				{
					GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", 0f);
				}
				GRAPHICS::_0x9F6D859C80708B26(1, 1);
				func_184(uParam0);
				func_24(uParam0);
				func_10(uParam0->f_28);
				GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
				func_185();
				func_82(uParam0, 16);
				func_186(uParam0);
				func_31(uParam0, 2);
				func_182(uParam0, 3);
			}
			break;
		case 3:
			if (func_85(uParam0) > 1000)
			{
				func_53(1);
				func_182(uParam0, 4);
			}
			break;
		case 4:
			func_187(uParam0);
			func_188(uParam0);
			func_189(uParam0);
			func_172(uParam0);
			func_173(uParam0);
			func_174(uParam0);
			func_175(uParam0);
			func_190(uParam0);
			func_101(uParam0);
			if (func_99(func_70(1)))
			{
				return;
			}
			if (!func_6(uParam0, 2) && (func_39(uParam0->f_5[11], 1) || func_176()))
			{
				func_24(uParam0);
				func_11(1);
				func_40(21);
				func_182(uParam0, 5);
				return;
			}
			if (func_39(uParam0->f_5[1], 1))
			{
				func_103();
				return;
			}
			if (!func_6(uParam0, 1) && func_39(uParam0->f_5[0], 1))
			{
				func_40(15);
				func_43(uParam0, 1);
				return;
			}
			break;
		case 5:
			if (func_85(uParam0) > 500)
			{
				func_49(uParam0);
				if (uParam0->f_28 > 0)
				{
					func_7(uParam0->f_28);
					func_51(uParam0->f_28);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_KIT_CAMERA_ADVANCED"), true, 0, false, false);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, true, true, true, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
				func_191(uParam0);
				func_192();
				func_179();
				func_182(uParam0, 6);
			}
			break;
		case 6:
			func_47(uParam0);
			if (!PED::IS_PED_USING_ANY_SCENARIO(Global_34) && func_85(uParam0) > 1000)
			{
				bVar0 = true;
			}
			if (func_85(uParam0) > 3000)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (GRAPHICS::_0xEEF83A759AE06A27(joaat("PLAYERDRUNK01")))
				{
					GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerDrunk01", func_178());
				}
				GRAPHICS::_0x9F6D859C80708B26(0, 1);
				func_81(uParam0, 16);
				func_7(uParam0->f_28);
				func_51(uParam0->f_28);
				func_53(1);
				func_102(uParam0, 0);
				func_31(uParam0, 0);
				func_182(uParam0, 0);
			}
			break;
	}
}

void func_106(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	ENTITY::_0x59B57C4B06531E1E(ENTITY::GET_ENTITY_COORDS(Global_34, true, false), func_193(), iVar0, 1);
	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_194(Global_34, iVar1, 1, 1) > (func_193() + 10f)) || func_111(iVar3, 1))
			{
				func_195(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1))
		{
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
			bVar4 = false;
			if (!func_50(iVar3, 0) && !func_111(iVar3, 1))
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
				iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (PED::IS_PED_A_PLAYER(iVar3) && !PED::_0x0E2F43516F998269(iVar3))
				{
					bVar4 = true;
				}
				if (func_114(iVar3))
				{
					if (func_115(iVar3))
					{
						bVar4 = true;
					}
					if (PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar3)
					{
						bVar4 = true;
					}
					if (iVar2 == joaat("A_C_BAT_01"))
					{
						bVar4 = true;
					}
					if (func_196(iVar2))
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				func_197(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_1301321.f_1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = func_198(ENTITY::GET_ENTITY_MODEL(iVar1));
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (func_199(iVar1))
						{
							if (func_200(iVar2))
							{
								if (func_58(Global_1301321, 256) && iVar2 == Global_34)
								{
									if (!func_58(Global_1301321, 64))
									{
										func_201(iVar2);
									}
								}
							}
							else
							{
								func_201(iVar2);
							}
						}
						else
						{
							func_201(iVar2);
						}
					}
					else if (func_202(iVar2))
					{
						if (!func_199(iVar1))
						{
							func_201(iVar2);
						}
					}
					else if (!func_203(iVar2, iVar3))
					{
						func_201(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
	{
		iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, *uParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar2 = func_198(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					if (func_199(iVar0))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_200(iVar1))
						{
							if (func_58(Global_1301321, 256) && iVar1 == Global_34)
							{
								if (func_58(Global_1301321, 64))
								{
									func_197(iVar0, Global_1301321.f_1);
								}
							}
							else
							{
								func_197(iVar0, Global_1301321.f_1);
							}
						}
					}
				}
				else if (func_202(iVar1))
				{
					if (func_199(iVar0))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_200(iVar1))
						{
							func_197(iVar0, Global_1301321.f_1);
						}
					}
				}
				else if (func_204(iVar1, iVar2))
				{
					func_197(iVar0, Global_1301321.f_1);
				}
			}
		}
		iVar3++;
	}
}

bool func_109(int iParam0)
{
	int iVar0;

	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return true;
		}
	}
	return false;
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar2 = 0;
	if (ITEMSET::IS_ITEMSET_VALID(Global_1301321.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) > 0)
	{
		iVar2 = 0;
		while (iVar2 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) - 1))
		{
			iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1301321.f_1));
			if (ENTITY::_0x9A100F1CF4546629(iVar0) && PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX()) != MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1301321.f_1)))
			{
				iVar1++;
			}
			iVar2++;
		}
		return iVar1;
	}
	return 0;
}

bool func_111(int iParam0, bool bParam1)
{
	if (bParam1 && PED::_0x0E2F43516F998269(iParam0))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(iParam0))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, true))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
	{
		return true;
	}
	return false;
}

bool func_112(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

void func_113()
{
	GRAPHICS::_0x63011D0C7C6519E0(func_70(0), 0, 255, 255, 255, 255);
}

bool func_114(int iParam0)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (ENTITY::_0x9A100F1CF4546629(iVar0) && !PED::_0x0E2F43516F998269(iParam0))
	{
		return true;
	}
	return false;
}

bool func_115(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (((!PED::_0x118D476A6F1A13F1(iParam0) && !func_206(iParam0, 0)) && !func_112(iParam0)) && iVar0 != joaat("REL_DOMESTICATED_PET_ANIMAL"))
	{
		return true;
	}
	return false;
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::_0x63011D0C7C6519E0(func_70(0), 0, iParam0, iParam1, iParam2, iParam3);
}

int func_117(int iParam0)
{
	return iParam0;
}

var func_118(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

void func_119(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	bVar2 = func_67(uParam0) == 2;
	bVar3 = false;
	GRAPHICS::_0x2705D18C11B61046(bVar2);
	if (bParam1)
	{
		func_207();
		func_208();
	}
	func_209();
	bVar4 = false;
	if (func_109(&iVar0))
	{
		bVar4 = func_111(iVar0, 1);
		if (ITEMSET::IS_ITEMSET_VALID(Global_1301321.f_1) && !bVar4)
		{
			func_197(iVar0, Global_1301321.f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !bVar4)
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		if (iVar1 != uParam0->f_72)
		{
			bVar3 = true;
			uParam0->f_72 = iVar1;
		}
	}
	else if (ITEMSET::IS_ITEMSET_VALID(Global_1301321.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) > 0)
	{
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) - 1))
		{
			iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, Global_1301321.f_1));
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 != uParam0->f_72)
			{
				bVar3 = true;
				uParam0->f_72 = iVar1;
			}
			iVar5++;
		}
	}
	if (bVar3)
	{
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1301321.f_1);
	}
	TELEMETRY::_TELEMETRY_PHOTO_CAM(365468875, MISC::GET_HASH_KEY(func_210(uParam0->f_28)), uParam0->f_27, bVar2, 0, func_211(uParam0), iVar1, func_213(func_212(0)));
	if (bParam1)
	{
		uParam0->f_25++;
		func_97(uParam0);
	}
	func_214(&(uParam0->f_61));
}

void func_120(int iParam0)
{
	GRAPHICS::_0xCAB4DD2D5B2B7246(func_70(iParam0), 0f);
}

void func_121(var uParam0, int iParam1)
{
	uParam0->f_63 = iParam1;
}

void func_122(int iParam0)
{
	GRAPHICS::_0xCAB4DD2D5B2B7246(func_70(iParam0), 1f);
}

void func_123()
{
	func_73(&Global_1301321, 1);
}

void func_124(var uParam0)
{
	if (*uParam0 >= 0)
	{
		AUDIO::_0x3210BCB36AF7621B(*uParam0);
		*uParam0 = -1;
	}
}

void func_125(char* sParam0)
{
	GRAPHICS::_0x37D7BDBA89F13959(sParam0);
}

void func_126(char* sParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sParam0);
	}
}

void func_127(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_45(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_117(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_215(iVar0);
	*uParam0 = 0;
}

void func_128(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_58));
	}
}

void func_129(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_130(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_131(int iParam0)
{
	vector3 vVar0;

	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_130(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_216(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_217("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_218(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_219(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_220(iVar1);
				return true;
			}
			iVar3++;
		}
		func_220(iVar1);
	}
	return false;
}

bool func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_130(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_221(iParam0);
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
	iVar1 = func_222(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_223(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_224(iParam0);
	iVar2 = func_223(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_134(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_131(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_216(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_225(iParam0, 0);
	}
	if (func_226(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_227(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_228(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_227(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_136(int iParam0)
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

void func_137(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_139(int iParam0)
{
	Global_1903136.f_302 = (Global_1903136.f_302 || iParam0);
}

int func_140(var uParam0)
{
	return uParam0->f_54;
}

char* func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_TAKE_PHOTO";
		case 1:
			return "CAM_GALLERY";
		case 2:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_SELFIE";
		case 5:
			return "CAM_FILTER";
		case 4:
			return "CAM_INTENSITY";
		case 6:
			return "CAM_ZOOM";
		case 7:
			return "CAM_ZOOM";
		case 8:
			return "CAM_ZOOM";
		case 9:
			return "CAM_EXPRESSIONS";
		case 10:
			return "CAM_POSES";
		case 11:
			return "CAM_BACK";
		case 12:
			return "CAM_PUT_AWAY";
		case 13:
			return "ADV_CAM_FILTERS";
		default:
			break;
	}
	return "";
}

int func_142(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1201017346;
		case 1:
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		case 2:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_SELFIE");
		case 7:
			return -1089155097;
		case 8:
			return -310714049;
		case 4:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_EXPRESSION_PREV");
			}
			else
			{
				return joaat("INPUT_CAMERA_EXPRESSION_NEXT");
			}
			break;
		case 5:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_POSE_NEXT");
			}
			else
			{
				return joaat("INPUT_CAMERA_POSE_PREV");
			}
			break;
		case 6:
			if (bParam1)
			{
				return -1089155097;
			}
			else
			{
				return -310714049;
			}
			break;
		case 9:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_EXPRESSION_NEXT");
			}
			else
			{
				return joaat("INPUT_CAMERA_EXPRESSION_PREV");
			}
			break;
		case 10:
			if (bParam1)
			{
				return joaat("INPUT_CAMERA_POSE_NEXT");
			}
			else
			{
				return joaat("INPUT_CAMERA_POSE_PREV");
			}
			break;
		case 11:
			return joaat("INPUT_CAMERA_BACK");
		case 12:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 13:
			return -711736799;
	}
	return joaat("INPUT_CAMERA_TAKE_PHOTO");
}

int func_143(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_229(iVar0, 2))
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
		func_230(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_144(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_229(iVar0, 2))
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
		func_230(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_145(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_45(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_146(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_147(int iParam0)
{
	if (func_149(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0)
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

bool func_149(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_150(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_151()
{
	if (!func_231())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

bool func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-951341587);
		case 12:
			return UNLOCK::_UNLOCK_IS_VISIBLE(355797628);
		case 13:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1885541620);
		case 14:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1587645914);
		case 15:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1325269752);
		case 16:
			return UNLOCK::_UNLOCK_IS_VISIBLE(65073703);
		case 17:
			return UNLOCK::_UNLOCK_IS_VISIBLE(830543521);
		case 18:
			return UNLOCK::_UNLOCK_IS_VISIBLE(299289203);
		case 19:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-587023018);
		case 20:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-781188238);
		case 21:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1976306104);
		case 22:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-779958017);
		case 23:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1877599955);
		case 24:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1358340808);
		case 25:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-252816221);
		case 26:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-320798538);
		case 27:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1123146868);
		case 28:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-677732579);
		case 29:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1394960149);
		case 30:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-2076331328);
		case 31:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-599019401);
		case 32:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1985431160);
		case 33:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1151765962);
		case 34:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1449882070);
		case 35:
			return UNLOCK::_UNLOCK_IS_VISIBLE(464775907);
		case 36:
			return UNLOCK::_UNLOCK_IS_VISIBLE(278859029);
		case 37:
			return UNLOCK::_UNLOCK_IS_VISIBLE(-1223981588);
		case 38:
			return UNLOCK::_UNLOCK_IS_VISIBLE(1422895126);
		default:
			break;
	}
	return false;
}

void func_153(char* sParam0)
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sParam0);
	}
}

bool func_154(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_232(iVar0) || func_233(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_155(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_156(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_157(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_229(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_158(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_159(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_160(var uParam0)
{
	char cVar0[64];
	int iVar8;

	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cVar0, ": ", 64);
	iVar8 = uParam0->f_28;
	StringConCat(&cVar0, MISC::_CREATE_VAR_STRING(2, func_210(iVar8)), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_23, &cVar0);
}

void func_161(var uParam0)
{
	char cVar0[64];

	if (uParam0->f_28 > 0)
	{
		StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAM_PM_HUD_FILTINTEN"), 64);
		StringConCat(&cVar0, ": ", 64);
		StringConCat(&cVar0, func_234(BUILTIN::CEIL((uParam0->f_27 * 100f))), 64);
		StringConCat(&cVar0, "%", 64);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, &cVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_24, " ");
	}
}

int func_162(var uParam0)
{
	float fVar0;
	int iVar1;
	var uVar2;
	var uVar5;
	var uVar8;
	int iVar9;

	fVar0 = 0.17f;
	iVar1 = 0;
	switch (uParam0->f_69)
	{
		case 0:
			uParam0->f_70 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(uParam0->f_46 - Vector(0.2f, 0f, 0f), uParam0->f_46 + Vector(0.2f, 0f, 0f), fVar0, 3167, 0, 4);
			uParam0->f_69 = 1;
			break;
		case 1:
			iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_70, &iVar1, &uVar2, &uVar5, &uVar8);
			if (iVar1 > 0)
			{
			}
			if (iVar9 == 1)
			{
			}
			else
			{
				uParam0->f_69 = 0;
				uParam0->f_71 = iVar1 != 0;
				return uParam0->f_71;
			}
	}
	return 0;
}

bool func_163(var uParam0)
{
	if (PED::IS_PED_FALLING(Global_34) || PED::_IS_PED_SLIDING(Global_34))
	{
		return true;
	}
	if ((func_67(uParam0) == 2 && func_167(uParam0) >= 1) && func_167(uParam0) <= 5)
	{
		return true;
	}
	return false;
}

void func_164(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_166(uParam0->f_5[iParam1], 0))
		{
			func_94(uParam0->f_5[iParam1], 0, 1, 1);
			if (bParam3)
			{
				func_95(uParam0->f_5[iParam1], 0, 1);
			}
		}
	}
	else if (!func_166(uParam0->f_5[iParam1], 0))
	{
		func_94(uParam0->f_5[iParam1], 1, 1, 1);
		func_95(uParam0->f_5[iParam1], 1, 1);
	}
}

void func_165(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_6(uParam0, iParam3))
	{
		if (func_166(uParam0->f_5[iParam1], 0))
		{
			func_94(uParam0->f_5[iParam1], 0, 1, 1);
			func_95(uParam0->f_5[iParam1], 0, 1);
		}
	}
	else if (func_6(uParam0, iParam2) || func_41(uParam0))
	{
		if (func_166(uParam0->f_5[iParam1], 0))
		{
			func_94(uParam0->f_5[iParam1], 0, 1, 1);
		}
	}
	else if (!func_166(uParam0->f_5[iParam1], 0))
	{
		func_94(uParam0->f_5[iParam1], 1, 1, 1);
		func_95(uParam0->f_5[iParam1], 1, 1);
	}
}

bool func_166(int iParam0, bool bParam1)
{
	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	return !func_229(iParam0, 4);
}

int func_167(var uParam0)
{
	return uParam0->f_66;
}

int func_168(var uParam0)
{
	return uParam0->f_67;
}

void func_169(var uParam0, int iParam1)
{
	uParam0->f_67 = iParam1;
}

void func_170()
{
	func_9(32);
	func_12(64);
}

void func_171(var uParam0)
{
	if (func_45(uParam0->f_5[6]) && func_76(uParam0->f_5[6], 1))
	{
		if (func_235(uParam0->f_5[6], 1, 1) && func_236(uParam0) < 3)
		{
			func_237(uParam0);
			func_40(10);
			if (func_236(uParam0) >= 3)
			{
				func_94(uParam0->f_5[6], 0, 1, 1);
				func_95(uParam0->f_5[6], 0, 1);
				func_94(uParam0->f_5[8], 1, 1, 1);
				func_95(uParam0->f_5[8], 1, 1);
			}
		}
		else if (func_235(uParam0->f_5[6], 0, 1) && func_236(uParam0) > 1)
		{
			func_238(uParam0);
			func_40(11);
			if (func_236(uParam0) <= 1)
			{
				func_94(uParam0->f_5[6], 0, 1, 1);
				func_95(uParam0->f_5[6], 0, 1);
				func_94(uParam0->f_5[7], 1, 1, 1);
				func_95(uParam0->f_5[7], 1, 1);
			}
		}
	}
	else if (func_45(uParam0->f_5[7]) && func_76(uParam0->f_5[7], 1))
	{
		if (func_239(uParam0->f_5[7], 1))
		{
			func_237(uParam0);
			func_40(10);
			func_94(uParam0->f_5[7], 0, 1, 1);
			func_95(uParam0->f_5[7], 0, 1);
			func_94(uParam0->f_5[6], 1, 1, 1);
			func_95(uParam0->f_5[6], 1, 1);
		}
	}
	else if (func_45(uParam0->f_5[8]) && func_76(uParam0->f_5[8], 1))
	{
		if (func_239(uParam0->f_5[8], 1))
		{
			func_238(uParam0);
			func_40(11);
			func_94(uParam0->f_5[8], 0, 1, 1);
			func_95(uParam0->f_5[8], 0, 1);
			func_94(uParam0->f_5[6], 1, 1, 1);
			func_95(uParam0->f_5[6], 1, 1);
		}
	}
}

void func_172(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0->f_5[5]) && func_235(uParam0->f_5[5], 1, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, 1);
		uParam0->f_30 = func_90(uParam0->f_28, 1);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_91(uParam0->f_30);
		func_97(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_173(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0->f_5[5]) && func_235(uParam0->f_5[5], 0, 1))
	{
		iVar0 = uParam0->f_29;
		iVar1 = uParam0->f_30;
		uParam0->f_29 = uParam0->f_28;
		uParam0->f_28 = func_90(uParam0->f_29, 0);
		uParam0->f_30 = func_90(uParam0->f_28, 0);
		func_7(uParam0->f_29);
		if (uParam0->f_28 > 0)
		{
			func_10(uParam0->f_28);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
			if (func_6(uParam0, 4))
			{
				func_81(uParam0, 4);
			}
		}
		else if (uParam0->f_28 == 0)
		{
			if (!func_6(uParam0, 4))
			{
				func_82(uParam0, 4);
			}
		}
		func_40(18);
		func_91(uParam0->f_30);
		func_97(uParam0);
		if (uParam0->f_28 == iVar1)
		{
			func_51(iVar0);
		}
		else if (uParam0->f_28 == iVar0)
		{
			func_51(iVar1);
		}
	}
}

void func_174(var uParam0)
{
	if (func_45(uParam0->f_5[4]) && func_235(uParam0->f_5[4], 1, 1))
	{
		if (uParam0->f_27 < 1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 + 0.1f);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
		}
		func_97(uParam0);
	}
}

void func_175(var uParam0)
{
	if (func_45(uParam0->f_5[4]) && func_235(uParam0->f_5[4], 0, 1))
	{
		if (uParam0->f_27 > 0.1f)
		{
			func_40(19);
			uParam0->f_27 = (uParam0->f_27 - 0.1f);
			GRAPHICS::_0xCAB4DD2D5B2B7246(func_68(uParam0->f_28), uParam0->f_27);
		}
		func_97(uParam0);
	}
}

bool func_176()
{
	if (CAM::_0x74F1D22EFA71FAB8() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return true;
	}
	return false;
}

bool func_177()
{
	if (PED::_IS_PED_SLIDING(Global_34))
	{
		return true;
	}
	return false;
}

float func_178()
{
	float fVar0;
	float fVar1;

	fVar0 = ((Global_1940085.f_15.f_1 - func_240()) * (1f / (1f - func_240())));
	fVar1 = ((Global_1940085.f_15.f_7 * fVar0) + (Global_1940085.f_15.f_6 * (1f - fVar0)));
	return (fVar1 * Global_1940085.f_15.f_3);
}

void func_179()
{
	func_12(64);
	func_12(32);
}

int func_180(var uParam0)
{
	return uParam0->f_64;
}

void func_181(var uParam0, int iParam1)
{
	uParam0->f_68 = iParam1;
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_64 = iParam1;
}

bool func_183(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	var uVar8;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;

	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(Global_34);
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 0f, 4f, 0f) };
	if (func_154(Global_34, 1))
	{
		vVar4.f_2 = (vVar4.z + 1f);
	}
	else
	{
		vVar4.f_2 = (vVar4.z + 50f);
	}
	bVar9 = false;
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &fVar7, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar8, false);
	if (vVar0.z > fVar7)
	{
		if ((vVar0.z - fVar7) > 2f)
		{
			bVar9 = true;
		}
	}
	else if ((fVar7 - vVar0.z) > 2f)
	{
		bVar9 = true;
	}
	vVar10 = { ENTITY::GET_ENTITY_ROTATION(Global_34, 2) };
	vVar13 = { vVar10.x, vVar10.y, (vVar10.z - 180f) };
	fVar16 = 50f;
	if (!bVar9)
	{
		uParam0->f_49 = { vVar0.x, vVar0.y, (vVar0.z - 1f) };
		uParam0->f_52 = fVar3;
		uParam0->f_46 = { vVar4.x, vVar4.y, (fVar7 + 1f) };
	}
	uParam0->f_87 = vVar13.x;
	uParam0->f_86 = vVar13.z;
	uParam0->f_53 = vVar10.z;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		uParam0->f_35 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_46, vVar13, fVar16, true, 2);
	}
	uParam0->f_36 = 25f;
	uParam0->f_36.f_1 = 2f;
	uParam0->f_36.f_2 = 128f;
	uParam0->f_36.f_3 = 30f;
	uParam0->f_36.f_4 = 30f;
	uParam0->f_36.f_5 = 90f;
	uParam0->f_36.f_6 = 1;
	uParam0->f_36.f_7 = 0;
	uParam0->f_36.f_8 = 1;
	uParam0->f_36.f_9 = 1;
	uParam0->f_91 = { vVar13 };
	uParam0->f_94 = 0f;
	uParam0->f_95 = 0.5f;
	uParam0->f_91 = (uParam0->f_91 + 1f);
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_35, &(uParam0->f_36));
	CAM::_0x9F97E85EC142255E(uParam0->f_35, 0);
	CAM::_0x42ED56B02E05D109(uParam0->f_35, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_35, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_40(14);
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, false, false, true, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	PED::_0x2208438012482A1A(Global_34, false, false);
	func_241(uParam0);
	return true;
}

void func_184(var uParam0)
{
	int iVar0;

	iVar0 = func_117(uParam0->f_5[13]);
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, "ADV_CAM_POSES");
	func_82(uParam0, 4096);
	func_82(uParam0, 8192);
	func_81(uParam0, 16384);
	func_81(uParam0, 32768);
	if (uParam0->f_28 == 0)
	{
		func_82(uParam0, 4);
	}
	func_95(uParam0->f_5[4], 1, 1);
	func_181(uParam0, 1);
}

void func_185()
{
	func_9(64);
	func_12(32);
}

void func_186(var uParam0)
{
	vector3 vVar0;
	vector3 vVar25;
	vector3 vVar28;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_3 = 0;
	vVar0.f_4 = 21030;
	vVar25 = { func_243(uParam0->f_46 - func_242(PLAYER::GET_PLAYER_INDEX())) };
	vVar28 = { func_242(PLAYER::GET_PLAYER_INDEX()) + vVar25 * Vector(2f, 2f, 2f) };
	vVar0 = { vVar28 };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_34, &vVar0);
}

void func_187(var uParam0)
{
	func_244(uParam0);
	func_245(uParam0);
	if (uParam0->f_77 > 16)
	{
		if ((uParam0->f_94 - 0.07f) > -10f)
		{
			if (uParam0->f_77 > 100)
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 - 0.6f);
				uParam0->f_94 = (uParam0->f_94 - (0.07f * 3f));
			}
			else
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 - 0.2f);
				uParam0->f_94 = (uParam0->f_94 - 0.07f);
			}
		}
	}
	if (uParam0->f_77 < -16)
	{
		if ((uParam0->f_94 + 0.07f) < 10f)
		{
			if (uParam0->f_77 < -100)
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 + 0.6f);
				uParam0->f_94 = (uParam0->f_94 + (0.07f * 3f));
			}
			else
			{
				uParam0->f_91.f_2 = (uParam0->f_91.f_2 + 0.2f);
				uParam0->f_94 = (uParam0->f_94 + 0.07f);
			}
		}
	}
	if (uParam0->f_78 > 16)
	{
		if ((uParam0->f_95 - 0.07f) > -10f)
		{
			if (uParam0->f_78 > 100)
			{
				uParam0->f_91 = (uParam0->f_91 - 0.6f);
				uParam0->f_95 = (uParam0->f_95 - (0.07f * 3f));
			}
			else
			{
				uParam0->f_91 = (uParam0->f_91 - 0.2f);
				uParam0->f_95 = (uParam0->f_95 - 0.07f);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if ((uParam0->f_95 + 0.07f) < 10f)
		{
			if (uParam0->f_78 < -100)
			{
				uParam0->f_91 = (uParam0->f_91 + 0.6f);
				uParam0->f_95 = (uParam0->f_95 + (0.07f * 3f));
			}
			else
			{
				uParam0->f_91 = (uParam0->f_91 + 0.2f);
				uParam0->f_95 = (uParam0->f_95 + 0.07f);
			}
		}
	}
	CAM::SET_CAM_PARAMS(uParam0->f_35, uParam0->f_46, uParam0->f_91, 50f, 0, 1, 1, 2, 0, 0);
}

void func_188(var uParam0)
{
	if (func_235(uParam0->f_5[9], 0, 1))
	{
		uParam0->f_31++;
		if (uParam0->f_31 >= 8)
		{
			uParam0->f_31 = 0;
		}
		func_246(uParam0);
	}
	if (func_235(uParam0->f_5[9], 1, 1))
	{
		uParam0->f_31 = (uParam0->f_31 - 1);
		if (uParam0->f_31 < 0)
		{
			uParam0->f_31 = (8 - 1);
		}
		func_246(uParam0);
	}
}

void func_189(var uParam0)
{
	switch (func_167(uParam0))
	{
		case 0:
			if (func_235(uParam0->f_5[10], 0, 1))
			{
				uParam0->f_32++;
				if (uParam0->f_32 >= 4)
				{
					uParam0->f_32 = 0;
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_247(uParam0, 1);
			}
			if (func_235(uParam0->f_5[10], 1, 1))
			{
				uParam0->f_32 = (uParam0->f_32 - 1);
				if (uParam0->f_32 < 0)
				{
					uParam0->f_32 = (4 - 1);
				}
				func_82(uParam0, 2);
				func_82(uParam0, 1);
				func_82(uParam0, 128);
				func_247(uParam0, 1);
			}
			break;
		case 1:
			func_11(1);
			func_247(uParam0, 2);
			break;
		case 2:
			func_241(uParam0);
			func_24(uParam0);
			func_247(uParam0, 3);
			break;
		case 3:
			if (PED::_IS_PED_USING_SCENARIO_HASH(Global_34, func_248(uParam0->f_32)) && func_85(uParam0) > 1500)
			{
				func_247(uParam0, 4);
			}
			if (func_85(uParam0) > 7000)
			{
				func_247(uParam0, 4);
				func_24(uParam0);
			}
			break;
		case 4:
			func_53(1);
			func_247(uParam0, 5);
			func_24(uParam0);
			break;
		case 5:
			if (TASK::_0x02EBBB3989B7E695(Global_34) || func_85(uParam0) > 7000)
			{
				func_81(uParam0, 2);
				func_81(uParam0, 1);
				func_81(uParam0, 128);
				func_247(uParam0, 0);
			}
			break;
	}
}

void func_190(var uParam0)
{
	int iVar0;

	if (func_39(uParam0->f_5[13], 1))
	{
		iVar0 = func_117(uParam0->f_5[13]);
		switch (func_98(uParam0))
		{
			case 0:
				func_82(uParam0, 4096);
				func_82(uParam0, 8192);
				func_81(uParam0, 16384);
				func_81(uParam0, 32768);
				if (uParam0->f_28 == 0)
				{
					func_82(uParam0, 4);
				}
				func_95(uParam0->f_5[4], 1, 1);
				HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, "ADV_CAM_POSES");
				func_181(uParam0, 1);
				break;
			case 1:
				func_82(uParam0, 16384);
				func_82(uParam0, 32768);
				func_81(uParam0, 4096);
				func_81(uParam0, 8192);
				func_94(uParam0->f_5[4], 0, 1, 1);
				func_95(uParam0->f_5[4], 0, 1);
				HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, "ADV_CAM_FILTERS");
				func_181(uParam0, 0);
				break;
		}
	}
}

void func_191(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_35))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_35, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_35, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_192()
{
	if (func_249(Global_34, 242628503))
	{
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
	}
}

float func_193()
{
	return 130f;
}

float func_194(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_195(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iParam0, iParam1);
		}
	}
}

bool func_196(int iParam0)
{
	if (func_58(Global_1301321, 4096))
	{
		switch (iParam0)
		{
			case joaat("A_C_CHICKEN_01"):
			case joaat("A_C_ELK_01"):
			case joaat("A_C_TURKEYWILD_01"):
			case joaat("A_C_BUCK_01"):
			case joaat("A_C_ALLIGATOR_01"):
			case joaat("A_C_ARMADILLO_01"):
			case joaat("A_C_BIGHORNRAM_01"):
			case joaat("A_C_POSSUM_01"):
			case joaat("A_C_SKUNK_01"):
			case joaat("A_C_BADGER_01"):
			case joaat("A_C_WOLF"):
			case joaat("A_C_BEAR_01"):
			case joaat("A_C_MOOSE_01"):
			case joaat("A_C_GOAT_01"):
			case joaat("A_C_TURTLESNAPPING_01"):
			case joaat("A_C_COW"):
			case joaat("A_C_SHEEP_01"):
			case joaat("A_C_COUGAR_01"):
			case joaat("A_C_FOX_01"):
			case joaat("A_C_GILAMONSTER_01"):
			case joaat("A_C_COYOTE_01"):
			case joaat("A_C_OX_01"):
			case joaat("A_C_BEARBLACK_01"):
			case joaat("A_C_BEAVER_01"):
			case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			case joaat("A_C_DOGAMERICANFOXHOUND_01"):
			case joaat("A_C_DEER_01"):
			case joaat("A_C_RACCOON_01"):
			case joaat("A_C_BUFFALO_01"):
			case joaat("A_C_PANTHER_01"):
			case joaat("A_C_PRONGHORN_01"):
			case joaat("A_C_BOAR_01"):
				return true;
		}
	}
	return false;
}

void func_197(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

int func_198(int iParam0)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		iVar0 = PED::_0xA65AA1ACE81E5A77(iParam0);
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_199(int iParam0)
{
	return (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0));
}

bool func_200(int iParam0)
{
	return (PED::_0x5102307CE88798EB(iParam0) && PED::IS_TRACKED_PED_VISIBLE(iParam0));
}

void func_201(int iParam0)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		PED::_0x3088634CF8C819CF(iParam0);
	}
	func_195(iVar0, Global_1301321.f_1);
}

bool func_202(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_250(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (((((func_199(iVar0) && !func_111(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_34, iVar0, 3455)) && func_251(iParam0, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */)) && func_200(iParam0)) && func_252(iParam0) >= func_253(iParam1))
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_205(iParam0);
	if (((func_199(iVar0) && !func_111(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_34, iVar0, 3455)) && func_251(iParam0, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0.2f, 1061158912 /* Float: 0.75f */))
	{
		if (!PED::_0x5102307CE88798EB(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (func_200(iParam0) && func_252(iParam0) >= func_253(iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_205(int iParam0)
{
	return iParam0;
}

bool func_206(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
	{
		if (bParam1)
		{
			return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
		}
		return true;
	}
	return false;
}

void func_207()
{
	char cVar0[32];
	int iVar4;
	int iVar5;

	StringCopy(&cVar0, "", 32);
	iVar4 = func_254();
	if (func_255(iVar4))
	{
		MemCopy(&cVar0, {func_256(iVar4)}, 4);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		iVar5 = func_257();
		StringCopy(&cVar0, func_258(iVar5), 32);
	}
	GRAPHICS::_0xD1031B83AC093BC7(&cVar0);
}

void func_208()
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;

	StringCopy(&cVar0, "", 16);
	StringCopy(&cVar2, "", 16);
	iVar4 = func_259();
	if (func_260(iVar4))
	{
		StringCopy(&cVar0, func_261(iVar4), 16);
		StringCopy(&cVar2, func_262(iVar4), 16);
	}
	GRAPHICS::_0x9937FACBBF267244(&cVar0);
	GRAPHICS::_0x8952E857696B8A79(&cVar2);
}

void func_209()
{
	func_71(&Global_1301321, 1);
}

char* func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAM_PM_F_V0";
		case 1:
			return "CAM_PM_F_V1";
		case 2:
			return "CAM_PM_F_V2";
		case 3:
			return "CAM_PM_F_V3";
		case 4:
			return "CAM_PM_F_V4";
		case 5:
			return "CAM_PM_F_V5";
		case 6:
			return "CAM_PM_F_V6";
		case 7:
			return "CAM_PM_F_V7";
		case 8:
			return "CAM_PM_F_V8";
		case 9:
			return "CAM_PM_F_V9";
		case 10:
			return "CAM_PM_F_V10";
		case 11:
			return "CAM_PM_F_M1";
		case 12:
			return "CAM_PM_F_M2";
		case 13:
			return "CAM_PM_F_M3";
		case 14:
			return "CAM_PM_F_M4";
		case 15:
			return "CAM_PM_F_M5";
		case 16:
			return "CAM_PM_F_M6";
		case 17:
			return "CAM_PM_F_M7";
		case 18:
			return "CAM_PM_F_M8";
		case 19:
			return "CAM_PM_F_M9";
		case 20:
			return "CAM_PM_F_M10";
		case 21:
			return "CAM_PM_F_S1";
		case 22:
			return "CAM_PM_F_S2";
		case 23:
			return "CAM_PM_F_S3";
		case 24:
			return "CAM_PM_F_S4";
		case 25:
			return "CAM_PM_F_S5";
		case 26:
			return "CAM_PM_F_S6";
		case 27:
			return "CAM_PM_F_S7";
		case 28:
			return "CAM_PM_F_S8";
		case 29:
			return "CAM_PM_F_S9";
		case 30:
			return "CAM_PM_F_S10";
		case 31:
			return "CAM_PM_F_S11";
		case 32:
			return "CAM_PM_F_S12";
		case 33:
			return "CAM_PM_F_S13";
		case 34:
			return "CAM_PM_F_S14";
		case 35:
			return "CAM_PM_F_S15";
		case 36:
			return "CAM_PM_F_S16";
		case 37:
			return "CAM_PM_F_S17";
		case 38:
			return "CAM_PM_F_S18";
		default:
			break;
	}
	return "CAM_PM_F_V0";
}

int func_211(var uParam0)
{
	switch (func_67(uParam0))
	{
		case 1:
			if (CAM::_0x8B1A5FE7E41E52B2())
			{
				return 0;
			}
			else if (CAM::_0xB6A80E1E3A5444F1())
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			return BUILTIN::FLOOR(uParam0->f_36.f_3);
	}
	return 0;
}

struct<2> func_212(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_213(struct<2> Param0)
{
	return func_263(Param0);
}

void func_214(var uParam0)
{
	int iVar0;
	int iVar1;

	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (!func_111(iVar1, 1))
			{
				func_264(iVar1, ENTITY::_GET_PED_ANIMAL_TYPE(iVar1), 1, 0);
			}
		}
	}
}

void func_215(int iParam0)
{
	if (!func_265(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_131(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_266(iParam0, 1399091007))
	{
		func_267(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_217(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_227(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_218(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_219(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_220(int iParam0)
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

int func_221(int iParam0)
{
	struct<2> Var0;

	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_222(int iParam0)
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

int func_223(var uParam0, int iParam1)
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

int func_224(int iParam0)
{
	int iVar0;

	iVar0 = func_221(iParam0);
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

int func_225(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_268(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_270(&Var0, func_269(0));
	}
	if (!func_271(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_220(iVar14);
	return uVar15;
}

int func_226(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_227(bool bParam0)
{
	if (func_272() == -1)
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

struct<4> func_228(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_273(iParam0, bParam1, 0) };
	return func_274(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_229(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_230(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_157(iParam0, 1);
	func_158(iParam0, 1);
	func_159(iParam0, 128);
}

bool func_231()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

int func_232(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case joaat("HEA_TUNNEL_02"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

char* func_234(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_235(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

int func_236(var uParam0)
{
	return uParam0->f_33;
}

void func_237(var uParam0)
{
	if (uParam0->f_33 < 3)
	{
		uParam0->f_33++;
	}
}

void func_238(var uParam0)
{
	if (uParam0->f_33 > 1)
	{
		uParam0->f_33 = (uParam0->f_33 - 1);
	}
}

bool func_239(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

float func_240()
{
	return 0.5f;
}

void func_241(var uParam0)
{
	int iVar0;

	func_275(uParam0);
	func_40(17);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, func_248(uParam0->f_32), 0, true, 0, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Global_34, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

Vector3 func_242(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

Vector3 func_243(vector3 vParam0)
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

void func_244(var uParam0)
{
	uParam0->f_73 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MOVE_LR")) * 127f));
	uParam0->f_74 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MOVE_UD")) * 127f));
	uParam0->f_77 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_LR")) * 127f));
	uParam0->f_78 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_LOOK_UD")) * 127f));
}

void func_245(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (PAD::GET_CONTROL_VALUE(0, -1089155097) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(0, -310714049) - 127);
	if (uParam0->f_65 == 1)
	{
		iVar2 = CAM::GET_RENDERING_CAM();
	}
	else
	{
		iVar2 = uParam0->f_35;
	}
	if (iVar0 > 0)
	{
		if (uParam0->f_36.f_3 < 90f)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 + 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(iVar2, &(uParam0->f_36));
			if (func_76(uParam0->f_5[8], 1))
			{
				func_94(uParam0->f_5[8], 0, 1, 1);
				func_95(uParam0->f_5[8], 0, 1);
			}
			if (!func_76(uParam0->f_5[6], 1))
			{
				func_94(uParam0->f_5[6], 1, 1, 1);
				func_95(uParam0->f_5[6], 1, 1);
			}
			if (uParam0->f_56 < 0)
			{
				func_276(&(uParam0->f_56), 8);
			}
		}
		else
		{
			if (!func_76(uParam0->f_5[8], 1))
			{
				func_94(uParam0->f_5[8], 1, 1, 1);
				func_95(uParam0->f_5[8], 1, 1);
			}
			if (func_76(uParam0->f_5[6], 1))
			{
				func_94(uParam0->f_5[6], 0, 1, 1);
				func_95(uParam0->f_5[6], 0, 1);
			}
			func_124(&(uParam0->f_56));
		}
	}
	else
	{
		func_124(&(uParam0->f_56));
	}
	if (iVar0 == 0 && iVar1 > 0)
	{
		if (uParam0->f_36.f_3 > 30f)
		{
			uParam0->f_36.f_3 = (uParam0->f_36.f_3 - 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(iVar2, &(uParam0->f_36));
			if (func_76(uParam0->f_5[7], 1))
			{
				func_94(uParam0->f_5[7], 0, 1, 1);
				func_95(uParam0->f_5[7], 0, 1);
			}
			if (!func_76(uParam0->f_5[6], 1))
			{
				func_94(uParam0->f_5[6], 1, 1, 1);
				func_95(uParam0->f_5[6], 1, 1);
			}
			if (uParam0->f_57 < 0)
			{
				func_276(&(uParam0->f_57), 9);
			}
		}
		else
		{
			if (!func_76(uParam0->f_5[7], 1))
			{
				func_94(uParam0->f_5[7], 1, 1, 1);
				func_95(uParam0->f_5[7], 1, 1);
			}
			if (func_76(uParam0->f_5[6], 1))
			{
				func_94(uParam0->f_5[6], 0, 1, 1);
				func_95(uParam0->f_5[6], 0, 1);
			}
			func_124(&(uParam0->f_57));
		}
	}
	else
	{
		func_124(&(uParam0->f_57));
	}
}

void func_246(var uParam0)
{
	func_40(16);
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, func_277(uParam0->f_31), func_84(0));
}

void func_247(var uParam0, int iParam1)
{
	uParam0->f_66 = iParam1;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("WORLD_HUMAN_STARE_STOIC");
		case 1:
			return joaat("WORLD_HUMAN_STERNGUY_IDLES");
		case 2:
			return joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT");
		case 3:
			return joaat("WORLD_PLAYER_DYNAMIC_KNEEL");
		default:
			break;
	}
	return joaat("WORLD_HUMAN_STARE_STOIC");
}

bool func_249(int iParam0, int iParam1)
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

int func_250(int iParam0)
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
		if (iParam0 == Global_1903136[iVar0 /*43*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_251(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_278(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_252(int iParam0)
{
	return (func_279(iParam0) * 100f);
}

float func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.01f;
		case 1:
			return 0.02f;
		case 2:
			return 0.02f;
		case 3:
			return 0.03f;
		case 4:
			return 0.03f;
	}
	return 0.03f;
}

var func_254()
{
	return Global_1893587.f_2;
}

bool func_255(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_256(int iParam0)
{
	char[] cVar0[8];

	if (!func_255(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887339[iParam0 /*36*/].f_23;
}

int func_257()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_35);
}

char* func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

var func_259()
{
	return Global_1896622.f_41;
}

bool func_260(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_272() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_272() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

int func_263(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_280(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_264(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	func_281(iParam0);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	func_282(iParam1, iVar0, vVar1, bParam2, iParam3);
	if (bParam2 && joaat("AT_HORSE") == iParam1)
	{
		COMPENDIUM::COMPENDIUM_HORSE_OBSERVED(iParam0, iParam3);
	}
}

bool func_265(int iParam0)
{
	return func_229(iParam0, 2);
}

int func_266(int iParam0, int iParam1)
{
	if (!func_130(iParam0, 0))
	{
		return func_284(func_283(iParam0), iParam1);
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

void func_267(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_269(bool bParam0)
{
	int iVar0;

	iVar0 = func_227(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_274(923904168, func_285(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_274(923904168, func_285(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_274(923904168, func_285(bParam0), -740156546, 0);
}

void func_270(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_271(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_227(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_272()
{
	return Global_1572887.f_13;
}

struct<5> func_273(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_285(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_131(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_274(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_269(bParam1) };
			if (bParam2 && func_286(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_287(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_287(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_288(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_289(bParam1) };
			switch (func_221(iParam0))
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
			if (func_290(iParam0, -1823706425))
			{
				Var0 = { func_274(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_290(iParam0, -1483207246))
			{
				Var0 = { func_274(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_274(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_290(iParam0, -1653629781))
			{
				Var0 = { func_274(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_291(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_290(iParam0, -1653629781))
			{
				Var0 = { func_274(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_274(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_130(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_227(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_275(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
	if (!PED::_0x3BDFCF25B58B0415(Global_34) && PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	}
	ENTITY::SET_ENTITY_HEADING(Global_34, uParam0->f_52);
}

void func_276(var uParam0, int iParam1)
{
	if (*uParam0 < 0)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xF1C5310FEAA36B48(*uParam0, func_84(iParam1), Global_34, func_84(6), 0, 0);
	}
}

char* func_277(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "portrait_normal";
		case 1:
			return "portrait_happy";
		case 2:
			return "portrait_pensive";
		case 3:
			return "portrait_pensive_2";
		case 4:
			return "portrait_relaxed";
		case 5:
			return "portrait_angry";
		case 6:
			return "portrait_angry_2";
		case 7:
			return "portrait_annoyed";
		default:
			break;
	}
	return "portrait_normal";
}

bool func_278(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

float func_279(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<2> Var7;
	struct<2> Var10;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = func_205(iParam0);
	ENTITY::_0xF3FDA9A617A15145(iVar0, &vVar1, &vVar4);
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar1, &Var7, &(Var7.f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = MISC::ABSF((Var10 - Var7));
	fVar14 = MISC::ABSF((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

bool func_280(struct<2> Param0, var uParam2)
{
	if (!func_292(Param0))
	{
		return false;
	}
	func_293(uParam2);
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

void func_281(int iParam0)
{
	var uVar0;
	int iVar1;

	if (FLOCK::_0xF8B48A361DC388AE(iParam0) != 2)
	{
		return;
	}
	iVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar0);
	if (iVar1 == 0)
	{
	}
	else if (!PLAYER::_0x354F689C4FFAAB37(iVar1))
	{
		PLAYER::_0x7C32191D9FB2BDEA(iVar1);
	}
}

void func_282(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && joaat("AT_HORSE") != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, iParam6);
	}
}

int func_283(int iParam0)
{
	return iParam0;
}

int func_284(int iParam0, int iParam1)
{
	if (!func_294(iParam0, 2))
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

struct<4> func_285(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_227(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_274(joaat("CHARACTER"), func_295(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_274(joaat("CHARACTER"), func_295(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_274(joaat("CHARACTER"), func_295(), -1591664384, bParam0);
}

bool func_286(int iParam0, bool bParam1)
{
	if (func_221(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_296();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_287(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_297(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_288(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_298(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_289(bool bParam0)
{
	int iVar0;

	iVar0 = func_227(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_274(271701509, func_285(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_274(271701509, func_285(bParam0), 12999093, 0);
}

bool func_290(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_221(iParam0);
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
			if (func_299(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_291(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_300(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_292(struct<2> Param0)
{
	if (!func_301(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_302(Param0))
	{
		return false;
	}
	return true;
}

void func_293(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_294(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_295()
{
	struct<4> Var0;

	return Var0;
}

bool func_296()
{
	return (func_303(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_304(func_274(joaat("WARDROBE"), func_285(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_297(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_130(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_226(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_274(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_227(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_227(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_298(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_227(0);
	*uParam1 = { func_274(iParam0, func_269(0), iParam3, 0) };
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

bool func_299(int iParam0, int iParam1, int iParam2)
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

bool func_300(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_227(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_301(int iParam0)
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

int func_302(int iParam0)
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

int func_303(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_305(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_227(bParam1), iParam0, iParam3);
}

int func_304(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_306(&uParam0, iParam4, bParam5, iParam6);
}

bool func_305(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_306(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_307(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_307(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_227(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_300(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

