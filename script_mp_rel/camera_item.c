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
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	bool bLocal_25 = false;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	bool bLocal_28 = false;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	char cLocal_31[32] = "";
	char cLocal_35[32] = "";
	char* sLocal_39 = NULL;
	char* sLocal_40 = NULL;
	char* sLocal_41 = NULL;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = false;
	struct<97> Local_51 = { 1, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_148 = 0f;
	int iLocal_149 = 0;
	float fLocal_150 = 0f;
	bool bLocal_151 = false;
	int iLocal_152 = 0;
	vector3 vLocal_153 = { 0f, 0f, 0f };
	vector3 vLocal_156 = { 0f, 0f, 0f };
	vector3 vLocal_159 = { 0f, 0f, 0f };
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	vector3 vLocal_166 = { 0f, 0f, 0f };
	bool bLocal_169 = false;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = false;
	char* sLocal_179[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	bool bLocal_202 = false;
	float fLocal_203 = 0f;
	float fLocal_204 = 0f;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_15 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_16 = "facials@gen_male@portrait";
	StringCopy(&cLocal_31, "", 32);
	StringCopy(&cLocal_35, "", 32);
	sLocal_39 = "CameraViewfinder";
	sLocal_40 = "CameraTakePicture";
	sLocal_41 = "CameraTransitionBlink";
	bLocal_50 = true;
	fLocal_165 = 0f;
	fLocal_204 = 0.5f;
	iLocal_206 = 4;
	iLocal_207 = -1534086282;
	iLocal_209 = joaat("DOMINOS_SET_1");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_51, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_50)
	{
		if (iLocal_21 == 1)
		{
			func_3();
		}
		if (func_4(Local_51.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1958009, 5))
			{
				func_5(Local_51.f_1[2], 0, 1, 1);
			}
			else
			{
				func_5(Local_51.f_1[2], 1, 1, 1);
			}
		}
		if (func_4(Local_51.f_1[8], 1))
		{
			if (bLocal_202)
			{
				func_5(Local_51.f_1[8], 0, 1, 1);
			}
			else
			{
				func_5(Local_51.f_1[8], 1, 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(1048576);
		func_6(32768);
		func_6(65536);
		func_6(128);
		func_6(256);
		func_6(512);
		func_6(1024);
		func_6(2048);
		func_6(4096);
		func_6(16384);
		func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_50)
		{
			if (func_7(&Local_51))
			{
				bLocal_50 = true;
			}
			else
			{
				bLocal_50 = false;
			}
		}
		func_8(Local_51);
		func_9(&Local_51);
		func_10(&(Local_51.f_73), &(Local_51.f_74), &(Local_51.f_77), &(Local_51.f_78), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (func_11(Local_51.f_1[2], 1) || func_11(Local_51.f_1[7], 1))
		{
			iLocal_42 = 1;
			if (func_12(&Local_51) == 3)
			{
				func_13(&Local_51, 12);
			}
			else if (func_12(&Local_51) != 6)
			{
			}
			else
			{
				func_14();
				if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				iLocal_177 = MISC::GET_GAME_TIMER();
				bLocal_178 = true;
				func_15();
				Global_1958006 = 0;
				func_13(&Local_51, 4);
			}
		}
		func_16(&Local_51);
		iVar0 = func_12(&Local_51);
		if (func_17())
		{
		}
		func_18(&(Local_51.f_51));
		func_19(&(Local_51.f_51));
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					iLocal_21 = 0;
					uLocal_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_29, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_13(&Local_51, 1);
				}
				else
				{
					if (func_22(&Local_51))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_21 = 1;
						func_23(&Local_51);
					}
					func_13(&Local_51, 1);
				}
				break;
			case 1:
				if (func_22(&Local_51))
				{
					func_24();
					func_23(&Local_51);
				}
				func_25();
				iLocal_17 = MISC::GET_GAME_TIMER();
				func_13(&Local_51, 2);
				break;
			case 2:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				if (func_26(iLocal_17) && func_27(Global_34, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA"))
				{
					func_13(&Local_51, 3);
				}
				break;
			case 4:
				func_9(&Local_51);
				func_28();
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				if (bLocal_178)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_177) > 500)
					{
						HUD::_DISPLAY_HUD_COMPONENT(959420967);
						CAM::SET_CAM_ACTIVE(Local_51.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_51.f_14);
						CAM::DESTROY_CAM(Local_51.f_14, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_13(&Local_51, 3);
						func_29();
						bLocal_178 = false;
						func_30();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_170) > 100)
				{
					func_31();
					iLocal_170 = MISC::GET_GAME_TIMER();
				}
				if (func_22(&Local_51))
				{
					func_32(&Local_51);
					func_33(3);
					func_34(1);
					func_23(&Local_51);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_42 == 1 && Global_1958007 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_42 = 0;
					}
					else
					{
						iLocal_42 = 1;
					}
				}
				if (Global_1958007 != 1)
				{
				}
				else
				{
					iLocal_42 = 0;
				}
				if (bLocal_169 && iLocal_42 == 0)
				{
					func_5(Local_51.f_1[0], 1, 1, 1);
					if (func_35(Local_51.f_1[0], 1) || Global_1958007 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						if (Global_1958007 == 1)
						{
							Global_1958007 = 0;
						}
						Global_1958006 = 1;
						func_15();
						HUD::_HIDE_HUD_COMPONENT(959420967);
						func_36();
						iLocal_149 = MISC::GET_GAME_TIMER();
						func_13(&Local_51, 5);
					}
				}
				else
				{
					func_5(Local_51.f_1[0], 0, 1, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_152) > 600)
				{
					func_37();
					iLocal_152 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_151)
				{
					func_5(Local_51.f_1[1], 1, 1, 1);
					if (func_35(Local_51.f_1[1], 1))
					{
						if (func_38(Global_34, 0))
						{
						}
						else
						{
							iLocal_174 = 0;
							iLocal_176 = 0;
							func_15();
							func_13(&Local_51, 8);
							if (!func_39(&uLocal_171))
							{
								func_40(&uLocal_171, 1);
							}
							if (!Local_51.f_95)
							{
								Local_51.f_95 = 1;
								PED::_0xC6136B40FFFB778B(Local_51.f_95);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_34, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(Local_51.f_1[1], 0, 1, 1);
				}
				break;
			case 5:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_28();
				if (func_41() && (MISC::GET_GAME_TIMER() - iLocal_149) > 500)
				{
					func_42();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					Local_51.f_52 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
					Local_51.f_55 = { ENTITY::GET_ENTITY_ROTATION(Global_34, 2) };
					Local_51.f_67 = { Local_51.f_55, Local_51.f_55.f_1, Local_51.f_55.f_2 };
					Local_51.f_61 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_51.f_52, Local_51.f_55.f_2, 0f, 0.3f, 0.5f) };
					Local_51.f_93 = 0;
					Local_51.f_67 = { 0f, 0f, 0f };
					Local_51.f_66 = 0f;
					Local_51.f_65 = 0f;
					Local_51.f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_51.f_61, Local_51.f_67, 65f, false, 2);
					fLocal_148 = Local_51.f_55.f_2;
					if (func_43() != 0)
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_51.f_14, Global_34, 21030, 0f, 0.2f, 0f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_51.f_14, Global_34, 21030, 0f, 0.6f, 0f, true);
					}
					CAM::SET_CAM_NEAR_CLIP(Local_51.f_14, 0.25f);
					Local_51.f_15 = 5f;
					Local_51.f_15.f_1 = 2f;
					Local_51.f_15.f_2 = 128f;
					Local_51.f_15.f_3 = 25f;
					Local_51.f_15.f_4 = 25f;
					Local_51.f_15.f_5 = 60f;
					Local_51.f_15.f_6 = 1;
					Local_51.f_15.f_7 = 0;
					Local_51.f_15.f_8 = 1;
					Local_51.f_15.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_51.f_14, &(Local_51.f_15));
					CAM::_0x9F97E85EC142255E(Local_51.f_14, Local_51.f_93);
					CAM::_0x42ED56B02E05D109(Local_51.f_14, false);
					CAM::SET_CAM_ACTIVE(Local_51.f_14, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_34, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_37();
					iLocal_152 = MISC::GET_GAME_TIMER();
					func_30();
					GRAPHICS::_0x9F6D859C80708B26(1, 0);
					func_13(&Local_51, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				if (iLocal_43 == 0)
				{
					if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
					{
						Global_1958008 = 1;
						iLocal_43 = 1;
					}
				}
				if (MISC::IS_BIT_SET(Global_1958009, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_51))
				{
					func_33(6);
					func_23(&Local_51);
				}
				func_44(&Local_51);
				if (iLocal_46 == 0)
				{
					if (func_45(Local_51.f_1[6]) && !func_46(&Local_51, 32))
					{
						func_32(&Local_51);
						if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_34, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
						}
						func_47(1);
						func_48(&Local_51, 32);
					}
					if (!func_46(&Local_51, 32))
					{
						if (func_45(Local_51.f_1[5]))
						{
							func_49();
						}
					}
				}
				break;
			case 11:
				if (func_22(&Local_51))
				{
					Local_51.f_1[6] = func_50("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_34, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_34(1);
					func_51("CAM_SNAP", 0, 0, 1);
					func_23(&Local_51);
				}
				if (func_52())
				{
					if (!func_46(&Local_51, 16))
					{
						func_13(&Local_51, 3);
					}
					else
					{
						func_13(&Local_51, 13);
					}
				}
				else
				{
					func_53(&Local_51);
				}
				break;
			case 10:
				func_54(&Local_51);
				func_28();
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				iLocal_42 = 1;
				if (iLocal_175 == 0)
				{
					if (func_55(&uLocal_171) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_51.f_14))
						{
							CAM::SET_CAM_ACTIVE(Local_51.f_14, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_51.f_14, false);
						}
						if (func_56())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
							ENTITY::SET_ENTITY_HEADING(Global_34, fLocal_203);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, true, true, true, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_29();
						iLocal_175 = 1;
					}
				}
				if (func_55(&uLocal_171) > 1000)
				{
					HUD::_DISPLAY_HUD_COMPONENT(959420967);
					func_30();
					func_57(&uLocal_171);
					func_14();
					func_13(&Local_51, 3);
				}
				break;
			case 8:
				func_54(&Local_51);
				func_28();
				if (iLocal_174 == 0)
				{
					if (func_55(&uLocal_171) > 500)
					{
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, false, false, true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_34, vLocal_153, fLocal_164, true, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						func_42();
						bLocal_202 = false;
						iLocal_174 = 1;
					}
				}
				if (iLocal_174 == 1)
				{
					if (iLocal_176 == 0)
					{
						if (func_55(&uLocal_171) > 300)
						{
							iLocal_176 = 1;
							func_58(&Local_51);
						}
					}
					else if (func_55(&uLocal_171) > 1000)
					{
						func_57(&uLocal_171);
						func_59(&Local_51);
						func_30();
						GRAPHICS::_0x9F6D859C80708B26(1, 0);
						func_13(&Local_51, 9);
					}
				}
				break;
			case 9:
				func_54(&Local_51);
				CAM::_0x3C8F74E8FE751614();
				if (Local_51.f_95)
				{
					Local_51.f_95 = 0;
					PED::_0xC6136B40FFFB778B(Local_51.f_95);
				}
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_59(&Local_51);
				if (func_35(Local_51.f_1[6], 1) && !func_46(&Local_51, 32))
				{
					func_32(&Local_51);
					if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_34, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
					}
					func_47(1);
					func_48(&Local_51, 32);
				}
				else if (func_35(Local_51.f_1[1], 1))
				{
					if (!Local_51.f_95)
					{
						Local_51.f_95 = 1;
						PED::_0xC6136B40FFFB778B(Local_51.f_95);
					}
					func_13(&Local_51, 8);
				}
				if (!func_46(&Local_51, 32))
				{
					if (func_45(Local_51.f_1[5]))
					{
						func_49();
					}
				}
				break;
			case 7:
				break;
			case 12:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_32(&Local_51);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_34, 1, 0, 0, 0);
				func_13(&Local_51, 13);
				break;
			case 13:
				if (func_22(&Local_51))
				{
					func_23(&Local_51);
				}
				func_2();
				func_1(&Local_51, 1);
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
				{
				}
				else if (func_56())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_60())
		{
			if (func_61(&uLocal_188) > 1f)
			{
				func_62();
			}
		}
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
	{
	}
	else if (func_56())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, false, true);
	}
	func_2();
	func_1(&Local_51, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	func_63();
	func_64(&(uParam0->f_51));
	GRAPHICS::_0x9F6D859C80708B26(0, 0);
	if (uParam0->f_95)
	{
		uParam0->f_95 = 0;
		PED::_0xC6136B40FFFB778B(uParam0->f_95);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISPLAY_HUD_COMPONENT(959420967);
	Global_1958006 = 0;
	Global_1958007 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
	STREAMING::REMOVE_CLIP_SET(sLocal_16);
	STREAMING::REMOVE_ANIM_DICT(sLocal_15);
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_32(uParam0);
	func_34(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_DATABASE_DELETE("CAMERA");
}

void func_2()
{
	if (iLocal_19 == 1)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_45);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_29);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_208))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_208);
	}
	iLocal_208 = 0;
	func_29();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_41);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	func_14();
	if (TASK::GET_IS_TASK_ACTIVE(Global_34, 3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	}
}

