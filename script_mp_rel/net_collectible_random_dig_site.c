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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	struct<8> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(&Local_18, vScriptParam_0);
	if (func_2() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_4(func_3(0)) != 7)
		{
		}
		else
		{
			func_5(&Local_18);
		}
	}
	if (func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_5(&Local_18);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_18.f_7))
	{
		func_5(&Local_18);
	}
	while (func_6(&Local_18))
	{
		if (func_7())
		{
			func_5(&Local_18);
		}
		if (func_8(&Local_18))
		{
			func_5(&Local_18);
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Local_18);
}

void func_1(var uParam0, vector3 vParam1)
{
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(3);
	*uParam0 = 6;
	uParam0->f_1 = func_9(vParam1);
	func_10(uParam0);
	if (func_11(uParam0, 1))
	{
		uParam0->f_16 = func_12(uParam0->f_1);
	}
	if (uParam0->f_1 <= 80)
	{
		if (!func_11(uParam0, 8))
		{
			func_13(uParam0, 8);
		}
	}
	if (func_11(uParam0, 8))
	{
		uParam0->f_10 = "script@mech@treasure_hunting@chest";
		uParam0->f_11 = "PBL_CHEST_01";
		uParam0->f_17 = func_14();
		uParam0->f_14 = func_15(0);
		uParam0->f_15 = func_16();
	}
	else
	{
		uParam0->f_10 = "script@mech@treasure_hunting@grab";
		uParam0->f_11 = "PBL_GRAB_01";
	}
	uParam0->f_2 = 0;
	if (func_11(uParam0, 1))
	{
		uParam0->f_19 = -990197142;
	}
	else
	{
		uParam0->f_19 = -795783582;
	}
	uParam0->f_8 = vParam1.x;
	uParam0->f_7 = vParam1.y;
	uParam0->f_4 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_7, 1) };
	func_17(&(uParam0->f_30), uParam0->f_4);
	func_18(*uParam0, uParam0->f_1);
	func_19();
	if (func_20(uParam0->f_4))
	{
		if (func_11(uParam0, 8))
		{
			if (func_21())
			{
				if (!func_11(uParam0, 16))
				{
					func_13(uParam0, 16);
				}
			}
		}
	}
}

int func_2()
{
	return Global_1572887->f_13;
}

struct<2> func_3(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_4(var uParam0, var uParam1)
{
	return uParam0;
}

void func_5(var uParam0)
{
	(*Global_1200815)[PLAYER::PLAYER_ID() /*9*/] = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = -1;
	func_22(&(uParam0->f_12), 1, 1);
	func_23(uParam0);
	if (func_11(uParam0, 2))
	{
		func_24(uParam0->f_4);
	}
	func_25(*uParam0, uParam0->f_1, 1);
	func_25(*uParam0, uParam0->f_1, 16);
	func_25(*uParam0, uParam0->f_1, 32);
	func_26();
	func_27();
	func_28(&(uParam0->f_30));
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_25))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_25, false);
	}
	func_29(0);
	func_30(&(uParam0->f_30));
	SCRIPTS::_0xE7282390542F570D(uParam0->f_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_5(uParam0);
		return 0;
	}
	return 1;
}

int func_7()
{
	return 0;
}

