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
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23[2] = { 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	vector3 vLocal_32 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	var uLocal_42[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	struct<4> Local_59 = { 0, 0, 0, 0 } ;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_32 = { 920.4003f, -6726.304f, 35.7346f };
	vLocal_35 = { 18.4472f, 24.1111f, 177.789f };
	iLocal_38 = -1;
	iLocal_53 = joaat("a_c_songbird_01");
	iLocal_54 = joaat("s_m_m_fussarhenchman_01");
	iLocal_55 = joaat("cs_hercule");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_59);
	}
	func_2(&Local_59, &uScriptParam_0);
	while (!func_3(&Local_59))
	{
		func_4(&Local_59);
		switch (func_5(Local_59))
		{
			case 0:
				if (func_6(&Local_59))
				{
					func_7(&Local_59, 1);
				}
				break;
			case 1:
				if (func_8(&Local_59))
				{
					func_7(&Local_59, 2);
				}
				break;
			case 2:
				if (func_9(&Local_59))
				{
					func_7(&Local_59, 3);
				}
				break;
			case 3:
				func_1(&Local_59);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_59);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

int func_3(var uParam0)
{
	if (func_20(&Global_1935630, 16384))
	{
		return 1;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(&Global_1935630, 32768))
		{
			return 1;
		}
	}
	return 0;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, 0)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1956578->f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2, 0)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1956578->f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

int func_6(var uParam0)
{
	bool bVar0;

	bLocal_57 = true;
	bVar0 = true;
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_53))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_54))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_21(1)))
	{
		bVar0 = false;
	}
	if ((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(1))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(2)))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(&(iLocal_23[0]), 1, 0))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(&(iLocal_23[1]), 1, 0))
	{
		bVar0 = false;
	}
	if (!CAM::_0xAA235E2F2C09E952(func_23()))
	{
		bVar0 = false;
	}
	if (!STREAMING::IS_SRL_LOADED())
	{
		bVar0 = false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_24()))
	{
		bVar0 = false;
	}
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (!bVar0)
	{
		return 0;
	}
	if (bLocal_56)
	{
		bLocal_56 = false;
	}
	if (!func_25(3, iLocal_54, 984.3f, -6777.9f, 49.5f, -27.3f))
	{
		bLocal_57 = false;
	}
	if (!func_25(4, iLocal_54, 982.5f, -6781.3f, 49.5f, 158.8f))
	{
		bLocal_57 = false;
	}
	if (!func_25(5, iLocal_54, 981.6f, -6784.6f, 49.4f, -105.7f))
	{
		bLocal_57 = false;
	}
	if (!func_25(6, iLocal_54, 981.7f, -6791.9f, 49.5f, 28.1f))
	{
		bLocal_57 = false;
	}
	if (!func_25(7, iLocal_54, 984.7f, -6784.1f, 49.6f, 28.1f))
	{
		bLocal_57 = false;
	}
	if (!func_25(8, iLocal_54, 982.5f, -6782.7f, 50.4f, 161f))
	{
		bLocal_57 = false;
	}
	if (!bLocal_57)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_26(3);
	func_26(4);
	func_26(5);
	func_26(6);
	func_26(7);
	func_26(8);
	GRAPHICS::_ADD_BLOOD_POOL(983.9f, -6777.3f, 49.1f, 1);
	GRAPHICS::_ADD_BLOOD_POOL(984.7f, -6779.5f, 49.1f, 1);
	GRAPHICS::_ADD_BLOOD_POOL(983.4f, -6781.5f, 49.1f, 1);
	GRAPHICS::_ADD_BLOOD_POOL(982.2f, -6788.4f, 49.1f, 1);
	GRAPHICS::_ADD_BLOOD_POOL(982.3f, -6789.4f, 49.2f, 1);
	GRAPHICS::_ADD_BLOOD_POOL(984.1f, -6786.1f, 49f, 1);
	GRAPHICS::_ADD_BLOOD_POOL(979.8f, -6791.7f, 49.2f, 1);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(iLocal_23[0]), "ARTHUR", Global_35, 0);
	return 1;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_27(uParam0);
}

int func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_28())
	{
		iVar0 = 0;
	}
	if (!func_29(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_30(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_31(&(Global_1359489->f_40), 1);
}

int func_11(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_42[iVar0])))
		{
			PED::DELETE_PED(uLocal_42[iVar0]);
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	AUDIO::_0x43037ABFE214A851();
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(2), 0, 1065353216, 1f, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	func_32(iLocal_28);
	func_32(iLocal_27);
	func_32(iLocal_29);
	func_32(iLocal_30);
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(0));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(1));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(2));
	ANIMSCENE::_DELETE_ANIM_SCENE(&(iLocal_23[0]));
	CAM::_0x2412216FCC7B4E3E(func_23());
	HUD::_TEXT_DATABASE_DELETE(func_24());
	func_33(0);
	return 1;
}

