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
	bool bVar0;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_0xFD4272A137703449();
	}
	MISC::_GAME_TRANSITION_MANAGER_INIT(-1329374618);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::_0x57C6525034E76EB0();
	BUILTIN::WAIT(1000);
	if (!REPLAY::_0x9EEB007317FA3B9C())
	{
		if (REPLAY::_0xB3F2829907403C13())
		{
		}
	}
	if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !NETWORK::_0xFC4165C9165C166F())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1(0);
		func_2();
	}
	while (bVar0)
	{
		bVar0 = REPLAY::_0x9EEB007317FA3B9C();
		if (!bVar0)
		{
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_1(0);
	func_2();
	if (REPLAY::_0x9EEB007317FA3B9C())
	{
		REPLAY::_0xCEEC64BD27A59312(1);
	}
	MISC::_GAME_TRANSITION_MANAGER_SHUTDOWN();
	func_3(0, -1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<31> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)) == iVar0;
	}
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887->f_342)) && (bParam0 || bVar1))
	{
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887->f_342));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887->f_342 = { Var2 };
}

void func_2()
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887->f_248.f_63 = 0;
	Global_1572887->f_248.f_90 = 0;
	Global_1572887->f_248.f_1 = -1;
	if (Global_1572887->f_248.f_86 == 2)
	{
		Global_1572887->f_248.f_86 = 0;
	}
}

void func_3(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, iParam1);
	}
	func_8(4);
	func_9(1);
}

void func_4()
{
	Global_1572887->f_248.f_62 = MISC::GET_GAME_TIMER();
}

void func_5(int iParam0)
{
	Global_1572887->f_248.f_2 = iParam0;
}

void func_6(int iParam0)
{
	Global_1572887->f_248 = iParam0;
}

void func_7(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_8(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