int func_8(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (func_31(uParam0) < 10)
	{
		if (func_11(uParam0, 8))
		{
			if (!func_32(*uParam0, uParam0->f_1, 16))
			{
				if (func_33(uParam0->f_4, &(uParam0->f_22), &(uParam0->f_20), &(uParam0->f_21), func_11(uParam0, 1), 1073741824 /* Float: 2f */))
				{
					func_34(*uParam0, uParam0->f_1, 16);
				}
			}
		}
		if (func_35(*uParam0) && func_36(uParam0))
		{
			func_37(uParam0, 11);
			if (func_38(uParam0->f_12))
			{
				func_22(&(uParam0->f_12), 1, 1);
			}
			func_27();
		}
		else if (func_31(uParam0) <= 6 && func_31(uParam0) > 1)
		{
			if (func_32(*uParam0, uParam0->f_1, 16))
			{
				func_37(uParam0, 12);
			}
		}
		bVar1 = (func_31(uParam0) <= 6 && !func_39(uParam0->f_12, 1));
		if (func_40(func_11(uParam0, 2)))
		{
			if (func_11(uParam0, 2))
			{
				func_41(uParam0->f_12, uParam0->f_4);
			}
			else
			{
				func_42(&(uParam0->f_30), uParam0->f_4, bVar1, 1, 1);
			}
		}
		func_43(uParam0->f_12);
		func_44(uParam0->f_4, *uParam0, uParam0->f_1, 1092616192 /* Float: 10f */);
	}
	switch (func_31(uParam0))
	{
		case 0:
			if (func_11(uParam0, 8))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_14, false);
				STREAMING::REQUEST_MODEL(uParam0->f_17, false);
				STREAMING::REQUEST_MODEL(uParam0->f_15, false);
			}
			if (func_11(uParam0, 1))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_16, false);
			}
			func_45(&(uParam0->f_30.f_7), uParam0->f_4, 1.5f, 1, 319, 0);
			if (func_32(*uParam0, uParam0->f_1, 16))
			{
				if (func_46(&(uParam0->f_9), uParam0->f_10, "PBL_LOOTED", uParam0->f_4, uParam0->f_22, uParam0->f_16, uParam0->f_20, uParam0->f_14, uParam0->f_21, uParam0->f_17, func_11(uParam0, 1)))
				{
					if (Global_1201108->f_13366 != *uParam0)
					{
						func_37(uParam0, 12);
					}
					else
					{
						func_37(uParam0, 15);
					}
				}
			}
			else if (!func_20(uParam0->f_4))
			{
				func_37(uParam0, 15);
			}
			else if (!func_11(uParam0, 16))
			{
				func_37(uParam0, 1);
			}
			break;
		case 1:
			if (func_11(uParam0, 8))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
				{
					return 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
				{
					return 0;
				}
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
				{
					return 0;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					uParam0->f_20 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_14, uParam0->f_4 + Vector(-10f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					uParam0->f_21 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_17, uParam0->f_4 + Vector(-20f, 0f, 0f), true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
				{
					uParam0->f_23 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_15, uParam0->f_4 + Vector(-15f, 0f, 0f), false, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_20))
				{
					return 0;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
				{
					return 0;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
				{
					return 0;
				}
			}
			if (func_11(uParam0, 1))
			{
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
				{
					return 0;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					uParam0->f_22 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_16, uParam0->f_4, true, true, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					return 0;
				}
				if (!MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(uParam0->f_4 + Vector(1f, 0f, 0f), &(uParam0->f_29), &(uParam0->f_26)))
				{
					return 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
				{
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_22, func_47(uParam0->f_26, 0), 2, true);
				}
			}
			func_37(uParam0, 2);
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_10, 64, uParam0->f_11, true, true);
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
			{
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_9);
			func_37(uParam0, 3);
			break;
		case 3:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_9, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, 0f, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "player", PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0);
				if (func_11(uParam0, 8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "CHEST", uParam0->f_20, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "DRESSING", uParam0->f_21, 0);
				}
				if (func_11(uParam0, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_9, "MOUND", uParam0->f_22, 0);
					}
				}
				func_37(uParam0, 4);
			}
			break;
		case 4:
			if (func_40(func_11(uParam0, 2)))
			{
				if (func_11(uParam0, 1))
				{
					func_48(uParam0->f_22, uParam0->f_22, 0);
					func_37(uParam0, 5);
				}
				else
				{
					func_37(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_49(uParam0, 1097859072 /* Float: 15f */))
			{
				if (!func_38(uParam0->f_12))
				{
					uParam0->f_12 = func_50("UC_CLT_DIG", joaat("INPUT_CONTEXT_X"), uParam0->f_4, 1070386381 /* Float: 1.6f */, 3, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
				func_37(uParam0, 6);
			}
			break;
		case 6:
			if (func_38(uParam0->f_12))
			{
				if (Global_1099294->f_331)
				{
					if (func_51(uParam0->f_12, 0))
					{
						func_52(uParam0->f_12, 0, 1, 1);
					}
				}
				else if (!func_51(uParam0->f_12, 0))
				{
					func_52(uParam0->f_12, 1, 1, 1);
				}
				func_53(uParam0->f_12, &(uParam0->f_30.f_6));
				if (func_54(uParam0->f_12, 1))
				{
					if (func_32(*uParam0, uParam0->f_1, 32))
					{
						func_29(1);
						if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 0, 0, 0, 0);
						}
						func_22(&(uParam0->f_12), 1, 1);
						func_55(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
						WEAPON::_HIDE_PED_WEAPONS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, 0);
						func_25(*uParam0, uParam0->f_1, 32);
						func_37(uParam0, 7);
					}
				}
				else if (func_36(uParam0))
				{
					if (func_56(uParam0->f_12, 1) > 0f)
					{
						func_58(func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1));
					}
					else if (func_56(uParam0->f_12, 1) == 0f)
					{
						func_27();
					}
				}
			}
			break;
		case 7:
			if (((func_59(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == joaat("weapon_unarmed") && func_59(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1, 0) == joaat("weapon_unarmed")) && !PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))) && !PED::_IS_PED_CARRYING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
			{
				func_23(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_9, uParam0->f_4, 0f, 0f, func_60(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), uParam0->f_4, 1), 2);
				func_37(uParam0, 8);
			}
			break;
		case 8:
			func_61();
			TASK::TASK_ENTER_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_9, "player", uParam0->f_11, 1069379748, 1, 128, 20000, -1082130432);
			uParam0->f_25 = PED::_0x4C39C95AE5DB1329(VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_4, 0f, 0f, 0f, 1f, 1f, 1f), 1, 16);
			func_37(uParam0, 9);
			break;
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_9, 0))
			{
				func_37(uParam0, 10);
			}
			break;
		case 10:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_9, 0) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_9, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_23, false);
				}
				if (!func_62(uParam0))
				{
					return 0;
				}
				func_63(uParam0->f_7);
				func_64(func_11(uParam0, 1), func_11(uParam0, 2));
				func_29(0);
				func_30(&(uParam0->f_30));
				if (func_11(uParam0, 2))
				{
					func_24(uParam0->f_4);
				}
				if (func_11(uParam0, 8))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_20, "ChestDugUp", true);
					TASK::_0x188F8071F244B9B8(uParam0->f_20, 1);
					func_34(*uParam0, uParam0->f_1, 16);
				}
				func_63(uParam0->f_7);
				func_27();
				if (func_11(uParam0, 2))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), -862059856, false, 0, false, false);
				}
				func_37(uParam0, 15);
			}
			break;
		case 11:
			if (func_32(*uParam0, uParam0->f_1, 1))
			{
				if (func_65())
				{
					func_25(*uParam0, uParam0->f_1, 1);
					func_37(uParam0, 12);
				}
				else if (!func_35(*uParam0))
				{
					func_37(uParam0, 4);
					func_25(*uParam0, uParam0->f_1, 1);
				}
			}
			break;
		case 12:
			if (func_38(uParam0->f_12))
			{
				func_22(&(uParam0->f_12), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_9))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_9, "LOOT", uParam0->f_23);
				}
				OBJECT::DELETE_OBJECT(&(uParam0->f_23));
			}
			iVar0 = func_66();
			if (!func_67(iVar0, 0))
			{
				return 0;
			}
			uParam0->f_3 = iVar0;
			uParam0->f_19 = func_68(uParam0->f_3);
			if (!func_11(uParam0, 4))
			{
				func_13(uParam0, 4);
			}
			if (func_11(uParam0, 8))
			{
				uParam0->f_18 = func_69(uParam0->f_3);
				STREAMING::REQUEST_MODEL(uParam0->f_18, false);
			}
			func_25(*uParam0, uParam0->f_1, 1);
			if (func_11(uParam0, 8))
			{
				func_37(uParam0, 13);
			}
			else
			{
				func_37(uParam0, 4);
			}
			break;
		case 13:
			if (!func_35(*uParam0))
			{
				if (STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						uParam0->f_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_18, uParam0->f_4 + Vector(0.1f, 0f, 0f), false, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
					{
						return 0;
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_24, true, true);
					MAP::_0x1726963E6049DB53(uParam0->f_24);
					func_37(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_24) || !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(uParam0->f_24))
			{
				uParam0->f_24 = 0;
				func_37(uParam0, 13);
				return 0;
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()))))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(TASK::_0xD04241BBF6D03A5E(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())), 1), uParam0->f_4, true) < 1.5f)
				{
					func_63(uParam0->f_7);
					Global_1201108->f_13366 = *uParam0;
					func_37(uParam0, 15);
				}
			}
			break;
	}
	return 0;
}

