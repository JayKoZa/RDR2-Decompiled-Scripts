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
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	struct<12> Local_21 = { 192, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 4;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 4;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
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
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	if (((func_1(0, 0, 1) && !func_2()) || func_3(0)) || func_4(0, 0))
	{
		Global_1913694.f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = ScriptParam_0.f_3;
	if (ScriptParam_0.f_4)
	{
		Local_21.f_11 = 0;
		func_5(&Local_21, 2);
	}
	else
	{
		Local_21.f_11 = -1640690034;
		func_6(&Local_21, 2);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_19 = 3;
	}
	while (true)
	{
		if (func_7())
		{
			iLocal_19 = 3;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		switch (iLocal_19)
		{
			case 0:
				if (Local_21.f_11 != -1640690034)
				{
				}
				else
				{
					NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(2);
				}
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				func_5(&Local_21, 8);
				func_5(&Local_21, 16);
				func_8(&Local_21, 2);
				iLocal_19 = 2;
				break;
			case 1:
				if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && !func_9(Global_34))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_34))
					{
						if (func_9(Global_34))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_34, 2, false);
							bLocal_20 = true;
							iLocal_19 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_34) && PED::IS_PED_ON_FOOT(Global_34))
						{
							if (bVar0)
							{
								iLocal_19 = 3;
							}
							else if (!func_10(Global_34, 993674639))
							{
								bVar1 = true;
								if (func_11(0) || func_11(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									PED::_0xD65FDC686A031C83(Global_34, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 2f);
								}
								if (PED::IS_PED_MALE(Global_34))
								{
									TASK::_TASK_START_SCENARIO_IN_PLACE(Global_34, joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR"), -1f, false);
								}
								else
								{
									TASK::_TASK_START_SCENARIO_IN_PLACE(Global_34, joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MP_FEMALE_A"), -1f, false);
								}
							}
						}
					}
				}
				else
				{
					bLocal_20 = true;
					iLocal_19 = 2;
				}
				break;
			case 2:
				func_12(&Local_21, 0);
				if (func_13(&Local_21) != 0)
				{
					if (func_13(&Local_21) == 12)
					{
						if (((!bLocal_20 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336)) && !func_9(Global_34))
						{
							iLocal_19 = 1;
						}
						else
						{
							bLocal_20 = true;
						}
					}
				}
				else
				{
					iLocal_19 = 3;
				}
				break;
			case 3:
				func_14(&Local_21, 0, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, bool bParam1, bool bParam2)
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
		if (func_15())
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
	if (iParam0 == 0 && func_17(func_16(0)))
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
	switch (func_18(func_16(0)))
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

bool func_2()
{
	return Global_1913694.f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

bool func_4(bool bParam0, bool bParam1)
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

void func_5(var uParam0, int iParam1)
{
	func_19(uParam0, iParam1);
}

void func_6(var uParam0, int iParam1)
{
	func_20(uParam0, iParam1);
}

bool func_7()
{
	if (func_4(0, 0))
	{
		return true;
	}
	if (func_3(0))
	{
		return true;
	}
	if (func_1(0, 0, 1) && !func_2())
	{
		return true;
	}
	if (func_21())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::_IS_PED_LASSOED(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (PED::_0x1D46B417F926D34D(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_22())
		{
			return true;
		}
	}
	if (func_23())
	{
		return true;
	}
	if (bLocal_20)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_9(PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
		{
			return true;
		}
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
		uParam0->f_10 = iParam1;
		func_24(uParam0);
	}
}

bool func_9(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return false;
}

bool func_10(int iParam0, int iParam1)
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

int func_11(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, iParam0, false))
	{
		if (func_25(iVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) || func_26(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0->f_1[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
	{
		func_14(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_34, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_34, 0, 1);
	if (func_27() != -1 && func_28())
	{
		if (func_29(uParam0->f_1[0], 0))
		{
			func_30(uParam0);
			func_24(uParam0);
		}
		return;
	}
	if (func_31(uParam0, 256))
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_13(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_32(uParam0))
			{
				func_33(uParam0);
				func_34(uParam0);
				func_35(uParam0);
			}
			if (func_36(uParam0))
			{
				func_8(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_27() == 0 && CAM::_0x251241CAEC707106())
			{
				func_30(uParam0);
				return;
			}
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
				if (func_37())
				{
					func_38(0);
				}
			}
			if ((func_31(uParam0, 16) || func_39(uParam0->f_1[0], 1)) || func_31(uParam0, 32))
			{
				func_40(uParam0);
			}
			break;
		case 4:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_41(uParam0))
			{
				func_5(uParam0, 1024);
				func_8(uParam0, 5);
			}
			break;
		case 5:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_42(uParam0))
			{
				func_8(uParam0, 6);
			}
			break;
		case 6:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_43(uParam0))
			{
				func_8(uParam0, 7);
			}
			break;
		case 7:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_45(uParam0, 0))
			{
				if (func_46(uParam0, func_31(uParam0, 65536)) || ((func_31(uParam0, 2) || func_31(uParam0, 65536)) && UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING"))))
				{
					func_6(uParam0, 65536);
					func_8(uParam0, 8);
				}
				else if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!func_31(uParam0, 1024))
			{
				func_8(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_47(uParam0))
			{
				func_46(uParam0, 1);
				func_8(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(joaat("CRAFTING")))
				{
					Global_1913694.f_1580 = 0;
					func_8(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PAUSE_MENU")) || UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("PAUSE_MENU")))
			{
				return;
			}
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
			if (func_45(uParam0, 1))
			{
				func_8(uParam0, 10);
			}
			break;
		case 10:
			func_48(0);
			if (func_32(uParam0))
			{
				func_49(uParam0);
				func_35(uParam0);
			}
			if (func_50(uParam0) || func_51(uParam0))
			{
				return;
			}
			if (Global_1913694.f_1580)
			{
				Global_1913694.f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_52(uParam0);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_53(uParam0, 0, 0);
				func_54(uParam0->f_1[5], 0, 1, 1);
				func_8(uParam0, 9);
			}
			else if (func_55(uParam0->f_1[2], 1) || !UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("CRAFTING")))
			{
				if (func_31(uParam0, 16))
				{
					func_8(uParam0, 18);
				}
				else
				{
					func_56(uParam0, 0);
					func_57("Exit", "SSCRFT_Sounds", 1);
					if (func_31(uParam0, 32))
					{
						func_6(uParam0, 32);
						func_8(uParam0, 1);
					}
					else
					{
						func_8(uParam0, 3);
					}
				}
			}
			else if (func_39(uParam0->f_1[7], 1))
			{
				func_58(uParam0);
			}
			else if (func_39(uParam0->f_1[1], 1))
			{
				func_59(uParam0);
			}
			else if (func_39(uParam0->f_1[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (func_31(uParam0, 128))
				{
					func_6(uParam0, 128);
				}
				else
				{
					func_5(uParam0, 128);
				}
				func_52(uParam0);
				func_57("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_61 = 0;
				uParam0->f_62 = 0;
				func_53(uParam0, 0, 0);
				func_54(uParam0->f_1[5], 0, 1, 1);
				func_8(uParam0, 9);
			}
			else if (func_60(uParam0->f_1[5], 0, 1))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Left", "SSCRFT_Sounds", 1);
					func_61(uParam0, 0);
				}
			}
			else if (func_60(uParam0->f_1[5], 1, 1))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Right", "SSCRFT_Sounds", 1);
					func_61(uParam0, 1);
				}
			}
			else if (func_55(uParam0->f_1[6], 1))
			{
				func_57("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_62(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar2))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_63(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_64(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_59(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_61), 1, 0, 0, 0);
			func_48(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_34);
			iVar8 = func_65(uParam0->f_61, -1636519629);
			if (iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
			{
				if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_0xD65FDC686A031C83(Global_34, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_0x6D07B371E9439019(Global_34);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
				{
					return;
				}
				if (iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") || iVar7 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_0xD65FDC686A031C83(Global_34, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_0x6D07B371E9439019(Global_34);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_34, 2, false);
				}
				if (((((((((iVar8 == 414472632 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_48, true, false)) || (iVar8 == -1136843638 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_50, true, false))) || (uParam0->f_69 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_69))) || (iVar8 == -732326901 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_52, true, false))) || (iVar8 == 786205940 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_51, true, false))) || (iVar8 == -1141771998 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_53, true, false))) || (iVar8 == 364689687 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_54, true, false))) || (iVar8 == -842117252 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_55, true, false))) || (iVar8 == -1610298873 && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_56, true, false)))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
			}
			else
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_49, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_34, 0)))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
				if (iVar7 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar7 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (func_31(uParam0, 4))
					{
						if ((PED::_0xC488B8C0E52560D8(Global_34) || PED::_0x2DC0E8DCBD3546E9(Global_34)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1944546609))
						{
							return;
						}
						if (!PED::_0x68821369A2CEADD5(Global_34, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_0xD65FDC686A031C83(Global_34, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_0x6D07B371E9439019(Global_34);
						}
						return;
					}
				}
			}
			if (func_32(uParam0))
			{
				func_35(uParam0);
				func_67(uParam0, 0, &uVar0);
				func_66(uParam0);
				if (func_68(uParam0->f_1[1]))
				{
					func_69(&(uParam0->f_1[1]), 1, 1);
				}
				if (func_70(iVar8))
				{
					uParam0->f_42 = 250;
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_53(uParam0, uParam0->f_61, uParam0->f_62);
					func_72(uParam0->f_1[1], -1067771379, 0, 1);
					func_73(uParam0->f_1[1], 10, 1, 1);
					func_73(uParam0->f_1[1], 11, 1, 1);
					func_54(uParam0->f_1[1], 0, 1, 1);
				}
				else
				{
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_72(uParam0->f_1[1], -1067771379, 0, 1);
					func_74(uParam0->f_1[1], 1, 1);
					func_73(uParam0->f_1[1], 10, 1, 1);
					func_73(uParam0->f_1[1], 11, 1, 1);
					func_54(uParam0->f_1[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_70(iVar8))
			{
				if (!func_31(uParam0, 64))
				{
					if (func_29(uParam0->f_1[1], 0))
					{
						if (func_75(uParam0->f_1[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							func_5(uParam0, 64);
							func_54(uParam0->f_1[1], 0, 1, 1);
							func_54(uParam0->f_1[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_69 != 0)
					{
						if ((uParam0->f_69 == joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1011038463)) || (uParam0->f_69 != joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_65))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_65));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_65);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
							{
								if (func_76(uParam0->f_61, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(func_77(uParam0->f_61, 0), 1, Global_35, true, 1f);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_78(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
									}
								}
								else
								{
									uParam0->f_65 = OBJECT::CREATE_OBJECT(uParam0->f_69, Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
								}
								if (iVar8 == 786205940)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -842117252)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_65))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_65));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_65);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_35, true, 1f);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_61 == joaat("AMMO_POISONBOTTLE"))
								{
									uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("MP006_P_POISONEMPTY01X"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
								else
								{
									uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("P_MOLOTOVEMPTY01X"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								if (iVar8 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_78(uParam0, iVar8), "DYNAMITE", uParam0->f_65, 0);
								}
							}
							else
							{
								uParam0->f_65 = OBJECT::CREATE_OBJECT(joaat("S_CFT_ARROW"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
						if (iVar8 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_34))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_65, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1394836706))
					{
						func_79(&(uParam0->f_65), &(uParam0->f_66));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_67, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_63, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -61921192))
				{
					if (func_80(0) && !func_81())
					{
						func_83(uParam0->f_61, uParam0->f_62, 1, func_82(), uParam0->f_11);
						func_84(uParam0->f_61, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
						{
							func_79(&(uParam0->f_65), &(uParam0->f_66));
						}
					}
					uParam0->f_22++;
					uParam0->f_27++;
					if ((!func_85(uParam0->f_61, uParam0->f_62, 0, func_82(), 0) || func_86(uParam0->f_61, 1, 0)) || uParam0->f_22 >= uParam0->f_26)
					{
						if (!func_80(0) || func_81())
						{
							uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
							if (uParam0->f_11 == 2133510819)
							{
								func_89(func_88(joaat("MADE"), -444296448), uParam0->f_27);
							}
							uParam0->f_27 = 0;
						}
						func_90(uParam0, iVar8, 0);
						return;
					}
				}
				if (!func_31(uParam0, 64))
				{
					if (!(func_29(uParam0->f_1[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, joaat("SAFETOBREAKOUT")))
						{
							if (!func_80(0) || func_81())
							{
								uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
								if (uParam0->f_11 == 2133510819)
								{
									func_89(func_88(joaat("MADE"), -444296448), uParam0->f_27);
								}
								uParam0->f_27 = 0;
							}
							func_90(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 1290366555) && uParam0->f_22 < (uParam0->f_26 - 1))
				{
					func_54(uParam0->f_1[1], 1, 1, 1);
					func_54(uParam0->f_1[4], 1, 1, 1);
					func_6(uParam0, 64);
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_78(uParam0, iVar8), "player"))
				{
					if (!func_80(0) || func_81())
					{
						uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_89(func_88(joaat("MADE"), -444296448), uParam0->f_27);
						}
						uParam0->f_27 = 0;
					}
					func_90(uParam0, iVar8, 0);
				}
			}
			else if (func_91(&(uParam0->f_70), (IntToFloat(uParam0->f_42) / 1000f)))
			{
				if (!func_80(0) || func_81())
				{
					if (uParam0->f_23 == -1)
					{
						uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
						if (uParam0->f_11 == 2133510819)
						{
							func_89(func_88(joaat("MADE"), -444296448), 1);
						}
						if (uParam0->f_23 == -1)
						{
							func_90(uParam0, iVar8, 0);
						}
					}
					else if (func_92(uParam0->f_23))
					{
					}
					uParam0->f_23 = -1;
				}
				else
				{
					func_83(uParam0->f_61, uParam0->f_62, 1, func_82(), uParam0->f_11);
					func_84(uParam0->f_61, 1, 1, 1, 0);
				}
				uParam0->f_26 = -1;
				uParam0->f_27 = 0;
				func_79(&(uParam0->f_65), &(uParam0->f_66));
				uParam0->f_44 = 0;
				bVar9 = true;
				if (!func_85(uParam0->f_61, uParam0->f_62, 0, func_82(), 0) || func_86(uParam0->f_61, 1, 0))
				{
					bVar9 = false;
				}
				func_90(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_61), 1, 0, 0, 0);
			func_48(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_79(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			if (!func_29(uParam0->f_1[2], 0))
			{
				func_54(uParam0->f_1[2], 1, 1, 1);
				func_74(uParam0->f_1[2], 0, 1);
			}
			if (!func_29(uParam0->f_1[4], 0))
			{
				func_54(uParam0->f_1[4], 1, 1, 1);
				func_74(uParam0->f_1[4], 1, 1);
			}
			if (func_55(uParam0->f_1[2], 1))
			{
				func_30(uParam0);
				func_93(&(uParam0->f_70));
				func_8(uParam0, 14);
				return;
			}
			else if (func_94(uParam0->f_1[4], 1))
			{
				func_30(uParam0);
				func_79(&(uParam0->f_65), &(uParam0->f_66));
				func_79(&(uParam0->f_63), &(uParam0->f_64));
				func_79(&(uParam0->f_67), &(uParam0->f_68));
				iVar10 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar10 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar8 = func_65(uParam0->f_61, -1636519629);
				iVar11 = func_78(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_34);
				func_56(uParam0, 0);
				func_57("Exit", "SSCRFT_Sounds", 1);
				if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
				return;
			}
			else if (func_39(uParam0->f_1[1], 1))
			{
				func_54(uParam0->f_1[4], 0, 1, 1);
				func_54(uParam0->f_1[2], 0, 1, 1);
				func_54(uParam0->f_1[1], 0, 1, 1);
				iVar8 = func_65(uParam0->f_61, -1636519629);
				iVar12 = func_78(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_93(&(uParam0->f_70));
				func_6(uParam0, 64);
				func_8(uParam0, 12);
				return;
			}
			if (func_95(uParam0->f_1[4], 1))
			{
				if (!func_96(&(uParam0->f_70)))
				{
					func_97(&(uParam0->f_70));
				}
				else if (func_91(&(uParam0->f_70), 0.1f))
				{
					func_98(uParam0->f_1[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_96(&(uParam0->f_70)))
				{
					func_93(&(uParam0->f_70));
				}
				func_98(uParam0->f_1[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_61), 1, 0, 0, 0);
			func_48(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -2015667492))
				{
					func_79(&(uParam0->f_67), &(uParam0->f_68));
				}
			}
			iVar8 = func_65(uParam0->f_61, -1636519629);
			iVar13 = func_78(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1208591336))
			{
				func_79(&(uParam0->f_65), &(uParam0->f_66));
				func_79(&(uParam0->f_63), &(uParam0->f_64));
				func_79(&(uParam0->f_67), &(uParam0->f_68));
				iVar14 = PED::_0x569F1E1237508DEB(Global_34);
				if (iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE") && iVar14 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_34);
				if (!func_51(uParam0))
				{
					func_8(uParam0, 15);
				}
			}
			break;
		case 16:
			iVar15 = func_99();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_8(uParam0, 17);
			}
			else if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_8(uParam0, 10);
			}
			else if (func_91(&(uParam0->f_70), 5f))
			{
				func_93(&(uParam0->f_70));
				func_8(uParam0, 10);
			}
			break;
		case 17:
			if (!func_92(uParam0->f_23) && func_100(1))
			{
				if (func_101(uParam0->f_23) != 3)
				{
					func_102(0);
				}
				else
				{
					func_103(uParam0->f_61);
					PED::_0xD65FDC686A031C83(Global_34, joaat("STEWPOT_ACTION"), 1f);
					func_104(uParam0->f_61, 1);
					func_105(uParam0);
					if (func_76(uParam0->f_61, -2011345500))
					{
						func_106(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_25 = uParam0->f_61;
				}
				func_8(uParam0, 15);
			}
			else
			{
				func_107(1);
				HUD::_UIPROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				if (func_68(uParam0->f_1[0]))
				{
					func_54(uParam0->f_1[0], 0, 1, 1);
				}
				func_35(uParam0);
			}
			break;
		case 18:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				func_35(uParam0);
			}
			if (func_31(uParam0, 2))
			{
				TASK::CLEAR_PED_TASKS(Global_34, true, false);
			}
			func_56(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_28);
			Global_1913694.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_13(var uParam0)
{
	return uParam0->f_10;
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	func_30(uParam0);
	if (bParam2)
	{
		func_56(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_28);
	}
	if (func_37())
	{
		func_38(0);
	}
	if (bParam1)
	{
		func_108(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_20)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(uParam0->f_20));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_48))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_48);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_49);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_50);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_51);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_52);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_53);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_54);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_55);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_56);
	}
	func_79(&(uParam0->f_63), &(uParam0->f_64));
	func_79(&(uParam0->f_65), &(uParam0->f_66));
	func_79(&(uParam0->f_67), &(uParam0->f_68));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913694.f_1576 = 0;
	if (func_31(uParam0, 2))
	{
		TASK::CLEAR_PED_TASKS(Global_34, true, false);
	}
	if (func_27() == -1)
	{
		func_8(uParam0, 18);
	}
	else
	{
		if (uParam0->f_10 == 11)
		{
			if (uParam0->f_23 == -1)
			{
				func_87(uParam0->f_61, uParam0->f_62, 1, uParam0->f_11);
				func_109(uParam0->f_61, uParam0->f_22);
			}
		}
		if (!func_80(0) || func_81())
		{
			if (uParam0->f_27 > 0 && func_25(uParam0->f_61, 0))
			{
				uParam0->f_23 = func_87(uParam0->f_61, uParam0->f_62, uParam0->f_27, uParam0->f_11);
				if (uParam0->f_11 == 2133510819)
				{
					func_89(func_88(joaat("MADE"), -444296448), uParam0->f_27);
				}
				uParam0->f_27 = 0;
			}
		}
		uParam0->f_23 = -1;
		func_8(uParam0, 0);
	}
}

