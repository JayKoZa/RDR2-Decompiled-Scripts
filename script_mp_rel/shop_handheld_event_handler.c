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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(joaat("closing"));
	}
	if (Global_1572887->f_13 == 0)
	{
	}
	else
	{
		return;
	}
	bVar0 = false;
	while (!func_2(1, 1))
	{
		bVar0 = false;
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		if (!Global_1915180->f_21989)
		{
			bVar0 = true;
		}
		if (func_3())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			func_1(joaat("closing"));
		}
		else
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 407174929))
			{
				Global_1051388->f_3576 = 1;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1543672280))
			{
				func_1(-1543672280);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1441911379))
			{
				func_1(-1441911379);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, 562684602))
			{
				func_1(562684602);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1275814714))
			{
				func_1(-1275814714);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -917343754))
			{
				func_1(-917343754);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_34, -1308691423))
			{
				func_1(-1308691423);
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1(joaat("closing"));
}

void func_1(int iParam0)
{
	Global_1915180->f_21989.f_4 = iParam0;
}

int func_2(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_3()
{
	return Global_1099294->f_331;
}