int func_9(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = Param0.f_1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iVar1));
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iVar0;
	}
	return iVar0;
}

void func_10(var uParam0)
{
	if (uParam0->f_1 <= 50)
	{
		func_13(uParam0, 1);
	}
	else
	{
		func_13(uParam0, 2);
	}
}

bool func_11(var uParam0, int iParam1)
{
	return func_70(uParam0->f_13, iParam1);
}

int func_12(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = -1160940577;
			break;
		case 2:
			iVar0 = -1160940577;
			break;
		case 3:
			iVar0 = -1160940577;
			break;
		case 4:
			iVar0 = -1160940577;
			break;
		case 5:
			iVar0 = -1160940577;
			break;
		case 6:
			iVar0 = -1160940577;
			break;
		case 7:
			iVar0 = -1160940577;
			break;
		case 8:
			iVar0 = -599228492;
			break;
		case 9:
			iVar0 = -599228492;
			break;
		case 10:
			iVar0 = -1160940577;
			break;
		case 11:
			iVar0 = -1160940577;
			break;
		case 12:
			iVar0 = -1160940577;
			break;
		case 13:
			iVar0 = -1160940577;
			break;
		case 14:
			iVar0 = -599228492;
			break;
		case 15:
			iVar0 = -1160940577;
			break;
		case 16:
			iVar0 = -1160940577;
			break;
		case 17:
			iVar0 = -1160940577;
			break;
		case 18:
			iVar0 = 1627076851;
			break;
		case 19:
			iVar0 = -1160940577;
			break;
		case 20:
			iVar0 = -1160940577;
			break;
		case 21:
			iVar0 = -672936509;
			break;
		case 22:
			iVar0 = -1160940577;
			break;
		case 23:
			iVar0 = -1160940577;
			break;
		case 24:
			iVar0 = -1160940577;
			break;
		case 25:
			iVar0 = -1160940577;
			break;
		case 26:
			iVar0 = -1996174505;
			break;
		case 27:
			iVar0 = 1627076851;
			break;
		case 28:
			iVar0 = -672936509;
			break;
		case 29:
			iVar0 = 2129417429;
			break;
		case 30:
			iVar0 = -1937147713;
			break;
		case 31:
			iVar0 = -1937147713;
			break;
		case 32:
			iVar0 = 1627076851;
			break;
		case 33:
			iVar0 = -1160940577;
			break;
		case 34:
			iVar0 = 1627076851;
			break;
		case 35:
			iVar0 = 2129417429;
			break;
		case 36:
			iVar0 = -397099226;
			break;
		case 37:
			iVar0 = 1465650316;
			break;
		case 38:
			iVar0 = 1465650316;
			break;
		case 39:
			iVar0 = 2129417429;
			break;
		case 40:
			iVar0 = -1996174505;
			break;
		case 41:
			iVar0 = 2129417429;
			break;
		case 42:
			iVar0 = 1627076851;
			break;
		case 43:
			iVar0 = 1627076851;
			break;
		case 44:
			iVar0 = -1996174505;
			break;
		case 45:
			iVar0 = -1996174505;
			break;
		case 46:
			iVar0 = 1627076851;
			break;
		case 47:
			iVar0 = 1627076851;
			break;
		case 48:
			iVar0 = -1160940577;
			break;
		case 49:
			iVar0 = -1160940577;
			break;
		case 50:
			iVar0 = -672936509;
			break;
	}
	return iVar0;
}

void func_13(var uParam0, int iParam1)
{
	if (!func_70(uParam0->f_13, iParam1))
	{
		func_71(&(uParam0->f_13), iParam1);
	}
}

int func_14()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 40000);
	if (iVar0 > 30000)
	{
		return 1998828269;
	}
	else if (iVar0 > 20000)
	{
		return -627187884;
	}
	else if (iVar0 > 10000)
	{
		return -114288404;
	}
	return -1420165463;
}

int func_15(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 4;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (bParam0)
	{
		return joaat("p_strongbox_snow_01x");
	}
	switch (iVar1)
	{
		case 0:
			return joaat("p_strongbox_muddy_01x");
		case 1:
			return joaat("p_strongbox_snow_01x");
		case 2:
			return joaat("p_strongbox_waterlogged_01x");
		case 3:
			return joaat("p_strongbox_rusted_01x");
		default:
			break;
	}
	return joaat("p_strongbox_muddy_01x");
}

int func_16()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (iVar1)
	{
		case 0:
			return -1271488117;
		case 1:
			return -908375120;
		case 2:
			return 1594937960;
		case 3:
			return 1785268684;
		case 4:
			return 1606857604;
		case 5:
			return -2135373529;
		default:
			break;
	}
	return 1606857604;
}

void func_17(var uParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		uParam0->f_8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, 0f, 0f, 0f, 2f, 2f, 2f, "colleactable restriction volume");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_8, 6, 0, 0, -1, -1, 0);
	}
}

void func_18(var uParam0, var uParam1)
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = uParam0;
}

void func_19()
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_3 = 0;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_6 = 0;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 0;
}

bool func_20(vector3 vParam0)
{
	return !PERSISTENCE::_0xB6E1A185C2B9319A(vParam0);
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (((*Global_1200815)[iVar3 /*9*/])->f_1 == ((*Global_1200815)[iVar2 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar3 /*9*/])->f_2 == ((*Global_1200815)[iVar2 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar3 /*9*/])->f_6)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_22(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_38(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_72(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_73(iVar0);
	*uParam0 = 0;
}

void func_23(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
	{
		func_74(uParam0->f_22, uParam0->f_22, 0);
	}
}

void func_24(vector3 vParam0)
{
	if (func_75(*Global_1201104, vParam0))
	{
		*Global_1201104 = { 0f, 0f, 0f };
	}
}

void func_25(int iParam0, int iParam1, int iParam2)
{
	func_76((*(*Global_1201108)[iParam0 /*1909*/])[iParam1 /*9*/], iParam2);
}

void func_26()
{
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = -1;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = -1f;
	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 0;
}

void func_27()
{
	if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 0;
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_5 = 0;
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = -1f;
	}
}

void func_28(var uParam0)
{
	func_77(uParam0);
	func_78(&(uParam0->f_7), 1);
}

void func_29(bool bParam0)
{
	if (bParam0)
	{
		func_79(0, 6);
	}
	else
	{
		func_80(0, 6, 0);
	}
}

void func_30(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_8);
	}
}