void func_3()
{
	Local_51.f_89 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_51.f_89 == 1)
	{
	}
	if (Local_51.f_89 == 0)
	{
		bLocal_20 = false;
		iLocal_22 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_23 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		uLocal_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_29, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_65();
		iLocal_21 = 0;
		bLocal_25 = true;
		iLocal_26 = MISC::GET_GAME_TIMER();
	}
	else if (Local_51.f_89 == 2)
	{
		bLocal_20 = true;
		uLocal_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_29, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_21 = 0;
		bLocal_25 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (bParam1)
	{
		func_68(iParam0, 4);
		if (bParam3)
		{
			func_69(iVar0, 1);
		}
		func_70(iVar0, 1);
	}
	else
	{
		func_71(iParam0, 4);
		func_70(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1940144.f_39 = (Global_1940144.f_39 || iParam0);
}

bool func_7(var uParam0)
{
	if (Global_1958008 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1958008 = 0;
		return false;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_34) > 0.33f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (PED::_0x7FC84E85D98F063D(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (PED::_IS_PED_LASSOED(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (func_72())
	{
		if ((func_73(16) || func_73(37)) || func_74(Global_1915715.f_20241.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_75(Global_34, 0))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_34) || PED::IS_PED_INJURED(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_76(joaat("WEAPON_KIT_CAMERA"), 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (func_12(uParam0) == 8)
	{
	}
	if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
	{
		if (func_27(Global_34, 1, 0, 1) != joaat("WEAPON_KIT_CAMERA"))
		{
			if (func_77(uParam0) == 0)
			{
				return false;
			}
		}
	}
	if (func_78())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_34, true)))
	{
		func_79("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (Global_1940258.f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	return true;
}

void func_8(struct<91> Param0, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_34, 129, true);
	PED::SET_PED_RESET_FLAG(Global_34, 173, true);
	if (Param0.f_90 == 9)
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
	if (!Param0.f_90 == 3)
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
	if (func_80(Global_34))
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

void func_9(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((func_12(uParam0) == 8 || func_12(uParam0) == 9) || func_12(uParam0) == 10) || func_12(uParam0) == 5) || func_12(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_90 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_81(0);
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
	if (CAM::DOES_CAM_EXIST(uParam0->f_13) && CAM::IS_CAM_ACTIVE(uParam0->f_13))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

bool func_11(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_90;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_90 = iParam1;
	func_82(uParam0);
}

void func_14()
{
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_41);
	}
}

void func_16(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_4(uParam0->f_1[6], 1))
	{
		if (uParam0->f_91 == 0 && iLocal_21 == 0)
		{
			func_5(uParam0->f_1[6], 1, 1, 1);
			if (bLocal_25)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_26) > 2500)
				{
					iLocal_22 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
					func_65();
					iLocal_26 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			func_5(uParam0->f_1[6], 0, 1, 1);
		}
	}
	switch (uParam0->f_91)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_45);
				bLocal_20 = true;
				func_83(uParam0, 2);
				iLocal_19 = 0;
			}
			break;
		case 0:
			if (func_46(uParam0, 32))
			{
				func_32(uParam0);
				if (func_20() || bLocal_20)
				{
					func_84(uParam0);
					func_83(uParam0, 2);
				}
				else if (iLocal_22 == iLocal_23)
				{
					func_84(uParam0);
					if (iLocal_45 == 0)
					{
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_45 = func_85(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_83(uParam0, 1);
						iLocal_19 = 1;
					}
					else
					{
						bLocal_20 = true;
						func_83(uParam0, 2);
					}
				}
				else
				{
					func_83(uParam0, 2);
				}
			}
			if (func_46(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_83(uParam0, 7);
			}
			break;
		case 2:
			Local_51.f_96 = 0;
			func_47(0);
			func_83(uParam0, 3);
			iLocal_49 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_49) > 0)
			{
				iLocal_49 = MISC::GET_GAME_TIMER();
				func_29();
				func_86();
				if (func_20() || bLocal_20)
				{
					func_83(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_22++;
					func_65();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_83(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_89 == 1)
			{
			}
			if (uParam0->f_89 == 0)
			{
				StringCopy(&cVar19, "", 32);
				iVar23 = func_87();
				if (func_88(iVar23))
				{
					MemCopy(&cVar19, {func_89(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_90();
					StringCopy(&cVar19, func_91(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_92();
				if (func_93(iVar29))
				{
					StringCopy(&cVar25, func_94(iVar29), 16);
					StringCopy(&cVar27, func_95(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				func_84(uParam0);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_24 = 0;
				func_83(uParam0, 6);
			}
			else if (uParam0->f_89 == 2)
			{
				func_83(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_24 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_42();
				func_33(func_12(uParam0));
				func_5(uParam0->f_1[6], 0, 1, 1);
				func_96(691, 0);
				iLocal_24 = 1;
			}
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_89 == 0)
			{
				Local_51.f_96 = 1;
				func_97(uParam0, 32);
				func_83(uParam0, 0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_89 == 2)
			{
				Local_51.f_96 = 1;
				func_97(uParam0, 32);
				func_83(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_49) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_97(uParam0, 32);
				func_83(uParam0, 0);
				func_42();
				func_33(func_12(uParam0));
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_96(691, 0);
			}
			break;
		case 7:
			uParam0->f_89 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_89 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_48(uParam0, 256);
				func_97(uParam0, 128);
				func_83(uParam0, 0);
			}
			else if (uParam0->f_89 == 2)
			{
				func_97(uParam0, 128);
				func_83(uParam0, 0);
			}
			break;
	}
}

bool func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

void func_18(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || func_98(Global_1301321, 16))
	{
		func_99(uParam0);
	}
}

void func_19(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || func_98(Global_1301321, 16))
	{
		func_100();
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
		{
			return;
		}
		func_101(uParam0);
	}
	if (func_98(Global_1301321, 16))
	{
		func_102(&Global_1301321, 16);
	}
}

bool func_20()
{
	return Global_1958005;
}

void func_21()
{
	StringCopy(&cLocal_31, "-", 32);
	StringConCat(&cLocal_31, " / ", 32);
	StringCopy(&cLocal_35, "-", 32);
	StringConCat(&cLocal_31, &cLocal_35, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_30, &cLocal_31);
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
	func_63();
	Global_1301321.f_1 = ITEMSET::CREATE_ITEMSET(true);
}

void func_25()
{
	HUD::_TEXT_DATABASE_REQUEST("CAMERA");
	STREAMING::REQUEST_ANIM_DICT(sLocal_15);
	STREAMING::REQUEST_CLIP_SET(sLocal_16);
	GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
}

bool func_26(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
	{
		iVar0 = 0;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
	{
		iVar0 = 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMERA"))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_16))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_15))
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
	return iVar0;
}

int func_27(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_28()
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

void func_29()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_39))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_39);
	}
}

void func_30()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_41);
	}
}

void func_31()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	vLocal_156 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_34);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, 0f, 2f, -0.2f) };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, -0.75f, 0f, 0f) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, 0.75f, 0f, 0f) };
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
	{
		bLocal_169 = false;
		return;
	}
	if ((ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar1.x, vVar1.y, vVar1.z, 3167) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar4.x, vVar4.y, vVar4.z, 3167)) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar7.x, vVar7.y, vVar7.z, 3167))
	{
		bLocal_169 = true;
	}
	else
	{
		bLocal_169 = false;
	}
}