int func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_34(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	var uVar1;
	bool bVar2;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (((*Global_1360165)[iParam0 /*1157*/])->f_129 != 0 && ((*Global_1360165)[iParam0 /*1157*/])->f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_30(iParam0, 56, 1);
		func_31(&(Global_1359489->f_40), 1);
	}
	func_35(iParam0, 0);
	func_36(iParam0, 4, 0);
	func_37(iParam0);
	func_38(iParam0);
	func_39(iParam0, 37, 1);
	bVar0 = func_40(Global_1360165[iParam0 /*1157*/], 0);
	uVar1 = func_41(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(uVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_42(iParam0, 64, 1))
	{
		func_39(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_39(iParam0, 33, 1);
		func_39(iParam0, 34, 1);
		func_43(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_44(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_30(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_30(iParam0, 35, 1);
			if (bParam8)
			{
				func_30(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_45(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], 1030835986);
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(uVar1);
		}
		func_39(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_30(iParam0, 33, 1);
		func_44(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_133 = fParam4;
			func_31(&(((*Global_1360165)[iParam0 /*1157*/])->f_130), 1);
		}
		else
		{
			func_46(&(((*Global_1360165)[iParam0 /*1157*/])->f_130));
		}
		if (bParam9)
		{
			func_30(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_47(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_42(iParam0, 45, 1))
	{
		func_39(iParam0, 45, 1);
	}
	func_48(iParam0, 16, 1);
	func_39(iParam0, 44, 1);
	((*Global_1360165)[iParam0 /*1157*/])->f_129 = 0;
	(Global_40.f_4942[iParam0 /*60*/])->f_4 = 0;
	if (bParam5)
	{
		if (func_40(func_49(iParam0), 0))
		{
			func_50(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	func_51(Global_1935630, 1048576);
	iLocal_23[0] = &iLocal_23[0];
	PED::_0xED9582B3DA8F02B4(9);
	STREAMING::REQUEST_MODEL(iLocal_53, false);
	STREAMING::REQUEST_MODEL(iLocal_54, false);
	STREAMING::REQUEST_MODEL(iLocal_55, false);
	STREAMING::REQUEST_ANIM_DICT(func_21(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(0));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(2));
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		iLocal_23[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(0, 1), 0, func_52(0, 0), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_23[0]));
	}
	else
	{
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		iLocal_23[0] = uParam0->f_2;
	}
	iLocal_23[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(1, 1), 2, func_52(1, 0), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(&(iLocal_23[1]));
	CAM::_0x1B3C2D961F5FC0E1(func_23());
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(func_53(0));
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	func_18(uParam0, 8);
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_21(bool bParam0)
{
	if (bParam0)
	{
		return "script_shows@cancandance@p1";
	}
	return "cancandance_fem0";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "smg2_cme1";
		case 1:
			return "smg2_cme2";
		case 2:
			return "smg2_cme3";
	}
	return "";
}

char* func_23()
{
	return "script@story@Smuggler2@beach_walk";
}

char* func_24()
{
	return "SMG2";
}

int func_25(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	bool bVar0;

	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_42[iParam0])))
	{
		return 1;
	}
	if (bLocal_56)
	{
		return 0;
	}
	bVar0 = true;
	if (iParam0 == 1)
	{
		bVar0 = 2;
	}
	uLocal_42[iParam0] = func_54(iParam1, vParam2, fParam5, 1, 1, bVar0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(uLocal_42[iParam0]), true);
	if (iParam1 == iLocal_54)
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(&(uLocal_42[iParam0]), Global_35, false);
	}
	bLocal_56 = true;
	return 1;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_42[iParam0])))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_42[iParam0])))
		{
			AUDIO::STOP_PED_SPEAKING(&(uLocal_42[iParam0]), true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(&(uLocal_42[iParam0]), true, true);
			GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(&(uLocal_42[iParam0]), true, false), 1);
			ENTITY::_SET_ENTITY_HEALTH(&(uLocal_42[iParam0]), 0, 0);
		}
	}
}

int func_27(var uParam0)
{
	func_55();
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	CAM::_0x702B75DC9D3EDE56(true);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	func_56(0);
	Global_16 = 1;
	func_33(1);
	func_57(0);
	Global_43837 = 0;
	func_58();
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	return 1;
}

int func_28()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

