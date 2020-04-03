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
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar3;
	var uVar4;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
	}
	iVar3 = 0;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (func_1(&iVar3, &uVar4, 1, &uVar0))
		{
		}
		else
		{
			BUILTIN::WAIT(0);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(int iParam0, var uParam1, bool bParam2, var uParam3)
{
	switch (*iParam0)
	{
		case 0:
			if (bParam2)
			{
				func_2(uParam3, 0);
				bParam2 = false;
			}
			if (func_3(uParam3) && func_4(uParam3) > 2f)
			{
				func_5(iParam0, 1);
				func_6(uParam3);
			}
			break;
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			func_5(iParam0, 2);
			break;
		case 2:
			if (ANIMSCENE::_0x25557E324489393C(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_5(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(*uParam1, 0))
			{
				if (PED::IS_PED_MALE(Global_34))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_34, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_34, 0);
				}
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_5(iParam0, 5);
			}
			break;
		case 5:
			if ((!ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam1, 0) || PED::IS_PED_FALLING(Global_34)) || ENTITY::IS_ENTITY_IN_WATER(Global_34))
			{
				if (PED::IS_PED_MALE(Global_34))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_34);
				}
				else
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_34);
				}
				func_5(iParam0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1)
{
	if (bParam1 || !func_3(uParam0))
	{
		func_7(uParam0);
	}
}

bool func_3(var uParam0)
{
	return func_8(*uParam0, 1);
}

float func_4(var uParam0)
{
	if (!func_3(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_9(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_10() - uParam0->f_1);
}

void func_5(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_7(var uParam0)
{
	func_11(uParam0, 0f);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_9(var uParam0)
{
	return func_8(*uParam0, 2);
}

float func_10()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_10() - fParam1);
	func_12(uParam0, 1);
	func_13(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