bool func_15()
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
	if (!func_17(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_16(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

bool func_17(struct<2> Param0)
{
	if (!func_110(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_111(Param0))
	{
		return false;
	}
	return true;
}

int func_18(var uParam0, var uParam1)
{
	return uParam0;
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_26538) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_26538, false));
}

bool func_22()
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

bool func_23()
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

void func_24(var uParam0)
{
	func_5(uParam0, 1);
}

bool func_25(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_26(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

int func_27()
{
	return Global_1572887.f_13;
}

bool func_28()
{
	return Global_1896738.f_382;
}

bool func_29(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	return !func_112(iParam0, 4);
}

void func_30(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		func_69(&(uParam0->f_1[iVar0]), 1, 1);
		iVar0++;
	}
}

bool func_31(var uParam0, int iParam1)
{
	return func_113(*uParam0, iParam1);
}

bool func_32(var uParam0)
{
	return func_31(uParam0, 1);
}

void func_33(var uParam0)
{
	StringCopy(&(uParam0->f_20), "CAMP", 8);
}

void func_34(var uParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(&(uParam0->f_20)))
	{
		HUD::_TEXT_DATABASE_REQUEST(&(uParam0->f_20));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (func_31(uParam0, 2))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_RIFLE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_REPEATER"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_45MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_9MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_SHOTGUN"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_ARROW"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_TOMAHAWK01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE05"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MOLOTOVEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	STREAMING::REQUEST_MODEL(joaat("MP006_P_POISONEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("MP006_S_CFT_POISONBOTTLE01"), false);
	func_114(uParam0);
	if (func_31(uParam0, 4))
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

void func_35(var uParam0)
{
	func_6(uParam0, 1);
}

bool func_36(var uParam0)
{
	if (func_115(&(uParam0->f_20)))
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&(uParam0->f_20)))
		{
			return false;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (func_31(uParam0, 2))
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_48)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_49)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_50)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_51)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_52)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_53)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_RIFLE")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_REPEATER")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_45MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_9MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_ARROW")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_TOMAHAWK01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_KNIFE05")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_SHOTGUN")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MOLOTOVEMPTY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV02")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_STICK_DYNAMITE01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("MP006_P_POISONEMPTY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("MP006_S_CFT_POISONBOTTLE01")))
	{
		return false;
	}
	if (func_31(uParam0, 4))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFLESHYMEAT01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDBIRDBREAST01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDEFLESHYMEAT01XB")))
		{
			return false;
		}
	}
	return true;
}

bool func_37()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_38(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913694.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_34, "player_crafting_active", bParam0);
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_40(var uParam0)
{
	func_38(1);
	func_8(uParam0, 4);
}

bool func_41(var uParam0)
{
	int iVar0;

	uParam0->f_74 = Global_1913694.f_1584;
	uParam0->f_73 = Global_1913694.f_1585;
	if (func_31(uParam0, 2))
	{
		Global_1913694.f_1576 = 0;
		uParam0->f_44 = 0;
		iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[0 /*9*/].f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913694[0 /*9*/].f_1);
		}
		uParam0->f_24 = func_118(iVar0);
		uParam0->f_25 = func_119(iVar0);
		func_120(uParam0, uParam0->f_24, 1472825031);
		func_120(uParam0, joaat("FEE_MEAL_CAMP_STEW_BEST"), 1472825031);
		func_120(uParam0, joaat("FEE_MEAL_CAMP_STEW_HIGH"), 1472825031);
		func_120(uParam0, joaat("FEE_MEAL_CAMP_STEW_MED"), 1472825031);
		func_120(uParam0, joaat("FEE_MEAL_CAMP_STEW_LOW"), 1472825031);
		return true;
	}
	if (uParam0->f_43 == 0)
	{
		Global_1913694.f_1576 = 0;
		uParam0->f_44 = 0;
		func_121(uParam0, 600942249);
		uParam0->f_43++;
		return false;
	}
	else if (uParam0->f_43 == 1)
	{
		func_121(uParam0, -257768755);
		uParam0->f_43++;
		return false;
	}
	else
	{
		func_121(uParam0, -214678071);
		uParam0->f_43 = 0;
	}
	uParam0->f_44 = 0;
	return true;
}

bool func_42(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	if ((func_31(uParam0, 2) || func_31(uParam0, 65536)) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_28))
	{
		return true;
	}
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_28, "filter", func_123(func_31(uParam0, 2), joaat("RECIPES"), func_122(uParam0->f_41)));
	if (func_31(uParam0, 2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_28, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "filterIndex", uParam0->f_41);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_28, "tipText", "");
	uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_28, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_28, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_28, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_28, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_28, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_124(&(uParam0->f_30[iVar0]), &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_35[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_28, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35[iVar0], &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_82();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694.f_1576 - 1))
	{
		if (func_25(Global_1913694[iVar0 /*9*/].f_6, 0))
		{
			func_125(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_44 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_44 = 0;
	if (uParam0->f_47 == 0)
	{
		func_6(uParam0, 128);
	}
	uParam0->f_45 = 0;
	return true;
}

void func_44(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_29))
	{
		uParam0->f_29 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_28, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_29);
	}
	uParam0->f_60 = 600942249;
	uParam0->f_59 = 0;
	uParam0->f_58 = 0;
}

