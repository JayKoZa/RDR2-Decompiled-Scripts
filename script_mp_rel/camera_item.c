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
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	bool bLocal_22 = false;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	bool bLocal_30 = false;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	char cLocal_33[32] = "";
	char cLocal_37[32] = "";
	char* sLocal_41 = NULL;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = false;
	struct<94> Local_53 = { 1, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_147 = 0f;
	int iLocal_148 = 0;
	float fLocal_149 = 0f;
	bool bLocal_150 = false;
	int iLocal_151 = 0;
	vector3 vLocal_152 = { 0f, 0f, 0f };
	vector3 vLocal_155 = { 0f, 0f, 0f };
	vector3 vLocal_158 = { 0f, 0f, 0f };
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	vector3 vLocal_165 = { 0f, 0f, 0f };
	bool bLocal_168 = false;
	int iLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = false;
	char* sLocal_178[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	bool bLocal_201 = false;
	float fLocal_202 = 0f;
	float fLocal_203 = 0f;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_17 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_18 = "facials@gen_male@portrait";
	StringCopy(&cLocal_33, "", 32);
	StringCopy(&cLocal_37, "", 32);
	sLocal_41 = "CameraViewfinder";
	sLocal_42 = "CameraTakePicture";
	sLocal_43 = "CameraTransitionBlink";
	bLocal_52 = true;
	fLocal_164 = 0f;
	fLocal_203 = 0.5f;
	iLocal_205 = 4;
	iLocal_206 = -1534086282;
	iLocal_208 = -193491261;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_53, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_52)
	{
		if (iLocal_23 == 1)
		{
			func_3();
		}
		if (func_4(&(Local_53.f_1[2]), 1))
		{
			if (MISC::IS_BIT_SET(&Global_1956187, 5))
			{
				func_5(&(Local_53.f_1[2]), 0, 1, 1);
			}
			else
			{
				func_5(&(Local_53.f_1[2]), 1, 1, 1);
			}
		}
		if (func_4(&(Local_53.f_1[8]), 1))
		{
			if (bLocal_201)
			{
				func_5(&(Local_53.f_1[8]), 0, 1, 1);
			}
			else
			{
				func_5(&(Local_53.f_1[8]), 1, 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(32768);
		func_6(128);
		func_6(256);
		func_6(512);
		func_6(1024);
		func_6(2048);
		func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_52)
		{
			if (func_7(&Local_53))
			{
				bLocal_52 = true;
			}
			else
			{
				bLocal_52 = false;
			}
		}
		func_8(Local_53);
		func_9(&Local_53);
		func_10(&(Local_53.f_71), &(Local_53.f_72), &(Local_53.f_75), &(Local_53.f_76), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (func_11(&(Local_53.f_1[2]), 1) || func_11(&(Local_53.f_1[7]), 1))
		{
			iLocal_44 = 1;
			if (func_12(&Local_53) == 3)
			{
				func_13(&Local_53, 12);
			}
			else if (func_12(&Local_53) != 6)
			{
			}
			else
			{
				func_14();
				if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				iLocal_176 = MISC::GET_GAME_TIMER();
				bLocal_177 = true;
				func_15();
				Global_1956184 = 0;
				func_13(&Local_53, 4);
			}
		}
		func_16(&Local_53);
		iVar0 = func_12(&Local_53);
		if (func_17())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_18())
				{
					iLocal_23 = 0;
					uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_31, "cameraRollCapacityLabel", "Disabled");
					func_19();
					func_13(&Local_53, 1);
				}
				else
				{
					if (func_20(&Local_53))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_23 = 1;
						func_21(&Local_53);
					}
					func_13(&Local_53, 1);
				}
				break;
			case 1:
				if (func_20(&Local_53))
				{
					func_21(&Local_53);
				}
				func_22();
				iLocal_19 = MISC::GET_GAME_TIMER();
				func_13(&Local_53, 2);
				break;
			case 2:
				if (func_20(&Local_53))
				{
					func_21(&Local_53);
				}
				if (func_23(iLocal_19) && func_24(Global_34, 1, 0, 0) == joaat("weapon_kit_camera"))
				{
					func_13(&Local_53, 3);
				}
				break;
			case 4:
				func_9(&Local_53);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				if (bLocal_177)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_176) > 500)
					{
						HUD::_DISPLAY_HUD_COMPONENT(959420967);
						CAM::SET_CAM_ACTIVE(Local_53.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_53.f_14);
						CAM::DESTROY_CAM(Local_53.f_14, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_13(&Local_53, 3);
						func_25();
						bLocal_177 = false;
						func_26();
					}
				}
				break;
			case 3:
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_169) > 100)
				{
					func_27();
					iLocal_169 = MISC::GET_GAME_TIMER();
				}
				if (func_20(&Local_53))
				{
					func_28(&Local_53);
					func_29(3);
					func_30(1);
					func_21(&Local_53);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
				if (iLocal_44 == 1 && &Global_1956185 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_44 = 0;
					}
					else
					{
						iLocal_44 = 1;
					}
				}
				if (&Global_1956185 != 1)
				{
				}
				else
				{
					iLocal_44 = 0;
				}
				if (bLocal_168 && iLocal_44 == 0)
				{
					func_5(&(Local_53.f_1[0]), 1, 1, 1);
					if (func_31(&(Local_53.f_1[0]), 1) || &Global_1956185 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						if (&Global_1956185 == 1)
						{
							Global_1956185 = 0;
						}
						Global_1956184 = 1;
						func_15();
						HUD::_HIDE_HUD_COMPONENT(959420967);
						func_32();
						iLocal_148 = MISC::GET_GAME_TIMER();
						func_13(&Local_53, 5);
					}
				}
				else
				{
					func_5(&(Local_53.f_1[0]), 0, 1, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_151) > 600)
				{
					func_33();
					iLocal_151 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_150)
				{
					func_5(&(Local_53.f_1[1]), 1, 1, 1);
					if (func_31(&(Local_53.f_1[1]), 1))
					{
						if (func_34(Global_34, 0))
						{
						}
						else
						{
							iLocal_173 = 0;
							iLocal_175 = 0;
							func_15();
							func_13(&Local_53, 8);
							if (!func_35(&uLocal_170))
							{
								func_36(&uLocal_170, 1);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_34, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(&(Local_53.f_1[1]), 0, 1, 1);
				}
				break;
			case 5:
				if (func_20(&Local_53))
				{
					func_21(&Local_53);
				}
				if (func_37() && (MISC::GET_GAME_TIMER() - iLocal_148) > 500)
				{
					func_38();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
					Local_53.f_50 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
					Local_53.f_53 = { ENTITY::GET_ENTITY_ROTATION(Global_34, 2) };
					Local_53.f_65 = { Local_53.f_53, Local_53.f_53.f_1, Local_53.f_53.f_2 };
					Local_53.f_59 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_53.f_50, Local_53.f_53.f_2, 0f, 0.3f, 0.5f) };
					Local_53.f_91 = 0;
					Local_53.f_65 = { 0f, 0f, 0f };
					Local_53.f_64 = 0f;
					Local_53.f_63 = 0f;
					Local_53.f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_53.f_59, Local_53.f_65, 65f, false, 2);
					fLocal_147 = Local_53.f_53.f_2;
					if (func_39() != 0)
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_53.f_14, Global_34, 21030, 0f, 0.2f, 0f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_53.f_14, Global_34, 21030, 0f, 0.6f, 0f, true);
					}
					CAM::SET_CAM_NEAR_CLIP(Local_53.f_14, 0.25f);
					Local_53.f_15 = 5f;
					Local_53.f_15.f_1 = 2f;
					Local_53.f_15.f_2 = 128f;
					Local_53.f_15.f_3 = 25f;
					Local_53.f_15.f_4 = 25f;
					Local_53.f_15.f_5 = 60f;
					Local_53.f_15.f_6 = 1;
					Local_53.f_15.f_7 = 0;
					Local_53.f_15.f_8 = 1;
					Local_53.f_15.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_53.f_14, &(Local_53.f_15));
					CAM::_0x9F97E85EC142255E(Local_53.f_14, Local_53.f_91);
					CAM::_0x42ED56B02E05D109(Local_53.f_14, false);
					CAM::SET_CAM_ACTIVE(Local_53.f_14, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_34, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_33();
					iLocal_151 = MISC::GET_GAME_TIMER();
					func_26();
					func_13(&Local_53, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				if (iLocal_45 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1956186 = 1;
					iLocal_45 = 1;
				}
				if (MISC::IS_BIT_SET(&Global_1956187, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_20(&Local_53))
				{
					func_29(6);
					func_21(&Local_53);
				}
				func_40(&Local_53);
				if (iLocal_48 != 0)
				{
				}
				else
				{
					if (func_41(&(Local_53.f_1[6])) && !func_42(&Local_53, 32))
					{
						func_28(&Local_53);
						if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_34, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
						}
						func_43(1);
						func_44(&Local_53, 32);
					}
					if (!func_42(&Local_53, 32))
					{
						if (func_41(&(Local_53.f_1[5])))
						{
							func_45();
						}
					}
				}
				break;
			case 11:
				if (func_20(&Local_53))
				{
					Local_53.f_1[6] = func_46("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_34, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_30(1);
					func_47("CAM_SNAP", 0, 0, 1);
					func_21(&Local_53);
				}
				if (func_48())
				{
					if (!func_42(&Local_53, 16))
					{
						func_13(&Local_53, 3);
					}
					else
					{
						func_13(&Local_53, 13);
					}
				}
				else
				{
					func_49(&Local_53);
				}
				break;
			case 10:
				func_50(&Local_53);
				PAD::_0x2804658EB7D8A50B(5, 499451365);
				iLocal_44 = 1;
				if (iLocal_174 != 0)
				{
				}
				else if (func_51(&uLocal_170) > 500)
				{
					if (CAM::DOES_CAM_EXIST(Local_53.f_14))
					{
						CAM::SET_CAM_ACTIVE(Local_53.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(Local_53.f_14, false);
					}
					if (func_52())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::SET_ENTITY_HEADING(Global_34, fLocal_202);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_kit_camera"), true, 0, false, false);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, true, true, true, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_25();
					iLocal_174 = 1;
				}
				if (func_51(&uLocal_170) > 1000)
				{
					HUD::_DISPLAY_HUD_COMPONENT(959420967);
					func_26();
					func_53(&uLocal_170);
					func_14();
					func_13(&Local_53, 3);
				}
				break;
			case 8:
				func_50(&Local_53);
				if (iLocal_173 == 0)
				{
					if (func_51(&uLocal_170) > 500)
					{
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_34, false, false, true, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_34, vLocal_152, fLocal_163, 1, 0, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
						func_38();
						bLocal_201 = false;
						iLocal_173 = 1;
					}
				}
				if (iLocal_173 != 1)
				{
				}
				else if (iLocal_175 == 0)
				{
					if (func_51(&uLocal_170) > 300)
					{
						iLocal_175 = 1;
						func_54(&Local_53);
					}
				}
				else if (func_51(&uLocal_170) > 1000)
				{
					func_53(&uLocal_170);
					func_55(&Local_53);
					func_26();
					func_13(&Local_53, 9);
				}
				break;
			case 9:
				func_50(&Local_53);
				CAM::_0x3C8F74E8FE751614();
				PAD::_0x2804658EB7D8A50B(4, 1499787188);
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_20(&Local_53))
				{
					func_21(&Local_53);
				}
				func_55(&Local_53);
				if (func_31(&(Local_53.f_1[6]), 1) && !func_42(&Local_53, 32))
				{
					func_28(&Local_53);
					if (AUDIO::_0x4AD019591E94C064("Take_Photo", Global_34, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
					}
					func_43(1);
					func_44(&Local_53, 32);
				}
				else if (func_31(&(Local_53.f_1[1]), 1))
				{
					func_13(&Local_53, 8);
				}
				if (!func_42(&Local_53, 32))
				{
					if (func_41(&(Local_53.f_1[5])))
					{
						func_45();
					}
				}
				break;
			case 7:
				break;
			case 12:
				if (func_20(&Local_53))
				{
					func_21(&Local_53);
				}
				func_28(&Local_53);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_34, 1, 0, 0, 0);
				func_13(&Local_53, 13);
				break;
			case 13:
				if (func_20(&Local_53))
				{
					func_21(&Local_53);
				}
				func_2();
				func_1(&Local_53, 1);
				if (PED::_0xD5FE956C70FF370B(Global_34))
				{
				}
				else if (func_52())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, 0, 1);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_56())
		{
			if (func_57(&uLocal_187) > 1f)
			{
				func_58();
			}
		}
	}
	if (PED::_0xD5FE956C70FF370B(Global_34))
	{
	}
	else if (func_52())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_34, 0, 1);
	}
	func_2();
	func_1(&Local_53, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 0, 0, -1, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISPLAY_HUD_COMPONENT(959420967);
	Global_1956184 = 0;
	Global_1956185 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
	STREAMING::REMOVE_CLIP_SET(sLocal_18);
	STREAMING::REMOVE_ANIM_DICT(sLocal_17);
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_28(uParam0);
	func_30(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_DATABASE_DELETE("CAMERA");
}

void func_2()
{
	if (iLocal_21 == 1)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_47);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_31);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_207))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_207);
	}
	iLocal_207 = 0;
	func_25();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_43))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_43);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	func_14();
	if (TASK::GET_IS_TASK_ACTIVE(Global_34, 3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), 0, 1);
	}
}