int func_29(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	int iVar6;
	struct<10> Var7;

	func_55();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	if (bLocal_56)
	{
		bLocal_56 = false;
	}
	func_59(43, 1, 1);
	func_58();
	HUD::_0xC9CAEAEEC1256E54(-1679307491);
	CAM::_0x702B75DC9D3EDE56(true);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::IS_ENTITY_DEAD(iLocal_31))
	{
		if (!func_60(vLocal_32))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_31, vLocal_32, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_31, vLocal_35, 2, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_31, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
		}
	}
	if (!bLocal_39)
	{
		bLocal_39 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
	}
	switch (iLocal_26)
	{
		case 0:
			MISC::_0x1096603B519C905F("SMG2");
			MISC::_SET_WEATHER_TYPE(joaat("fog"), true, true, true, 60f, false);
			CLOCK::PAUSE_CLOCK(true, 0);
			iLocal_27 = VOLUME::_CREATE_VOLUME_BOX(984.2063f, -6781.292f, 49.91065f, 0f, 0f, -20f, 5f, 30f, 4f);
			iLocal_28 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 987.4385f, -6772.322f, 49.94096f, 0f, 0f, -20f, 8f, 5f, 2f);
			iLocal_29 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 985.287f, -6785.009f, 49.76819f, 0f, 0f, -19.99999f, 1f, 30f, 4f);
			iLocal_30 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 981.1976f, -6783.522f, 49.76819f, 0f, 0f, -19.99999f, 1f, 30f, 4f);
			CAM::DO_SCREEN_FADE_IN(1000);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(&(iLocal_23[0]), 0))
			{
				ANIMSCENE::START_ANIM_SCENE(&(iLocal_23[0]));
			}
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(1));
			func_56(1);
		case 1:
			bLocal_57 = true;
			if (!func_25(0, iLocal_53, 984f, -6769.4f, 54.4f, 175f))
			{
				bLocal_57 = false;
			}
			if (!func_25(1, iLocal_53, 984f, -6769.4f, 54.4f, 175f))
			{
				bLocal_57 = false;
			}
			if (!func_25(2, iLocal_55, 988f, -6771f, 50f, -130f))
			{
				bLocal_57 = false;
			}
			bLocal_57 = bLocal_57;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				iLocal_31 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(&(iLocal_23[0]), "Warship", false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_31, true, true);
				}
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(&(iLocal_23[0]), "ARTHUR"))
			{
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(&(iLocal_23[0]), "Warship", &Var7, false, 0, 2);
				vLocal_32 = { Var7.f_6 };
				vLocal_35 = { Var7.f_9 };
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(&(iLocal_23[0]), "Warship", iLocal_31);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_31, vLocal_32, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_31, vLocal_35, 2, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_31, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
				func_31(&uLocal_20, 0);
				func_56(2);
			}
			break;
		case 2:
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), 1, 1065353216, 1f, 1);
			TASK::TASK_FLY_TO_COORD(&(uLocal_42[0]), 2f, 983.9f, -6775.8f, 50f, 1, 1);
			TASK::TASK_FLY_TO_COORD(&(uLocal_42[1]), 2f, 984f, -6775.6f, 50f, 1, 1);
			ENTITY::_0x9587913B9E772D29(&(uLocal_42[2]), 0);
			TASK::TASK_PLAY_ANIM(&(uLocal_42[2]), func_21(1), func_21(0), 1000f, -1000f, -1, 132, 0.474f, 0, 0, 0, 0, 0);
			func_56(3);
			break;
		case 3:
			if (!bLocal_58)
			{
				if (func_61(Global_35, 983.2f, -6785.1f, 49.5f, 2f, 1, 1))
				{
					TASK::TASK_FLY_TO_COORD(&(uLocal_42[0]), 2f, 975.7f, -6819.1f, 51f, 1, 1);
					TASK::TASK_FLY_TO_COORD(&(uLocal_42[1]), 2f, 975.7f, -6819.1f, 51f, 1, 1);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, &(uLocal_42[8]), 5000, 48, 51, 1);
					func_62(Global_35, "COUGH_SICK_SMALL", joaat("speech_params_force_normal_critical"), 0, 1, 0, 0, 1);
					bLocal_58 = true;
				}
			}
			func_63(0);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(&(uLocal_42[2]), func_21(1), func_21(0), 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(&(uLocal_42[2]), func_21(1), func_21(0)) >= 0.75f)
				{
					ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(&(uLocal_42[2]), func_21(1), func_21(0), 0.474f);
				}
			}
			Var1 = { func_64(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_27, true, 0))
			{
				func_56(4);
			}
			break;
		case 4:
			if (func_65(iLocal_52))
			{
				func_66(&iLocal_52, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_42[2])))
			{
				PED::DELETE_PED(uLocal_42[2]);
			}
			Var1 = { func_64(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			func_67(1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, 1, 0, 1);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(1), 0, 4194304, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("motionstate_walk"), false, 0, false);
			AUDIO::_0x5E3CCF03995388B5(MISC::GET_HASH_KEY(func_68(1)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
			CAM::_0xBC016635D6A73B31(func_23(), func_69(1), 5);
			func_31(&uLocal_14, 1);
			CLOCK::SET_CLOCK_TIME(19, 40, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), 0, 1065353216, 1f, 1);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(2));
			func_56(5);
			break;
		case 5:
			Var1 = { func_64(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			iVar0 = (func_70(1) - func_71(&uLocal_14));
			if (func_73(2, func_72(2), iVar0))
			{
				func_56(6);
			}
			break;
		case 6:
			Var1 = { func_64(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
			func_67(2);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, 1, 0, 1);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(2), 0, 4194304, -1, 0, 0, -1);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("motionstate_walk"), false, 0, false);
			CAM::_0xBC016635D6A73B31(func_23(), func_69(2), 5);
			func_31(&uLocal_14, 1);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			STREAMING::END_SRL();
			func_74(-664252410);
			func_74(2109952320);
			func_75(2019386373);
			func_76(-217646849);
			func_76(-694809996);
			func_76(-2053475031);
			func_77(-279703229);
			func_77(-623091266);
			Global_43837 = 1;
			func_56(7);
			break;
		case 7:
			iVar0 = ((func_70(1) - func_71(&uLocal_14)) - BUILTIN::FLOOR((1.6f * 1000f)));
			if (func_73(3, func_72(2), iVar0))
			{
				if (func_65(iLocal_52))
				{
					func_66(&iLocal_52, 1, 1);
				}
				ANIMSCENE::START_ANIM_SCENE(&(iLocal_23[1]));
				if (bLocal_39)
				{
					iLocal_38 = AUDIO::_0x0556C784FA056628("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
					AUDIO::PLAY_STREAM_FRONTEND(iLocal_38);
				}
				AUDIO::_0x6339C1EA3979B5F7("Clouds", "Death_Fail_Respawn_Scenes");
				func_56(8);
			}
			break;
		case 8:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(&(iLocal_23[1])) >= 1.6f)
			{
				AUDIO::_0x43037ABFE214A851();
				ENTITY::SET_ENTITY_COORDS(Global_35, 1303.8f, -6845.3f, 42.8f, true, false, true, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_56(9);
			}
			break;
		case 9:
			iVar5 = func_78(43);
			iVar6 = func_79(iVar5);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(&(iLocal_23[1])) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(&(iLocal_23[1])) - 1.6f) && func_80(iVar5)) && func_81(iVar6, 128))
			{
				if (func_81(iVar6, 512))
				{
					func_82(iVar6, 512);
				}
				MISC::_0x1096603B519C905F("");
				func_56(10);
			}
			break;
		case 10:
			if (func_83())
			{
				func_56(11);
				if (iLocal_38 != -1)
				{
					AUDIO::STOP_STREAM(iLocal_38);
					iLocal_38 = -1;
				}
				AUDIO::_0x9428447DED71FC7E("Death_Fail_Respawn_Scenes");
			}
			break;
		case 11:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(&(iLocal_23[1])) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(&(iLocal_23[1])))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return;
		}
	}
	func_85(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1 || !func_86(uParam0))
	{
		func_87(uParam0);
	}
}

void func_32(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_33(bool bParam0)
{
	Global_1956582 = bParam0;
	if (bParam0)
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(0, 0);
	}
	else
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(1, 0);
	}
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_35(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_88(&(((*Global_1360165)[iParam0 /*1157*/])->f_12), 1))
		{
			func_36(iParam0, 1, 0);
		}
	}
	func_36(iParam0, 16, bParam1);
}

void func_36(int iParam0, int iParam1, bool bParam2)
{
	if (!func_84(iParam0))
	{
		return;
	}
	func_89(&(((*Global_1360165)[iParam0 /*1157*/])->f_13), iParam1, bParam2);
}

void func_37(int iParam0)
{
	func_36(iParam0, 8, 0);
}

void func_38(int iParam0)
{
	func_30(iParam0, 36, 1);
}