void func_32(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_66(uParam0->f_1[iVar0]))
		{
			func_103(&(uParam0->f_1[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_104(6, 0);
			func_104(3, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			func_104(4, 0);
			func_104(5, 0);
			func_104(0, 1);
			func_104(1, 1);
			func_104(2, 1);
			break;
		case 6:
			func_104(0, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 8:
			func_104(0, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(8, 1);
			func_104(9, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 9:
			func_104(0, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(8, 1);
			func_104(9, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 10:
			func_104(2, 0);
			func_104(0, 0);
			func_104(3, 0);
			func_104(1, 0);
			func_104(5, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			func_104(6, 0);
			func_104(9, 0);
			func_104(4, 0);
			break;
		case 7:
			func_104(2, 0);
			func_104(0, 0);
			func_104(6, 0);
			func_104(4, 0);
			func_104(5, 0);
			func_104(1, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			break;
	}
}

void func_34(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_36()
{
	if (iLocal_206 == 0)
	{
		iLocal_206 = 1;
	}
}

void func_37()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_156 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_34);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar0, 0f, 4f, 0f) };
	if (func_105(PLAYER::PLAYER_ID(), 1))
	{
		vVar1.f_2 = (vVar1.z + 1f);
	}
	else
	{
		vVar1.f_2 = (vVar1.z + 50f);
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_156, &uVar5, false);
	if ((vLocal_156.z - fVar4) > 3f)
	{
		bLocal_151 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_151 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_156, 2f) > 0)
	{
		bLocal_151 = false;
		return;
	}
	if ((fVar4 - vLocal_156.z) > 1f)
	{
		bLocal_151 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (func_38(Global_34, 0))
	{
		bLocal_151 = false;
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_34))
	{
		bLocal_151 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_151 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_151 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_151 = true;
	}
	else
	{
		bLocal_151 = false;
	}
	if (bLocal_151)
	{
		vLocal_153 = { vLocal_156.x, vLocal_156.y, (vLocal_156.z - 1f) };
		fLocal_164 = fVar0;
		vLocal_159 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_38(int iParam0, int iParam1)
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

bool func_39(var uParam0)
{
	return func_106(*uParam0, 1);
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_39(uParam0))
	{
		func_107(uParam0);
	}
}

bool func_41()
{
	switch (iLocal_206)
	{
		case 0:
			if (iLocal_207 == iLocal_209)
			{
			}
			break;
		case 1:
			iLocal_208 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_207);
			iLocal_206 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_208))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_208, iLocal_209);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_208);
				iLocal_206 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_42()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_39))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_39);
	}
}