void func_3()
{
	Local_53.f_87 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_53.f_87 == 1)
	{
	}
	if (Local_53.f_87 == 0)
	{
		bLocal_22 = false;
		iLocal_24 = GRAPHICS::_0x78C56B8A7B1D000C();
		iLocal_25 = GRAPHICS::_0x8E587FCD30E05592();
		uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_31, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_59();
		iLocal_23 = 0;
		bLocal_27 = true;
		iLocal_28 = MISC::GET_GAME_TIMER();
	}
	else if (Local_53.f_87 == 2)
	{
		bLocal_22 = true;
		uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_31, "cameraRollCapacityLabel", "failed/failed");
		func_19();
		iLocal_23 = 0;
		bLocal_27 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_60(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_60(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (bParam1)
	{
		func_62(iParam0, 4);
		if (bParam3)
		{
			func_63(iVar0, 1);
		}
		func_64(iVar0, 1);
	}
	else
	{
		func_65(iParam0, 4);
		func_64(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1939067->f_39 = (Global_1939067->f_39 || iParam0);
}

int func_7(var uParam0)
{
	if (&Global_1956186 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1956186 = 0;
		return 0;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_34) > 0.33f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
		if (PED::_0x7FC84E85D98F063D(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
		if (PED::_0x9682F850056C9ADE(Global_34))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
	}
	if (func_66())
	{
		if (func_67(16) || func_68(Global_1915180->f_19742.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
			return 0;
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (!func_69(Global_34, 0))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_34) || PED::IS_PED_INJURED(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (!func_70(joaat("weapon_kit_camera"), 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (func_12(uParam0) == 8)
	{
	}
	if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
	{
		if (func_24(Global_34, 1, 0, 1) != joaat("weapon_kit_camera"))
		{
			if (func_71(uParam0) == 0)
			{
				return 0;
			}
		}
	}
	if (func_72())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_34, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_34, true)))
	{
		func_73("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	if (Global_1939178->f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		return 0;
	}
	return 1;
}

void func_8(struct<89> Param0, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_34, 129, true);
	PED::SET_PED_RESET_FLAG(Global_34, 173, true);
	if (Param0.f_88 == 9)
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
	if (!Param0.f_88 == 3)
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
	if (func_74(Global_34))
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
	if (!uParam0->f_88 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_75(0);
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

	if (bParam1 && !func_60(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_88;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_88 = iParam1;
	func_76(uParam0);
}

void func_14()
{
	AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_43))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_43);
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

	if (func_4(&(uParam0->f_1[6]), 1))
	{
		if (uParam0->f_89 == 0 && iLocal_23 == 0)
		{
			func_5(&(uParam0->f_1[6]), 1, 1, 1);
			if (bLocal_27)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_28) > 2500)
				{
					iLocal_24 = GRAPHICS::_0x78C56B8A7B1D000C();
					func_59();
					iLocal_28 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			func_5(&(uParam0->f_1[6]), 0, 1, 1);
		}
	}
	switch (uParam0->f_89)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iLocal_47);
				bLocal_22 = true;
				func_77(uParam0, 2);
				iLocal_21 = 0;
			}
			break;
		case 0:
			if (func_42(uParam0, 32))
			{
				func_28(uParam0);
				if (func_18() || bLocal_22)
				{
					func_77(uParam0, 2);
				}
				else if (iLocal_24 == iLocal_25)
				{
					if (iLocal_47 == 0)
					{
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_47 = func_78(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_77(uParam0, 1);
						iLocal_21 = 1;
					}
					else
					{
						bLocal_22 = true;
						func_77(uParam0, 2);
					}
				}
				else
				{
					func_77(uParam0, 2);
				}
			}
			if (func_42(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_77(uParam0, 7);
			}
			break;
		case 2:
			Local_53.f_93 = 0;
			func_43(0);
			func_77(uParam0, 3);
			iLocal_51 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_51) > 0)
			{
				iLocal_51 = MISC::GET_GAME_TIMER();
				func_79();
				if (func_18() || bLocal_22)
				{
					func_77(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_24++;
					func_59();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_77(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_87 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_87 == 1)
			{
			}
			if (uParam0->f_87 == 0)
			{
				if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
				{
					GRAPHICS::_0x2705D18C11B61046(1);
				}
				else
				{
					GRAPHICS::_0x2705D18C11B61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = func_80();
				if (func_81(iVar23))
				{
					MemCopy(&cVar19, {func_82(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_83();
					StringCopy(&cVar19, func_84(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_85();
				if (func_86(iVar29))
				{
					StringCopy(&cVar25, func_87(iVar29), 16);
					StringCopy(&cVar27, func_88(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_26 = 0;
				func_77(uParam0, 6);
			}
			else if (uParam0->f_87 == 2)
			{
				func_77(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_26 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_38();
				func_29(func_12(uParam0));
				func_5(&(uParam0->f_1[6]), 0, 1, 1);
				func_89(689, 0);
				iLocal_26 = 1;
			}
			uParam0->f_87 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_87 == 0)
			{
				Local_53.f_93 = 1;
				func_90(uParam0, 32);
				func_77(uParam0, 0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
			}
			else if (uParam0->f_87 == 2)
			{
				Local_53.f_93 = 1;
				func_90(uParam0, 32);
				func_77(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_51) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_90(uParam0, 32);
				func_77(uParam0, 0);
				func_38();
				func_29(func_12(uParam0));
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				func_89(689, 0);
			}
			break;
		case 7:
			uParam0->f_87 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_87 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_44(uParam0, 256);
				func_90(uParam0, 128);
				func_77(uParam0, 0);
			}
			else if (uParam0->f_87 == 2)
			{
				func_90(uParam0, 128);
				func_77(uParam0, 0);
			}
			break;
	}
}

int func_17()
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

bool func_18()
{
	return &Global_1956183;
}

void func_19()
{
	StringCopy(&cLocal_33, "-", 32);
	StringConCat(&cLocal_33, " / ", 32);
	StringCopy(&cLocal_37, "-", 32);
	StringConCat(&cLocal_33, &cLocal_37, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_32, &cLocal_33);
}

bool func_20(var uParam0)
{
	return *uParam0;
}

void func_21(var uParam0)
{
	*uParam0 = 0;
}

void func_22()
{
	HUD::_TEXT_DATABASE_REQUEST("CAMERA");
	STREAMING::REQUEST_ANIM_DICT(sLocal_17);
	STREAMING::REQUEST_CLIP_SET(sLocal_18);
	GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
}

int func_23(int iParam0)
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
	if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_18))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_17))
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

int func_24(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_25()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_41);
	}
}

void func_26()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_43))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_43);
	}
}

void func_27()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	vLocal_155 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_34);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, 0f, 2f, -0.2f) };
	vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, -0.75f, 0f, 0f) };
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, 0.75f, 0f, 0f) };
	if (PED::_0xD5FE956C70FF370B(Global_34))
	{
		bLocal_168 = false;
		return;
	}
	if ((ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar1.x, vVar1.y, vVar1.z, 3167) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar4.x, vVar4.y, vVar4.z, 3167)) && ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar7.x, vVar7.y, vVar7.z, 3167))
	{
		bLocal_168 = true;
	}
	else
	{
		bLocal_168 = false;
	}
}

