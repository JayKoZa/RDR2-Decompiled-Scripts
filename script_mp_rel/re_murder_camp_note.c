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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<34> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	struct<8> Local_52 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_60 = 2;
	var uLocal_61 = 1;
	var uLocal_62 = 1;
	var uLocal_63 = 1;
	var uLocal_64 = 0;
	var uLocal_65 = 1;
	var uLocal_66 = 2;
	var uLocal_67 = 2;
	var uLocal_68 = 3;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 3;
	var uLocal_72 = 1;
	var uLocal_73 = 3;
	var uLocal_74 = 3;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
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
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
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
	int iVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_18))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_18))
	{
		iLocal_13 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_25)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_25)))
		{
			if (func_12())
			{
				func_13(0);
			}
		}
		return;
	}
	switch (func_14())
	{
		case 0:
			if (func_15())
			{
				Local_18.f_30 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Local_18);
				StringCopy(&(Local_18.f_25), "doc_treasure_map", 32);
				StringCopy(&(Local_18.f_1), "MAP", 32);
				Local_18.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_18, false);
				Local_18.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_18.f_6, &(Local_18.f_1));
				if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
				{
				}
				iVar0 = ENTITY::GET_ENTITY_MODEL(Local_18.f_5);
				switch (iVar0)
				{
					case joaat("S_MAPROLLED01X"):
						break;
					case joaat("S_MAPROLLED02X"):
						break;
					case joaat("S_MAPROLLED03X"):
						break;
					default:
						break;
				}
				Local_18.f_15.f_1 = Local_18.f_6;
				Local_18.f_15 = Local_18.f_5;
				Local_18.f_15.f_3 = 1;
				Local_18.f_29 = 1024;
				func_16();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_18.f_25));
				func_18();
				func_13(1);
				func_16();
			}
			func_17(2);
			break;
		case 2:
			if (func_15())
			{
				func_16();
			}
			if ((SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_25)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_18, 0)) && func_19())
			{
				Local_18.f_31 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_18.f_25), &(Local_18.f_15), 10, Local_18.f_29);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_18.f_25));
				func_17(3);
				fVar1 = 0f;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_18, "script_re@murder_campfire@knife_note", "enter", 1))
				{
					fVar1 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_18, "script_re@murder_campfire@knife_note", "enter");
				}
				iLocal_77 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_18.f_6, "Knife");
				iLocal_78 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_18.f_6, "Head");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
				{
					if (TASK::_0x6EF4E31B4D5D2DA0(Local_18.f_6, "Knife"))
					{
						if (ENTITY::PLAY_ENTITY_ANIM(iLocal_77, "enter_knife", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
						{
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
					{
						if (TASK::_0x6EF4E31B4D5D2DA0(Local_18.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
				else if (func_20() == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
					{
						if (TASK::_0x6EF4E31B4D5D2DA0(Local_18.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@head_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_34, "inInspectionMode"))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UP_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_DOWN_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LEFT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_RIGHT_ONLY"), true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_78, true, false) };
					Local_52 = { vVar2 };
					Local_52.f_7 = 0;
					_NAMESPACE29::_0x66F9EB44342BB4C5(Global_34, &Local_52);
				}
			}
			if (func_15())
			{
				func_16();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
			{
				if (func_20() == 1 || func_20() == 9)
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.49f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.9f))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@head_note", -1000f);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@knife_note", -1000f);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_78, false);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_78);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_78);
					}
				}
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_18) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_TREASURE_MAP")) == 0)
			{
				iLocal_13 = 0;
			}
			break;
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_23(&iVar0);
	}
}

bool func_12()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_34))
	{
		return true;
	}
	return false;
}

void func_13(int iParam0)
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

int func_14()
{
	return Local_18.f_33;
}

bool func_15()
{
	return Local_18.f_32;
}

void func_16()
{
	Local_18.f_32 = 0;
}

void func_17(int iParam0)
{
	Local_18.f_33 = iParam0;
	func_24();
}

void func_18()
{
	if (Local_18.f_30 == joaat("PROP_PLAYER_RE_MURDER_CAMP_TREE_NOTE"))
	{
		StringCopy(&(Local_18.f_7), "script_re@murder_campfire@knife_note", 64);
	}
	else if (Local_18.f_30 == joaat("PROP_PLAYER_RE_MURDER_CAMP_ROCK_NOTE"))
	{
		StringCopy(&(Local_18.f_7), "script_re@murder_campfire@head_note", 64);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_7)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(Local_18.f_7));
	}
}

bool func_19()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_7)))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(&(Local_18.f_7)))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_20()
{
	return Global_1896622.f_41;
}

void func_21(int iParam0)
{
	Local_18 = iParam0->f_1;
}

void func_22(int iParam0)
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_TREASURE_MAP")) == 0)
	{
		iLocal_13 = 0;
	}
}

void func_23(int iParam0)
{
}

void func_24()
{
	Local_18.f_32 = 1;
}

