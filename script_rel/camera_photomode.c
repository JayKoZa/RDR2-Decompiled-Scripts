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
	float fLocal_9 = 0f;
	float fLocal_10 = 0f;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = false;
	bool bLocal_42 = false;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	char* sLocal_46 = NULL;
	int iLocal_47 = 0;
	bool bLocal_48 = false;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = false;
	int iLocal_54 = 0;
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	char cLocal_63[32] = "";
	char cLocal_67[32] = "";
	char cLocal_71[32] = "";
	int iLocal_75 = 0;
	char cLocal_76[64] = "";
	char cLocal_84[32] = "";
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = false;
	struct<113> Local_102 = { 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_215 = 0;
	float fLocal_216 = 0f;
	bool bLocal_217 = false;
	int iLocal_218 = 0;
	vector3 vLocal_219 = { 0f, 0f, 0f };
	vector3 vLocal_222 = { 0f, 0f, 0f };
	vector3 vLocal_225 = { 0f, 0f, 0f };
	bool bLocal_228 = false;
	bool bLocal_229 = false;
	float fLocal_230 = 0f;
	float fLocal_231 = 0f;
	vector3 vLocal_232 = { 0f, 0f, 0f };
	vector3 vLocal_235 = { 0f, 0f, 0f };
	bool bLocal_238 = false;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	bool bLocal_248 = false;
	char* sLocal_249[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262[39] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_302[39] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_342 = 0;
	int iLocal_343[39] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_383[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	bool bLocal_393 = false;
	float fLocal_394 = 0f;
	float fLocal_395 = 0f;
	var uLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	fLocal_10 = -10f;
	fLocal_13 = 18.88f;
	fLocal_14 = -18.88f;
	fLocal_15 = 18.88f;
	fLocal_16 = -18.88f;
	fLocal_17 = 18.88f;
	fLocal_18 = -18.88f;
	iLocal_21 = MISC::_GET_SYSTEM_TIME();
	sLocal_23 = "PhotoMode_Bounds";
	fLocal_24 = 1f;
	fLocal_25 = 1f;
	fLocal_26 = 0.1f;
	bLocal_29 = true;
	sLocal_43 = "adjust_loop_a";
	sLocal_44 = "adjust_loop_b";
	sLocal_45 = "adjust_oneshot_a";
	sLocal_46 = "adjust_oneshot_b";
	StringCopy(&cLocal_63, "", 32);
	StringCopy(&cLocal_67, "", 32);
	StringCopy(&cLocal_71, "", 32);
	StringCopy(&cLocal_76, "", 64);
	StringCopy(&cLocal_84, "", 32);
	sLocal_88 = "CameraViewfinder";
	sLocal_89 = "PhotoMode_TakePicture";
	sLocal_90 = "CameraTransitionBlink";
	sLocal_91 = "No_PostFx_Applied";
	sLocal_92 = "No_PostFx_Applied";
	bLocal_101 = true;
	fLocal_231 = 0f;
	fLocal_395 = 0.5f;
	iLocal_397 = 4;
	iLocal_398 = -1534086282;
	iLocal_400 = -193491261;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_102, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3())
	{
		MISC::SET_BIT(Global_1357505, 3);
		func_4(0);
	}
	if (HUD::_0xD6BD313CFA41E57A(joaat("INPUT_NEXT_CAMERA")) || HUD::_0xD6BD313CFA41E57A(joaat("INPUT_FOCUS_CAM")))
	{
		bLocal_19 = true;
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_89))
	{
		PAD::_0x2804658EB7D8A50B(4, -508131217);
	}
	while (bLocal_101)
	{
		GRAPHICS::_0xC37792A3F9C90771();
		PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_PHOTO_MODE_BACK"));
		if (iLocal_49 != 1)
		{
		}
		else
		{
			func_5();
		}
		if (func_6(&(Local_102.f_1[2]), 1))
		{
			if (MISC::IS_BIT_SET(&Global_1357510, 5))
			{
				func_7(&(Local_102.f_1[2]), 0, 1);
			}
			else
			{
				func_7(&(Local_102.f_1[2]), 1, 1);
			}
		}
		if (func_6(&(Local_102.f_1[8]), 1))
		{
			if (bLocal_393)
			{
				func_7(&(Local_102.f_1[8]), 0, 1);
			}
			else
			{
				func_7(&(Local_102.f_1[8]), 1, 1);
			}
		}
		func_8(2);
		func_8(4);
		func_8(8);
		func_8(16);
		func_8(32);
		func_8(128);
		func_8(256);
		func_8(512);
		func_8(1024);
		func_8(2048);
		func_8(4096);
		func_8(16384);
		func_8(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_101)
		{
			if (func_9(&Local_102))
			{
				bLocal_101 = true;
			}
			else
			{
				bLocal_101 = false;
			}
		}
		func_10(Local_102);
		func_11(&Local_102);
		func_12(&(Local_102.f_90), &(Local_102.f_91), &(Local_102.f_94), &(Local_102.f_95), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (func_13(&(Local_102.f_1[2]), 1) || func_13(&(Local_102.f_1[7]), 1))
		{
			iLocal_93 = 1;
			if (func_14(&Local_102) != 3)
			{
				if (func_14(&Local_102) == 6)
				{
					func_15();
					if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					iLocal_247 = MISC::GET_GAME_TIMER();
					bLocal_248 = true;
					func_16();
					Global_1357507 = 0;
					func_17(&Local_102, 4);
				}
			}
			else
			{
				func_17(&Local_102, 15);
			}
		}
		func_18(&Local_102);
		iVar0 = func_14(&Local_102);
		if (func_19())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					iLocal_49 = 0;
					uLocal_57 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_17(&Local_102, 1);
				}
				else
				{
					if (func_22(&Local_102))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_49 = 1;
						func_23(&Local_102);
					}
					func_17(&Local_102, 1);
				}
				break;
			case 1:
				if (func_22(&Local_102))
				{
					func_23(&Local_102);
				}
				func_24();
				Local_102.f_89 = 0;
				func_25();
				iLocal_30 = MISC::GET_GAME_TIMER();
				iLocal_31 = AUDIO::GET_SOUND_ID();
				iLocal_32 = AUDIO::GET_SOUND_ID();
				iLocal_35 = AUDIO::GET_SOUND_ID();
				iLocal_36 = AUDIO::GET_SOUND_ID();
				iLocal_39 = AUDIO::GET_SOUND_ID();
				iLocal_40 = AUDIO::GET_SOUND_ID();
				func_17(&Local_102, 2);
				ANIMSCENE::_0x7C709C01D43D94CD();
				break;
			case 2:
				if (func_22(&Local_102))
				{
					func_23(&Local_102);
				}
				if (func_26())
				{
					if (ANIMSCENE::_0x2DB524750DC41ED4())
					{
						if (func_27(iLocal_30, iLocal_21))
						{
							if (func_28())
							{
								func_29(1);
								if (func_30())
								{
									Local_102.f_89 = &Global_1357504;
									func_31();
									func_17(&Local_102, 14);
								}
								else
								{
									func_17(&Local_102, 12);
								}
								HUD::_0x4CC5F2FC1332577F(-1404924319);
								func_32();
							}
						}
					}
				}
				else if (func_27(iLocal_30, iLocal_21) && func_33(Global_35, 1, 0, 0) == joaat("weapon_kit_camera"))
				{
					func_17(&Local_102, 3);
				}
				break;
			case 4:
				func_11(&Local_102);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				if (bLocal_248)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_247) > 500)
					{
						HUD::_0x8BC7C1F929D07BF3(-1404924319);
						CAM::SET_CAM_ACTIVE(Local_102.f_32, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_102.f_32);
						CAM::DESTROY_CAM(Local_102.f_32, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_17(&Local_102, 3);
						func_34();
						bLocal_248 = false;
						func_35();
					}
				}
				break;
			case 3:
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_239) > 100)
				{
					func_36();
					iLocal_239 = MISC::GET_GAME_TIMER();
				}
				if (func_22(&Local_102))
				{
					func_37(&Local_102);
					func_38(3);
					func_39(1);
					func_23(&Local_102);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
				if (iLocal_93 == 1 && &Global_1357508 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_93 = 0;
					}
					else
					{
						iLocal_93 = 1;
					}
				}
				if (&Global_1357508 == 1)
				{
					iLocal_93 = 0;
				}
				if (bLocal_238 && iLocal_93 == 0)
				{
					func_7(&(Local_102.f_1[0]), 1, 1);
					if (func_40(&(Local_102.f_1[0]), 1) || &Global_1357508 == 1)
					{
						if (!func_26())
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						}
						if (&Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_16();
						HUD::_0x4CC5F2FC1332577F(-1404924319);
						func_41();
						iLocal_215 = MISC::GET_GAME_TIMER();
						func_17(&Local_102, 5);
					}
				}
				else
				{
					func_7(&(Local_102.f_1[0]), 0, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_218) > 600)
				{
					func_42();
					iLocal_218 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_217)
				{
					func_7(&(Local_102.f_1[1]), 1, 1);
					if (func_40(&(Local_102.f_1[1]), 1))
					{
						if (func_43(Global_35, 0))
						{
						}
						else
						{
							iLocal_244 = 0;
							iLocal_246 = 0;
							func_16();
							func_17(&Local_102, 8);
							if (!func_44(&uLocal_241))
							{
								func_45(&uLocal_241, 1);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_0x6FB1DA3CA9DA7D90("Place_Tripod", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
							}
						}
					}
				}
				else
				{
					func_7(&(Local_102.f_1[1]), 0, 1);
				}
				break;
			case 5:
				if (func_22(&Local_102))
				{
					func_23(&Local_102);
				}
				if (func_46() && (MISC::GET_GAME_TIMER() - iLocal_215) > 500)
				{
					func_47();
					if (!func_26())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
					Local_102.f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Local_102.f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
					Local_102.f_83 = { Local_102.f_71, Local_102.f_71.f_1, Local_102.f_71.f_2 };
					Local_102.f_77 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_102.f_68, Local_102.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_102.f_110 = 0;
					Local_102.f_83 = { 0f, 0f, 0f };
					Local_102.f_82 = 0f;
					Local_102.f_81 = 0f;
					Local_102.f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_102.f_77, Local_102.f_83, 65f, false, 2);
					CAM::ATTACH_CAM_TO_PED_BONE(Local_102.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					CAM::SET_CAM_NEAR_CLIP(Local_102.f_32, 0.25f);
					Local_102.f_33 = 5f;
					Local_102.f_33.f_1 = 2f;
					Local_102.f_33.f_2 = 128f;
					Local_102.f_33.f_3 = 25f;
					Local_102.f_33.f_4 = 25f;
					Local_102.f_33.f_5 = 60f;
					Local_102.f_33.f_6 = 1;
					Local_102.f_33.f_7 = 0;
					Local_102.f_33.f_8 = 1;
					Local_102.f_33.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_102.f_32, &(Local_102.f_33));
					CAM::_0x9F97E85EC142255E(Local_102.f_32, Local_102.f_110);
					CAM::_0x42ED56B02E05D109(Local_102.f_32, false);
					CAM::SET_CAM_ACTIVE(Local_102.f_32, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_0x6FB1DA3CA9DA7D90("Expand_Camera", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_42();
					iLocal_218 = MISC::GET_GAME_TIMER();
					func_35();
					func_17(&Local_102, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				if (iLocal_94 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1357509 = 1;
					iLocal_94 = 1;
				}
				if (MISC::IS_BIT_SET(&Global_1357510, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_102))
				{
					func_38(6);
					func_23(&Local_102);
				}
				func_48(&Local_102);
				if (iLocal_97 == 0)
				{
					if (func_49(&(Local_102.f_1[6])) && !func_50(&Local_102, 32))
					{
						func_37(&Local_102);
						func_51(1);
						func_52(&Local_102, 32);
					}
					if (!func_50(&Local_102, 32))
					{
						if (func_49(&(Local_102.f_1[5])))
						{
							func_53();
						}
					}
				}
				break;
			case 11:
				if (func_22(&Local_102))
				{
					Local_102.f_1[6] = func_54("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_39(1);
					func_55("CAM_SNAP", 0, 0, 1);
					func_23(&Local_102);
				}
				if (func_56())
				{
					if (!func_50(&Local_102, 16))
					{
						func_17(&Local_102, 3);
					}
					else
					{
						func_17(&Local_102, 16);
					}
				}
				else
				{
					func_57(&Local_102);
				}
				break;
			case 10:
				func_58(&Local_102);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				iLocal_93 = 1;
				if (iLocal_245 == 0)
				{
					if (func_59(&uLocal_241) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_102.f_32))
						{
							CAM::SET_CAM_ACTIVE(Local_102.f_32, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_102.f_32, false);
						}
						if (!func_26())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_394);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_34();
						iLocal_245 = 1;
					}
				}
				if (func_59(&uLocal_241) > 1000)
				{
					HUD::_0x8BC7C1F929D07BF3(-1404924319);
					func_35();
					func_60(&uLocal_241);
					func_15();
					func_17(&Local_102, 3);
				}
				break;
			case 8:
				func_58(&Local_102);
				if (iLocal_244 != 0)
				{
				}
				else if (func_59(&uLocal_241) > 500)
				{
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
					if (!func_26())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_219, fLocal_230, 1, 0, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
					}
					func_47();
					bLocal_393 = false;
					iLocal_244 = 1;
				}
				if (iLocal_244 == 1)
				{
					if (iLocal_246 == 0)
					{
						if (func_59(&uLocal_241) > 300)
						{
							iLocal_246 = 1;
							func_61(&Local_102);
						}
					}
					else if (func_59(&uLocal_241) > 1000)
					{
						func_60(&uLocal_241);
						func_62(&Local_102);
						func_35();
						func_17(&Local_102, 9);
					}
				}
				break;
			case 9:
				func_58(&Local_102);
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_102))
				{
					func_23(&Local_102);
				}
				func_62(&Local_102);
				if (func_40(&(Local_102.f_1[6]), 1) && !func_50(&Local_102, 32))
				{
					func_37(&Local_102);
					func_51(1);
					func_52(&Local_102, 32);
				}
				else if (func_40(&(Local_102.f_1[1]), 1))
				{
					func_17(&Local_102, 8);
				}
				if (!func_50(&Local_102, 32))
				{
					if (func_49(&(Local_102.f_1[5])))
					{
						func_53();
					}
				}
				break;
			case 7:
				func_17(&Local_102, 12);
				break;
			case 15:
				if (func_22(&Local_102))
				{
					func_23(&Local_102);
				}
				func_37(&Local_102);
				func_17(&Local_102, 16);
				break;
			case 16:
				if (func_22(&Local_102))
				{
					func_23(&Local_102);
				}
				func_2();
				func_1(&Local_102, 1);
				if (PED::_0xD5FE956C70FF370B(Global_35))
				{
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_63())
		{
			if (func_64(&uLocal_258) > 1f)
			{
				func_65();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			CAM::_0x8505E05FC8822843(0);
			if (bLocal_22)
			{
				if (BUILTIN::TIMERA() > 1200)
				{
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_23))
					{
						GRAPHICS::ANIMPOSTFX_STOP(sLocal_23);
					}
					bLocal_22 = false;
				}
			}
			else if (CAM::_0xEF9A3132A0AA6B19())
			{
				BUILTIN::SETTIMERA(0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_23))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_23);
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("hide_hud", "Photo_Mode_Sounds", true, 0);
					}
				}
				bLocal_22 = true;
			}
			func_66();
			if (func_13(&(Local_102.f_1[20]), 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("reset", "Photo_Mode_Sounds", true, 0);
				}
			}
			fLocal_13 = CAM::_0x2533BAFFBE737E54();
			if (fLocal_14 == fLocal_13)
			{
			}
			else
			{
				fLocal_14 = fLocal_13;
				func_32();
			}
			if (func_67(&(Local_102.f_1[21]), 0, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("lens_up", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(&(Local_102.f_1[21]), 1, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("lens_down", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(&(Local_102.f_1[22]), 0, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(sLocal_45, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(&(Local_102.f_1[22]), 1, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (CAM::_0x14C4A49E36C29E49())
			{
				if (iLocal_240 != 0)
				{
				}
				else
				{
					if (CAM::_0xF824530B612FE0CE())
					{
						iLocal_240 = 1;
					}
					else
					{
						iLocal_240 = 2;
					}
					func_32();
					func_37(&Local_102);
					func_38(12);
				}
				if (iLocal_240 != 1)
				{
					if (iLocal_240 == 2)
					{
						if (CAM::_0xF824530B612FE0CE())
						{
							iLocal_240 = 1;
							func_32();
							func_37(&Local_102);
							func_38(12);
						}
					}
				}
				else if (!CAM::_0xF824530B612FE0CE())
				{
					iLocal_240 = 2;
					func_32();
					func_37(&Local_102);
					func_38(12);
				}
			}
			else
			{
				iLocal_240 = 0;
			}
			if (func_22(&Local_102))
			{
				func_37(&Local_102);
				func_38(12);
				func_23(&Local_102);
			}
			PAD::_0x2804658EB7D8A50B(4, -508131217);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PMB", 1, 0, 0, 0);
			if (iLocal_34 == 0)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PHOTO_MODE_ZOOM_OUT")))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::_0xCE5D0FFE83939AF1(iLocal_32, "zoom_out", "Photo_Mode_Sounds", 1);
					}
					iLocal_34 = 1;
				}
			}
			else if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_PHOTO_MODE_ZOOM_OUT")) || CAM::_0x2AB7C81B3F70570C())
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_32);
				iLocal_34 = 0;
			}
			if (iLocal_33 == 0)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PHOTO_MODE_ZOOM_IN")))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::_0xCE5D0FFE83939AF1(iLocal_31, "zoom_In", "Photo_Mode_Sounds", 1);
					}
					iLocal_33 = 1;
				}
			}
			else if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_PHOTO_MODE_ZOOM_IN")) || CAM::_0x2AB7C81B3F70570C())
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_31);
				iLocal_33 = 0;
			}
			if (!func_50(&Local_102, 32))
			{
				if (func_13(&(Local_102.f_1[19]), 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_31);
					AUDIO::_0x3210BCB36AF7621B(iLocal_32);
					AUDIO::_0x3210BCB36AF7621B(iLocal_35);
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_39);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					func_17(&Local_102, 13);
					func_32();
				}
			}
		}
		if (iVar0 != 13)
		{
		}
		else
		{
			func_66();
			func_68();
			func_69();
			CAM::_0x8505E05FC8822843(1);
			fLocal_15 = CAM::_0x4653A741D17F2CD0();
			if (fLocal_16 != fLocal_15)
			{
				fLocal_16 = fLocal_15;
				func_32();
			}
			fLocal_17 = CAM::_0x18FC740FFDCD7454();
			if (fLocal_18 == fLocal_17)
			{
			}
			else
			{
				fLocal_18 = fLocal_17;
				func_32();
			}
			if (func_22(&Local_102))
			{
				func_37(&Local_102);
				func_38(13);
				func_23(&Local_102);
			}
			PAD::_0x2804658EB7D8A50B(4, -508131217);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PMA", 1, 0, 0, 0);
			if (!func_50(&Local_102, 32))
			{
				if (func_13(&(Local_102.f_1[19]), 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_35);
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_39);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					func_31();
					func_17(&Local_102, 14);
					func_32();
				}
				func_70();
			}
		}
		if (iVar0 != 14)
		{
		}
		else
		{
			func_66();
			CAM::_0x8505E05FC8822843(2);
			if (func_22(&Local_102))
			{
				func_37(&Local_102);
				func_38(14);
				func_23(&Local_102);
			}
			PAD::_0x2804658EB7D8A50B(4, -508131217);
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PME", 1, 0, 0, 0);
			if (!func_50(&Local_102, 32))
			{
				func_71();
				func_72();
			}
			if (!func_50(&Local_102, 32))
			{
				if (func_13(&(Local_102.f_1[19]), 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_35);
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_39);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					func_17(&Local_102, 12);
					func_32();
				}
			}
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1433015236) > 0)
		{
			bLocal_101 = false;
		}
		if (MISC::IS_BIT_SET(&Global_1357505, 8))
		{
			bLocal_101 = false;
		}
	}
	func_2();
	func_1(&Local_102, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	if (func_26())
	{
		Global_1357504 = uParam0->f_89;
		HUD::_0x8BC7C1F929D07BF3(-1404924319);
	}
	Global_1357503 = 0;
	func_29(0);
	GRAPHICS::_0xF5793BB386E1FF9C(0);
	ANIMSCENE::_0xCDCD7B2D49AEE73A(0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_0x8BC7C1F929D07BF3(959420967);
	Global_1357507 = 0;
	Global_1357508 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	if (!func_26())
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	}
	STREAMING::REMOVE_CLIP_SET(func_73());
	STREAMING::REMOVE_ANIM_DICT(func_74());
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_37(uParam0);
	func_39(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_0xAA03F130A637D923("CAMERA");
}

void func_2()
{
	if (iLocal_47 == 1)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_96);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_57);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_399);
	iLocal_399 = 0;
	func_34();
	func_75();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_90);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_23))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_23);
	}
	GRAPHICS::_0x37D7BDBA89F13959(sLocal_23);
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_91);
	}
	iLocal_342 = 0;
	while (iLocal_342 < 39)
	{
		GRAPHICS::_0x37D7BDBA89F13959(&(sLocal_302[iLocal_342]));
		iLocal_342++;
	}
	func_15();
	func_76();
	func_51(0);
}

