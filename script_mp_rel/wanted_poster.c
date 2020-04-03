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
	struct<26> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
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

int func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return 1;
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_18))
	{
		iLocal_13 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_18)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_18)))
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
				Local_18.f_7 = TASK::_0x2D0571BB55879DA2(Local_18);
				if (Local_18.f_7 == -630818830)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER_CHAIN_GANG", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_chain_gang", 32);
					Local_18.f_8.f_2 = 0;
				}
				else if (Local_18.f_7 == -1325774943)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_player", 32);
					Local_18.f_8.f_2 = 0;
				}
				else
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster", 32);
					Local_18.f_8.f_2 = 0;
				}
				Local_18.f_6 = TASK::_0xDF7993356F52359A(Local_18, 0);
				Local_18.f_5 = TASK::_0x295514F198EFD0CA(Local_18.f_6, &(Local_18.f_1));
				Local_18.f_8.f_1 = Local_18.f_6;
				Local_18.f_8 = Local_18.f_5;
				Local_18.f_8.f_3 = 1;
				Local_18.f_22 = 1024;
				func_16();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_18.f_18));
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
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_18)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_18, 0))
			{
				Local_18.f_23 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_18.f_18), &(Local_18.f_8), 10, Local_18.f_22);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_18.f_18));
				func_17(3);
			}
			break;
		case 3:
			if (func_15())
			{
				func_16();
			}
			if ((!PED::IS_PED_USING_ANY_SCENARIO(Local_18) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(493105444) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2124539575) == 0)
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
		func_18(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_19(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_20(&iVar0);
	}
}

int func_12()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_34))
	{
		return 1;
	}
	return 0;
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
	return Local_18.f_25;
}

bool func_15()
{
	return Local_18.f_24;
}

void func_16()
{
	Local_18.f_24 = 0;
}

void func_17(int iParam0)
{
	Local_18.f_25 = iParam0;
	func_21();
}

void func_18(int iParam0)
{
	Local_18 = iParam0->f_1;
}

void func_19(int iParam0)
{
	if ((Local_18.f_25 >= 3 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(493105444) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2124539575) == 0)
	{
		iLocal_13 = 0;
	}
}

void func_20(int iParam0)
{
}

void func_21()
{
	Local_18.f_24 = 1;
}