int func_31(var uParam0)
{
	return uParam0->f_2;
}

bool func_32(int iParam0, int iParam1, int iParam2)
{
	return func_70((*Global_1201108)[iParam0 /*1909*/][iParam1 /*9*/], iParam2);
}

int func_33(vector3 vParam0, var uParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0[1];
	var uVar2[1];
	var uVar4[1];
	int iVar6[4];
	int iVar11[4];
	int iVar16[30];

	iVar6[0] = joaat("p_strongbox_muddy_01x");
	iVar6[1] = joaat("p_strongbox_snow_01x");
	iVar6[2] = joaat("p_strongbox_waterlogged_01x");
	iVar6[3] = joaat("p_strongbox_rusted_01x");
	iVar11[0] = 1998828269;
	iVar11[1] = -627187884;
	iVar11[2] = -114288404;
	iVar11[3] = -1420165463;
	if (bParam6)
	{
		iVar16[0] = -1160940577;
		iVar16[1] = 1627076851;
		iVar16[2] = 1465650316;
		iVar16[3] = -1996174505;
		iVar16[4] = -17398012;
		iVar16[5] = -672936509;
		iVar16[6] = -754270386;
		iVar16[7] = 1189886733;
		iVar16[8] = 553886790;
		iVar16[9] = 1197559327;
		iVar16[10] = -1015852380;
		iVar16[11] = -1937147713;
		iVar16[12] = 1873076364;
		iVar16[13] = 369612903;
		iVar16[14] = -1838004738;
		iVar16[15] = 1554010903;
		iVar16[16] = -1831561045;
		iVar16[17] = -37640047;
		iVar16[18] = -1366179602;
		iVar16[19] = -599228492;
		iVar16[20] = -1163831424;
		iVar16[21] = 1131991595;
		iVar16[22] = 1778997707;
		iVar16[23] = -397099226;
		iVar16[24] = 972123551;
		iVar16[25] = 2129417429;
		iVar16[26] = -503751164;
		iVar16[27] = 281101495;
		iVar16[28] = -1010154358;
		iVar16[29] = 1407427711;
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			if (func_81(&uVar0, &iVar16, 1, vParam0, iParam7) > 0)
			{
				*uParam3 = &uVar0[0];
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		if (func_81(&uVar4, &iVar11, 1, vParam0, iParam7) > 0)
		{
			*iParam5 = &uVar4[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam5))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam4))
	{
		if (func_81(&uVar2, &iVar6, 1, vParam0, iParam7) > 0)
		{
			if (DECORATOR::DECOR_EXIST_ON(&(uVar2[0]), "ChestDugUp"))
			{
				*bParam4 = &uVar2[0];
				return 1;
			}
		}
	}
	else if (func_81(&uVar2, &iVar6, 1, vParam0, iParam7) > 0)
	{
		if (DECORATOR::DECOR_EXIST_ON(&(uVar2[0]), "ChestDugUp"))
		{
			*bParam4 = &uVar2[0];
			return 1;
		}
	}
	return 0;
}

void func_34(int iParam0, int iParam1, int iParam2)
{
	func_71((*(*Global_1201108)[iParam0 /*1909*/])[iParam1 /*9*/], iParam2);
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar2 = -1f;
	iVar4 = PLAYER::PLAYER_ID();
	if (((*Global_1200815)[iVar4 /*9*/])->f_1 != iParam0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar5 = iVar1;
			if (((*Global_1200815)[iVar5 /*9*/])->f_1 == ((*Global_1200815)[iVar4 /*9*/])->f_1)
			{
				if (((*Global_1200815)[iVar5 /*9*/])->f_2 == ((*Global_1200815)[iVar4 /*9*/])->f_2)
				{
					if (((*Global_1200815)[iVar5 /*9*/])->f_4)
					{
						if (fVar2 == -1f || fVar2 >= ((*Global_1200815)[iVar5 /*9*/])->f_8)
						{
							fVar2 = ((*Global_1200815)[iVar5 /*9*/])->f_8;
							iVar3 = iVar5;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > 0f)
	{
		if (&Global_1275573->f_154[&Global_1275573] != &Global_1275573->f_154[iVar3])
		{
			if (!func_70((*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/][((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 1))
			{
				func_71((*(*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/])[((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 1);
			}
			return 1;
		}
		if (!func_70((*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/][((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 32))
		{
			func_71((*(*Global_1201108)[((*Global_1200815)[iVar4 /*9*/])->f_1 /*1909*/])[((*Global_1200815)[iVar4 /*9*/])->f_2 /*9*/], 32);
		}
	}
	return 0;
}

bool func_36(var uParam0)
{
	return ((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 == *uParam0;
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_38(int iParam0)
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

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_72(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_40(bool bParam0)
{
	if (func_82(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (bParam0)
		{
			if (func_82(-862059856 /* GXTEntry: "Metal Detector" */, 1))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_41(var uParam0, vector3 vParam1)
{
	if (!func_20(vParam1))
	{
		func_24(vParam1);
		return;
	}
	if (func_83(*Global_1201104))
	{
		*Global_1201104 = { vParam1 };
	}
	else if (!func_75(*Global_1201104, vParam1))
	{
		if (BUILTIN::VDIST2(Global_35, vParam1) < BUILTIN::VDIST2(Global_35, *Global_1201104))
		{
			*Global_1201104 = { vParam1 };
		}
	}
}

void func_42(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (!func_82(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		return;
	}
	if (func_84(0))
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (&Global_1048576)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	if (TASK::_0xEC7E480FF8BD0BED(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return;
	}
	if (!bParam4 && uParam0->f_1 == 0)
	{
		return;
	}
	if (!func_83(*Global_1201104) && MISC::GET_DISTANCE_BETWEEN_COORDS(*Global_1201104, vParam1, true) <= 5f)
	{
		bVar0 = true;
	}
	if (bVar0 && uParam0->f_1 == 0)
	{
		return;
	}
	fVar1 = func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam1, 1);
	fVar2 = 10f;
	fVar2 = (fVar2 * (1f + func_86()));
	switch (uParam0->f_1)
	{
		case 0:
			if (fVar1 < fVar2)
			{
				if (bParam5)
				{
					if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
					{
						uParam0->f_5 = AUDIO::GET_SOUND_ID();
						if (func_59(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) != -862059856)
						{
							AUDIO::_0xDCF5BA95BBF0FABA(uParam0->f_5, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", 0, 0, iParam6);
						}
						func_87(uParam0, 1);
					}
				}
				else
				{
					func_87(uParam0, 1);
				}
			}
			break;
		case 1:
			iVar3 = BUILTIN::FLOOR((500f * ((fVar2 - fVar1) / fVar2)));
			iVar4 = BUILTIN::FLOOR((256f * ((fVar2 - fVar1) / fVar2)));
			if (iVar3 > 9999)
			{
				iVar3 = 9999;
			}
			PAD::SET_PAD_SHAKE(0, iVar3, iVar4);
			func_88(&(uParam0->f_2));
			func_87(uParam0, 2);
			break;
		case 2:
			if ((fVar1 >= (fVar2 + 5f) || !bParam4) || bVar0)
			{
				if (bParam5)
				{
					func_77(uParam0);
				}
				func_87(uParam0, 0);
			}
			else if (func_89(&(uParam0->f_2)) >= 2f)
			{
				func_87(uParam0, 1);
			}
			break;
	}
}

void func_43(int iParam0)
{
	if (func_38(iParam0))
	{
		if (func_51(iParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_1275573->f_8))
			{
				func_52(iParam0, 0, 1, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_1275573->f_8))
		{
			func_52(iParam0, 1, 1, 1);
		}
	}
}

void func_44(vector3 vParam0, int iParam3, int iParam4, float fParam5)
{
	if (func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), vParam0, 1) < fParam5)
	{
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 != iParam3)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_1 = iParam3;
		}
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 != iParam4)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_2 = iParam4;
		}
	}
}

void func_45(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_90(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_90(uParam0))
		{
		}
	}
}

int func_46(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11, bool bParam12)
{
	if (bParam12)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam7))
		{
			STREAMING::REQUEST_MODEL(iParam7, false);
			return 0;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam9))
	{
		STREAMING::REQUEST_MODEL(iParam9, false);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam11))
	{
		STREAMING::REQUEST_MODEL(iParam11, false);
		return 0;
	}
	if (bParam12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			iParam6 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam7, vParam3, true, true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		iParam8 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam9, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam8))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		bParam10 = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam11, vParam3, true, true, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam10))
	{
		return 0;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 64, sParam2, false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, 1) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, 1, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam3, 0f, 0f, 0f, 2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam6))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "MOUND", iParam6, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam8))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "CHEST", iParam8, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bParam10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, "DRESSING", bParam10, 0);
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_PED(*uParam0, "player", false) == Global_34)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "player", Global_34);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam2, true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
		return 1;
	}
	return 0;
}

Vector3 func_47(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;

	vVar0 = { func_91(vParam0) };
	vVar3 = { func_93(func_93(vVar0, func_92((fParam3 - 90f))), vVar0) };
	fVar6 = MISC::ATAN2(vVar3.y, vVar3.x);
	fVar7 = -MISC::ATAN2(vVar3.z, BUILTIN::SQRT(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y))));
	vVar8 = { -vVar3.y, vVar3.x, 0f };
	vVar11 = { func_93(vVar8, vVar3) };
	fVar14 = (MISC::ATAN2((func_94(vVar8, vVar0) / BUILTIN::VMAG(vVar8)), (func_94(vVar11, vVar0) / BUILTIN::VMAG(vVar11))) + 180f);
	return fVar14, fVar7, fVar6;
}