void func_28(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_60(&(uParam0->f_1[iVar0])))
		{
			func_91(uParam0->f_1[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_29(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_92(6, 0);
			func_92(3, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(7, 0);
			func_92(4, 0);
			func_92(5, 0);
			func_92(0, 1);
			func_92(1, 1);
			func_92(2, 1);
			break;
		case 6:
			func_92(0, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(1, 0);
			func_92(2, 0);
			func_92(5, 1);
			func_92(3, 1);
			func_92(4, 1);
			func_92(6, 1);
			func_92(7, 1);
			break;
		case 8:
			func_92(0, 0);
			func_92(1, 0);
			func_92(2, 0);
			func_92(5, 1);
			func_92(8, 1);
			func_92(9, 1);
			func_92(3, 1);
			func_92(4, 1);
			func_92(6, 1);
			func_92(7, 1);
			break;
		case 9:
			func_92(0, 0);
			func_92(1, 0);
			func_92(2, 0);
			func_92(5, 1);
			func_92(8, 1);
			func_92(9, 1);
			func_92(3, 1);
			func_92(4, 1);
			func_92(6, 1);
			func_92(7, 1);
			break;
		case 10:
			func_92(2, 0);
			func_92(0, 0);
			func_92(3, 0);
			func_92(1, 0);
			func_92(5, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(7, 0);
			func_92(6, 0);
			func_92(9, 0);
			func_92(4, 0);
			break;
		case 7:
			func_92(2, 0);
			func_92(0, 0);
			func_92(6, 0);
			func_92(4, 0);
			func_92(5, 0);
			func_92(1, 0);
			func_92(8, 0);
			func_92(9, 0);
			func_92(7, 0);
			break;
	}
}

void func_30(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_31(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_60(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_32()
{
	if (iLocal_205 == 0)
	{
		iLocal_205 = 1;
	}
}

void func_33()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_155 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_34);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, 0);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_155, &uVar5, 0);
	if ((vLocal_155.z - fVar4) > 3f)
	{
		bLocal_150 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_150 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_34))
	{
		bLocal_150 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_34))
	{
		bLocal_150 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_155, 2f) > 0)
	{
		bLocal_150 = false;
		return;
	}
	if ((fVar4 - vLocal_155.z) > 1f)
	{
		bLocal_150 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_34))
	{
		bLocal_150 = false;
		return;
	}
	if (func_34(Global_34, 0))
	{
		bLocal_150 = false;
		return;
	}
	if (PED::_0xD5FE956C70FF370B(Global_34))
	{
		bLocal_150 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_150 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_150 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_150 = true;
	}
	else
	{
		bLocal_150 = false;
	}
	if (bLocal_150)
	{
		vLocal_152 = { vLocal_155.x, vLocal_155.y, (vLocal_155.z - 1f) };
		fLocal_163 = fVar0;
		vLocal_158 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

int func_34(int iParam0, int iParam1)
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

bool func_35(var uParam0)
{
	return func_93(*uParam0, 1);
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1 || !func_35(uParam0))
	{
		func_94(uParam0);
	}
}

int func_37()
{
	switch (iLocal_205)
	{
		case 0:
			if (iLocal_206 == iLocal_208)
			{
			}
			break;
		case 1:
			iLocal_207 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_206);
			iLocal_205 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_207))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_207, iLocal_208);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_207);
				iLocal_205 = 3;
			}
			break;
		case 3:
			return 1;
		case 4:
			return 1;
	}
	return 0;
}

