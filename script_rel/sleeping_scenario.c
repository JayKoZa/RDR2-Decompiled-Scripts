#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	struct<32> Local_19 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	iLocal_4 = vScriptParam_0.z;
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
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
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
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return 1;
		}
	}
	return iLocal_0;
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
	if (PED::IS_PED_INJURED(Global_35) || SCRIPTS::_0x9E4EF615E307FBBE())
	{
		iLocal_0 = 0;
		return;
	}
	func_12(&Local_19);
}

void func_7()
{
	HUD::_DISPLAY_HUD_COMPONENT(2011163970);
	if (func_13())
	{
		if (func_14() == func_15())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		func_16(0);
	}
	if (func_17() != 0)
	{
		if (func_18(&(Local_19.f_19)) || Local_19.f_22)
		{
			GRAPHICS::_0xBB6C707F20D955D4(15f);
			func_19(&(Local_19.f_19));
			Local_19.f_22 = 0;
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_19.f_23))
	{
		CAM::DESTROY_CAM(Local_19.f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_19.f_24))
	{
		CAM::DESTROY_CAM(Local_19.f_24, false);
	}
	func_20(&Local_19);
	if (Local_19.f_30)
	{
		func_21(0);
		Local_19.f_30 = 0;
	}
	if (Local_19.f_31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
		}
		Local_19.f_31 = 0;
	}
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_23(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_24(&iVar0);
	}
}

void func_12(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	char* sVar15;

	if (func_25(&(uParam0->f_19), 3.5f) && uParam0->f_22)
	{
		GRAPHICS::_0xBB6C707F20D955D4(15f);
		uParam0->f_22 = 0;
	}
	if (TASK::_0xDF7993356F52359A(Global_35, 1) == iLocal_3)
	{
		func_26(32);
		func_26(64);
		if (!uParam0->f_30)
		{
			func_21(1);
			uParam0->f_30 = 1;
		}
		if (iLocal_4 == -2016812721)
		{
			if (PED::_0x569F1E1237508DEB(Global_35) != 200520348 || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 7, true);
				if (!uParam0->f_31)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					uParam0->f_31 = 1;
				}
			}
			else if (uParam0->f_31)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				uParam0->f_31 = 0;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				CAM::_0x8370D34BD2E60B73();
				CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-35f, 15f);
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
				}
			}
		}
	}
	else
	{
		if (uParam0->f_30)
		{
			func_21(0);
			uParam0->f_30 = 0;
		}
		if (uParam0->f_31)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			uParam0->f_31 = 0;
		}
	}
	switch (uParam0->f_11)
	{
		case 0:
			if (iLocal_4 == -2016812721)
			{
				STREAMING::_0x19A6BE7D9C6884D3(iLocal_4, 15, 0, 0);
			}
			func_27(uParam0, 1);
			break;
		case 1:
			if (iLocal_4 == -2016812721)
			{
				if (!STREAMING::_0x9427C94D2E4094A4(iLocal_4, 0))
				{
					return;
				}
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_28(uParam0);
			if (iLocal_4 == -2016812721)
			{
				iVar1 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iLocal_3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					switch (uParam0->f_32)
					{
						case 1:
							if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
							{
								uParam0->f_32 = 2;
								uParam0->f_33 = MISC::GET_GAME_TIMER();
							}
							break;
						case 2:
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &vVar2, &vVar5);
							vVar2.f_1 = (vVar2.y + 0.5f);
							vVar5.f_1 = (vVar5.y - 0.5f);
							fVar8 = (vVar5.x - vVar2.x);
							vVar2.x = 0f;
							vVar5.x = 0f;
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, vVar2), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, vVar5), fVar8, false, true, 0))
							{
								uParam0->f_32 = 0;
							}
							else if (MISC::GET_GAME_TIMER() >= uParam0->f_33 + 10000)
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar1, true);
								uParam0->f_32 = 0;
							}
							break;
					}
				}
				else
				{
					uParam0->f_32 = 0;
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_29(uParam0))
			{
				(*uParam0)[4] = func_31("SLEEP", joaat("INPUT_CONTEXT_Y"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_32(uParam0[4], 1057677739, 0, 1);
				if (func_17() != 0)
				{
					if (iLocal_4 == -2016812721)
					{
						(*uParam0)[7] = func_31("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_32(uParam0[7], 1057677739, 0, 1);
					}
					else if (iLocal_4 == -1054012177 && !Global_1327590->f_19736)
					{
						(*uParam0)[7] = func_31("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_32(uParam0[7], 1057677739, 0, 1);
					}
				}
				if (Global_1327590->f_19683 < 2 && func_33())
				{
					func_34();
					Global_1327590->f_19683++;
				}
				func_27(uParam0, 3);
			}
			else if ((TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_3 && !TASK::_0x0C3CB2E600C8977D(Global_35, 1)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				uParam0->f_13 = func_35();
				func_27(uParam0, 5);
			}
			break;
		case 3:
			if (!func_29(uParam0))
			{
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 2);
			if (func_37(uParam0))
			{
			}
			if (!func_38(uParam0[4]))
			{
				(*uParam0)[4] = func_31("SLEEP", joaat("INPUT_CONTEXT_Y"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_32(uParam0[4], 1057677739, 0, 1);
			}
			else if (func_39(uParam0[4], 1))
			{
				if (func_40(8388608))
				{
					func_41(4);
				}
				func_42(16777216);
				func_43((*uParam0)[4], 1, 1);
				func_43((*uParam0)[7], 1, 1);
				(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				func_32(uParam0[5], 1323335645, 0, 1);
				uParam0->f_13 = func_35();
				func_27(uParam0, 4);
				return;
			}
			if ((iLocal_4 == -2016812721 || iLocal_4 == -1054012177) && func_17() != 0)
			{
				if (!func_38(uParam0[7]))
				{
					if (!Global_1327590->f_19736)
					{
						if (iLocal_4 == -2016812721)
						{
							(*uParam0)[7] = func_31("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
							func_32(uParam0[7], 1057677739, 0, 1);
						}
						else if (iLocal_4 == -1054012177)
						{
							(*uParam0)[7] = func_31("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
							func_32(uParam0[7], 1057677739, 0, 1);
						}
					}
				}
				else if (func_39(uParam0[7], 1))
				{
					func_42(16777216);
					func_43((*uParam0)[7], 1, 1);
					func_43((*uParam0)[4], 1, 1);
					uParam0->f_13 = func_35();
					if (iLocal_4 == -2016812721)
					{
						func_45(uParam0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, 1, 1, iLocal_4, 0, -1082130432, 0);
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, 1, 0, 0, 0, -1082130432, 0);
					}
					func_27(uParam0, 5);
					return;
				}
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				if (TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_3)
				{
					uParam0->f_13 = func_35();
					func_43((*uParam0)[4], 1, 1);
					func_43((*uParam0)[7], 1, 1);
					func_27(uParam0, 5);
				}
				else
				{
					func_43((*uParam0)[4], 1, 1);
					func_43((*uParam0)[7], 1, 1);
					func_27(uParam0, 2);
				}
			}
			break;
		case 4:
			func_46(uParam0, 1);
			break;
		case 5:
			if (func_37(uParam0))
			{
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if (iLocal_4 == -2016812721)
			{
				if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_23) && CAM::IS_CAM_ACTIVE(uParam0->f_23))
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
			}
			if (!func_47(Global_35, -76381094) && !(TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_3))
			{
				if (!func_48())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				func_27(uParam0, 2);
				return;
			}
			if (func_17() == -1)
			{
				if (!func_48())
				{
					HUD::_HIDE_HUD_COMPONENT(2011163970);
				}
			}
			if (TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_3)
			{
				if (!func_48())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				func_49(uParam0);
				func_27(uParam0, 6);
			}
			break;
		case 6:
			if (!TASK::_0xEC7E480FF8BD0BED(Global_35) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
			{
				if (func_50() == 8 && func_51(Global_35))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 1057677739, func_36(), 0);
				}
				else
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 0);
				}
			}
			if (func_37(uParam0))
			{
				MISC::SET_BIT(&(Global_1956578->f_1), 2);
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 3);
				if (iLocal_4 == -2016812721 && !CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			iVar0 = PED::_0x569F1E1237508DEB(Global_35);
			if (((((iVar0 != 200520348 && iVar0 != -296197310) && iVar0 != -1888446106) && iVar0 != 665598855) && iVar0 != -229964281) || PED::_0xC488B8C0E52560D8(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			else if (uParam0->f_29)
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				uParam0->f_29 = 0;
			}
			if (func_17() == -1)
			{
				if (func_52(uParam0[4], 0))
				{
					if (func_53(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						func_54(uParam0[4], 0, 1);
					}
				}
				else if (!func_53(PLAYER::PLAYER_ID(), 1, 0, 1) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_54(uParam0[4], 1, 1);
				}
				if (func_55(uParam0[4], 1))
				{
					func_56();
					func_20(uParam0);
					(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_32(uParam0[5], 1323335645, 0, 1);
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_27(uParam0, 7);
				}
				else if (func_55(uParam0[6], 1))
				{
					func_56();
					func_57(16777216);
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_27(uParam0, 15);
				}
				else if (func_55(uParam0[8], 1))
				{
					func_56();
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_29 = 1;
				}
				else if (func_38(uParam0[9]))
				{
					if (func_58(uParam0[9], 1) && func_59())
					{
						func_60(&Global_43906, 4);
					}
					func_54(uParam0[8], func_61() != 1, 1);
					func_54(uParam0[9], func_61() != 1, 1);
					func_54(uParam0[6], func_61() != 1, 1);
					func_54(uParam0[4], func_61() != 1, 1);
				}
			}
			else if (func_55(uParam0[4], 1))
			{
				func_20(uParam0);
				(*uParam0)[5] = func_44("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
				func_27(uParam0, 7);
			}
			else if (func_55(uParam0[5], 1))
			{
				func_20(uParam0);
				func_27(uParam0, 3);
			}
			if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_3)
			{
				if (iLocal_4 == -2016812721)
				{
					uParam0->f_33 = MISC::GET_GAME_TIMER();
					uParam0->f_32 = 1;
				}
				if (TASK::_0xDF7993356F52359A(Global_35, 0) == iLocal_3)
				{
					func_62(uParam0);
				}
				else
				{
					func_63(uParam0);
				}
				func_56();
				HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				uParam0->f_29 = 0;
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			break;
		case 7:
			func_46(uParam0, 0);
			if (func_17() == -1)
			{
				if (!func_48())
				{
					if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
					{
						MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
						func_20(uParam0);
						func_27(uParam0, 2);
					}
				}
			}
			break;
		case 8:
			if (!Global_1327590->f_19737)
			{
				if (TASK::_0xDF7993356F52359A(Global_35, 1) == iLocal_3 && (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1652513209)))
				{
					Global_1327590->f_19737 = 1;
				}
			}
			else if (Global_1327590->f_19738)
			{
				uParam0->f_14 = MISC::GET_GAME_TIMER();
				func_27(uParam0, 9);
			}
			break;
		case 9:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			if (func_37(uParam0))
			{
				if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_17, 1, 0) || ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_17, 0))) || iLocal_4 != -1054012177)
				{
					if (iLocal_4 == -1054012177 && !Global_1327590->f_19737)
					{
						if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_17, 0) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_17, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_17);
						}
						else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
						{
							uParam0->f_12 = 1;
							uParam0->f_14 = MISC::GET_GAME_TIMER();
						}
						if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_17, 0) && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							uParam0->f_18 = -1;
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
							func_64(4);
							func_27(uParam0, 2);
						}
					}
					if ((MISC::GET_GAME_TIMER() - uParam0->f_14) > 500)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						AUDIO::_0x6339C1EA3979B5F7("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					uParam0->f_12 = 1;
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1392040->f_7 == -15)
				{
					Global_1392040->f_7 = func_65();
				}
				iVar9 = Global_1392040->f_7;
				func_66(&iVar9, 0, 0, 3, 0, 0, 0, 0);
				if (!func_67(iVar9))
				{
					Global_1392040->f_8++;
				}
				else
				{
					Global_1392040->f_8 = 0;
				}
				Global_1327590->f_19737 = 0;
				Global_1327590->f_19738 = 0;
				WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
				if (iLocal_4 == -1054012177)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, 0, 1, 0, 0, -1082130432, 0);
				}
				else if (iLocal_4 == 1097070152)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, 0, 1, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, 0, 1, 0, 0, -1082130432, 0);
				}
				func_27(uParam0, 10);
			}
			break;
		case 10:
			if (func_17() == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
					}
					else
					{
						uParam0->f_12 = 1;
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
				{
					func_27(uParam0, 6);
				}
			}
			else
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (iLocal_4 == -2016812721)
						{
							PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), -261921482, 3f);
						}
						CAM::DO_SCREEN_FADE_OUT(2000);
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_27(uParam0, 2);
					return;
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam0->f_16))
					{
						if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_16, 1, 0))
						{
							if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_16, 1))
							{
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_16);
							}
						}
						else if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
						{
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_16);
							func_64(4);
							AUDIO::_0xAC84686C06184B0D("Clouds", "Sleep_Respawn_Scenes");
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							if (func_51(Global_35))
							{
								iVar11 = func_68();
								iVar12 = func_69(iVar11, uParam0->f_13);
								iVar13 = func_70(iVar11, uParam0->f_13);
								CLOCK::ADVANCE_CLOCK_TIME_TO(iVar12, iVar13, 0);
								TELEMETRY::_0xF9F14080D80937BD(iVar12);
								if (iVar12 > 9 || iVar12 <= 1)
								{
									iVar10 = 1;
								}
								if (((func_71(10, 0) >= 3 && iVar11 != 8) && iVar11 != 7) && iVar11 != 5)
								{
									fVar14 = func_72(12f, 2);
									func_73(18, fVar14);
								}
							}
							else
							{
								CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_13, 0, 0);
								TELEMETRY::_0xF9F14080D80937BD(uParam0->f_13);
								if (!func_74(0, 0, 1))
								{
									MISC::SET_RANDOM_WEATHER_TYPE(true, true);
								}
							}
							func_75();
							func_76(0, iVar10, 0);
							func_77();
							func_78(-1, 0, 0, 0, 0);
							if (!Global_1327590->f_19736)
							{
								func_79();
							}
							func_82(Global_36, func_81(func_80(), 100f, 300f), 0, 0);
							func_83(14, 1);
							func_84();
							Global_1935183->f_26 = 1;
							PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							uParam0->f_14 = MISC::GET_GAME_TIMER();
							func_27(uParam0, 11);
						}
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_37(uParam0))
			{
				if (func_17() != 0)
				{
					PED::_0x4759CC730F947C81();
					if (!func_13())
					{
						func_16(1);
					}
					func_85(Global_36);
					Global_40.f_9 = 0;
					func_86(0, 7);
				}
			}
			if ((!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN()) && (MISC::GET_GAME_TIMER() - uParam0->f_14) > 250)
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (func_17() != 0)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::_0x8910C24B7E0046EC();
				MISC::_0xA3A8926951471C82();
				if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_16, 0) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_16))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					AUDIO::_0x9428447DED71FC7E("Sleep_Respawn_Scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
					func_87(0f);
					if (iLocal_4 == -1054012177)
					{
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_15, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1) + 90f), 2);
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_15);
					}
					else if (iLocal_4 == 1097070152)
					{
						func_88(98.2971f, -4.2336f);
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						PED::_0xEC6935EBE0847B90(Global_35, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1), -5f, 0f, 0f));
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
					if (iLocal_4 != 1097070152)
					{
						func_88(0, 0);
					}
					if (func_51(Global_35))
					{
						sVar15 = func_89(func_68(), uParam0->f_13);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar15))
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar15);
							uParam0->f_22 = 1;
						}
					}
					func_90(0, 0);
					func_91(1);
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					func_92(0);
					func_27(uParam0, 12);
				}
			}
			else
			{
				func_27(uParam0, 12);
			}
			break;
		case 12:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_17() != 0)
			{
				if (func_37(uParam0))
				{
					if (func_13())
					{
						func_16(0);
					}
					Global_1392040->f_7 = func_65();
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				func_93(1);
				func_94();
			}
			if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), -1961588683, 6f);
				func_27(uParam0, 5);
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_14) > 500)
			{
				if (uParam0->f_22)
				{
					func_95(&(uParam0->f_19));
				}
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			break;
		case 14:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			if (func_37(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != -490123391 && iLocal_4 == 1097070152))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					if (INVENTORY::_0x3D10D7179D7034AF(func_96(0), -569063887, 0))
					{
						INVENTORY::_0x6A564540FAC12211(func_96(0), -569063887);
					}
					func_97(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if ((!func_98(130487986) && !func_99()) && (MISC::GET_GAME_TIMER() - uParam0->f_14) > 1000)
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), 111553404, 3f);
				func_27(uParam0, 5);
			}
			break;
		case 15:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_3)
			{
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			break;
		case 13:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
			if (func_37(uParam0))
			{
				iVar0 = PED::_0x569F1E1237508DEB(Global_35);
				if (PED::_0xC488B8C0E52560D8(Global_35) || (iVar0 != -490123391 && iLocal_4 == 1097070152))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					func_97(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
					return;
				}
			}
			if (!func_100())
			{
				PED::_0xD65FDC686A031C83(PLAYER::PLAYER_PED_ID(), 111553404, 3f);
				func_27(uParam0, 5);
			}
			break;
		case 16:
			if (func_37(uParam0))
			{
				if (!func_48())
				{
					HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_17))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
				}
				func_101(uParam0);
			}
			break;
	}
}

bool func_13()
{
	return Global_1392040->f_6;
}

int func_14()
{
	return &Global_1572864;
}

int func_15()
{
	return Global_1572864->f_1;
}

void func_16(int iParam0)
{
	Global_1392040->f_6 = iParam0;
}

int func_17()
{
	return Global_1572887->f_12;
}

bool func_18(var uParam0)
{
	return func_102(*uParam0, 1);
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_20(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

void func_21(int iParam0)
{
	Global_1935436->f_18.f_3 = iParam0;
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

void func_24(int iParam0)
{
}

int func_25(var uParam0, float fParam1)
{
	if (func_103(uParam0, fParam1))
	{
		func_19(uParam0);
		return 1;
	}
	return 0;
}

void func_26(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
}

void func_28(var uParam0)
{
	if (iLocal_4 != -2016812721)
	{
		return;
	}
	if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		if (!uParam0->f_28)
		{
			if (func_25(&(uParam0->f_25), 2.5f))
			{
				func_104(uParam0);
			}
		}
	}
	else if (!uParam0->f_28 && !PED::_0x9C54041BB66BCF9E(Global_35, iLocal_3))
	{
		func_63(uParam0);
	}
	if (uParam0->f_28)
	{
		if (func_25(&(uParam0->f_25), 2.1f))
		{
			CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
			CAM::DETACH_CAM(uParam0->f_23);
		}
	}
}

int func_29(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!func_40(128))
	{
		if (func_105())
		{
			return 0;
		}
	}
	if (func_106(&Global_1935630, 131072))
	{
		return 0;
	}
	if (func_107() >= 1f)
	{
		return 0;
	}
	if (func_40(1073741824 /* Float: 2f */) || func_40(16777216))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return 0;
	}
	iVar0 = TASK::_0x5BA659955369B0E2(iLocal_3);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (iVar0 != Global_35)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1))
			{
				return 0;
			}
		}
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 0;
	}
	if (func_53(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return 0;
	}
	if (!Global_1327590->f_19736)
	{
		if (func_108(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1) + Vector(0.5f, 0f, 0f), 1f, 1, Global_35, 0, 0))
		{
			return 0;
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
	{
		if (!ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_15, 0))
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			return 0;
		}
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_3)
	{
		return 0;
	}
	if (TASK::_0x8569C38D2FB80650(iLocal_3, 8))
	{
		return 0;
	}
	fVar1 = func_109(Global_35, func_30(), 1);
	if (fVar1 > func_81(((iLocal_4 == -1054012177 && func_50() != 8) && func_51(Global_35)), 1.5f, 1f))
	{
		return 0;
	}
	if (!func_110(Global_35, func_30(), func_81((iLocal_4 == -1054012177 && func_51(Global_35)), -0.25f, 0f)) && fVar1 > func_111())
	{
		return 0;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), 2f))
	{
		return 0;
	}
	iVar2 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iLocal_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iVar2))
		{
			return 0;
		}
		if (FIRE::_0xCDC25355C0D65963(iVar2))
		{
			return 0;
		}
		if (FIRE::_0xA4454592DCF7C992(iVar2))
		{
			return 0;
		}
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), 1f) > 0)
	{
		return 0;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		return 0;
	}
	return 1;
}

Vector3 func_30()
{
	vector3 vVar0;

	switch (iLocal_4)
	{
		case -2016812721:
			vVar0 = { 0.29f, 1.5f, 1f };
			break;
		case -1054012177:
			if ((iLocal_4 == -1054012177 && func_50() == 8) && func_51(Global_35))
			{
				vVar0 = { 0f, 0.15f, 0f };
			}
			else
			{
				vVar0 = { 0f, 0.5f, 0f };
			}
			break;
		default:
			vVar0 = { 0f, 0f, 0.5f };
			break;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1), vVar0);
}

int func_31(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_112(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_113(iVar0, 2))
		{
			if (func_114(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_115(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

bool func_33()
{
	return func_117(32768);
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(Global_1327590->f_19622[iVar0 /*14*/])->f_5 = 0;
		iVar0++;
	}
}

int func_35()
{
	if (func_118(1))
	{
		return 12;
	}
	else if (func_118(2))
	{
		return 18;
	}
	return 6;
}

char* func_36()
{
	switch (iLocal_4)
	{
		case -2016812721:
		case 1690225020:
			return "CMP_SLP_TNT";
		case -1689755873:
		case 1097070152:
			if (func_119(67108864) && func_40(8388608))
			{
				return "CMP_SLP_DIRT";
			}
			else
			{
				return "CMP_SLP_GND";
			}
			break;
		case -1054012177:
			return "CMP_SLP_BED";
	}
	return "CMP_SLP_BED";
}

int func_37(var uParam0)
{
	if (uParam0->f_12)
	{
		uParam0->f_12 = 0;
		return 1;
	}
	return 0;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_40(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_41(int iParam0)
{
	if (!func_120(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 || iParam0);
	}
}

void func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		Global_1392040 = (&Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_116(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_121(iVar0);
	*uParam0 = 0;
}

int func_44(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
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
	while (iVar0 < 48)
	{
		if (func_113(iVar0, 2))
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
		func_115(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, bParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_45(var uParam0)
{
	vector3 vVar0;

	if (iLocal_4 != -2016812721)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1), 0.5f, -1.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1), 51.28f, false, 2);
	uParam0->f_24 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1), 61.28f, false, 2);
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_24, true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_23, uParam0->f_24, 5000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_46(var uParam0, bool bParam1)
{
	char* sVar0;
	bool bVar1;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	func_122(1);
	func_123(1);
	if (!TASK::_0x02EBBB3989B7E695(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (func_17() == 0)
	{
		uParam0->f_14 = MISC::GET_GAME_TIMER();
		if (bParam1)
		{
			if (iLocal_4 == -2016812721)
			{
				func_45(uParam0);
				sVar0 = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
			WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, sVar0, 0, 1, 0, 0, 0, -1082130432, 0);
		}
		func_27(uParam0, 10);
	}
	else
	{
		func_124(uParam0);
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		bVar1 = false;
		if (func_55(uParam0[0], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 6;
		}
		else if (func_55(uParam0[1], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 12;
		}
		else if (func_55(uParam0[2], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 18;
		}
		else if (func_55(uParam0[3], 1))
		{
			bVar1 = true;
			uParam0->f_13 = 0;
		}
		if (bVar1)
		{
			uParam0->f_18 = -1;
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_16))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			}
			uParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(func_125(uParam0->f_13), 0, 0, false, true);
			uParam0->f_14 = MISC::GET_GAME_TIMER();
			func_20(uParam0);
			if (bParam1)
			{
				if (iLocal_4 == -1054012177)
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, 1, 0, 0, 0, -1082130432, 0);
				}
			}
			if (iLocal_4 == -1054012177)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_15))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam0->f_17))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
				}
				if (func_126() && !CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				}
				else
				{
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
				}
				uParam0->f_17 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_17);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_17, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_15);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_15, "player", Global_35, 0);
				if (Global_1327590->f_19736)
				{
					if (iLocal_4 == -1054012177)
					{
						if (!PED::_0x9C54041BB66BCF9E(Global_35, iLocal_3))
						{
							TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, 1, 0, 0, 0, -1082130432, 0);
						}
					}
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 9);
				}
			}
			else
			{
				func_27(uParam0, 9);
			}
		}
		else if ((func_55(uParam0[5], 1) || func_53(PLAYER::PLAYER_ID(), 1, 0, 1)) || PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			uParam0->f_18 = -1;
			func_64(4);
			func_20(uParam0);
			if (uParam0->f_11 == 7)
			{
				func_27(uParam0, 5);
			}
			else
			{
				func_27(uParam0, 2);
			}
		}
	}
}