int func_48(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31))
	{
		Global_1276326->f_31 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1276326->f_31);
	}
	if (!func_95(iParam0))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam0, 0);
		PLAYER::_0x6ECFC621A168424C(iParam0, uParam1, iParam2);
		PLAYER::_0x907B16B3834C69E2(iParam0, 500f);
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]))
		{
			(*Global_1276326)[iVar0 /*2*/] = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(var uParam0, float fParam1)
{
	if (func_82(85134332 /* GXTEntry: "Pennington Field Shovel" */, 1))
	{
		if (Global_1099294->f_331)
		{
			return 0;
		}
		if (func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) > fParam1)
		{
			return 0;
		}
		if (func_11(uParam0, 2))
		{
			if (func_59(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1, 0) == -862059856 && func_57(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_4, 1) <= 1.6f)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_50(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_83(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_96(iVar0, 2))
		{
			if (func_97(vParam2, ((*Global_1949759)[iVar0 /*23*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
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
		func_98(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_51(int iParam0, bool bParam1)
{
	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	return !func_96(iParam0, 4);
}

void func_52(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_38(iParam0))
	{
		return;
	}
	iVar0 = func_72(iParam0);
	if (bParam1)
	{
		func_99(iParam0, 4);
		if (bParam3)
		{
			func_100(iVar0, 1);
		}
		func_101(iVar0, 1);
	}
	else
	{
		func_102(iParam0, 4);
		func_101(iVar0, 0);
	}
}

void func_53(int iParam0, var uParam1)
{
	if (AUDIO::_0xD9130842D7226045("RDRO_Collectible_Sounds_Travelling_Saleswoman", 0))
	{
		if (func_39(iParam0, 1))
		{
			if (!*uParam1)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam1 = 1;
			}
		}
		else if (*uParam1)
		{
			*uParam1 = 0;
		}
	}
}

bool func_54(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_38(iParam0))
	{
		return false;
	}
	iVar0 = func_72(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_55(int iParam0)
{
	int iVar0;

	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

float func_56(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_38(iParam0))
	{
		return 0f;
	}
	iVar0 = func_72(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

float func_57(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_58(float fParam0)
{
	if (!((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4 = 1;
		if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 < 0f)
		{
			((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_8 = fParam0;
		}
	}
}

int func_59(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

float func_60(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_61()
{
	if (((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_4)
	{
		((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_5 = 1;
	}
}

int func_62(var uParam0)
{
	var uVar0;

	((*Global_1200815)[PLAYER::PLAYER_ID() /*9*/])->f_7 = 1;
	while (!func_103(uParam0->f_19, &uVar0))
	{
		return 0;
	}
	func_105(func_104(-1113216174, -445015182), 1);
	if (func_11(uParam0, 2))
	{
		func_105(func_104(-1113216174, 99337762), 1);
	}
	return 1;
}

void func_63(var uParam0)
{
	PERSISTENCE::_0x8245C1F3262F4AC2(uParam0);
}

void func_64(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_106(-753305330, 0, 255, 0, 0);
	}
	else if (bParam0)
	{
		func_106(11389876, 0, 255, 0, 0);
	}
}

int func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else
		{
			iVar3 = iVar1;
			if (iVar3 != iVar2)
			{
				if (((*Global_1200815)[iVar3 /*9*/])->f_1 == ((*Global_1200815)[iVar2 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar3 /*9*/])->f_2 == ((*Global_1200815)[iVar2 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar3 /*9*/])->f_5)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_66()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar4 = iVar2;
			if (iVar4 != iVar3)
			{
				if (((*Global_1200815)[iVar4 /*9*/])->f_1 == ((*Global_1200815)[iVar3 /*9*/])->f_1)
				{
					if (((*Global_1200815)[iVar4 /*9*/])->f_2 == ((*Global_1200815)[iVar3 /*9*/])->f_2)
					{
						if (((*Global_1200815)[iVar4 /*9*/])->f_6)
						{
							uVar1 = ((*Global_1200815)[iVar4 /*9*/])->f_3;
							return uVar1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return uVar1;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_68(int iParam0)
{
	switch (iParam0)
	{
		case -250719930: /* GXTEntry: "Agate Arrowhead" */
			return -135773962;
		case -1866466055: /* GXTEntry: "Bone Arrowhead" */
			return 1711174319;
		case 1546533744: /* GXTEntry: "Chipped Arrowhead" */
			return -1388841754;
		case 1063947084: /* GXTEntry: "Crude Arrowhead" */
			return 1833116882;
		case 1570512815: /* GXTEntry: "Feldspar Arrowhead" */
			return 1732356987;
		case -909283963: /* GXTEntry: "Flint Arrowhead" */
			return 1365678051;
		case -1604348319: /* GXTEntry: "Obsidian Arrowhead" */
			return -469808552;
		case -965972353: /* GXTEntry: "Quartz Arrowhead" */
			return 651832873;
		case -1850613113: /* GXTEntry: "Raw Arrowhead" */
			return -1338236715;
		case 261854063: /* GXTEntry: "Rough Arrowhead" */
			return -1459382417;
		case -2023776602: /* GXTEntry: "Slate Arrowhead" */
			return -1980587442;
		case 751981376: /* GXTEntry: "Splintered Arrowhead" */
			return -305847860;
		case -753628968: /* GXTEntry: "Boar Bristle Brush" */
			return -1132845243;
		case 1006600695: /* GXTEntry: "Ebony Hairbrush" */
			return 1606281828;
		case 1742487931: /* GXTEntry: "Goat Hair Brush" */
			return 530382704;
		case -1631158895: /* GXTEntry: "Horse Hair Brush" */
			return -1519010704;
		case -1888442693: /* GXTEntry: "Rosewood Hairbrush" */
			return 520232109;
		case -27315089: /* GXTEntry: "New Guinea Rosewood Hairbrush" */
			return -364070233;
		case 1416504149: /* GXTEntry: "Boxwood Comb" */
			return -1296260337;
		case 249916796: /* GXTEntry: "Cherrywood Comb" */
			return 127681874;
		case -1763726091: /* GXTEntry: "Ivory Comb" */
			return 1290286961;
		case -1868057871: /* GXTEntry: "Tortoiseshell Comb" */
			return 1628530735;
		case 1979910825: /* GXTEntry: "Ebony Hairpin" */
			return 530930425;
		case -2058309720: /* GXTEntry: "Ivory Hairpin" */
			return -581360339;
		case 147602269: /* GXTEntry: "Jade Hairpin" */
			return -649069078;
		case 1204853609: /* GXTEntry: "Metal Hairpin" */
			return -180052139;
		case 1217599018: /* GXTEntry: "Carved Wooden Hairpin" */
			return -1597269158;
		case 686159610: /* GXTEntry: "Braxton Amethyst Necklace" */
			return -77692146;
		case -526980287: /* GXTEntry: "Tuamotu Pearl Necklace" */
			return -2098248158;
		case -523530337: /* GXTEntry: "Elliston Carved Bracelet" */
			return 544784227;
		case -162108183: /* GXTEntry: "Emmeline Coral Earrings" */
			return -1750110910;
		case 49516917: /* GXTEntry: "Harland Coral Ring" */
			return -373311654;
		case 308818593: /* GXTEntry: "Abello Ruby Bangle Bracelet" */
			return 309566985;
		case -1324394408: /* GXTEntry: "Endicott Diamond Earrings" */
			return -115477556;
		case 324548078: /* GXTEntry: "Ursula Citrine Earrings" */
			return -1845614766;
		case 1466045897: /* GXTEntry: "Sterling Tooth Earrings" */
			return 1216475110;
		case -1370882316: /* GXTEntry: "Duchess Emerald Earrings" */
			return -901049146;
		case -836035669: /* GXTEntry: "Bosque Emerald Ring" */
			return -1479457955;
		case -1893135121: /* GXTEntry: "Beaulieux Diamond Ring" */
			return -256638116;
		case 600432608: /* GXTEntry: "Ojeda Rose Gold Bangle Bracelet" */
			return -1298419407;
		case 575547207: /* GXTEntry: "Ainsworth Cross Necklace" */
			return -883489996;
		case -1579131656: /* GXTEntry: "Rou Pearl Necklace" */
			return 1357570735;
		case -939330110: /* GXTEntry: "Gosselin White Gold Necklace" */
			return -330620837;
		case -313250059: /* GXTEntry: "Hajnal Garnet Bangle Bracelet" */
			return -599044012;
		case -1804185681: /* GXTEntry: "Harford Garnet Earrings" */
			return 1465764690;
		case 319991179: /* GXTEntry: "Pilgrim Moonstone Ring" */
			return -1914990977;
		case 456059252: /* GXTEntry: "Pelle Pearl Necklace" */
			return 527426268;
		case -1430911710: /* GXTEntry: "Aubrey Onyx Ring" */
			return 700547967;
		case 1645128206: /* GXTEntry: "Durant Pearl Bracelet" */
			return -1434735180;
		case -644738616: /* GXTEntry: "Josephine Pearl Earrings" */
			return 604651083;
		case 391412462: /* GXTEntry: "Bonnard Pearl Ring" */
			return 371926572;
		case 289416445: /* GXTEntry: "Magnate Turquoise Ring" */
			return -253293041;
		case 61850108: /* GXTEntry: "Blakely Miniature Necklace" */
			return 536987249;
		case 333760707: /* GXTEntry: "Royal Victoria Diamond Earrings" */
			return -1538719578;
		case -1350438989: /* GXTEntry: "Beauchêne Ruby Earrings" */
			return -1949131163;
		case 205445966: /* GXTEntry: "Richelieu Amethyst Necklace" */
			return 967176349;
		case 1107778901: /* GXTEntry: "Helena Sapphire Bracelet" */
			return 574670748;
		case 232063688: /* GXTEntry: "Greco Sapphire Bracelet" */
			return -605903845;
		case -888745206: /* GXTEntry: "Dane Topaz Necklace" */
			return -32321552;
		case 1926912008: /* GXTEntry: "Banais Topaz Ring" */
			return 1904567340;
		case 996250359: /* GXTEntry: "Calumet Turquoise Earrings" */
			return -834041111;
		case -1523419995: /* GXTEntry: "Infanta Turquoise Bracelet" */
			return 726047816;
		case -209370662: /* GXTEntry: "Thorburn Turquoise Ring" */
			return -37487183;
		case 1289018795: /* GXTEntry: "Orchidee Diamond Earrings" */
			return 2079959006;
		case -288598209: /* GXTEntry: "Sackville Diamond Ring" */
			return -1647261494;
		case -1461195441: /* GXTEntry: "Yates Diamond Ring" */
			return 746055788;
		case 1496994240: /* GXTEntry: "1700 New Yorke Token" */
			return -2132348472;
		case 1030821510: /* GXTEntry: "1787 One Cent Token" */
			return 1531432272;
		case -329116887: /* GXTEntry: "1789 Penny" */
			return -1678406212;
		case -1884965711: /* GXTEntry: "1792 Nickel" */
			return 1789589305;
		case -753018368: /* GXTEntry: "1792 Liberty Quarter" */
			return 897707862;
		case 1328162258: /* GXTEntry: "1794 Silver Dollar" */
			return -1787268311;
		case -1841900790: /* GXTEntry: "1795 Half Eagle" */
			return 395137059;
		case -1867083042: /* GXTEntry: "1796 Halfpenny" */
			return -702109507;
		case -1323673307: /* GXTEntry: "1797 Gold Eagle" */
			return -1843094784;
		case 442429651: /* GXTEntry: "1798 Draped Bust Silver Dollar" */
			return 1659722492;
		case 1640145676: /* GXTEntry: "1800 Five Dollar Bechtler" */
			return -2063569423;
		case -1982102297: /* GXTEntry: "1800 Gold Dollar" */
			return -1400928817;
		case 285783511: /* GXTEntry: "1800 Gold Quarter" */
			return 1524848772;
		case -625323392: /* GXTEntry: "1800 Half Dime" */
			return -1914323519;
		case -1513842258: /* GXTEntry: "Condor Egg" */
			return 521036731;
		case -1117423291: /* GXTEntry: "Duck Egg" */
			return 1510925660;
		case 742074887: /* GXTEntry: "Eagle Egg" */
			return -1667316569;
		case -1232280687: /* GXTEntry: "Egret Egg" */
			return 875971115;
		case -158375659: /* GXTEntry: "Goose Egg" */
			return -1390165137;
		case 2060029625: /* GXTEntry: "Hawk Egg" */
			return 512666633;
		case 322658308: /* GXTEntry: "Heron Egg" */
			return 1056235591;
		case 410290576: /* GXTEntry: "Loon Egg" */
			return 1824947548;
		case 229697410: /* GXTEntry: "Spoonbill Egg" */
			return -297415734;
		case 1053249385: /* GXTEntry: "Vulture Egg" */
			return -744964659;
		default:
			break;
	}
	return -135773962;
}

int func_69(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_70(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_71(var uParam0, int iParam1)
{
	func_107(uParam0, iParam1);
}

int func_72(int iParam0)
{
	return iParam0;
}

void func_73(int iParam0)
{
	if (!func_108(iParam0))
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

int func_74(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_1276326->f_31) && ITEMSET::IS_IN_ITEMSET(iParam0, Global_1276326->f_31))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iParam0, Global_1276326->f_31);
	}
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iParam0);
	PLAYER::_0xDC5E09D012D759C4(iParam0, uParam1, iParam2);
	Var1.f_1 = -1082130432;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1276326[iVar0 /*2*/]) && Global_1276326[iVar0 /*2*/] == iParam0)
		{
			MISC::_COPY_MEMORY((*Global_1276326)[iVar0 /*2*/], &Var1, 2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_75(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_76(var uParam0, int iParam1)
{
	func_109(uParam0, iParam1);
}

void func_77(var uParam0)
{
	if (uParam0->f_5 != -1)
	{
		AUDIO::_0x0F2A2175734926D8("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		PAD::STOP_PAD_SHAKE(0);
		uParam0->f_5 = -1;
	}
	AUDIO::_0x531A78D6BF27014B("RDRO_Collectible_Sounds_Travelling_Saleswoman");
}

void func_78(var uParam0, int iParam1)
{
	if (func_90(uParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(uParam0, iParam1);
	}
}

void func_79(int iParam0, int iParam1)
{
	if (!func_110(iParam0, iParam1))
	{
		MISC::SET_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_111();
	}
}

void func_80(int iParam0, int iParam1, bool bParam2)
{
	if (func_110(iParam0, iParam1) && (!bParam2 || &(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(Global_1070356->f_20795.f_353[iParam0 /*11*/], iParam1);
		(Global_1070356->f_20795.f_353[iParam0 /*11*/])->f_1[iParam1] = 0;
		func_111();
	}
}

int func_81(var uParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6)
{
	var uVar0;
	var uVar1;

	uVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, iParam6, iParam6, iParam6);
	uVar1 = func_112(uParam0, iParam1, uVar0, iParam2);
	func_113(uVar0);
	return uVar1;
}

bool func_82(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_67(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_114(iParam0);
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
			if (!func_115(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_116(iParam0))
			{
				return true;
			}
			break;
	}
	return func_117(iParam0, 0, 0, 0) >= iParam1;
}

int func_83(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_84(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

bool func_85()
{
	return func_118() != -1;
}

float func_86()
{
	return (Global_1140484->f_2001[82 /*192*/])->f_188;
}

void func_87(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_88(var uParam0)
{
	func_119(uParam0, 0f);
}

float func_89(var uParam0)
{
	if (!func_120(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_121(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_122() - uParam0->f_1);
}

bool func_90(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

Vector3 func_91(vector3 vParam0)
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

Vector3 func_92(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_93(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_94(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_95(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar13;
	int iVar14;
	int iVar15;

	if (func_123() == 0)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(func_123()))
	{
		return 0;
	}
	Var0 = func_123();
	Var0.f_2 = 0;
	Var0.f_3 = 0;
	Var0.f_4 = 0;
	Var0.f_1 = 0;
	iVar13 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar14 = 0;
	while (iVar14 < 30)
	{
		Var0.f_1 = 0;
		Var0.f_3 = iVar14;
		Var0.f_2 = 0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 1;
			if (DATAFILE::_DATAFILE_GET_STRING(&uVar5, &Var0))
			{
				iVar15 = MISC::GET_HASH_KEY(&uVar5);
				if (iVar13 == iVar15)
				{
					return 1;
				}
			}
		}
		iVar14++;
	}
	return 0;
}

bool func_96(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

int func_97(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_98(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_100(iParam0, 1);
	func_101(iParam0, 1);
	func_102(iParam0, 128);
}

void func_99(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_100(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_96(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_101(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

bool func_103(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	func_124(&Var0, 1356624740);
	return func_125(iParam0, &Var0, uParam1, 0);
}

struct<2> func_104(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_105(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_106(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_126(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_107(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_108(int iParam0)
{
	return func_96(iParam0, 2);
}

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_110(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_1070356->f_20795.f_353[iParam0 /*11*/]), iParam1);
}

void func_111()
{
	SCRIPTS::_0x20F4CB76689ACDBC(&(Global_1070356->f_19683.f_260));
}

int func_112(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(uParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = iVar1;
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *iParam1)
			{
				if (iParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar2) == iParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *iParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_113(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0))
	{
		VOLUME::_DELETE_VOLUME(uParam0);
	}
}

int func_114(int iParam0)
{
	vector3 vVar0;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_115(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_127(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_128("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_129(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_130(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_131(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_131(iVar1);
	}
	return 0;
}

bool func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_67(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_132(iParam0);
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
	iVar1 = func_133(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_134(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_135(iParam0);
	iVar2 = func_134(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_117(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_114(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_127(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_136(iParam0, 0);
	}
	if (func_137(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_138(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_139(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_138(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

int func_118()
{
	return Global_1132549->f_137;
}

void func_119(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_122() - fParam1);
	func_140(uParam0, 1);
	func_141(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_120(var uParam0)
{
	return func_142(*uParam0, 1);
}

bool func_121(var uParam0)
{
	return func_142(*uParam0, 2);
}

float func_122()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_123()
{
	return (Global_1070356->f_26934[46 /*4*/])->f_3;
}

void func_124(var uParam0, int iParam1)
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
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
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

int func_125(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_143(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_144(uParam2, iParam0, Var1);
	return 1;
}

int func_126(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_145(iParam2, -372840566);
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
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_146(uParam1, iParam0, Var3);
	return 1;
}

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_114(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_147(iParam0, 1399091007))
	{
		func_148(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_128(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_138(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_129(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_130(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_131(int iParam0)
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

int func_132(int iParam0)
{
	struct<2> Var0;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_133(int iParam0)
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

int func_134(var uParam0, int iParam1)
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

int func_135(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0);
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

int func_136(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_149(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_151(&Var0, func_150(0));
	}
	if (!func_152(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_131(iVar14);
	return uVar15;
}

int func_137(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_138(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_139(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_153(iParam0, bParam1, 0) };
	return func_154(iParam0, Var0, Var0.f_4, bParam1);
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_142(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_143(var uParam0)
{
	func_124(uParam0, 143479330);
	if (func_155() == 2026485318)
	{
		func_124(uParam0, 617531372);
	}
	else
	{
		func_124(uParam0, 291123060);
	}
}

void func_144(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_156(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

void func_145(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

void func_146(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_156(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

int func_147(int iParam0, int iParam1)
{
	if (!func_67(iParam0, 0))
	{
		return func_158(func_157(iParam0), iParam1);
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

void func_148(int iParam0, var uParam1, var uParam2)
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

struct<14> func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_150(bool bParam0)
{
	int iVar0;

	iVar0 = func_138(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_154(923904168, func_159(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_154(923904168, func_159(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_154(923904168, func_159(bParam0), -740156546, 0);
}

void func_151(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_152(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_138(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<5> func_153(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_159(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_114(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_154(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_150(bParam1) };
			if (iParam2 && func_160(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_161(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_161(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_162(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_163(bParam1) };
			switch (func_132(iParam0))
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
			if (func_164(iParam0, -1823706425))
			{
				Var0 = { func_154(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_164(iParam0, -1483207246))
			{
				Var0 = { func_154(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_154(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_164(iParam0, -1653629781))
			{
				Var0 = { func_154(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_165(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_164(iParam0, -1653629781))
			{
				Var0 = { func_154(1384535894, Var0, 1784584921, bParam1) };
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

struct<4> func_154(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_67(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_138(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_155()
{
	return Global_1951141->f_1;
}

int func_156(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0)
{
	return iParam0;
}

int func_158(int iParam0, int iParam1)
{
	if (!func_166(iParam0, 2))
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

struct<4> func_159(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_138(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_154(joaat("character"), func_167(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_154(joaat("character"), func_167(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_154(joaat("character"), func_167(), -1591664384, bParam0);
}

int func_160(int iParam0, bool bParam1)
{
	if (func_132(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_168();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_161(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	return func_169(iParam0, *uParam1, iParam2, iParam3, 1, iParam4) > 0;
}

int func_162(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_170(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_163(bool bParam0)
{
	int iVar0;

	iVar0 = func_138(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_154(271701509, func_159(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_154(271701509, func_159(bParam0), 12999093, 0);
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_132(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_171(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_165(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_172(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_166(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

struct<4> func_167()
{
	struct<4> Var0;

	return Var0;
}

bool func_168()
{
	return (func_173(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_174(func_154(889965687 /* GXTEntry: "Wardrobe" */, func_159(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_169(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_67(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_137(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_154(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_138(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_138(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_170(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_138(0);
	*uParam1 = { func_154(iParam0, func_150(0), iParam3, 0) };
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

int func_171(int iParam0, int iParam1, int iParam2)
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

int func_172(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_138(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_175(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_138(bParam1), iParam0, iParam3);
}

int func_174(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_176(&uParam0, iParam4, bParam5, iParam6);
}

bool func_175(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_176(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_177(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_177(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_138(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_172(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