bool func_3()
{
	return !Global_40.f_12017;
}

void func_4(bool bParam0)
{
	Global_40.f_12017 = !bParam0;
}

void func_5()
{
	Local_102.f_106 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_102.f_106 == 1)
	{
	}
	if (Local_102.f_106 == 0)
	{
		bLocal_48 = false;
		iLocal_50 = GRAPHICS::_0x78C56B8A7B1D000C();
		if (MISC::IS_PC_VERSION())
		{
			iLocal_51 = GRAPHICS::_0x8E587FCD30E05592();
		}
		else
		{
			iLocal_51 = GRAPHICS::_0x8E587FCD30E05592();
		}
		uLocal_57 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "cameraRollCapacityLabel", " ");
		uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "photoModeLabel0", " ");
		uLocal_60 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "photoModeLabel1", " ");
		uLocal_61 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "photoModeLabel2", " ");
		uLocal_62 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "photoModeLabel3", " ");
		GRAPHICS::_0xF5793BB386E1FF9C(1);
		fLocal_10 = GRAPHICS::_0x06C0D8BB6B04A709();
		fLocal_18 = CAM::_0x18FC740FFDCD7454();
		func_32();
		iLocal_49 = 0;
		bLocal_53 = true;
		iLocal_54 = MISC::GET_GAME_TIMER();
	}
	else if (Local_102.f_106 == 2)
	{
		bLocal_48 = true;
		uLocal_57 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_57, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_49 = 0;
		bLocal_53 = false;
	}
}