int func_43()
{
	return Global_1572887.f_13;
}

void func_44(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;

	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
	if (uParam0->f_73 > 0 && IntToFloat(uParam0->f_73) > 89f)
	{
		uParam0->f_73 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_73 < 0 && IntToFloat(uParam0->f_73) < -89f)
	{
		uParam0->f_73 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_74 > 0 && IntToFloat(uParam0->f_74) > 89f)
	{
		uParam0->f_74 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_74 < 0 && IntToFloat(uParam0->f_74) < -89f)
	{
		uParam0->f_74 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_73 != uParam0->f_75)
	{
		uParam0->f_75 = uParam0->f_73;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_73) - -89f) / (89f - -89f));
		uParam0->f_81 = fVar0;
	}
	else
	{
		uParam0->f_85 = 0f;
	}
	if (uParam0->f_74 != uParam0->f_76)
	{
		uParam0->f_76 = uParam0->f_74;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_74) - -89f) / (89f - -89f));
		uParam0->f_82 = fVar1;
	}
	else
	{
		uParam0->f_86 = 0f;
	}
	fVar4 = 50f;
	fVar5 = -25f;
	fVar2 = 68f;
	fVar3 = -85f;
	fVar9 = uParam0->f_65;
	fVar10 = uParam0->f_66;
	fVar8 = -1f;
	if (uParam0->f_77 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_77 = MISC::ABSI(uParam0->f_77);
	}
	fVar6 = ((BUILTIN::TO_FLOAT(uParam0->f_77) - 0f) / (89f - 0f));
	fVar9 = (fVar9 + (fVar6 * fVar8));
	if (fVar9 >= fVar2)
	{
		fVar9 = fVar2;
	}
	else if (fVar9 < fVar3)
	{
		fVar9 = fVar3;
	}
	uParam0->f_65 = fVar9;
	fVar8 = -1f;
	if (uParam0->f_78 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_78 = MISC::ABSI(uParam0->f_78);
	}
	fVar7 = ((BUILTIN::TO_FLOAT(uParam0->f_78) - 0f) / (89f - 0f));
	fVar10 = (fVar10 + (fVar7 * fVar8));
	if (fVar10 >= fVar4)
	{
		fVar10 = fVar4;
	}
	else if (fVar10 < fVar5)
	{
		fVar10 = fVar5;
	}
	uParam0->f_66 = fVar10;
	uParam0->f_67 = { Vector(fLocal_148, 0f, 0f) + Vector(uParam0->f_65, 0f, uParam0->f_66) };
	func_108(uParam0);
	func_109(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_61, uParam0->f_67, 50f, 0, 1, 1, 2, 0, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_170) > 100)
	{
		if (iLocal_44 == 0)
		{
			fVar11 = ENTITY::GET_ENTITY_HEADING(Global_34);
			vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_156, fVar11, 0f, 0.25f, 0f) };
			func_31();
			if ((!ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar12.x, vVar12.y, vVar12.z, 3167) || !ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, uParam0->f_61, 3167)) || bLocal_169 == 0)
			{
				if (func_43() == 0 && PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
				{
				}
				else if (PED::IS_PED_IN_ANY_BOAT(Global_34))
				{
				}
				else
				{
					Global_1958008 = 1;
					iLocal_44 = 1;
				}
			}
		}
		iLocal_170 = MISC::GET_GAME_TIMER();
	}
}