void func_39(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return;
		}
	}
	func_85(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_40(int iParam0, int iParam1)
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
	if (func_90(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_90(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_41(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_91(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

bool func_42(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return false;
		}
	}
	func_85(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_92(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_93(iParam0);
		}
	}
	if (func_42(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_92(iParam0), 137, true);
	}
}

void func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_39(iParam0, 50, 1);
		func_39(iParam0, 48, 1);
		func_39(iParam0, 49, 1);
		func_39(iParam0, 51, 1);
		func_39(iParam0, 52, 1);
		func_39(iParam0, 54, 1);
		func_39(iParam0, 55, 1);
	}
	else
	{
		func_30(iParam0, 50, 1);
		func_30(iParam0, 48, 1);
		func_30(iParam0, 49, 1);
		func_30(iParam0, 51, 1);
		if (bParam3)
		{
			func_30(iParam0, 54, 1);
		}
		else
		{
			func_39(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_30(iParam0, 52, 1);
			if (bParam3)
			{
				func_30(iParam0, 55, 1);
			}
		}
		else
		{
			func_39(iParam0, 52, 1);
			if (!bParam3)
			{
				func_39(iParam0, 55, 1);
			}
		}
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_92(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_92(iParam0), 204, false);
	}
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_42(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_41(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uVar0))
	{
		return;
	}
	iVar1 = func_92(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_94(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_30(iParam0, 2, 1);
	}
	else
	{
		func_95(iParam0);
		func_30(iParam0, 1, 1);
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (&Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_49(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(((*Global_1360165)[iParam0 /*1157*/])->f_70))
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70 = 0;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70;
}

void func_50(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_84(iParam1))
	{
		return;
	}
	iVar0 = func_49(iParam1);
	if (func_96(iParam1))
	{
		if (!func_97(iParam1))
		{
			return;
		}
	}
	func_39(iParam1, 39, 1);
	func_98(iParam1, 64, 0);
	((*Global_1360165)[iParam1 /*1157*/])->f_70.f_11 = 0;
	func_98(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_98(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_30(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_99(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

char* func_52(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_100(bParam1, "script@story@SMG2@IG@IG_CME_Start@smuggler2_cme", "");
		case 1:
			return func_100(bParam1, "script@timelapse@sad3_ext_timelapse", "");
	}
	return "";
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@cme@SMG2_CME_SHOT1_srl";
		case 1:
			return "script@cme@SMG2_CME_SHOT2_srl";
		case 2:
			return "script@cme@SMG2_CME_SHOT3_srl";
	}
	return "";
}

int func_54(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_101(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_55()
{
	Global_1905944->f_5695 = 1;
}

void func_56(int iParam0)
{
	iLocal_26 = iParam0;
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_102(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_51(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_58()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_103(iParam0))
	{
		return 1;
	}
	if (func_104(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1835011)[iParam0 /*74*/])->f_16, false))
	{
		return 1;
	}
	iVar0 = func_79(func_78(iParam0));
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 1;
	}
	if (!func_80(func_78(iParam0)))
	{
		func_105(iParam0, 0, 0, -1);
	}
	if (func_106(iVar0))
	{
		if (!((*Global_1835011)[iParam0 /*74*/])->f_71)
		{
			if (bParam1)
			{
				func_107(iVar0, 256);
			}
			if (bParam2)
			{
				func_107(iVar0, 512);
			}
			((*Global_1835011)[iParam0 /*74*/])->f_71 = 1;
			return 1;
		}
	}
	return 0;
}

int func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_108(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

var func_62(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_109(uParam0, &Var0);
}

void func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	vector3 vVar7;

	func_31(&uLocal_17, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0, 0);
	if (((!PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR")) == 0f || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_RIGHT_ONLY")) == 0f) || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UP_ONLY")) == 0f) || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_DOWN_ONLY")) == 0f)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (func_65(iLocal_52) && func_110(iLocal_52, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_87(&uLocal_20);
		if (func_65(iLocal_52))
		{
			func_66(&iLocal_52, 1, 1);
		}
		if (func_71(&uLocal_17) >= 60)
		{
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_22(iParam0), &iVar1);
			iVar2 = func_111(Global_35, func_22(iParam0), &vVar4);
			iVar3 = func_112(iVar2 + 2, 0, (iVar1 - 1));
			TASK::WAYPOINT_RECORDING_GET_COORD(func_22(iParam0), iVar3, &vVar7);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 60, func_113(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar7), false, true);
			func_87(&uLocal_17);
		}
	}
	else if (!func_65(iLocal_52))
	{
		if (func_114(&uLocal_20) >= 5f)
		{
			if (!bLocal_40)
			{
				HUD::_TEXT_DATABASE_REQUEST(func_24());
				bLocal_40 = true;
			}
			else if (!bLocal_41)
			{
				if (HUD::_TEXT_DATABASE_HAS_LOADED(func_24()))
				{
					bLocal_41 = true;
				}
			}
			else
			{
				iLocal_52 = func_115("SMG2_O_HLP_WALK", joaat("INPUT_MOVE_UD"), joaat("INPUT_MOVE_LR"), 16);
				func_116(iLocal_52, 10, 1, 1);
				func_116(iLocal_52, 11, 1, 1);
				func_116(iLocal_52, 14, 1, 1);
			}
		}
	}
}

struct<4> func_64(int iParam0)
{
	struct<4> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 986.7128f, -6775.761f, 49.9186f };
			Var0.f_3 = 167.688f;
			break;
		case 1:
			Var0 = { 998.3f, -6913.8f, 41.6f };
			Var0.f_3 = -154.6f;
			break;
		case 2:
			Var0 = { 1008.8f, -6948.5f, 41.9f };
			Var0.f_3 = -160f;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_65(int iParam0)
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

void func_66(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_65(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_117(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_118(iVar0);
	*iParam0 = 0;
}

void func_67(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_64(iParam0) };
	MISC::CLEAR_AREA(vVar0, 10f, 1131016);
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1_CAM";
		case 2:
			return "3_BEACH_2_CAM";
	}
	return "";
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1";
		case 2:
			return "3_BEACH_2";
	}
	return "";
}

int func_70(int iParam0)
{
	var uVar0;

	uVar0 = CAM::_0xEA113BF9B0C0C5D7(func_23(), func_69(iParam0), 5);
	return uVar0;
}

int func_71(var uParam0)
{
	if (!func_86(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_119(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_120() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

Vector3 func_72(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_64(iParam0) };
	switch (iParam0)
	{
		case 1:
			return vVar0;
		case 2:
			return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_73(int iParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!iParam0 == 3)
	{
		iVar0 = MISC::GET_HASH_KEY(func_68(iParam0));
		uVar1 = CAM::_0x465F04F68AD38197(func_23(), func_69(iParam0), 5);
	}
	else
	{
		uVar1 = CAM::_0x465F04F68AD38197(func_23(), func_69(2), 5);
	}
	uVar2 = AUDIO::_0xFFE9C53DEEA3DB0B(iParam4, iVar0, vParam1, STREAMING::IS_SRL_LOADED(), uVar1);
	return uVar2;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_121(iParam0, 1);
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

void func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_121(iParam0, 1);
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

void func_76(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_77(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

int func_78(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_1;
}

int func_79(int iParam0)
{
	int iVar0;

	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_80(int iParam0)
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
		iVar0 = func_122(iParam0);
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

bool func_81(int iParam0, int iParam1)
{
	return (func_106(iParam0) && (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1) != 0);
}

void func_82(int iParam0, int iParam1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 - (((*Global_1898346)[iParam0 /*6*/])->f_1 && iParam1));
}

bool func_83()
{
	return (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43799) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_43799, 0));
}

bool func_84(int iParam0)
{
	return iParam0 > -1;
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_86(var uParam0)
{
	return func_123(*uParam0, 1);
}

void func_87(var uParam0)
{
	func_124(uParam0, 0f);
}

bool func_88(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_89(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_90(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_91(int iParam0)
{
	int iVar0;

	if (!func_84(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_125(iParam0);
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

int func_92(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_93(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_92(iParam0)))
		{
			func_126(iParam0, 67108864, 1);
			func_39(iParam0, 19, 1);
		}
	}
}

float func_94(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_95(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	iVar0 = func_92(iParam0);
	uVar1 = func_41(iParam0, 0);
	func_127(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(uVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(uVar1);
}

int func_96(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == 0 || ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == ((*Global_1360165)[iParam0 /*1157*/])->f_128)
	{
		return 0;
	}
	return 1;
}

bool func_97(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 || iParam1);
	}
	else
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 - (((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 && iParam1));
	}
}

int func_99(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_84(iParam0))
	{
		return 0;
	}
	iVar0 = func_49(iParam0);
	if (func_40(iVar0, 0))
	{
		if (func_40(PED::_GET_RIDER_OF_MOUNT(iVar0, 0), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_96(iParam0)) || func_97(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_128(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_129(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_130(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_131(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(iParam0, 0));
					func_132(iParam0);
				}
			}
			else
			{
				if (func_34(iParam0, 32768, 1))
				{
					uVar2 = func_131(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(uVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(uVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_40(((*Global_1360165)[iParam0 /*1157*/])->f_124, 0))
		{
			if (func_34(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(((*Global_1360165)[iParam0 /*1157*/])->f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				}
				func_130(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_131(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(((*Global_1360165)[iParam0 /*1157*/])->f_124, true, true);
				func_130(iParam0);
				PED::DELETE_PED(&(((*Global_1360165)[iParam0 /*1157*/])->f_124));
			}
		}
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_1 = 0;
	func_133(iParam0, 0);
	return 1;
}

char* func_100(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_101(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_134(iParam1))
		{
			func_135(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_136(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_137(iParam0, 0);
			bVar0 = true;
		}
		func_138(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_103(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_104(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_105(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_139(iParam0))
	{
		return 0;
	}
	if ((func_140(((*Global_1347702)[59 /*49*/])->f_15, 1) && !func_140(((*Global_1347702)[61 /*49*/])->f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_141(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27) && !func_142(iParam0)) && !Global_43890)
		{
			func_144(iParam0, BUILTIN::VDIST2(func_143(iParam0), Global_36), -1, 1, 1);
			func_145((*Global_1835011)[iParam0 /*74*/], 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_147(func_146(iParam0), func_78(iParam0), 0, ((*Global_1835011)[iParam0 /*74*/])->f_21, iParam3))
		{
			return 0;
		}
		if (func_148(1) > 1)
		{
			if (((*Global_1835011)[iParam0 /*74*/])->f_73 <= 0)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - ((*Global_1835011)[iParam0 /*74*/])->f_73) < 60000)
			{
				if (func_149(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549->f_1494 & 32768 != 0) && func_61(Global_35, func_150(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(((*Global_1835011)[iParam0 /*74*/])->f_72))
					{
						((*Global_1835011)[iParam0 /*74*/])->f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(((*Global_1835011)[iParam0 /*74*/])->f_72, func_150(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_72) || CAM::IS_SPHERE_VISIBLE(func_150(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_151(((*Global_1835011)[iParam0 /*74*/])->f_1);
	if (!func_106(iVar0))
	{
		return 0;
	}
	else if (((*Global_1835011)[iParam0 /*74*/])->f_73 != 0)
	{
		((*Global_1835011)[iParam0 /*74*/])->f_73 = 0;
		func_152(iParam0);
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(((*Global_1835011)[iParam0 /*74*/])->f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(((*Global_1835011)[iParam0 /*74*/])->f_72);
		}
	}
	if (bParam1)
	{
		func_153(((*Global_1835011)[iParam0 /*74*/])->f_1);
	}
	else if (!&Global_1879534)
	{
		func_154(4);
	}
	return 1;
}

int func_106(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return 0;
	}
	return 1;
}

void func_107(int iParam0, int iParam1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	((*Global_1898346)[iParam0 /*6*/])->f_1 = (((*Global_1898346)[iParam0 /*6*/])->f_1 || iParam1);
}

float func_108(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

var func_109(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

bool func_110(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_65(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

int func_111(int iParam0, char* sParam1, Vector3* vParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			bVar1 = false;
		}
		else
		{
			bVar1 = true;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, bVar1, false) };
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, vVar2, &iVar0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar0, vParam2))
			{
				return iVar0;
			}
		}
	}
	return iVar0;
}

int func_112(int iParam0, int iParam1, int iParam2)
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

float func_113(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

float func_114(var uParam0)
{
	if (!func_86(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_119(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_155() - uParam0->f_1);
}

int func_115(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_156(iVar0, 2))
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
		func_157(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_65(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

int func_117(int iParam0)
{
	return iParam0;
}

void func_118(int iParam0)
{
	if (!func_158(iParam0))
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

bool func_119(var uParam0)
{
	return func_123(*uParam0, 2);
}

int func_120()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_121(int iParam0, int iParam1)
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

int func_122(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_159(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_123(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_124(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_155() - fParam1);
	func_160(uParam0, 1);
	func_161(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_125(int iParam0)
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

void func_126(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_127(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_162(iParam1);
	}
}

float func_128(int iParam0, int iParam1, bool bParam2)
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
	return func_108(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_129(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (((*Global_1360165)[iParam0 /*1157*/])->f_127 != 0)
	{
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_127 = func_163(iParam0);
		return ((*Global_1360165)[iParam0 /*1157*/])->f_127;
	}
	return 0;
}

void func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_49(iParam0);
	if (!PED::_IS_PED_CARRYING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_0x0D0DB2B6AF19A987(&iVar3);
		}
		iVar2++;
	}
}

int func_131(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126) && bParam1)
	{
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = func_164(iParam0);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

void func_132(int iParam0)
{
	int iVar0;

	if (!func_84(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1357549->f_1675[iVar0 /*5*/])->f_1 == iParam0)
		{
			(Global_1357549->f_1675[iVar0 /*5*/])->f_1 = -1;
			((*Global_1360165)[iParam0 /*1157*/])->f_127 = 0;
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	((*Global_1360165)[iParam0 /*1157*/])->f_70.f_12 = iParam1;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_135(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_165(iParam0, iParam1))
		{
			if (func_166(iParam0, iParam1))
			{
				if (func_167(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_168(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_136(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_137(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_138(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

int func_139(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_169(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_140(int iParam0, bool bParam1)
{
	switch (func_170(iParam0))
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

int func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (func_171(iParam0, bParam1, bParam2, 1))
	{
		return 1;
	}
	return 0;
}

bool func_142(int iParam0)
{
	return func_172(iParam0);
}

Vector3 func_143(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_144(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_104(32768))
	{
		return 0;
	}
	iVar0 = func_173();
	if ((bParam4 && func_174(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 512)) && !func_174(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024))
	{
		if (func_175())
		{
			return 0;
		}
	}
	if (((*Global_1835011)[iParam0 /*74*/])->f_71)
	{
		return 0;
	}
	if (!func_176(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_140(((*Global_1835011)[20 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[20 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_177()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_140(((*Global_1835011)[19 /*74*/])->f_1, 1) && Global_1879514->f_1 == ((*Global_1835011)[19 /*74*/])->f_1) && (MISC::GET_GAME_TIMER() - func_177()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_140(((*Global_1347702)[62 /*49*/])->f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		bVar3 = ((*Global_1835011)[iParam0 /*74*/])->f_70;
		if (func_178(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_179((*Global_1835011)[iParam0 /*74*/], 2))
			{
				if (func_180(iParam0))
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_181(iParam0));
					bVar2 = true;
				}
				else
				{
					((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_182(iParam0));
				}
			}
			else if (func_180(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, func_181(iParam0), func_183(iParam0), func_184(iParam0));
				bVar2 = true;
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_RADIUS(1673015813, func_185(iParam0), func_186(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_180(iParam0))
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_143(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_181(iParam0));
				bVar2 = true;
			}
		}
		else if (func_142(iParam0))
		{
			if (iParam0 == 7)
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(-1337945352, func_182(iParam0));
			}
			else
			{
				((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_182(iParam0));
			}
		}
		else
		{
			((*Global_1835011)[iParam0 /*74*/])->f_27 = MAP::_BLIP_ADD_FOR_COORD(1673015813, func_182(iParam0));
		}
		((*Global_1835011)[iParam0 /*74*/])->f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_180(iParam0))
			{
				func_107(iParam2, 4194304);
			}
			else
			{
				func_82(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(((*Global_1835011)[iParam0 /*74*/])->f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1835011)[iParam0 /*74*/])->f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(((*Global_1835011)[iParam0 /*74*/])->f_27, ((*Global_1835011)[iParam0 /*74*/])->f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(((*Global_1835011)[iParam0 /*74*/])->f_27, &(((*Global_1835011)[iParam0 /*74*/])->f_39));
		}
		if (!func_174(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024) && !func_142(iParam0))
		{
			MAP::_BLIP_SET_MODIFIER(((*Global_1835011)[iParam0 /*74*/])->f_27, 580546400);
			func_187(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_142(iParam0))
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1835011)[iParam0 /*74*/])->f_27, -1986290853);
	}
	if (bParam3 || func_179((*Global_1835011)[iParam0 /*74*/], 2))
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	else
	{
		MAP::_SET_BLIP_FLASH_STYLE(((*Global_1835011)[iParam0 /*74*/])->f_27, 724623647);
	}
	iVar4 = func_188(Global_40.f_4283);
	if (func_189(iVar4) && func_190(((*Global_1888801)[iVar4 /*35*/])->f_13))
	{
		bVar5 = true;
		bVar6 = func_191(iVar4);
	}
	if (func_192(iParam0, bVar5, iVar4))
	{
		func_193(((*Global_1835011)[iParam0 /*74*/])->f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_194(579))
	{
		func_195(579, ((*Global_1835011)[iParam0 /*74*/])->f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_174(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 4096) && !func_174(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192)) && IntToFloat(func_177()) >= 10f) && !Global_1935630->f_12) && !Global_16) && !func_196(Global_35, -2016812721)) && !PED::_IS_PED_USING_SCENARIO_HASH(Global_35, -1054012177)) && !PED::_IS_PED_USING_SCENARIO_HASH(Global_35, 1097070152))
	{
		if (!func_178(iParam0, iVar0) || (fParam1 >= (func_197(iParam0) * func_197(iParam0)) && !((*Global_1835011)[iParam0 /*74*/])->f_70))
		{
			MemCopy(&cVar7, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_198(&cVar7, 10000, 0, 0, 0, 1);
			func_187(&(((*Global_1835011)[iParam0 /*74*/])->f_29), 8192);
		}
	}
	return 1;
}

void func_145(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_146(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_30;
}

int func_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_173() != -1)
	{
		return 1;
	}
	if (iParam2 == 0 && func_199(0, 1, 1))
	{
		return 0;
	}
	if (&Global_1879534)
	{
		return 0;
	}
	if (func_200(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_201(iVar0, &uParam0))
		{
			(Global_40.f_4942[iVar0 /*60*/])->f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_126(iVar0, 512, 1);
			}
			else
			{
				func_48(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_148(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case 987244216:
						iVar1 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
						if (func_202(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar3 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = (Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar3 /*4*/])->f_1 /*3*/])->f_2;
							if (func_103(iVar2) && !func_172(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_149(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	uVar0 = func_146(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_201(iVar1, &uVar0))
		{
			iVar2 = func_92(func_203(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_42(iVar1, 67, 1))
				{
					return 1;
				}
				if (bParam2 && func_42(iVar1, 47, 1))
				{
					return 1;
				}
				if (!PED::_0x5102307CE88798EB(iVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iVar2))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

Vector3 func_150(int iParam0)
{
	return func_182(iParam0);
}

int func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_169(iParam0))
	{
		return -1;
	}
	if (func_173() != -1)
	{
		iVar2 = func_79(iParam0);
		if (iVar2 >= 0)
		{
			func_204(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*((*Global_1898346)[iVar1 /*6*/]) = { Var3 };
			func_205(iVar1, 1);
			func_204(iParam0, 1);
			Global_1898329 = &Global_1898329 + 1;
			if (&Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_79(iParam0);
		if (iVar2 >= 0)
		{
			func_204(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_206(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*((*Global_1898346)[iVar0 /*6*/]) = { Var3 };
					func_205(iVar0, 1);
					func_204(iParam0, 1);
					Global_1898329 = &Global_1898329 + 1;
					if (&Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_152(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = func_146(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_201(iVar1, &uVar0))
		{
			iVar2 = func_92(func_203(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(iVar2))
			{
				PED::_0x3088634CF8C819CF(iVar2);
			}
		}
		iVar1++;
	}
}

void func_153(int iParam0)
{
	func_207(iParam0);
}

void func_154(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

float func_155()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_156(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_208(iParam0, 1);
	func_209(iParam0, 1);
	func_210(iParam0, 128);
}

bool func_158(int iParam0)
{
	return func_156(iParam0, 2);
}

int func_159(int iParam0)
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

void func_160(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_162(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_84(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if ((Global_1357549->f_1675[iVar1 /*5*/])->f_1 == iParam0)
			{
				((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
				return &(Global_1357549->f_1675[iVar1 /*5*/]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1 /*5*/] != 0 && (Global_1357549->f_1675[iVar1 /*5*/])->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_84(iParam0))
	{
		if (iVar0 != 0)
		{
			(Global_1357549->f_1675[iVar1 /*5*/])->f_1 = iParam0;
			((*Global_1360165)[iParam0 /*1157*/])->f_126 = (Global_1357549->f_1675[iVar1 /*5*/])->f_4;
		}
	}
	return iVar0;
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_126))
	{
		iVar0 = func_129(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if ((Global_40.f_4942[iParam0 /*60*/])->f_7 != 0 && iVar1 != (Global_40.f_4942[iParam0 /*60*/])->f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, (Global_40.f_4942[iParam0 /*60*/])->f_7);
		}
		((*Global_1360165)[iParam0 /*1157*/])->f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_126);
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_126;
}

bool func_165(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_165(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_168(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_169(int iParam0)
{
	return func_170(iParam0) == 0;
}

int func_170(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_122(iParam0);
}

int func_171(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_211(bParam1, bParam2, bParam3);
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

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

int func_173()
{
	return Global_1572887->f_12;
}

int func_174(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_175()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

int func_176(int iParam0)
{
	if (func_173() == 0)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 18:
			return func_140(((*Global_1347702)[21 /*49*/])->f_15, 1);
		case 44:
			return func_140(((*Global_1347702)[83 /*49*/])->f_15, 1);
	}
	return 1;
}

int func_177()
{
	return &Global_1898438;
}

int func_178(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return 0;
	}
	if (func_180(iParam0))
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

bool func_179(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_212((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_181(int iParam0)
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

Vector3 func_182(int iParam0)
{
	if (func_180(iParam0))
	{
		return func_181(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

Vector3 func_183(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_185(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, ((*Global_1835011)[iParam0 /*74*/])->f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

float func_186(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_188(int iParam0)
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

bool func_189(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_190(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

bool func_191(int iParam0)
{
	if (!func_213(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_214(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_215(iParam0)) < BUILTIN::VDIST(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_215(iParam0), false) <= func_216();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ((*Global_1888801)[iParam0 /*35*/])->f_15, false) <= func_216();
	}
	return func_217();
}

int func_192(int iParam0, bool bParam1, int iParam2)
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

void func_193(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_206(iParam0))
	{
		return;
	}
	switch (func_218(iParam0))
	{
		case 1:
			iVar0 = func_219(iParam0);
			if (func_220(iVar0, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				if ((func_178(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_178(iVar0, -1) && !((*Global_1835011)[iVar0 /*74*/])->f_70) && ((*Global_1835011)[iVar0 /*74*/])->f_63 & 2 == 0)
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
				if (!func_142(iVar0))
				{
					MAP::_BLIP_SET_MODIFIER(((*Global_1835011)[iVar0 /*74*/])->f_27, -1986290853);
				}
				if (func_179((*Global_1835011)[iVar0 /*74*/], 2))
				{
					MAP::_BLIP_SET_MODIFIER(((*Global_1835011)[iVar0 /*74*/])->f_27, 724623647);
				}
				((*Global_1835011)[iVar0 /*74*/])->f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_219(iParam0);
			if (func_221(iVar1, bParam1, bParam2, iParam3) && Global_1357549->f_1709 > 1)
			{
				switch (func_222(iVar1))
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
				iVar2 = func_222(iVar1);
			}
			if (((*Global_1347702)[iVar1 /*49*/])->f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(((*Global_1347702)[iVar1 /*49*/])->f_37, iVar2);
				func_223(iVar1);
				((*Global_1347702)[iVar1 /*49*/])->f_38 = iVar2;
			}
			break;
	}
}

bool func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_173() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_195(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_224(iParam0, &iVar0, &iVar1);
	if (!func_225(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_226(iParam0, 1024))
	{
		return;
	}
	func_227(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 3;
}

bool func_196(var uParam0, int iParam1)
{
	return PED::_IS_PED_USING_SCENARIO_HASH(uParam0, iParam1);
}

float func_197(int iParam0)
{
	return (func_186(iParam0) / 2f);
}

var func_198(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_199(int iParam0, bool bParam1, bool bParam2)
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
		if (func_228())
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
		iVar0 = func_219(&(Global_1898164->f_1[0 /*5*/]));
		if (func_229(iVar0) && func_202(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_206(&(Global_1898164->f_1[0 /*5*/])))
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

int func_200(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_201(iVar0, &uParam0))
		{
			if ((Global_40.f_4942[iVar0 /*60*/])->f_59 != 0 && (Global_40.f_4942[iVar0 /*60*/])->f_59 != iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_201(int iParam0, var uParam1)
{
	var uVar0;

	if (!func_12(iParam0))
	{
		return false;
	}
	uVar0 = func_230(iParam0);
	return (*uParam1 && uVar0) != 0;
}

bool func_202(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_203(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

void func_204(int iParam0, bool bParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (!func_169(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_231(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_231(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_218(iParam0), func_219(iParam0), func_232(iParam0), func_231(iParam0), Global_36);
		}
	}
	func_233(iParam0, 1);
	bParam1 = bParam1;
}

void func_205(int iParam0, bool bParam1)
{
	if (((*Global_1898346)[iParam0 /*6*/])->f_2 == 0 || bParam1)
	{
		((*Global_1898346)[iParam0 /*6*/])->f_2 = func_234(Global_1898330[iParam0]);
		func_235(((*Global_1898346)[iParam0 /*6*/])->f_2, &(((*Global_1898346)[iParam0 /*6*/])->f_4), &(((*Global_1898346)[iParam0 /*6*/])->f_5), &(((*Global_1898346)[iParam0 /*6*/])->f_3));
	}
}

bool func_206(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_207(int iParam0)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (!func_80(iParam0))
	{
		return;
	}
	func_233(iParam0, 2);
}

void func_208(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_156(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_209(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_210(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
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

int func_212(var uParam0)
{
	if (func_174(&(uParam0->f_29), 62))
	{
		switch (func_236())
		{
			case 1:
				if (!func_174(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			case 2:
				if (!func_174(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			case 4:
				if (!func_174(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			case 8:
				if (!func_174(&(uParam0->f_29), 32))
				{
					if (func_174(&(uParam0->f_29), 2))
					{
						if (func_238(func_237()) < 5)
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

int func_213(int iParam0)
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

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
	}
	return 0;
}

Vector3 func_215(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_15;
}

float func_216()
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

bool func_217()
{
	return Global_1894899 & 2 != 0;
}

int func_218(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_239(func_234(iParam0));
}

int func_219(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_240(func_234(iParam0));
}

int func_220(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_192(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_221(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_241(iParam0, bParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_229(iParam0))
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

void func_223(int iParam0)
{
	if (((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::_BLIP_SET_MODIFIER(((*Global_1347702)[iParam0 /*49*/])->f_37, 495758964);
				break;
		}
	}
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_225(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_242(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_243(iParam0))
	{
		return 0;
	}
	if (func_244(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_226(iParam0, 1)) || func_104(32768))
	{
		if (!func_226(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_245())
	{
		return 0;
	}
	return 1;
}

bool func_226(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_227(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_228()
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

bool func_229(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_230(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_231(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_232(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_246(func_234(iParam0));
}

void func_233(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	func_247(iParam0, iParam1);
}

int func_234(int iParam0)
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

void func_235(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_239(iParam0);
	*uParam1 = func_240(iParam0);
	*uParam2 = func_246(iParam0);
}

int func_236()
{
	return &Global_1899516;
}

int func_237()
{
	return &Global_1899515;
}

int func_238(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_239(int iParam0)
{
	return iParam0 & 31;
}

int func_240(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_241(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(((*Global_1347702)[iParam0 /*49*/])->f_37)) && ((*Global_1347702)[iParam0 /*49*/])->f_12 & 1 != 0)
	{
		return ((*Global_1347702)[iParam0 /*49*/])->f_27 == iParam2;
	}
	return 0;
}

bool func_242(int iParam0, int iParam1)
{
	if (func_173() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_243(int iParam0)
{
	if (func_173() != -1)
	{
		if (func_226(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_226(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_226(iParam0, 65536) && !func_226(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_226(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_226(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_245()
{
	return Global_1905944->f_5694;
}

int func_246(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_247(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_248(iParam0);
	}
	else
	{
		func_249(iParam0, iParam1);
	}
	func_250();
}

int func_248(int iParam0)
{
	int iVar0;

	iVar0 = func_159(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_251(iVar0);
}

int func_249(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_252(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_250()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_251(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_252(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