bool func_45(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_82();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694.f_1576 - 1))
	{
		if ((func_31(uParam0, 128) && Global_1913694[iVar0 /*9*/].f_2) || !func_31(uParam0, 128))
		{
			if (Global_1913694.f_1585 != 0)
			{
				uParam0->f_73 = Global_1913694.f_1585;
				bVar3 = func_76(Global_1913694[iVar0 /*9*/].f_6, Global_1913694.f_1585);
				if (func_31(uParam0, 16384) == bVar3)
				{
				}
				else
				{
					func_125(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_44 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_44 = 0;
				if (!func_31(uParam0, 16384) && Global_1913694.f_1585 != 0)
				{
					func_5(uParam0, 16384);
					return false;
				}
				uParam0->f_45 = 0;
				func_6(uParam0, 16384);
				return true;
			}
		}
	}
}

bool func_46(var uParam0, bool bParam1)
{
	int iVar0;

	func_5(uParam0, 256);
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1014850361))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(joaat("CRAFTING"));
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_82();
	iVar0 = uParam0->f_44;
	while (iVar0 <= (Global_1913694.f_1576 - 1))
	{
		func_126(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_44 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	func_6(uParam0, 512);
	uParam0->f_44 = 0;
	return true;
}

void func_48(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = func_127(Global_34);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_49(var uParam0)
{
	int iVar0;

	func_30(uParam0);
	func_128(uParam0, 1);
	uParam0->f_1[2] = func_71("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_54(uParam0->f_1[2], 1, 1, 1);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_59, 0))
		{
			uParam0->f_61 = uParam0->f_59;
			uParam0->f_62 = uParam0->f_60;
			func_129(uParam0, &(uParam0->f_58));
		}
		else
		{
			uParam0->f_61 = 0;
		}
		if (func_25(uParam0->f_59, 0))
		{
			if (func_130(uParam0->f_59))
			{
				func_98(uParam0->f_1[1], "CAMP_REC_COOK", 1);
			}
			else if (func_65(uParam0->f_59, -1636519629) == -701492487)
			{
				func_98(uParam0->f_1[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_98(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
			}
		}
		uParam0->f_1[3] = func_71(func_131(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		uParam0->f_1[7] = func_71("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	uParam0->f_1[5] = func_132("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_133(uParam0->f_1[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_133(uParam0->f_1[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_57))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_25(uParam0->f_61, 0))
	{
		func_54(uParam0->f_1[5], 1, 1, 1);
	}
	else
	{
		func_54(uParam0->f_1[5], 0, 1, 1);
	}
	uParam0->f_1[6] = func_71("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!func_31(uParam0, 32768))
	{
		func_98(uParam0->f_1[6], "INFO", 1);
	}
	else
	{
		func_98(uParam0->f_1[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_29) == 0)
	{
		func_52(uParam0);
		func_54(uParam0->f_1[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_53(uParam0, uParam0->f_61, uParam0->f_62);
}

bool func_50(var uParam0)
{
	int iVar0;

	if (!func_31(uParam0, 2))
	{
		return false;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_25 != func_119(iVar0))
	{
		uParam0->f_25 = func_119(iVar0);
		func_8(uParam0, 15);
		return true;
	}
	if (uParam0->f_24 != func_118(iVar0))
	{
		func_8(uParam0, 4);
		return true;
	}
	return false;
}

bool func_51(var uParam0)
{
	if (Global_1913694.f_1584 != uParam0->f_74 || Global_1913694.f_1585 != uParam0->f_73)
	{
		uParam0->f_74 = Global_1913694.f_1584;
		uParam0->f_73 = Global_1913694.f_1585;
		func_5(uParam0, 65536);
		func_8(uParam0, 4);
		return true;
	}
	return false;
}

void func_52(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_30[iVar0], "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_30[iVar0], "inUse", 0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "variantVisible", 0);
}

void func_53(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_25(iParam1, 0))
	{
		if (func_68(uParam0->f_1[1]))
		{
			func_54(uParam0->f_1[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_82();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913694.f_1579 && func_134(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_135(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_92(uParam0->f_23))
	{
		bVar3 = false;
	}
	else if (func_31(uParam0, 2) && !func_136(iParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((iParam1 != joaat("CONSUMABLE_COFFEE") && func_86(iParam1, 1, 0)) || (!func_31(uParam0, 4) && ((func_31(uParam0, 8192) || iParam2 == -214678071) || iParam2 == joaat("COST_CRAFTING_GRILL"))))
		{
			bVar3 = false;
		}
		else if (!func_137(2) && func_65(iParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_26 == -1)
		{
			iVar6 = func_138(iParam1, 0, 0, 0);
			iVar7 = func_139(iParam1, 0);
			iVar8 = func_140(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_26 = func_141(iVar7, iVar8);
		}
	}
	if (func_68(uParam0->f_1[1]))
	{
		if (func_31(uParam0, 2))
		{
			func_98(uParam0->f_1[1], "DONATE_ING", 1);
		}
		else if (func_130(iParam1))
		{
			func_98(uParam0->f_1[1], "CAMP_REC_COOK", 1);
		}
		else if (func_65(iParam1, -1636519629) == -701492487)
		{
			func_98(uParam0->f_1[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_98(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
		}
		func_54(uParam0->f_1[1], bVar3, 1, 1);
	}
	func_142(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_68(uParam0->f_1[6]))
	{
		func_54(uParam0->f_1[6], !bVar4, 1, 1);
	}
	func_143(uParam0);
}

void func_54(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (bParam1)
	{
		func_144(iParam0, 4);
		if (bParam3)
		{
			func_145(iVar0, 1);
		}
		func_146(iVar0, 1);
	}
	else
	{
		func_147(iParam0, 4);
		func_146(iVar0, 0);
	}
}

bool func_55(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(joaat("CRAFTING"));
	}
	func_6(uParam0, 256);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_57(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, iParam2);
		Global_1957967[Global_1957967.f_25] = iVar0;
		Global_1957967.f_25 = (Global_1957967.f_25 + 1 % 24);
	}
}

void func_58(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (func_25(uParam0->f_61, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(7, uParam0->f_61))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(7, uParam0->f_61, Global_35, uParam0->f_61, -2136842124 /* GXTEntry: "Cripps makes a special stew every 3 days. Collect the required ingredients and dr" +
    "op them off at your Camp." */, 0);
		func_148(uParam0->f_61, uParam0->f_62, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_61, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar34 = Var1[iVar33 /*2*/];
				if (func_25(iVar34, 0))
				{
					iVar36 = func_138(iVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var1[iVar33 /*2*/].f_1, MISC::_CREATE_VAR_STRING(0, iVar34));
					bVar37 = func_149(iVar34, Var1[iVar33 /*2*/].f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_61, iVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_150(uParam0->f_61, &Var38, joaat("INVENTORY"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(7, uParam0->f_61, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(7, uParam0->f_61, Var38, Var38.f_1);
		}
		Global_1137047.f_339.f_16 = uParam0->f_61;
		Global_1137047.f_339.f_17 = uParam0->f_62;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(7, uParam0->f_61, sVar41);
		AUDIO::PLAY_SOUND_FRONTEND("add_to_log", "SSCRFT_Sounds", true, 0);
	}
	func_143(uParam0);
}

void func_59(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_29(uParam0->f_1[1], 0))
	{
		return;
	}
	if (func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_61, 0))
		{
			func_102(1);
			func_97(&(uParam0->f_70));
			func_8(uParam0, 16);
		}
		return;
	}
	func_56(uParam0, 1);
	func_69(&(uParam0->f_1[1]), 1, 1);
	func_69(&(uParam0->f_1[5]), 1, 1);
	func_69(&(uParam0->f_1[6]), 1, 1);
	func_69(&(uParam0->f_1[3]), 1, 1);
	func_69(&(uParam0->f_1[7]), 1, 1);
	func_5(uParam0, 64);
	if (!func_31(uParam0, 8192) && !func_130(uParam0->f_61))
	{
		iVar0 = func_65(uParam0->f_61, -1636519629);
		iVar1 = func_78(uParam0, iVar0);
		if (iVar1 != 0)
		{
			func_6(uParam0, 64);
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_69 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_61 == joaat("AMMO_POISONBOTTLE"))
					{
						uParam0->f_69 = joaat("MP006_S_CFT_POISONBOTTLE01");
					}
					else
					{
						uParam0->f_69 = joaat("S_CFT_MOLOTOV01");
					}
				}
				else if (func_76(uParam0->f_61, -1588156645))
				{
					uParam0->f_69 = func_151(func_77(uParam0->f_61, 0));
				}
				else if (func_76(uParam0->f_61, 457423347))
				{
					uParam0->f_69 = joaat("S_CFT_ARROW_DYNAMITE");
				}
				else if (func_76(uParam0->f_61, -1846429632))
				{
					uParam0->f_69 = joaat("S_CFT_ARROW_FIRE");
				}
				else if (func_76(uParam0->f_61, -1067199465))
				{
					uParam0->f_69 = joaat("S_CFT_ARROW_SMALLGAME");
				}
				else
				{
					uParam0->f_69 = func_151(uParam0->f_61);
				}
			}
			if (uParam0->f_69 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_69, false);
			}
		}
		func_98(uParam0->f_1[2], "CAMP_REC_BACK", 1);
		func_72(uParam0->f_1[2], -1067771379, 0, 1);
		func_54(uParam0->f_1[2], 0, 1, 1);
		func_74(uParam0->f_1[2], 0, 1);
		uParam0->f_1[4] = func_71("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_152(&(uParam0->f_1[4]), "INPUT_PCRAFT_EXIT");
		func_72(uParam0->f_1[4], -1067771379, 0, 1);
		func_54(uParam0->f_1[4], 0, 1, 1);
		func_73(uParam0->f_1[4], 19, 1, 1);
		func_73(uParam0->f_1[4], 20, 1, 1);
		func_73(uParam0->f_1[4], 13, 1, 1);
		func_73(uParam0->f_1[2], 13, 1, 1);
		if (func_68(uParam0->f_1[2]))
		{
			func_72(uParam0->f_1[2], -1067771379, 0, 1);
		}
		uParam0->f_27 = 0;
		func_8(uParam0, 12);
	}
	else
	{
		func_8(uParam0, 11);
	}
}

bool func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

void func_61(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_57))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_62 == -214678071 || uParam0->f_62 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_153(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_65(uParam0->f_61, 1697966752), 0) };
				if (func_154(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_62 = -214678071;
						uParam0->f_61 = func_155(0, iVar3);
						bVar2 = true;
					}
					func_156(iVar3);
				}
			}
			else
			{
				Var5 = { func_153(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, func_65(uParam0->f_61, 1697966752), 0) };
				if (func_154(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_155(iVar16, iVar3);
							if (func_76(iVar17, iVar15))
							{
								uParam0->f_62 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_61 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_156(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_61);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != joaat("COST_TYPE_CRAFT") || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913694.f_1579 && func_134(uParam0->f_61, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_61, iVar0, &Var19))
				{
				}
			}
			uParam0->f_62 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_57, "eCost", uParam0->f_62);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_57, "eOutputItem", uParam0->f_61);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1913694)
		{
			iVar68 = Global_1913694[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_57, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_28, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_61));
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_61, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "RPGDescription", func_157(uParam0->f_61));
		func_126(uParam0, -1, func_82(), uParam0->f_57, 0, bVar2, 0);
		func_53(uParam0, uParam0->f_61, uParam0->f_62);
	}
}

void func_62(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (func_31(uParam0, 32768))
		{
			func_6(uParam0, 32768);
		}
		else
		{
			func_5(uParam0, 32768);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription", func_31(uParam0, 32768));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowIngredients", !func_31(uParam0, 32768));
	if (!func_31(uParam0, 32768))
	{
		if (func_68(uParam0->f_1[6]))
		{
			func_98(uParam0->f_1[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_158(uParam0);
	}
	else
	{
		if (func_68(uParam0->f_1[6]))
		{
			func_98(uParam0->f_1[6], "INGREDIENTS", 1);
		}
		func_159(uParam0);
	}
	if (uParam0->f_62 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_57, "iNumCostVariants") <= 1 && func_31(uParam0, 32768))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_140(uParam0->f_61, uParam0->f_62, func_82(), 0);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_63(var uParam0)
{
	if (func_31(uParam0, 2))
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_160(uParam0);
	func_52(uParam0);
	func_158(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowIngredients", 0);
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_53(uParam0, 0, 0);
	func_8(uParam0, 9);
}

void func_64(var uParam0, int iParam1)
{
	func_52(uParam0);
	func_158(uParam0);
	func_129(uParam0, &(iParam1->f_3));
}

int func_65(int iParam0, int iParam1)
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

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_65(uParam0->f_61, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_63))
		{
			iVar1 = func_161(uParam0->f_61);
			if (iVar1 != 0)
			{
				uParam0->f_63 = OBJECT::CREATE_OBJECT(iVar1, Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_63, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_63, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_48, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_48);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_48, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "arrow", uParam0->f_65, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_50);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_50, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_51);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_51, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "player", Global_34, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_63))
		{
			iVar2 = func_161(uParam0->f_61);
			if (iVar2 != 0)
			{
				uParam0->f_63 = OBJECT::CREATE_OBJECT(iVar2, Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_63, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_63, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_63, Global_34, PED::GET_PED_BONE_INDEX(Global_34, 37709), func_162(uParam0->f_61), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "bullet", uParam0->f_63, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_49);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_49, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
		{
			uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_65, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_52, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_52);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_52, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
		{
			uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_65, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_53, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_53);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_42 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_65))
		{
			uParam0->f_65 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_35, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_65, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_65, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
		{
			uParam0->f_67 = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), Global_35, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_67, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_67, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "RAG", uParam0->f_67, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_54);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_54, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_55, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_42 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_56, "player", Global_34, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_56);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_56, "pl_craft", true);
	}
	else
	{
		uParam0->f_42 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_163(uParam0->f_61), func_164(uParam0->f_61)) * 1000f));
		func_97(&(uParam0->f_70));
		TASK::TASK_PLAY_ANIM(Global_34, func_163(uParam0->f_61), func_164(uParam0->f_61), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_67(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (func_68(uParam0->f_1[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_68((*uParam2)[iVar1]))
				{
					if (uParam0->f_1[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_54(uParam0->f_1[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_68(int iParam0)
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

void func_69(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_68(*uParam0))
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
	func_165(iVar0);
	*uParam0 = 0;
}

bool func_70(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_112(iVar0, 2))
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
		func_166(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_68(iParam0))
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

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	func_145(iVar0, bParam1);
}

bool func_75(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_76(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return func_168(func_167(iParam0), iParam1);
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

int func_77(int iParam0, bool bParam1)
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
	if (func_25(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_169(iVar0) || func_170(iVar0))
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

int func_78(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_49;
		case -732326901:
			return uParam0->f_52;
		case -1136843638:
			return uParam0->f_50;
		case 786205940:
			return uParam0->f_51;
		case -1141771998:
			return uParam0->f_53;
		case 364689687:
			return uParam0->f_54;
		case 414472632:
			return uParam0->f_48;
		case -842117252:
			return uParam0->f_55;
		case -1610298873:
			return uParam0->f_56;
		default:
			break;
	}
	return 0;
}

int func_79(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return 1;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return 0;
}

bool func_80(bool bParam0)
{
	if (func_27() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_171(bParam0));
}

bool func_81()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

bool func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_172(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_173(Global_34, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_83(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, uParam4);
	return func_174(iParam0, iParam1, bParam2, bParam3);
}

void func_84(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (!func_80(0) || func_81())
	{
		return;
	}
	if (!func_25(iParam0, 0))
	{
		return;
	}
	func_89(func_175(joaat("ITEMS_CRAFTED")), iParam1);
	if (bParam3)
	{
		if (func_27() == -1)
		{
			if (func_76(iParam0, -1588156645))
			{
				iVar0 = func_176(func_77(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_177(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_178(iParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_179(iParam0, 0))
				{
					func_180(iParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_181(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_182(iParam0, iParam4, iParam1);
		}
	}
	func_104(iParam0, iParam1);
	Global_1051133 = iParam0;
}

bool func_85(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_135(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, bParam4);
}

bool func_86(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_183(iParam0, 0, 0) };
	return func_184(iParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

int func_87(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<12> Var19;
	struct<12> Var36;
	struct<17> Var52;

	if (!func_25(iParam0, 0))
	{
		return -1;
	}
	if (func_185(iParam0))
	{
		if (!func_187(func_186(iParam0), iParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_140(iParam0, iParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_183(iParam0, 1, 0) };
	if (func_184(iParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_188(iParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_189(iParam0, "SPEND STEW FEE", 1, 1, 0, iParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_185(iParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_190(&Var9, func_186(iParam0), &Var19, 1, iParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_191(&Var9, iParam0, Var2, Var2.f_4, iParam2, &Var36, 1, iParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (iParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_185(iParam0))
	{
		if (func_192(func_186(iParam0), iParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_193(iParam0, iParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_194(iVar7, Var52);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, uParam3);
	return iVar7;
}

struct<2> func_88(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_89(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_90(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_44 = 0;
	func_79(&(uParam0->f_65), &(uParam0->f_66));
	func_79(&(uParam0->f_63), &(uParam0->f_64));
	iVar0 = func_78(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	func_54(uParam0->f_1[2], 1, 1, 1);
	func_54(uParam0->f_1[4], 1, 1, 1);
	func_74(uParam0->f_1[2], 0, 1);
	func_74(uParam0->f_1[4], 1, 1);
	func_195(uParam0->f_1[1], 1);
	func_69(&(uParam0->f_1[1]), 1, 1);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_42, uParam0->f_42 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_73(uParam0->f_1[1], 11, 1, 1);
	func_73(uParam0->f_1[1], 19, 1, 1);
	func_72(uParam0->f_1[1], -1067771379, 0, 1);
	func_54(uParam0->f_1[1], bParam2, 1, 1);
	func_8(uParam0, 13);
}

bool func_91(var uParam0, float fParam1)
{
	if (!func_96(uParam0))
	{
		return false;
	}
	if (func_196(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0)
{
	int iVar0;

	iVar0 = func_101(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

void func_93(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_95(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1951255[iVar0 /*23*/].f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_96(var uParam0)
{
	return func_197(*uParam0, 1);
}

void func_97(var uParam0)
{
	func_198(uParam0, 0f);
}

void func_98(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, sParam1);
}

int func_99()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_28.f_2;
	}
	return 255;
}

bool func_100(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288.f_2050 == 0 || (MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288.f_2050 == 0)
	{
		Global_1132288.f_2050 = MISC::_GET_SYSTEM_TIME();
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1132288.f_2050) >= 1000)
	{
		Global_1132288.f_2050 = MISC::_GET_SYSTEM_TIME();
	}
	else
	{
		return false;
	}
	return true;
}

int func_101(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1293346.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_102(bool bParam0)
{
	struct<14> Var0;
	int iVar14;

	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_200(iVar14, Var0, func_199(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

void func_103(var uParam0)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_201(iVar0, 1);
		func_202(iVar0, uParam0);
		func_204(func_203(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_205(uParam0);
	}
}

void func_104(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_206(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	if (!func_76(iParam0, 1714518167))
	{
		Var0 = { func_207(iParam0) };
		if (Var0.f_1 != 0)
		{
			STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
		}
	}
}

void func_105(var uParam0)
{
	var uVar0;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<2> Var10[15];

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_23, &uVar0))
	{
		vVar4 = { func_208(Global_1296859) };
		iVar7 = 0;
		bVar8 = func_76(uParam0->f_61, -2011345500);
		if (!bVar8)
		{
			if (func_148(uParam0->f_61, uParam0->f_62, &Var10, &iVar9, 1, 0) && iVar9 > 0)
			{
				iVar7 = Var10[0 /*2*/];
			}
		}
		TELEMETRY::_TELEMETRY_CAMP_DONATE(&uVar0, iVar7, vVar4.z, 0, 1, 1084182731, joaat("STEW_POT"), uParam0->f_61, bVar8);
	}
}

bool func_106(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_209(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

void func_107(int iParam0)
{
	if (Global_1940144.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144.f_105.f_2 = iParam0;
}

void func_108(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_48))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_48, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_49, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_50, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_51, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_52, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_53, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_54, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_55, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_56, 0);
	}
	func_79(&(uParam0->f_63), &(uParam0->f_64));
	func_79(&(uParam0->f_65), &(uParam0->f_66));
	func_79(&(uParam0->f_67), &(uParam0->f_68));
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_210(11, 1, 0);
		iVar0++;
	}
	if (func_211(iParam0, 0))
	{
		func_212(40);
	}
	else
	{
		func_212(39);
	}
}

bool func_110(int iParam0)
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

int func_111(int iParam0)
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

bool func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_113(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_114(var uParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_48))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_48 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_48);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_49);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_50);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_51);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_52);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_53);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_54);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		if (PED::IS_PED_MALE(Global_34))
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_56);
	}
}

bool func_115(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_116(var uParam0, var uParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_114(uParam0);
		return false;
	}
	return true;
}

int func_117(int iParam0)
{
	return iParam0;
}

int func_118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_28;
}

int func_119(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1134390[iParam0 /*83*/].f_38.f_28.f_1;
}

void func_120(var uParam0, int iParam1, int iParam2)
{
	Global_1913694[uParam0->f_44 /*9*/].f_5 = iParam2;
	Global_1913694[uParam0->f_44 /*9*/].f_6 = iParam1;
	Global_1913694[uParam0->f_44 /*9*/].f_7 = 1;
	Global_1913694[uParam0->f_44 /*9*/].f_8 = 0;
	Global_1913694.f_1576++;
	uParam0->f_44++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_213(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_214(uParam0, iParam1);
	}
}

int func_121(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = { func_153(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913694.f_1584, 0) };
	if (func_154(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_155(iVar12, iVar10);
			if (func_25(iVar13, 0))
			{
				if (uParam0->f_44 >= 175)
				{
				}
				else
				{
					if (Global_1913694.f_1584 == 0 && func_76(iVar13, 302810039))
					{
						if (!(Global_1913694.f_1585 != 0 && func_76(iVar13, Global_1913694.f_1585)))
						{
						}
						else if (func_76(iVar13, 266762988))
						{
						}
						else
						{
							func_120(uParam0, iVar13, iParam1);
							func_215(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_216(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

int func_123(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_124(var uParam0, char[4] cParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_28, cParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_125(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = Global_1913694[iParam2 /*9*/].f_6;
	if ((bParam4 || func_31(uParam0, 2)) || func_211(iVar0, uParam0->f_41))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					func_126(uParam0, -1, bParam3, Global_1913694[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_29, uParam0->f_45, -2047994727, Global_1913694[iParam2 /*9*/].f_1);
			}
			else
			{
				func_217(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913694[iParam2 /*9*/].f_1);
			}
			func_217(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_45 == 0)
		{
			uParam0->f_59 = Global_1913694[iParam2 /*9*/].f_6;
			uParam0->f_60 = Global_1913694[iParam2 /*9*/].f_5;
			uParam0->f_58 = Global_1913694[iParam2 /*9*/].f_1;
		}
		uParam0->f_45++;
	}
}

void func_126(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	struct<2> Var18;
	int iVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1913694[iParam1 /*9*/].f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_140(iVar3, iVar4, bParam2, 0);
	iVar6 = func_138(iVar3, 0, 0, 0);
	iVar7 = func_139(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_141(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", 0);
	if (func_31(uParam0, 2))
	{
		iVar9 = func_123((iVar5 > 0 && func_136(iVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_123((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_218(iVar3))
	{
		if (func_219(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", iVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!func_31(uParam0, 4))
	{
		if ((iVar4 == -214678071 || iVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913694.f_1579 && func_134(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		iVar14 = 1;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", iVar14);
	if (iVar9 == 1)
	{
		if (!func_137(2) && func_65(iVar3, -1636519629) == -701492487)
		{
			Global_1913694[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1913694[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((func_31(uParam0, 128) && iVar9 == 0) && Global_1913694[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_29, iVar0);
		}
		Global_1913694[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (func_220(iVar3, &Var15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		iVar40 = 0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var18.f_1[iVar41], &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							iVar40 = 1;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", iVar40);
	}
	if (!func_31(uParam0, 4) && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
	{
		iVar9 = 0;
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_127(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_128(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_12))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_12);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_129(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::_0xD962F8579D702DB5();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	iVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (func_25(iVar2, 0) && (func_31(uParam0, 2) || func_211(iVar2, uParam0->f_41)))
	{
		uParam0->f_26 = -1;
		uParam0->f_22 = 0;
		uParam0->f_61 = iVar2;
		uParam0->f_62 = iVar1;
		func_69(&(uParam0->f_1[1]), 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "variantVisible", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_28, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_61));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_28, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1913694)
			{
				iVar6 = Global_1913694[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_28, "variantIndex", (iVar4 + 1 - iVar6));
			func_5(uParam0, 4096);
			if (func_68(uParam0->f_1[5]))
			{
				func_54(uParam0->f_1[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "variantVisible", 0);
			func_6(uParam0, 4096);
			if (func_68(uParam0->f_1[5]))
			{
				func_54(uParam0->f_1[5], 0, 1, 1);
			}
		}
		if (!func_31(uParam0, 2))
		{
			uParam0->f_42 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_163(uParam0->f_61), func_164(uParam0->f_61)) * 1000f));
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting"))
		{
			func_5(uParam0, 8192);
		}
		else
		{
			func_6(uParam0, 8192);
		}
		uParam0->f_57 = *uParam1;
		uParam0->f_1[1] = func_71("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_53(uParam0, uParam0->f_61, uParam0->f_62);
		func_73(uParam0->f_1[1], 11, 1, 1);
		if (Global_1913694.f_1579 || !func_134(uParam0->f_61, uParam0->f_62, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "RPGDescription", func_157(iVar2));
			func_62(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgDescription"))
		{
			if (Global_1913694.f_1579 || !func_134(uParam0->f_61, uParam0->f_62, 1))
			{
				func_159(uParam0);
			}
		}
	}
}

bool func_130(int iParam0)
{
	if (func_178(iParam0) == joaat("CONSUMABLE") && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

char* func_131(var uParam0)
{
	if (func_31(uParam0, 128))
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_132(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_112(iVar0, 2))
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
		func_166(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

bool func_134(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_25(iParam0, 0))
	{
		return func_221(func_167(iParam0), iParam1, bParam2);
	}
	if (func_222(iParam0))
	{
		return func_224(func_223(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_27() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return true;
	}
	if (!func_225(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_135(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694.f_1579 && !bParam5)
	{
		if (func_185(iParam0))
		{
			if (func_224(func_186(iParam0), iParam1))
			{
				return false;
			}
		}
		else if (func_134(iParam0, iParam1, 1))
		{
			return false;
		}
	}
	if (func_185(iParam0))
	{
		if (func_187(func_186(iParam0), iParam1, &Var0, 0, bParam7))
		{
			return true;
		}
	}
	else if (func_226(iParam0, 1, iParam1, &Var0, iParam4, bParam6, 0, bParam7))
	{
		return true;
	}
	*uParam2 = Var0;
	*uParam3 = Var0.f_1;
	return false;
}

bool func_136(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_228(func_227());
	iVar1 = func_228(iParam0);
	return iVar1 > iVar0;
}

bool func_137(int iParam0)
{
	return func_229(Global_1940144.f_38, iParam0);
}

int func_138(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_178(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_230(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_231(iParam0, 0);
	}
	if (func_232(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_171(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_233(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_171(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_139(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_183(iParam0, 0, 0) };
	return func_234(iParam0, &Var0, 0, bParam1);
}

int func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_148(iParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_80(0)) && !func_81());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715.f_20638)
	{
		iVar35 = Global_1915715.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_235(iVar35, Var0[iVar32 /*2*/]);
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_236(Var0[iVar32 /*2*/], iVar36);
			}
			else
			{
				iVar37 = func_138(Var0[iVar32 /*2*/], 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_237(Var0[iVar32 /*2*/]) || func_238(Var0[iVar32 /*2*/]))
				{
					iVar37 = (iVar37 + func_239(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_240(7, Var0[iVar32 /*2*/], &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_241(7, Var0[iVar32 /*2*/]) + func_242(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar37 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_141(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_142(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	int iVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	int iVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_40);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_40, uParam2->f_35[iVar33]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "visible", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "inUse", 0);
		iVar33++;
	}
	if (!bParam4 && func_148(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = Var0[iVar33 /*2*/];
				if (func_25(iVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "visible", 1);
					if (func_220(iVar31, &Var35, joaat("INVENTORY"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_30[iVar33], "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_30[iVar33], "textureDictionary", Var35.f_1);
					}
					iVar38 = func_138(iVar31, 0, 0, 0);
					bVar39 = iVar38 >= Var0[iVar33 /*2*/].f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_30[iVar33], "count", iVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_30[iVar33], "enabled", func_123(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_30[iVar33], "inUse", 1);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, Var0[iVar33 /*2*/]), Var0[iVar33 /*2*/].f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35[iVar33], &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_35[iVar33], &cVar41, func_123(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_40, -1, 309940639, uParam2->f_35[iVar33]);
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!func_31(uParam2, 4) && ((func_31(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar34 = false;
			if (func_130(iParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_138(iParam0, 0, 0, 0);
			iVar44 = func_139(iParam0, 0);
			if (func_31(uParam2, 2) && !func_136(iParam0))
			{
				bVar34 = false;
				iVar45 = func_227();
				if (iParam0 == iVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_65(iParam0, -1636519629);
				if (!func_137(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_140(iParam0, uParam2->f_62, func_82(), 0);
					if (func_31(uParam2, 2))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, func_243(iParam0)));
					}
					else if (uParam2->f_62 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_57, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_28, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_62 == joaat("COST_CRAFTING_GRILL"))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!func_31(uParam2, 4) && ((func_31(uParam2, 8192) || uParam2->f_62 == -214678071) || uParam2->f_62 == joaat("COST_CRAFTING_GRILL")))
	{
		bVar34 = false;
		if (func_130(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (func_31(uParam2, 2) && !func_136(iParam0))
	{
		iVar49 = func_227();
		if (iParam0 == iVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_28, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_143(var uParam0)
{
	if (func_31(uParam0, 2))
	{
		if (!func_76(uParam0->f_61, -2011345500))
		{
			func_69(&(uParam0->f_1[7]), 1, 1);
			return;
		}
		if (!func_68(uParam0->f_1[7]))
		{
			uParam0->f_1[7] = func_71("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_26 > 0 || uParam0->f_61 == Global_1137047.f_339.f_16) || !func_136(uParam0->f_61))
		{
			func_54(uParam0->f_1[7], 0, 1, 1);
		}
		else
		{
			func_54(uParam0->f_1[7], 1, 1, 1);
		}
	}
}

void func_144(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_145(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_112(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_148(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_25(iParam0, 0))
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
		func_244(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_149(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_178(iParam0);
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
			if (!func_245(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_246(iParam0))
			{
				return true;
			}
			break;
	}
	return func_138(iParam0, 0, 0, 0) >= iParam1;
}

bool func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_151(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_152(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_68(*uParam0))
	{
		iVar0 = func_117(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
		{
			HUD::_UIPROMPT_SET_TAG(Global_1951255[iVar0 /*23*/].f_3, sParam1);
		}
	}
}

struct<10> func_153(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_154(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0)
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

int func_157(int iParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_158(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 0);
}

void func_159(var uParam0)
{
	if ((func_76(uParam0->f_61, 1147021565) || func_31(uParam0, 2)) && !func_76(uParam0->f_61, 1919582297))
	{
		if (func_211(uParam0->f_61, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_61, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 0);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_61, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 1);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgHorse", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_28, "ShowRpgPlayer", 0);
	}
}

void func_160(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_28, "filterIndex");
	uParam0->f_41 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_28, "filter", func_122(uParam0->f_41));
}

int func_161(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_162(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_REPEATER(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_163(var uParam0)
{
	if (PED::IS_PED_MALE(Global_34))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_164(var uParam0)
{
	return "craft_trans_stow";
}

void func_165(int iParam0)
{
	if (!func_247(iParam0))
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

void func_166(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_145(iParam0, 1);
	func_146(iParam0, 1);
	func_147(iParam0, 128);
}

int func_167(int iParam0)
{
	return iParam0;
}

int func_168(int iParam0, int iParam1)
{
	if (!func_248(iParam0, 2))
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

bool func_169(int iParam0)
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

bool func_170(int iParam0)
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

int func_171(bool bParam0)
{
	if (func_27() == -1)
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

int func_172(int iParam0)
{
	iParam0 = func_249(iParam0);
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

float func_173(int iParam0, int iParam1, bool bParam2)
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
	return func_250(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_174(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar34;
	int iVar35;
	var uVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (!func_80(0))
	{
		return 0;
	}
	else if (func_81())
	{
		return 0;
	}
	iVar0 = -1;
	if (Global_1915715.f_20638)
	{
		iVar0 = Global_1915715.f_20241;
	}
	if (!func_226(iParam0, 1, iParam1, &iVar32, &uVar36, bParam3, 0, 0))
	{
		iVar34 = iVar32;
		return 0;
	}
	if (func_148(iParam0, iParam1, &Var1, &iVar35, 1, 0))
	{
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			iVar34 = Var1[iVar38 /*2*/];
			iVar37 = func_235(iVar0, iVar34);
			if (iVar37 != 0)
			{
				bParam3 = false;
			}
			if (func_25(iVar34, 0))
			{
				if (iVar34 == joaat("CURRENCY_CASH"))
				{
					func_251(Var1[iVar38 /*2*/].f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_237(iVar34) || func_238(iVar34))
					{
						if (!func_149(iVar34, Var1[iVar38 /*2*/].f_1))
						{
							iVar39 = func_252(7, iVar34, Var1[iVar38 /*2*/].f_1);
						}
						func_253(iVar34, iVar39, 562618531, 0, 0);
						Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - iVar39);
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (!func_149(iVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_254(iVar34, Var1[iVar38 /*2*/].f_1);
							}
							if (func_149(iVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_255(iVar34, Var1[iVar38 /*2*/].f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (func_242(iVar34) > 0)
						{
							func_256(iVar34);
							Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - 1);
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (func_241(7, iVar34) > 0)
							{
								func_257(7, iVar34, Var1[iVar38 /*2*/].f_1);
								Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - func_257(7, iVar34, Var1[iVar38 /*2*/].f_1));
							}
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							func_255(iVar34, Var1[iVar38 /*2*/].f_1, bParam2, 562618531);
						}
					}
				}
				else if (iVar37 == 0)
				{
					if (func_237(iVar34) || func_238(iVar34))
					{
						if (!func_149(iVar34, Var1[iVar38 /*2*/].f_1))
						{
							func_254(iVar34, Var1[iVar38 /*2*/].f_1);
						}
					}
					func_255(iVar34, Var1[iVar38 /*2*/].f_1, bParam2, 562618531);
				}
				else
				{
					func_258(iVar34, iVar37, Var1[iVar38 /*2*/].f_1, 562618531);
				}
				iVar40 = func_259(iVar34);
				if (func_260(iVar40))
				{
					iVar41 = func_261(iVar40);
					func_89(func_88(joaat("USED_IN_RECIPE"), iVar41), Var1[iVar38 /*2*/].f_1);
				}
			}
			iVar38++;
		}
		return 1;
	}
	return 0;
}

struct<2> func_175(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_176(int iParam0, bool bParam1)
{
	if (!func_25(iParam0, 0))
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

void func_177(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_262(iParam0))
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

int func_178(int iParam0)
{
	vector3 vVar0;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_179(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!func_263(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_264() };
	Var10.f_4 = uVar9;
	if (func_265(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_266(iParam0, 1))
			{
			}
		}
		if (func_267(iParam0))
		{
			func_179(func_268(iParam0), 1);
		}
		func_269();
		return true;
	}
	return false;
}

void func_180(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_25(iParam0, 0))
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
	if (!func_270() || bParam6)
	{
		func_271(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_272(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_272(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_273(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_178(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_188(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_220(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (func_76(iParam0, 474910316))
	{
		sVar17 = func_274(iParam0);
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
	if (func_76(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_275(iParam0))
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
	iVar18 = func_276(iParam0);
	if ((func_277(iVar12) && func_76(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_278(iParam0);
	}
	else if (func_178(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_279(iParam0);
		if (func_25(iVar19, 0))
		{
			iVar18 = func_276(iVar19);
		}
	}
	if (func_280(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_281(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_282(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_283(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_284(iParam0, &cVar22))
		{
			sVar21 = func_286(func_285(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_287(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

int func_181(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!func_288(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_289(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_290(iParam0, bParam2);
	iVar2 = 0;
	if (func_178(iParam0) == joaat("CLOTHING"))
	{
		if (!func_76(iParam0, 866047851) && !func_76(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_273(iParam0, 8388608) && !func_291(27))
	{
		func_292(27);
	}
	func_293(iParam0);
	if (!bVar3)
	{
		if (func_76(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_176(func_77(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_27() == -1)
				{
					func_177(iVar1);
				}
				if (func_80(0) && func_294(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_295(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_296(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_178(iParam0) == joaat("WEAPON"))
		{
			if (!func_297(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_178(iParam0) == joaat("AMMO") && func_298(iParam0))
		{
			if (!func_299(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_76(iParam0, -103750053))
		{
			func_89(func_175(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_89(func_88(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_76(iParam0, -121341956) && !func_76(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_300(536, 0);
			}
			if (func_76(iParam0, -2017733358) || func_76(iParam0, -1369131378))
			{
			}
		}
		else if (func_76(iParam0, -136654233))
		{
			if (func_76(iParam0, -1021472396))
			{
			}
		}
		else if (func_76(iParam0, -1466706512) && func_76(iParam0, 1147021565))
		{
			func_300(519, 0);
		}
		else if (func_76(iParam0, 1147021565) && func_76(iParam0, -524514947))
		{
		}
		else if (func_76(iParam0, 554195525))
		{
		}
		else if (func_76(iParam0, 589988438))
		{
			if (func_301())
			{
				func_302(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_76(iParam0, 787083290) && func_76(iParam0, 949916894))
		{
			func_303(iParam0);
		}
		else if (func_76(iParam0, -1718133314))
		{
			func_304(iParam0);
		}
		else if (func_76(iParam0, -1738650224))
		{
			func_305(iParam0);
		}
		else if (func_76(iParam0, -1112814642) && func_76(iParam0, 949916894))
		{
			func_306(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_76(iParam0, 1841149704))
		{
			func_307();
		}
		else if (func_76(iParam0, -1979000645))
		{
		}
		else if (func_76(iParam0, 606799272))
		{
		}
		else if (func_76(iParam0, -1112814642) && func_76(iParam0, -1697809989))
		{
		}
		else if (func_76(iParam0, -2017733358) || func_76(iParam0, -1369131378))
		{
		}
		else if (func_76(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_76(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_149(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_181(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_149(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_181(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_149(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_181(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_149(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_181(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_149(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_181(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_149(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_181(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_76(iParam0, -839724752) && func_273(iParam0, 4))
		{
		}
		else if (func_76(iParam0, 1399091007))
		{
			func_308(iParam0, &iVar2);
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
				func_309(272, func_276(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_309(270, func_276(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_309(271, func_276(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_310(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_310(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_310(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_310(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_310(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_310(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_300(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_300(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_291(1))
				{
					func_300(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_300(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_27() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_300(534, 0);
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
		func_311(&iVar5);
		if (!func_296(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_80(0))
		{
			return 1;
		}
		if (func_178(iParam0) == joaat("CLOTHING"))
		{
			func_312(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_80(0) && !func_81())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_181(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_313(iVar2, 0);
		}
	}
	Var30 = { func_314(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_315(iParam0);
	if (fParam6 > 0f)
	{
		if (func_76(iParam0, -839724752))
		{
			func_316(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_180(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_182(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_317(iParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_318(iParam1);
	Var0 = { func_319(0) };
	if (!func_265(iParam0, &uVar5, &Var0, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

struct<5> func_183(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_319(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_178(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_320(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_321(bParam1) };
			if (bParam2 && func_322(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_323(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_323(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_324(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_325(bParam1) };
			switch (func_188(iParam0))
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
			if (func_326(iParam0, -1823706425))
			{
				Var0 = { func_320(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_326(iParam0, -1483207246))
			{
				Var0 = { func_320(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_320(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_326(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_327(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_326(iParam0, -1653629781))
			{
				Var0 = { func_320(1384535894, Var0, 1784584921, bParam1) };
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

bool func_184(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_328(&iParam0);
	if (!func_25(iParam0, 0) && !func_248(func_167(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_232(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_329(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_321(0) };
		Var4.f_9 = -1591664384;
		if (!func_323(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_324(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_322(iParam0, 1))
		{
			if (!func_323(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_324(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_234(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_330(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_185(int iParam0)
{
	return (func_331(iParam0) && func_76(iParam0, 1584357097));
}

int func_186(int iParam0)
{
	if (!func_185(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_187(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_332(iParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_333(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
			{
				if (!bParam4 && !func_334(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_235(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_236(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_138(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

int func_188(int iParam0)
{
	struct<2> Var0;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_189(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<17> Var53;

	if (!func_25(iParam0, 0))
	{
		return -1;
	}
	if (func_178(iParam0) != joaat("FEE"))
	{
		return -1;
	}
	if (func_81())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_335(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_CASH")) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_335(iParam0, iParam5, 1, 0, 1, joaat("CURRENCY_GOLD_BAR")) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_148(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_138(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_80(0))
	{
		if (iVar0 > 0)
		{
			func_253(joaat("CURRENCY_CASH"), iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_253(joaat("CURRENCY_GOLD_BAR"), iVar1, -142743235, 0, 0);
		}
		else if (func_336(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_253(Var2[iVar35 /*2*/], iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_337(joaat("SPEND"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_194(iVar52, Var53);
	}
	return iVar52;
}

bool func_190(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	if (!func_338(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_339(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_340(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = joaat("BATCH");
	}
	if (!func_341(iParam0, uParam2, iVar0, iParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_191(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, int iParam12)
{
	struct<16> Var0;

	if (!func_338(iParam0, 0))
	{
		return false;
	}
	if (!func_342(iParam0, iParam1, Param2, iParam6, iParam10, iParam7, iParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_343(iParam1, Param2, iParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (!func_344(iParam0, &Var0, 2113164098, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_192(int iParam0, int iParam1)
{
	struct<37> Var0;
	int iVar47;
	int iVar48;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = ITEMDATABASE::_0x12DF9C58201DD19A(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(iParam0, iVar48, &Var0) && Var0 == iParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
{
	struct<37> Var0;

	if (func_222(iParam0))
	{
		return func_192(func_223(iParam0, 1), iParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_194(int iParam0, struct<17> Param1)
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

void func_195(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1951255[iVar0 /*23*/].f_3);
}

float func_196(var uParam0)
{
	if (!func_96(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_345(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_346() - uParam0->f_1);
}

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_198(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_346() - fParam1);
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0f;
}

var func_199(int iParam0)
{
	var uVar0;

	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam0);
	return uVar0;
}

void func_200(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam15))
	{
		return;
	}
	if (!func_100(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

void func_201(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1134390[iVar0 /*83*/].f_38.f_28.f_2) || Global_1134390[iVar0 /*83*/].f_38.f_28.f_2 == iParam0) || bParam1)
		{
			Global_1134390[iVar0 /*83*/].f_38.f_28.f_2 = 255;
			Global_1134390[iVar0 /*83*/].f_38.f_28.f_3 = -1;
		}
	}
}

void func_202(int iParam0, var uParam1)
{
	struct<7> Var0;
	struct<5> Var7;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var0, &Var7, &Var0);
	Global_1134390[iParam0 /*83*/].f_38.f_28.f_1 = uParam1;
	Global_1137047.f_339.f_1 = uParam1;
	Global_1137047.f_339.f_9 = { Var0 };
}

int func_203(int iParam0)
{
	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return func_349(PLAYER::PLAYER_ID());
	}
	return func_350(GANG::_0x4BE6C13A45CCA8EC(iParam0));
}

void func_204(int iParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	Var0.f_12 = uParam1;
	func_200(17, Var0, func_351(0, 8));
}

void func_205(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_200(13, Var0, func_199(GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))));
}

struct<2> func_206(int iParam0)
{
	return func_88(joaat("MADE"), iParam0);
}

struct<2> func_207(int iParam0)
{
	struct<2> Var0;

	if (func_211(iParam0, 0))
	{
		Var0 = { func_88(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) };
	}
	else if (func_211(iParam0, 2))
	{
		Var0 = { func_88(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) };
	}
	else if (func_211(iParam0, 5))
	{
		Var0 = { func_88(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) };
	}
	else if (func_211(iParam0, 1))
	{
		Var0 = { func_88(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) };
	}
	else if (func_211(iParam0, 3))
	{
		Var0 = { func_88(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) };
	}
	else if (func_211(iParam0, 4))
	{
		Var0 = { func_88(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) };
	}
	return Var0;
}

Vector3 func_208(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1134390[func_352() /*83*/].f_38;
	}
	return Global_1134390[iParam0 /*83*/].f_38;
}

int func_209(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_353(iParam2, -372840566);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_354(uParam1, iParam0, Var3);
	return 1;
}

int func_210(int iParam0, bool bParam1, int iParam2)
{
	if (func_355(255))
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!func_356(iParam0))
	{
		return 0;
	}
	if (!func_106(func_357(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_211(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_178(iParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_76(iParam0, -537818634) || func_76(iParam0, -458578204)) && !func_76(iParam0, -1242251796)) && !func_76(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (func_76(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == joaat("WEAPON"))
			{
				return true;
			}
			else if (iVar0 == joaat("AMMO"))
			{
				if (func_76(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_130(iParam0) || func_65(iParam0, -1636519629) == -701492487) || iParam0 == joaat("PROVISION_MOONSHINE_POISON"))
			{
				return true;
			}
			break;
		case 4:
			if (func_76(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_76(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_358())
	{
		return 0;
	}
	if (!NETWORK::_0xDD73C9838CE7181D())
	{
		return 0;
	}
	if (func_359())
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	iVar1 = func_361(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_106(func_362(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_213(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == joaat("COST_TYPE_CRAFT") && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913694.f_1579 || !func_134(iParam1, Var1, 1)))
				{
					Global_1913694[(uParam0->f_44 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1913694[(uParam0->f_44 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_214(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_65(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_153(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) };
	if (func_154(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_155(iVar13, iVar0);
			if (func_25(iVar14, 0))
			{
				if (Global_1913694.f_1579 || !func_134(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					Global_1913694[(uParam0->f_44 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		func_156(iVar0);
	}
}

void func_215(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_65(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_153(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_154(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_44 >= 175)
			{
			}
			else
			{
				iVar14 = func_155(iVar13, iVar0);
				if (func_25(iVar14, 0) && iVar14 != iParam1)
				{
					func_120(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_156(iVar0);
	}
}

void func_216(int iParam0)
{
	func_156(*iParam0);
	*iParam0 = -1;
}

void func_217(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	iVar0 = Global_1913694[iParam1 /*9*/].f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1913694[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913694[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, &cVar1);
	Global_1913694[iParam1 /*9*/].f_1 = iVar5;
	iVar6 = Global_1913694[iParam1 /*9*/].f_5;
	iVar7 = func_140(iVar0, iVar6, bParam3, 0);
	iVar8 = func_138(iVar0, 0, 0, 0);
	iVar9 = func_139(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1913694.f_1579 && func_134(iVar0, iVar6, 1))
	{
		bVar10 = true;
		Global_1913694[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1913694[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1913694[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar11, func_141(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (func_31(uParam0, 2))
	{
		iVar12 = func_123(((iVar7 > 0 && func_136(iVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_123(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_218(iVar0))
	{
		if (func_219(iVar0, iVar6, uParam0, bParam3, &iVar14, &iVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			iVar0 = iVar14;
			iVar6 = iVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", iVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", iVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_220(iVar0, &Var17, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!func_31(uParam0, 4))
	{
		if ((iVar6 == -214678071 || iVar6 == joaat("COST_CRAFTING_GRILL")) || iVar6 == -257768755)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_137(2) && func_65(iVar0, -1636519629) == -701492487)
		{
			Global_1913694[iParam1 /*9*/].f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_46++;
			if (func_211(iVar0, uParam0->f_41))
			{
				uParam0->f_47++;
			}
			Global_1913694[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1913694[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(Var20.f_1[iVar43], &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_29, -1, -2047994727, iVar5);
	}
}

bool func_218(int iParam0)
{
	return true;
}

bool func_219(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!Global_1913694.f_1579 && func_134(iParam0, iParam1, 1))
	{
		return false;
	}
	if (func_31(uParam2, 2) && !func_136(iParam0))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == joaat("COST_CRAFTING_GRILL"))
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_65(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { func_153(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) };
		if (func_154(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				iVar14 = func_155(iVar13, iVar0);
				if (iParam0 == iVar14)
				{
				}
				else if (!Global_1913694.f_1579 && func_134(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
				}
				else if (func_85(iVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0) && !func_86(iVar14, 1, 0))
				{
					func_156(iVar0);
					*iParam4 = iVar14;
					*iParam5 = joaat("COST_CRAFTING_GRILL");
					*iParam6 = iVar13;
					return true;
				}
				iVar13++;
			}
			func_156(iVar0);
		}
		if (iParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			Var2 = { func_153(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_154(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_155(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1913694.f_1579 && func_134(iVar16, -214678071, 1))
					{
					}
					else if (func_85(iVar16, -214678071, 0, bParam3, 0) && !func_86(iVar16, 1, 0))
					{
						func_156(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_156(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913694.f_1579 || !func_134(iParam0, Var18, 1)))
					{
						if (func_85(iParam0, Var18, 0, bParam3, 0) && !func_86(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

bool func_220(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_221(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_248(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_27() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 1;
	}
	if (!func_363(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_222(int iParam0)
{
	if (func_76(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_223(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_25(iParam0, 0))
	{
		return func_364(func_167(iParam0), bParam1);
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

bool func_224(int iParam0, int iParam1)
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

bool func_225(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_226(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_222(iParam0))
	{
		return func_187(func_223(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_148(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_80(0)) && !func_81());
	iVar37 = -1;
	if (Global_1915715.f_20638)
	{
		iVar37 = Global_1915715.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && (bParam7 || func_333(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && (bParam7 || func_334(iVar32)))
			{
			}
			else
			{
				iVar36 = func_235(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_236(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_138(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_237(Var0[iVar34 /*2*/]) || func_238(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_240(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_239(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*iParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_241(7, Var0[iVar34 /*2*/])) + func_242(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_227()
{
	int iVar0;

	iVar0 = GANG::_0x4BE6C13A45CCA8EC(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return func_119(iVar0);
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FEE_MEAL_CAMP_STEW_BEST"):
			return 4;
		case joaat("FEE_MEAL_CAMP_STEW_HIGH"):
			return 3;
		case joaat("FEE_MEAL_CAMP_STEW_MED"):
			return 2;
		case joaat("FEE_MEAL_CAMP_STEW_LOW"):
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_76(iParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_178(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_76(iParam0, 1399091007))
	{
		func_365(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_231(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_366(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_367(&Var0, func_321(0));
	}
	if (!func_368(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_369(iVar14);
	return uVar15;
}

int func_232(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

struct<4> func_233(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_183(iParam0, bParam1, 0) };
	return func_320(iParam0, Var0, Var0.f_4, bParam1);
}

int func_234(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_25(iParam0, 0) && !func_248(func_167(iParam0), 2))
	{
		return 0;
	}
	if (func_178(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_232(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_171(bParam3), iParam0);
}

int func_235(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_76(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_319(0) };
	Var0.f_4 = func_318(iParam1);
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_0xC97E0D2302382211(func_171(0), &Var5, 0);
	return iVar9;
}

bool func_237(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_76(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_238(iParam0);
}

bool func_238(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_76(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!func_237(iParam0) && !func_238(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_65(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_153(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_154(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_155(iVar15, iVar1);
			if (func_25(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_370(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_236(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_372(iVar16, func_371(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_156(iVar1);
	}
	return iVar0;
}

int func_240(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
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
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_374(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_241(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = iParam1;
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
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_242(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

char* func_243(int iParam0)
{
	switch (func_228(iParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

void func_244(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_188((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_245(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_230(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_375("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_376(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_262(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_369(iVar1);
				return true;
			}
			iVar3++;
		}
		func_369(iVar1);
	}
	return false;
}

bool func_246(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_188(iParam0);
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
	iVar1 = func_377(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_378(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_379(iParam0);
	iVar2 = func_378(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

bool func_247(int iParam0)
{
	return func_112(iParam0, 2);
}

bool func_248(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

int func_249(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

float func_250(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_251(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_27() == 0)
	{
		iVar0 = func_380();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_381(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_382(iParam0);
		if (bParam3)
		{
			func_383(iParam0, sParam1, iParam2);
		}
	}
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
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
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_374(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_296(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = func_384(&iVar28);
							if (!func_25(iVar31, 0))
							{
								iVar31 = func_385(iVar28);
							}
							if (func_25(iVar31, 0))
							{
								func_386(iVar31, 1, 1, -142743235);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

bool func_253(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_232(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_387(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_183(iParam0, bParam4, 0) };
	Var6 = { func_320(iParam0, Var1, Var1.f_4, bParam4) };
	return func_388(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_65(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_153(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_154(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_155(iVar14, iVar0);
					if (func_25(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_138(iVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_389(iVar13, iParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_156(iVar0);
		}
	}
}

bool func_255(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_390(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_230(iParam0, 1);
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
			func_180(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_149(iParam0, 1))
	{
		return false;
	}
	Var5 = { func_314(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_138(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_138(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_255(iParam0, func_138(iParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_178(iParam0) == joaat("WEAPON"))
	{
		if (!func_391(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_253(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_183(iParam0, 0, 0) };
		if (func_80(0) && Var7.f_4 == 1084182731)
		{
			func_392(1, 0, 0);
		}
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1940144.f_21 = 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_180(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

void func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;

	if (!func_25(iParam0, 0))
	{
	}
	if (PED::_IS_PED_CARRYING(Global_34))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_34);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_393(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == iParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::_0x9E7738B291706746(&iVar15, iVar1, PED::_GET_PED_DAMAGE(iVar1)) && iVar15 == iParam0)
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
		}
	}
}

int func_257(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (!func_373(iParam0))
	{
		return 0;
	}
	iVar0 = func_172(iParam0);
	iVar1 = iParam1;
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
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_394(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_27() == 0)
	{
		return 0;
	}
	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_319(0) };
	Var0.f_4 = func_318(iParam1);
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	if (!func_388(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)
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

bool func_260(int iParam0)
{
	return !iParam0 <= 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HARRIETUM_OFFICINALIS");
		case 20:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 21:
			return joaat("HERB_INDIAN_TOBACCO");
		case 24:
			return joaat("HERB_MILKWEED");
		case 27:
			return joaat("HERB_OLEANDER_SAGE");
		case 28:
			return joaat("HERB_OREGANO");
		case 29:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 30:
			return joaat("HERB_PRAIRIE_POPPY");
		case 32:
			return joaat("HERB_RAMS_HEAD");
		case 34:
			return joaat("HERB_RED_RASPBERRY");
		case 35:
			return joaat("HERB_RED_SAGE");
		case 38:
			return joaat("HERB_VANILLA_FLOWER");
		case 39:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 49:
			return joaat("HERB_WILD_CARROTS");
		case 50:
			return joaat("HERB_WILD_FEVERFEW");
		case 51:
			return joaat("HERB_WILD_MINT");
		case 52:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 53:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 22:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 23:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 25:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 26:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 31:
			return joaat("HERB_QUEENS_ORCHID");
		case 33:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 36:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 37:
			return joaat("HERB_SPIDER_ORCHID");
		case 40:
			return joaat("HERB_WILD_FLWR_AGARITA");
		case 42:
			return joaat("HERB_WILD_FLWR_BITTERWEED");
		case 43:
			return joaat("HERB_WILD_FLWR_BLOOD_FLOWER");
		case 41:
			return joaat("HERB_WILD_FLWR_BLUE_BONNET");
		case 44:
			return joaat("HERB_WILD_FLWR_CARDINAL_FLOWER");
		case 45:
			return joaat("HERB_WILD_FLWR_CHOCOLATE_DAISY");
		case 46:
			return joaat("HERB_WILD_FLWR_CREEK_PLUM");
		case 47:
			return joaat("HERB_WILD_FLWR_RHUBARB");
		case 48:
			return joaat("HERB_WILD_FLWR_WISTERIA");
	}
	return 0;
}

bool func_262(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_263(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_188(iParam1);
		iVar5 = func_395(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_396(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_183(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_320(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_171(0);
			Var37 = { func_183(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_320(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_188(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_396(iParam0, iVar1, iVar2))
							{
								if (func_397(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

struct<4> func_264()
{
	struct<4> Var0;

	Var0 = { func_319(0) };
	return func_320(856287005, Var0, -218846335, 0);
}

bool func_265(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_184(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_171(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_266(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (!func_263(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_264() };
	Var14 = { func_320(iParam0, Var10, iVar9, 0) };
	if (func_398(Var14, iParam1, 0))
	{
		if (func_399(iParam0))
		{
			if (func_400(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_266(iVar18, 0))
				{
				}
			}
		}
		else if (func_401(iParam0))
		{
			if (func_400(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_266(iVar19, 0))
				{
				}
			}
			if (func_400(joaat("SLOTID_HORSE_BLANKET"), &iVar20))
			{
				if (func_266(iVar20, 0))
				{
				}
			}
		}
		else if (func_402(iParam0))
		{
			if (func_400(joaat("SLOTID_HORSE_HORN"), &iVar21))
			{
				if (func_266(iVar21, 0))
				{
				}
			}
			if (func_400(joaat("SLOTID_HORSE_BLANKET"), &iVar22))
			{
				if (func_266(iVar22, 0))
				{
				}
			}
			if (func_400(joaat("SLOTID_HORSE_BEDROLL"), &iVar23))
			{
				if (func_266(iVar23, 0))
				{
				}
			}
		}
		else if (func_267(iParam0))
		{
			if (func_400(joaat("SLOTID_HORSE_HORN"), &iVar24))
			{
				if (func_266(iVar24, 0))
				{
				}
			}
			if (func_400(joaat("SLOTID_HORSE_STIRRUP"), &iVar25))
			{
				if (func_266(iVar25, 0))
				{
				}
			}
			iVar26 = func_268(iParam0);
			if (func_25(iVar26, 0))
			{
				if (func_266(iVar26, 1))
				{
				}
			}
		}
		func_269();
		return true;
	}
	return false;
}

bool func_267(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_76(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_269()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_183(856287005, 0, 0) };
	Var5 = { func_320(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_188(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_403(Var5, joaat("SLOTID_HORSE_SADDLE"), 0, -1);
	}
	if (!func_25(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_395(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_403(Var5, iVar11, 0, -1);
			if (!func_25(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (((func_267(iVar14) || func_399(iVar14)) || func_401(iVar14)) || func_402(iVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
						{
							if (func_401(iVar14) || func_402(iVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == joaat("SLOTID_HORSE_BEDROLL"))
								{
									if (func_402(iVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
										{
											if (func_267(iVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
												{
													if (!func_267(iVar14) && func_404(iVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_405(iVar11, &Var16, 1))
													{
														if (!func_398(Var16, 1, 0))
														{
														}
													}
												}
											}
											iVar9++;
											return 1;
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
}

bool func_270()
{
	return !Global_1913504;
}

void func_271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_272(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_273(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

char* func_274(int iParam0)
{
	if (func_76(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_76(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_76(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_76(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_76(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_76(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_76(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_76(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_76(iParam0, -352095726) || func_76(iParam0, -2014783736)) || func_76(iParam0, -545064757)) || func_76(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_275(int iParam0)
{
	if (func_76(iParam0, -189374246))
	{
		if (((func_406(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_406(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_406(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_406(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_76(iParam0, -753854379) || func_76(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

int func_276(int iParam0)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_407(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_277(int iParam0)
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

int func_278(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_25(iParam0, 0))
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

int func_279(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_408(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_153(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_154(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_409(iVar14))
			{
				func_156(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_156(iVar11);
	}
	return 0;
}

bool func_280(int iParam0, int iParam1)
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

bool func_281(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_25(iParam0, 0) && !func_248(func_167(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

char* func_282(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_283(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_410(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_284(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_411(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_412(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_413(iParam0), 128);
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

char* func_285(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_286(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_282(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_287(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_414(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_288(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_27() == -1)
	{
		if (func_329(iParam0) && func_415(iParam0))
		{
			func_416(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_289(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_417(iParam0, iParam1);
	Var0 = { func_183(iParam0, 0, 1) };
	iVar5 = func_234(iParam0, &Var0, 0, 0);
	iVar6 = func_418(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_76(iParam0, -2051813666))
		{
			func_300(674, 1);
		}
		else if (func_27() == -1)
		{
			func_300(673, 0);
		}
	}
	if (func_184(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_290(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_419())
	{
		return;
	}
	switch (func_65(iParam0, -949239683))
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

bool func_291(int iParam0)
{
	if (!func_420(iParam0))
	{
		return false;
	}
	return func_421(iParam0);
}

void func_292(int iParam0)
{
	if (!func_420(iParam0))
	{
		return;
	}
	func_422(iParam0);
	func_423(iParam0);
}

void func_293(int iParam0)
{
	if (func_76(iParam0, -1522723129))
	{
		func_106(-848633709, 0, 255, 0, 0);
	}
	else if (func_76(iParam0, -283942357))
	{
		func_106(-981153234, 0, 255, 0, 0);
	}
	else if (func_76(iParam0, 683680997))
	{
		func_106(-756350192, 0, 255, 0, 0);
	}
	else if (func_76(iParam0, 1307628809))
	{
		func_106(603094518, 0, 255, 0, 0);
	}
}

bool func_294(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_183(iParam0, 0, 1) };
		if (func_323(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_324(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_320(iParam0, Var0, Var0.f_4, 0) };
				func_388(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_80(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_295(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_424(iParam0, iParam1);
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

bool func_295(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_296(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_232(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_425(iParam0, iParam1, iParam2);
	}
	Var1 = { func_183(iParam0, 0, 1) };
	Var6 = { func_320(iParam0, Var1, Var1.f_4, 0) };
	return func_265(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_297(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_176(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_27() == -1)
		{
			func_177(iVar0);
			if (iParam1 == 1248274121)
			{
				func_426(iVar0);
			}
		}
		if (!func_184(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_416(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_427(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_294(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_294(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_294(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_428())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_429(iVar0))
				{
					func_294(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_294(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_430(Global_34, 2, 0, 1);
				if ((((func_262(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_149(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_262(iVar7) && func_149(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_294(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_294(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_294(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_300(515, 1);
	}
	return true;
}

bool func_298(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_298(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_262(iVar4))
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
		func_309(func_431(iParam0), func_276(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_80(0))
	{
		if (func_295(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_296(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_300(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_432(iParam0, &iVar0, &iVar1);
	if (!func_433(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_434(iVar0, iVar1);
}

bool func_301()
{
	return false;
}

int func_302(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_27() == 0)
	{
		func_313(iParam0, 0);
		return 0;
	}
	iVar0 = func_435(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_436(iVar0, sParam4, iParam5, 0);
	}
	func_437(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_303(int iParam0)
{
}

void func_304(int iParam0)
{
}

void func_305(int iParam0)
{
}

void func_306(int iParam0)
{
}

void func_307()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_308(int iParam0, int iParam1)
{
	var uVar0;

	func_365(iParam0, iParam1, &uVar0);
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_432(iParam0, &iVar0, &iVar1);
	if (!func_433(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_438(iParam0, 1024))
	{
		return;
	}
	func_434(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_310(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_432(iParam0, &iVar0, &iVar1);
	if (!func_433(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_438(iParam0, 1024))
	{
		return;
	}
	func_434(iVar0, iVar1);
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

void func_311(int iParam0)
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

void func_312(int iParam0)
{
	if (func_27() != -1)
	{
		return;
	}
}

int func_313(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_439(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_440(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_314(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_25(iParam0, 0))
	{
		return Var0;
	}
	if (func_76(iParam0, -305066475))
	{
		if (func_27() == -1)
		{
			if (func_76(iParam0, -537818634))
			{
				return func_441(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_441(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_76(iParam0, -537818634))
	{
		return func_441(joaat("MEDICINE_ITEMS"));
	}
	if (func_76(iParam0, 2084895747))
	{
		return func_441(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_315(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_316(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_442(Global_1903071.f_37);
	func_287(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_443(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_317(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_318(iParam1);
	if (!func_444(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_234(iParam0, &Var0, 0, 0);
	iVar6 = func_418(iParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

int func_318(int iParam0)
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

struct<4> func_319(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_171(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_320(joaat("CHARACTER"), func_445(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_320(joaat("CHARACTER"), func_445(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_320(joaat("CHARACTER"), func_445(), -1591664384, bParam0);
}

struct<4> func_320(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_25(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_171(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_321(bool bParam0)
{
	int iVar0;

	iVar0 = func_171(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_320(923904168, func_319(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_320(923904168, func_319(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_320(923904168, func_319(bParam0), -740156546, 0);
}

bool func_322(int iParam0, bool bParam1)
{
	if (func_188(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_446();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_323(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_330(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_324(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_447(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_325(bool bParam0)
{
	int iVar0;

	iVar0 = func_171(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_320(271701509, func_319(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_320(271701509, func_319(bParam0), 12999093, 0);
}

bool func_326(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_188(iParam0);
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
			if (func_396(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_327(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_448(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_328(int iParam0)
{
	if (!func_25(*iParam0, 0))
	{
		return 0;
	}
	if (!func_449(*iParam0))
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

bool func_329(int iParam0)
{
	return func_178(iParam0) == joaat("WEAPON");
}

int func_330(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_232(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_320(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_171(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_171(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_331(int iParam0)
{
	return func_188(iParam0) == 1868067663;
}

bool func_332(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_450(iParam0))
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
		func_451(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_333(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_27() == 0)
	{
		return func_452(iParam0);
	}
	return iParam0 <= func_380();
}

bool func_334(int iParam0)
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

int func_335(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_453(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_222(iParam0))
	{
		return func_454(func_223(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_148(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_336(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_337(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_455(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_457(func_456(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

bool func_338(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_459(iParam0))
		{
			return false;
		}
	}
	if (func_460(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("SELL")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("USE")))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

int func_339(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_450(iParam0))
	{
		return 0;
	}
	bVar1 = func_113(iParam3, 2);
	bVar2 = func_461(iParam0, -570078785, bVar1);
	bVar3 = func_461(iParam0, -915411861, bVar1);
	if (func_461(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_462(iParam0, &iVar0) || func_463(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_464())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_465(15) && func_461(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_340(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_461(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_113(iParam2, 2))
	{
		if (func_224(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 0;
	}
	if (func_113(iParam2, 8))
	{
		return func_466(iParam0, iParam1);
	}
	return 1;
}

bool func_341(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_332(uParam1->f_16, iParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_467(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_468(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_469(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_470(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_471(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_472(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_473(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_474(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_475(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_476(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_477(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_478(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_479(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_480(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_481(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_342(int* iParam0, int iParam1, struct<4> Param2, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	struct<10> Var0;
	struct<4> Var14;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (func_113(iParam9, 32))
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_327(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_396(iParam1, func_188(Var0.f_4), iParam6))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 1))
	{
		if (!func_482(iParam1))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 2))
	{
		if (func_134(iParam1, iParam7, 1))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 4))
	{
		if (!bParam10 && !INVENTORY::_0xB881CA836CC4B6D4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = iParam6;
		Var14 = { Param2 };
		iVar19 = func_330(iParam1, Param2, iParam6, 1, !bParam10, 0);
		iVar20 = func_234(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_281(iParam1, iParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_483(iParam0, iParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (iParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_113(iParam9, 8))
	{
		return func_484(iParam0, iParam1, iParam7, iParam8);
	}
	return 1;
}

struct<16> func_343(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_320(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_232(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_445() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_344(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_148(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_485(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_486(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_487(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_488(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_489(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_490(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_491(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_492(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_493(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_494(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_495(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_496(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_497(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_498(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_499(iParam0, uParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_345(var uParam0)
{
	return func_197(*uParam0, 2);
}

float func_346()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_349(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1134390[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_350(int iParam0)
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

var func_351(int iParam0, int iParam1)
{
	return func_500(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

int func_352()
{
	return Global_1102219.f_3672;
}

void func_353(int iParam0, int iParam1)
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

void func_354(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_460(uParam0))
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

bool func_355(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_501(36, iParam0);
}

bool func_356(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

int func_357(int iParam0)
{
	if (!func_356(iParam0))
	{
		return 0;
	}
	return Global_1139381.f_11[iParam0 /*3*/].f_2;
}

bool func_358()
{
	return (func_502(0) && func_502(1));
}

bool func_359()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

int func_360(int iParam0)
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

int func_361(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_503(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_50[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	return 1;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_363(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_248(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_504(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_364(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_248(iParam0, 2))
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

void func_365(int iParam0, int iParam1, var uParam2)
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

struct<14> func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_367(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_368(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_171(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_369(int iParam0)
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

int func_370(int iParam0)
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

int func_371(int iParam0)
{
	if (func_76(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_76(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_76(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_25(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_373(int iParam0)
{
	iParam0 = func_249(iParam0);
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

bool func_374(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::_0x9A100F1CF4546629(iVar0))
	{
		return false;
	}
	if (FLOCK::_0xF8B48A361DC388AE(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_0x8DE41E9902E85756(iParam0))
	{
		return false;
	}
	if (FIRE::_0xCDC25355C0D65963(iParam0))
	{
		return false;
	}
	return true;
}

bool func_375(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_171(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_376(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_377(int iParam0)
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

int func_378(var uParam0, int iParam1)
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

int func_379(int iParam0)
{
	int iVar0;

	iVar0 = func_188(iParam0);
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

int func_380()
{
	if (func_27() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_381(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_183(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_505(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_337(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_194(iVar0, Var22);
	}
	return iVar0;
}

void func_382(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_380() < iParam0)
	{
		iParam0 = func_380();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_441(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_383(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_287(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_384(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_506(iVar0);
}

int func_385(int iParam0)
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
			iVar0 = func_506(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_386(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = func_507(iParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_508(iParam0, iParam1, bParam2, iParam3);
}

int func_387(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_509(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_232(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_80(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_510(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_511(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_337(joaat("USE"), &Var65, 1);
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
			func_194(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_171(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_388(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_509(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_327(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_80(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_27() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_337(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_194(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_171(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_389(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<17> Var13;

	iVar0 = -1;
	iVar1 = func_371(iParam0);
	iVar2 = func_370(iParam0);
	if (iVar2 != 0)
	{
		if (!func_80(0) || func_81())
		{
			if (bParam2)
			{
				func_89(func_88(joaat("BROKEN_DOWN"), joaat("SMALL_ANIMALS")), 1);
				return func_512(iVar2, iVar1, iParam0, iParam1);
			}
			Var3 = { func_183(iParam0, 1, 0) };
			Var8 = { func_320(iParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_513(iParam0, &Var8, 1, -142743235, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -142743235;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_194(iVar12, Var13);
			}
			return 0;
		}
		if (func_255(iParam0, 1, 1, -142743235))
		{
			iVar0 = func_512(iVar2, iVar1, iParam0, iParam1);
		}
	}
	return iVar0;
}

bool func_390(int iParam0)
{
	return func_178(iParam0) == joaat("CONSUMABLE");
}

bool func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_366(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_367(&Var0, func_321(0));
	}
	if (!func_368(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_376(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_388(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_369(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_392(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311.f_4 = bParam0;
	Global_1940311.f_34 = iParam2;
	if (bParam1 || (func_514() && iParam2 == 0))
	{
		func_515(1);
		func_516(1);
	}
}

int func_393(int iParam0, var uParam1)
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
	iVar0 = PED::_GET_PED_DAMAGE(iParam0);
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
		iVar3 = PED::_GET_PED_QUALITY(iParam0);
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
	if (Global_17333.f_2 != 3)
	{
		iVar1 = Global_17333.f_2;
	}
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, iVar0, iVar2);
	return uVar4;
}

bool func_394(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_319(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_320(iParam0, Var0, Var0.f_4, 0) };
	return func_388(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_395(int iParam0)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_396(int iParam0, int iParam1, int iParam2)
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

bool func_397(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_517(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

bool func_398(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_80(0))
	{
		return func_518(&Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_327(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_171(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_399(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (func_76(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_519(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_264() };
	*iParam1 = func_403(Var0, iParam0, 0, -1);
	if (!func_25(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_401(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	return ((iParam0 == 1362183957 || iParam0 == 563996796) || iParam0 == joaat("HORSE_EQUIPMENT_MOONSHINERSADDLE_001_IMPROVED_NEW_SADDLE_000"));
}

bool func_402(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	return (iParam0 == 2031387366 || iParam0 == joaat("HORSE_EQUIPMENT_NATURALISTSADDLE_001_IMPROVED_NEW_SADDLE_000"));
}

int func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_520(&uParam0, iParam4, bParam5, iParam6);
}

bool func_404(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_405(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_366(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	func_367(&Var2, func_264());
	if (func_368(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_376(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_25(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_404(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_369(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_369(iVar0);
	}
	return false;
}

int func_406(int iParam0, int iParam1)
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

int func_407(int iParam0)
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

int func_408(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_25(iParam0, 0))
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

bool func_409(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (func_76(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_410(int iParam0, int iParam1)
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

char* func_411(int iParam0)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_412(int iParam0)
{
	if (func_188(iParam0) == -126813555 || func_188(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_413(int iParam0)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_278(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

void func_414(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_415(int iParam0)
{
	var uVar0;

	if (func_27() != -1)
	{
		return false;
	}
	if (func_273(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_184(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_149(iParam0, 1);
}

void func_416(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_178(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_176(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_170(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_138(iParam0, 0, 0, 0) == 0))
		{
			if (func_27() == -1)
			{
				func_177(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_180(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_417(int iParam0, int iParam1)
{
	if (func_76(iParam0, 58855631))
	{
		func_281(iParam0, -915411861, iParam1, 1);
	}
}

int func_418(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_298(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_171(bParam1), iParam0, iParam3);
}

bool func_419()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_521(Global_34, 1369124074)) && !func_521(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

bool func_420(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

void func_422(int iParam0)
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

void func_423(int iParam0)
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
			func_522(1);
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
			func_523(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_523(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_523(3);
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
			func_524(1);
			break;
		case 33:
			func_525(1);
			break;
		case 34:
			func_526(1);
			break;
		case 35:
			break;
		case 36:
			func_527(0);
			break;
		case 37:
			func_528(0);
			break;
		case 38:
			func_529(0);
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
			if (func_530() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_300(677, 0);
			break;
		case 3:
			if (func_530() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_300(678, 0);
			break;
		case 4:
			if (func_530() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_300(679, 0);
			break;
		case 5:
			if (func_530() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_531("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_300(680, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_27() == -1)
			{
				if (!func_149(1013902307, 1))
				{
					func_296(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_27() == -1)
			{
				if (!func_149(1013902307, 1))
				{
					func_296(1013902307, 1, 752097756);
				}
				if (!func_149(142640135, 1))
				{
					func_296(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_27() == -1)
			{
				if (!func_149(786809402, 1))
				{
					func_296(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_27() == -1)
			{
				if (!func_149(786809402, 1))
				{
					func_296(786809402, 1, 752097756);
				}
				if (!func_149(-518019409, 1))
				{
					func_296(-518019409, 1, 752097756);
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

void func_424(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_141(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

int func_425(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_232(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_183(iParam0, 0, 0) };
	if (func_184(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_80(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_171(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_426(int iParam0)
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
	iVar2 = func_532();
	func_533(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_427(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_26(iParam0))
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

bool func_428()
{
	return false;
}

bool func_429(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_430(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_431(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_291(49))
			{
				if (!func_291(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_291(50))
			{
				if (!func_291(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_432(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_433(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_534(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_535(iParam0))
	{
		return false;
	}
	if (func_536(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_438(iParam0, 1)) || func_537(32768))
	{
		if (!func_438(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_538())
	{
		return false;
	}
	return true;
}

void func_434(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_435(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_149(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
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
			if (func_25(iVar25, 0) && func_76(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_436(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_539(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_287(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_437(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_540() || func_541())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_287(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_287(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_89(func_441(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_438(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_439(var uParam0, int iParam1)
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

int func_440(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_542(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_543(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_441(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_442(int iParam0)
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

int func_443(int iParam0)
{
	var uVar0;

	if (!func_150(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_444(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_188(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_544(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_445()
{
	struct<4> Var0;

	return Var0;
}

bool func_446()
{
	return (func_418(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_403(func_320(joaat("WARDROBE"), func_319(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_447(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_171(0);
	*uParam1 = { func_320(iParam0, func_321(0), iParam3, 0) };
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

bool func_448(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_171(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0)
{
	return func_76(iParam0, 1279601681);
}

bool func_450(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

void func_451(int iParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_188((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_452(int iParam0)
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

bool func_453(int iParam0, int iParam1)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	if (func_222(iParam0))
	{
		return func_461(func_223(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_332(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_455(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_545(uParam1->f_8, iParam0, uVar0, 2048) || func_545(uParam1->f_8, iParam0, uVar0, 32768)) || func_545(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_545(uParam1->f_8, iParam0, uVar0, 4) || func_545(uParam1->f_8, iParam0, uVar0, 256)) || func_545(uParam1->f_8, iParam0, uVar0, 65536)) || func_545(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_545(uParam1->f_8, iParam0, uVar0, 1) || func_545(uParam1->f_8, iParam0, uVar0, 8)) || func_545(uParam1->f_8, iParam0, uVar0, 65536)) || func_545(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_545(uParam1->f_8, iParam0, uVar0, 1) || func_545(uParam1->f_8, iParam0, uVar0, 16)) || func_545(uParam1->f_8, iParam0, uVar0, 2)) || func_545(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_545(uParam1->f_8, iParam0, uVar0, 8) || func_545(uParam1->f_8, iParam0, uVar0, 4096)) || func_545(uParam1->f_8, iParam0, uVar0, 256)) || func_545(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_456(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_457(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_546(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_546(iParam1, 2, 0, 0);
	return -1;
}

int func_458(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_546(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_459(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_547(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_460(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_461(int iParam0, int iParam1, bool bParam2)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_224(iParam0, iParam1);
	}
	return true;
}

bool func_462(int iParam0, int iParam1)
{
	*iParam1 = func_548(iParam0, 1);
	return *iParam1 != 0;
}

bool func_463(int iParam0, int iParam1)
{
	*iParam1 = func_549(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_464()
{
	return Global_1915715.f_22477;
}

bool func_465(int iParam0)
{
	if (iParam0 == 34 && Global_1915715.f_22504.f_1)
	{
		return true;
	}
	if (func_3(1))
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -570078785)
	{
		iVar0 = func_454(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_334(iVar0))
		{
			if (Global_1915715.f_20644)
			{
				func_551(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_550(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_454(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_333(iVar1))
		{
			if (Global_1915715.f_20644)
			{
				func_551("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_187(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_467(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_468(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_469(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_470(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_471(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_472(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_473(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_474(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_475(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_476(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_477(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_478(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_479(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_480(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_481(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_552(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_482(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_27() == -1)
	{
		if (func_329(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_483(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != iParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_484(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_553(iParam1, 1) && !func_554(iParam1, 1))
	{
		if (Global_1915715.f_20644)
		{
			func_551(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (iParam2 == -570078785)
	{
		iVar0 = func_335(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * iParam3);
		if (!func_334((iVar1 + func_555(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_551(MISC::_CREATE_VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (iParam2 == -915411861)
	{
		iVar2 = func_335(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * iParam3);
		if (!func_333((iVar3 + func_555(iParam0, iParam2))))
		{
			if (Global_1915715.f_20644)
			{
				func_551("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam2 == 997808187)
	{
		return 1;
	}
	if (func_248(func_167(iParam1), 2))
	{
		if (!func_556(func_167(iParam1), iParam3, iParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_25(iParam1, 0))
	{
		if (!func_226(iParam1, iParam3, iParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_485(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_486(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_487(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_488(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_489(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_490(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_491(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_492(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_493(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_494(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_495(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_496(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_497(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_498(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_499(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_557(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

var func_500(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_558() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_559());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_560(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_355(iVar2))
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
				if (iVar9 & 8192 != 0 && func_561(iVar2) != 1)
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
					if (!func_562(iVar10))
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

bool func_501(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_563(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_352())
	{
		return func_563(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_563(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_502(int iParam0)
{
	return func_563(&(Global_1956200.f_1565), iParam0, 1);
}

int func_503(int iParam0)
{
	return func_564(func_502(iParam0));
}

bool func_504(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(iParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<16> func_505(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_320(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_232(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_445() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_506(int iParam0)
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
	iVar2 = func_565(iVar0);
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
			iVar6 = func_566(iVar5);
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

int func_507(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = func_567(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_568(iVar0, iParam0);
		if (iVar1 > 0)
		{
			if (iParam1 < iVar1)
			{
				iVar1 = iParam1;
			}
			iParam1 = (iParam1 - iVar1);
			func_569(&iVar0, iParam0, &iVar1, bParam3, iParam4, iParam5);
			iParam1 = (iParam1 + iVar1);
		}
	}
	iParam1 = func_570(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, iParam5);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_508(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_138(iParam0, 0, 0, 0);
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
		if (!func_255(iParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_571(iParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_572(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_571(iParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_573("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_509(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_510(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_232(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_574(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_511(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_320(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_512(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_80(0) || func_81())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_576(iParam1, func_575(iParam2), &Var1, 1);
		if (func_577(iVar0, &Var1, 0, 0))
		{
		}
		func_300(501, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_575(iParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_25(uVar13[iVar29], 0) && !func_76(uVar13[iVar29], 1286414894)) && !uVar13[iVar29] == iParam2)
		{
			func_181(uVar13[iVar29], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
	func_392(func_80(0), 0, 0);
	return iVar30;
}

int func_513(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<14> Var0;
	struct<16> Var14;
	int iVar30;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return -1;
	}
	if (func_509(iParam0))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_327(*uParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_578(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = iParam3;
	iVar30 = -1;
	iVar30 = func_337(joaat("USE"), &Var14, bParam5);
	if (bParam4 && iVar30 != -1)
	{
		Var31.f_7 = -142743235;
		Var31.f_16 = -1;
		Var31 = 1;
		func_194(iVar30, Var31);
	}
	return iVar30;
}

bool func_514()
{
	if ((Global_1940311.f_10901 != (Global_1940311.f_38.f_203 - 1) || func_579(func_567(0), Global_1940311.f_10893, 0, 1, 1) > 0) || Global_1940311.f_10901 == 15)
	{
		return true;
	}
	func_580();
	if (Global_1940311.f_6)
	{
		return true;
	}
	return false;
}

void func_515(int iParam0)
{
	Global_1940311.f_10 = iParam0;
}

void func_516(int iParam0)
{
	Global_1940311.f_9 = iParam0;
}

bool func_517(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_171(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_448(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_518(var uParam0, int iParam1, bool bParam2)
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
	if (!func_327(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_178(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_581(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_582(joaat("UPDATE"), &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("COACH"))
	{
		Var44 = { func_583(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_584(joaat("UPDATE"), &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var69 = { func_585(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_586(joaat("UPDATE"), &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_578(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_337(joaat("UPDATE"), &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_519(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_188(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_395(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_520(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_517(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_521(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_522(bool bParam0)
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

void func_523(int iParam0)
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

void func_524(bool bParam0)
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

void func_525(bool bParam0)
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

void func_526(bool bParam0)
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

void func_527(bool bParam0)
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

void func_528(bool bParam0)
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

void func_529(bool bParam0)
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

bool func_530()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_531(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_532()
{
	return Global_1902818;
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_587(*iParam0);
	iVar1 = func_588(*iParam0);
	iVar2 = func_589(*iParam0);
	iVar3 = func_590(*iParam0);
	iVar4 = func_591(*iParam0);
	iVar5 = func_592(*iParam0);
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
	iVar6 = func_593(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_593(iVar1, iVar0);
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
	func_594(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_534(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_535(int iParam0)
{
	if (func_438(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_536(int iParam0)
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

bool func_537(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_538()
{
	if (!func_595())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_539(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_596())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_540()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_541()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

void func_542(var uParam0)
{
	func_439(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_597() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_439(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_439(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_543(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_460(uParam0))
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

int func_544(int iParam0)
{
	int iVar0;

	if (!func_25(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_188(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_545(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_229(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_598(iParam0, iParam1, iParam2, iParam3);
}

int func_547(int* iParam0)
{
	return func_599(iParam0->f_1);
}

int func_548(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_600(iVar0, 1, 0);
		if (!func_332(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_601(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_138(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_549(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_600(iVar0, 0, 1);
		if (!func_332(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_602(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_138(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_550(int iParam0)
{
	return (iParam0 / 100);
}

void func_551(char* sParam0)
{
	Global_1915715.f_22470 = func_573(sParam0, 10000, 0, 0, 0, 1);
}

bool func_552(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_603((*uParam3)[iVar0 /*2*/], (uParam3[iVar0 /*2*/])->f_1, uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_604(iParam0, uParam1, uParam5, iParam2, bParam6);
}

bool func_553(int iParam0, bool bParam1)
{
	if (!func_76(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_76(iParam0, -1090933859))
		{
			return func_223(iParam0, 1) != 0;
		}
		if ((func_134(iParam0, -915411861, 0) || func_134(iParam0, 600942249, 0)) || func_134(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_554(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_605(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_224(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_187(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_555(int* iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (iParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_335(Var3.f_8, iParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_556(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_606(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_80(0)) && !func_81());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_333(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_334(iVar32))
			{
			}
			else
			{
				iVar33 = func_138(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_557(int* iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*uParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_603((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * uParam1->f_9), uParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_607(iParam0, uParam1, uParam5, iParam2, bParam6, iParam7);
}

int func_558()
{
	return Global_1051252.f_12;
}

char* func_559()
{
	return "unnamed";
}

int func_560(int iParam0)
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

int func_561(int iParam0)
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

bool func_562(int iParam0)
{
	if (func_608(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_609(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_563(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_564(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_565(int iParam0)
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

int func_566(int iParam0)
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

int func_567(int iParam0)
{
	return PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_568(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_610(iParam1))
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
	return func_611(iParam0, iParam1);
}

int func_569(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_612(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_314(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var0))
		{
			STATS::_0xBD861AE8A5181ED7(&Var0, *iParam2);
		}
		*iParam2 = func_570(*iParam0, iParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_613(iParam1))
			{
				if (!func_614(0, iParam1, *iParam2))
				{
				}
				if (func_615(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 1);
				}
				else
				{
					ENTITY::_0x18FF3110CF47115D(*iParam0, 32, 0);
				}
				*iParam2 = func_616(*iParam0, iParam1, *iParam2);
			}
		}
		*iParam2 = 0;
		func_392(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_570(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
				iVar0 = func_617(iVar2);
				if (!func_618(iVar0, &uVar102))
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
										func_619(&Var6, &(Global_1904087.f_113[iVar5 /*96*/]));
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
										if (func_76(iVar0, -753854379) || func_76(iVar0, 173360570))
										{
											PED::_SET_PED_DAMAGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 2);
										}
										STATS::_0x831BF01C56149A8A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
									}
									if (iParam0 == PLAYER::PLAYER_PED_ID())
									{
										func_180(iVar0, -1, 0, 1, 0, 0, 0);
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

void func_571(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915715.f_20637)
	{
		if (Global_1915715.f_20241 == 29)
		{
			if (func_620(iParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_621(iParam0))
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
					STATS::_0x7C2ABF6E556B21FC(func_622(iParam0), iVar1, func_76(iParam0, 1064293907), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_572(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_314(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_623(iParam0, iParam1);
	return func_394(iParam0, iParam1, bParam2, iParam3);
}

var func_573(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_574(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_624(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_445() };
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

int func_575(int iParam0)
{
	if (func_76(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_76(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_76(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

struct<12> func_576(int iParam0, int iParam1, var uParam2, bool bParam3)
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
		func_439(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	}
	else
	{
		func_439(uParam2, joaat("LOOT_TYPE_SKINNING"));
	}
	func_439(uParam2, iVar0);
	return *uParam2;
}

int func_577(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_440(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

struct<16> func_578(var uParam0, bool bParam1)
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
		Var0.f_15 = func_232(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_445() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_579(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_138(iParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_611(iParam0, iParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_625(iParam1, bParam4));
	}
	return iVar0;
}

void func_580()
{
	if (!func_25(Global_1940311.f_10893, 0))
	{
		Global_1940311.f_6 = 0;
	}
	else if ((((func_65(Global_1940311.f_10893, 1224357681) != 0 && Global_1940311.f_10892 != 0) && Global_1940311.f_10892 != -2074770370) && !Global_1915715.f_20638) && !Global_1915715.f_22504.f_1)
	{
		Global_1940311.f_6 = 1;
	}
	else
	{
		Global_1940311.f_6 = 0;
	}
}

struct<28> func_581(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_171(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_578(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_582(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_455(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_457(func_626(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_583(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_171(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_578(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_584(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_457(func_627(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_585(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_171(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_578(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_586(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_455(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_457(func_628(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_458(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

int func_587(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_123(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_588(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_589(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_590(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_591(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_592(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_593(int iParam0, int iParam1)
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

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_629(iParam0, iParam6);
	func_630(iParam0, iParam5);
	func_631(iParam0, iParam4);
	func_632(iParam0, iParam3);
	func_633(iParam0, iParam2);
	func_634(iParam0, iParam1);
}

bool func_595()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_596()
{
	return Global_1913504.f_127 == 0;
}

int func_597()
{
	return Global_1952637.f_1;
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_635(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_599(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_101(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_546(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_546(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_600(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_601(int iParam0)
{
	return func_188(iParam0) == 1946043663;
}

bool func_602(int iParam0)
{
	return func_188(iParam0) == -126813555;
}

bool func_603(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = iParam0;
	if (func_3(0))
	{
		iVar5 = func_235(func_636(), iParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_319(1) };
			Var0.f_4 = func_318(iVar5);
			uParam2->f_1[0 /*4*/] = { func_320(iParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_232(iParam0, joaat("DEFAULT"));
	if (iVar6 != 0)
	{
		if (!func_510(&Var7, &iVar68, iParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_320(iParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_183(iParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_320(iParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_604(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 541670136 && iParam3 != joaat("BATCH"))
	{
		return false;
	}
	if (!func_637(*uParam1))
	{
		return false;
	}
	if (!func_638(iParam0, iParam3))
	{
		return false;
	}
	if (NETSHOPPING::_0xA3B8D31C13CB4239(*iParam0, 541670136, uParam1, 17, uParam2, *uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_639(iParam0, bParam4);
}

int func_605(int iParam0, bool bParam1)
{
	if (!func_553(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PAMPHLET_TRACKING_ARROW"))
	{
		return func_223(joaat("AMMO_ARROW_TRACKING"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_POISON_BOTTLE"))
	{
		return func_223(joaat("AMMO_POISONBOTTLE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_ANIMAL_REVIVER"))
	{
		return func_223(joaat("CONSUMABLE_TONIC_ANIMAL_REVIVER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_AMMO_22_TRANQUILIZER"))
	{
		return func_223(joaat("AMMO_22_TRANQUILIZER"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_LEGENDARY_PHEROMONES"))
	{
		return func_223(joaat("CONSUMABLE_ROLE_NATURALIST_LEGENDARY_ANIMAL_PHEROMONE"), 1);
	}
	else if (iParam0 == joaat("DOCUMENT_PAMPHLET_TONIC_BLENDING"))
	{
		return func_223(joaat("CONSUMABLE_TONIC_BLENDING"), 1);
	}
	return func_223(iParam0, 1);
}

bool func_606(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_248(iParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(iParam0, iParam1);
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
		if (!ITEMDATABASE::_0xB542632693D53408(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_640(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_607(int* iParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 2113164098 && iParam3 != joaat("SELL")) && iParam3 != joaat("USE"))
	{
		return false;
	}
	if (!func_641(iParam3, uParam1, iParam5))
	{
		return false;
	}
	if (!func_638(iParam0, iParam3))
	{
		return false;
	}
	if (func_642(*iParam0, iParam3, uParam1, uParam2))
	{
	}
	else
	{
		return false;
	}
	return func_639(iParam0, bParam4);
}

bool func_608(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_609(int iParam0)
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
		func_643(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_644(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

bool func_610(int iParam0)
{
	if (!func_280(iParam0, 1955773996))
	{
		return false;
	}
	if (!func_645(iParam0, 1))
	{
		return false;
	}
	return true;
}

int func_611(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_610(iParam1))
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
			return func_646(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1);
		}
	}
	return 0;
}

int func_612(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_647(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0), iParam1, iParam2, bParam3, iParam4);
}

bool func_613(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_648(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_649(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_614(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_650(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = func_651(iVar0, 1);
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
				if (!func_652(iVar3, 0))
				{
				}
				Global_1904087.f_402[iVar1] = (Global_1904087.f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_615(int iParam0, int iParam1, bool bParam2)
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
	return func_653(iVar0, bParam2) >= func_654(bParam2);
}

int func_616(int iParam0, int iParam1, int iParam2)
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

int func_617(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_384(&iParam0);
		if (!func_25(iVar0, 0))
		{
			iVar0 = func_385(iParam0);
		}
	}
	else
	{
		iVar0 = func_385(iParam0);
	}
	return iVar0;
}

bool func_618(int iParam0, int iParam1)
{
	*iParam1 = func_655(iParam0);
	return *iParam1 != 0;
}

void func_619(var uParam0, var uParam1)
{
	MISC::_COPY_MEMORY(uParam1, uParam0, 96);
}

bool func_620(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
	}
	if (func_76(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_621(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_618(iParam0, &iVar1))
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

int func_622(int iParam0)
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

void func_623(int iParam0, int iParam1)
{
	int iVar0;

	if (func_27() == -1)
	{
		iVar0 = func_172(7);
	}
	else
	{
		iVar0 = PLAYER::_GET_MOUNT_OF_PLAYER(PLAYER::PLAYER_ID());
	}
	func_616(iVar0, iParam0, iParam1);
}

bool func_624(var uParam0)
{
	if (!func_656(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_625(int iParam0, bool bParam1)
{
	if (!bParam1 || func_657())
	{
		return func_330(iParam0, func_319(1), -2015960939, 1, 1, 0);
	}
	return 0;
}

bool func_626(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_627(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_628(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_629(int iParam0, int iParam1)
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

void func_630(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_631(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_588(*iParam0);
	iVar1 = func_587(*iParam0);
	if (iParam1 < 1 || iParam1 > func_593(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_632(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_633(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_634(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_635(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_658(&(uParam0->f_4));
}

int func_636()
{
	return Global_1915715.f_20241;
}

bool func_637(struct<17> Param0)
{
	if (!func_450(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_638(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_659(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_660(iParam0))
		{
			return false;
		}
		if (!func_659(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_639(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_660(iParam0);
	}
	return true;
}

void func_640(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(iParam0, &Var7) || Var7 == 0)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_188((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_641(int iParam0, var uParam1, int iParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_25(uParam1->f_8, 0) && !func_248(func_167(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_113(iParam2, 128))
	{
		if (func_188(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_113(iParam2, 16))
	{
		if (!func_455(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_642(int iParam0, int iParam1, var uParam2, var uParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam3, *uParam3);
}

void func_643(int iParam0)
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
	func_644(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_644(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_645(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_661(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

int func_646(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_662(iParam0, iParam1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return iVar4;
}

int func_647(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_663(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_314(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((func_646(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_646(iParam0, iParam1) - iParam2) < 0)
		{
			func_647(iParam0, iParam1, func_138(iParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_664(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_180(iParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_648(int iParam0)
{
	if (!func_25(iParam0, 0))
	{
		return false;
	}
	return (func_76(iParam0, 1686880204) || INVENTORY::_0x4AEF1FB5B9011D75(iParam0));
}

int func_649(int iParam0, int iParam1)
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

int func_650(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_651(int iParam0, int iParam1)
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

bool func_652(int iParam0, bool bParam1)
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
	if (func_653(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_653(iVar1, bParam1))
	{
		iVar2 = func_653(iVar1, bParam1);
	}
	if (!bParam1)
	{
		Global_1291106[iVar1 /*19*/].f_7 = (Global_1291106[iVar1 /*19*/].f_7 - iVar2);
	}
	else
	{
		Global_1291106[iVar1 /*19*/].f_8 = (Global_1291106[iVar1 /*19*/].f_8 - iVar2);
	}
	if (func_653(iVar1, bParam1) < 0)
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
	else if (func_653(iVar1, bParam1) > func_654(bParam1))
	{
		if (!bParam1)
		{
			Global_1291106[iVar1 /*19*/].f_7 = func_654(bParam1);
		}
		else
		{
			Global_1291106[iVar1 /*19*/].f_8 = func_654(bParam1);
		}
	}
	return true;
}

int func_653(int iParam0, bool bParam1)
{
	return func_123(bParam1, Global_1291106[iParam0 /*19*/].f_8, Global_1291106[iParam0 /*19*/].f_7);
}

int func_654(bool bParam0)
{
	return func_123(bParam0, Global_1901947.f_681.f_30, Global_1901947.f_681.f_29);
}

int func_655(int iParam0)
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

bool func_656(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_657()
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
	if (!func_665(iVar0))
	{
		return false;
	}
	return true;
}

void func_658(var uParam0)
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

bool func_659(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, joaat("BASKET"), iParam1))
	{
		return false;
	}
	return true;
}

bool func_660(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_546(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_546(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_546(*iParam0, 2, 0, 0);
		return false;
	}
	func_546(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_661(int iParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_SATCHEL_DATA(iParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<4> func_662(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_666(iParam0) };
	return func_667(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_663(int iParam0, int iParam1, int iParam2)
{
	if (!func_25(iParam1, 0))
	{
		return false;
	}
	return func_646(iParam0, iParam1) >= iParam2;
}

int func_664(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_25(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_666(iParam0) };
	Var5 = { func_667(iParam0, iParam1, Var0, Var0.f_4) };
	return func_668(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_665(int iParam0)
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

struct<5> func_666(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_667(iParam0, joaat("CHARACTER"), func_445(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_667(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_25(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_668(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_509(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_669(iParam0, *uParam2, &Var0, 0))
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

bool func_669(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
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