bool func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_67(iParam0);
	iVar1 = Global_1951255[iVar0 /*23*/].f_4;
	return (func_35(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0->f_92 && iParam1) != 0;
}

void func_47(int iParam0)
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

void func_48(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 || iParam1);
}

void func_49()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_110(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951255[iVar0 /*23*/].f_11 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951255[iVar0 /*23*/])
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
				func_111(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

var func_51(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_79(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_52()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

int func_53(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !func_46(uParam0, 32))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CLICK", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
		func_47(1);
		func_48(uParam0, 32);
	}
	return 1;
}

void func_54(var uParam0)
{
	vLocal_156 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	if (!PED::_IS_PED_LASSOED(Global_34))
	{
		if (func_43() == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_156, vLocal_153, true) > 20f)
			{
				Global_1958008 = 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_156, vLocal_153, true) > 3f)
			{
				Global_1958008 = 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_156, vLocal_153, true) > 3f)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_34, vLocal_153, fLocal_164, true, false, true);
			ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

int func_55(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 0;
	}
	if (func_112(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_113() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_56()
{
	if (PED::_0x3BDFCF25B58B0415(Global_34) == 0 && PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		return true;
	}
	return false;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0)
{
	if (func_22(uParam0))
	{
		func_33(8);
		func_23(uParam0);
	}
	func_114(uParam0);
	func_115();
	func_116();
	uParam0->f_72 = 0;
	iLocal_200 = 0;
	bLocal_162 = true;
	bLocal_163 = false;
	HUD::_HIDE_HUD_COMPONENT(959420967);
}

void func_59(var uParam0)
{
	func_117(uParam0);
	if (uParam0->f_77 > 16)
	{
		if ((fLocal_165 - 0.07f) > -10f)
		{
			if (uParam0->f_77 > 100)
			{
				vLocal_166.f_2 = (vLocal_166.z - 0.6f);
				fLocal_165 = (fLocal_165 - (0.07f * 3f));
			}
			else
			{
				vLocal_166.f_2 = (vLocal_166.z - 0.2f);
				fLocal_165 = (fLocal_165 - 0.07f);
			}
		}
	}
	if (uParam0->f_77 < -16)
	{
		if ((fLocal_165 + 0.07f) < 10f)
		{
			if (uParam0->f_77 < -100)
			{
				vLocal_166.f_2 = (vLocal_166.z + 0.6f);
				fLocal_165 = (fLocal_165 + (0.07f * 3f));
			}
			else
			{
				vLocal_166.f_2 = (vLocal_166.z + 0.2f);
				fLocal_165 = (fLocal_165 + 0.07f);
			}
		}
	}
	if (uParam0->f_78 > 16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_204 - 0.07f) > -10f)
		{
			if (uParam0->f_78 > 100)
			{
				vLocal_166.x = (vLocal_166.x - 0.6f);
				fLocal_204 = (fLocal_204 - (0.07f * 3f));
			}
			else
			{
				vLocal_166.x = (vLocal_166.x - 0.2f);
				fLocal_204 = (fLocal_204 - 0.07f);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_204 + 0.07f) < 10f)
		{
			if (uParam0->f_78 < -100)
			{
				vLocal_166.x = (vLocal_166.x + 0.6f);
				fLocal_204 = (fLocal_204 + (0.07f * 3f));
			}
			else
			{
				vLocal_166.x = (vLocal_166.x + 0.2f);
				fLocal_204 = (fLocal_204 + 0.07f);
			}
		}
	}
	if (bLocal_162)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vLocal_159, 3167))
		{
			bLocal_163 = false;
		}
		else
		{
			bLocal_163 = true;
		}
		bLocal_162 = false;
	}
	if ((func_35(uParam0->f_1[7], 1) || func_38(Global_34, 0)) || bLocal_163)
	{
		if (func_38(Global_34, 0))
		{
			if (func_118(Global_34, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_34, true, false);
			}
		}
		else if (func_119(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		GRAPHICS::_0x9F6D859C80708B26(0, 0);
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_34, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_175 = 0;
		func_32(uParam0);
		func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, "portrait_normal", sLocal_15);
		if (!func_39(&uLocal_171))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_40(&uLocal_171, 1);
		}
	}
	if (func_120(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_191 == 0)
		{
			uParam0->f_71++;
			if (uParam0->f_71 == 8)
			{
				uParam0->f_71 = 0;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, sLocal_179[uParam0->f_71], sLocal_15);
		}
	}
	if (func_120(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_191 == 0)
		{
			uParam0->f_71 = (uParam0->f_71 - 1);
			if (uParam0->f_71 < 0)
			{
				uParam0->f_71 = 7;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, sLocal_179[uParam0->f_71], sLocal_15);
		}
	}
	uParam0->f_26 = { func_121(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_34) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_34, &(uParam0->f_26));
	if (bLocal_202 == 0)
	{
		if (func_120(uParam0->f_1[8], 1, 1))
		{
			bLocal_202 = true;
			uParam0->f_72++;
			if (uParam0->f_72 == 7)
			{
				uParam0->f_72 = 0;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_122();
		}
	}
	if (bLocal_202 == 0)
	{
		if (func_120(uParam0->f_1[8], 0, 1))
		{
			bLocal_202 = true;
			uParam0->f_72 = (uParam0->f_72 - 1);
			if (uParam0->f_72 < 0)
			{
				uParam0->f_72 = 6;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_122();
		}
	}
	if (bLocal_202)
	{
		switch (iLocal_200)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_201) > 200)
				{
					iLocal_200 = 2;
				}
				break;
			case 2:
				func_123(uParam0);
				iLocal_200 = 3;
				iLocal_201 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_201) > 500)
				{
					iLocal_200 = 4;
					iLocal_201 = MISC::GET_GAME_TIMER();
					func_30();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_201) > 700)
				{
					iLocal_200 = 0;
					bLocal_202 = false;
				}
				break;
			default:
				break;
		}
	}
	func_109(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_61, vLocal_166, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_60()
{
	return iLocal_191;
}

float func_61(var uParam0)
{
	if (!func_39(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_112(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_124() - uParam0->f_1);
}

void func_62()
{
	func_57(&uLocal_188);
	iLocal_191 = 0;
}

void func_63()
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1301321.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1301321.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1301321.f_1);
	}
}

