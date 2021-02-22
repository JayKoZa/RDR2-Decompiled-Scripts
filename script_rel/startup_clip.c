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
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}
	bVar0 = true;
	if (bVar0)
	{
		func_1();
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
	func_1();
	func_2();
	if (REPLAY::_0x9EEB007317FA3B9C())
	{
		REPLAY::_0xCEEC64BD27A59312(1);
	}
	MISC::_GAME_TRANSITION_MANAGER_SHUTDOWN();
	func_3(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	struct<19> Var0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887.f_252)))
	{
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887.f_252));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887.f_252 = { Var0 };
}

void func_2()
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887.f_164.f_61 = 0;
	if (Global_1572887.f_164.f_83 == 2)
	{
		Global_1572887.f_164.f_83 = 0;
	}
}

void func_3(int iParam0)
{
	if (iParam0 != 0)
	{
		func_7(iParam0, -1);
	}
	func_8(4);
	func_9(1);
}

void func_4()
{
	Global_1572887.f_164.f_60 = MISC::GET_GAME_TIMER();
}

void func_5(int iParam0)
{
	Global_1572887.f_164.f_1 = iParam0;
}

void func_6(int iParam0)
{
	Global_1572887.f_164 = iParam0;
}

void func_7(int iParam0, int iParam1)
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
}

void func_8(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