bool func_6(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_77(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_7(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (bParam1)
	{
		func_79(iParam0, 4);
		func_80(iVar0, 1);
		func_81(iVar0, 1);
	}
	else
	{
		func_82(iParam0, 4);
		func_81(iVar0, 0);
	}
}

void func_8(int iParam0)
{
	Global_1935496->f_29 = (Global_1935496->f_29 || iParam0);
}

int func_9(var uParam0)
{
	if (&Global_1357509 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1357509 = 0;
		return 0;
	}
	if (!func_26())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.33f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				return 0;
			}
			if (PED::_0x7FC84E85D98F063D(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				return 0;
			}
		}
	}
	if (!func_26())
	{
		if (func_83())
		{
			if (func_84(19) || func_85(Global_1914319->f_16855.f_1))
			{
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				return 0;
			}
		}
	}
	if (!func_26())
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
	}
	if (!func_86(Global_35, 0))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || PED::IS_PED_INJURED(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (!func_26())
	{
		if (!func_87(joaat("weapon_kit_camera"), 1, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
		if (func_14(uParam0) == 8)
		{
		}
		if ((func_14(uParam0) != 8 && func_14(uParam0) != 9) && func_14(uParam0) != 10)
		{
			if (func_33(Global_35, 1, 0, 1) != joaat("weapon_kit_camera"))
			{
				if (func_88(uParam0) == 0)
				{
					return 0;
				}
			}
		}
	}
	if (func_89())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (!func_26())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, true)))
		{
			func_90("CAM_VEH", 10000, 0, 0, 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
	}
	return 1;
}

void func_10(struct<108> Param0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	PED::SET_PED_RESET_FLAG(Global_35, 173, true);
	if (Param0.f_107 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	if (!Param0.f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	if (func_91(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

void func_11(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((func_14(uParam0) == 8 || func_14(uParam0) == 9) || func_14(uParam0) == 10) || func_14(uParam0) == 5) || func_14(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_92(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_31) && CAM::IS_CAM_ACTIVE(uParam0->f_31))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	if (&Global_1357503 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_12(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (PAD::_IS_INPUT_DISABLED(iParam8))
	{
		*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam4));
		*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam5));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 250f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 250f));
	}
	else
	{
		*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
		*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
	}
}

bool func_13(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_77(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_14(var uParam0)
{
	return uParam0->f_107;
}

void func_15()
{
	AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_16()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_90);
	}
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	func_93(uParam0);
}

void func_18(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_30())
	{
		if (func_6(&(uParam0->f_1[19]), 1))
		{
			func_7(&(uParam0->f_1[19]), 0, 1);
		}
		if (func_6(&(uParam0->f_1[23]), 1))
		{
			func_7(&(uParam0->f_1[23]), 0, 1);
		}
	}
	if (bLocal_29 == 1)
	{
		if (func_6(&(uParam0->f_1[14]), 1) && (MISC::_GET_SYSTEM_TIME() - iLocal_21) > 3000)
		{
			func_7(&(uParam0->f_1[14]), 1, 1);
		}
		if (func_6(&(uParam0->f_1[18]), 1))
		{
			if ((uParam0->f_108 == 0 && iLocal_49 == 0) && (MISC::_GET_SYSTEM_TIME() - iLocal_21) > 1000)
			{
				func_7(&(uParam0->f_1[18]), 1, 1);
				if (bLocal_53)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_54) > 2500)
					{
						iLocal_50 = GRAPHICS::_0x78C56B8A7B1D000C();
						func_32();
						iLocal_54 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				func_7(&(uParam0->f_1[18]), 0, 1);
				if (bLocal_29 == 0)
				{
				}
			}
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_96);
				bLocal_48 = true;
				func_94(uParam0, 2);
				iLocal_47 = 0;
			}
			break;
		case 0:
			if (func_50(uParam0, 32))
			{
				if (!func_26())
				{
					func_37(uParam0);
				}
				if (func_20() || bLocal_48)
				{
					func_94(uParam0, 2);
				}
				else if (iLocal_50 == iLocal_51)
				{
					if (iLocal_96 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_96 = func_95(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_94(uParam0, 1);
						iLocal_47 = 1;
					}
					else
					{
						bLocal_48 = true;
						func_94(uParam0, 2);
					}
				}
				else
				{
					func_94(uParam0, 2);
				}
			}
			if (func_50(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_94(uParam0, 7);
			}
			break;
		case 2:
			Local_102.f_112 = 0;
			func_51(0);
			func_94(uParam0, 3);
			iLocal_100 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_100) > 0 || func_26())
			{
				iLocal_100 = MISC::GET_GAME_TIMER();
				if (func_20() || bLocal_48)
				{
					func_94(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_50++;
					func_32();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_94(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 1)
			{
			}
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::_0xFA91736933AB3D93(1);
				GRAPHICS::_0x8B3296278328B5EB(Local_102.f_89);
				if (func_14(uParam0) == 8 || func_14(uParam0) == 9)
				{
					GRAPHICS::_0x2705D18C11B61046(1);
				}
				else
				{
					GRAPHICS::_0x2705D18C11B61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = func_96();
				if (func_97(iVar23))
				{
					MemCopy(&cVar19, {func_98(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_99();
					StringCopy(&cVar19, func_100(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_101();
				if (func_102(iVar29))
				{
					StringCopy(&cVar25, func_103(iVar29), 16);
					StringCopy(&cVar27, func_104(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_52 = 0;
				func_94(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				func_94(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_52 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_38(func_14(uParam0));
				func_7(&(uParam0->f_1[6]), 0, 1);
				iLocal_52 = 1;
			}
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 0)
			{
				Local_102.f_112 = 1;
				func_105(uParam0, 32);
				func_94(uParam0, 0);
				func_106();
			}
			else if (uParam0->f_106 == 2)
			{
				Local_102.f_112 = 1;
				func_105(uParam0, 32);
				func_94(uParam0, 0);
				func_106();
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_100) > 300 || func_26())
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_105(uParam0, 32);
				func_94(uParam0, 0);
				func_38(func_14(uParam0));
				func_107(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_52(uParam0, 256);
				func_105(uParam0, 128);
				func_94(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				func_105(uParam0, 128);
				func_94(uParam0, 0);
			}
			break;
	}
}

int func_19()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return 0;
}

bool func_20()
{
	return &Global_1357506;
}

void func_21()
{
	StringCopy(&cLocal_63, "-", 32);
	StringConCat(&cLocal_63, " / ", 32);
	StringCopy(&cLocal_67, "-", 32);
	StringConCat(&cLocal_63, &cLocal_67, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_58, &cLocal_63);
}

bool func_22(var uParam0)
{
	return *uParam0;
}

void func_23(var uParam0)
{
	*uParam0 = 0;
}

void func_24()
{
	sLocal_302[0] = "No_PostFX_Applied";
	sLocal_262[0] = "CAM_PM_F_V0";
	sLocal_302[1] = "PhotoMode_FilterVintage01";
	iLocal_343[1] = 2;
	sLocal_262[1] = "CAM_PM_F_V1";
	sLocal_302[2] = "PhotoMode_FilterVintage02";
	iLocal_343[2] = 2;
	sLocal_262[2] = "CAM_PM_F_V2";
	sLocal_302[3] = "PhotoMode_FilterVintage03";
	iLocal_343[3] = 2;
	sLocal_262[3] = "CAM_PM_F_V3";
	sLocal_302[4] = "PhotoMode_FilterVintage04";
	iLocal_343[4] = 2;
	sLocal_262[4] = "CAM_PM_F_V4";
	sLocal_302[5] = "PhotoMode_FilterVintage05";
	iLocal_343[5] = 2;
	sLocal_262[5] = "CAM_PM_F_V5";
	sLocal_302[6] = "PhotoMode_FilterVintage06";
	iLocal_343[6] = 2;
	sLocal_262[6] = "CAM_PM_F_V6";
	sLocal_302[7] = "PhotoMode_FilterVintage07";
	iLocal_343[7] = 2;
	sLocal_262[7] = "CAM_PM_F_V7";
	sLocal_302[8] = "PhotoMode_FilterVintage08";
	iLocal_343[8] = 2;
	sLocal_262[8] = "CAM_PM_F_V8";
	sLocal_302[9] = "PhotoMode_FilterVintage09";
	iLocal_343[9] = 2;
	sLocal_262[9] = "CAM_PM_F_V9";
	sLocal_302[10] = "PhotoMode_FilterVintage10";
	iLocal_343[10] = 2;
	sLocal_262[10] = "CAM_PM_F_V10";
	sLocal_302[11] = "PhotoMode_FilterModern01";
	iLocal_343[11] = 1;
	sLocal_262[11] = "CAM_PM_F_M1";
	sLocal_302[12] = "PhotoMode_FilterModern02";
	iLocal_343[12] = 1;
	sLocal_262[12] = "CAM_PM_F_M2";
	sLocal_302[13] = "PhotoMode_FilterModern03";
	iLocal_343[13] = 1;
	sLocal_262[13] = "CAM_PM_F_M3";
	sLocal_302[14] = "PhotoMode_FilterModern04";
	iLocal_343[14] = 1;
	sLocal_262[14] = "CAM_PM_F_M4";
	sLocal_302[15] = "PhotoMode_FilterModern05";
	iLocal_343[15] = 1;
	sLocal_262[15] = "CAM_PM_F_M5";
	sLocal_302[16] = "PhotoMode_FilterModern06";
	iLocal_343[16] = 1;
	sLocal_262[16] = "CAM_PM_F_M6";
	sLocal_302[17] = "PhotoMode_FilterModern07";
	iLocal_343[17] = 1;
	sLocal_262[17] = "CAM_PM_F_M7";
	sLocal_302[18] = "PhotoMode_FilterModern08";
	iLocal_343[18] = 1;
	sLocal_262[18] = "CAM_PM_F_M8";
	sLocal_302[19] = "PhotoMode_FilterModern09";
	iLocal_343[19] = 1;
	sLocal_262[19] = "CAM_PM_F_M9";
	sLocal_302[20] = "PhotoMode_FilterModern10";
	iLocal_343[20] = 1;
	sLocal_262[20] = "CAM_PM_F_M10";
	sLocal_302[21] = "PhotoMode_FilterGame01";
	iLocal_343[21] = 0;
	sLocal_262[21] = "CAM_PM_F_S1";
	sLocal_302[22] = "PhotoMode_FilterGame02";
	iLocal_343[22] = 0;
	sLocal_262[22] = "CAM_PM_F_S2";
	sLocal_302[23] = "PhotoMode_FilterGame03";
	iLocal_343[23] = 0;
	sLocal_262[23] = "CAM_PM_F_S3";
	sLocal_302[24] = "PhotoMode_FilterGame04";
	iLocal_343[24] = 0;
	sLocal_262[24] = "CAM_PM_F_S4";
	sLocal_302[25] = "PhotoMode_FilterGame05";
	iLocal_343[25] = 0;
	sLocal_262[25] = "CAM_PM_F_S5";
	sLocal_302[26] = "PhotoMode_FilterGame06";
	iLocal_343[26] = 0;
	sLocal_262[26] = "CAM_PM_F_S6";
	sLocal_302[27] = "PhotoMode_FilterGame07";
	iLocal_343[27] = 0;
	sLocal_262[27] = "CAM_PM_F_S7";
	sLocal_302[28] = "PhotoMode_FilterGame08";
	iLocal_343[28] = 0;
	sLocal_262[28] = "CAM_PM_F_S8";
	sLocal_302[29] = "PhotoMode_FilterGame09";
	iLocal_343[29] = 0;
	sLocal_262[29] = "CAM_PM_F_S9";
	sLocal_302[30] = "PhotoMode_FilterGame10";
	iLocal_343[30] = 0;
	sLocal_262[30] = "CAM_PM_F_S10";
	sLocal_302[31] = "PhotoMode_FilterGame11";
	iLocal_343[31] = 0;
	sLocal_262[31] = "CAM_PM_F_S11";
	sLocal_302[32] = "PhotoMode_FilterGame12";
	iLocal_343[32] = 0;
	sLocal_262[32] = "CAM_PM_F_S12";
	sLocal_302[33] = "PhotoMode_FilterGame13";
	iLocal_343[33] = 0;
	sLocal_262[33] = "CAM_PM_F_S13";
	sLocal_302[34] = "PhotoMode_FilterGame14";
	iLocal_343[34] = 0;
	sLocal_262[34] = "CAM_PM_F_S14";
	sLocal_302[35] = "PhotoMode_FilterGame15";
	iLocal_343[35] = 0;
	sLocal_262[35] = "CAM_PM_F_S15";
	sLocal_302[36] = "PhotoMode_FilterGame16";
	iLocal_343[36] = 0;
	sLocal_262[36] = "CAM_PM_F_S16";
	sLocal_302[37] = "PhotoMode_FilterGame17";
	iLocal_343[37] = 0;
	sLocal_262[37] = "CAM_PM_F_S17";
	sLocal_302[38] = "PhotoMode_FilterGame18";
	iLocal_343[38] = 0;
	sLocal_262[38] = "CAM_PM_F_S18";
}

void func_25()
{
	if (func_26())
	{
		HUD::_0xF66090013DE648D5("CAMERA");
	}
	else
	{
		HUD::_0xF66090013DE648D5("CAMERA");
		STREAMING::REQUEST_ANIM_DICT(func_74());
		STREAMING::REQUEST_CLIP_SET(func_73());
		GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
		GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
	}
}

bool func_26()
{
	return &Global_1357503;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	if (func_26())
	{
		if (!HUD::_0xD0976CC34002DB57("CAMERA"))
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0) == 0)
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
		{
			iVar0 = 0;
		}
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
		{
			iVar0 = 0;
		}
		if (!HUD::_0xD0976CC34002DB57("CAMERA"))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_CLIP_SET_LOADED(func_73()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_74()))
		{
			iVar0 = 0;
		}
		if (!AUDIO::_0xD9130842D7226045("CAMERA_SOUNDSET", 0))
		{
			if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_28()
{
	if (ANIMSCENE::_0xEA41D44A8D42057B())
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0)
{
	if (bParam0)
	{
		ANIMSCENE::_0x37C1257849DEF24A(1);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		GRAPHICS::_0xEC3D8C228FE553D7(0);
	}
	else
	{
		ANIMSCENE::_0x37C1257849DEF24A(0);
		ANIMSCENE::_0x41AFA5F228B0B6B0();
		GRAPHICS::_0xEC3D8C228FE553D7(1);
	}
}

int func_30()
{
	MISC::SET_BIT(Global_1357505, 0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-2036486134) > 0)
	{
		if (func_108(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 30f)
		{
			return 1;
		}
	}
	if (GRAPHICS::_0x3DA7A10583A4BEC0())
	{
		return 1;
	}
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return 1;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return 1;
	}
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return 1;
	}
	if (func_109())
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(773227447) > 0)
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1255458557) > 0)
	{
		return 1;
	}
	if (bLocal_19)
	{
		return 1;
	}
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		return 1;
	}
	if (CAM::_0x20389408F0E93B9A())
	{
		return 1;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || Global_1914319->f_18941.f_17)
	{
		return 1;
	}
	MISC::CLEAR_BIT(Global_1357505, 0);
	return 0;
}

void func_31()
{
	if (iLocal_75 == 0)
	{
		Local_102.f_89 = &Global_1357504;
		iLocal_75 = 1;
	}
	if (Local_102.f_89 != 0)
	{
		sLocal_91 = &sLocal_302[Local_102.f_89];
		func_110();
		func_32();
	}
}

void func_32()
{
	if (bLocal_29 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_58, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
	}
	else
	{
		if (func_14(&Local_102) == 12)
		{
			func_111();
		}
		if (func_14(&Local_102) == 13)
		{
			func_112();
		}
		if (func_14(&Local_102) == 14)
		{
			func_113();
		}
		StringCopy(&cLocal_63, "", 32);
		MISC::_INT_TO_STRING(iLocal_50, "%i", &cLocal_63);
		StringConCat(&cLocal_63, " / ", 32);
		StringCopy(&cLocal_67, "", 32);
		MISC::_INT_TO_STRING(iLocal_51, "%i", &cLocal_67);
		StringConCat(&cLocal_63, &cLocal_67, 32);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_58, &cLocal_63);
	}
}

int func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_34()
{
	if (func_26())
	{
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_88))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_88);
	}
}

