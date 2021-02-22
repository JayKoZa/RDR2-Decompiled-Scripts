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
	struct<14> Local_13 = { 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_27 = 1;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;

	Local_13.f_12 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_13);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		Local_13.f_2 = ScriptParam_0.f_1;
		Local_13.f_1 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(Local_13.f_2);
	}
	else
	{
		func_1(&Local_13);
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_13.f_1, false, false) };
	if (!func_2(vVar0))
	{
		func_1(&Local_13);
	}
	while (true)
	{
		Local_13.f_13 = (1 + Local_13.f_13);
		if (Local_13.f_13 >= 30)
		{
			Local_13.f_13 = 0;
			if (Global_1940258.f_6)
			{
				func_3(&Local_13, 5);
			}
		}
		if (func_4(Global_1940258, 4194304))
		{
			func_3(&Local_13, 5);
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			func_1(&Local_13);
		}
		switch (func_5(&Local_13))
		{
			case 0:
				if (func_6(&Local_13))
				{
					func_7(&Local_13);
					func_8(&Local_13);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_13.f_2))
				{
					if (func_9(Global_35) && func_10(&Local_13))
					{
						func_3(&Local_13, 1);
					}
				}
				else
				{
					func_3(&Local_13, 5);
				}
				break;
			case 1:
				if (func_6(&Local_13))
				{
					func_8(&Local_13);
				}
				if (func_11(&Local_13))
				{
					func_3(&Local_13, 2);
				}
				break;
			case 2:
				if (func_6(&Local_13))
				{
					func_8(&Local_13);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_13.f_1))
				{
					if (func_12(&Local_13))
					{
						func_3(&Local_13, 3);
					}
				}
				break;
			case 3:
				if (func_6(&Local_13))
				{
					func_13(&Local_13);
					func_14(&Local_13);
					func_8(&Local_13);
				}
				if (func_15(Local_13.f_11))
				{
					func_3(&Local_13, 4);
				}
				break;
			case 4:
				if (func_6(&Local_13))
				{
					func_8(&Local_13);
				}
				break;
			case 5:
				func_1(&Local_13);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;

	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	iVar0 = 0;
	while (iVar0 < uParam0->f_7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_7[iVar0]));
		}
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_11))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_11);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, var uParam1, var uParam2)
{
	return false;
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_16(uParam0);
}

bool func_4(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_5(var uParam0)
{
	return *uParam0;
}

bool func_6(var uParam0)
{
	return uParam0->f_14;
}

void func_7(var uParam0)
{
	uParam0->f_3[0] = joaat("P_CS_BILLSINGLE01BX");
	uParam0->f_3[1] = joaat("P_CS_BILLSINGLE01BX");
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_11))
	{
		uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@shoprobberies@GLOBAL@EVENT_OPEN_REGISTER@BASE", 2, 0, false, true);
	}
}

void func_8(var uParam0)
{
	uParam0->f_14 = 0;
}

int func_9(vector3 vParam0)
{
	int iVar0;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
		}
		iVar0++;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_11) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_11, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_11, "pblMain"))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_11, "pblMain"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_11, "pblMain");
		}
		return 0;
	}
	return 1;
}

bool func_11(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		iVar1 = uParam0->f_3[iVar0];
		if (iVar1 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
	{
		return false;
	}
	return true;
}

bool func_12(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_1, "register_open"))
	{
		return false;
	}
	return DECORATOR::DECOR_GET_BOOL(uParam0->f_1, "register_open");
}

void func_13(var uParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0.074814f, -0.117756f, 0.059386f) };
	uParam0->f_7[0] = OBJECT::CREATE_OBJECT(uParam0->f_3[0], vVar0, true, true, false, false, true);
	TASK::_0x8360C47380B6F351(uParam0->f_2, uParam0->f_7[0], "OOXO", 1);
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -0.082664f, -0.117757f, 0.059386f) };
	uParam0->f_7[1] = OBJECT::CREATE_OBJECT(uParam0->f_3[1], vVar0, true, true, false, false, true);
	TASK::_0x8360C47380B6F351(uParam0->f_2, uParam0->f_7[1], "OXOO", 1);
}

void func_14(var uParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OOXO", uParam0->f_7[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OXOO", uParam0->f_7[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "REGISTER", uParam0->f_1, 0);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_11);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_11, "pblMain", true);
}

bool func_15(int iParam0)
{
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0) >= 1f)
	{
		return true;
	}
	return false;
}

void func_16(var uParam0)
{
	uParam0->f_14 = 1;
}