void func_38()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_41);
	}
}

int func_39()
{
	return Global_1572887->f_13;
}

void func_40(var uParam0)
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

	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), 1, 0, -1, 0);
	if (uParam0->f_71 > 0 && IntToFloat(uParam0->f_71) > 89f)
	{
		uParam0->f_71 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_71 < 0 && IntToFloat(uParam0->f_71) < -89f)
	{
		uParam0->f_71 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_72 > 0 && IntToFloat(uParam0->f_72) > 89f)
	{
		uParam0->f_72 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_72 < 0 && IntToFloat(uParam0->f_72) < -89f)
	{
		uParam0->f_72 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_71 != uParam0->f_73)
	{
		uParam0->f_73 = uParam0->f_71;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_71) - -89f) / (89f - -89f));
		uParam0->f_79 = fVar0;
	}
	else
	{
		uParam0->f_83 = 0f;
	}
	if (uParam0->f_72 != uParam0->f_74)
	{
		uParam0->f_74 = uParam0->f_72;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_72) - -89f) / (89f - -89f));
		uParam0->f_80 = fVar1;
	}
	else
	{
		uParam0->f_84 = 0f;
	}
	fVar4 = 50f;
	fVar5 = -25f;
	fVar2 = 68f;
	fVar3 = -85f;
	fVar9 = uParam0->f_63;
	fVar10 = uParam0->f_64;
	fVar8 = -1f;
	if (uParam0->f_75 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_75 = MISC::ABSI(uParam0->f_75);
	}
	fVar6 = ((BUILTIN::TO_FLOAT(uParam0->f_75) - 0f) / (89f - 0f));
	fVar9 = (fVar9 + (fVar6 * fVar8));
	if (fVar9 >= fVar2)
	{
		fVar9 = fVar2;
	}
	else if (fVar9 < fVar3)
	{
		fVar9 = fVar3;
	}
	uParam0->f_63 = fVar9;
	fVar8 = -1f;
	if (uParam0->f_76 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_76 = MISC::ABSI(uParam0->f_76);
	}
	fVar7 = ((BUILTIN::TO_FLOAT(uParam0->f_76) - 0f) / (89f - 0f));
	fVar10 = (fVar10 + (fVar7 * fVar8));
	if (fVar10 >= fVar4)
	{
		fVar10 = fVar4;
	}
	else if (fVar10 < fVar5)
	{
		fVar10 = fVar5;
	}
	uParam0->f_64 = fVar10;
	uParam0->f_65 = { Vector(fLocal_147, 0f, 0f) + Vector(uParam0->f_63, 0f, uParam0->f_64) };
	func_95(uParam0);
	func_96(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_59, uParam0->f_65, 50f, 0, 1, 1, 2, 0, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_169) > 100)
	{
		if (iLocal_46 == 0)
		{
			fVar11 = ENTITY::GET_ENTITY_HEADING(Global_34);
			vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_155, fVar11, 0f, 0.25f, 0f) };
			func_27();
			if ((!ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vVar12.x, vVar12.y, vVar12.z, 3167) || !ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, uParam0->f_59, 3167)) || bLocal_168 == 0)
			{
				if (func_39() == 0 && PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
				{
				}
				else if (PED::IS_PED_IN_ANY_BOAT(Global_34))
				{
				}
				else
				{
					Global_1956186 = 1;
					iLocal_46 = 1;
				}
			}
		}
		iLocal_169 = MISC::GET_GAME_TIMER();
	}
}