void func_64(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_65()
{
	StringCopy(&cLocal_31, "", 32);
	MISC::_INT_TO_STRING(iLocal_22, "%i", &cLocal_31);
	StringConCat(&cLocal_31, " / ", 32);
	StringCopy(&cLocal_35, "", 32);
	MISC::_INT_TO_STRING(iLocal_23, "%i", &cLocal_35);
	StringConCat(&cLocal_31, &cLocal_35, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_30, &cLocal_31);
}

bool func_66(int iParam0)
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

int func_67(int iParam0)
{
	return iParam0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_69(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_110(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

bool func_72()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

int func_73(int iParam0)
{
	if (func_72())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;

	if (!func_125(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
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
	if (func_98(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_98(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_98(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_76(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_127(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_128(iParam0);
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
			if (!func_129(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_130(iParam0))
			{
				return true;
			}
			break;
	}
	return func_131(iParam0, 0, 0, 0) >= iParam1;
}

int func_77(var uParam0)
{
	return uParam0->f_91;
}

bool func_78()
{
	return Global_1940311.f_1;
}

var func_79(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_80(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		func_132(4);
	}
	func_132(2);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

void func_82(var uParam0)
{
	*uParam0 = 1;
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_91 = iParam1;
}

void func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	bVar3 = false;
	if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
	{
		iVar2 = 1;
	}
	else
	{
		iVar2 = 0;
	}
	GRAPHICS::_0x2705D18C11B61046(iVar2);
	if (ITEMSET::IS_ITEMSET_VALID(Global_1301321.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) > 0)
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1301321.f_1) - 1))
		{
			iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, Global_1301321.f_1));
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 != uParam0->f_25)
			{
				bVar3 = true;
				uParam0->f_25 = iVar1;
			}
			iVar4++;
		}
	}
	if (bVar3)
	{
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1301321.f_1);
	}
	TELEMETRY::_TELEMETRY_PHOTO_CAM(-1124919603, 0, 0f, iVar2, uParam0->f_93, BUILTIN::FLOOR(uParam0->f_15.f_3), iVar1, func_134(func_133(0)));
}

int func_85(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_86()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_40))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_40);
	}
}

int func_87()
{
	return Global_1893587.f_2;
}

bool func_88(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_89(int iParam0)
{
	char[] cVar0[8];

	if (!func_88(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887339[iParam0 /*36*/].f_23;
}

int func_90()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_35);
}

char* func_91(int iParam0)
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

int func_92()
{
	return Global_1896622.f_41;
}

bool func_93(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_94(int iParam0)
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
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_95(int iParam0)
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
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_135(iParam0, &iVar0, &iVar1);
	if (!func_136(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_137(iVar0, iVar1);
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 - (uParam0->f_92 && iParam1));
}

bool func_98(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_99(var uParam0)
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
	ENTITY::_0x59B57C4B06531E1E(ENTITY::GET_ENTITY_COORDS(Global_34, true, false), func_138(), iVar0, 1);
	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_139(Global_34, iVar1, 1, 1) > (func_138() + 10f)) || func_140(iVar3, 1))
			{
				func_141(iVar1, *uParam0);
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
			if (!func_142(iVar3, 0) && !func_140(iVar3, 1))
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
				iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (PED::IS_PED_A_PLAYER(iVar3) && !PED::_0x0E2F43516F998269(iVar3))
				{
					bVar4 = true;
				}
				if (func_143(iVar3))
				{
					if (func_144(iVar3))
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
					if (func_145(iVar2))
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				func_146(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_100()
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
					iVar3 = func_147(ENTITY::GET_ENTITY_MODEL(iVar1));
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (func_148(iVar1))
						{
							if (func_149(iVar2))
							{
								if (func_98(Global_1301321, 256) && iVar2 == Global_34)
								{
									if (!func_98(Global_1301321, 64))
									{
										func_150(iVar2);
									}
								}
							}
							else
							{
								func_150(iVar2);
							}
						}
						else
						{
							func_150(iVar2);
						}
					}
					else if (func_151(iVar2))
					{
						if (!func_148(iVar1))
						{
							func_150(iVar2);
						}
					}
					else if (!func_152(iVar2, iVar3))
					{
						func_150(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_101(var uParam0)
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
				iVar2 = func_147(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					if (func_148(iVar0))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_149(iVar1))
						{
							if (func_98(Global_1301321, 256) && iVar1 == Global_34)
							{
								if (func_98(Global_1301321, 64))
								{
									func_146(iVar0, Global_1301321.f_1);
								}
							}
							else
							{
								func_146(iVar0, Global_1301321.f_1);
							}
						}
					}
				}
				else if (func_151(iVar1))
				{
					if (func_148(iVar0))
					{
						if (!PED::_0x5102307CE88798EB(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_149(iVar1))
						{
							func_146(iVar0, Global_1301321.f_1);
						}
					}
				}
				else if (func_153(iVar1, iVar2))
				{
					func_146(iVar0, Global_1301321.f_1);
				}
			}
		}
		iVar3++;
	}
}

void func_102(var uParam0, int iParam1)
{
	func_154(uParam0, iParam1);
}