void func_35()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_90);
	}
}

void func_36()
{
	float fVar0;
	vector3 vVar1;

	vLocal_222 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_222, fVar0, 0f, 2f, -0.2f) };
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		bLocal_238 = false;
		return;
	}
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_238 = true;
	}
	else
	{
		bLocal_238 = false;
	}
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_77(&(uParam0->f_1[iVar0])))
		{
			func_114(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_38(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_115(6, 0);
			func_115(7, 1);
			func_115(3, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(4, 0);
			func_115(5, 1);
			func_115(0, 0);
			func_115(1, 0);
			func_115(2, 0);
			func_115(11, 0);
			func_115(12, 0);
			func_115(13, 1);
			func_115(14, 1);
			func_115(15, 1);
			func_115(16, 1);
			func_115(18, 1);
			func_115(19, 1);
			func_115(20, 1);
			func_115(21, 1);
			func_115(22, 1);
			func_115(17, 0);
			func_115(23, 0);
			func_115(24, 0);
			func_115(25, 0);
			func_115(26, 0);
			func_115(27, 0);
			func_115(28, 0);
			break;
		case 13:
			func_115(6, 0);
			func_115(7, 1);
			func_115(3, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(4, 0);
			func_115(5, 1);
			func_115(0, 0);
			func_115(1, 0);
			func_115(2, 0);
			func_115(11, 0);
			func_115(12, 0);
			func_115(13, 0);
			func_115(14, 1);
			func_115(15, 0);
			func_115(16, 0);
			func_115(17, 0);
			func_115(18, 1);
			func_115(19, 1);
			func_115(23, 1);
			func_115(24, 0);
			func_115(25, 0);
			if (bLocal_11)
			{
				func_115(26, 1);
				func_7(&(Local_102.f_1[26]), 0, 1);
			}
			else
			{
				func_115(26, 1);
				func_7(&(Local_102.f_1[26]), 1, 1);
			}
			func_115(27, 1);
			func_115(28, 1);
			break;
		case 14:
			func_115(6, 0);
			func_115(7, 1);
			func_115(3, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(4, 0);
			func_115(5, 1);
			func_115(0, 0);
			func_115(1, 0);
			func_115(2, 0);
			func_115(11, 0);
			func_115(12, 0);
			func_115(13, 0);
			func_115(14, 1);
			func_115(15, 0);
			func_115(16, 0);
			func_115(17, 1);
			func_115(18, 1);
			func_115(19, 1);
			func_115(23, 0);
			if (Local_102.f_89 == 0)
			{
				func_115(24, 1);
				func_7(&(Local_102.f_1[24]), 0, 1);
			}
			else
			{
				func_115(24, 1);
				func_7(&(Local_102.f_1[24]), 1, 1);
			}
			func_115(25, 1);
			func_115(26, 0);
			func_115(27, 0);
			func_115(28, 0);
			break;
		case 3:
			func_115(6, 0);
			func_115(3, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(7, 0);
			func_115(4, 0);
			func_115(5, 0);
			func_115(0, 1);
			func_115(1, 1);
			func_115(2, 1);
			break;
		case 6:
			func_115(0, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(1, 0);
			func_115(2, 0);
			func_115(5, 1);
			func_115(3, 1);
			func_115(4, 1);
			func_115(6, 1);
			func_115(7, 1);
			break;
		case 8:
			func_115(0, 0);
			func_115(1, 0);
			func_115(2, 0);
			func_115(5, 1);
			func_115(8, 1);
			func_115(9, 1);
			func_115(3, 1);
			func_115(4, 1);
			func_115(6, 1);
			func_115(7, 1);
			break;
		case 9:
			func_115(0, 0);
			func_115(1, 0);
			func_115(2, 0);
			func_115(5, 1);
			func_115(8, 1);
			func_115(9, 1);
			func_115(3, 1);
			func_115(4, 1);
			func_115(6, 1);
			func_115(7, 1);
			break;
		case 10:
			func_115(2, 0);
			func_115(0, 0);
			func_115(3, 0);
			func_115(1, 0);
			func_115(5, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(7, 0);
			func_115(6, 0);
			func_115(9, 0);
			func_115(4, 0);
			break;
		case 7:
			func_115(2, 0);
			func_115(0, 0);
			func_115(6, 0);
			func_115(4, 0);
			func_115(5, 0);
			func_115(1, 0);
			func_115(8, 0);
			func_115(9, 0);
			func_115(7, 0);
			break;
	}
	if ((MISC::_GET_SYSTEM_TIME() - iLocal_21) > 3000)
	{
		func_116(bLocal_29);
	}
	else
	{
		if ((MISC::_GET_SYSTEM_TIME() - iLocal_21) < 1000)
		{
			func_7(&(Local_102.f_1[18]), 0, 1);
		}
		func_7(&(Local_102.f_1[14]), 0, 1);
	}
}

void func_39(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_40(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_77(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_41()
{
	if (iLocal_397 == 0)
	{
		iLocal_397 = 1;
	}
}

void func_42()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_222 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_222, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, 0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_222, &uVar5, 0);
	if ((vLocal_222.z - fVar4) > 3f)
	{
		bLocal_217 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_217 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_217 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		bLocal_217 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_222, 2f) > 0)
	{
		bLocal_217 = false;
		return;
	}
	if ((fVar4 - vLocal_222.z) > 1f)
	{
		bLocal_217 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_217 = false;
		return;
	}
	if (func_43(Global_35, 0))
	{
		bLocal_217 = false;
		return;
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		bLocal_217 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_217 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_217 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_217 = true;
	}
	else
	{
		bLocal_217 = false;
	}
	if (bLocal_217)
	{
		vLocal_219 = { vLocal_222.x, vLocal_222.y, (vLocal_222.z - 1f) };
		fLocal_230 = fVar0;
		vLocal_225 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

int func_43(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_44(var uParam0)
{
	return func_117(*uParam0, 1);
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1 || !func_44(uParam0))
	{
		func_118(uParam0);
	}
}

int func_46()
{
	switch (iLocal_397)
	{
		case 0:
			if (iLocal_398 == iLocal_400)
			{
			}
			break;
		case 1:
			iLocal_399 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_398);
			iLocal_397 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_399))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_399, iLocal_400);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_399);
				iLocal_397 = 3;
			}
			break;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 0;
}

void func_47()
{
	if (func_26())
	{
	}
	else if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_88))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_88);
	}
}