int func_47(int iParam0, int iParam1)
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

bool func_48()
{
	return Global_1894899 & 2 != 0;
}

void func_49(var uParam0)
{
	if (func_17() != 0 && iLocal_4 != -1085971095)
	{
		(*uParam0)[4] = func_127("SLEEP", joaat("INPUT_CONTEXT_Y"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_32(uParam0[4], 1057677739, 0, 1);
		if (func_40(8388608) && !func_120(1024))
		{
			(*uParam0)[6] = func_127("CAMP_RECIPE", joaat("INPUT_CONTEXT_X"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			func_32(uParam0[6], 1057677739, 0, 1);
			if (func_128())
			{
				(*uParam0)[9] = func_127("CAMP_FT_PROMPT", joaat("INPUT_CONTEXT_A"), Global_35, 1, 0, 0, 0, 2, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				func_32(uParam0[9], 1057677739, 0, 1);
			}
		}
		(*uParam0)[8] = func_127("LEAVE", joaat("INPUT_CONTEXT_B"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_32(uParam0[8], 1057677739, 0, 1);
	}
}

int func_50()
{
	switch (func_17())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_51(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	return func_129(ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
}

bool func_52(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	return !func_113(iParam0, 4);
}

int func_53(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_130(bParam1, bParam2, bParam3);
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

void func_54(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (bParam1)
	{
		func_131(iParam0, 4);
		func_132(iVar0, 1);
		func_133(iVar0, 1);
	}
	else
	{
		func_134(iParam0, 4);
		func_133(iVar0, 0);
	}
}

bool func_55(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_56()
{
	if (UIAPPS::_IS_APP_ACTIVE(1833066477) && func_61() != 0)
	{
		func_60(&Global_43906, 16);
	}
}

void func_57(int iParam0)
{
	if (!func_40(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

bool func_58(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_59()
{
	return (((!UIAPPS::_IS_APP_ACTIVE(1433015236) && !Global_1898068->f_4) && !func_135()) && UIAPPS::_CAN_LAUNCH_APP_BY_HASH(1833066477));
}

void func_60(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_61()
{
	return Global_43907;
}

void func_62(var uParam0)
{
	if (iLocal_4 != -2016812721)
	{
		return;
	}
	func_95(&(uParam0->f_25));
	uParam0->f_28 = 0;
}

void func_63(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
}

void func_64(int iParam0)
{
	if (func_120(iParam0))
	{
		Global_1392040->f_1 = (Global_1392040->f_1 - (Global_1392040->f_1 && iParam0));
	}
}

int func_65()
{
	return &Global_1899515;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_136(*iParam0);
	iVar1 = func_137(*iParam0);
	iVar2 = func_138(*iParam0);
	iVar3 = func_139(*iParam0);
	iVar4 = func_140(*iParam0);
	iVar5 = func_141(*iParam0);
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
	iVar6 = func_142(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_142(iVar1, iVar0);
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
	func_143(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_67(int iParam0)
{
	return &Global_1899515 > iParam0;
}

int func_68()
{
	return Global_40.f_4283;
}

int func_69(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 12:
					return 11;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return 7;
				default:
					break;
			}
			break;
	}
	return iParam1;
}

int func_70(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 6:
					return 10;
				case 18:
					return 45;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 18:
					return 30;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 0:
					return 30;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 50;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 18:
					return 20;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return 20;
				case 12:
					return 15;
				case 18:
					return 40;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

float func_72(float fParam0, int iParam1)
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

void func_73(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_144(iParam0))
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
			sVar1 = func_145(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_146(-1);
			func_147(0);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		case 1:
			sVar1 = func_145(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_148(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		case 2:
			sVar1 = func_145(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_149(-1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		case 19:
			func_150(0, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_150(1, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_150(2, 1, 1);
			ATTRIBUTE::_SET_ATTRIBUTE_OVERPOWER_AMOUNT(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			break;
	}
}

int func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_151())
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
		iVar0 = func_152(&(Global_1898164->f_1[0 /*5*/]));
		if (func_153(iVar0) && func_154(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_155(&(Global_1898164->f_1[0 /*5*/])))
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

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_156(iVar0, 1, 0))
		{
			if (func_157(iVar0))
			{
				iVar2 = func_158(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					PED::_0x97B06669AC569003(iVar2, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_76(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_159(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_77()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_160(iVar0) && func_161(iVar0, 1))
		{
			func_162(iVar0);
		}
		iVar0++;
	}
}

void func_78(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_163() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_164(iVar1) && !func_165(iVar1, iParam2)) && (!bParam3 || !func_166(iVar1))) && (!bParam4 || !func_167(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_168(iVar0);
			}
		}
		iVar0++;
	}
}

void func_79()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1327590->f_19547)
	{
		if (&Global_1327590->f_19547[iVar0 /*5*/] != -1)
		{
			func_169(iVar0);
		}
		iVar0++;
	}
}

bool func_80()
{
	return (Global_1894899 & 1 != 0 && func_170() != -1);
}

float func_81(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_82(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_83(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = BUILTIN::TO_FLOAT(iParam0);
	if (Global_1347477->f_4 + 60000) > MISC::GET_GAME_TIMER()
	{
		fVar0 = (BUILTIN::TO_FLOAT(iParam0) - Global_1347477->f_5);
	}
	if (fVar0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), fVar0, 0, 0, 0);
		Global_1347477->f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_171(2, 7000);
	}
	Global_1347477->f_4 = MISC::GET_GAME_TIMER();
	func_147(0);
	if (bParam1)
	{
		func_172(100f);
	}
}

void func_84()
{
	if (func_173(0))
	{
		func_174(0, 0, 100);
		func_174(0, 1, 100);
	}
	if (func_173(1))
	{
		func_174(1, 0, 100);
		func_174(1, 1, 100);
	}
}

void func_85(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_86(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_175(&Global_0, 8);
	}
	if (!func_176() || func_17() != -1)
	{
		return;
	}
	func_175(&Global_0, 1);
}

void func_87(float fParam0)
{
	if ((Global_1357549->f_1495 & 512 != 0 || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436->f_9 = (0.75f - 0.01f);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1935436->f_9 = 0f;
	}
	else if (fParam0 > 1f)
	{
		Global_1935436->f_9 = 1f;
	}
	else
	{
		Global_1935436->f_9 = fParam0;
	}
}

void func_88(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

char* func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_colter_morning";
				case 12:
					return "wakeUp_colter_afternoon";
				case 18:
					return "wakeUp_colter_evening";
				case 0:
					return "wakeUp_colter_night";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_horseshoe_morning";
				case 12:
					return "wakeUp_horseshoe_afternoon";
				case 18:
					return "wakeUp_horseshoe_evening";
				case 0:
					return "wakeUp_horseshoe_night";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_clemensPoint_morning";
				case 12:
					return "wakeUp_clemensPoint_afternoon";
				case 18:
					return "wakeUp_clemensPoint_evening";
				case 0:
					return "wakeUp_clemensPoint_night";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_shadyBelle_morning";
				case 12:
					return "wakeUp_shadyBelle_afternoon";
				case 18:
					return "wakeUp_shadyBelle_evening";
				case 0:
					return "wakeUp_shadyBelle_night";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_guarma_morning";
				case 12:
					return "wakeUp_guarma_afternoon";
				case 18:
					return "wakeUp_guarma_evening";
				case 0:
					return "wakeUp_guarma_night";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_lakay_morning";
				case 12:
					return "wakeUp_lakay_afternoon";
				case 18:
					return "wakeUp_lakay_evening";
				case 0:
					return "wakeUp_lakay_night";
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beaverHollow_morning";
				case 12:
					return "wakeUp_beaverHollow_afternoon";
				case 18:
					return "wakeUp_beaverHollow_evening";
				case 0:
					return "wakeUp_beaverHollow_night";
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 6:
					return "wakeUp_beechersHopeHouse_morning";
				case 12:
					return "wakeUp_beechersHopeHouse_afternoon";
				case 18:
					return "wakeUp_beechersHopeHouse_evening";
				case 0:
					return "wakeUp_beechersHopeHouse_night";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_90(int iParam0, bool bParam1)
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

void func_91(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_92(int iParam0)
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
			func_177(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_178(1);
	}
}

void func_93(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar1 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						iVar0 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar1 /*4*/])->f_1 /*3*/])->f_2;
						if (func_179(iVar0))
						{
							if (func_180(iVar0))
							{
								func_181(iVar0, bParam0);
							}
						}
						break;
				}
			}
		}
		iVar1++;
	}
}

void func_94()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (func_153(&(Global_40.f_450[iVar0])))
		{
			if (((*Global_1347702)[&Global_40.f_450[iVar0] /*49*/])->f_14 & 2 != 0)
			{
				func_182(&(Global_40.f_450[iVar0]), 1, 0);
			}
		}
		iVar0++;
	}
}

void func_95(var uParam0)
{
	func_183(uParam0, 0f);
}

int func_96(bool bParam0)
{
	if (func_17() == -1)
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

int func_97(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_184())
	{
		Global_1935689->f_10191 = iParam0;
		func_185(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_186())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_187(iParam0, 0);
		func_185(func_188(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_189(iParam0, bParam4))
	{
		return 0;
	}
	if (func_190(iParam0))
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
	if (func_191(iParam0, -2081717885))
	{
		func_192(iParam0, Var10, Var0, uVar29, bVar32, iVar33);
	}
	else if (func_191(iParam0, -1909684001))
	{
		func_193(iParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_191(iParam0, 587975446))
	{
		func_194(iParam0, Var10);
	}
	else if (func_191(iParam0, 566155764))
	{
		if (!func_195(iParam0))
		{
			return 0;
		}
	}
	if (func_196(iParam0, bParam5, bParam6))
	{
		Global_1911772 = iParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_191(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_197(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_191(iParam0, -1472964441) || func_191(iParam0, -228153877)) || func_191(iParam0, 566155764))
	{
	}
	else if (func_191(iParam0, 1919582297))
	{
		if (((func_48() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
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
		func_197(Var10, 0);
		bVar32 = false;
	}
	else if (func_198(iParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_199(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_197(Var10, 0);
		iVar33 = 1;
	}
	else if (func_198(iParam0) == joaat("clothing"))
	{
		if (func_200(iParam0) == -999503751)
		{
			if (func_17() != -1)
			{
				return iVar33;
			}
			if (!func_201(iParam0))
			{
				func_202("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_203(7, iParam0);
			bVar36 = func_203(1, iParam0);
			if (bVar36 && !bVar35)
			{
				func_202("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_204(7))
			{
				func_202("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_206(Global_35, func_205(7), 0))
				{
					func_202("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_202("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_207(iParam0);
			if (iVar30 == -1)
			{
				func_208(20, iParam0, 8, 0, 0);
			}
			else
			{
				func_208(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_200(iParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_209(iParam0, 0);
					return iVar33;
				case -2061583405:
					func_210(iParam0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1946804->f_1497.f_1[23 /*3*/])
					{
						func_211(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_212(iParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_212(iParam0, 1);
					}
					break;
			}
			func_211(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_213(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (func_17() != -1)
				{
				}
				else if (!func_201(iParam0))
				{
					func_202("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_203(7, iParam0);
					bVar36 = func_203(1, iParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36558))
						{
							MAP::REMOVE_BLIP(&Global_36558);
						}
						Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
						func_202(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36558), 10000, 0, 0, 0, 1);
					}
					else if (!func_204(7))
					{
						func_202("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_206(Global_35, func_205(7), 0))
						{
							func_202("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36558))
							{
								MAP::REMOVE_BLIP(&Global_36558);
							}
							Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
							func_202(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36558), 10000, 0, 0, 0, 1);
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
							func_197(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_214();
						Jump @2541; //curOff = 1643
						if (!func_215(Global_1392040->f_1, 1) || func_215(Global_1392040->f_1, 512))
						{
							if (func_17() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_216(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_217(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_201(iParam0) || ((!func_219(Global_35, func_205(7), func_218(7), 1) || func_220() != 0) && !func_219(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_215(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_215(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_197(Var10, 2);
								}
							}
							else if (func_201(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (func_221(1))
								{
									func_222(2);
								}
								else if (func_223(1))
								{
									func_202("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_202("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_224(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_224(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								func_202("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_225(Global_35, 1, 0, 0) != joaat("weapon_kit_binoculars"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_225(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_226(func_170());
						iVar28 = func_227();
						if (func_228(iVar27))
						{
							if (iVar27 == iVar28 && !func_229())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_202("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_230(iParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_231(497, 1);
						Jump @2541; //curOff = 2388
						func_232(1);
						Jump @2541; //curOff = 2396
						func_230(iParam0, 1, 0, 562618531, 0);
						func_233(136579449 /* GXTEntry: "Beau\'s Bracelet" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = -7337301; /* GXTEntry: "English Spelling Practice" */
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_197(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
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

int func_98(int iParam0)
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

bool func_99()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

bool func_100()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

void func_101(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_43((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_102(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_103(var uParam0, float fParam1)
{
	if (!func_18(uParam0))
	{
		return 0;
	}
	if (func_234(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_104(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (iLocal_4 != -2016812721)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
	{
		CAM::DESTROY_CAM(uParam0->f_23, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
	{
		CAM::DESTROY_CAM(uParam0->f_24, false);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, 1), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1), 2f, 3.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, 0f, 0f, (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, 1) + 125f), 51.28f, false, 2);
	vVar3 = { 1.1081f, 1.7384f, 0.4631f };
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_23, Global_35, vVar3, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_23, Global_35, -0.7722f, -0.593f, 0.2919f, true);
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_23, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_88(130.648f, 1.3841f);
	}
	func_95(&(uParam0->f_25));
	uParam0->f_28 = 1;
}

bool func_105()
{
	return Global_1898164->f_163;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_107()
{
	return Global_1935436->f_9;
}

int func_108(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_0x20A4BF0E09BEE146(Global_43616);
	iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam0, fParam3, Global_43616, iParam4);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		uVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(uVar2);
		if (iParam7 == 1 && ENTITY::IS_ENTITY_DEAD(iVar3))
		{
		}
		else if (iParam5 != iVar3 && iParam6 != iVar3)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_235(vVar0, vParam1);
}

bool func_110(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_111()
{
	switch (iLocal_4)
	{
		case 1097070152:
			return 0.5625f;
	}
	return 0.25f;
}

int func_112(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_113(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

int func_114(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_115(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_132(iParam0, 1);
	func_133(iParam0, 1);
	func_134(iParam0, 128);
}

int func_116(int iParam0)
{
	return iParam0;
}

int func_117(int iParam0)
{
	switch (func_17())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_139(func_65());
	if (func_215(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_215(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_119(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_120(int iParam0)
{
	return (Global_1392040->f_1 && iParam0) != 0;
}

void func_121(int iParam0)
{
	if (!func_236(iParam0))
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

void func_122(bool bParam0)
{
	if (bParam0)
	{
		Global_1913814->f_209[1] = 1;
	}
	Global_1913814->f_209[0] = 1;
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		func_237(4);
	}
	func_237(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_124(var uParam0)
{
	int iVar0;
	bool bVar1;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (uParam0->f_18 != iVar0)
	{
		if (uParam0->f_18 == -1)
		{
			bVar1 = true;
		}
		uParam0->f_18 = iVar0;
		if (!func_238(uParam0) && bVar1)
		{
			func_202("CMP_SLP_SOON", 10000, 0, 0, 0, 1);
		}
	}
}

var func_125(int iParam0)
{
	char* sVar0;
	char* sVar1;
	var uVar2;

	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_242(func_241(func_239(iParam0), func_240(), 1, 63));
	uVar2 = func_242(func_241(sVar0, sVar1, 1, 63));
	return uVar2;
}

int func_126()
{
	int iVar0;

	if (!func_243(&Global_35))
	{
		return 0;
	}
	iVar0 = func_244(1108822547);
	switch (iVar0)
	{
		case -2030909986: /* GXTEntry: "Muskrat Cavalry Hat" */
		case -1920448826: /* GXTEntry: "Trilby Hat" */
		case -1831024386: /* GXTEntry: "Straw Boater Hat" */
		case -1760360738: /* GXTEntry: "Scavenger Accessory" */
		case -1737617637: /* GXTEntry: "Judicious Accessory" */
		case -1677818072: /* GXTEntry: "Rancher Trim Hat" */
		case -1669863795: /* GXTEntry: "Majestic Accessory" */
		case -1638570574: /* GXTEntry: "High Crown Bowler Hat" */
		case -1600684947: /* GXTEntry: "Nevada Hat" */
		case -1536628862: /* GXTEntry: "Worn Gambler\'s Hat" */
		case -1535516064: /* GXTEntry: "Arthur\'s Hat" */
		case -1522618515: /* GXTEntry: "Civil War Hardee Hat" */
		case -1481704090: /* GXTEntry: "Moonshine Hat" */
		case -1477995181: /* GXTEntry: "Stalker Accessory" */
		case -1408908147: /* GXTEntry: "Plantation Hat" */
		case -1385724615: /* GXTEntry: "Beaver Drifter Hat" */
		case -1308879564: /* GXTEntry: "Drifter Hat" */
		case -1281650274: /* GXTEntry: "Snake Bulldogger Hat" */
		case -1267601302: /* GXTEntry: "Newsboy Cap" */
		case -1236788820: /* GXTEntry: "Worn Cavalry Hat" */
		case -1114561166: /* GXTEntry: "Trail Hat" */
		case -1110126435: /* GXTEntry: "Glorious Accessory" */
		case -1100577462: /* GXTEntry: "Scarecrow Derby Hat" */
		case -1012673867: /* GXTEntry: "Homestead Accessory" */
		case -996920192: /* GXTEntry: "Gambler\'s Hat" */
		case -965969439: /* GXTEntry: "Squirrel Flat Cap" */
		case -938068414: /* GXTEntry: "Derby Hat" */
		case -920786552: /* GXTEntry: "Flop Hat" */
		case -911136379: /* GXTEntry: "Deer Cavalry Hat" */
		case -902845935: /* GXTEntry: "Homburg Hat" */
		case -888116810: /* GXTEntry: "Workman\'s Flat Cap" */
		case -847198631: /* GXTEntry: "Western Homburg Hat" */
		case -772520572: /* GXTEntry: "Chinese Skull Cap" */
		case -763730846: /* GXTEntry: "John\'s Classic Hat" */
		case -733535491: /* GXTEntry: "Plantation Slouch Hat" */
		case -733007046: /* GXTEntry: "John\'s Gambler\'s Hat" */
		case -711959314: /* GXTEntry: "Pronghorn Flop Hat" */
		case -689603147: /* GXTEntry: "Plantation Gambler\'s Hat" */
		case -659695781: /* GXTEntry: "Crown Bucket Hat" */
		case -649538821: /* GXTEntry: "Western Hat" */
		case -648223755: /* GXTEntry: "Military Mountie Hat" */
		case -618025148: /* GXTEntry: "Beaver Big Valley Hat" */
		case -555248593: /* GXTEntry: "Iguana Big Valley Hat" */
		case -456506160: /* GXTEntry: "Coyote Gambler\'s Hat" */
		case -413116207: /* GXTEntry: "Worn Flat Cap" */
		case -398915371: /* GXTEntry: "Miner\'s Hat" */
		case -363206488: /* GXTEntry: "Crusher Hat" */
		case -329166384: /* GXTEntry: "Cavalier Hat" */
		case -318532162: /* GXTEntry: "Rococo Accessory" */
		case -234637698: /* GXTEntry: "Military Slouch Hat" */
		case -233264535: /* GXTEntry: "Panama Hat" */
		case -185417347: /* GXTEntry: "Elk Flop Hat" */
		case -175760184: /* GXTEntry: "Rat Infantry Hardee Hat" */
		case -89384781: /* GXTEntry: "Cattleman Hat" */
		case -16926654: /* GXTEntry: "Straw Foreman Hat" */
		case 36090652: /* GXTEntry: "Military Cavalry Hat" */
		case 100421495: /* GXTEntry: "Goat Flop Hat" */
		case 115894369: /* GXTEntry: "Legendary Beaver Flop Hat" */
		case 180273738: /* GXTEntry: "Legendary Ram Hat" */
		case 200325948: /* GXTEntry: "Panama Fedora Hat" */
		case 340746453: /* GXTEntry: "Boater Hat" */
		case 379713592: /* GXTEntry: "Exotic Hat" */
		case 479128152: /* GXTEntry: "Military Officer\'s Hat" */
		case 508896125: /* GXTEntry: "Legendary Cougar Flop Hat" */
		case 567774423: /* GXTEntry: "Gila Monster Gambler\'s Hat" */
		case 636451700: /* GXTEntry: "Big City Hat" */
		case 654226415: /* GXTEntry: "Estate Boss Hat" */
		case 664533382: /* GXTEntry: "Slouch Bucket Hat" */
		case 682123523: /* GXTEntry: "Pilgrim Accessory" */
		case 757102854: /* GXTEntry: "Bulldogger Hat" */
		case 765987706: /* GXTEntry: "Liberty Hat" */
		case 779407326: /* GXTEntry: "Rolled Derby Hat" */
		case 833070940: /* GXTEntry: "Pursuer Accessory" */
		case 883169566: /* GXTEntry: "High Hat" */
		case 932716026: /* GXTEntry: "Rodeo Hat" */
		case 1023441825: /* GXTEntry: "Rancher Hat" */
		case 1139224609: /* GXTEntry: "Paragon Town Hat" */
		case 1151318293: /* GXTEntry: "Farmer\'s Hat" */
		case 1193654425: /* GXTEntry: "Jipijapa Panama Hat" */
		case 1287147942: /* GXTEntry: "Sun Hat" */
		case 1299111020: /* GXTEntry: "Engineer\'s Hat" */
		case 1327510486: /* GXTEntry: "Flat Cap" */
		case 1354649564: /* GXTEntry: "Good Big Valley Hat" */
		case 1425095383: /* GXTEntry: "Fisherman\'s Hat" */
		case 1532870263: /* GXTEntry: "Bowler Hat" */
		case 1601432817: /* GXTEntry: "Derby High Hat" */
		case 1651201372: /* GXTEntry: "Bison Gambler\'s Hat" */
		case 1711973219: /* GXTEntry: "Bag Hat" */
		case 1725570548: /* GXTEntry: "Native Accessory" */
		case 1727487721: /* GXTEntry: "Plantation Hat" */
		case 1820684549: /* GXTEntry: "Ram Sombrero" */
		case 1896779122: /* GXTEntry: "Cutter Hat" */
		case 1920833291: /* GXTEntry: "Legendary Alligator Gambler\'s Hat" */
		case 1939245694: /* GXTEntry: "Worn Flop Hat" */
		case 2036219956: /* GXTEntry: "Huntsman Accessory" */
		case 2060755198: /* GXTEntry: "Infantry Hardee Hat" */
		case 2061277490: /* GXTEntry: "Big Valley Hat" */
		case 2067040192: /* GXTEntry: "Pioneer Accessory" */
		case 2070685357: /* GXTEntry: "Bucket Hat" */
		case 2109470519: /* GXTEntry: "Rat Flat Cap" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_127(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_113(iVar0, 2))
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
				func_115(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

int func_128()
{
	var uVar0;

	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1551675328))
	{
		return 0;
	}
	if (((ENTITY::IS_ENTITY_DEAD(func_205(7)) || TASK::IS_PED_IN_WRITHE(func_205(7))) || func_245(Global_36, ENTITY::GET_ENTITY_COORDS(func_205(7), true, false)) > func_218(7)) && ((ENTITY::IS_ENTITY_DEAD(func_205(1)) || TASK::IS_PED_IN_WRITHE(func_205(1))) || func_245(Global_36, ENTITY::GET_ENTITY_COORDS(func_205(1), true, false)) > func_218(1)))
	{
		return 0;
	}
	if (!func_246() && !func_247(68))
	{
		return 0;
	}
	if (func_74(0, 0, 1))
	{
		if (!func_217(51))
		{
			return 0;
		}
	}
	if (LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	uVar0 = 40;
	if (!func_248(&uVar0, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_129(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_249(vParam0, 1);
	if (iVar0 == func_250())
	{
		return 1;
	}
	return 0;
}

int func_130(bool bParam0, bool bParam1, bool bParam2)
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

void func_131(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_132(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_113(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_133(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_135()
{
	return &Global_1898068;
}

int func_136(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_251(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_137(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_138(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_139(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_140(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_141(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_142(int iParam0, int iParam1)
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

void func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_252(iParam0, iParam6);
	func_253(iParam0, iParam5);
	func_254(iParam0, iParam4);
	func_255(iParam0, iParam3);
	func_256(iParam0, iParam2);
	func_257(iParam0, iParam1);
}

int func_144(int iParam0)
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

char* func_145(int iParam0)
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

void func_146(int iParam0)
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
	iVar1 = func_258(2);
	func_259(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_147(bool bParam0)
{
	if (func_17() != -1)
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
		func_231(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_231(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_260(1, bParam0, 1);
	func_261();
	Global_40.f_11095.f_43 = bParam0;
}

void func_148(int iParam0)
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
	iVar1 = func_262(2);
	func_263(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_149(int iParam0)
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
	iVar1 = func_264(2);
	func_265(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_150(int iParam0, bool bParam1, bool bParam2)
{
	func_266(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_151()
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

int func_152(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_268(func_267(iParam0));
}

bool func_153(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_154(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_155(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_156(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	if (func_270(iParam0, 32, 1))
	{
		return 0;
	}
	if (!func_270(iParam0, 2, 1))
	{
		return 0;
	}
	if (!func_270(iParam0, 4, 1))
	{
		return 0;
	}
	if (func_271(iParam0, 33, 1))
	{
		return 0;
	}
	if (func_272(iParam0))
	{
		return 0;
	}
	if (func_273(iParam0))
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

int func_157(int iParam0)
{
	if (func_160(iParam0))
	{
		if (func_274(Global_1360165[iParam0 /*1157*/], 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (func_160(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

int func_159(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	var uVar0;

	if (func_156(iParam0, 1, 0))
	{
		if (func_157(iParam0))
		{
			uVar0 = func_275(iParam0, 0);
			if (PERSCHAR::_0x800DF3FC913355F3(uVar0))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(uVar0))
				{
					return 0;
				}
				if (bParam3 && !PED::_0xA0BC8FAED8CFEB3C(func_276(iParam0)))
				{
					return 0;
				}
				if ((bParam1 || !func_277(func_276(iParam0), 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(uVar0);
					func_278(iParam0, 0);
					if (iParam2 && func_279(((*Global_1360165)[iParam0 /*1157*/])->f_63))
					{
						func_280(iParam0, 65, 0);
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_160(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_161(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_276(iParam0);
	if (bParam1)
	{
		if (!func_274(iVar0, 0))
		{
			return false;
		}
	}
	return PED::IS_PED_GROUP_MEMBER(iVar0, func_281(), 1);
}

void func_162(int iParam0)
{
	int iVar0;
	struct<15> Var1;

	if (!func_160(iParam0))
	{
		return;
	}
	if (!func_161(iParam0, 0))
	{
	}
	func_282(iParam0);
	Global_1359489->f_15 = func_283(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_284();
	func_285(iParam0, 32, 1);
	if (func_274(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], 83, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		Var1 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0 /*1157*/];
		Var1.f_7 = func_170();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_0x88BC5F4AEF77FC4E(&Var1, 17);
	}
}

int func_163()
{
	return Global_1310750->f_16037;
}

bool func_164(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_165(int iParam0, int iParam1)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_166(int iParam0)
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	if (func_286(64) && func_287(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_167(int iParam0)
{
	if (!func_164(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_168(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_164(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_288(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_169(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_1327590->f_19547)
	{
		(Global_1327590->f_19547[iParam0 /*5*/])->f_4 = 1;
	}
}

int func_170()
{
	return Global_1894899->f_2;
}

void func_171(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_172(float fParam0)
{
	if (func_289(1) < fParam0)
	{
		func_290(1, fParam0, 0);
	}
	if (func_289(2) < fParam0)
	{
		func_290(2, fParam0, 0);
	}
	if (func_289(0) < fParam0)
	{
		func_290(0, fParam0, 0);
	}
}

int func_173(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_292(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_293(iParam2, 0, 100);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_295(iVar0, iParam1, func_294(iParam0, iParam1));
	func_296(iVar0, iParam1);
}

void func_175(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_176()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_177(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_178(1);
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		func_297(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_298(&(Global_40.f_12018.f_42), 1);
	}
}

bool func_179(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_180(int iParam0)
{
	return ((*Global_1835011)[iParam0 /*74*/])->f_63 & 64512 != 0;
}

void func_181(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_179(iParam0))
	{
		return;
	}
	if (func_299((*Global_1835011)[iParam0 /*74*/], 8192))
	{
		bVar0 = true;
	}
	((*Global_1835011)[iParam0 /*74*/])->f_63 = 0;
	if (!bParam1 && bVar0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 2;
		((*Global_1835011)[iParam0 /*74*/])->f_63 |= 8192;
	}
}

void func_182(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_153(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37);
	}
	func_300(&(((*Global_1347702)[iParam0 /*49*/])->f_14));
	func_301(&(((*Global_1347702)[iParam0 /*49*/])->f_12), 16384);
	func_302(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 4096);
	if (bVar0)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_304(iParam0, func_303(iParam0), 0, 0);
			}
		}
		else if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(((*Global_1347702)[iParam0 /*49*/])->f_37));
			if (iParam2 == 1)
			{
				func_304(iParam0, func_305(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::_SET_BLIP_FLASH_STYLE(((*Global_1347702)[iParam0 /*49*/])->f_37, 724623647);
		}
	}
}

void func_183(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_306() - fParam1);
	func_307(uParam0, 1);
	func_308(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_184()
{
	if (Global_1935689->f_17 == 3)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_310(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_311(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_312(iParam0, Var0, Var0.f_4, bParam4) };
	return func_313(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_186()
{
	if (func_274(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_187(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_188()
{
	return Global_1357549->f_1672;
}

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935689->f_8)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_314(iParam0);
		if (func_191(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_315(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_316())
		{
			return 0;
		}
	}
	if (!func_317(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_190(int iParam0)
{
	if (func_198(iParam0) == -1650247667)
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_96(0), iParam0, func_318(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463: /* GXTEntry: "Camp" */
		case 2019377485: /* GXTEntry: "Camp" */
			if (!Global_1392040->f_2)
			{
				func_319(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1807503187: /* GXTEntry: "Handheld Catalogue" */
			func_202(MISC::_CREATE_VAR_STRING(0, 163043886, Global_36558), 10000, 0, 0, 0, 1);
			break;
	}
	return 1;
}

int func_191(int iParam0, int iParam1)
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

void func_192(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, bool bParam28, int iParam29)
{
	switch (iParam0)
	{
		case 1244838730: /* GXTEntry: "Faded Letter" */
			break;
		case -1952196650: /* GXTEntry: "Letter from the Mayor\'s Office" */
			if (func_320())
			{
				func_321(998229694 /* GXTEntry: "It ain\'t John Mark. It\'s Jean Marc, you fool. And he\'s now the mayor. I guess tha" +
    "t\'s good. Lemieux\'s done for." */, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(998229694))
			{
				func_321(1610852701 /* GXTEntry: "It ain\'t John Mark. It\'s Jean Marc, Arthur.~n~~n~These fellas are French.~n~And h" +
    "e\'s now the mayor. I guess that\'s good. Sounds like Lemieux was pretty awful." */, 0);
			}
			break;
		case -1566711999: /* GXTEntry: "Letter from the Mayor\'s Office" */
			func_321(-1741315348 /* GXTEntry: "Jean Marc won.~n~~n~He\'s now the mayor and Lemieux is disgraced." */, 0);
			break;
		case -1237758927: /* GXTEntry: "Letter to Mayor Timmins from Belinda" */
			break;
		case -631796932: /* GXTEntry: "Letter from Charles Châtenay" */
			func_322(((*Global_1347702)[80 /*49*/])->f_15, 1);
			if (func_320() == 1)
			{
				func_321(1565950479, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(1565950479))
			{
				if (func_323(77))
				{
					func_321(-553142873, 0);
				}
				else
				{
					func_321(-384883866, 0);
				}
			}
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			if ((func_176() && !func_324(51)) && !func_325(1048576))
			{
				func_326(2);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_329(1048576);
			}
			break;
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			if ((func_176() && !func_324(51)) && !func_325(16384))
			{
				func_326(1);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_329(16384);
			}
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			if ((func_176() && !func_324(40)) && !func_330(32))
			{
				func_331(4);
				func_327(39, 0, 0, 0, 0, -1, 0);
				func_328(39, 0, 0, 0, 0, 0, 2, 0);
				func_332(32);
			}
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			if ((func_176() && !func_324(42)) && !func_333(16))
			{
				func_334(8);
				func_327(41, 0, 0, 0, 0, -1, 0);
				func_328(41, 0, 0, 0, 0, 0, 2, 0);
				func_335(16);
			}
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			if ((func_176() && !func_324(50)) && !func_336(32))
			{
				func_337(4);
				func_327(49, 0, 0, 0, 0, -1, 0);
				func_328(49, 0, 0, 0, 0, 0, 2, 0);
				func_338(32);
				if (!func_339(((*Global_1347702)[50 /*49*/])->f_15, 1))
				{
					if (func_320() == 1)
					{
						func_321(-629995342 /* GXTEntry: "Sent him the location of those odd carvings. Now he wants me to go see him." */, 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-629995342))
					{
						func_321(-1367572831 /* GXTEntry: "Sent him the location of those odd carvings. Now he wants me to go see him." */, 0);
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

void func_193(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
	switch (iParam0)
	{
		case 1950809992: /* GXTEntry: "Farm, Field and Falconry" */
			func_334(16);
			break;
	}
}

void func_194(int iParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
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

int func_195(int iParam0)
{
	return 1;
}

int func_196(int iParam0, bool bParam1, bool bParam2)
{
	if (func_340(iParam0, bParam1, 0, 0, -1082130432 /* Float: -1f */))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_341(iParam0, -949239683))
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
				func_342(iParam0);
				return 1;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_343())
				{
					if (func_243(&Global_35))
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
					func_202("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
				func_344(iParam0);
				return 1;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_345(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_346(iParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_347(iParam0);
				}
				else
				{
					func_348(iParam0);
				}
				return 1;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				func_349(iParam0);
				return 1;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				func_350(iParam0);
				return 1;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				func_351(iParam0);
				return 1;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				func_352(iParam0);
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
				func_353(iParam0);
				return 1;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_354(iParam0);
				return 1;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_355(iParam0);
				return 1;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_356(iParam0);
				return 1;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_357(iParam0);
				return 1;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_358(iParam0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_197(struct<16> Param0, int iParam16)
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
	if (!func_359(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_360(&(Param0.f_10)))
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
			func_361(iParam16);
			return;
		}
		iVar0++;
	}
}

int func_198(int iParam0)
{
	vector3 vVar0;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_199(int iParam0)
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

int func_200(int iParam0)
{
	struct<2> Var0;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_201(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_198(iParam0) == joaat("clothing"))
	{
		if (func_200(iParam0) == -999503751)
		{
			iVar0 = func_207(iParam0);
			if ((iVar0 != -1 && !func_362(iVar0)) || !func_317(iParam0, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_202(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_203(int iParam0, int iParam1)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
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
	if (func_363(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_364())
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

int func_205(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_206(int iParam0, int iParam1, bool bParam2)
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

int func_207(int iParam0)
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

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_365(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_366(Var0);
}

int func_209(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_367())
	{
		return 0;
	}
	if (!func_368(iParam0))
	{
		return 0;
	}
	if (func_369(iParam0))
	{
		iVar0 = 0;
		if (func_200(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_370(&iVar0, 2);
			}
		}
		return func_371(iParam0, iVar0);
	}
	return 0;
}

void func_210(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1946804->f_1497.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_211(Global_35, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_212(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_211(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_372(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_373();
		func_365(128);
		return;
	}
	if (iVar1 == &Global_1946804->f_57[iVar0 /*11*/])
	{
		func_212(iParam0, 1);
		return;
	}
	if (func_374(-2061583405, 0))
	{
		if (func_375(iVar1))
		{
			func_212(iVar1, 0);
		}
		else
		{
			func_376(iVar1, 1, 1, 0);
		}
		func_212(iParam0, 1);
		return;
	}
	if (func_375(iVar1))
	{
		func_212(iVar1, 0);
		func_212(iParam0, 1);
	}
	else if (func_375(iParam0))
	{
		if (iParam0 != func_377(0))
		{
			func_378(iParam0, iVar1);
			func_212(iParam0, 0);
			func_212(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_365(128);
			func_212(iParam0, 1);
		}
	}
}

int func_211(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_310(iParam1, 1, 0) };
		iParam3 = func_379(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_381(iParam1, iParam2, func_380(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_382(1, (func_17() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_380(iParam3, 1) /*11*/])
			{
				func_208(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_372(32768) && iParam1 != &Global_1946804->f_57[func_380(iParam3, 1) /*11*/])
			{
				func_373();
				func_208(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_208(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_383(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_208(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_384(0);
			func_385(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_208(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_212(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_96(0), &Var5, bParam1);
}

void func_213(bool bParam0)
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

void func_214()
{
	if (func_387())
	{
		return;
	}
	if (func_388())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_202(func_389(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

bool func_215(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_216(int iParam0)
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (!func_153(iParam0))
	{
		return 0;
	}
	return func_390(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_217(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_390(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

float func_218(int iParam0)
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

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_391(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_392(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_392(iParam0) + 1;
	fVar6 = func_393(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_394(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_219(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_220()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_221(int iParam0)
{
	if (!func_395(32))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
	{
		return 0;
	}
	if (!func_396())
	{
		return 0;
	}
	if (func_397(16))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1225638->f_14) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::INT_TO_PLAYERINDEX(&Global_1225638)))
	{
		return 0;
	}
	if (iParam0 == 1 && func_398(Global_1131432->f_8, 1))
	{
		return 0;
	}
	return 1;
}

int func_222(int iParam0)
{
	if (!func_399())
	{
		return 0;
	}
	func_400(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

bool func_223(int iParam0)
{
	return func_398(Global_1131432->f_8, iParam0);
}

void func_224(int iParam0)
{
	struct<16> Var0;

	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_402(Var0, func_401(0, 15), 0, 0);
}

int func_225(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_226(int iParam0)
{
	int iVar0;

	if (!func_403(iParam0))
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

int func_227()
{
	int iVar0;

	iVar0 = func_68();
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

bool func_228(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_229()
{
	return &Global_1395601;
}

int func_230(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_404(iParam0, 1);
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
			func_405(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_317(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_406(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_407(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_407(iParam0, 0, 0) - iParam1) < 0)
		{
			func_230(iParam0, func_407(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_198(iParam0) == joaat("weapon"))
	{
		if (!func_408(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_185(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_409(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_405(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_410(iParam0, iParam1);
	return 1;
}

void func_231(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_413(iVar0, iVar1);
}

void func_232(bool bParam0)
{
	if ((func_17() != -1 || !bParam0) || func_414(Global_35))
	{
		func_415();
		return;
	}
	if (func_40(8388608) && !func_215(Global_1392040->f_1, 2048))
	{
		func_57(16777216);
		return;
	}
	func_415();
}

int func_233(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_416(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_417(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_418(iParam0, bParam2);
	iVar2 = 0;
	if (func_407(iParam0, 0, 0) == 0)
	{
		if (func_419(iParam0))
		{
			iVar5 = func_420(iParam0);
			iVar6 = func_421(iVar5);
			iVar7 = func_422(iVar6) + 1;
			func_423(iVar5);
			if (func_324(38))
			{
				func_231(483, 0);
			}
			else
			{
				func_231(482, 0);
			}
			if (iVar7 == func_424(iVar6))
			{
				func_233(func_425(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_176() && func_426(4))
				{
					if (func_176() && (func_427(38) || func_324(38)))
					{
						func_328(38, func_425(iVar6), 0, 0, func_428(), 0, -1, 0);
						func_429(2);
					}
					else
					{
						func_328(38, func_425(iVar6), 0, 0, func_428(), 0, -1, 0);
						func_429(1);
					}
				}
			}
			else if (func_176() && func_426(4))
			{
				if (func_176() && (func_427(38) || func_324(38)))
				{
					func_328(38, 0, 0, 0, func_428(), 0, -1, 0);
					func_429(2);
				}
				else
				{
					func_328(38, 0, 0, 0, func_428(), 0, -1, 0);
					func_429(1);
				}
			}
			if (func_176() && func_426(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_176() && (func_427(38) || func_324(38)))
					{
						func_327(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_327(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_198(iParam0) == joaat("clothing"))
	{
		if ((!func_191(iParam0, 866047851) && !func_191(iParam0, -1979000645)) && !func_191(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_430(iParam0, 8388608) && !func_431(28))
	{
		func_432(28);
	}
	if (!bVar3)
	{
		if (func_191(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_200(iParam0) == -1447088266)
			{
				iVar1 = func_434(func_433(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_17() == -1)
					{
						func_435(iVar1);
					}
					if (func_409(0) && func_436(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_437(iParam0, iVar0, iParam5);
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
					if (func_17() == -1)
					{
						func_435(iParam0);
					}
					if (func_409(0) && func_436(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_437(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_198(iParam0) == joaat("weapon"))
		{
			if (!func_438(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_198(iParam0) == joaat("ammo") && func_439(iParam0))
		{
			if (!func_440(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_191(iParam0, 866047851))
		{
			func_441(iParam0);
		}
		else if (func_191(iParam0, 2000026003))
		{
			func_442(iParam0);
		}
		else if (func_191(iParam0, -103750053))
		{
			func_444(func_443(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_444(func_445(-717883113, 2091222383), iVar0);
		}
		else if (func_191(iParam0, -121341956) && !func_191(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_339(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_231(498, 0);
				}
			}
			if (func_191(iParam0, -2017733358) || func_191(iParam0, -1369131378))
			{
				func_446(iParam0);
			}
		}
		else if (func_191(iParam0, -136654233))
		{
			if (func_191(iParam0, -1021472396))
			{
			}
		}
		else if (func_191(iParam0, -1466706512) && func_191(iParam0, 1147021565))
		{
			func_231(484, 0);
		}
		else if (func_191(iParam0, 1147021565) && func_191(iParam0, -524514947))
		{
		}
		else if (func_191(iParam0, 554195525))
		{
		}
		else if (func_191(iParam0, 589988438))
		{
			if (func_447())
			{
				func_448(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_191(iParam0, 787083290) && func_191(iParam0, 949916894))
		{
			func_449(iParam0);
		}
		else if (func_191(iParam0, -1718133314))
		{
			func_450(iParam0);
		}
		else if (func_191(iParam0, -1738650224))
		{
			func_451(iParam0);
		}
		else if (func_191(iParam0, -1112814642) && func_191(iParam0, 949916894))
		{
			func_452(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_191(iParam0, 1841149704))
		{
			func_453();
		}
		else if (func_191(iParam0, 606799272))
		{
			func_454(iParam0, iParam1);
			func_455(iParam0);
		}
		else if (func_191(iParam0, -1112814642) && func_191(iParam0, -1697809989))
		{
			func_456(iParam0, 0, 0, 0);
		}
		else if (func_191(iParam0, -2017733358) || func_191(iParam0, -1369131378))
		{
			func_446(iParam0);
		}
		else if (func_191(iParam0, -1921346699))
		{
			if (func_17() != -1)
			{
				return 0;
			}
			func_457(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_191(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_317(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_233(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_317(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_233(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_317(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_233(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_317(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_233(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_317(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_233(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_317(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_233(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_191(iParam0, -839724752) && func_430(iParam0, 4))
		{
			if (!func_324(42))
			{
				func_458(iParam0);
			}
		}
		else if (func_191(iParam0, 1399091007))
		{
			func_459(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_191(iParam0, 1248798204))
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
				func_233(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_432(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_211(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_460(&iVar9, 0))
				{
					func_436(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_17() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_211(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_231(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_461();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_462();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_463();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_464();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_261();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_465(499813453, 854119837, 0);
				func_466(499813453, 0);
				func_467(1);
				break;
			case 2127812557:
				func_465(499813453, -1292544588, 0);
				func_466(499813453, 0);
				func_467(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_465(499813453, -1003325394, 0);
				func_466(499813453, 0);
				func_467(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_465(666607663, -335460405, 0);
				func_466(666607663, 0);
				func_468(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_465(666607663, 903797617, 0);
				func_466(666607663, 0);
				func_468(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_465(666607663, 669728650, 0);
				func_466(666607663, 0);
				func_468(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_465(-220219788, 1214120047, 0);
				func_466(-220219788, 0);
				func_469(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_465(-220219788, 655769340, 0);
				func_466(-220219788, 0);
				func_469(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_465(-220219788, 885316185, 0);
				func_466(-220219788, 0);
				func_469(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_465(218622660, -1491419385, 0);
				func_466(218622660, 0);
				func_470(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_465(218622660, 1809565830, 0);
				func_466(218622660, 0);
				func_470(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_465(390004462, -628873767, 0);
				func_466(390004462, 0);
				func_471(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_465(390004462, -405421956, 0);
				func_466(390004462, 0);
				func_471(2);
				break;
			case 2142623221:
				func_465(390004462, -1108972386, 0);
				func_466(390004462, 0);
				func_471(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_465(6410548, 1053716392, 0);
				func_466(6410548, 0);
				func_472(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_465(6410548, 806507056, 0);
				func_466(6410548, 0);
				func_472(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_465(6410548, 1571925350, 0);
				func_466(6410548, 0);
				func_472(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_465(6410548, 1330352282, 0);
				func_466(6410548, 0);
				func_472(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_474(242, func_473(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_474(240, func_473(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_474(241, func_473(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_475(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_475(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_475(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_475(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
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
					func_475(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_475(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_231(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_231(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_231(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_233(func_476(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_233(func_477(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_431(1))
				{
					func_231(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_231(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_17() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_231(496, 0);
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
		func_478(&iVar10);
		if (!func_479(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_409(0))
		{
			return 1;
		}
		if (func_198(iParam0) == joaat("clothing"))
		{
			func_480(iParam0);
		}
		if (func_191(iParam0, -1979000645))
		{
			func_481(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_409(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_233(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_482(iVar2, 0);
		}
	}
	Var35 = { func_406(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_483(iParam0);
	if (fParam6 > 0f)
	{
		if (func_191(iParam0, -839724752))
		{
			func_484(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_405(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

float func_234(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_485(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_306() - uParam0->f_1);
}

float func_235(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_236(int iParam0)
{
	return func_113(iParam0, 2);
}

void func_237(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

bool func_238(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_43((*uParam0)[iVar0], 1, 1);
		iVar0++;
	}
	if (uParam0->f_18 > 3 && uParam0->f_18 <= 9)
	{
		(*uParam0)[1] = func_44("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = func_44("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = func_44("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 9 && uParam0->f_18 <= 15)
	{
		(*uParam0)[2] = func_44("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[3] = func_44("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = func_44("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 15 && uParam0->f_18 <= 21)
	{
		(*uParam0)[3] = func_44("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[0] = func_44("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = func_44("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else if (uParam0->f_18 > 21 || uParam0->f_18 <= 3)
	{
		(*uParam0)[0] = func_44("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[1] = func_44("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		(*uParam0)[2] = func_44("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	bVar2 = true;
	if (Global_1392040->f_7 == -15)
	{
		Global_1392040->f_7 = func_65();
	}
	iVar3 = Global_1392040->f_7;
	func_66(&iVar3, 0, 0, 3, 0, 0, 0, 0);
	if (!func_67(iVar3))
	{
		if (Global_1392040->f_8 > 1)
		{
			bVar2 = false;
		}
	}
	else
	{
		Global_1392040->f_8 = 0;
	}
	if (func_53(PLAYER::PLAYER_ID(), 1, 0, 1) || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		bVar2 = false;
	}
	if (func_38(uParam0[0]))
	{
		if (uParam0->f_18 < 6)
		{
			iVar1 = (6 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 6;
		}
		func_486(uParam0[0], "CMP_SLP_MRN", iVar1, 1);
		func_32(uParam0[0], 1323335645, 0, 1);
		func_54(uParam0[0], bVar2, 1);
	}
	if (func_38(uParam0[1]))
	{
		if (uParam0->f_18 < 12)
		{
			iVar1 = (12 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 12;
		}
		func_486(uParam0[1], "CMP_SLP_NOON", iVar1, 1);
		func_32(uParam0[1], 1323335645, 0, 1);
		func_54(uParam0[1], bVar2, 1);
	}
	if (func_38(uParam0[2]))
	{
		if (uParam0->f_18 < 18)
		{
			iVar1 = (18 - uParam0->f_18);
		}
		else
		{
			iVar1 = (24 - uParam0->f_18) + 18;
		}
		func_486(uParam0[2], "CMP_SLP_EVE", iVar1, 1);
		func_32(uParam0[2], 1323335645, 0, 1);
		func_54(uParam0[2], bVar2, 1);
	}
	if (func_38(uParam0[3]))
	{
		iVar1 = (24 - uParam0->f_18);
		func_486(uParam0[3], "CMP_SLP_MDN", iVar1, 1);
		func_32(uParam0[3], 1323335645, 0, 1);
		func_54(uParam0[3], bVar2, 1);
	}
	return bVar2;
}

char* func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_487())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_487())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_487())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_487())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_240()
{
	int iVar0;

	iVar0 = func_488();
	switch (iVar0)
	{
		case joaat("sandstorm"):
		case joaat("overcastdark"):
		case joaat("blizzard"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("thunderstorm"):
		case joaat("groundblizzard"):
			return "04Storm";
		case joaat("drizzle"):
		case joaat("thunder"):
		case joaat("overcast"):
		case joaat("fog"):
		case joaat("shower"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("snowlight"):
			return "03Clouds";
		case joaat("highpressure"):
		case joaat("clouds"):
		case joaat("misty"):
		case joaat("sunny"):
		case joaat("snowclearing"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> func_241(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

var func_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_243(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_489(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_380(iParam0, 1) /*3*/]);
}

float func_245(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_246()
{
	return func_71(10, 0) >= 3;
}

int func_247(int iParam0)
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (!func_153(iParam0))
	{
		return 0;
	}
	return func_339(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_248(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		(*uParam0)[iVar1 /*7*/] = -1;
		((*uParam0)[iVar1 /*7*/])->f_3 = 0;
		((*uParam0)[iVar1 /*7*/])->f_4 = 99999999;
		((*uParam0)[iVar1 /*7*/])->f_5 = 0f;
		((*uParam0)[iVar1 /*7*/])->f_6 = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_490(iVar0))
		{
			if (func_491(iVar0, bParam2))
			{
				if (bParam1)
				{
					func_492(uParam0, iVar0);
				}
				else
				{
					func_493(uParam0, iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*7*/])->f_3)
		{
			if (func_403(uParam0[iVar0 /*7*/]))
			{
				iVar2++;
				((*uParam0)[iVar0 /*7*/])->f_5 = func_494(((*uParam0)[iVar0 /*7*/])->f_4);
			}
		}
		iVar0++;
	}
	return iVar2 > 0;
}

int func_249(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_170();
	if (func_403(iVar0))
	{
		if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar0 /*35*/])->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_495(vParam0, iParam3);
}

int func_250()
{
	return Global_40.f_4283.f_1;
}

int func_251(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_252(int iParam0, int iParam1)
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

void func_253(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_254(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_137(*iParam0);
	iVar1 = func_136(*iParam0);
	if (iParam1 < 1 || iParam1 > func_142(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_255(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_256(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_257(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_258(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
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

void func_259(float fParam0, int iParam1)
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

void func_260(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

void func_261()
{
	func_497();
	func_498();
	func_499();
}

int func_262(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
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

void func_263(float fParam0)
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

int func_264(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_496();
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

void func_265(float fParam0, bool bParam1)
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

int func_266(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_496();
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
		func_500(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_501(iVar0, iParam0, fParam1);
	func_502(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, func_503(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_269(int iParam0)
{
	return iParam0 > -1;
}

bool func_270(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_271(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return false;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

bool func_272(int iParam0)
{
	return func_270(iParam0, 16, 1);
}

int func_273(int iParam0)
{
	if ((Global_40.f_4942[iParam0 /*60*/])->f_59 != 0)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0, int iParam1)
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
	if (func_398(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_398(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_275(int iParam0, bool bParam1)
{
	if (!func_160(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_505(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

int func_276(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_277(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_506(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_278(int iParam0, bool bParam1)
{
	int iVar0;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_275(iParam0, 0)))
	{
		iVar0 = PERSCHAR::_0x69786495C92A3044(func_275(iParam0, 0));
		if (iVar0 != ((*Global_1360165)[iParam0 /*1157*/])->f_47 || bParam1)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_47 = iVar0;
			StringCopy(&(((*Global_1360165)[iParam0 /*1157*/])->f_48), PERSCHAR::_0x9C7F95946E304778(func_275(iParam0, 0), ((*Global_1360165)[iParam0 /*1157*/])->f_47), 64);
			((*Global_1360165)[iParam0 /*1157*/])->f_56 = 1;
		}
	}
}

int func_279(int iParam0)
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

void func_280(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_281()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_282(int iParam0)
{
	int iVar0;

	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_160(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(iVar0))
	{
		return;
	}
	if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (PED::_0x917760CFE7A0E0F1(iVar0))
	{
		COMPANION::_0xD747979C053EFA7A(func_281());
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
	PED::REMOVE_PED_FROM_GROUP(iVar0);
	func_507(iParam0, 0, 0);
}

int func_283(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_508(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_281(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_281(), iVar3);
		if (func_509(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_510(iVar0);
		iVar2 = func_510(iVar0 + 1);
		if (!func_160(iVar1))
		{
			if (func_160(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_269(iParam0))
		{
			return;
		}
	}
	func_504(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

bool func_286(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_287(int iParam0)
{
	return func_165(iParam0, Global_1310750->f_16072 | 64);
}

void func_288(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

float func_289(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

void func_290(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_17() != -1)
	{
		return;
	}
	if (!func_431(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_511(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_503(iParam0), iVar0);
	func_513(func_512(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_514(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_231(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_231(func_515(iParam0), 1);
	}
	sVar1 = func_516(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_291(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_292(int iParam0)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

int func_293(int iParam0, int iParam1, int iParam2)
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

int func_294(int iParam0, int iParam1)
{
	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return &((Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iParam1 /*4*/]);
}

void func_295(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_293(iParam2, 0, 100);
	if (func_517(iParam1, &uVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, uVar0, iParam2);
	}
}

void func_296(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_517(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_518(iParam1);
	sVar2 = func_519(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_0x437C08DB4FEBE2BD(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_0xCB9401F918CB0F75(iParam0, sVar2, 1, -1);
		}
		else
		{
			PED::_0xA6F67BEC53379A32(iParam0, sVar2);
		}
	}
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_299(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_300(var uParam0)
{
	*uParam0 = 0;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_302(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_303(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

void func_304(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_153(iParam0))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 256 != 0 && func_74(0, 0, 1))
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 16 != 0)
	{
		return;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_36 == 0)
	{
		return;
	}
	if (func_520(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
	{
		return;
	}
	((*Global_1347702)[iParam0 /*49*/])->f_38 = func_521(iParam0);
	if (!bParam5 && func_522(iParam0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_BLIP_ADD_FOR_RADIUS(((*Global_1347702)[iParam0 /*49*/])->f_38, func_303(iParam0), ((*Global_1347702)[iParam0 /*49*/])->f_18);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	else
	{
		((*Global_1347702)[iParam0 /*49*/])->f_37 = MAP::_BLIP_ADD_FOR_COORD(((*Global_1347702)[iParam0 /*49*/])->f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(((*Global_1347702)[iParam0 /*49*/])->f_37, ((*Global_1347702)[iParam0 /*49*/])->f_36, true);
	}
	if (iParam0 == 61)
	{
		func_523(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(((*Global_1347702)[iParam0 /*49*/])->f_37, "BLIP_RCEXO");
	}
	func_524(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(((*Global_1347702)[iParam0 /*49*/])->f_37, 64, iParam0);
	if (func_17() == -1)
	{
		func_525(iParam0);
		iVar0 = func_526(Global_40.f_4283);
		if (func_403(iVar0) && func_527(((*Global_1888801)[iVar0 /*35*/])->f_13))
		{
			bVar1 = true;
			bVar2 = func_528(iVar0);
		}
		if (func_529(iParam0, bVar1, iVar0))
		{
			func_530(((*Global_1347702)[iParam0 /*49*/])->f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::_0x66F35DD9D2B58579() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 1 == 0)
	{
		func_531(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 1);
		if (((!func_522(iParam0) || func_154(((*Global_1347702)[iParam0 /*49*/])->f_12, 1)) || func_154(((*Global_1347702)[iParam0 /*49*/])->f_12, 512)) || func_532(((*Global_1347702)[iParam0 /*49*/])->f_13, 2048))
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 580546400);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 32768 == 0)
	{
		if ((((*Global_1347702)[iParam0 /*49*/])->f_36 == -1822497728 && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 == 0) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 2 != 0)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -211388321);
		}
		else
		{
			func_531(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32768);
		}
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_533(iParam0))
		{
			if (iParam0 == 97)
			{
				func_231(185, 0);
			}
			else
			{
				func_231(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {((*Global_1347702)[iParam0 /*49*/])->f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = ((*Global_1347702)[iParam0 /*49*/])->f_37;
			((*Global_1347702)[iParam0 /*49*/])->f_40 = func_202(MISC::_CREATE_VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_534(iParam0, 2);
	}
}

Vector3 func_305(int iParam0)
{
	vector3 vVar0;

	if (!func_153(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_535(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

float func_306()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_309(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<5> func_310(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_536(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_198(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_312(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_537(bParam1) };
			if (bParam2 && func_538(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_539(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_539(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_540(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_541(bParam1) };
			switch (func_200(iParam0))
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
			if (func_542(iParam0, -1823706425))
			{
				Var0 = { func_312(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_542(iParam0, -1483207246))
			{
				Var0 = { func_312(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
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
				if (!func_543(Var0, &Var27, bParam1, 0))
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

int func_311(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_544(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_409(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_96(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_312(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_309(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_96(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_313(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_544(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_543(*uParam1, &Var0, bParam6, 0))
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
	if (!func_409(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_96(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_314(int iParam0)
{
	if (func_191(iParam0, 1573112293))
	{
		return func_545(iParam0);
	}
	switch (func_200(iParam0))
	{
		case -77448735:
			if (func_546(iParam0))
			{
				return func_545(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_545(iParam0);
		case 1802292908:
			return func_547();
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_548();
		case -525676072:
			return func_548();
		case 1779021115:
			if (func_309(iParam0, 0))
			{
				if (iParam0 == joaat("weapon_kit_camera"))
				{
					return func_549();
				}
			}
			return func_550();
		case -1823706425:
			return func_551();
		case -854348463:
			return func_552();
		default:
			if (func_309(iParam0, 0))
			{
				if (func_191(iParam0, 1192444843) || func_191(iParam0, -1540973036))
				{
					return func_553();
				}
				else if (func_191(iParam0, 1919582297))
				{
					return func_554();
				}
				else if (func_191(iParam0, 1147021565))
				{
					return func_555();
				}
				switch (iParam0)
				{
					case -2035110427: /* GXTEntry: "Mortar and Pestle" */
					case -1448210800: /* GXTEntry: "Crafting Tools" */
						return func_556();
					case -1516555556: /* GXTEntry: "Horse Brush" */
						return func_557();
				}
			}
			return func_558();
	}
	return func_558();
}

int func_315(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_559(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return 0;
	}
	if (func_17() == 0)
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
			uParam0->f_2 = func_560(bParam2);
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
			uParam0->f_4 = func_561(bParam2);
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
			uParam0->f_6 = func_562(bParam2, iParam3, 1);
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
			uParam0->f_10 = func_47(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
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
				func_202("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
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
			uParam0->f_8 = func_563(Global_35);
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
					uParam0->f_16 = func_564(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_202("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
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
				func_202("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
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
			uParam0->f_18 = func_100();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_202("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
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

int func_316()
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

bool func_317(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_309(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_198(iParam0);
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
		if (!func_565(iParam0, 1))
		{
			return false;
		}
	}
	return func_407(iParam0, 0, bParam2) >= iParam1;
}

bool func_318(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_319(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_17() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_566())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_567(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_568())
	{
		if (bParam0)
		{
			if (func_68() != 8 && func_68() != 7)
			{
				func_202("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_202("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
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
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_53(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (func_569(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_570())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_98(-608558181) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0)
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_74(0, 1, 1) && !func_571(1))
	{
		if (bParam0)
		{
			if (func_217(15))
			{
				func_202("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_202("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (func_572() == 8)
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_119(8388608))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_40(8388608))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_573(func_170()))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (((func_80() || func_574(func_170()) == 9) || func_575(func_170())) && !func_576())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_577(Global_35))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_578())
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { VEHICLE::_0x6DE03BCC15E81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_579(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_580(Global_36, 5f))
	{
		if (bParam0)
		{
			func_202("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (BUILTIN::VDIST2(Global_36, ((*Global_1347702)[74 /*49*/])->f_24) < 144f && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1822247127) > 0)
	{
		return 0;
	}
	return 1;
}

int func_320()
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_177(iParam0, 0);
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
		func_92(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_322(int iParam0, int iParam1)
{
	if (!func_155(iParam0))
	{
		return;
	}
	func_581(iParam0, iParam1);
}

bool func_323(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_324(int iParam0)
{
	if (func_17() != -1)
	{
		return 0;
	}
	return func_339(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_325(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_326(int iParam0)
{
	Global_40.f_12018.f_26 = (Global_40.f_12018.f_26 || iParam0);
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_176() && (func_427(38) || func_324(38)))
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
			if (func_176() && (func_427(39) || func_324(39)))
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
			if (func_176() && (func_427(49) || func_324(49)))
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
		if (func_176() && (func_427(38) || func_324(38)))
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
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_584(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_583(func_425(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_176() && (func_427(39) || func_324(39)))
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
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_176() && (func_427(49) || func_324(49)))
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
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_582(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_176() && (func_427(38) || func_324(38)))
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
			if (func_176() && (func_427(39) || func_324(39)))
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
			iVar9 = func_585(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_176() && (func_427(41) || func_324(41)))
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
			if (func_176() && (func_427(49) || func_324(49)))
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
			iVar9 = func_585(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_586(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_587(iParam0, iVar13, iVar14))
	{
	}
	if (func_588(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_589(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_590(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_591(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_592(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_329(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_330(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_331(int iParam0)
{
	Global_40.f_12018.f_3 = (Global_40.f_12018.f_3 || iParam0);
}

void func_332(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_333(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_334(int iParam0)
{
	Global_40.f_12018.f_4 = (Global_40.f_12018.f_4 || iParam0);
}

void func_335(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_336(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_337(int iParam0)
{
	Global_40.f_12018.f_2 = (Global_40.f_12018.f_2 || iParam0);
}

void func_338(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_339(int iParam0, bool bParam1)
{
	switch (func_593(iParam0))
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

int func_340(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_341(iParam0, -949239683))
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

int func_341(int iParam0, int iParam1)
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

void func_342(int iParam0)
{
	int iVar0;

	iVar0 = 1428936325;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_343()
{
	return 1 == Global_40.f_7748.f_3;
}

void func_344(int iParam0)
{
	int iVar0;

	iVar0 = 16939881;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_345(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -45077177;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_346(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1700817728;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_347(int iParam0)
{
	int iVar0;

	iVar0 = -362580870;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_348(int iParam0)
{
	int iVar0;

	iVar0 = -680642132;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_349(int iParam0)
{
	int iVar0;

	iVar0 = 2105609037;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_350(int iParam0)
{
	int iVar0;

	iVar0 = 1964324114;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_351(int iParam0)
{
	int iVar0;

	iVar0 = -1530144981;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_352(int iParam0)
{
	int iVar0;

	iVar0 = -1074475556;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_353(int iParam0)
{
	int iVar0;

	iVar0 = 1076410848;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_354(int iParam0)
{
	int iVar0;

	iVar0 = 1516413548;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_355(int iParam0)
{
	int iVar0;

	iVar0 = -1454586679;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_356(int iParam0)
{
	int iVar0;

	iVar0 = 406178289;
	switch (func_594())
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
		if (func_191(iParam0, 1573112293))
		{
			func_598(func_597(&iParam0), 1, 1);
		}
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_357(int iParam0)
{
	int iVar0;

	iVar0 = 1934039819;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

void func_358(int iParam0)
{
	int iVar0;

	iVar0 = -1054661625;
	switch (func_594())
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
		func_595(Global_35, iParam0, iVar0, 1);
	}
	else
	{
		func_596(iParam0, 1);
		func_230(iParam0, 1, 0, -142743235, 0);
	}
}

bool func_359(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_360(char* sParam0)
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

void func_361(int iParam0)
{
	if (func_359(iParam0, 1))
	{
		func_599(1);
	}
}

int func_362(int iParam0)
{
	if (!func_600(iParam0))
	{
		return 0;
	}
	if (func_601(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_602(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_364()
{
	return Global_40.f_1095.f_3054;
}

void func_365(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_366(struct<4> Param0)
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
			if (func_603(Param0))
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
			func_604(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_365(8);
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
			if (func_603(Param0))
			{
				return;
			}
			func_604(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_365(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_385(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_367()
{
	return Global_1946804->f_2792;
}

int func_368(int iParam0)
{
	if (func_605())
	{
		return 0;
	}
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_317(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_369(int iParam0)
{
	return func_606(iParam0);
}

void func_370(int iParam0, int iParam1)
{
	func_607(iParam0, iParam1);
}

int func_371(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_608(iParam0);
	if (func_191(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_609(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_610();
			}
			else
			{
				iVar0 = func_611();
			}
		}
		else if (func_398(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_612();
		}
		else
		{
			iVar0 = func_613();
		}
	}
	else if (func_614(&iVar2))
	{
		if (func_191(iVar2, -1303648999))
		{
			iVar0 = func_610();
		}
		else
		{
			iVar0 = func_611();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_612();
	}
	else
	{
		iVar0 = func_613();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_372(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_373()
{
	func_615(&(Global_1946804->f_2776));
	func_616(32768);
	func_617(1108822547, 8, 6);
}

bool func_374(int iParam0, bool bParam1)
{
	return func_618(iParam0, 0) < func_619(iParam0, bParam1);
}

bool func_375(int iParam0)
{
	var uVar0;

	return func_620(iParam0, &uVar0);
}

void func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_621(iParam0))
	{
		return;
	}
	iVar0 = func_200(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_622(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_377(0))
	{
		func_623(iParam0, 1);
		if (func_624() == 1160113249)
		{
			func_623(func_377(-2125499975), 0);
		}
		else
		{
			func_623(func_377(1160113249), 0);
		}
	}
	func_625();
	if (func_626(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_96(0), iParam0, 0);
	}
	func_212(iParam0, bParam3);
	if (bParam2)
	{
		func_627(0, 0);
	}
}

int func_377(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_624();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

void func_378(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_200(iParam1);
	if (iVar0 != func_200(iParam0))
	{
		return;
	}
	func_628(iParam0, iParam1, 1);
}

int func_379(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_629(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_380(int iParam0, int iParam1)
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

int func_381(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_630();
	if (iParam2 == 39)
	{
		Var0 = { func_310(iParam0, 1, 0) };
		iParam2 = func_380(func_379(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_191(iParam0, 866047851) && func_631(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_372(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_632(func_629(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_633(iParam2);
	func_634(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_635(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_635(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_636(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_637(iParam0, iParam2, iParam1, func_17() != -1);
	if (bParam4)
	{
		func_638(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_638(&(Global_1946804->f_1378), 1, 0);
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
				func_617(func_629(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_382(bool bParam0, bool bParam1, bool bParam2)
{
	func_639(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_380(iParam0, 1);
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

void func_384(int iParam0)
{
	struct<4> Var0;

	if (func_640(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_641(Var0);
}

void func_385(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_641(Var0);
}

int func_386(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_312(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_96(bParam6), &Var0, 0);
	return uVar4;
}

bool func_387()
{
	return Global_1914319->f_18996.f_1;
}

bool func_388()
{
	return Global_1914319->f_18996;
}

char* func_389()
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

bool func_390(int iParam0)
{
	int iVar0;

	iVar0 = func_593(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_391(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_392(int iParam0)
{
	iParam0 = func_291(iParam0);
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

float func_393(int iParam0)
{
	iParam0 = func_291(iParam0);
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

float func_394(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_395(int iParam0)
{
	return func_398(((*Global_1129543)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/])->f_58, iParam0);
}

bool func_396()
{
	return !func_395(2);
}

bool func_397(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147325->f_1 && iParam0) != 0;
}

bool func_398(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_399()
{
	if ((((func_318(0) && !func_642()) || func_643()) || Global_1935689->f_1) || func_644())
	{
		return 0;
	}
	return 1;
}

void func_400(int iParam0)
{
	Global_1898068->f_8 = iParam0;
}

var func_401(int iParam0, int iParam1)
{
	return func_645(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_402(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
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
				func_646(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

bool func_403(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_191(iParam0, 1399091007))
	{
		func_647(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_405(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_309(iParam0, 0))
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
	if (!func_648())
	{
		func_649(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_650(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_650(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_430(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_198(iParam0);
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
	else if (!func_651(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_652(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_473(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_191(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_473(iParam0));
	}
	func_653(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_406(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_309(iParam0, 0))
	{
		return Var0;
	}
	if (func_191(iParam0, -305066475))
	{
		if (func_17() == -1)
		{
			if (func_191(iParam0, -537818634))
			{
				return func_654(189951448);
			}
			else
			{
				return func_654(1176172851);
			}
		}
	}
	else if (func_191(iParam0, -537818634))
	{
		return func_654(-963660207);
	}
	if (func_191(iParam0, 2084895747))
	{
		return func_654(1694039471);
	}
	return Var2;
}

int func_407(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_198(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_404(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_655(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_96(bParam2), iParam0, 0);
	return iVar2;
}

int func_408(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_656(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_657(&Var0, func_537(0));
	}
	if (!func_658(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_659(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_313(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_660(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_409(bool bParam0)
{
	if (func_17() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_96(bParam0));
}

void func_410(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_191(iParam0, 606799272))
		{
			func_661(iParam0, iParam1);
		}
		if (func_191(iParam0, -1112814642) && func_191(iParam0, -1697809989))
		{
			func_456(iParam0, iParam1, 1, 0);
		}
	}
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_412(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_662(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_663(iParam0))
	{
		return 0;
	}
	if (func_664(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_665(iParam0, 1)) || func_520(32768))
	{
		if (!func_665(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_666())
	{
		return 0;
	}
	return 1;
}

void func_413(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_414(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_415()
{
	Global_1911914->f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914->f_1581 = 1;
}

int func_416(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_17() == -1)
	{
		if (func_667(iParam0) && func_668(iParam0))
		{
			func_669(iParam0, iParam1, 1, &bParam2, iParam3);
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

int func_417(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_670(iParam0, iParam1);
	Var0 = { func_310(iParam0, 0, 1) };
	iVar5 = func_671(iParam0, &Var0, 0, 0);
	iVar6 = func_672(iParam0, 0);
	if ((iVar5 > 1 && !func_673()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_191(iParam0, -2051813666))
		{
			func_231(583, 1);
		}
		else
		{
			func_231(582, 0);
		}
	}
	if (func_674(iParam0, &Var0, *iParam1, 0, 0))
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

void func_418(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_341(iParam0, -949239683))
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

bool func_419(int iParam0)
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_420(iParam0) != 0;
}

int func_420(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_675())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_676(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_421(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_422(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_675())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_421(iVar0))
		{
			if (func_317(func_676(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_423(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_677(48);
	func_86(0, -1);
}

int func_424(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_425(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_426(int iParam0)
{
	if (func_17() != -1)
	{
		return 0;
	}
	return func_339(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_427(int iParam0)
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (!func_153(iParam0))
	{
		return 0;
	}
	return func_390(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_428()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_317(func_678(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_429(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

int func_430(int iParam0, int iParam1)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_431(int iParam0)
{
	if (!func_679(iParam0))
	{
		return 0;
	}
	return func_680(iParam0);
}

void func_432(int iParam0)
{
	if (!func_679(iParam0))
	{
		return;
	}
	func_681(iParam0);
	func_682(iParam0);
}

int func_433(int iParam0, bool bParam1)
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
	if (func_309(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_683(iVar0) || func_684(iVar0))
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

int func_434(int iParam0, bool bParam1)
{
	if (!func_309(iParam0, 0))
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

void func_435(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_685(iParam0))
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

int func_436(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_310(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_686((375 + iVar28), 1);
			if (func_539(iParam0, &Var0, iVar5, 0))
			{
				if (func_540(iParam0, &Var6, iVar5))
				{
					Var29 = { func_312(iParam0, Var0, iVar5, 0) };
					func_313(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_409(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_437(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_687(iParam0, iParam1);
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

int func_437(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_439(iParam0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

int func_438(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_434(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_17() == -1)
		{
			func_435(iVar0);
			if (iParam1 == 1248274121)
			{
				func_688(iVar0);
			}
		}
		if (!func_674(iParam0, &uVar1, 1, 0, 0))
		{
			func_669(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_689(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_436(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || iVar0 == joaat("weapon_kit_binoculars"))
			{
				func_436(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_lasso"))
			{
				func_436(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_690())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_691(iVar0))
				{
					func_436(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_436(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_692(Global_35, 2, 0, 1);
				if ((((func_685(iVar7) && !Global_43890) && iVar7 != iVar0) && !func_317(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_685(iVar7) && func_317(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_436(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_436(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_436(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_231(480, 1);
	}
	return 1;
}

bool func_439(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_440(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_439(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_685(iVar4))
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
	if (func_317(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
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
		func_474(func_693(iParam0), func_473(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_17() == -1)
		{
			if (func_339(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_231(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_409(0))
	{
		if (func_437(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_479(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_441(int iParam0)
{
	var uVar0;

	if ((iParam0 == -615217896 && !func_694()) || iParam0 != -615217896)
	{
		if (func_695(Global_35, iParam0, &uVar0))
		{
			func_211(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_261();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_261();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_261();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_463();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_461();
			break;
	}
}

void func_442(int iParam0)
{
	switch (iParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_461();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_462();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_463();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_464();
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
			func_261();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_696();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_697();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_443(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_444(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_445(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_446(int iParam0)
{
	bool bVar0;

	bVar0 = func_191(iParam0, -2017733358);
	if (func_698() < 3)
	{
		if (bVar0)
		{
			if (func_700(func_699(iParam0), iParam0))
			{
				func_474(79, func_473(func_699(iParam0)), 1);
			}
			else
			{
				func_474(78, func_473(func_699(iParam0)), 1);
			}
		}
		else
		{
			func_474(80, func_473(func_701(iParam0)), 1);
		}
	}
}

int func_447()
{
	if (((((func_702(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_702(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_702(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_702(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_702(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_702(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_703(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_704(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_705(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_449(int iParam0)
{
	switch (iParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_328(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_328(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_328(39, 0, 0, 0, 0, 0, 1, 0);
			func_327(39, 0, 0, 0, 0, -1, 0);
			func_332(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_328(41, 0, 0, 0, 0, 0, 1, 0);
			func_327(41, 0, 0, 0, 0, -1, 0);
			func_335(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_328(49, 0, 0, 0, 0, 0, 1, 0);
			func_327(49, 0, 0, 0, 0, -1, 0);
			func_338(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_328(43, 0, 0, -1791518714, func_706(1), 0, -1, 0);
			func_707(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_328(43, 0, 0, -2087881550, func_706(2), 0, -1, 0);
			func_707(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_328(43, 0, 0, 1908068621, func_706(4), 0, -1, 0);
			func_707(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_328(43, 0, 0, 1611247019, func_706(8), 0, -1, 0);
			func_707(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_328(43, 0, 0, 1319635688, func_706(16), 0, -1, 0);
			func_707(16);
			break;
	}
}

void func_450(int iParam0)
{
	if (func_708() == 1)
	{
		if (func_324(39))
		{
			func_231(342, 0);
		}
		else
		{
			func_231(343, 0);
			func_332(1);
		}
	}
	if (func_708() >= 30)
	{
		func_231(344, 0);
	}
	func_328(39, 0, 0, 0, 0, 0, -1, 0);
	func_327(39, 0, 0, func_708(), 30, 1, 0);
}

void func_451(int iParam0)
{
	if (func_709() == 1)
	{
		if (func_324(49))
		{
			func_231(409, 0);
		}
		else
		{
			func_231(410, 0);
			func_338(1);
		}
	}
	if (func_709() >= 10)
	{
		func_231(411, 0);
	}
	func_328(49, 0, 0, 0, 0, 0, -1, 0);
	func_327(49, 0, 0, func_709(), 10, 1, 0);
}

void func_452(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_231(437, 0);
			func_231(440, 0);
			func_710(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(-949689219, 20), 1, 0);
			func_329(1);
			func_711(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_710(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(-1248968496, 20), 1, 0);
			func_329(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_710(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(1706369307, 20), 1, 0);
			func_329(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_710(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(1520110311, 20), 1, 0);
			func_329(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_231(438, 0);
			func_710(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_328(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_327(51, 0, 0, sVar0, func_585(-1992824800, 20), 1, 0);
			func_329(32768);
			break;
		default:
			func_231(439, 0);
			break;
	}
}

void func_453()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_17() == -1)
	{
		if (!func_324(43))
		{
			if (iParam0 == 281887510)
			{
				func_231(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_231(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_231(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_231(400, 0);
			}
		}
		else if (func_191(iParam0, 412399755))
		{
			func_712(-1791518714);
			if (func_713() == 0)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_324(44))
		{
			if (iParam0 == -222563712)
			{
				func_231(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_231(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_231(401, 0);
			}
		}
		else if (func_191(iParam0, 709057512))
		{
			func_712(-2087881550);
			if (func_713() == 1)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_324(45))
		{
			if (iParam0 == 2116770557)
			{
				func_231(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_231(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_231(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_231(398, 0);
			}
		}
		else if (func_191(iParam0, -1478961327))
		{
			func_712(1908068621);
			if (func_713() == 2)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_717(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_718(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_677(48);
					}
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_324(46))
		{
			if (iParam0 == 2085530337)
			{
				func_231(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_231(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_231(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_231(406, 0);
			}
		}
		else if (func_191(iParam0, -1238404098))
		{
			func_712(1611247019);
			if (func_713() == 3)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_324(47))
		{
			if (iParam0 == -1521783510)
			{
				func_231(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_231(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_231(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_231(403, 0);
			}
		}
		else if (func_191(iParam0, 1160548794))
		{
			func_712(1319635688);
			if (func_713() == 4)
			{
				func_86(0, 10);
				iVar1 = func_714(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_715(iParam0) < func_716(iParam0))
					{
						func_328(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_327(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_455(int iParam0)
{
	int iVar0;

	if (iParam0 == 2116770557)
	{
		if (!func_717(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_718(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_677(48);
		}
	}
}

void func_456(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_317(func_719(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_720(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_721(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_457(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_17() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_448(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_448(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_448(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_448(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_448(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_448(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_448(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_448(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_448(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_448(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_448(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_448(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_448(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_722())
			{
				func_448(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_448(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_448(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_448(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_448(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_448(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_448(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_448(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_448(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_448(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_448(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_448(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_448(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_458(int iParam0)
{
	if (func_324(41))
	{
		func_231(363, 0);
	}
	else
	{
		func_231(362, 0);
	}
	switch (iParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_723(-1865241121);
			func_724(-642026005);
			func_725(-642026005);
			func_86(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_723(2117142684);
			func_724(-940584364);
			func_725(-940584364);
			func_86(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_723(-1409326024);
			func_724(1972645282);
			func_725(1972645282);
			func_86(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_723(-641744968);
			func_724(1667205433);
			func_725(1667205433);
			func_86(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_723(-946988203);
			func_724(1362715885);
			func_725(1362715885);
			func_86(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_723(-646136018);
			func_724(1053540370);
			func_725(1053540370);
			func_86(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_723(-955835837);
			func_724(-1100103852);
			func_725(-1100103852);
			func_86(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_723(-179276075);
			func_724(-1409869209);
			func_725(-1409869209);
			func_86(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_723(-492711560);
			func_724(-1760235357);
			func_725(-1760235357);
			func_86(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_723(1764383959);
			func_724(-138366827);
			func_725(-138366827);
			func_86(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_723(317501533);
			func_724(-1261163843);
			func_725(-1261163843);
			func_86(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_723(817753087);
			func_724(-963523016);
			func_725(-963523016);
			func_86(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_723(576606016);
			func_724(560825326);
			func_725(560825326);
			func_86(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_723(814934957);
			func_724(858269539);
			func_725(858269539);
			break;
	}
}

void func_459(int iParam0, int iParam1)
{
	var uVar0;

	func_647(iParam0, iParam1, &uVar0);
}

int func_460(int iParam0, bool bParam1)
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
	iVar18 = func_692(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_692(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_726("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_659(&Var3, iVar2, iVar0, iVar1))
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
						func_660(iVar0);
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

void func_461()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_462()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_463()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_464()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_465(int iParam0, int iParam1, bool bParam2)
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

void func_466(int iParam0, bool bParam1)
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
	func_582(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_467(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_468(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_469(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_470(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_471(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_472(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_473(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_474(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_665(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_475(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_665(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
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

int func_476()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_675())
	{
		return func_477();
	}
	iVar4 = (func_675() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_675())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_727(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_676(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_477()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_675());
	return func_676(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_478(int iParam0)
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

int func_479(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_310(iParam0, 0, 1) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	return func_728(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_17() != -1)
	{
		return;
	}
	switch (func_200(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_618(81053684, 0) <= 0)
			{
				func_208(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_208(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_207(iParam0);
			if (func_600(iVar0))
			{
				func_729(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_208(30, iParam0, 0, 0, 0);
			}
			if (func_624() == -2125499975 || func_624() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_624() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_208(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_374(-525676072, 0))
			{
				if (func_730(-525676072, &iVar1))
				{
					func_208(33, iVar1, 0, 0, 0);
				}
			}
			func_208(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_731(99217379))
		{
			func_211(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_432(24);
		if (func_460(&iVar2, 0))
		{
			func_436(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_481(int iParam0)
{
	if (func_191(iParam0, 943695443))
	{
		func_732(0, iParam0);
	}
	else if (func_191(iParam0, -2096528786))
	{
		func_732(1, iParam0);
	}
	else if (func_191(iParam0, -1094167013))
	{
		func_732(2, iParam0);
	}
	else if (func_191(iParam0, 1936654645))
	{
		func_732(3, iParam0);
	}
	else if (func_191(iParam0, 1306489306))
	{
		func_732(4, iParam0);
	}
	else if (func_191(iParam0, 435762317))
	{
		func_732(5, iParam0);
	}
	else if (func_191(iParam0, 1259363210))
	{
		func_732(6, iParam0);
	}
	else if (func_191(iParam0, 881398259))
	{
		func_732(7, iParam0);
	}
	else if (func_191(iParam0, -541549214))
	{
		func_732(8, iParam0);
	}
	else if (func_191(iParam0, 130796156))
	{
		func_732(-1, iParam0);
	}
}

int func_482(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_733(&Var4, 1356624740);
	return func_734(iParam0, &Var4, &uVar0, iParam1);
}

void func_483(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_17() == -1)
			{
				if (func_339(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_231(109, 1);
				}
			}
			break;
	}
}

void func_484(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_736(func_735(0));
	func_653(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_737(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_485(var uParam0)
{
	return func_102(*uParam0, 2);
}

void func_486(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_116(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

int func_487()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

var func_488()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_489(int iParam0, int iParam1, bool bParam2)
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

bool func_490(int iParam0)
{
	return STREAMING::_0x8D56BDA343D9519F(func_738(iParam0));
}

int func_491(int iParam0, bool bParam1)
{
	if (!func_176())
	{
		return 1;
	}
	if (func_739(iParam0))
	{
		if (iParam0 == func_170())
		{
			return 0;
		}
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_zero"))
		{
			if ((((((((iParam0 == 22 || iParam0 == 38) || iParam0 == 37) || iParam0 == 117) || iParam0 == 127) || iParam0 == 115) || iParam0 == 110) || iParam0 == 120) || iParam0 == 126)
			{
				return 0;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			if (iParam0 == 37 && !func_247(9))
			{
				return 0;
			}
		}
		switch (iParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
				{
					return 0;
				}
				if (func_250() != iParam0)
				{
					return 0;
				}
				break;
			case 43:
				if (!bParam1)
				{
					return 0;
				}
				break;
		}
		if (func_572() == 8)
		{
			if (func_740(iParam0, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_492(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	var uVar24;
	int iVar25;

	uVar0 = func_741(iParam1);
	iVar1 = func_742(iParam1);
	iVar2 = 0;
	StringCopy(&cVar3, HUD::_GET_LABEL_TEXT_BY_HASH(((*uParam0)[iVar2 /*7*/])->f_6), 64);
	StringCopy(&cVar11, HUD::_GET_LABEL_TEXT_BY_HASH(iVar1), 64);
	while (((*uParam0)[iVar2 /*7*/])->f_3 && MISC::COMPARE_STRINGS(&cVar3, &cVar11, false, -1) <= 0)
	{
		iVar2++;
		StringCopy(&cVar3, HUD::_GET_LABEL_TEXT_BY_HASH(((*uParam0)[iVar2 /*7*/])->f_6), 64);
	}
	iVar19 = iVar2;
	iVar20 = iParam1;
	uVar22 = uVar0;
	iVar23 = iVar1;
	while (((*uParam0)[iVar19 /*7*/])->f_3 && iVar19 < (*uParam0 - 1))
	{
		if (iVar20 == iParam1)
		{
		}
		uVar24 = ((*uParam0)[iVar19 /*7*/])->f_4;
		iVar21 = uParam0[iVar19 /*7*/];
		iVar25 = ((*uParam0)[iVar19 /*7*/])->f_6;
		((*uParam0)[iVar19 /*7*/])->f_4 = uVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		((*uParam0)[iVar19 /*7*/])->f_3 = 1;
		((*uParam0)[iVar19 /*7*/])->f_6 = iVar23;
		func_743((*uParam0)[iVar19 /*7*/], uParam0[iVar19 /*7*/]);
		uVar22 = uVar24;
		iVar20 = iVar21;
		iVar23 = iVar25;
		iVar19++;
	}
	if (!((*uParam0)[iVar19 /*7*/])->f_3)
	{
		((*uParam0)[iVar19 /*7*/])->f_4 = uVar22;
		(*uParam0)[iVar19 /*7*/] = iVar20;
		((*uParam0)[iVar19 /*7*/])->f_3 = 1;
		((*uParam0)[iVar19 /*7*/])->f_6 = iVar23;
	}
}

void func_493(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	var uVar9;

	iVar0 = func_741(iParam1);
	uVar1 = func_742(iParam1);
	if (iParam1 == func_250())
	{
		((*uParam0)[0 /*7*/])->f_4 = iVar0;
		(*uParam0)[0 /*7*/] = iParam1;
		((*uParam0)[0 /*7*/])->f_3 = 1;
		((*uParam0)[0 /*7*/])->f_6 = uVar1;
		return;
	}
	iVar2 = 1;
	while ((((*uParam0)[iVar2 /*7*/])->f_4 < iVar0 && iVar2 < (*uParam0 - 1)) && ((*uParam0)[iVar2 /*7*/])->f_3)
	{
		iVar2++;
	}
	iVar3 = iVar2;
	iVar4 = iParam1;
	iVar6 = iVar0;
	uVar7 = uVar1;
	while (((*uParam0)[iVar3 /*7*/])->f_3 && iVar3 < (*uParam0 - 1))
	{
		if (iVar4 == iParam1)
		{
		}
		iVar8 = ((*uParam0)[iVar3 /*7*/])->f_4;
		iVar5 = uParam0[iVar3 /*7*/];
		uVar9 = ((*uParam0)[iVar3 /*7*/])->f_6;
		((*uParam0)[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		((*uParam0)[iVar3 /*7*/])->f_3 = 1;
		((*uParam0)[iVar3 /*7*/])->f_6 = uVar7;
		func_743((*uParam0)[iVar3 /*7*/], uParam0[iVar3 /*7*/]);
		iVar6 = iVar8;
		iVar4 = iVar5;
		uVar7 = uVar9;
		iVar3++;
	}
	if (!((*uParam0)[iVar3 /*7*/])->f_3)
	{
		((*uParam0)[iVar3 /*7*/])->f_4 = iVar6;
		(*uParam0)[iVar3 /*7*/] = iVar4;
		((*uParam0)[iVar3 /*7*/])->f_3 = 1;
		((*uParam0)[iVar3 /*7*/])->f_6 = uVar7;
	}
}

float func_494(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 1;
	fVar1 = ((IntToFloat(iVar0) * (0.33f * BUILTIN::POW((IntToFloat(iParam0) * 0.01f), 0.75f))) / 2f);
	if (func_17() != -1)
	{
		fVar1 = (fVar1 + IntToFloat(func_744()));
	}
	return func_745(fVar1, 2, 1);
}

int func_495(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_746(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0 /*51*/][iVar2];
			if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iVar4 /*35*/])->f_3))
			{
				if (VOLUME::_0xF256A75210C5C0EB(((*Global_1888801)[iVar4 /*35*/])->f_3, vParam0))
				{
					switch (((*Global_1888801)[iVar4 /*35*/])->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_496()
{
	if (func_747())
	{
		return 1;
	}
	return 0;
}

float func_497()
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

	if (func_748())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_289(2);
	}
	if (Global_1347477->f_119)
	{
		return func_289(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_755(3, fVar9, fVar9 > 100f);
	return func_756(fVar7, -100f, 100f);
}

float func_498()
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

	if (func_748())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_289(1);
	}
	if (Global_1347477->f_119)
	{
		return func_289(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_755(2, fVar9, fVar9 > 100f);
	return func_756(fVar7, -100f, 100f);
}

float func_499()
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

	if (func_748())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_289(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_757())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_758())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_289(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_749();
	fVar2 = func_750();
	fVar3 = func_751();
	fVar4 = func_752();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_753()));
	fVar7 = (func_289(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_754(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_755(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_289(0);
	}
	return func_756(fVar7, -100f, 100f);
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
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

void func_501(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_516(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_759(iParam1), fParam2, -1);
	}
}

void func_502(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_496();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_760(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_761(iParam0, iVar0, iParam3);
	}
}

int func_503(int iParam0)
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

int func_504(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_505(int iParam0)
{
	int iVar0;

	if (!func_269(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_762(iParam0);
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

float func_506(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_507(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_160(iParam0))
	{
		return;
	}
	if (!func_157(iParam0))
	{
		return;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam1 && ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = func_276(iParam0);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 87, bParam1);
	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(iVar0, func_763(iParam0));
		PED::_0x9238A3D970BBB0A9(iVar0, -1972074710);
		PED::_0x9238A3D970BBB0A9(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(iVar0);
		if (!func_764())
		{
			PED::_0x9A4AC116CC1EEE14(Global_35);
		}
	}
}

int func_508(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_765(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_509(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_17() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_510(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_283(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_511(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_512(int iParam0)
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

void func_513(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), bParam2);
}

float func_514(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_515(int iParam0)
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

char* func_516(int iParam0)
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

int func_517(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return 0;
	}
	return 1;
}

char* func_518(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_519(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

bool func_520(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_521(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_153(iParam0))
	{
		return iVar0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

int func_522(int iParam0)
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (!func_153(iParam0))
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1048576 != 0 && ((*Global_1347702)[iParam0 /*49*/])->f_13 & 2048 != 0)
	{
		return 0;
	}
	if (((*Global_1347702)[iParam0 /*49*/])->f_18 > -1f)
	{
		return 1;
	}
	return 0;
}

void func_523(int iParam0)
{
	switch (func_17())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 || iParam0);
			break;
	}
}

void func_524(int iParam0)
{
	if (!func_522(iParam0))
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 16 != 0)
		{
			if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
				}
				func_531(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37))
			{
				MAP::_SET_BLIP_FLASH_STYLE(((*Global_1347702)[iParam0 /*49*/])->f_37, -1446646876);
			}
			func_302(&(((*Global_1347702)[iParam0 /*49*/])->f_13), 32);
		}
	}
}

void func_525(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_0x662D364ABF16DE2F(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

int func_527(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_528(int iParam0)
{
	if (!func_767(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_768(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_769(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_769(iParam0), false) <= func_770();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_770();
	}
	return func_48();
}

int func_529(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

void func_530(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_155(iParam0))
	{
		return;
	}
	switch (func_771(iParam0))
	{
		case 1:
			iVar0 = func_152(iParam0);
			if (func_772(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_773(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_773(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (((*Global_1835011)[iVar0 /*74*/])->f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1835011)[iVar0 /*74*/])->f_27, iVar2);
				if (!func_774(iVar0))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_299((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_0x662D364ABF16DE2F(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_152(iParam0);
			if (func_775(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_521(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_521(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_525(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

void func_531(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_532(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_533(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_534(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

int func_535(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_776(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

struct<4> func_536(bool bParam0)
{
	return func_312(joaat("character"), func_777(), -1591664384, bParam0);
}

struct<4> func_537(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_312(923904168, func_536(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_312(923904168, func_536(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_312(923904168, func_536(bParam0), -740156546, 0);
}

int func_538(int iParam0, bool bParam1)
{
	if (func_200(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_672(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_539(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_386(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_540(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_778(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_541(bool bParam0)
{
	int iVar0;

	iVar0 = func_96(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_312(271701509, func_536(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_312(271701509, func_536(bParam0), 12999093, 0);
}

int func_542(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
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

int func_543(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_96(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_544(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_545(int iParam0)
{
	if (func_309(iParam0, 0))
	{
		if (func_191(iParam0, -1242251796))
		{
			if (func_191(iParam0, 2060589226))
			{
				return func_779();
			}
			return func_780();
		}
		else if (func_191(iParam0, 1919582297))
		{
			return func_554();
		}
		else if (func_191(iParam0, 1147021565))
		{
			return func_555();
		}
	}
	if (Global_1935496->f_12)
	{
		return func_780();
	}
	else
	{
		return func_555();
	}
	return func_555();
}

int func_546(int iParam0)
{
	if ((((((((((func_191(iParam0, 1147021565) || func_191(iParam0, -136654233)) || func_191(iParam0, -524514947)) || func_191(iParam0, -1238310989)) || func_191(iParam0, 1765172170)) || func_191(iParam0, 1490540191)) || func_191(iParam0, 1573112293)) || func_191(iParam0, -1242251796)) || func_191(iParam0, 1919582297)) || func_191(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

int func_547()
{
	return 33284224;
}

int func_548()
{
	return 33537269;
}

int func_549()
{
	return 18589696;
}

int func_550()
{
	return 26978448;
}

int func_551()
{
	return 33529847;
}

int func_552()
{
	return 26978304;
}

int func_553()
{
	return 32505855;
}

int func_554()
{
	return 26983431;
}

int func_555()
{
	return 33537239;
}

int func_556()
{
	return 32713860;
}

int func_557()
{
	return 16400295;
}

int func_558()
{
	return 33284224;
}

void func_559(int iParam0)
{
	if (func_781(32))
	{
		return;
	}
	func_782(32);
	if (func_567(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_577(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_783(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_784(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_319(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_785(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_786(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_787(0))
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
	if (func_17() == 0 && PED::_0xB655DB7582AEC805(Global_35))
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
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || func_783(Global_35, 1369124074))
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
	if (func_788(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_789(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_790(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_791())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_792(iParam0))
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
	if (((((func_17() == -1 && func_117(32768)) || func_316()) || func_793()) || (func_105() && !func_794())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_225(Global_35, 1, 0, 0) == joaat("weapon_fishingrod"))
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

int func_560(bool bParam0)
{
	int iVar0;

	if (func_795(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_795(2) && !Global_1392040->f_2) && MISC::GET_GAME_TIMER() >= Global_36614)
	{
		if (bParam0)
		{
			iVar0 = func_796(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_202("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_202("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_795(4194304))
	{
		return 0;
	}
	return 1;
}

int func_561(bool bParam0)
{
	if (PED::_IS_PED_CARRYING(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_562(bool bParam0, int iParam1, bool bParam2)
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
					func_202("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
				{
					func_202("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_215(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
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

int func_563(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_564(int iParam0, bool bParam1)
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

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_404(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_726("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_659(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_685(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_660(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_660(iVar1);
	}
	return 0;
}

bool func_566()
{
	return Global_1894899 & 4 != 0;
}

bool func_567(int iParam0)
{
	return (func_797(iParam0, 4) || func_797(iParam0, 5));
}

bool func_568()
{
	return func_798(512);
}

bool func_569(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_570()
{
	return Global_1310750->f_16077 != 0;
}

bool func_571(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

int func_572()
{
	return Global_1897952->f_41;
}

int func_573(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return func_799(iParam0, 33554432);
}

int func_574(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_575(int iParam0)
{
	if (func_574(iParam0) != 5)
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

int func_576()
{
	int iVar0;

	iVar0 = func_170();
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

int func_577(int iParam0)
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

int func_578()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	iVar0 = func_170();
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
		if (func_800(Global_35, iVar1, 1, 0))
		{
			func_801(iVar1);
			return 1;
		}
		else
		{
			func_801(iVar1);
			return 0;
		}
	}
	return 0;
}

int func_579(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_235(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_580(vector3 vParam0, float fParam3)
{
	if (func_802(vParam0, fParam3))
	{
		return 1;
	}
	if (func_803(vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_581(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

var func_582(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_583(int iParam0)
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

var func_584(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

int func_585(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_804(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_586(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_428() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_805(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_806(), 12);
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
			else if (func_708() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_807(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_708(), 30);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_808(), 13);
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
			else if (func_709() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_809(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_709(), 10);
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
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_585(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_587(int iParam0, int iParam1, int iParam2)
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

int func_588(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_589(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_590(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_810(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_317(iVar2, 1, 0) || func_812(func_811(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_583(func_810(iVar0))), func_583(func_810(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_708() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(iVar0)), func_813(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_807() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(iVar0)), func_813(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_813(iVar0)), func_813(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_719(iParam3, func_814(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_715(iVar2) - iParam7) >= func_585(iParam3, func_815(iVar0));
				}
				else
				{
					bVar1 = func_715(iVar2) >= func_585(iParam3, func_815(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_715(iVar2) + iParam7) >= func_585(iParam3, func_815(iVar0));
			}
			else
			{
				bVar1 = func_715(iVar2) >= func_585(iParam3, func_815(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_816(iVar2)), func_816(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_817(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_818(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_818(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_709() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_819(iVar0)), func_819(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_809() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_819(iVar0)), func_819(iVar0), bVar1, 1, 0);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_819(iVar0)), func_819(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_719(iParam3, func_814(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_715(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_820(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_820(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_821(iVar2)), func_821(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_591(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_808() >= 13)
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

int func_592(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_155(func_822(0)) && ((func_823(0) == 1 || func_823(0) == 8) || func_823(0) == 6))
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

int func_593(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_824(iParam0);
}

int func_594()
{
	int iVar0;
	int iVar1;

	if (PED::_IS_PED_CARRYING(Global_35))
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_825(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_825(iVar0)) || iVar0 == joaat("weapon_lasso"))
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

void func_595(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_596(int iParam0, bool bParam1)
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
	if ((func_191(iParam0, 1573112293) || func_191(iParam0, 672467738)) || func_191(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_198(iParam0) == 2085633299)
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
				fVar30 = func_826(0, Var22.f_2);
				func_90(Var22.f_2, 1);
				func_171(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_826(2, Var22.f_2);
				func_91(Var22.f_2);
				func_171(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_826(1, Var22.f_2);
				func_827(Var22.f_2);
				func_171(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar33))
				{
					func_830(fVar33, 1, bVar37, bParam1);
					func_171(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar34))
				{
					func_831(fVar34, 1, bVar37, bParam1);
					func_171(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_828(Var22.f_2, Var22.f_5);
				if (func_829(&uVar38, &uVar39, fVar35))
				{
					func_832(fVar35, 1, bVar37, bParam1);
					func_171(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_72(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_73(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_833(BUILTIN::TO_FLOAT(Var22.f_2), 1);
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
		if (bVar42 || func_191(iParam0, -537818634))
		{
			func_444(func_654(-704089207), 1);
		}
		if (func_191(iParam0, -1457797660))
		{
			func_444(func_654(-1909697259), 1);
		}
		if (bVar40)
		{
			func_444(func_654(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

int func_597(int iParam0)
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

void func_598(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = func_834(iParam0);
	iVar1 = func_597(&uVar0);
	if (iVar1 != iParam0)
	{
		func_835(iVar1, 4);
	}
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_837(iParam0))
	{
		return;
	}
	func_835(iParam0, 4);
	func_838(iParam0, bParam1);
	if (!func_839(iParam0))
	{
		func_840(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

void func_599(int iParam0)
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

int func_600(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

bool func_601(int iParam0, int iParam1)
{
	if (!func_600(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

int func_602(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_841(Global_35, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_35, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_603(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_604(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_605()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_842())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_606(int iParam0)
{
	int iVar0;

	iVar0 = func_200(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_607(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_608(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_614(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_609(int iParam0)
{
	if (-1829635046 == func_843(81053684))
	{
		if (func_614(iParam0))
		{
			return 1;
		}
	}
	else if (func_844(-525676072, iParam0))
	{
		if (func_614(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_610()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_594())
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

int func_611()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_594())
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

int func_612()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_594())
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

int func_613()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_594())
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

int func_614(int iParam0)
{
	if (func_844(81053684, iParam0))
	{
		return 1;
	}
	if (func_844(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_615(var uParam0)
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

void func_616(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_380(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_380(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_380(iParam0, 1) /*11*/])->f_10 && iParam1));
}

int func_618(int iParam0, bool bParam1)
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
				return func_845();
			}
			break;
	}
	return 0;
}

int func_619(int iParam0, bool bParam1)
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

int func_620(int iParam0, int iParam1)
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

int func_621(int iParam0)
{
	if (func_17() == -1)
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

int func_622(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_620(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_846(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_200(iParam0) != -999503751)
	{
		func_847(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_623(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_96(0), &Var5);
	return 1;
}

int func_624()
{
	return Global_1946804->f_1;
}

void func_625()
{
	int iVar0;

	if (func_17() == -1)
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

bool func_626(int iParam0)
{
	return func_849(func_848(iParam0));
}

void func_627(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_850(0);
	}
	if (bParam0)
	{
		func_365(8);
		func_365(512);
	}
	else
	{
		func_365(8);
		func_365(16);
	}
}

void func_628(int iParam0, int iParam1, bool bParam2)
{
	func_851(iParam0, 0, 0);
	func_376(iParam1, 1, bParam2, 0);
}

int func_629(int iParam0, int iParam1)
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

void func_630()
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

int func_631(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_632(int iParam0)
{
	func_617(iParam0, 8, 6);
}

void func_633(int iParam0)
{
	func_852(&(Global_1946804->f_2589), iParam0);
}

void func_634(int iParam0, int iParam1)
{
	func_853(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_635(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_636(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_200(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_854(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_634(iVar1, iVar3);
		}
	}
	if (func_731(-1586649372) && func_854(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_634(iVar1, iVar3);
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
						func_634(iVar1, iVar3);
					}
				}
			}
			func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_855(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_634(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_855(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_855(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_634(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_855(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_634(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_200(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_191(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
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
			switch (func_200(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_200(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_200(&(uParam0->f_1[iVar1 /*3*/])) || func_191(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_634(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_637(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_856(0);
	if (iParam2 != 0 && func_857(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_858(iParam0, func_629(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_638(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_17() != -1;
	iVar7 = func_856(0);
	if (func_372(32768))
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
			iVar5 = func_629(iVar0, 1);
			if (func_859(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_859(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_860(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_861(uParam0);
				if (iVar3 > 0)
				{
					if (!func_372(524288))
					{
						func_365(524288);
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
							iVar5 = func_629(iVar0, 1);
							if (func_859(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_859(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_860(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_634(iVar0, iParam2);
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
					func_616(524288);
				}
			}
		}
	}

void func_639(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_862(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_17() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_863(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_864(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_864(Global_40.f_7729);
				Global_1946804->f_1378 = func_864(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_865(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_627(0, 1);
	}
}

bool func_640(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_641(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_603(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_603(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_604(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_365(8);
}

bool func_642()
{
	return Global_1914319->f_17375;
}

int func_643()
{
	int iVar0;

	if (func_866())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return 0;
}

bool func_644()
{
	return &Global_1898068;
}

var func_645(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_867() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_868());
				break;
			case -432403087:
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_868());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_868());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_869(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_870(iVar2))
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
				if (iVar9 & 8192 != 0 && func_871(iVar2) != 1)
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
					if (!func_872(iVar10))
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

int func_646(var uParam0, struct<18> Param1)
{
	if (!func_873(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*18*/]) = { Param1 };
	*uParam0++;
	return 1;
}

void func_647(int iParam0, int iParam1, var uParam2)
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

bool func_648()
{
	return !&Global_1911774;
}

void func_649(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_650(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_651(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_652(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_874(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_654(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_655(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_656(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_657(&Var0, func_537(0));
	}
	if (!func_658(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_660(iVar14);
	return uVar15;
}

struct<14> func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_657(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_658(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_96(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_659(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_660(int iParam0)
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

void func_661(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_17() == -1)
	{
		if (func_324(43))
		{
			if (func_191(iParam0, 412399755))
			{
				func_712(-1791518714);
				if (func_713() == 0)
				{
					func_86(0, 10);
					iVar0 = func_875(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_324(44))
		{
			if (func_191(iParam0, 709057512))
			{
				func_712(-2087881550);
				if (func_713() == 1)
				{
					func_86(0, 10);
					iVar0 = func_875(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(45))
		{
			if (func_191(iParam0, -1478961327))
			{
				func_712(1908068621);
				if (func_713() == 2)
				{
					func_86(0, 10);
					iVar0 = func_875(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(46))
		{
			if (func_191(iParam0, -1238404098))
			{
				func_712(1611247019);
				if (func_713() == 3)
				{
					func_86(0, 10);
					iVar0 = func_875(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_324(47))
		{
			if (func_191(iParam0, 1160548794))
			{
				func_712(1319635688);
				if (func_713() == 4)
				{
					func_86(0, 10);
					iVar0 = func_875(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_715(iParam0) < func_716(iParam0))
						{
							func_328(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_662(int iParam0, int iParam1)
{
	if (func_17() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_663(int iParam0)
{
	if (func_17() != -1)
	{
		if (func_665(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_665(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_664(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_665(iParam0, 65536) && !func_665(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_665(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_665(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_665(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_666()
{
	return Global_1905944->f_5694;
}

bool func_667(int iParam0)
{
	return func_198(iParam0) == joaat("weapon");
}

int func_668(int iParam0)
{
	var uVar0;

	if (func_17() != -1)
	{
		return 0;
	}
	if (func_430(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_674(iParam0, &uVar0, 1, 0, 0);
	}
	return func_317(iParam0, 1, 0);
}

void func_669(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_198(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_434(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_684(iVar0))
	{
		if (func_17() == -1)
		{
			func_435(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_407(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_405(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_670(int iParam0, int iParam1)
{
	int iVar0;

	if (func_191(iParam0, 58855631))
	{
		func_876(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_671(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_96(bParam3), iParam0);
}

int func_672(int iParam0, bool bParam1)
{
	if (func_439(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_96(bParam1), iParam0, 0);
}

int func_673()
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (!func_176())
	{
		return 0;
	}
	if (!func_339(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_339(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_339(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_339(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_339(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_339(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_339(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_339(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_339(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_339(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_339(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_339(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_339(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_339(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_339(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_339(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_339(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_339(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_339(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_339(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_339(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_339(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_339(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_339(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_339(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_339(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_674(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_877(&iParam0);
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		bParam3 = true;
	}
	if (func_667(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
		{
			Var0 = { func_537(0) };
			Var4.f_9 = -1591664384;
			if (!func_539(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_540(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_538(iParam0, 1))
			{
				if (!func_539(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_540(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_878(iParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_671(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_386(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_96(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_675()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_676(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_677(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_17() != -1)
	{
		return;
	}
	iVar0 = func_879(iParam0);
	fVar1 = func_880(iParam0);
	if ((Global_1347477->f_117 || !func_431(31)) || !func_881(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_882(iVar0) >= 7)
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
	func_883(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_653(MISC::_CREATE_VAR_STRING(6, func_884(iParam0), fVar1), "itemtype_textures", func_885(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_678(int iParam0)
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

int func_679(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_681(int iParam0)
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

void func_682(int iParam0)
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
			func_886(1);
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
			func_887(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_887(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_887(3);
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
			func_888(1);
			break;
		case 34:
			func_889(1);
			break;
		case 35:
			func_890(1);
			break;
		case 36:
			break;
		case 37:
			func_891(0);
			break;
		case 38:
			func_892(0);
			break;
		case 39:
			func_893(0);
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
			if ((!&Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_231(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_231(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_231(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_176()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_231(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_17() == -1)
			{
				if (!func_731(99217379) || func_244(99217379) == 2110595215)
				{
					if (func_690())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_317(iVar0, 1, 0))
					{
						func_479(iVar0, 1, 752097756);
					}
					func_211(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_479(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, 0))
				{
					func_479(1013902307, 1, 752097756);
				}
				if (!func_317(142640135, 1, 0))
				{
					func_479(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_479(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, 0))
				{
					func_479(786809402, 1, 752097756);
				}
				if (!func_317(-518019409, 1, 0))
				{
					func_479(-518019409, 1, 752097756);
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
			func_894();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			Jump @1577; //curOff = 1522
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			Jump @1577; //curOff = 1535
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			Jump @1577; //curOff = 1548
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			Jump @1577; //curOff = 1561
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
		}

int func_683(int iParam0)
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

int func_684(int iParam0)
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

bool func_685(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_686(int iParam0, int iParam1)
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

void func_687(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_895(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_688(int iParam0)
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
	iVar2 = func_65();
	func_66(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_689(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_825(iParam0))
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
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
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

int func_690()
{
	if (func_17() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_691(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_692(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_693(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_431(50))
			{
				if (!func_431(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_431(51))
			{
				if (!func_431(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_694()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_695(int iParam0, int iParam1, var uParam2)
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

	if (!func_309(iParam1, 0))
	{
		return 0;
	}
	if (func_198(iParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_17() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_200(iParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_896(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_191(iParam1, 866047851))
	{
		iVar5 = func_380(iVar4, 1);
		if (func_631(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT(iVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_200(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_191(iParam1, -1638171711))
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
			if (func_844(1868067663, &uVar0))
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
				iVar10 = func_860(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_860(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_200(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_191(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
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

void func_696()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_697()
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

int func_698()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_317(func_897(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_699(int iParam0)
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

int func_700(int iParam0, int iParam1)
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
	if (func_317(iVar0, 1, 0) && func_317(iVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_701(int iParam0)
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

int func_702(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_898(iParam0);
	if (iVar0 != -15)
	{
		func_66(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_899(iVar0, 1);
	}
	return 0;
}

int func_703(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_317(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
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
			if (func_309(iVar25, 0) && func_191(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_704(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_653(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_705(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_900())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_653(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_901(iVar0);
			func_902(iVar0, 0, 0);
		}
		func_653(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_444(func_654(1644987397), iVar1);
	}
}

int func_706(int iParam0)
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
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_715(iVar12);
		iVar8 = func_716(iVar12);
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

void func_707(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_708()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_903(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_709()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_710(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar0) && func_820(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar2))
		{
			*iParam2++;
		}
		if ((func_820(iVar0) && func_820(iVar1)) && func_820(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_820(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_820(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_820(iVar0))
		{
			*iParam2++;
		}
		if (func_820(iVar1))
		{
			*iParam2++;
		}
		if (func_820(iVar2))
		{
			*iParam2++;
		}
		if (func_820(iVar3))
		{
			*iParam2++;
		}
		if (((func_820(iVar0) && func_820(iVar1)) && func_820(iVar2)) && func_820(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_711(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_904(1497516462);
			func_905(2016141805);
			func_905(1010885152);
			func_905(-502324015);
			break;
		case 2016141805:
			func_905(1497516462);
			func_904(2016141805);
			func_905(1010885152);
			func_905(-502324015);
			break;
		case 1010885152:
			func_905(1497516462);
			func_905(2016141805);
			func_904(1010885152);
			func_905(-502324015);
			break;
		case -502324015:
			func_905(1497516462);
			func_905(2016141805);
			func_905(1010885152);
			func_904(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_905(-538889627);
			func_905(-538880323);
			func_905(-1056767524);
			func_904(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_906();
			func_904(iParam0);
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
			func_907();
			func_904(iParam0);
			break;
		case 2019386373:
			func_905(-664252410);
			func_905(2109952320);
			func_904(2019386373);
			break;
		case -664252410:
			func_905(2019386373);
			func_905(2109952320);
			func_904(-664252410);
			break;
		case 2109952320:
			func_905(2019386373);
			func_905(-664252410);
			func_904(2109952320);
			break;
		case -1674179981:
			func_905(-1835851517);
			func_905(-1838352012);
			func_904(-1674179981);
			break;
		case -1835851517:
			func_905(-1674179981);
			func_905(-1838352012);
			func_904(-1835851517);
			break;
		case -1838352012:
			func_905(-1674179981);
			func_905(-1835851517);
			func_904(-1838352012);
			break;
		case -1717960576:
			func_905(210001842);
			func_904(-1717960576);
			break;
		case 210001842:
			func_905(-1717960576);
			func_904(210001842);
			break;
		case -150493654:
			func_905(-1271608261);
			func_905(1846061697);
			func_905(-1145519186);
			func_904(-150493654);
			break;
		case -1271608261:
			func_905(-150493654);
			func_905(1846061697);
			func_905(-1145519186);
			func_904(-1271608261);
			break;
		case 1846061697:
			func_905(-150493654);
			func_905(-1271608261);
			func_905(-1145519186);
			func_904(1846061697);
			break;
		case -1145519186:
			func_905(-150493654);
			func_905(-1271608261);
			func_905(1846061697);
			func_904(-1145519186);
			break;
		case 1766284049:
			func_905(280705402);
			func_905(1926308480);
			func_904(1766284049);
			break;
		case 280705402:
			func_905(1766284049);
			func_905(1926308480);
			func_904(280705402);
			break;
		case 1926308480:
			func_905(1766284049);
			func_905(280705402);
			func_904(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_905(439465264);
				func_904(1609506757);
			}
			else
			{
				func_905(1609506757);
				func_905(439465264);
			}
			break;
		case 439465264:
			if (func_908(1609506757))
			{
				if (bParam1)
				{
					func_904(439465264);
				}
				else
				{
					func_905(439465264);
				}
			}
			break;
		case 1822001510:
			func_905(-1612662716);
			func_904(1822001510);
			break;
		case -1612662716:
			func_905(1822001510);
			func_904(-1612662716);
			break;
		case 1306158345:
			func_905(1952610440);
			func_905(-223469678);
			func_905(-404698347);
			func_905(1517904467);
			func_904(1306158345);
			break;
		case 1952610440:
			func_905(1306158345);
			func_905(-223469678);
			func_905(-404698347);
			func_905(1517904467);
			func_904(1952610440);
			break;
		case -223469678:
			func_905(1306158345);
			func_905(1952610440);
			func_905(-404698347);
			func_905(1517904467);
			func_904(-223469678);
			break;
		case -404698347:
			func_905(1306158345);
			func_905(1952610440);
			func_905(-223469678);
			func_905(1517904467);
			func_904(-404698347);
			break;
		case 1517904467:
			func_905(1306158345);
			func_905(1952610440);
			func_905(-223469678);
			func_905(-404698347);
			func_904(1517904467);
			break;
		case 1376646519:
			func_905(931649776);
			func_905(-434590080);
			func_905(1743048395);
			func_905(449774763);
			func_904(1376646519);
			break;
		case 931649776:
			func_905(1376646519);
			func_905(-434590080);
			func_905(1743048395);
			func_905(449774763);
			func_904(931649776);
			break;
		case -434590080:
			func_905(1376646519);
			func_905(931649776);
			func_905(1743048395);
			func_905(449774763);
			func_904(-434590080);
			break;
		case 1743048395:
			func_905(1376646519);
			func_905(931649776);
			func_905(-434590080);
			func_905(449774763);
			func_904(1743048395);
			break;
		case 449774763:
			func_905(1376646519);
			func_905(931649776);
			func_905(-434590080);
			func_905(1743048395);
			func_904(449774763);
			break;
		case -1414537028:
			func_905(38162571);
			func_905(1350391819);
			func_905(54073871);
			func_904(-1414537028);
			break;
		case 38162571:
			func_905(-1414537028);
			func_905(1350391819);
			func_905(54073871);
			func_904(38162571);
			break;
		case 1350391819:
			func_905(-1414537028);
			func_905(38162571);
			func_905(54073871);
			func_904(1350391819);
			break;
		case 54073871:
			func_905(-1414537028);
			func_905(38162571);
			func_905(1350391819);
			func_904(54073871);
			break;
		case 198200492:
			func_904(198200492);
			func_905(-1124061431);
			func_905(52706132);
			func_905(-259123672);
			break;
		case -1124061431:
			func_905(198200492);
			func_904(-1124061431);
			func_905(52706132);
			func_905(-259123672);
			break;
		case 52706132:
			func_905(198200492);
			func_905(-1124061431);
			func_904(52706132);
			func_905(-259123672);
			break;
		case -259123672:
			func_905(198200492);
			func_905(-1124061431);
			func_905(52706132);
			func_904(-259123672);
			break;
		case -919512195:
			func_904(-919512195);
			func_905(-1925798111);
			func_905(420709909);
			func_905(1703426636);
			break;
		case -1925798111:
			func_904(-1925798111);
			func_905(-919512195);
			func_905(420709909);
			func_905(1703426636);
			break;
		case 420709909:
			func_904(420709909);
			func_905(-919512195);
			func_905(-1925798111);
			func_905(1703426636);
			break;
		case 1703426636:
			func_904(1703426636);
			func_905(-919512195);
			func_905(-1925798111);
			func_905(420709909);
			break;
		case -1223121209:
			func_904(-1223121209);
			func_905(630808005);
			break;
		case 630808005:
			func_904(630808005);
			func_905(-1223121209);
			break;
		case 1453909576:
			func_904(1453909576);
			func_905(1643531967);
			break;
		case 1643531967:
			func_904(1643531967);
			func_905(1453909576);
			break;
		case 0:
			func_904(0);
			func_905(473295046);
			func_905(-1738165526);
			break;
		case 473295046:
			func_904(473295046);
			func_905(0);
			func_905(-1738165526);
			break;
		case -1738165526:
			func_904(-1738165526);
			func_905(0);
			func_905(473295046);
			break;
		case 932909855:
			func_904(932909855);
			func_905(2051822093);
			break;
		case 2051822093:
			func_904(2051822093);
			func_905(932909855);
			break;
		case 405586984:
			func_904(405586984);
			func_905(1509509592);
			func_905(-959357075);
			func_905(-1311865656);
			break;
		case 1509509592:
			func_904(1509509592);
			func_905(405586984);
			func_905(-959357075);
			func_905(-1311865656);
			break;
		case -959357075:
			func_904(-959357075);
			func_905(1509509592);
			func_905(405586984);
			func_905(-1311865656);
			break;
		case -1311865656:
			func_904(-1311865656);
			func_905(1509509592);
			func_905(-959357075);
			func_905(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_904(-524145696);
			}
			else
			{
				func_905(-524145696);
			}
			func_905(1626481264);
			func_905(282809459);
			break;
		case 282809459:
			func_904(282809459);
			func_905(1626481264);
			func_905(-524145696);
			break;
		case 1626481264:
			func_904(1626481264);
			func_905(-524145696);
			func_905(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_904(885203519);
			}
			else
			{
				func_905(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_904(-1080627546);
			}
			else
			{
				func_905(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_908(iParam0))
				{
					func_904(iParam0);
				}
			}
			else if (func_908(iParam0))
			{
				func_905(iParam0);
			}
			break;
	}
}

void func_712(int iParam0)
{
	if (!func_909(iParam0))
	{
		func_911(func_910(iParam0));
	}
}

int func_713()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_909(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_714(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_715(iVar12);
		iVar8 = func_716(iVar12);
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

int func_715(int iParam0)
{
	int iVar0;

	if (func_317(iParam0, 1, 0))
	{
		iVar0 = func_407(iParam0, 0, 0);
	}
	return iVar0;
}

int func_716(int iParam0)
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

int func_717(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_718(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_719(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_804(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_720(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_719(iParam1, 5) || iParam0 == func_719(iParam1, 6)) || iParam0 == func_719(iParam1, 7)) || iParam0 == func_719(iParam1, 8)) || iParam0 == func_719(iParam1, 9))
	{
		func_710(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_328(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_327(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_721(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_719(iParam1, 5) || iParam0 == func_719(iParam1, 6)) || iParam0 == func_719(iParam1, 7)) || iParam0 == func_719(iParam1, 8)) || iParam0 == func_719(iParam1, 9))
	{
		if (func_710(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_328(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_327(51, 0, 0, iVar0, func_585(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_328(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_327(51, 0, 0, iVar0, func_585(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_722()
{
	if (func_390(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_723(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_724(int iParam0)
{
	if (!func_912(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_725(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

int func_726(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_96(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

bool func_727(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_728(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_309(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_674(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_409(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_96(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_729(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_600(iParam0))
	{
		return;
	}
	if (func_362(iParam0))
	{
		return;
	}
	if (!func_913(iParam0))
	{
		func_914(iParam0, 1, 0);
	}
	iVar0 = func_864(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_601(iParam0, 512))
		{
			func_208(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_915() && !bParam1) && !func_74(0, 0, 1))
	{
		func_202(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_916(iParam0, 6);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 4);
		}
	}
}

int func_730(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_200(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_731(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_380(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_380(iParam0, 1) /*11*/];
}

void func_732(int iParam0, int iParam1)
{
	if (func_191(iParam1, 130796156))
	{
		func_917(iParam1, 0);
	}
	else if (func_191(iParam1, 930141731))
	{
		func_917(iParam1, 1);
		func_918(iParam0);
	}
}

void func_733(var uParam0, int iParam1)
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

int func_734(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_919(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_920(uParam2, iParam0, Var1);
	return 1;
}

int func_735(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_736(int iParam0)
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

int func_737(int iParam0)
{
	var uVar0;

	if (!func_921(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 29:
			return -170458336;
		case 30:
			return 1285083821;
		case 31:
			return -1840907462;
		case 32:
			return 756710130;
		case 33:
			return 388370024;
		case 34:
			return 1092296123;
		case 35:
			return 467491346;
		case 36:
			return -1391584612;
		case 37:
			return -152111346;
		case 38:
			return 1447551317;
		case 39:
			return 153136092;
		case 40:
			return 1304405732;
		case 41:
			return 1074984055;
		case 50:
			return 1087476368;
		case 51:
			return -1768057340;
		case 42:
			return 1218874593;
		case 52:
			return -1438443836;
		case 43:
			return -2036340415;
		case 44:
			return 803939643;
		case 53:
			return -632496195;
		case 45:
			return -965943619;
		case 46:
			return 283532073;
		case 47:
			return -69067491;
		case 48:
			return -1864895118;
		case 54:
			return -1929806571;
		case 55:
			return -698525417;
		case 56:
			return -1149739894;
		case 49:
			return 380507325;
		case 57:
			return 407796241;
		case 58:
			return -152267914;
		case 59:
			return -1675443320;
		case 60:
			return 1940341639;
		case 61:
			return 1846596114;
		case 62:
			return 907708501;
		case 64:
			return 1825644981;
		case 65:
			return 2065937607;
		case 66:
			return -211317417;
		case 67:
			return 1801307910;
		case 68:
			return -4118897;
		case 69:
			return 1853610692;
		case 70:
			return -1574644415;
		case 71:
			return 2133055515;
		case 72:
			return -1413401932;
		case 73:
			return 801090761;
		case 74:
			return 2131218644;
		case 75:
			return 1708823660;
		case 76:
			return 7976942;
		case 77:
			return 2111120505;
		case 78:
			return 176893118;
		case 79:
			return 1179148161;
		case 63:
			return 602306665;
		case 80:
			return 547412068;
		case 81:
			return -1539748801;
		case 82:
			return -1605119912;
		case 83:
			return -884464063;
		case 84:
			return -1420970720;
		case 85:
			return 1017024547;
		case 86:
			return -1204497306;
		case 87:
			return -1621069480;
		case 88:
			return -458604261;
		case 89:
			return -923391614;
		case 90:
			return -689247089;
		case 91:
			return 44049568;
		case 92:
			return 1350259552;
		case 93:
			return -61661574;
		case 94:
			return -725338054;
		case 95:
			return -770123507;
		case 96:
			return 1322486734;
		case 97:
			return -460939553;
		case 98:
			return -1451863552;
		case 99:
			return 173833068;
		case 100:
			return -1681004136;
		case 101:
			return 713715980;
		case 102:
			return -31204969;
		case 103:
			return -1720064790;
		case 104:
			return -532172775;
		case 105:
			return -739067737;
		case 106:
			return -1203133835;
		case 107:
			return -1947411598;
		case 109:
			return -1298718762;
		case 110:
			return -595083064;
		case 111:
			return 884833917;
		case 112:
			return 2141950651;
		case 108:
			return -1049753365;
		case 113:
			return -1437650729;
		case 126:
			return 672925454;
		case 127:
			return 846062774;
		case 120:
			return 1369756178;
		case 121:
			return -736172423;
		case 122:
			return 1597070291;
		case 124:
			return -159501564;
		case 123:
			return -1438809608;
		case 125:
			return -102682392;
		case 114:
			return -81068979;
		case 115:
			return 227618407;
		case 116:
			return 2106043438;
		case 129:
			return -1868356491;
		case 117:
			return -1380256064;
		case 118:
			return -2118469183;
		case 119:
			return -558997834;
		case 128:
			return 658339366;
		default:
			break;
	}
	return 0;
}

bool func_739(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_740(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_741(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_922(iParam0) };
	return func_923(vVar0);
}

int func_742(int iParam0)
{
	if (!func_403(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_30;
}

int func_743(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	func_924(uParam0);
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_738(iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = STREAMING::_0xD6E39DC5D46DF4AB(iVar0);
	if (iVar1 <= 0)
	{
		return 0;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return 1;
}

int func_744()
{
	var uVar0;

	uVar0 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
	return uVar0;
}

float func_745(float fParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	bVar0 = fParam0 >= 0f;
	iVar1 = BUILTIN::FLOOR(BUILTIN::POW(10f, BUILTIN::TO_FLOAT(iParam1)));
	fVar2 = (fParam0 * IntToFloat(iVar1));
	if (bParam2)
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar2));
	}
	else
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
	}
	fVar3 = (fVar2 / IntToFloat(iVar1));
	if (fVar3 < 0f && bVar0)
	{
		fVar3 = (fVar3 * -1f);
	}
	return fVar3;
}

int func_746(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_925(vParam0, 0f, 0f, 0, 2);
	return func_925(vParam0, ((*Global_1894052)[iVar0 /*3*/])->f_1, ((*Global_1894052)[iVar0 /*3*/])->f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_747()
{
	return Global_1955569->f_866;
}

int func_748()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_749()
{
	float fVar0;
	int iVar1;

	fVar0 = func_926(13);
	iVar1 = func_927(fVar0);
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

float func_750()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_751()
{
	if (func_694())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_752()
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

float func_753()
{
	return Global_1955565->f_3;
}

void func_754(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_755(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(iParam0, 2, 0, 0);
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

float func_756(float fParam0, float fParam1, float fParam2)
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

bool func_757()
{
	return func_926(12) <= -99f;
}

bool func_758()
{
	return func_926(12) >= 99f;
}

char* func_759(int iParam0)
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

void func_760(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
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

void func_761(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
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

int func_762(int iParam0)
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

char* func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_764()
{
	if (func_17() != -1)
	{
		return false;
	}
	return func_283(1) > 0;
}

void func_765(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_766(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_650(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_650(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 0;
	}
	return 1;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_769(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_770()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

int func_771(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return func_928(func_267(iParam0));
}

int func_772(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_929(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_773(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_930(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return 0;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return 1;
	}
	return 0;
}

bool func_774(int iParam0)
{
	return func_931(iParam0);
}

int func_775(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_529(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_776(int iParam0)
{
	if (!func_155(iParam0))
	{
		return -1;
	}
	return func_932(iParam0);
}

struct<4> func_777()
{
	struct<4> Var0;

	return Var0;
}

int func_778(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_96(0);
	*uParam1 = { func_312(iParam0, func_537(0), iParam3, 0) };
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

int func_779()
{
	return 16596983;
}

int func_780()
{
	return 16662519;
}

bool func_781(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_782(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_783(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_784(int iParam0)
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

int func_785(bool bParam0)
{
	if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x42429C674B61238B(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x9682F850056C9ADE(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
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

int func_786(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_784(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_787(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			func_202("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_788(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_933();
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
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_792(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_789(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 1;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (!func_792(iVar0))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (func_934(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		return 1;
	}
	iVar1 = iParam0;
	if (!func_792(iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

bool func_790(int iParam0)
{
	return func_797(iParam0, 7);
}

int func_791()
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

int func_792(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_793()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return 0;
	}
	iVar0 = func_935(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return 1;
	}
	return 0;
}

bool func_794()
{
	return Global_1911914->f_1578;
}

bool func_795(int iParam0)
{
	return func_398(Global_1935496->f_7, iParam0);
}

int func_796(int iParam0)
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

int func_797(int iParam0, int iParam1)
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

int func_798(int iParam0)
{
	switch (func_17())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

bool func_799(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_800(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_801(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_802(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_936(iVar0))
		{
			if (BUILTIN::VDIST(func_937(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_803(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (&Global_40.f_450[iVar0] > -1 && &Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(func_938(&(Global_40.f_450[iVar0])), vParam0) < fParam3)
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

int func_804(int iParam0, var uParam1)
{
	if (!func_939(iParam0))
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

int func_805()
{
	return func_940(Global_40.f_12018);
}

int func_806()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_678(iVar1);
		if (func_317(iVar2, 1, 0) || func_812(func_811(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_807()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_941(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_808()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_817(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_809()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_810(int iParam0)
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

int func_811(int iParam0)
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

bool func_812(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_813(int iParam0)
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

int func_814(int iParam0)
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

int func_815(int iParam0)
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

char* func_816(int iParam0)
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

bool func_817(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_818(int iParam0)
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

char* func_819(int iParam0)
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

int func_820(int iParam0)
{
	if (func_942(iParam0) && func_317(iParam0, 1, 0))
	{
		return 1;
	}
	else if (func_943(iParam0) && func_944(iParam0))
	{
		return 1;
	}
	return 0;
}

char* func_821(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_473(iParam0));
}

int func_822(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_823(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

int func_824(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_945(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_825(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

float func_826(int iParam0, int iParam1)
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
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_35);
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

void func_827(int iParam0)
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_828(int iParam0, float fParam1)
{
	return func_946(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_829(var uParam0, var uParam1, float fParam2)
{
	if (func_17() != -1)
	{
		return 1;
	}
	if (!func_947(0))
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
		func_948(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
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
			func_231(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_948(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_830(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_17() == 0)
	{
		func_949(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(0);
	if (bParam1)
	{
		func_950(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_951();
	}
	if (bParam2)
	{
		fParam0 = func_952(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(0, func_756(fParam0, -100f, 100f), bParam1);
}

void func_831(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_17() == 0)
	{
		func_949(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(2);
	if (bParam1)
	{
		func_950(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_952(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(2, func_756(fParam0, -100f, 100f), bParam1);
}

void func_832(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_17() == 0)
	{
		func_949(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_289(1);
	if (bParam1)
	{
		func_950(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_952(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_290(1, func_756(fParam0, -100f, 100f), bParam1);
}

void func_833(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_926(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_431(17))
	{
		return;
	}
	if (func_953())
	{
		iVar1 = func_927(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_927(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_65();
			func_66(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_954(&fVar3, &fVar4);
		func_955(13, func_756(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_231(94, 0);
		}
	}
}

int func_834(int iParam0)
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

void func_835(int iParam0, int iParam1)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_17() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_836(int iParam0)
{
	return !iParam0 <= 0;
}

int func_837(int iParam0)
{
	if (!func_836(iParam0))
	{
		return 0;
	}
	return func_956(iParam0, 4, 1);
}

void func_838(int iParam0, bool bParam1)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_957(iParam0))
	{
		return;
	}
	func_835(iParam0, 2);
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

int func_839(int iParam0)
{
	if (!func_836(iParam0))
	{
		return 0;
	}
	return func_956(iParam0, 1, 1);
}

void func_840(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_836(iParam0))
	{
		return;
	}
	if (func_839(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_958(iParam0);
	}
	if (!bParam1)
	{
		if (func_17() != -1)
		{
		}
		else
		{
			func_959(iParam0);
		}
	}
	func_835(iParam0, 1);
	if (func_17() == -1)
	{
		func_960(iParam0, func_320());
	}
	func_838(iParam0, 1);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_86(1, 6);
		}
	}
}

float func_841(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_842()
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

int func_843(int iParam0)
{
	int iVar0;

	iVar0 = func_380(func_961(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_844(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_380(func_961(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_200(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_845()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_200(iVar1) == -999503751)
		{
			if (func_962() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_846(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_310(iParam0, 0, 0) };
	Var5 = { func_312(iParam0, Var0, Var0.f_4, 0) };
	if (func_386(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_96(0), &Var5, iParam1);
	return 1;
}

void func_847(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_963(iParam2, *uParam0);
	func_964(uParam0->f_1[*uParam0 /*5*/], iParam1, -1, 1, 0);
	*uParam0++;
}

int func_848(int iParam0)
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

bool func_849(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_850(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_851(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_200(iParam0))
	{
		case -2061583405:
			bVar0 = func_965(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_965(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_965(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_965(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_965(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_965(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_625();
	}
	if (bParam1)
	{
		func_627(0, 0);
	}
}

void func_852(var uParam0, int iParam1)
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
			if ((func_966(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_966(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_967(uParam0->f_2[iVar0 /*2*/], 2, 6);
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

void func_853(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_968(uParam0, 1))
	{
		func_969(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_854(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_855(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_634(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_634(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_634(iVar2, iVar0);
		}
	}
}

int func_856(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_624();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_857(int iParam0, var uParam1, int iParam2, bool bParam3)
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

int func_858(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

bool func_859(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_380(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_860(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_380(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_372(524288))
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

int func_861(var uParam0)
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

void func_862(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_17() == -1)
	{
		func_970(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_971(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_863(int iParam0, int iParam1)
{
	if (func_17() == -1)
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

int func_864(int iParam0)
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

void func_865(int iParam0, bool bParam1, int iParam2)
{
	func_972(&(Global_1946804->f_1378), iParam0);
	func_973(2, iParam0, 6);
	if (bParam1)
	{
		func_627(0, 1);
	}
}

bool func_866()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_867()
{
	return Global_1051081->f_11;
}

char* func_868()
{
	return "unnamed";
}

int func_869(int iParam0)
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

int func_870(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return func_974(32, iParam0);
}

int func_871(int iParam0)
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

bool func_872(int iParam0)
{
	if (func_975(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) != 1)
		{
			func_976(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) == 1;
}

int func_873(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_874(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_875(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_715(iVar9);
	iVar2 = func_715(iVar10);
	iVar3 = func_715(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_715(iVar12);
	}
	iVar5 = func_716(iVar9);
	iVar6 = func_716(iVar10);
	iVar7 = func_716(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_716(iVar12);
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

int func_876(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_309(iParam0, 0))
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

int func_877(int iParam0)
{
	if (!func_309(*iParam0, 0))
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

int func_878(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_310(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_686((375 + iVar29), 1);
		if (func_539(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_540(iParam0, &Var6, iVar5);
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

int func_879(int iParam0)
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

float func_880(int iParam0)
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
			return func_977(iParam0);
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
			return func_977(iParam0);
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
			return func_977(iParam0);
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

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_431(18);
		case 2:
			return func_431(20);
		case 1:
			return func_431(19);
		default:
			break;
	}
	return 1;
}

int func_882(int iParam0)
{
	return func_978(&(Global_40.f_11095.f_11[iParam0]));
}

void func_883(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_17() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_431(31))
	{
		return;
	}
	iVar0 = func_882(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_882(iParam0);
	if (func_979(iParam0) && func_980(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_981(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_982(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_231(func_983(iParam0), 0);
					}
					func_984(iParam0, iVar2, iVar3);
					func_171(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_884(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_885(int iParam0)
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

void func_886(bool bParam0)
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

void func_887(int iParam0)
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

void func_888(bool bParam0)
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

void func_889(bool bParam0)
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

void func_890(bool bParam0)
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

void func_891(bool bParam0)
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

void func_892(bool bParam0)
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

void func_893(bool bParam0)
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

void func_894()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_985();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_435(joaat("weapon_revolver_cattleman_john"));
		func_479(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_435(joaat("weapon_melee_knife_john"));
		func_479(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

int func_895(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_896(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_310(iParam0, 1, 0) };
	return func_379(Var0.f_4);
}

int func_897(int iParam0)
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

int func_898(int iParam0)
{
	return func_986(iParam0, -1);
}

bool func_899(int iParam0, bool bParam1)
{
	return func_987(func_65(), iParam0, bParam1);
}

int func_900()
{
	if (func_694())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_901(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_988((Global_40.f_4283.f_325 + iParam0));
}

void func_902(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_900())
	{
		func_653(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_653(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_903(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_989(iParam0, 1);
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

void func_905(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_989(iParam0, 1);
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

void func_906()
{
	func_905(-939420910);
	func_905(-1187950766);
	func_905(356365161);
	func_905(753127042);
	func_905(-2038424081);
	func_905(1884271742);
	func_905(459290420);
}

void func_907()
{
	func_905(704802028);
	func_905(588987611);
	func_905(2008888900);
	func_905(1649996811);
	func_905(227918160);
	func_905(168171957);
	func_905(1193080109);
	func_905(-491981251);
	func_905(-639037538);
	func_905(-618620429);
}

bool func_908(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_989(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_909(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_910(int iParam0)
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

void func_911(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_912(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_913(int iParam0)
{
	if (!func_600(iParam0))
	{
		return 0;
	}
	if (func_601(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_914(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_600(iParam0))
	{
		return;
	}
	if (!func_913(iParam0))
	{
		func_916(iParam0, 2);
		if (bParam2)
		{
			if (!func_74(0, 0, 1))
			{
				func_86(1, 4);
			}
		}
		if ((!func_915() && !bParam1) && !func_74(0, 0, 1))
		{
			func_202(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_990(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_915()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_916(int iParam0, int iParam1)
{
	if (!func_600(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_917(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_991(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_432(50);
			}
			else
			{
				func_432(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_432(51);
			}
			else
			{
				func_432(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_992(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_461();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_461();
			}
			break;
		case 3:
			func_432(24);
			if (bParam1)
			{
				if (!func_992(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_461();
				}
			}
			break;
	}
}

void func_918(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_993(0))
			{
				iVar0++;
			}
			if (func_993(2))
			{
				iVar0++;
			}
			if (func_993(4))
			{
				iVar0++;
			}
			if (!func_994(16))
			{
				if (iVar0 == 1)
				{
					func_995();
					func_231(456, 1);
					func_996(16);
				}
			}
			if (!func_994(32))
			{
				if (iVar0 >= 3)
				{
					func_995();
					func_231(456, 1);
					func_996(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_993(1))
			{
				iVar0++;
			}
			if (func_993(3))
			{
				iVar0++;
			}
			if (func_993(7))
			{
				iVar0++;
			}
			if (!func_994(1))
			{
				if (iVar0 == 1)
				{
					func_997();
					func_231(457, 1);
					func_996(1);
				}
			}
			if (!func_994(2))
			{
				if (iVar0 >= 3)
				{
					func_997();
					func_231(457, 1);
					func_996(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_993(5))
			{
				iVar0++;
			}
			if (func_993(6))
			{
				iVar0++;
			}
			if (func_993(8))
			{
				iVar0++;
			}
			if (!func_994(4))
			{
				if (iVar0 == 1)
				{
					func_998();
					func_231(455, 1);
					func_996(4);
				}
			}
			if (!func_994(8))
			{
				if (iVar0 >= 3)
				{
					func_998();
					func_231(455, 1);
					func_996(8);
				}
			}
			break;
	}
}

void func_919(var uParam0)
{
	func_733(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_733(uParam0, 617531372);
	}
	else
	{
		func_733(uParam0, 291123060);
	}
}

void func_920(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_999(uParam0))
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

int func_921(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

Vector3 func_922(int iParam0)
{
	return VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3);
}

int func_923(vector3 vParam0)
{
	return BUILTIN::ROUND(BUILTIN::VDIST(Global_36, vParam0));
}

void func_924(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

int func_925(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

float func_926(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_927(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

int func_928(int iParam0)
{
	return iParam0 & 31;
}

int func_929(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return 0;
	}
	if (iParam0 == 71)
	{
		return 0;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27)) && ((*Global_1835011)[iParam0 /*74*/])->f_21 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1000((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_932(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_933()
{
	return -1;
}

float func_934(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_841(Global_35, iParam0, bParam1, bParam2);
}

int func_935(vector3 vParam0, bool bParam3)
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
		if (!bParam3 || func_1001(iVar0))
		{
			fVar3 = func_1002(iVar0, vParam0);
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

int func_936(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_1003(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

Vector3 func_937(int iParam0)
{
	return func_1004(iParam0);
}

Vector3 func_938(int iParam0)
{
	vector3 vVar0;

	if (!func_153(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1005(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

bool func_939(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_940(int iParam0)
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

bool func_941(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_942(int iParam0)
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

int func_943(int iParam0)
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

int func_944(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1006(&iVar0, 0, iVar95, &Var1) && !func_1006(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1007(iVar0, &Var1);
			if (func_309(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_945(int iParam0)
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

float func_946(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_947(int iParam0)
{
	if (func_690())
	{
		return 0;
	}
	return func_339(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_948(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1008(uParam0, &Var0);
}

void func_949(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_952(iParam0, fParam1, 1);
	}
	func_266(iParam0, (func_1009(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_950(float fParam0)
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

void func_951()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_952(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65();
	func_1010(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1011(iParam0, 2);
	if (func_987(iVar0, func_1012(iParam0, 2), 1))
	{
		func_1013(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_231(88, bParam2);
		return 0f;
	}
	func_1014(iParam0, func_65(), 2);
	func_1013(iParam0, iVar1 + 1, 2);
	return fParam1;
}

int func_953()
{
	if (func_17() != -1)
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
	return func_899(Global_1347477->f_195, 0);
}

void func_954(float fParam0, float fParam1)
{
	if (!func_176())
	{
		*fParam0 = -100f;
		*fParam1 = 100f;
		return;
	}
	*fParam0 = Global_40.f_11095.f_40;
	*fParam1 = Global_40.f_11095.f_41;
}

void func_955(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_650(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1015(1, bVar1, 1, sVar2);
		func_1016(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_511(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_261();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_511(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_511(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_956(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_836(iParam0))
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

int func_957(int iParam0)
{
	if (!func_836(iParam0))
	{
		return 0;
	}
	return func_956(iParam0, 2, 1);
}

int func_958(int iParam0)
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

void func_959(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_231(210, 0);
			break;
		case 16:
			func_231(211, 0);
			break;
		case 33:
			func_231(212, 0);
			break;
		case 42:
			func_231(213, 0);
			break;
		case 2:
			func_231(214, 0);
			break;
		case 3:
			func_231(215, 0);
			break;
		case 43:
			func_231(216, 0);
			break;
		case 15:
			func_231(217, 0);
			break;
		case 23:
			func_231(218, 0);
			break;
		case 37:
			func_231(219, 0);
			break;
		case 26:
			func_231(220, 0);
			break;
		case 13:
			func_231(221, 0);
			break;
		case 19:
			func_231(222, 0);
			break;
		case 34:
			func_231(223, 0);
			break;
		case 38:
			func_231(224, 0);
			break;
		case 40:
			func_231(225, 0);
			break;
		case 7:
			func_231(226, 0);
			break;
		case 20:
			func_231(227, 0);
			break;
		case 18:
			func_231(228, 0);
			break;
		case 6:
			func_231(229, 0);
			break;
		case 29:
			func_231(230, 0);
			break;
		case 39:
			func_231(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_231(233, 0);
			break;
		case 8:
			func_231(234, 0);
			break;
		case 28:
			func_231(235, 0);
			break;
		case 31:
			func_231(236, 0);
			break;
		case 12:
			func_231(237, 0);
			break;
		case 27:
			func_231(238, 0);
			break;
		case 41:
			func_231(239, 0);
			break;
	}
}

void func_960(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_321(1849379570, 0);
			}
			else
			{
				func_321(961286348, 0);
			}
			break;
		case 2:
			if (bParam1 == 1)
			{
				func_321(-837750081, 0);
			}
			else
			{
				func_321(340939753, 0);
			}
			break;
		case 3:
			if (bParam1 == 1)
			{
				func_321(-342875345, 0);
			}
			else
			{
				func_321(-1349311606, 0);
			}
			break;
		case 4:
			if (bParam1 == 1)
			{
				func_321(-1083564345, 0);
			}
			else
			{
				func_321(833225684, 0);
			}
			break;
		case 5:
			if (bParam1 == 1)
			{
				func_321(-363984637, 0);
			}
			else
			{
				func_321(1254542371, 0);
			}
			break;
		case 6:
			if (bParam1 == 1)
			{
				func_321(205335377, 0);
			}
			else
			{
				func_321(637367741, 0);
			}
			break;
		case 11:
			if (bParam1 == 1)
			{
				func_321(-1389317844, 0);
			}
			else
			{
				func_321(-556895345, 0);
			}
			break;
		case 7:
			if (bParam1 == 1)
			{
				func_321(-1907629529, 0);
			}
			else
			{
				func_321(1599606732, 0);
			}
			break;
		case 39:
			if (bParam1 == 1)
			{
				func_321(240007023, 0);
			}
			else
			{
				func_321(-1520210138, 0);
			}
			break;
		case 8:
			if (bParam1 == 1)
			{
				func_321(1312152388, 0);
			}
			else
			{
				func_321(-9418953, 0);
			}
			break;
		case 9:
			if (bParam1 == 1)
			{
				func_321(545314598, 0);
			}
			else
			{
				func_321(1529839790, 0);
			}
			break;
		case 10:
			if (bParam1 == 1)
			{
				func_321(1230485961, 0);
			}
			else
			{
				func_321(-1579920715, 0);
			}
			break;
		case 12:
			if (bParam1 == 1)
			{
				func_321(-201902289, 0);
			}
			else
			{
				func_321(1415616009, 0);
			}
			break;
		case 13:
			if (bParam1 == 1)
			{
				func_321(-564622057, 0);
			}
			else
			{
				func_321(-1442109431, 0);
			}
			break;
		case 14:
			if (bParam1 == 1)
			{
				func_321(-1303190422, 0);
			}
			else
			{
				func_321(-1299326860, 0);
			}
			break;
		case 15:
			if (bParam1 == 1)
			{
				func_321(-88060354, 0);
			}
			else
			{
				func_321(-366222423, 0);
			}
			break;
		case 40:
			if (bParam1 == 1)
			{
				func_321(1312248008, 0);
			}
			else
			{
				func_321(621868532, 0);
			}
			break;
		case 17:
			if (bParam1 == 1)
			{
				func_321(428446588, 0);
			}
			else
			{
				func_321(-1730302202, 0);
			}
			break;
		case 18:
			if (bParam1 == 1)
			{
				func_321(37692363, 0);
			}
			else
			{
				func_321(629404512, 0);
			}
			break;
		case 16:
			if (bParam1 == 1)
			{
				func_321(877023893, 0);
			}
			else
			{
				func_321(122486811, 0);
			}
			break;
		case 19:
			if (bParam1 == 1)
			{
				func_321(-706642783, 0);
			}
			else
			{
				func_321(621155065, 0);
			}
			break;
		case 20:
			if (bParam1 == 1)
			{
				func_321(-918250703, 0);
			}
			else
			{
				func_321(1945953943, 0);
			}
			break;
		case 21:
			if (bParam1 == 1)
			{
				func_321(722815515, 0);
			}
			else
			{
				func_321(-80758135, 0);
			}
			break;
		case 22:
			if (bParam1 == 1)
			{
				func_321(1053305061, 0);
			}
			else
			{
				func_321(1789349782, 0);
			}
			break;
		case 23:
			if (bParam1 == 1)
			{
				func_321(1024520106, 0);
			}
			else
			{
				func_321(1105521253, 0);
			}
			break;
		case 41:
			if (bParam1 == 1)
			{
				func_321(1140872184, 0);
			}
			else
			{
				func_321(-237709193, 0);
			}
			break;
		case 24:
			if (bParam1 == 1)
			{
				func_321(-1590595690, 0);
			}
			else
			{
				func_321(1836601784, 0);
			}
			break;
		case 25:
			if (bParam1 == 1)
			{
				func_321(1164380735, 0);
			}
			else
			{
				func_321(-1984992129, 0);
			}
			break;
		case 26:
			if (bParam1 == 1)
			{
				func_321(301696279, 0);
			}
			else
			{
				func_321(152181092, 0);
			}
			break;
		case 27:
			if (bParam1 == 1)
			{
				func_321(-415970359, 0);
			}
			else
			{
				func_321(839837681, 0);
			}
			break;
		case 28:
			if (bParam1 == 1)
			{
				func_321(1669531798, 0);
			}
			else
			{
				func_321(1602454819, 0);
			}
			break;
		case 29:
			if (bParam1 == 1)
			{
				func_321(-977383775, 0);
			}
			else
			{
				func_321(-1875435665, 0);
			}
			break;
		case 30:
			if (bParam1 == 1)
			{
				func_321(1183317680, 0);
			}
			else
			{
				func_321(-247145433, 0);
			}
			break;
		case 31:
			if (bParam1 == 1)
			{
				func_321(667332266, 0);
			}
			else
			{
				func_321(-368365640, 0);
			}
			break;
		case 33:
			if (bParam1 == 1)
			{
				func_321(-1578905205, 0);
			}
			else
			{
				func_321(946087658, 0);
			}
			break;
		case 32:
			if (bParam1 == 1)
			{
				func_321(-448931053, 0);
			}
			else
			{
				func_321(-421010414, 0);
			}
			break;
		case 34:
			if (bParam1 == 1)
			{
				func_321(-1162930163, 0);
			}
			else
			{
				func_321(-1228311530, 0);
			}
			break;
		case 35:
			if (bParam1 == 1)
			{
				func_321(1004123602, 0);
			}
			else
			{
				func_321(1321329534, 0);
			}
			break;
		case 36:
			if (bParam1 == 1)
			{
				func_321(281748406, 0);
			}
			else
			{
				func_321(-173822042, 0);
			}
			break;
		case 37:
			if (bParam1 == 1)
			{
				func_321(-1351305881, 0);
			}
			else
			{
				func_321(-1650817073, 0);
			}
			break;
		case 38:
			if (bParam1 == 1)
			{
				func_321(-1644190131, 0);
			}
			else
			{
				func_321(844678349, 0);
			}
			break;
		case 42:
			if (bParam1 == 1)
			{
				func_321(-926127573, 0);
			}
			else
			{
				func_321(-1260559150, 0);
			}
			break;
		case 43:
			if (bParam1 == 1)
			{
				func_321(758690400, 0);
			}
			else
			{
				func_321(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

int func_961(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_379(iVar0);
}

int func_962()
{
	return Global_1946804->f_1497;
}

void func_963(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_964(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1017(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_380(func_896(iParam1), 1);
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
		func_1018(uParam0);
	}
}

int func_965(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_620(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_200(iParam0) != -999503751)
		{
			func_1019(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_200(iParam0) != -999503751)
	{
		func_1019(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_846(iParam0, 1);
	return 1;
}

bool func_966(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_967(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_968(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_969(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_970(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_971(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_972(var uParam0, int iParam1)
{
	int iVar0;

	if (func_17() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_970(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
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
		func_971(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_973(int iParam0, int iParam1, int iParam2)
{
	if (func_17() == -1)
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

int func_974(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1020(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1021())
	{
		return func_1020(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1020(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_975(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888->f_49111), iParam0))
	{
		return 1;
	}
	return 0;
}

void func_976(int iParam0)
{
	int iVar0;

	if (func_1022() != 0 || func_17() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225638->f_21[iVar0])
	{
		func_1023(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_1024(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 1;
}

float func_977(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_879(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_978(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1025(iVar6) - func_1025(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_978(float fParam0)
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

int func_979(int iParam0)
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

int func_980(int iParam0)
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

int func_981(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_978(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1025(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1025(iVar0 + 1));
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

int func_982(int iParam0)
{
	int iVar0;

	if (func_1026(iParam0, &iVar0))
	{
		return func_1025(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1027())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1027())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1027())
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

int func_983(int iParam0)
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

void func_984(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1028(iParam0));
	sVar4 = func_1030(func_1029(iVar3, iParam2));
	sVar6 = func_1031(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1032(iParam0));
	iVar8 = func_1033(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1034(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_582(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1035(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_985()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1036(Global_35, &uVar0);
	Var30 = { func_536(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1037(0);
	func_1038(7);
	func_376(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_624() == 1160113249)
	{
		func_376(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_376(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1039(Global_35, &uVar0);
}

int func_986(int iParam0, int iParam1)
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
		iParam1 = func_96(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_252(&uVar6, iVar0);
	func_253(&uVar6, iVar1);
	func_254(&uVar6, iVar2);
	func_255(&uVar6, iVar3);
	func_256(&uVar6, iVar4);
	func_257(&uVar6, iVar5);
	return uVar6;
}

bool func_987(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1040(iParam1) || !func_1040(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_988(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_654(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_989(int iParam0, int iParam1)
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

char* func_990(int iParam0)
{
	int iVar0;

	iVar0 = func_864(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_821(iVar0);
}

int func_991(int iParam0)
{
	int iVar0;

	if (func_1041(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1042(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1043(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1044(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_992(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_317(func_1045(iVar0, iParam0), 1, 0))
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

int func_993(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_317(func_1046(iVar0, iParam0), 1, 0))
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

bool func_994(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_995()
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	func_479(1654063339, 1, 752097756);
	iVar0 = func_882(1);
	func_984(1, iVar0, 0);
}

void func_996(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_997()
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	func_479(1623931083, 1, 752097756);
	iVar0 = func_882(2);
	func_984(2, iVar0, 0);
}

void func_998()
{
	int iVar0;

	if (func_17() != -1)
	{
		return;
	}
	func_479(-1845241476, 1, 752097756);
	iVar0 = func_882(0);
	func_984(0, iVar0, 0);
}

int func_999(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1000(var uParam0)
{
	if (func_1047(&(uParam0->f_29), 62))
	{
		switch (func_1048())
		{
			case 1:
				if (!func_1047(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_1047(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_1047(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_1047(&(uParam0->f_29), 32))
				{
					if (func_1047(&(uParam0->f_29), 2))
					{
						if (func_139(func_65()) < 5)
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

int func_1001(int iParam0)
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

float func_1002(int iParam0, vector3 vParam1)
{
	if (func_1049(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

int func_1003(int iParam0)
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
		iVar0 = func_824(iParam0);
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

Vector3 func_1004(int iParam0)
{
	if (func_930(iParam0))
	{
		return func_1050(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_1005(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_776(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
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

int func_1006(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	var uVar5;

	if (func_1051(iParam1) && !func_1052(iParam1))
	{
		iVar0 = func_205(iParam1);
	}
	else
	{
		return 0;
	}
	func_1053(uParam3);
	uVar5 = func_1054(iParam2);
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

void func_1007(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1055(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1056(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

var func_1008(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_1009(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
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

void func_1010(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_136(*iParam0);
	iVar1 = func_137(*iParam0);
	iVar2 = func_138(*iParam0);
	iVar3 = func_139(*iParam0);
	iVar4 = func_140(*iParam0);
	iVar5 = func_141(*iParam0);
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
		iVar7 = func_142(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_143(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1011(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
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

int func_1012(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_496();
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

void func_1013(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
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

void func_1014(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_496();
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

void func_1015(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_1016(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_766(0, 1, bParam0, bParam1);
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

void func_1017(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1057(&(uParam0->f_3));
}

void func_1018(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1058(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1019(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1059(iParam1);
	func_1060(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1061(&(uParam0->f_26), iVar1);
		if (func_1062(uParam0->f_26, &iVar0))
		{
			func_1063(iVar0, iVar1);
		}
	}
}

bool func_1020(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1021()
{
	return Global_1109400->f_244;
}

int func_1022()
{
	return Global_1572887->f_13;
}

void func_1023(int iParam0)
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
	func_1024(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 0;
}

void func_1024(int iParam0)
{
	if ((Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 != 0)
	{
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_2 = 0;
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 = 0;
	}
}

int func_1025(int iParam0)
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

int func_1026(int iParam0, int iParam1)
{
	return 0;
}

int func_1027()
{
	return 0;
}

int func_1028(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_96(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_96(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_96(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1029(int iParam0, int iParam1)
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

var func_1030(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1031(int iParam0)
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

char* func_1032(int iParam0)
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

int func_1033(int iParam0)
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

int func_1034(int iParam0)
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

int func_1035(int iParam0)
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

void func_1036(int iParam0, var uParam1)
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
		if (func_685(iVar31))
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

void func_1037(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_309(iVar1, 0))
		{
			func_851(iVar1, 0, bParam0);
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

void func_1038(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_17() == -1)
	{
		func_1064(352481484);
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
		if (func_200(iVar2) != -999503751)
		{
			func_847(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_846(iVar2, 0))
		{
			func_212(iVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1039(int iParam0, var uParam1)
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
				if (func_684(uParam1[iVar0]))
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

int func_1040(int iParam0)
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
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_140(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_139(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_137(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_138(iParam0);
	if (iVar5 < 1 || iVar5 > func_142(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_1041(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (func_191(iParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1042(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (func_191(iParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1043(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (func_191(iParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1044(int iParam0)
{
	if (!func_309(iParam0, 0))
	{
		return 0;
	}
	if (func_191(iParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1045(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1065(iParam0);
		case 1:
			return func_1066(iParam0);
		case 2:
			return func_1067(iParam0);
		case 3:
			return func_1068(iParam0);
	}
	return 0;
}

int func_1046(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1069(iParam0);
		case 1:
			return func_1070(iParam0);
		case 2:
			return func_1071(iParam0);
		case 3:
			return func_1072(iParam0);
		case 4:
			return func_1073(iParam0);
		case 5:
			return func_1074(iParam0);
		case 6:
			return func_1075(iParam0);
		case 7:
			return func_1076(iParam0);
		case 8:
			return func_1077(iParam0);
	}
	return 0;
}

int func_1047(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1048()
{
	return &Global_1899516;
}

int func_1049(int iParam0)
{
	if (func_1078(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

Vector3 func_1050(int iParam0)
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

int func_1051(int iParam0)
{
	iParam0 = func_291(iParam0);
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

int func_1052(int iParam0)
{
	int iVar0;

	iParam0 = func_291(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1051(iParam0))
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1053(var uParam0)
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

int func_1054(int iParam0)
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

void func_1055(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1056(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_1057(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1058(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1079(func_624());
	if (*uParam0)
	{
		func_1057(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_17() != -1, uParam2);
	*uParam0 = 1;
}

int func_1059(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1060(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1061(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1017(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1062(int iParam0, int iParam1)
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

void func_1063(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1064(int iParam0)
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
	Var2 = { func_656(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_658(&Var2, &iVar0, &iVar1, 0))
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
		func_660(iVar0);
	}
}

int func_1065(int iParam0)
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

int func_1066(int iParam0)
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

int func_1067(int iParam0)
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

int func_1068(int iParam0)
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

int func_1069(int iParam0)
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

int func_1070(int iParam0)
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

int func_1071(int iParam0)
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

int func_1072(int iParam0)
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

int func_1073(int iParam0)
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

int func_1074(int iParam0)
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

int func_1075(int iParam0)
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

int func_1076(int iParam0)
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

int func_1077(int iParam0)
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

int func_1078(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_1079(int iParam0)
{
	if (func_17() == -1)
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