void func_103(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_66(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_67(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_155(iVar0);
	*uParam0 = 0;
}

void func_104(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_66(Local_51.f_1[iParam0]))
		{
			if (iParam0 == 9)
			{
				Local_51.f_1[iParam0] = func_157(func_156(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 8)
			{
				Local_51.f_1[iParam0] = func_157(func_156(iParam0), joaat("INPUT_CAMERA_POSE_PREV"), joaat("INPUT_CAMERA_POSE_NEXT"), 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_51.f_93 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_51.f_1[iParam0] = func_159(sVar0, func_158(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_51.f_1[iParam0] = func_159(func_156(iParam0), func_158(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				func_160(Local_51.f_1[iParam0], 11, 1, 1);
			}
			func_161(Local_51.f_1[iParam0], -857683846, 0, 1);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[Local_51.f_1[iParam0] /*23*/].f_3, true);
		}
	}
	else if (func_66(Local_51.f_1[iParam0]))
	{
		func_103(&(Local_51.f_1[iParam0]), 1, 1);
	}
}

bool func_105(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_98(Global_1298536[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_107(var uParam0)
{
	func_162(uParam0, 0f);
}

void func_108(var uParam0)
{
	fLocal_150 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_150 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 60f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_27)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_27 = true;
			}
		}
		else if (bLocal_27)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_27 = false;
		}
	}
	else if (bLocal_27)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_27 = false;
	}
	if (fLocal_150 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 25f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_28)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_46 == 0)
	{
		if (func_45(uParam0->f_1[3]))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_47 = MISC::GET_GAME_TIMER();
			iLocal_46 = 1;
			iLocal_48 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_47) > 300 && iLocal_48 == 0)
	{
		if (uParam0->f_93 == 0)
		{
			uParam0->f_93 = 1;
			iVar0 = func_67(Local_51.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_93 = 0;
			iVar1 = func_67(Local_51.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar1 /*23*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_93);
		iLocal_48 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_47) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_47) > 850)
		{
			iLocal_46 = 0;
			iLocal_48 = 0;
		}
	}
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_111(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_69(iParam0, 1);
	func_70(iParam0, 1);
	func_71(iParam0, 128);
}

bool func_112(var uParam0)
{
	return func_106(*uParam0, 2);
}

int func_113()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_114(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_14, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	fLocal_203 = ENTITY::GET_ENTITY_HEADING(Global_34);
	uParam0->f_52 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	uParam0->f_55 = { ENTITY::GET_ENTITY_ROTATION(Global_34, 2) };
	uParam0->f_67 = { uParam0->f_55, uParam0->f_55.f_1, (uParam0->f_55.f_2 - 180f) };
	uParam0->f_61 = { vLocal_159 };
	uParam0->f_93 = 0;
	fLocal_165 = 0f;
	fLocal_204 = 0.5f;
	vLocal_166 = { uParam0->f_67 };
	vLocal_166.x = (vLocal_166.x + 1f);
	uParam0->f_26.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_26.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		fVar0 = 50f;
		uParam0->f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_61, uParam0->f_67, fVar0, true, 2);
	}
	uParam0->f_15 = 25f;
	uParam0->f_15.f_1 = 2f;
	uParam0->f_15.f_2 = 128f;
	uParam0->f_15.f_3 = 30f;
	uParam0->f_15.f_4 = 30f;
	uParam0->f_15.f_5 = 90f;
	uParam0->f_15.f_6 = 1;
	uParam0->f_15.f_7 = 0;
	uParam0->f_15.f_8 = 1;
	uParam0->f_15.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
	CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_93);
	CAM::_0x42ED56B02E05D109(uParam0->f_14, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_115()
{
	sLocal_179[0] = "portrait_normal";
	sLocal_179[1] = "portrait_happy";
	sLocal_179[2] = "portrait_pensive";
	sLocal_179[3] = "portrait_pensive_2";
	sLocal_179[4] = "portrait_relaxed";
	sLocal_179[5] = "portrait_angry";
	sLocal_179[6] = "portrait_angry_2";
	sLocal_179[7] = "portrait_annoyed";
}

void func_116()
{
	iLocal_192[0] = 0;
	iLocal_192[1] = 1;
	iLocal_192[2] = 2;
	iLocal_192[3] = 3;
	iLocal_192[4] = 4;
	iLocal_192[5] = 5;
	iLocal_192[6] = 6;
}

void func_117(var uParam0)
{
	fLocal_150 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_150 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 90f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_27)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_27 = true;
			}
		}
		else if (bLocal_27)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_27 = false;
		}
	}
	else if (bLocal_27)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_27 = false;
	}
	if (fLocal_150 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 30f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_28)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_34, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
}

bool func_118(int iParam0, int iParam1)
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

int func_119(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_163(bParam1, bParam2, bParam3);
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

bool func_120(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3, iParam1);
}

Vector3 func_121(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_122()
{
	bLocal_202 = true;
	iLocal_201 = MISC::GET_GAME_TIMER();
	iLocal_200 = 1;
	func_15();
}

void func_123(var uParam0)
{
	func_164(uParam0);
	switch (iLocal_192[uParam0->f_72])
	{
		case 0:
			break;
		case 1:
			func_165(joaat("WORLD_HUMAN_STARE_STOIC"), "WORLD_HUMAN_STARE_STOIC_MALE_A", joaat("WORLD_HUMAN_STARE_STOIC_MALE_A"));
			break;
		case 2:
			func_165(joaat("WORLD_HUMAN_STERNGUY_IDLES"), "WORLD_HUMAN_STERNGUY", joaat("WORLD_HUMAN_STERNGUY"));
			break;
		case 3:
			break;
		case 4:
			func_165(joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT"), "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A"));
			break;
		case 5:
			break;
		case 6:
			func_165(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A", joaat("WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A"));
			break;
	}
}

float func_124()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_125(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_126(int iParam0)
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

bool func_127(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_128(int iParam0)
{
	vector3 vVar0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_127(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
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
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_170(iVar1);
				return true;
			}
			iVar3++;
		}
		func_170(iVar1);
	}
	return false;
}

bool func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_127(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_171(iParam0);
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
	iVar1 = func_172(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_173(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_174(iParam0);
	iVar2 = func_173(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_131(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_128(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_166(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_175(iParam0, 0);
	}
	if (func_176(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_177(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_178(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_177(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_132(int iParam0)
{
	Global_1903136.f_302 = (Global_1903136.f_302 || iParam0);
}

struct<2> func_133(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_134(struct<2> Param0)
{
	return func_179(Param0);
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_136(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_180(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_181(iParam0))
	{
		return false;
	}
	if (func_182(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_183(iParam0, 1)) || func_184(32768))
	{
		if (!func_183(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_185())
	{
		return false;
	}
	return true;
}

void func_137(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

float func_138()
{
	return 130f;
}

float func_139(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_140(int iParam0, bool bParam1)
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

void func_141(int iParam0, int iParam1)
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

bool func_142(int iParam0, bool bParam1)
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

bool func_143(int iParam0)
{
	var uVar0;

	uVar0 = func_186(iParam0);
	if (ENTITY::_0x9A100F1CF4546629(uVar0) && !PED::_0x0E2F43516F998269(iParam0))
	{
		return true;
	}
	return false;
}

bool func_144(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (((!PED::_0x118D476A6F1A13F1(iParam0) && !func_187(iParam0, 0)) && !func_188(iParam0)) && iVar0 != joaat("REL_DOMESTICATED_PET_ANIMAL"))
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0)
{
	if (func_98(Global_1301321, 4096))
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

void func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
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

bool func_148(int iParam0)
{
	return (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0));
}

bool func_149(int iParam0)
{
	return (PED::_0x5102307CE88798EB(iParam0) && PED::IS_TRACKED_PED_VISIBLE(iParam0));
}

void func_150(int iParam0)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (PED::_0x5102307CE88798EB(iParam0))
	{
		PED::_0x3088634CF8C819CF(iParam0);
	}
	func_141(iVar0, Global_1301321.f_1);
}

bool func_151(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_189(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_152(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (((((func_148(iVar0) && !func_140(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_34, iVar0, 3455)) && func_190(iParam0, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */)) && func_149(iParam0)) && func_191(iParam0) >= func_192(iParam1))
	{
		return true;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (((func_148(iVar0) && !func_140(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_34, iVar0, 3455)) && func_190(iParam0, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0.2f, 1061158912 /* Float: 0.75f */))
	{
		if (!PED::_0x5102307CE88798EB(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (func_149(iParam0) && func_191(iParam0) >= func_192(iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_155(int iParam0)
{
	if (!func_193(iParam0))
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

char* func_156(int iParam0)
{
	switch (iParam0)
	{
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
		case 6:
			return "CAM_TAKE_PHOTO";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	return "INVALID_USE_CONTEXT";
}

int func_157(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_110(iVar0, 2))
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
		func_111(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_CAMERA_BACK");
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
			return joaat("INPUT_CAMERA_CONTEXT_GALLERY");
		default:
			break;
	}
	return 0;
}

int func_159(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_110(iVar0, 2))
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
		func_111(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1951255[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_162(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_124() - fParam1);
	func_194(uParam0, 1);
	func_195(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
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

void func_164(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
	if (func_56())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	}
	ENTITY::SET_ENTITY_HEADING(Global_34, fLocal_203);
}

void func_165(int iParam0, char* sParam1, int iParam2)
{
	if (func_43() == 0)
	{
		if (iParam0 == 0)
		{
			return;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return;
		}
		if (iParam2 == 0)
		{
			return;
		}
		if (!func_118(Global_34, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_18);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, iParam0, 0, true, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_18);
			TASK::TASK_PERFORM_SEQUENCE(Global_34, iLocal_18);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_18);
		}
	}
	else
	{
		iLocal_205 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_153, fLocal_203, 0, 0, 1);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_205, 25, true);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_205, 23, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_18);
		TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_205, sParam1, -1, false, true, 0, false, 0f, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_18);
		TASK::TASK_PERFORM_SEQUENCE(Global_34, iLocal_18);
	}
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_128(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_196(iParam0, 1399091007))
	{
		func_197(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_167(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_177(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_168(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_169(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
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

int func_171(int iParam0)
{
	struct<2> Var0;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_172(int iParam0)
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

int func_173(var uParam0, int iParam1)
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

int func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_171(iParam0);
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

int func_175(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_198(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_200(&Var0, func_199(0));
	}
	if (!func_201(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_170(iVar14);
	return uVar15;
}

int func_176(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_177(bool bParam0)
{
	if (func_43() == -1)
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

struct<4> func_178(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_202(iParam0, bParam1, 0) };
	return func_203(iParam0, Var0, Var0.f_4, bParam1);
}

int func_179(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_204(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_180(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_181(int iParam0)
{
	if (func_183(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_182(int iParam0)
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

bool func_183(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_184(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_185()
{
	if (!func_205())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

int func_186(int iParam0)
{
	return iParam0;
}

bool func_187(int iParam0, bool bParam1)
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

bool func_188(int iParam0)
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

int func_189(int iParam0)
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

bool func_190(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_206(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_191(int iParam0)
{
	return (func_207(iParam0) * 100f);
}

float func_192(int iParam0)
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

bool func_193(int iParam0)
{
	return func_110(iParam0, 2);
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_196(int iParam0, int iParam1)
{
	if (!func_127(iParam0, 0))
	{
		return func_209(func_208(iParam0), iParam1);
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

void func_197(int iParam0, var uParam1, var uParam2)
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

struct<14> func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_199(bool bParam0)
{
	int iVar0;

	iVar0 = func_177(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_203(923904168, func_210(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_203(923904168, func_210(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_203(923904168, func_210(bParam0), -740156546, 0);
}

void func_200(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_201(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_177(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_202(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_210(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_128(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_203(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_199(bParam1) };
			if (bParam2 && func_211(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_212(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_212(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_213(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_214(bParam1) };
			switch (func_171(iParam0))
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
			if (func_215(iParam0, -1823706425))
			{
				Var0 = { func_203(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_215(iParam0, -1483207246))
			{
				Var0 = { func_203(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_203(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_215(iParam0, -1653629781))
			{
				Var0 = { func_203(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_216(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_215(iParam0, -1653629781))
			{
				Var0 = { func_203(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_203(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_127(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_177(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_204(struct<2> Param0, var uParam2)
{
	if (!func_217(Param0))
	{
		return false;
	}
	func_218(uParam2);
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

bool func_205()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_206(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_207(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<2> Var7;
	struct<2> Var10;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = func_186(iParam0);
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

int func_208(int iParam0)
{
	return iParam0;
}

int func_209(int iParam0, int iParam1)
{
	if (!func_219(iParam0, 2))
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

struct<4> func_210(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_177(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_203(joaat("CHARACTER"), func_220(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_203(joaat("CHARACTER"), func_220(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_203(joaat("CHARACTER"), func_220(), -1591664384, bParam0);
}

bool func_211(int iParam0, bool bParam1)
{
	if (func_171(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_221();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_212(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_222(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

bool func_213(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_223(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_214(bool bParam0)
{
	int iVar0;

	iVar0 = func_177(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_203(271701509, func_210(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_203(271701509, func_210(bParam0), 12999093, 0);
}

bool func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_171(iParam0);
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
			if (func_224(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_216(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_225(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_217(struct<2> Param0)
{
	if (!func_226(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_227(Param0))
	{
		return false;
	}
	return true;
}

void func_218(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_219(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_220()
{
	struct<4> Var0;

	return Var0;
}

bool func_221()
{
	return (func_228(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_229(func_203(joaat("WARDROBE"), func_210(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_222(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_127(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_176(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_203(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_177(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_177(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_223(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_177(0);
	*uParam1 = { func_203(iParam0, func_199(0), iParam3, 0) };
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

bool func_224(int iParam0, int iParam1, int iParam2)
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

bool func_225(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_177(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_226(int iParam0)
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

int func_227(int iParam0)
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

int func_228(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_230(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_177(bParam1), iParam0, iParam3);
}

int func_229(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_231(&uParam0, iParam4, bParam5, iParam6);
}

bool func_230(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_231(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_232(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_177(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_225(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