void func_48(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;

	if (uParam0->f_90 > 0 && IntToFloat(uParam0->f_90) > 89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_90 < 0 && IntToFloat(uParam0->f_90) < -89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_91 > 0 && IntToFloat(uParam0->f_91) > 89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_91 < 0 && IntToFloat(uParam0->f_91) < -89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_90 != uParam0->f_92)
	{
		uParam0->f_92 = uParam0->f_90;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_90) - -89f) / (89f - -89f));
		uParam0->f_98 = fVar0;
	}
	else
	{
		uParam0->f_102 = 0f;
	}
	if (uParam0->f_91 != uParam0->f_93)
	{
		uParam0->f_93 = uParam0->f_91;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_91) - -89f) / (89f - -89f));
		uParam0->f_99 = fVar1;
	}
	else
	{
		uParam0->f_103 = 0f;
	}
	vVar6 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	fVar4 = 50f;
	if ((func_119(((*Global_1347702)[85 /*49*/])->f_15) || func_119(((*Global_1347702)[86 /*49*/])->f_15)) || func_119(((*Global_1347702)[87 /*49*/])->f_15))
	{
		fVar5 = -50f;
	}
	else
	{
		fVar5 = -25f;
	}
	if ((func_119(((*Global_1347702)[85 /*49*/])->f_15) || func_119(((*Global_1347702)[86 /*49*/])->f_15)) || func_119(((*Global_1347702)[87 /*49*/])->f_15))
	{
		fVar2 = 38f;
		fVar3 = -40f;
	}
	else
	{
		fVar2 = 68f;
		fVar3 = -85f;
	}
	fVar12 = uParam0->f_81;
	fVar13 = uParam0->f_82;
	fVar11 = -1f;
	if (uParam0->f_94 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_94 = MISC::ABSI(uParam0->f_94);
	}
	fVar9 = ((BUILTIN::TO_FLOAT(uParam0->f_94) - 0f) / (89f - 0f));
	fVar12 = (fVar12 + (fVar9 * fVar11));
	if (fVar12 >= fVar2)
	{
		fVar12 = fVar2;
	}
	else if (fVar12 < fVar3)
	{
		fVar12 = fVar3;
	}
	uParam0->f_81 = fVar12;
	fVar11 = -1f;
	if (uParam0->f_95 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_95 = MISC::ABSI(uParam0->f_95);
	}
	fVar10 = ((BUILTIN::TO_FLOAT(uParam0->f_95) - 0f) / (89f - 0f));
	fVar13 = (fVar13 + (fVar10 * fVar11));
	if (fVar13 >= fVar4)
	{
		fVar13 = fVar4;
	}
	else if (fVar13 < fVar5)
	{
		fVar13 = fVar5;
	}
	uParam0->f_82 = fVar13;
	uParam0->f_83 = { Vector(vVar6.z, 0f, 0f) + Vector(uParam0->f_81, 0f, uParam0->f_82) };
	func_120(uParam0);
	func_121(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((func_119(((*Global_1347702)[85 /*49*/])->f_15) || func_119(((*Global_1347702)[86 /*49*/])->f_15)) || func_119(((*Global_1347702)[87 /*49*/])->f_15))
	{
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_239) > 100)
	{
		if (iLocal_95 == 0)
		{
			fVar14 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_222, fVar14, 0f, 0.25f, 0f) };
			if (!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_95 = 1;
			}
		}
		iLocal_239 = MISC::GET_GAME_TIMER();
	}
}

bool func_49(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_78(iParam0);
	iVar1 = ((*Global_1945938)[iVar0 /*18*/])->f_4;
	return (func_40(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0->f_109 && iParam1) != 0;
}

void func_51(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 || iParam1);
}

void func_53()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_54(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_122(iVar0, 2))
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
				func_123(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

var func_55(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_90(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

int func_56()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return 0;
}

int func_57(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !func_50(uParam0, 32))
	{
		AUDIO::_0x6FB1DA3CA9DA7D90("CLICK", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
		func_51(1);
		func_52(uParam0, 32);
	}
	return 1;
}

void func_58(var uParam0)
{
	vLocal_222 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_222, vLocal_219, true) > 3f)
	{
		ENTITY::_0x203BEFFDBE12E96A(Global_35, vLocal_219, fLocal_230, 1, 0, 1);
		ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

int func_59(var uParam0)
{
	if (!func_44(uParam0))
	{
		return 0;
	}
	if (func_124(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_125() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_60(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_61(var uParam0)
{
	if (func_22(uParam0))
	{
		func_38(8);
		func_23(uParam0);
	}
	func_126(uParam0);
	func_127();
	func_128();
	uParam0->f_88 = 0;
	iLocal_391 = 0;
	bLocal_228 = true;
	bLocal_229 = false;
	HUD::_0x4CC5F2FC1332577F(-1404924319);
}

void func_62(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	func_129(uParam0);
	if (PAD::_0x6CD79468A1E595C6(0))
	{
		vLocal_232 = { vLocal_235 };
		fLocal_231 = 0f;
		fLocal_395 = 0f;
	}
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		fVar1 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_LR")) * 4.5f);
		fVar2 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_UD")) * 4.5f);
		fVar0 = func_130(vLocal_235.z, (vLocal_232.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_232.f_2 = (vLocal_235.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_232.f_2 = (vLocal_235.z - -30f);
		}
		else
		{
			vLocal_232.f_2 = (vLocal_232.z - fVar1);
		}
		fVar0 = func_130(vLocal_235.x, (vLocal_232.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_232.x = (vLocal_235.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_232.x = (vLocal_235.x - -30f);
		}
		else
		{
			vLocal_232.x = (vLocal_232.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_231 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_232.f_2 = (vLocal_232.z - 0.6f);
					fLocal_231 = (fLocal_231 - (0.07f * 3f));
				}
				else
				{
					vLocal_232.f_2 = (vLocal_232.z - 0.2f);
					fLocal_231 = (fLocal_231 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_231 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_232.f_2 = (vLocal_232.z + 0.6f);
					fLocal_231 = (fLocal_231 + (0.07f * 3f));
				}
				else
				{
					vLocal_232.f_2 = (vLocal_232.z + 0.2f);
					fLocal_231 = (fLocal_231 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_395 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_232.x = (vLocal_232.x - 0.6f);
					fLocal_395 = (fLocal_395 - (0.07f * 3f));
				}
				else
				{
					vLocal_232.x = (vLocal_232.x - 0.2f);
					fLocal_395 = (fLocal_395 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_395 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_232.x = (vLocal_232.x + 0.6f);
					fLocal_395 = (fLocal_395 + (0.07f * 3f));
				}
				else
				{
					vLocal_232.x = (vLocal_232.x + 0.2f);
					fLocal_395 = (fLocal_395 + 0.07f);
				}
			}
		}
	}
	if (bLocal_228)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_225, 3167))
		{
			bLocal_229 = false;
		}
		else
		{
			bLocal_229 = true;
		}
		bLocal_228 = false;
	}
	if ((func_40(&(uParam0->f_1[7]), 1) || func_43(Global_35, 0)) || bLocal_229)
	{
		if (func_43(Global_35, 0))
		{
		}
		else if (func_131(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_0x6FB1DA3CA9DA7D90("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
		}
		iLocal_245 = 0;
		func_37(uParam0);
		func_17(uParam0, 10);
		func_16();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", func_74());
		if (!func_44(&uLocal_241))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
			func_45(&uLocal_241, 1);
		}
	}
	if (func_67(&(uParam0->f_1[9]), 0, 1))
	{
		if (iLocal_261 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, &(sLocal_249[uParam0->f_87]), func_74());
		}
	}
	if (func_67(&(uParam0->f_1[9]), 1, 1))
	{
		if (iLocal_261 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, &(sLocal_249[uParam0->f_87]), func_74());
		}
	}
	uParam0->f_43 = { func_132(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_43));
	if (bLocal_393 == 0)
	{
		if (func_67(&(uParam0->f_1[8]), 1, 1))
		{
			bLocal_393 = true;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_133();
		}
	}
	if (bLocal_393 == 0)
	{
		if (func_67(&(uParam0->f_1[8]), 0, 1))
		{
			bLocal_393 = true;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_133();
		}
	}
	if (bLocal_393)
	{
		switch (iLocal_391)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_392) > 200)
				{
					iLocal_391 = 2;
				}
				break;
			case 2:
				func_134(uParam0);
				iLocal_391 = 3;
				iLocal_392 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_392) > 500)
				{
					iLocal_391 = 4;
					iLocal_392 = MISC::GET_GAME_TIMER();
					func_35();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_392) > 700)
				{
					iLocal_391 = 0;
					bLocal_393 = false;
				}
				break;
			default:
				break;
		}
	}
	func_121(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, vLocal_232, 50f, 0, 1, 1, 2, 0, 0);
}

int func_63()
{
	return iLocal_261;
}

float func_64(var uParam0)
{
	if (!func_44(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_124(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_135() - uParam0->f_1);
}

void func_65()
{
	func_60(&uLocal_258);
	iLocal_261 = 0;
}

void func_66()
{
	if (func_13(&(Local_102.f_1[14]), 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("hide_hud", "Photo_Mode_Sounds", true, 0);
		}
		if (bLocal_29)
		{
			bLocal_29 = false;
			func_37(&Local_102);
			func_38(func_14(&Local_102));
			func_116(0);
		}
		else
		{
			bLocal_29 = true;
			func_37(&Local_102);
			func_38(func_14(&Local_102));
			func_116(1);
		}
		func_32();
	}
	if (func_136(&(Local_102.f_1[7]), 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("back", "Photo_Mode_Sounds", true, 0);
		}
		func_137();
		func_17(&Local_102, 15);
	}
	if (bLocal_29)
	{
		if (iLocal_47 == 0)
		{
			if (iLocal_20 == 0)
			{
				if (!func_6(&(Local_102.f_1[14]), 1))
				{
					func_37(&Local_102);
					if (func_14(&Local_102) == 14)
					{
						func_38(14);
					}
					else if (func_14(&Local_102) == 12)
					{
						func_38(12);
					}
					else if (func_14(&Local_102) == 13)
					{
						func_38(13);
					}
					BUILTIN::SETTIMERB(0);
					iLocal_20 = 1;
				}
			}
			else if (BUILTIN::TIMERB() > 2500)
			{
				if (!func_6(&(Local_102.f_1[14]), 1))
				{
					MISC::SET_BIT(Global_1357505, 1);
					func_137();
					func_17(&Local_102, 15);
				}
				else
				{
					iLocal_20 = 0;
				}
			}
		}
		else
		{
			iLocal_20 = 0;
		}
	}
	else
	{
		iLocal_20 = 0;
	}
	if ((func_49(&(Local_102.f_1[18])) && !func_50(&Local_102, 32)) && (MISC::_GET_SYSTEM_TIME() - iLocal_21) > 1000)
	{
		BUILTIN::SETTIMERB(0);
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("take_photo", "Photo_Mode_Sounds", true, 0);
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_23))
		{
			GRAPHICS::ANIMPOSTFX_STOP(sLocal_23);
		}
		func_51(1);
		func_52(&Local_102, 32);
	}
	if (!func_50(&Local_102, 32))
	{
		if ((MISC::_GET_SYSTEM_TIME() - iLocal_21) > 500)
		{
			if (func_49(&(Local_102.f_1[5])))
			{
				func_53();
			}
		}
	}
}

bool func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_77(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

void func_68()
{
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH")) > 0.3f)
	{
		if (bLocal_37 == 0 && fLocal_18 > 0.2f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_35, sLocal_43, "Photo_Mode_Sounds", 1);
				bLocal_37 = true;
			}
		}
		else if (fLocal_18 < 0.2f || fLocal_18 == 0.2f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_35);
			bLocal_37 = false;
		}
	}
	else if (bLocal_37)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_35);
		bLocal_37 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH")) < -0.3f)
	{
		if (bLocal_38 == 0 && fLocal_18 < 49.6f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (fLocal_18 > 49.6f || fLocal_18 == 49.6f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_36);
		bLocal_38 = false;
	}
}