bool func_41(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_61(iParam0);
	iVar1 = ((*Global_1949759)[iVar0 /*23*/])->f_4;
	return (func_31(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0->f_90 && iParam1) != 0;
}

void func_43(int iParam0)
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

void func_44(var uParam0, int iParam1)
{
	uParam0->f_90 = (uParam0->f_90 || iParam1);
}

void func_45()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_46(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_97(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
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
				func_98(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

var func_47(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_73(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

int func_48()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return 0;
}

int func_49(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !func_42(uParam0, 32))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CLICK", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
		func_43(1);
		func_44(uParam0, 32);
	}
	return 1;
}

void func_50(var uParam0)
{
	vLocal_155 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	if (!PED::_0x9682F850056C9ADE(Global_34))
	{
		if (func_39() == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_155, vLocal_152, true) > 20f)
			{
				Global_1956186 = 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_155, vLocal_152, true) > 3f)
			{
				Global_1956186 = 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_155, vLocal_152, true) > 3f)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_34, vLocal_152, fLocal_163, 1, 0, 1);
			ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

int func_51(var uParam0)
{
	if (!func_35(uParam0))
	{
		return 0;
	}
	if (func_99(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_100() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

int func_52()
{
	if (PED::_0x3BDFCF25B58B0415(Global_34) == 0 && PED::IS_PED_USING_ANY_SCENARIO(Global_34))
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54(var uParam0)
{
	if (func_20(uParam0))
	{
		func_29(8);
		func_21(uParam0);
	}
	func_101(uParam0);
	func_102();
	func_103();
	uParam0->f_70 = 0;
	iLocal_199 = 0;
	bLocal_161 = true;
	bLocal_162 = false;
	HUD::_HIDE_HUD_COMPONENT(959420967);
}

void func_55(var uParam0)
{
	func_104(uParam0);
	if (uParam0->f_75 > 16)
	{
		if ((fLocal_164 - 0.07f) > -10f)
		{
			if (uParam0->f_75 > 100)
			{
				vLocal_165.f_2 = (vLocal_165.z - 0.6f);
				fLocal_164 = (fLocal_164 - (0.07f * 3f));
			}
			else
			{
				vLocal_165.f_2 = (vLocal_165.z - 0.2f);
				fLocal_164 = (fLocal_164 - 0.07f);
			}
		}
	}
	if (uParam0->f_75 < -16)
	{
		if ((fLocal_164 + 0.07f) < 10f)
		{
			if (uParam0->f_75 < -100)
			{
				vLocal_165.f_2 = (vLocal_165.z + 0.6f);
				fLocal_164 = (fLocal_164 + (0.07f * 3f));
			}
			else
			{
				vLocal_165.f_2 = (vLocal_165.z + 0.2f);
				fLocal_164 = (fLocal_164 + 0.07f);
			}
		}
	}
	if (uParam0->f_76 > 16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_203 - 0.07f) > -10f)
		{
			if (uParam0->f_76 > 100)
			{
				vLocal_165.x = (vLocal_165.x - 0.6f);
				fLocal_203 = (fLocal_203 - (0.07f * 3f));
			}
			else
			{
				vLocal_165.x = (vLocal_165.x - 0.2f);
				fLocal_203 = (fLocal_203 - 0.07f);
			}
		}
	}
	if (uParam0->f_76 < -16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_203 + 0.07f) < 10f)
		{
			if (uParam0->f_76 < -100)
			{
				vLocal_165.x = (vLocal_165.x + 0.6f);
				fLocal_203 = (fLocal_203 + (0.07f * 3f));
			}
			else
			{
				vLocal_165.x = (vLocal_165.x + 0.2f);
				fLocal_203 = (fLocal_203 + 0.07f);
			}
		}
	}
	if (bLocal_161)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_34, vLocal_158, 3167))
		{
			bLocal_162 = false;
		}
		else
		{
			bLocal_162 = true;
		}
		bLocal_161 = false;
	}
	if ((func_31(&(uParam0->f_1[7]), 1) || func_34(Global_34, 0)) || bLocal_162)
	{
		if (func_34(Global_34, 0))
		{
			if (func_105(Global_34, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
			}
		}
		else if (func_106(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_34, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
		}
		iLocal_174 = 0;
		func_28(uParam0);
		func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, "portrait_normal", sLocal_17);
		if (!func_35(&uLocal_170))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), false, 0, false, false);
			func_36(&uLocal_170, 1);
		}
	}
	if (func_107(&(uParam0->f_1[9]), 0, 1))
	{
		if (iLocal_190 == 0)
		{
			uParam0->f_69++;
			if (uParam0->f_69 == 8)
			{
				uParam0->f_69 = 0;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, &(sLocal_178[uParam0->f_69]), sLocal_17);
		}
	}
	if (func_107(&(uParam0->f_1[9]), 1, 1))
	{
		if (iLocal_190 == 0)
		{
			uParam0->f_69 = (uParam0->f_69 - 1);
			if (uParam0->f_69 < 0)
			{
				uParam0->f_69 = 7;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Expression", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_34);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_34, &(sLocal_178[uParam0->f_69]), sLocal_17);
		}
	}
	uParam0->f_25 = { func_108(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_34) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_34, &(uParam0->f_25));
	if (bLocal_201 == 0)
	{
		if (func_107(&(uParam0->f_1[8]), 1, 1))
		{
			bLocal_201 = true;
			uParam0->f_70++;
			if (uParam0->f_70 == 7)
			{
				uParam0->f_70 = 0;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			func_109();
		}
	}
	if (bLocal_201 == 0)
	{
		if (func_107(&(uParam0->f_1[8]), 0, 1))
		{
			bLocal_201 = true;
			uParam0->f_70 = (uParam0->f_70 - 1);
			if (uParam0->f_70 < 0)
			{
				uParam0->f_70 = 6;
			}
			if (AUDIO::_0x4AD019591E94C064("Change_Pose", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			func_109();
		}
	}
	if (bLocal_201)
	{
		switch (iLocal_199)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_200) > 200)
				{
					iLocal_199 = 2;
				}
				break;
			case 2:
				func_110(uParam0);
				iLocal_199 = 3;
				iLocal_200 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_200) > 500)
				{
					iLocal_199 = 4;
					iLocal_200 = MISC::GET_GAME_TIMER();
					func_26();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_200) > 700)
				{
					iLocal_199 = 0;
					bLocal_201 = false;
				}
				break;
			default:
				break;
		}
	}
	func_96(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_59, vLocal_165, 50f, 0, 1, 1, 2, 0, 0);
}