void func_69()
{
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_DOF")) > 0.3f)
	{
		if (bLocal_41 == 0 && fLocal_16 > 0.1f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_39, sLocal_43, "Photo_Mode_Sounds", 1);
				bLocal_41 = true;
			}
		}
		else if (fLocal_16 <= 0.1f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_39);
			bLocal_37 = false;
		}
	}
	else if (bLocal_41)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_39);
		bLocal_41 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_DOF")) < -0.3f)
	{
		if ((bLocal_42 == 0 && fLocal_16 < 99.9f) && fLocal_16 > 0f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_40, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_42 = true;
			}
		}
		else if (fLocal_16 > 99.9f || fLocal_16 < 0f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_40);
			bLocal_42 = false;
		}
	}
	else if (bLocal_42)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_40);
		bLocal_42 = false;
	}
}

void func_70()
{
	GRAPHICS::_0xF5793BB386E1FF9C(1);
	if (func_67(&(Local_102.f_1[26]), 0, 1))
	{
		if (!bLocal_12)
		{
			GRAPHICS::_0xC8D0611D9A0CF5D3(0.1f);
			fLocal_10 = GRAPHICS::_0x06C0D8BB6B04A709();
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_45, "Photo_Mode_Sounds", false, 2);
			}
			func_32();
		}
	}
	if (func_67(&(Local_102.f_1[26]), 1, 1))
	{
		GRAPHICS::_0xC8D0611D9A0CF5D3(-0.1f);
		fLocal_10 = GRAPHICS::_0x06C0D8BB6B04A709();
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
		}
		func_32();
	}
	if (func_40(&(Local_102.f_1[27]), 1))
	{
		if (bLocal_11)
		{
			bLocal_11 = false;
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_45, "Photo_Mode_Sounds", false, 2);
			}
		}
		else
		{
			bLocal_11 = true;
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
		}
		func_38(13);
		func_32();
	}
}

void func_71()
{
	if (func_67(&(Local_102.f_1[24]), 0, 1))
	{
		if (fLocal_24 < 1f)
		{
			fLocal_24 = (fLocal_24 + fLocal_26);
			GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_91, fLocal_24);
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_45, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (func_67(&(Local_102.f_1[24]), 1, 1))
	{
		if (fLocal_24 > 0.1f)
		{
			fLocal_24 = (fLocal_24 - fLocal_26);
			GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_91, fLocal_24);
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (func_67(&(Local_102.f_1[17]), 0, 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("filter_left", "Photo_Mode_Sounds", true, 0);
		}
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_91, fLocal_25);
		fLocal_24 = fLocal_25;
		sLocal_92 = &sLocal_302[Local_102.f_89];
		func_75();
		Local_102.f_89 = (Local_102.f_89 - 1);
		if (Local_102.f_89 < 0)
		{
			Local_102.f_89 = 38;
		}
		if (Local_102.f_89 == 0)
		{
			func_75();
		}
		else
		{
			sLocal_91 = &sLocal_302[Local_102.f_89];
			func_110();
		}
		func_138();
		func_38(14);
		func_32();
	}
	if (func_67(&(Local_102.f_1[17]), 1, 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("filter_right", "Photo_Mode_Sounds", true, 0);
		}
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_91, fLocal_25);
		fLocal_24 = fLocal_25;
		sLocal_92 = &sLocal_302[Local_102.f_89];
		func_75();
		Local_102.f_89++;
		if (Local_102.f_89 == 39)
		{
			Local_102.f_89 = 0;
		}
		if (Local_102.f_89 == 0)
		{
			func_75();
		}
		else
		{
			sLocal_91 = &sLocal_302[Local_102.f_89];
			func_110();
		}
		func_138();
		func_38(14);
		func_32();
	}
}

void func_72()
{
	float fVar0;

	GRAPHICS::_0xF5793BB386E1FF9C(1);
	fVar0 = 0.0125f;
	if (PAD::_IS_INPUT_DISABLED(0))
	{
		fVar0 = 0.025f;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_CONTRAST")) > 0.3f)
	{
		GRAPHICS::_0x62B9F9A1272AED80(-fVar0);
		fLocal_9 = GRAPHICS::_0x98F4154989B81EC6();
		func_32();
		if (bLocal_37 == 0 && iLocal_28 > 0)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_35, sLocal_43, "Photo_Mode_Sounds", 1);
				bLocal_37 = true;
			}
		}
		else if (iLocal_28 == 0)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_35);
			bLocal_37 = false;
		}
	}
	else if (bLocal_37)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_35);
		bLocal_37 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_CONTRAST")) < -0.3f)
	{
		GRAPHICS::_0x62B9F9A1272AED80(fVar0);
		fLocal_9 = GRAPHICS::_0x98F4154989B81EC6();
		func_32();
		if (bLocal_38 == 0 && iLocal_28 < 14)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (iLocal_28 == 14)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_36);
		bLocal_38 = false;
	}
}

char* func_73()
{
	return "facials@gen_male@portrait";
}

char* func_74()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_75()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_91);
	}
}

void func_76()
{
	AUDIO::_0x3210BCB36AF7621B(iLocal_31);
	AUDIO::_0x3210BCB36AF7621B(iLocal_32);
	AUDIO::_0x3210BCB36AF7621B(iLocal_35);
	AUDIO::_0x3210BCB36AF7621B(iLocal_36);
	AUDIO::_0x3210BCB36AF7621B(iLocal_39);
	AUDIO::_0x3210BCB36AF7621B(iLocal_40);
	AUDIO::RELEASE_SOUND_ID(iLocal_31);
	AUDIO::RELEASE_SOUND_ID(iLocal_32);
	AUDIO::RELEASE_SOUND_ID(iLocal_35);
	AUDIO::RELEASE_SOUND_ID(iLocal_36);
	AUDIO::RELEASE_SOUND_ID(iLocal_39);
	AUDIO::RELEASE_SOUND_ID(iLocal_40);
}

bool func_77(int iParam0)
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

int func_78(int iParam0)
{
	return iParam0;
}

void func_79(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_80(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_122(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, bParam1);
		}
	}
}

void func_81(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_82(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_83()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_84(int iParam0)
{
	if (func_83())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;

	if (!func_139(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_140(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0, int iParam1)
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
	if (func_141(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_141(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_142(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_143(iParam0);
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
		if (!func_144(iParam0, 1))
		{
			return false;
		}
	}
	return func_145(iParam0, 0, bParam2) >= iParam1;
}

int func_88(var uParam0)
{
	return uParam0->f_108;
}

bool func_89()
{
	return Global_1935689->f_1;
}

var func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_91(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		func_146(4);
	}
	func_146(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

void func_93(var uParam0)
{
	*uParam0 = 1;
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_95(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE76::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_96()
{
	return Global_1894899->f_2;
}

bool func_97(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

var func_98(int iParam0)
{
	char[] cVar0[8];

	if (!func_97(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_22;
}

int func_99()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

char* func_100(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return "WATER_AURORA_BASIN";
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return "WATER_BARROW_LAGOON";
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return "WATER_BAYOU_NWA";
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return "WATER_BEARTOOTH_BECK";
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007: /* GXTEntry: "Dakota River" */
			return "WATER_DAKOTA_RIVER";
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return "WATER_DEADBOOT_CREEK";
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return "WATER_DEWBERRY_CREEK";
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return "WATER_HOT_SPRINGS";
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return "WATER_KAMASSA_RIVER";
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return "WATER_LAKE_DON_JULIO";
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return "WATER_MATTLOCK_POND";
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193: /* GXTEntry: "Owanjila" */
			return "WATER_OWANJILA";
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return "WATER_RINGNECK_CREEK";
		case -1504425495: /* GXTEntry: "San Luis River" */
			return "WATER_SAN_LUIS_RIVER";
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return "WATER_SEA_OF_CORONADO";
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return "WATER_SPIDER_GORGE";
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return "WATER_STILLWATER_CREEK";
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_101()
{
	return Global_1897952->f_41;
}

bool func_102(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_103(int iParam0)
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
	return "No District Label!";
}

char* func_104(int iParam0)
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
	return "No State Label!";
}

void func_105(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 - (uParam0->f_109 && iParam1));
}

void func_106()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_89))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_89);
	}
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_147(iParam0, &iVar0, &iVar1);
	if (!func_148(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_149(iVar0, iVar1);
}

float func_108(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_109()
{
	int iVar0;

	if (func_150())
	{
		iVar0 = TASK::_0x804425C4BBD00883(Global_35);
		if (func_151(iVar0) == 2041469314 || func_151(iVar0) == -77448735)
		{
			return 0;
		}
		else
		{
			if (func_151(iVar0) == 0)
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(52395882) > 0 || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1741532193) > 0)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_110()
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sLocal_91))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sLocal_91);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_91);
	}
}

void func_111()
{
	StringCopy(&cLocal_76, "", 64);
	if (iLocal_240 == 1 || iLocal_240 == 0)
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_IN_ORBIT"), 64);
	}
	if (iLocal_240 == 2)
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_IN_FREE"), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_76);
	StringCopy(&cLocal_76, "", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_LENS"), 64);
	StringConCat(&cLocal_76, ": ", 64);
	if (fLocal_14 == -18.88f)
	{
		StringCopy(&cLocal_76, " ", 64);
	}
	else
	{
		StringCopy(&cLocal_76, MISC::_0x2B6846401D68E563(fLocal_14, 1), 64);
	}
	StringConCat(&cLocal_76, "mm", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_76);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
}

void func_112()
{
	StringCopy(&cLocal_76, "", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXPOSURE"), 64);
	StringConCat(&cLocal_76, ": ", 64);
	iLocal_27 = BUILTIN::CEIL((fLocal_10 * 10f));
	iLocal_27 += 161;
	if (iLocal_27 > 160 || iLocal_27 == 160)
	{
		iLocal_27 = 160;
		bLocal_12 = true;
	}
	else
	{
		bLocal_12 = false;
	}
	MISC::_INT_TO_STRING(iLocal_27, "%i", &cLocal_84);
	StringConCat(&cLocal_76, &cLocal_84, 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_76);
	StringCopy(&cLocal_76, "", 64);
	if (bLocal_11)
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXLOCKON"), 64);
	}
	else
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXLOCKOFF"), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_76);
	StringCopy(&cLocal_76, "", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FOCDIST"), 64);
	StringConCat(&cLocal_76, ": ", 64);
	StringConCat(&cLocal_76, MISC::_0x2B6846401D68E563(fLocal_18, 1), 64);
	StringConCat(&cLocal_76, "m", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_76);
	StringCopy(&cLocal_76, "", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_BLUR"), 64);
	StringConCat(&cLocal_76, ": ", 64);
	if (fLocal_16 < 0f && fLocal_16 > -1f)
	{
		StringConCat(&cLocal_76, "0.0", 64);
	}
	else if (fLocal_16 == -1f)
	{
		StringConCat(&cLocal_76, "100.0", 64);
	}
	else
	{
		StringConCat(&cLocal_76, MISC::_0x2B6846401D68E563(fLocal_16, 1), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, &cLocal_76);
}

void func_113()
{
	StringCopy(&cLocal_76, "", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_CONTRAST"), 64);
	StringConCat(&cLocal_76, ": ", 64);
	iLocal_27 = BUILTIN::CEIL((fLocal_9 * 10f));
	iLocal_27 = (iLocal_27 - 6);
	if (iLocal_27 > 14)
	{
		iLocal_27 = 14;
	}
	if (iLocal_27 < 0)
	{
		iLocal_27 = 0;
	}
	MISC::_INT_TO_STRING(iLocal_27, "%i", &cLocal_84);
	iLocal_28 = iLocal_27;
	StringConCat(&cLocal_76, &cLocal_84, 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_76);
	StringCopy(&cLocal_76, "", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cLocal_76, ":", 64);
	StringConCat(&cLocal_76, " ", 64);
	if (&iLocal_343[Local_102.f_89] == 2)
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2(&(sLocal_262[Local_102.f_89])), 64);
	}
	if (&iLocal_343[Local_102.f_89] == 1)
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2(&(sLocal_262[Local_102.f_89])), 64);
	}
	if (&iLocal_343[Local_102.f_89] == 0)
	{
		StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2(&(sLocal_262[Local_102.f_89])), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_76);
	StringCopy(&cLocal_76, " ", 64);
	StringConCat(&cLocal_76, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FILTINTEN"), 64);
	StringConCat(&cLocal_76, ": ", 64);
	iLocal_27 = BUILTIN::CEIL((fLocal_24 * 100f));
	MISC::_INT_TO_STRING(iLocal_27, "%i", &cLocal_71);
	StringConCat(&cLocal_76, &cLocal_71, 64);
	StringConCat(&cLocal_76, "%", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_76);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
}

void func_114(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_77(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_78(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_152(iVar0);
	*uParam0 = 0;
}

void func_115(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_77(&(Local_102.f_1[iParam0])))
		{
			if (iParam0 == 16)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 17)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_PHOTO_MODE_FILTER_PREV"), joaat("INPUT_PHOTO_MODE_FILTER_NEXT"), 0);
			}
			else if (iParam0 == 24)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP"), joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN"), 0);
			}
			else if (iParam0 == 26)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_PHOTO_MODE_EXPOSURE_UP"), joaat("INPUT_PHOTO_MODE_EXPOSURE_DOWN"), 0);
			}
			else if (iParam0 == 13)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_PHOTO_MODE_ZOOM_OUT"), joaat("INPUT_PHOTO_MODE_ZOOM_IN"), 0);
			}
			else if (iParam0 == 21)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_PHOTO_MODE_LENSE_PREV"), joaat("INPUT_PHOTO_MODE_LENSE_NEXT"), 0);
			}
			else if (iParam0 == 22)
			{
				Local_102.f_1[iParam0] = func_154(func_153(iParam0), joaat("INPUT_PHOTO_MODE_ROTATE_LEFT"), joaat("INPUT_PHOTO_MODE_ROTATE_RIGHT"), 0);
			}
			else if (iParam0 == 25)
			{
				Local_102.f_1[iParam0] = func_155(func_153(iParam0), joaat("INPUT_PHOTO_MODE_CONTRAST"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (iParam0 == 28)
			{
				Local_102.f_1[iParam0] = func_155(func_153(iParam0), joaat("INPUT_PHOTO_MODE_DOF"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				HUD::_UIPROMPT_SET_ALLOWED_ACTION(((*Global_1945938)[&Local_102.f_1[iParam0] /*18*/])->f_3, joaat("INPUT_PHOTO_MODE_DOF_UP_ONLY"));
				HUD::_UIPROMPT_SET_ALLOWED_ACTION(((*Global_1945938)[&Local_102.f_1[iParam0] /*18*/])->f_3, joaat("INPUT_PHOTO_MODE_DOF_DOWN_ONLY"));
			}
			else if (iParam0 == 3)
			{
				if (Local_102.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_102.f_1[iParam0] = func_155(sVar0, func_156(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_102.f_1[iParam0] = func_155(func_153(iParam0), func_156(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				func_157(&(Local_102.f_1[iParam0]), 11, 1, 1);
			}
			if (bLocal_29)
			{
				func_158(&(Local_102.f_1[iParam0]), -857683846, 0, 1);
			}
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[&Local_102.f_1[iParam0] /*18*/])->f_3, true);
		}
		HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[&Local_102.f_1[iParam0] /*18*/])->f_3, 6);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	else if (func_77(&(Local_102.f_1[iParam0])))
	{
		func_114(Local_102.f_1[iParam0], 1, 1);
	}
}

void func_116(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	else
	{
		func_137();
	}
	func_159(&(Local_102.f_1[14]), bParam0, 0);
	func_159(&(Local_102.f_1[15]), bParam0, 0);
	func_159(&(Local_102.f_1[13]), bParam0, 0);
	func_159(&(Local_102.f_1[19]), bParam0, 0);
	func_159(&(Local_102.f_1[20]), bParam0, 0);
	func_159(&(Local_102.f_1[21]), bParam0, 0);
	func_159(&(Local_102.f_1[22]), bParam0, 0);
	func_159(&(Local_102.f_1[5]), bParam0, 0);
	func_159(&(Local_102.f_1[18]), bParam0, 0);
	func_159(&(Local_102.f_1[7]), bParam0, 0);
	func_159(&(Local_102.f_1[23]), bParam0, 0);
	func_159(&(Local_102.f_1[28]), bParam0, 0);
	func_159(&(Local_102.f_1[26]), bParam0, 0);
	func_159(&(Local_102.f_1[27]), bParam0, 0);
	func_159(&(Local_102.f_1[17]), bParam0, 0);
	func_159(&(Local_102.f_1[24]), bParam0, 0);
	func_159(&(Local_102.f_1[25]), bParam0, 0);
}

bool func_117(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_118(var uParam0)
{
	func_160(uParam0, 0f);
}

bool func_119(int iParam0)
{
	int iVar0;

	iVar0 = func_161(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_120(var uParam0)
{
	fLocal_216 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_216 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 60f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_55)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_In", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_55 = true;
			}
		}
		else if (bLocal_55)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_55 = false;
		}
	}
	else if (bLocal_55)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_55 = false;
	}
	if (fLocal_216 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 25f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_56)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_Out", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
}

void func_121(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_97 == 0)
	{
		if (func_49(&(uParam0->f_1[3])))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_0x6FB1DA3CA9DA7D90("DOF_Change", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			iLocal_98 = MISC::GET_GAME_TIMER();
			iLocal_97 = 1;
			iLocal_99 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_98) > 300 && iLocal_99 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = func_78(&(Local_102.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = func_78(&(Local_102.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar1 /*18*/])->f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
		iLocal_99 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_98) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_98) > 850)
		{
			iLocal_97 = 0;
			iLocal_99 = 0;
		}
	}
}