int func_56()
{
	return iLocal_190;
}

float func_57(var uParam0)
{
	if (!func_35(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_99(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_111() - uParam0->f_1);
}

void func_58()
{
	func_53(&uLocal_187);
	iLocal_190 = 0;
}

void func_59()
{
	StringCopy(&cLocal_33, "", 32);
	MISC::_INT_TO_STRING(iLocal_24, "%i", &cLocal_33);
	StringConCat(&cLocal_33, " / ", 32);
	StringCopy(&cLocal_37, "", 32);
	MISC::_INT_TO_STRING(iLocal_25, "%i", &cLocal_37);
	StringConCat(&cLocal_33, &cLocal_37, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_32, &cLocal_33);
}

bool func_60(int iParam0)
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

int func_61(int iParam0)
{
	return iParam0;
}

void func_62(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_63(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_97(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_64(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_65(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_66()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_67(int iParam0)
{
	if (func_66())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0)
{
	int iVar0;

	if (!func_112(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_113(iParam0);
	if ((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
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
	if (func_114(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_114(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_70(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_115(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_116(iParam0);
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
			if (!func_117(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_118(iParam0))
			{
				return true;
			}
			break;
	}
	return func_119(iParam0, 0, 0, 0) >= iParam1;
}

int func_71(var uParam0)
{
	return uParam0->f_89;
}

bool func_72()
{
	return Global_1939231->f_1;
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
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_74(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_75(bool bParam0)
{
	if (bParam0)
	{
		func_120(4);
	}
	func_120(2);
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
}

void func_76(var uParam0)
{
	*uParam0 = 1;
}

void func_77(var uParam0, int iParam1)
{
	uParam0->f_89 = iParam1;
}

int func_78(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_79()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_42))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_42);
	}
}

int func_80()
{
	return Global_1893575->f_2;
}

bool func_81(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

var func_82(int iParam0)
{
	char[] cVar0[8];

	if (!func_81(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_23;
}

int func_83()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_35);
}

char* func_84(int iParam0)
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

int func_85()
{
	return Global_1896610->f_41;
}

bool func_86(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_87(int iParam0)
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
	if (func_39() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_88(int iParam0)
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
	if (func_39() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_89(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_121(iParam0, &iVar0, &iVar1);
	if (!func_122(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_123(iVar0, iVar1);
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_90 = (uParam0->f_90 - (uParam0->f_90 && iParam1));
}

void func_91(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_60(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_61(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_124(iVar0);
	*uParam0 = 0;
}

void func_92(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_60(&(Local_53.f_1[iParam0])))
		{
			if (iParam0 == 9)
			{
				Local_53.f_1[iParam0] = func_126(func_125(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 8)
			{
				Local_53.f_1[iParam0] = func_126(func_125(iParam0), joaat("INPUT_CAMERA_POSE_PREV"), joaat("INPUT_CAMERA_POSE_NEXT"), 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_53.f_91 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_53.f_1[iParam0] = func_128(sVar0, func_127(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_53.f_1[iParam0] = func_128(func_125(iParam0), func_127(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				func_129(&(Local_53.f_1[iParam0]), 11, 1, 1);
			}
			func_130(&(Local_53.f_1[iParam0]), -857683846, 0, 1);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[&Local_53.f_1[iParam0] /*23*/])->f_3, 1);
		}
	}
	else if (func_60(&(Local_53.f_1[iParam0])))
	{
		func_91(Local_53.f_1[iParam0], 1, 1);
	}
}

bool func_93(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_94(var uParam0)
{
	func_131(uParam0, 0f);
}

void func_95(var uParam0)
{
	fLocal_149 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_149 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 60f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_29)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_29 = true;
			}
		}
		else if (bLocal_29)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_29 = false;
		}
	}
	else if (bLocal_29)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_29 = false;
	}
	if (fLocal_149 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 25f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.6f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_30)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_30 = true;
			}
		}
		else if (bLocal_30)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_30 = false;
		}
	}
	else if (bLocal_30)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_30 = false;
	}
}

void func_96(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_48 == 0)
	{
		if (func_41(&(uParam0->f_1[3])))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_34, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
			}
			iLocal_49 = MISC::GET_GAME_TIMER();
			iLocal_48 = 1;
			iLocal_50 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_49) > 300 && iLocal_50 == 0)
	{
		if (uParam0->f_91 == 0)
		{
			uParam0->f_91 = 1;
			iVar0 = func_61(&(Local_53.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_91 = 0;
			iVar1 = func_61(&(Local_53.f_1[3]));
			HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar1 /*23*/])->f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_91);
		iLocal_50 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_49) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_49) > 850)
		{
			iLocal_48 = 0;
			iLocal_50 = 0;
		}
	}
}

bool func_97(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_98(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_63(iParam0, 1);
	func_64(iParam0, 1);
	func_65(iParam0, 128);
}

bool func_99(var uParam0)
{
	return func_93(*uParam0, 2);
}

int func_100()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_101(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_14, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	fLocal_202 = ENTITY::GET_ENTITY_HEADING(Global_34);
	uParam0->f_50 = { ENTITY::GET_ENTITY_COORDS(Global_34, true, false) };
	uParam0->f_53 = { ENTITY::GET_ENTITY_ROTATION(Global_34, 2) };
	uParam0->f_65 = { uParam0->f_53, uParam0->f_53.f_1, (uParam0->f_53.f_2 - 180f) };
	uParam0->f_59 = { vLocal_158 };
	uParam0->f_91 = 0;
	fLocal_164 = 0f;
	fLocal_203 = 0.5f;
	vLocal_165 = { uParam0->f_65 };
	vLocal_165.x = (vLocal_165.x + 1f);
	uParam0->f_25.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_25.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		fVar0 = 50f;
		uParam0->f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_59, uParam0->f_65, fVar0, true, 2);
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
	CAM::_0x9F97E85EC142255E(uParam0->f_14, uParam0->f_91);
	CAM::_0x42ED56B02E05D109(uParam0->f_14, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_102()
{
	sLocal_178[0] = "portrait_normal";
	sLocal_178[1] = "portrait_happy";
	sLocal_178[2] = "portrait_pensive";
	sLocal_178[3] = "portrait_pensive_2";
	sLocal_178[4] = "portrait_relaxed";
	sLocal_178[5] = "portrait_angry";
	sLocal_178[6] = "portrait_angry_2";
	sLocal_178[7] = "portrait_annoyed";
}

void func_103()
{
	iLocal_191[0] = 0;
	iLocal_191[1] = 1;
	iLocal_191[2] = 2;
	iLocal_191[3] = 3;
	iLocal_191[4] = 4;
	iLocal_191[5] = 5;
	iLocal_191[6] = 6;
}

void func_104(var uParam0)
{
	fLocal_149 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_149 < -0.2f)
	{
		if (uParam0->f_15.f_3 < 90f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_29)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_29 = true;
			}
		}
		else if (bLocal_29)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_29 = false;
		}
	}
	else if (bLocal_29)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_29 = false;
	}
	if (fLocal_149 > 0.2f)
	{
		if (uParam0->f_15.f_3 > 30f)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 0.9f);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_30)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_34, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_34, "CAMERA_SOUNDSET", 0, 0, 0);
				}
				bLocal_30 = true;
			}
		}
		else if (bLocal_30)
		{
			AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_30 = false;
		}
	}
	else if (bLocal_30)
	{
		AUDIO::_0x0F2A2175734926D8("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_30 = false;
	}
}

int func_105(int iParam0, int iParam1)
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

int func_106(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_132(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
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

bool func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_60(iParam0))
	{
		return false;
	}
	iVar0 = func_61(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1);
}

Vector3 func_108(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_109()
{
	bLocal_201 = true;
	iLocal_200 = MISC::GET_GAME_TIMER();
	iLocal_199 = 1;
	func_15();
}

void func_110(var uParam0)
{
	func_133(uParam0);
	switch (&iLocal_191[uParam0->f_70])
	{
		case 0:
			break;
		case 1:
			func_134(830847823, "WORLD_HUMAN_STARE_STOIC_MALE_A", 333292554);
			break;
		case 2:
			func_134(1904532698, "WORLD_HUMAN_STERNGUY", -730803145);
			break;
		case 3:
			break;
		case 4:
			func_134(1998449450, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", -571916863);
			break;
		case 5:
			break;
		case 6:
			func_134(-1241981548, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A", 710326353);
			break;
	}
}

float func_111()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_112(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 176);
}

int func_113(int iParam0)
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

bool func_114(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_115(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_116(int iParam0)
{
	vector3 vVar0;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_135(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_136("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_137(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_138(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_139(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_139(iVar1);
	}
	return 0;
}

bool func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_115(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_140(iParam0);
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
	iVar1 = func_141(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_142(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_143(iParam0);
	iVar2 = func_142(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_119(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_116(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_135(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_144(iParam0, 0);
	}
	if (func_145(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_146(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_147(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_146(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

void func_120(int iParam0)
{
	Global_1903007->f_302 = (Global_1903007->f_302 || iParam0);
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_122(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_148(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_149(iParam0))
	{
		return 0;
	}
	if (func_150(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_151(iParam0, 1)) || func_152(32768))
	{
		if (!func_151(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_153())
	{
		return 0;
	}
	return 1;
}

void func_123(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

void func_124(int iParam0)
{
	if (!func_154(iParam0))
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

char* func_125(int iParam0)
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

int func_126(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_97(iVar0, 2))
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
		func_98(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_127(int iParam0)
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

int func_128(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_97(iVar0, 2))
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
		func_98(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_129(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_60(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_130(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_60(iParam0))
	{
		return;
	}
	iVar0 = func_61(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949759)[iVar0 /*23*/])->f_3, iParam1, iParam2);
}

void func_131(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_111() - fParam1);
	func_155(uParam0, 1);
	func_156(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_133(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
	if (func_52())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
	ENTITY::SET_ENTITY_HEADING(Global_34, fLocal_202);
}

void func_134(int iParam0, char* sParam1, int iParam2)
{
	if (func_39() == 0)
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
		if (!func_105(Global_34, 242628503))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_20);
			TASK::_TASK_START_SCENARIO_IN_PLACE(0, iParam0, 0, 1, 0, -1082130432, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_20);
			TASK::TASK_PERFORM_SEQUENCE(Global_34, iLocal_20);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_20);
		}
	}
	else
	{
		uLocal_204 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_152, fLocal_202, 0, 0, 1);
		TASK::_0x5AF19B6CC2115D34(uLocal_204, 25, 1);
		TASK::_0x5AF19B6CC2115D34(uLocal_204, 23, 1);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_20);
		TASK::_TASK_USE_SCENARIO_POINT(0, uLocal_204, sParam1, -1, 0, 1, 0, 0, 0f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_20);
		TASK::TASK_PERFORM_SEQUENCE(Global_34, iLocal_20);
	}
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_116(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_157(iParam0, 1399091007))
	{
		func_158(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_136(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_146(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_137(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_138(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_139(int iParam0)
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

int func_140(int iParam0)
{
	struct<2> Var0;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_141(int iParam0)
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

int func_142(var uParam0, int iParam1)
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

int func_143(int iParam0)
{
	int iVar0;

	iVar0 = func_140(iParam0);
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

int func_144(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_159(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_161(&Var0, func_160(0));
	}
	if (!func_162(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_139(iVar14);
	return uVar15;
}

int func_145(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_146(bool bParam0)
{
	if (func_39() == -1)
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

struct<4> func_147(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_163(iParam0, bParam1, 0) };
	return func_164(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_148(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_149(int iParam0)
{
	if (func_151(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_150(int iParam0)
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

bool func_151(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_152(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_153()
{
	if (!func_165())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

bool func_154(int iParam0)
{
	return func_97(iParam0, 2);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_157(int iParam0, int iParam1)
{
	if (!func_115(iParam0, 0))
	{
		return func_167(func_166(iParam0), iParam1);
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

void func_158(int iParam0, var uParam1, var uParam2)
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

struct<14> func_159(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_160(bool bParam0)
{
	int iVar0;

	iVar0 = func_146(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_164(923904168, func_168(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_164(923904168, func_168(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_164(923904168, func_168(bParam0), -740156546, 0);
}

void func_161(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_162(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_146(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_163(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_168(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_116(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_164(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_160(bParam1) };
			if (iParam2 && func_169(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_170(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_170(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_171(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_172(bParam1) };
			switch (func_140(iParam0))
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
			if (func_173(iParam0, -1823706425))
			{
				Var0 = { func_164(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_173(iParam0, -1483207246))
			{
				Var0 = { func_164(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_164(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_173(iParam0, -1653629781))
			{
				Var0 = { func_164(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_174(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_173(iParam0, -1653629781))
			{
				Var0 = { func_164(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_164(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_115(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_146(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_165()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	return iParam0;
}

int func_167(int iParam0, int iParam1)
{
	if (!func_175(iParam0, 2))
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

struct<4> func_168(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_146(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_164(joaat("character"), func_176(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_164(joaat("character"), func_176(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_164(joaat("character"), func_176(), -1591664384, bParam0);
}

int func_169(int iParam0, bool bParam1)
{
	if (func_140(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_177();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_170(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_178(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_171(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_179(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_172(bool bParam0)
{
	int iVar0;

	iVar0 = func_146(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_164(271701509, func_168(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_164(271701509, func_168(bParam0), 12999093, 0);
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_140(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_180(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_174(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_181(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_175(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_176()
{
	struct<4> Var0;

	return Var0;
}

bool func_177()
{
	return (func_182(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_183(func_164(889965687 /* GXTEntry: "Wardrobe" */, func_168(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_178(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_115(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_145(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_164(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_146(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_146(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_179(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_146(0);
	*uParam1 = { func_164(iParam0, func_160(0), iParam3, 0) };
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

int func_180(int iParam0, int iParam1, int iParam2)
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

int func_181(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_146(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_182(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_184(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_146(bParam1), iParam0, iParam3);
}

int func_183(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_185(&uParam0, iParam4, bParam5, iParam6);
}

bool func_184(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_185(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_186(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_186(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_146(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_181(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