bool func_122(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_123(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_80(iParam0, 1);
	func_81(iParam0, 1);
	func_82(iParam0, 128);
}

bool func_124(var uParam0)
{
	return func_117(*uParam0, 2);
}

int func_125()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_126(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	fLocal_394 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	uParam0->f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_225 };
	uParam0->f_110 = 0;
	fLocal_231 = 0f;
	fLocal_395 = 0.5f;
	vLocal_232 = { uParam0->f_83 };
	vLocal_232.x = (vLocal_232.x + 1f);
	vLocal_235 = { vLocal_232 };
	uParam0->f_43.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_43.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		fVar0 = 50f;
		uParam0->f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_77, uParam0->f_83, fVar0, true, 2);
	}
	uParam0->f_33 = 25f;
	uParam0->f_33.f_1 = 2f;
	uParam0->f_33.f_2 = 128f;
	uParam0->f_33.f_3 = 30f;
	uParam0->f_33.f_4 = 30f;
	uParam0->f_33.f_5 = 90f;
	uParam0->f_33.f_6 = 1;
	uParam0->f_33.f_7 = 0;
	uParam0->f_33.f_8 = 1;
	uParam0->f_33.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
	CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
	CAM::_0x42ED56B02E05D109(uParam0->f_32, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_32, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_127()
{
	sLocal_249[0] = "portrait_normal";
	sLocal_249[1] = "portrait_happy";
	sLocal_249[2] = "portrait_pensive";
	sLocal_249[3] = "portrait_pensive_2";
	sLocal_249[4] = "portrait_relaxed";
	sLocal_249[5] = "portrait_angry";
	sLocal_249[6] = "portrait_angry_2";
	sLocal_249[7] = "portrait_annoyed";
}

void func_128()
{
	iLocal_383[0] = 0;
	iLocal_383[1] = 1;
	iLocal_383[2] = 2;
	iLocal_383[3] = 3;
	iLocal_383[4] = 4;
	iLocal_383[5] = 5;
	iLocal_383[6] = 6;
}

void func_129(var uParam0)
{
	fLocal_216 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_216 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 90f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_55)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_In", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_55 = true;
			}
		}
		else if (bLocal_55)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_55 = false;
		}
	}
	else if (bLocal_55)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_55 = false;
	}
	if (fLocal_216 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 30f)
		{
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_56)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Zoom_Out", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
}

float func_130(float fParam0, float fParam1)
{
	float fVar0;

	fVar0 = ((fParam0 - fParam1) + 180f);
	fVar0 = (fVar0 / 360f);
	fVar0 = (((fVar0 - IntToFloat(BUILTIN::FLOOR(fVar0))) * 360f) - 180f);
	return fVar0;
}

int func_131(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_162(bParam1, bParam2, bParam3);
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

Vector3 func_132(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_133()
{
	bLocal_393 = true;
	iLocal_392 = MISC::GET_GAME_TIMER();
	iLocal_391 = 1;
	func_16();
}

void func_134(var uParam0)
{
	func_163(uParam0);
	switch (&iLocal_383[uParam0->f_88])
	{
		case 0:
			func_164(Global_35);
			break;
		case 1:
			func_165(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_165(1904532698, "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_165(-22664287, "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_165(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			ENTITY::SET_ENTITY_HEADING(Global_35, (fLocal_394 + 180f));
			break;
		case 6:
			func_165(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

float func_135()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_136(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_77(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_137()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_58, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
}

void func_138()
{
	GRAPHICS::_0x37D7BDBA89F13959(sLocal_92);
}

bool func_139(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_140(int iParam0)
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

bool func_141(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_142(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_143(int iParam0)
{
	vector3 vVar0;

	if (!func_142(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_142(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_166(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_167("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_168(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_169(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_170(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_170(iVar1);
	}
	return 0;
}

int func_145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_142(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_166(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_171(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_172(bParam2), iParam0, 0);
	return uVar2;
}

void func_146(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_148(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_173(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_174(iParam0))
	{
		return 0;
	}
	if (func_175(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_176(iParam0, 1)) || func_177(32768))
	{
		if (!func_176(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_178())
	{
		return 0;
	}
	return 1;
}

void func_149(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_150()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	struct<2> Var0;

	if (!func_142(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_152(int iParam0)
{
	if (!func_179(iParam0))
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

char* func_153(int iParam0)
{
	if (func_26())
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_SAVE_PHOTO";
			case 2:
				return "CAM_PUT_AWAY";
			case 0:
				return "CAM_HANDHELD";
			case 3:
				return "CAM_FOCUS_LOCK";
			case 1:
				return "CAM_SELFIE";
			case 8:
				return "CAM_POSES";
			case 9:
				return "CAM_EXPRESSIONS";
			case 7:
				return "CAM_BACK";
			case 4:
				return "CAM_ZOOM";
			case 5:
				return "CAM_GALLERY";
			case 11:
				return "CAM_PM_MOVEMENT";
			case 12:
				return "CAM_PM_CAMERA";
			case 13:
				if (iLocal_240 == 2)
				{
					return "CAM_PM_HEIGHT";
				}
				else
				{
					return "CAM_PM_ZOOM";
				}
				break;
			case 14:
				return "CAM_PM_HUD_TOGGLE";
			case 15:
				return "CAM_PM_ORBIT_TOGGLE";
			case 16:
				return "CAM_PM_DOF";
			case 17:
				return "CAM_PM_FILTERS";
			case 18:
				return "CAM_SAVE_PHOTO";
			case 20:
				return "CAM_PM_RESET";
			case 21:
				return "CAM_PM_S_LENS";
			case 22:
				return "CAM_PM_ROTATE";
			case 23:
				return "CAM_PM_FOCLENGTH";
			case 24:
				return "CAM_PM_FILINTENS";
			case 25:
				return "CAM_PM_CONTRAST";
			case 26:
				return "CAM_PM_EXPOSURE";
			case 27:
				return "CAM_PM_EXPOLOCK";
			case 28:
				return "CAM_PM_APERTURE";
			case 19:
				if (func_14(&Local_102) == 14)
				{
					return "CAM_PM_B_MODE";
				}
				else if (func_14(&Local_102) == 12)
				{
					return "CAM_PM_A_MODE";
				}
				else if (func_14(&Local_102) == 13)
				{
					return "CAM_PM_E_MODE";
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_TAKE_PHOTO";
			case 2:
				return "CAM_PUT_AWAY";
			case 0:
				return "CAM_HANDHELD";
			case 3:
				return "CAM_FOCUS_LOCK";
			case 1:
				return "CAM_SELFIE";
			case 8:
				return "CAM_POSES";
			case 9:
				return "CAM_EXPRESSIONS";
			case 7:
				return "CAM_BACK";
			case 4:
				return "CAM_ZOOM";
			case 5:
				return "CAM_GALLERY";
			default:
				break;
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_154(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_122(iVar0, 2))
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
		func_123(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_155(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_122(iVar0, 2))
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
		func_123(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_PHOTO_MODE_BACK");
		case 0:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_DOF");
		case 1:
			return joaat("INPUT_CAMERA_SELFIE");
		case 4:
			return joaat("INPUT_CAMERA_ZOOM");
		case 8:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 9:
			return joaat("INPUT_CAMERA_POSE_PREV");
		case 6:
			return joaat("INPUT_CAMERA_TAKE_PHOTO");
		case 5:
			return joaat("INPUT_PHOTO_MODE_VIEW_PHOTOS");
		case 11:
			return joaat("INPUT_PHOTO_MODE_MOVE_LR");
		case 12:
			return joaat("INPUT_PHOTO_MODE_ROTATE_LEFT");
		case 13:
			return joaat("INPUT_PHOTO_MODE_ZOOM_OUT");
		case 14:
			return joaat("INPUT_PHOTO_MODE_TOGGLE_HUD");
		case 15:
			return joaat("INPUT_PHOTO_MODE_CHANGE_CAMERA");
		case 16:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 17:
			return joaat("INPUT_PHOTO_MODE_FILTER_PREV");
		case 18:
			return joaat("INPUT_PHOTO_MODE_TAKE_PHOTO");
		case 19:
			return joaat("INPUT_PHOTO_MODE_SWITCH_MODE");
		case 20:
			return joaat("INPUT_PHOTO_MODE_RESET");
		case 21:
			return joaat("INPUT_PHOTO_MODE_LENSE_NEXT");
		case 22:
			return joaat("INPUT_PHOTO_MODE_ROTATE_LEFT");
		case 23:
			return joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH");
		case 24:
			return joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP");
		case 25:
			return joaat("INPUT_PHOTO_MODE_CONTRAST");
		case 26:
			return joaat("INPUT_PHOTO_MODE_EXPOSURE_UP");
		case 27:
			return joaat("INPUT_PHOTO_MODE_EXPOSURE_LOCK");
		case 28:
			return joaat("INPUT_PHOTO_MODE_DOF");
		default:
			break;
	}
	return 0;
}

void func_157(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_159(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_77(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	func_80(iVar0, bParam1);
}

void func_160(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_135() - fParam1);
	func_180(uParam0, 1);
	func_181(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_161(int iParam0)
{
	if (!func_182(iParam0))
	{
		return -1;
	}
	return func_183(iParam0);
}

int func_162(bool bParam0, bool bParam1, bool bParam2)
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

void func_163(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), false, 1, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_394);
}

void func_164(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("motionstate_idle"), true, 0, false);
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
		TASK::TASK_STAND_STILL(iParam0, -1);
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0, 0);
	}
}

void func_165(int iParam0, char* sParam1)
{
	uLocal_396 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_219, fLocal_394, 0, 0, 1);
	TASK::_0x5AF19B6CC2115D34(uLocal_396, 25, 1);
	TASK::_0x5AF19B6CC2115D34(uLocal_396, 23, 1);
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, uLocal_396, sParam1, -1, 0, 1, 0, 0, 0f, 0);
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_142(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_184(iParam0, 1399091007))
	{
		func_185(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_167(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_172(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_168(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_169(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_170(int iParam0)
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

int func_171(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_186(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_188(&Var0, func_187(0));
	}
	if (!func_189(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_170(iVar14);
	return uVar15;
}

int func_172(bool bParam0)
{
	if (func_190() == -1)
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

bool func_173(int iParam0, int iParam1)
{
	if (func_190() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_174(int iParam0)
{
	if (func_190() != -1)
	{
		if (func_176(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_176(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_176(iParam0, 65536) && !func_176(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_176(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_176(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_177(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_178()
{
	return Global_1905944->f_5694;
}

bool func_179(int iParam0)
{
	return func_122(iParam0, 2);
}

void func_180(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_182(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_183(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_191(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_184(int iParam0, int iParam1)
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

void func_185(int iParam0, var uParam1, var uParam2)
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

struct<14> func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_187(bool bParam0)
{
	int iVar0;

	iVar0 = func_172(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_193(923904168, func_192(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_193(923904168, func_192(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_193(923904168, func_192(bParam0), -740156546, 0);
}

void func_188(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_189(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_172(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_190()
{
	return Global_1572887->f_12;
}

int func_191(int iParam0)
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

struct<4> func_192(bool bParam0)
{
	return func_193(joaat("character"), func_194(), -1591664384, bParam0);
}

struct<4> func_193(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_142(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_172(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_194()
{
	struct<4> Var0;

	return Var0;
}

