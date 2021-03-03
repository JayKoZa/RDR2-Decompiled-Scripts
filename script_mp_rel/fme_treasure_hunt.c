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
	struct<30> Local_14 = { -1, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, -1 } ;
	vector3 vLocal_44[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<73> Local_141 = { -1, -1, 0, 0, 0, 3, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_214 = 0;
	struct<18> Local_215 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_233 = 255;
	var uLocal_234 = 255;
	var uLocal_235 = 255;
	var uLocal_236 = 255;
	var uLocal_237 = 255;
	var uLocal_238 = 255;
	var uLocal_239 = 255;
	var uLocal_240 = 255;
	var uLocal_241 = 255;
	var uLocal_242 = 255;
	var uLocal_243 = 255;
	var uLocal_244 = 255;
	var uLocal_245 = 255;
	var uLocal_246 = 255;
	var uLocal_247 = 255;
	var uLocal_248 = 255;
	var uLocal_249 = 255;
	var uLocal_250 = 255;
	var uLocal_251 = 255;
	var uLocal_252 = 255;
	var uLocal_253 = 255;
	var uLocal_254 = 255;
	var uLocal_255 = 255;
	var uLocal_256 = 255;
	var uLocal_257 = 255;
	var uLocal_258 = 255;
	var uLocal_259 = 255;
	var uLocal_260 = 255;
	var uLocal_261 = 255;
	var uLocal_262 = 255;
	var uLocal_263 = 255;
	var uLocal_264 = 255;
	struct<6> Local_265[32];
	struct<1446> Local_458 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	float fLocal_1907 = 0f;
	float fLocal_1908 = 0f;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1907 = 1f;
	fLocal_1908 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_7))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_215, 50, 50);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_215), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_265, 193, 51);
	func_10(NETWORK::_0x690806BC83BC8CA2(&(Local_265[0 /*6*/])), 193, "m_baseClientData");
	func_11();
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
	}
}

bool func_3(struct<2> Param0)
{
	if (func_15(0, 0))
	{
		return true;
	}
	else if (func_16(Param0, 0, 128))
	{
		return true;
	}
	else if (!func_17())
	{
		return true;
	}
	else if (func_18(Local_458, 64))
	{
		return true;
	}
	else if (Local_458.f_10 == 9)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	NETWORK::_0x236905C700FDB54D();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_21();
	}
	func_22();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_23() == 0)
		{
			if (func_24())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_14, 30, 39);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_14), 30, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_44, 97, 40);
	func_10(NETWORK::_0x690806BC83BC8CA2(&(vLocal_44[0 /*3*/])), 97, "m_clientData");
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	vector3 vVar22;

	Local_458 = { *iParam0 };
	Local_458.f_1333 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_458.f_1337 = MISC::GET_GAME_TIMER();
	Local_458.f_1269 = func_25(iParam0->f_1) + 1000;
	Local_458.f_1270 = func_26(iParam0->f_1, iParam0->f_2, iParam0->f_3) + 1000;
	Local_458.f_1339 = { func_27(iParam0->f_1, iParam0->f_3) };
	Local_458.f_1347 = { func_28(iParam0->f_1, iParam0->f_3) };
	Local_458.f_1294 = func_29(iParam0->f_1, iParam0->f_2);
	Local_458.f_1295 = func_30(iParam0->f_1, iParam0->f_2);
	Local_458.f_1296 = func_31(iParam0->f_1, iParam0->f_2);
	Local_458.f_1400 = { func_32(iParam0->f_1, iParam0->f_2) };
	func_34(func_33(iParam0->f_1, iParam0->f_2));
	func_35(1619021308);
	if (func_36(&Var0, iParam0->f_1))
	{
		Var5 = { Var0 };
		if (func_37(&Var5) && func_38(&Var5, iParam0->f_3))
		{
			Local_458.f_1274 = 1;
			func_39(Var5, 1189568052, &(Local_458.f_1274), 0);
			Local_458.f_1276 = 2;
			func_39(Var5, -1755025897, &(Local_458.f_1276), 0);
			Local_458.f_1275 = 2;
			func_39(Var5, 948567928, &(Local_458.f_1275), 0);
			Local_458.f_1277 = 28;
			func_39(Var5, -823479386, &(Local_458.f_1277), 1);
			Local_458.f_1388 = joaat("STANDARD");
			func_40(Var5, -467067774, &iVar10, 1);
			func_41(iVar10);
			func_42(Var5, -13272314, &bVar11, 0);
			if (bVar11)
			{
				func_43(134217728);
			}
		}
		Var5 = { Var0 };
		if (((func_44(&Var5) && func_45(&Var5, Local_458.f_2)) && func_37(&Var5)) && func_38(&Var5, iParam0->f_3))
		{
			if (Local_458.f_9 != joaat("POSSE_VERSUS"))
			{
				func_40(Var5, 511429636, &iVar12, 0);
				iVar13 = iVar12;
				if (iVar13 != 0)
				{
					MISC::_0xBE83CAE8ED77A94F(iVar12);
				}
				iVar14 = -1;
				func_39(Var5, -1102158142, &iVar14, 0);
				if (iVar14 >= 0 && iVar14 < 24)
				{
					NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iVar14, 0, 0, 0, false);
				}
			}
		}
	}
	if (func_46(iParam0->f_1, iParam0->f_3, &iVar15))
	{
		iVar16 = func_48(func_47(joaat("WINS"), iVar15));
		iVar17 = func_48(func_47(joaat("LOSSES"), iVar15));
		Local_458.f_1278 = (iVar16 + iVar17);
	}
	iVar18 = func_49(iParam0->f_1);
	if (iVar18 != 0)
	{
		if (func_50(iVar18, &(Local_458.f_1392), 600, -1, 0, 0))
		{
			func_51();
		}
	}
	func_52();
	func_53();
	func_54();
	if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		func_55(999.9f);
		GRAPHICS::_0x5199405EABFBD7F0(func_56());
		GRAPHICS::_0x5199405EABFBD7F0(func_57());
		GRAPHICS::_0x5199405EABFBD7F0(func_58());
		Local_458.f_1418 = GRAPHICS::_0x842CCC9491FFCD9B(func_59());
		GRAPHICS::_0xF3E039322BFBD4D8(Local_458.f_1418);
		func_60(&(Local_458.f_1421), 1, 0);
		Local_458.f_1421.f_2 = -1812916243;
		func_61(&(Local_458.f_1421), 0);
		if (func_62(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_63(1);
		}
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
		AUDIO::START_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	else if (GANG::_0x9BE7DCB22D32CCBE(iParam0->f_6, PLAYER::PLAYER_ID()))
	{
		func_43(131072);
	}
	func_64();
	if (func_65(131072))
	{
		vVar19 = { func_66(iParam0->f_1, iParam0->f_2) };
		vVar22 = { func_67(iParam0->f_1, iParam0->f_2) };
		if (func_68(vVar19))
		{
		}
		else
		{
			func_69(vVar19, vVar22);
		}
		func_70(1);
	}
	if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		func_71();
	}
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_215.f_17[iVar0] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		iVar0++;
	}
	func_72();
}

bool func_15(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_12)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377.f_124517.f_135 & 8 != 0)
	{
		Global_1071686.f_28351 = 1;
		return true;
	}
	if (func_73(Global_1051213) && !func_74(Global_1051213, Param0))
	{
		Global_1071686.f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
	{
		Global_1071686.f_28351 = 4;
		return true;
	}
	if (Global_263042[Global_1296859 /*70*/] > 2)
	{
		Global_1071686.f_28351 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1071686.f_28351 = 6;
		return true;
	}
	if (func_77())
	{
		Global_1071686.f_28351 = 7;
		return true;
	}
	if (Global_1572887.f_7 & 1 != 0)
	{
		if (!func_73(Global_1051213))
		{
			Global_1071686.f_28351 = 8;
			return true;
		}
	}
	if (Global_265377.f_124675 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265377.f_124675))
	{
		Global_1071686.f_28351 = 9;
		return true;
	}
	Global_1071686.f_28351 = 0;
	return false;
}

bool func_17()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0, int iParam1)
{
	return func_78(Global_1196898.f_78[iParam0 /*20*/].f_6, iParam1);
}

void func_19()
{
	switch (Local_215)
	{
		case 0:
			func_79();
			break;
		case 1:
			func_80();
			break;
		case 3:
			func_81();
			break;
		case 4:
			func_82();
			break;
		case 5:
			func_83();
			break;
		case 6:
			func_84();
			break;
		case 7:
			func_85();
			break;
		case 8:
			func_86();
			break;
	}
}

void func_20()
{
	func_87();
	func_53();
	func_88();
	func_89();
	func_90();
	func_54();
	func_91();
	func_92();
	func_93();
	func_94();
	switch (Local_458.f_10)
	{
		case 0:
			func_95();
			break;
		case 1:
			func_96();
			break;
		case 2:
			func_97();
			break;
		case 3:
			func_98();
			break;
		case 4:
			func_99();
			break;
		case 5:
			func_100();
			break;
		case 6:
			func_101();
			break;
		case 7:
			func_102();
			break;
		case 8:
			func_103();
			break;
	}
}

void func_21()
{
	if (Local_215 > 5)
	{
		NETWORK::_0x78335E12DB0BF961(664);
	}
	func_104();
}

void func_22()
{
	bool bVar0;

	func_105();
	func_106(1);
	func_107();
	func_108();
	func_109();
	func_110();
	func_111();
	func_113(func_112(Local_458.f_1));
	func_114(1);
	func_61(&(Local_458.f_1421), 0);
	if (DATAFILE::_0x7907969497EA92F5(Local_458.f_1392))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_458.f_1392);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_458.f_1393))
	{
		VOLUME::_DELETE_VOLUME(Local_458.f_1393);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_458.f_1394))
	{
		VOLUME::_DELETE_VOLUME(Local_458.f_1394);
	}
	if (func_115())
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	GRAPHICS::_0x37D7BDBA89F13959(func_56());
	GRAPHICS::_0x37D7BDBA89F13959(func_57());
	GRAPHICS::_0x37D7BDBA89F13959(func_58());
	if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		func_116(Local_458.f_1338);
		MISC::CLEAR_OVERRIDE_WEATHER();
		NETWORK::_0x65F040D91001ED4B(0);
		func_117();
		HUD::_DISPLAY_HUD_COMPONENT(690901814);
		func_118(&(Local_458.f_1421));
		if (GRAPHICS::_0xEEF83A759AE06A27(Local_458.f_1418) && !func_119())
		{
			GRAPHICS::_0x71845905BCCDE781(Local_458.f_1418);
			GRAPHICS::_0xEDA5CBECF56E1386(Local_458.f_1418);
			GRAPHICS::_0x38D9D50F2085E9B3(Local_458.f_1418);
		}
		if (CAM::DOES_CAM_EXIST(Local_458.f_1416))
		{
			CAM::DESTROY_CAM(Local_458.f_1416, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_458.f_1417))
		{
			PED::DELETE_PED(&(Local_458.f_1417));
		}
		AUDIO::_0x2E399EAFBEEA74D5();
	}
	AUDIO::_0x531A78D6BF27014B(func_120());
	AUDIO::_0x9D746964E0CF2C5F(func_121(), func_122());
	AUDIO::_0x9D746964E0CF2C5F(func_123(), func_124());
	AUDIO::_0x9D746964E0CF2C5F(func_125(), func_126());
	func_127();
	func_128();
	func_129(1, 1);
	func_130(0);
	if (func_65(131072))
	{
		func_70(0);
		func_131();
	}
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		if (func_133(func_132(Local_458.f_1)))
		{
			func_134(Local_458.f_1, Local_458.f_2);
			func_135(func_132(Local_458.f_1));
			func_136();
		}
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
		AUDIO::STOP_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	if (func_137(4096) || func_137(8192))
	{
		bVar0 = func_137(8192);
		func_138(Local_458, Local_458.f_1, Local_458.f_7, bVar0);
	}
	else if (func_137(16384))
	{
		func_139(Local_458, Local_458.f_1, Local_458.f_7);
	}
	else
	{
		func_140(Local_458, Local_458.f_7, 0);
	}
	func_141();
	func_142(Local_458.f_9, Local_458.f_4);
}

int func_23()
{
	return Global_1572887.f_13;
}

bool func_24()
{
	return Global_1051252.f_8;
}

int func_25(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 120000;
	if (func_36(&Var1, iParam0))
	{
		func_39(Var1, -463492762, &iVar0, 0);
	}
	return iVar0;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 300000;
	if ((((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_37(&Var1)) && func_38(&Var1, uParam2))
	{
		func_39(Var1, 1576411076, &iVar0, 0);
	}
	return iVar0;
}

struct<8> func_27(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

struct<8> func_28(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, -1771940760, &Var0, 0);
	}
	return Var0;
}

float func_29(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 200f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

float func_30(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = func_29(iParam0, uParam1);
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, -1393462640, &fVar0, 0);
	}
	return fVar0;
}

float func_31(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_145(Var1, 2005647695, &fVar0, 0);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (func_30(iParam0, uParam1) + 200f);
	}
	return fVar0;
}

Vector3 func_32(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, 221135615, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_33(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

void func_34(vector3 vParam0)
{
	if (!func_147(Local_458.f_1397, vParam0))
	{
		Local_458.f_1397 = { vParam0 };
	}
}

int func_35(int iParam0)
{
	if (Local_458.f_1385 != iParam0)
	{
		Local_458.f_1385 = iParam0;
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1196898.f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898.f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_148(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_37(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_38(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_39(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_40(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

void func_41(int iParam0)
{
	if (Local_458.f_1388 != iParam0)
	{
		Local_458.f_1388 = iParam0;
	}
}

int func_42(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_43(int iParam0)
{
	func_149(&(Local_458.f_1335), iParam0);
}

bool func_44(var uParam0)
{
	*uParam0 = Global_1196898.f_455;
	uParam0->f_2 = -1782115362;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_45(var uParam0, var uParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_46(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;

	if ((func_36(&Var0, iParam0) && func_37(&Var0)) && func_38(&Var0, uParam1))
	{
		if (func_40(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

struct<2> func_47(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_48(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_49(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0))
	{
		func_40(Var1, 733859289, &uVar0, 0);
	}
	return uVar0;
}

bool func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887.f_13 != -1)
		{
			bVar1 = func_15(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_13 != -1)
	{
		bVar1 = func_15(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_51()
{
	Local_141.f_66 = Local_458.f_1392;
	if (DATAFILE::_0x603AC35FD4602C76(Local_141.f_66))
	{
	}
	func_150(&(Local_141.f_66));
	func_151(&Local_14, &Local_141);
}

void func_52()
{
	struct<2> Var0;

	if (func_18(Local_458, 256))
	{
		func_152(0, Local_458.f_1333);
		return;
	}
	else if (func_18(Local_458, 512) && !func_153())
	{
		func_152(0, Local_458.f_1333);
		func_154(&(Local_458.f_1384), 8);
	}
	else if (func_155(&Local_458))
	{
		func_152(0, Local_458.f_1333);
		func_154(&(Local_458.f_1384), 3);
	}
	else
	{
		Var0 = { func_156() };
		if (func_73(Var0))
		{
			if (!func_74(Var0, Local_458.f_7) && !(func_157() || func_18(Local_458, 262144)))
			{
				func_152(0, Local_458.f_1333);
				if (func_154(&(Local_458.f_1384), 1))
				{
				}
			}
			else
			{
				func_152(2, Local_458.f_1333);
				func_154(&(Local_458.f_1384), 0);
			}
		}
		else
		{
			func_152(1, Local_458.f_1333);
			func_154(&(Local_458.f_1384), 0);
		}
	}
}

void func_53()
{
	if (func_158(Local_458.f_1333))
	{
		if (!func_137(256))
		{
			if (Local_458.f_9 != joaat("POSSE_VERSUS"))
			{
				func_159(joaat("FREEMODE_EVENT"), 0);
			}
			else
			{
				func_159(joaat("CAN_KILL"), 0);
			}
			func_43(256);
		}
	}
	else
	{
		func_105();
	}
}

void func_54()
{
	struct<35> Var0;
	struct<12> Var58;

	if (!func_158(Local_458.f_1333))
	{
		return;
	}
	if (func_160())
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		func_43(512);
	}
	else if (!func_137(512))
	{
		Var58.f_1 = -1;
		Var58.f_3 = -1082130432;
		Var58.f_4 = 2;
		Var58.f_5 = -1082130432;
		Var58.f_7 = -1082130432;
		Var58.f_9 = -1082130432;
		Var58.f_11 = -1082130432;
		if (!func_161(&(Local_458.f_1311)))
		{
			Var58.f_6 = 0;
			Var58.f_4 = 2;
			Var58.f_2 = 2;
			Var58 = 0;
			Var58.f_10 = 2;
			Var58.f_8 = 0;
			func_162(&Var0, Var58, 3);
		}
		func_163(&Var0, joaat("FREEMODE_EVENT"), 0, 0);
		func_164(&Var0, 1);
		func_165(&Var0, 1);
		func_166(&Var0, 1);
		func_167(&Var0, Local_458.f_7, 1, 1);
		func_168();
	}
}

void func_55(float fParam0)
{
	if (Global_1071686.f_22961 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1071686.f_22961 = fParam0;
		}
	}
}

char* func_56()
{
	return "MP_FreeRoamCountdown";
}

char* func_57()
{
	return "MP_MatchEndPulseWinner";
}

char* func_58()
{
	return "MP_MatchEndPulseLoser";
}

char* func_59()
{
	return "MP_Trans_SceneToPhoto";
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_61(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

bool func_62(int iParam0)
{
	return func_169(1, iParam0);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_170(18);
	}
	else
	{
		func_171(18);
	}
}

void func_64()
{
	func_172(&Local_141);
	func_173(&(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]));
	func_174(Global_34, 1);
	PED::_0x6569F31A01B4C097(Global_34, 11, 1);
}

bool func_65(int iParam0)
{
	return func_78(Local_458.f_1336, iParam0);
}

Vector3 func_66(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, -135059083, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_67(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_146(Var3, -1922656805, &vVar0, 0);
	}
	return vVar0;
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_69(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1102219.f_26.f_3344))
	{
		bVar0 = true;
	}
	else if (!func_147(ENTITY::GET_ENTITY_COORDS(Global_1102219.f_26.f_3344, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1102219.f_26.f_3348 = { vParam0 };
		Global_1102219.f_26.f_3354 = { vParam3 };
		Global_1102219.f_26.f_3345 = 1;
		STREAMING::REQUEST_MODEL(joaat("A_C_OWL_01"), false);
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		func_175(4096);
	}
	else
	{
		func_176(4096);
	}
}

void func_71()
{
	int iVar0;

	if (Local_458.f_1296 <= 0f)
	{
		return;
	}
	Local_458.f_1395 = VOLUME::_CREATE_VOLUME_SPHERE(Local_458.f_1397, 0f, 0f, 0f, Local_458.f_1296, Local_458.f_1296, Local_458.f_1296);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_458.f_1395))
	{
		iVar0 = func_177();
		POPULATION::_0x2161278C6322F740(iVar0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(Local_458.f_1395, iVar0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(Local_458.f_1395, iVar0, 0, 0, -1, -1, 0);
		PATHFIND::_0xB03944057FD735BA(Local_458.f_1395, 4, 0);
	}
}

void func_72()
{
	func_178(&Local_14);
}

bool func_73(struct<2> Param0)
{
	if (!func_179(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_180(Param0))
	{
		return false;
	}
	return true;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return (Global_1197740.f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
{
	if (!Global_1071686.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1197355[iParam1 /*12*/] && iParam0) != 0;
}

bool func_77()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_73(Global_1051213) && Global_1572887.f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_79()
{
	if (func_181(2, Local_458.f_1333))
	{
		if (!func_182(2))
		{
			if (func_183())
			{
				func_184(2);
			}
		}
		else
		{
			func_185();
			func_186(1);
		}
	}
}

void func_80()
{
	if (!func_182(4))
	{
		if (func_187())
		{
			func_184(4);
		}
	}
	else if (func_188(4))
	{
		func_189(&(Local_215.f_1), 0);
		func_186(3);
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_190();
	if (func_161(&(Local_215.f_1)))
	{
		iVar0 = func_191(&(Local_215.f_1));
		iVar1 = (Local_458.f_1269 - iVar0);
		if (func_68(Local_458.f_1400))
		{
			iVar2 = func_192();
		}
		else
		{
			iVar2 = BUILTIN::CEIL((IntToFloat(func_192()) * 0.5f));
		}
		if (iVar1 <= iVar2)
		{
			func_186(4);
		}
		else if (Local_458.f_9 != joaat("POSSE_VERSUS") && iVar1 >= 16000)
		{
			iVar3 = func_193(2);
			if (iVar3 >= Local_458.f_1277 && func_188(8))
			{
				func_194(&(Local_215.f_1), (Local_458.f_1269 - 16000));
			}
		}
	}
}

void func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_191(&(Local_215.f_1));
	iVar1 = (Local_458.f_1269 - iVar0);
	if (!func_182(16))
	{
		if (iVar1 <= func_195())
		{
			if (func_196())
			{
				func_184(16);
			}
		}
	}
	else if (iVar1 <= 1000)
	{
		func_197();
		func_198(1, Local_458.f_1276);
		func_199(1);
		func_200();
		if (Local_215.f_12 != 0)
		{
			func_201();
			func_186(6);
		}
		else
		{
			Local_215.f_16 = func_193(2);
			func_202(0);
			func_184(2048);
			func_186(5);
		}
	}
}

void func_83()
{
	func_203();
	func_202(1);
	func_198(0, -1);
	func_199(0);
	if ((func_204() || func_205() > Local_458.f_1270) || Local_215.f_12 != 0)
	{
		func_201();
	}
}

void func_84()
{
	if (func_188(32))
	{
		if (!func_161(&(Local_215.f_7)))
		{
			func_206(&(Local_215.f_7));
		}
		else if (func_191(&(Local_215.f_7)) > 500)
		{
			func_207();
			func_186(7);
		}
	}
}

void func_85()
{
	func_186(8);
}

void func_86()
{
	if (func_208())
	{
		func_186(9);
	}
}

void func_87()
{
	if (!func_65(262144))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			if (func_209())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			func_210(262144);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_211(262144);
	}
}

void func_88()
{
	Global_1196898.f_78[Local_458 /*20*/].f_2 = Local_458.f_10 >= 3;
	Global_1196898.f_78[Local_458 /*20*/].f_1 = Local_265[Local_458.f_1333 /*6*/];
	if (Local_265[Local_458.f_1333 /*6*/] != 2)
	{
		return;
	}
	if (func_212())
	{
		func_213();
	}
	else if (func_214())
	{
		func_215(1);
	}
}

void func_89()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_216(iVar0))
		{
			func_217(iVar0);
		}
		iVar0++;
	}
}

void func_90()
{
	int iVar0;
	int iVar1;

	if (Local_458 == -1)
	{
		return;
	}
	if (Local_458.f_1333 == -1)
	{
		return;
	}
	Global_1196898.f_78[Local_458 /*20*/].f_2 = Local_458.f_10 >= 3;
	Global_1196898.f_78[Local_458 /*20*/].f_1 = Local_265[Local_458.f_1333 /*6*/];
	if (Local_265[Local_458.f_1333 /*6*/] != 2)
	{
		return;
	}
	iVar1 = func_218();
	switch (Local_458.f_1)
	{
		case 18:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				return;
			}
			iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (Local_265[iVar0 /*6*/] != 2)
			{
				return;
			}
			func_219(func_218(), Local_458.f_7, 1, 0);
			break;
	}
}

void func_91()
{
	if (func_158(Local_458.f_1333) && func_137(134217728))
	{
		func_220(0);
	}
}

void func_92()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_221(iVar0);
				break;
			case 1741908893:
				func_222(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_93()
{
	int iVar0;

	if (Local_458.f_1420 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_215.f_17[iVar0] == PLAYER::PLAYER_ID())
			{
				Local_458.f_1420 = iVar0;
			}
			iVar0++;
		}
	}
}

void func_94()
{
}

void func_95()
{
	bool bVar0;

	if (Local_215 >= 6)
	{
		func_223();
		func_224(6);
		return;
	}
	func_225();
	if (!func_181(2, Local_458.f_1333))
	{
		bVar0 = true;
		if (!func_226(func_112(Local_458.f_1)))
		{
			bVar0 = false;
		}
		if (func_115())
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				bVar0 = false;
			}
		}
		if (!AUDIO::_0xD9130842D7226045(func_120(), 0) || !AUDIO::_0xE368E8422C860BA7(func_121(), func_122(), -2))
		{
			bVar0 = false;
		}
		if (Local_458.f_9 != joaat("POSSE_VERSUS"))
		{
			if (!func_229(&(Local_458.f_1338), func_227(PED::IS_PED_MALE(Global_34)), func_228()))
			{
				bVar0 = false;
			}
			if (!func_230(&(Local_458.f_1421)))
			{
				bVar0 = false;
			}
		}
		if (!func_231())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_232(2, Local_458.f_1333);
		}
		else if (Local_458.f_1337 == -1 || (MISC::GET_GAME_TIMER() - Local_458.f_1337) > Global_1901947.f_308.f_178)
		{
			if (Local_458.f_1337 == -1)
			{
			}
			func_232(2, Local_458.f_1333);
		}
	}
	else if (Local_215 > 0)
	{
		if (Local_458.f_9 != joaat("POSSE_VERSUS"))
		{
			func_114(0);
		}
		StringCopy(&(Local_458.f_13.f_951), MISC::_CREATE_VAR_STRING(2, &(Local_458.f_1339)), 64);
		func_52();
		func_224(1);
	}
}

void func_96()
{
	if (Local_215 >= 6)
	{
		func_223();
		func_224(6);
		return;
	}
	func_225();
	if (!func_181(4, Local_458.f_1333))
	{
		if (func_233())
		{
			func_232(4, Local_458.f_1333);
		}
	}
	else if (Local_215 > 1)
	{
		func_234();
		if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
			func_224(3);
		}
		else
		{
			func_224(2);
		}
	}
}

void func_97()
{
	if (Local_215 >= 6)
	{
		func_223();
		func_224(6);
		return;
	}
	func_235();
	func_236();
	if (!func_137(2097152))
	{
		if (func_137(1))
		{
			if (func_237() || func_238())
			{
				if (func_62(255))
				{
					return;
				}
				func_239();
			}
			else if (func_62(255) || CAM::IS_SCREEN_FADED_OUT())
			{
				if (!func_161(&(Local_458.f_1320)))
				{
					func_206(&(Local_458.f_1320));
				}
				else if (func_191(&(Local_458.f_1320)) > 30000)
				{
					func_239();
				}
			}
		}
	}
	else if (!func_62(255))
	{
		if (!func_240(67108864))
		{
			func_241(67108864);
		}
		func_242(1);
		AUDIO::_0x2E399EAFBEEA74D5();
		func_243(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_232(8, Local_458.f_1333);
		func_224(3);
	}
}

void func_98()
{
	if (Local_215 >= 6)
	{
		func_223();
		func_224(6);
		return;
	}
	func_235();
	func_244();
	func_236();
	func_245();
	func_246();
	func_247();
	if (Local_215 > 3)
	{
		func_248();
		func_249();
		func_224(4);
	}
}

void func_99()
{
	int iVar0;
	int iVar1;

	if (Local_215 >= 6)
	{
		func_223();
		func_250(Local_458, 2);
		func_224(6);
		return;
	}
	func_235();
	func_244();
	func_236();
	func_247();
	if (!func_181(16, Local_458.f_1333))
	{
		iVar0 = func_191(&(Local_215.f_1));
		iVar1 = (Local_458.f_1269 - iVar0);
		if (iVar1 <= func_195())
		{
			if (func_251())
			{
				func_232(16, Local_458.f_1333);
			}
		}
	}
	else if (Local_215 > 4)
	{
		func_252();
		func_253();
		func_254();
		func_52();
		func_255();
		func_256(&(Local_458.f_1006), 1);
		func_257(1);
		func_258();
		func_259();
		func_250(Local_458, 2);
		func_224(5);
	}
}

void func_100()
{
	if (Local_215 >= 8)
	{
		func_224(8);
		return;
	}
	func_260();
	if (Local_215 > 5)
	{
		func_223();
		return;
	}
	else if (func_137(8192))
	{
		func_223();
		func_224(6);
		return;
	}
	func_235();
	func_244();
	func_261();
	func_262();
	func_254();
	func_263();
	func_264();
	if (!func_265())
	{
		func_266();
	}
	func_267();
	func_268();
	func_269();
}

void func_101()
{
	NETWORK::_0x236905C700FDB54D();
	if (!func_270())
	{
		func_271();
	}
	func_272();
	func_273();
	func_274();
	if (func_275())
	{
		func_276();
	}
	if (!func_158(Local_458.f_1333))
	{
		func_224(8);
		return;
	}
	if (!func_181(32, Local_458.f_1333))
	{
		func_232(32, Local_458.f_1333);
	}
	else if (Local_215 > 6 || func_137(8192))
	{
		if (!func_137(268435456))
		{
			func_277(Local_215.f_10);
			if (func_158(Local_458.f_1333))
			{
				if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_158, 0))
				{
					func_278(&(Local_458.f_13));
					func_279(&(Local_458.f_13));
					func_282(func_280(), func_281(), Local_458.f_11, Local_458.f_12, 30000);
				}
				func_283();
				func_284();
			}
		}
		else if (!func_137(536870912))
		{
			if (Local_458.f_1283 >= Local_458.f_1282)
			{
				func_43(536870912);
			}
			else if (!func_161(&(Local_458.f_1314)))
			{
				func_189(&(Local_458.f_1314), 0);
			}
			else if (func_191(&(Local_458.f_1314)) > 1000)
			{
				func_43(536870912);
			}
		}
		else
		{
			func_285();
			func_224(7);
		}
	}
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[64];
	char cVar13[64];
	int iVar21;
	var uVar22;
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	NETWORK::_0x236905C700FDB54D();
	func_274();
	func_286();
	if (!func_158(Local_458.f_1333))
	{
		func_129(1, 1);
		func_224(8);
		return;
	}
	func_272();
	func_287();
	if (func_288())
	{
		if (func_289())
		{
			if (!func_290())
			{
				Local_458.f_1385 = 1310067901;
			}
		}
		else if (func_65(8192))
		{
			Local_458.f_1385 = joaat("LEADERBOARD");
		}
		else
		{
			Local_458.f_1385 = 0;
		}
		func_282(func_280(), func_281(), Local_458.f_11, Local_458.f_12, 30000);
	}
	else if (func_289())
	{
		Local_458.f_1385 = 1310067901;
		func_282(0, func_281(), 0, 0, 30000);
	}
	else
	{
		func_291();
	}
	if (!func_65(32))
	{
		if (func_292())
		{
			func_293(&(Local_458.f_1006));
			iVar0 = func_294();
			if (func_137(4096))
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TIMED(func_57(), iVar0);
			}
			else
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TIMED(func_58(), iVar0);
			}
			if (!func_289() || Local_458.f_9 == joaat("POSSE_VERSUS"))
			{
				func_256(&(Local_458.f_1006), 1);
			}
			func_210(32);
		}
	}
	else if (!func_65(64))
	{
		func_295();
		if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
			if (!func_296(Local_458.f_1288))
			{
				func_297();
				iVar1 = 6000;
				if (Local_215.f_12 != 0 || !func_298(Local_458.f_1385))
				{
					iVar1 = 1000;
				}
				if (!func_161(&(Local_458.f_1317)))
				{
					func_206(&(Local_458.f_1317));
				}
				else if (func_191(&(Local_458.f_1317)) > iVar1)
				{
					if (func_299())
					{
						return;
					}
					func_291();
					func_210(64);
					func_224(8);
				}
			}
		}
		else if (((!func_296(Local_458.f_1288) && !func_300()) && !func_301()) && !func_302())
		{
			if (UIAPPS::_IS_ANY_APP_RUNNING())
			{
				if (!func_161(&(Local_458.f_1323)))
				{
					func_206(&(Local_458.f_1323));
				}
				else if (func_191(&(Local_458.f_1323)) > 10000)
				{
					func_303();
					func_304(&(Local_458.f_1323));
				}
			}
			else
			{
				func_297();
				if (!func_161(&(Local_458.f_1317)))
				{
					func_206(&(Local_458.f_1317));
				}
				else if (func_191(&(Local_458.f_1317)) > 1000 && !func_296(Local_458.f_1290))
				{
					func_130(0);
					func_210(64);
				}
			}
		}
		else
		{
			if (func_161(&(Local_458.f_1317)))
			{
				func_304(&(Local_458.f_1317));
			}
			if (func_161(&(Local_458.f_1323)))
			{
				func_304(&(Local_458.f_1323));
			}
		}
	}
	else if (!func_65(128))
	{
		func_295();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !func_62(255))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::_0x9B1FC259187C97C0("winners_pose");
			}
		}
		else if (func_295() && func_305())
		{
			GRAPHICS::ANIMPOSTFX_STOP(func_57());
			GRAPHICS::ANIMPOSTFX_STOP(func_58());
			if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
			{
				if (PED::_IS_PED_HOGTIED(Global_34))
				{
					TASK::_0x79559BAD83CCD038(Global_34, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
				}
				if (PED::_0x0E99E3BF11BB6367(Global_34))
				{
					iVar2 = PED::_0xD0B7AEB56229D317(Global_34);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && PED::IS_PED_A_PLAYER(iVar2))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
						PED::_0x789DABD18E9024DB(Global_34, 32768, 1);
						TASK::CLEAR_PED_TASKS(Global_34, true, false);
					}
				}
				if (PED::_0x3BDFCF25B58B0415(Global_34))
				{
					PED::_0x789DABD18E9024DB(Global_34, 4096, 1);
				}
				if (Local_215.f_10 == PLAYER::PLAYER_ID() && !func_68(Local_458.f_1403))
				{
					func_306(Local_458.f_1403, ENTITY::GET_ENTITY_HEADING(Global_34));
				}
			}
			if (Local_215.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_458.f_1417))
			{
				func_224(8);
				return;
			}
			func_307();
			func_308();
			func_210(128);
		}
	}
	else if (!func_65(512))
	{
		func_308();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_458.f_1416) && !CAM::IS_CAM_ACTIVE(Local_458.f_1416))
				{
					CAM::SET_CAM_ACTIVE(Local_458.f_1416, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_458.f_1417) && !ENTITY::IS_ENTITY_DEAD(Local_458.f_1417))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_458.f_1417, true);
				}
				func_309();
				HUD::_HIDE_HUD_COMPONENT(690901814);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			func_304(&(Local_458.f_1317));
			Local_458.f_1419 = 1500;
			if (!func_310())
			{
				if (Local_215.f_10 != 255)
				{
					iVar3 = func_311();
					Local_458.f_1419 = func_312(iVar3);
					iVar4 = func_313(iVar3);
					func_314(Local_458.f_1417, iVar3, 2, 0, 0, iVar4, 0);
				}
			}
			func_210(512);
		}
	}
	else if (!func_65(1024))
	{
		func_308();
		if (!func_161(&(Local_458.f_1317)))
		{
			StringCopy(&cVar5, func_315(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar5))
			{
				StringCopy(&cVar5, MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			StringCopy(&cVar13, func_316(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar13))
			{
				cVar13 = { Local_458.f_1407 };
			}
			if (func_137(8192) || func_65(524288))
			{
				func_321(&(Local_458.f_1421), &cVar13, func_317(), func_318(), func_320(func_319(&(Local_458.f_13), 0)), "", "", Local_458.f_1415);
			}
			else if (Local_215.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(func_322()))
				{
					func_321(&(Local_458.f_1421), "", "", MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
				else
				{
					func_321(&(Local_458.f_1421), "", "", func_322(), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
			}
			else if (Local_215.f_10 == PLAYER::PLAYER_ID())
			{
				func_321(&(Local_458.f_1421), &cVar5, &cVar13, func_320(func_319(&(Local_458.f_13), 0)), "", "", "", Local_458.f_1415);
			}
			else
			{
				func_321(&(Local_458.f_1421), &cVar5, &cVar13, func_323(Local_458.f_1407, Local_458.f_1415, func_319(&(Local_458.f_13), 0)), "", "", "", Local_458.f_1415);
			}
			func_206(&(Local_458.f_1317));
		}
		else
		{
			iVar21 = Local_458.f_1419;
			func_324(&iVar21);
			if (func_325() || (iVar21 > 0 && func_191(&(Local_458.f_1317)) > iVar21))
			{
				AUDIO::_0x9B1FC259187C97C0("photograph");
				GRAPHICS::_0x9B8D5D4CB8AF58B3(Local_458.f_1418);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_458.f_1418);
				func_210(1024);
			}
		}
	}
	else if (!func_65(2048))
	{
		func_308();
		if (GRAPHICS::_0x9AB192A9EF980EED(Local_458.f_1418, 2, false, &uVar22))
		{
			bVar23 = true;
		}
		if (bVar23 || func_191(&(Local_458.f_1317)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(func_123(), func_124(), true, 0);
			func_61(&(Local_458.f_1421), 1);
			func_206(&(Local_458.f_1317));
			func_210(2048);
		}
	}
	else if (!func_65(4096))
	{
		func_308();
		if (func_326(&(Local_458.f_1421)) || func_191(&(Local_458.f_1317)) > 8000)
		{
			func_206(&(Local_458.f_1317));
			func_210(4096);
		}
	}
	else if (!func_65(8192))
	{
		func_308();
		if (func_191(&(Local_458.f_1317)) > 5000)
		{
			if (!func_327())
			{
				func_118(&(Local_458.f_1421));
			}
			func_35(func_328());
			func_304(&(Local_458.f_1317));
			func_210(8192);
		}
	}
	else if (!func_65(16384))
	{
		func_308();
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_13.f_11))
		{
			if (Local_458.f_1284 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_458.f_13.f_11, "info_value_07", func_329(Local_458.f_1284));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_458.f_13.f_11, "info_value_07", true);
				Local_458.f_1284 = 0;
			}
			if (Local_458.f_1286 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_458.f_13.f_11, "info_visible_08", func_329(Local_458.f_1286));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_458.f_13.f_11, "info_visible_08", true);
				Local_458.f_1286 = 0;
			}
			if (Local_458.f_1285 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_458.f_13.f_11, "info_visible_06", func_329(Local_458.f_1285));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_458.f_13.f_11, "info_visible_06", true);
				Local_458.f_1285 = 0;
			}
			if (Local_458.f_1287 > 0)
			{
				Local_458.f_1287 = 0;
			}
		}
		if (!func_161(&(Local_458.f_1317)))
		{
			func_206(&(Local_458.f_1317));
		}
		else if (func_191(&(Local_458.f_1317)) > 2000)
		{
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if ((!GANG::_0xD6F6ACF4392187FB(iVar27) || GANG::_0x149A2751AB66AC02(iVar27) <= 1) || !GANG::_0x93A91A351A07360E(iVar27))
			{
				iVar24 = 1;
				if (func_181(512, Local_458.f_1333))
				{
					iVar25++;
				}
				if (func_181(1024, Local_458.f_1333))
				{
					iVar26++;
				}
			}
			else
			{
				iVar30 = 0;
				iVar30 = 0;
				while (iVar30 <= 31)
				{
					iVar28 = PLAYER::INT_TO_PLAYERINDEX(iVar30);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar28) && GANG::_0x9BE7DCB22D32CCBE(iVar27, iVar28)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar28))
					{
						iVar29 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar28);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar29))
						{
							iVar24++;
							if (func_181(512, iVar29))
							{
								iVar25++;
							}
							if (func_181(1024, iVar29))
							{
								iVar26++;
							}
							if ((GANG::_0x424B17A7DC5C90BC(iVar28) && iVar28 != PLAYER::PLAYER_ID()) && func_181(1024, iVar29))
							{
								iVar25 = 7;
							}
						}
					}
					iVar30++;
				}
			}
			if (iVar25 > iVar24)
			{
				iVar25 = iVar24;
			}
			if (iVar26 > iVar24)
			{
				iVar26 = iVar24;
			}
			if (!func_330(Local_458.f_1298))
			{
				if (iVar24 > 1)
				{
					Local_458.f_1298 = func_331(MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar25, iVar24), joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					Local_458.f_1298 = func_331("FME_PROMPT_RETURN_TO_FREE_ROAM", joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (func_330(Local_458.f_1298))
			{
				if (iVar24 > 1)
				{
					func_332(Local_458.f_1298, MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar25, iVar24), 1);
				}
				else
				{
					func_332(Local_458.f_1298, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!func_181(512, Local_458.f_1333))
				{
					if (func_333(Local_458.f_1298, 1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(func_125(), func_126(), true, 0);
						func_232(512, Local_458.f_1333);
						func_334(Local_458.f_1298, 0, 1, 1);
					}
				}
			}
			if (!func_181(1024, Local_458.f_1333))
			{
				if (iVar25 >= iVar24 || func_191(&(Local_458.f_1317)) > 62000)
				{
					func_232(1024, Local_458.f_1333);
				}
			}
			else if (iVar26 >= iVar24)
			{
				func_335(&(Local_458.f_1298), 1, 1);
				func_304(&(Local_458.f_1317));
				func_210(16384);
			}
		}
	}
	else if (!func_65(32768))
	{
		if (func_327())
		{
			func_118(&(Local_458.f_1421));
		}
		func_308();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::_0x9B1FC259187C97C0("fade_to_black");
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			func_210(32768);
			func_224(8);
		}
	}
}

void func_103()
{
	NETWORK::_0x236905C700FDB54D();
	if (func_336())
	{
		func_224(9);
	}
}

void func_104()
{
}

void func_105()
{
	if (func_137(256))
	{
		func_337(0);
		func_338(256);
	}
}

void func_106(bool bParam0)
{
	if (func_137(512))
	{
		if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
		}
		func_339(1, bParam0);
		func_338(512);
	}
}

void func_107()
{
	func_340(4);
	func_340(16);
}

void func_108()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_341(iVar0);
		iVar0++;
	}
	if (func_181(16384, Local_458.f_1333))
	{
		if (func_342())
		{
			func_343();
			func_344(16384, Local_458.f_1333);
		}
	}
	if (func_181(8192, Local_458.f_1333))
	{
		if (!func_345(Global_1296859.f_15))
		{
			func_346(1, 0, 0);
			func_344(8192, Local_458.f_1333);
		}
	}
}

void func_109()
{
	if (func_137(1))
	{
		func_347();
		func_348(0);
		func_338(1);
	}
}

void func_110()
{
	if (func_137(1024))
	{
		func_349(1);
		func_338(1024);
	}
}

void func_111()
{
	if (func_137(2048))
	{
		if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
			func_350(0);
		}
		else
		{
			func_351(1);
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
		}
		func_338(2048);
	}
}

struct<8> func_112(int iParam0)
{
	struct<8> Var0;
	struct<5> Var8;

	if (func_36(&Var8, iParam0) && func_143(&Var8))
	{
		func_144(Var8, -874721119, &Var0, 1);
	}
	return Var0;
}

void func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (HUD::_TEXT_DATABASE_HAS_LOADED(func_352()))
	{
		HUD::_TEXT_DATABASE_DELETE(func_352());
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0) && HUD::_TEXT_DATABASE_HAS_LOADED(&uParam0))
	{
		HUD::_TEXT_DATABASE_DELETE(&uParam0);
	}
}

void func_114(bool bParam0)
{
	Global_1940144.f_15 = !bParam0;
}

bool func_115()
{
	return false;
}

void func_116(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_117()
{
	if (Global_1071686.f_22961 >= 0f)
	{
		Global_1071686.f_22961 = -1f;
	}
}

void func_118(var uParam0)
{
	var uVar0;

	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
	}
}

bool func_119()
{
	return Global_1071686.f_28662.f_65.f_42 != 0;
}

char* func_120()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

char* func_121()
{
	return "Toast_On";
}

char* func_122()
{
	return "HUD_Toast_Soundset";
}

char* func_123()
{
	return "photograph";
}

char* func_124()
{
	return "rdro_gamemode_transition_sounds";
}

char* func_125()
{
	return "continue";
}

char* func_126()
{
	return "MP_Leaderboard_Sounds";
}

void func_127()
{
	func_353();
}

void func_128()
{
	DATAFILE::_DATAFILE_UNLOAD(Local_141.f_66);
}

void func_129(bool bParam0, bool bParam1)
{
	func_257(1);
	if (bParam0)
	{
		func_291();
	}
	if (bParam1)
	{
		func_354();
		func_355();
	}
	func_356();
	func_357();
	func_358();
	func_359();
	func_360();
	func_258();
	func_361();
}

void func_130(int iParam0)
{
}

void func_131()
{
	Global_1102219.f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102219.f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102219.f_26.f_3347 = 1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 7;
		case 15:
			return 10;
		case 16:
			return 8;
		case 17:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_133(int iParam0)
{
	return Global_1108365.f_935.f_28 == iParam0;
}

void func_134(int iParam0, int iParam1)
{
	if (iParam0 != -1 && Global_1196898.f_1[iParam0 /*4*/].f_2 != iParam1)
	{
		Global_1196898.f_1[iParam0 /*4*/].f_2 = iParam1;
	}
}

void func_135(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1108365.f_935.f_5[iParam0] = Global_1296859.f_21;
	}
}

void func_136()
{
	if (Global_1108365.f_935.f_28 != -1)
	{
		Global_1108365.f_935.f_28 = -1;
	}
}

bool func_137(int iParam0)
{
	return func_78(Local_458.f_1335, iParam0);
}

int func_138(int iParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_362(Param2) && !func_363(Param2))
	{
		return 0;
	}
	if (bParam4)
	{
		func_364(Param2, 0, 4, 0, 0);
	}
	else
	{
		func_364(Param2, 0, 0, 0, 0);
	}
	func_365(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 1;
	}
	func_250(iParam0, 128);
	func_250(iParam0, 64);
	return 1;
}

int func_139(int iParam0, var uParam1, struct<2> Param2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_362(Param2) && !func_363(Param2))
	{
		return 0;
	}
	func_364(Param2, 0, 1, 0, 0);
	func_365(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_250(iParam0, 256);
	func_250(iParam0, 64);
	return 1;
}

int func_140(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	if (!func_362(Param1) && !func_363(Param1))
	{
		return 0;
	}
	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (GANG::_0x0F99F6436528A089(iVar0) && GANG::_0x149A2751AB66AC02(iVar0) > 1)
		{
			func_366(1);
		}
	}
	if (func_18(iParam0, 32))
	{
		func_364(Param1, 0, 2, 0, 0);
	}
	else
	{
		func_364(Param1, 0, -1, 0, 0);
	}
	func_365(iParam0, Param1);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_250(iParam0, 64);
	return 1;
}

void func_141()
{
	func_367(2048);
}

int func_142(int iParam0, int iParam1)
{
	if (iParam0 == joaat("POSSE_VERSUS"))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	DECORATOR::DECOR_SET_INT(Global_34, "iFmeLastEventPlayed", iParam1);
	return 1;
}

bool func_143(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_144(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_145(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_146(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_147(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
		case 1:
			return joaat("CHALLENGES");
		case 2:
			return joaat("DEAD_DROP");
		case 3:
			return joaat("GOLDEN_HAT");
		case 4:
			return joaat("HOT_PROPERTY");
		case 5:
			return joaat("KING_OF_THE_CASTLE");
		case 6:
			return joaat("KING_OF_THE_RAILS");
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
		case 8:
			return joaat("ESCAPED_CONVICTS");
		case 10:
			return joaat("SUPPLY_TRAIN");
		case 9:
			return joaat("ROUND_UP");
		case 11:
			return joaat("WRECKAGE");
		case 12:
			return joaat("CONDOR_EGG");
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

void func_149(var uParam0, int iParam1)
{
	func_368(uParam0, iParam1);
}

int func_150(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_370(uParam0, func_369(iVar0, 1));
		iVar0++;
	}
	return 1;
}

int func_151(var uParam0, var uParam1)
{
	struct<5> Var0;

	if (!DATAFILE::_0x603AC35FD4602C76(uParam1->f_66))
	{
		return 0;
	}
	Var0 = uParam1->f_66;
	Var0.f_2 = -197735539;
	Var0.f_3 = Local_458.f_2;
	Var0.f_4 = joaat("STANDARD");
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
	}
	if (!func_371(Var0, -726641051, &(uParam1->f_67), 100f, 400f, 1))
	{
		uParam1->f_67 = 110f;
	}
	if (!func_371(Var0, -1993968532, &(uParam1->f_68), 5f, 15f, 1))
	{
		uParam1->f_68 = 5f;
	}
	if (!func_372(Var0, 2007146056, &(uParam1->f_69), 5, 20, 1))
	{
		uParam1->f_69 = 5;
	}
	if (!func_372(Var0, 772630146, &(uParam1->f_70), 300000, 600000, 1))
	{
		uParam1->f_70 = 600000;
	}
	if (!func_373(&Var0, -771926219, &(uParam1->f_51)))
	{
		uParam1->f_51 = { -57.1972f, 61.735f, 88.5186f };
	}
	if (!func_374(&(uParam1->f_66), &(uParam1->f_71)))
	{
		uParam1->f_71 = 29;
	}
	return 1;
}

void func_152(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (Local_265[iParam1 /*6*/] != iParam0)
	{
		if (iParam0 == 0 && Local_265[iParam1 /*6*/] == 2)
		{
			func_140(Local_458, Local_458.f_7, 1);
		}
		Local_265[iParam1 /*6*/] = iParam0;
	}
}

bool func_153()
{
	return Global_1572887.f_106.f_75 != 1;
}

bool func_154(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}
	return false;
}

bool func_155(int iParam0)
{
	return false;
}

struct<2> func_156()
{
	if (Global_1196205.f_129 <= 0)
	{
		return func_375(0);
	}
	if (Global_1196205.f_130 < 0 || Global_1196205.f_131 == 0)
	{
		return func_375(0);
	}
	return Global_1196205[Global_1196205.f_130 /*4*/].f_1;
}

bool func_157()
{
	return (func_376() != 0 || func_377(1));
}

bool func_158(int iParam0)
{
	return Local_265[iParam0 /*6*/] == 2;
}

bool func_159(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381.f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381.f_3876.f_706.f_1 = 0;
	Global_1139381.f_3876.f_706.f_2 = 1613014828;
	Global_1139381.f_3876.f_706.f_3 = iParam0;
	Global_1139381.f_3876.f_706.f_4 = 0;
	if (!DATAFILE::_0x603AC35FD4602C76(Global_1139381.f_3876.f_706))
	{
		Global_1139381.f_3876.f_706 = Global_1139381.f_2;
	}
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1139381.f_3876.f_706)))
	{
		return false;
	}
	Global_1139381.f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_378(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381.f_3876.f_706.f_4 = iVar1;
				Global_1139381.f_3876.f_706.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1139381.f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_379(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381.f_3876.f_706.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1139381.f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					Global_1139381.f_3876.f_2[func_380(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

bool func_160()
{
	if (func_137(512))
	{
		return false;
	}
	if (((Local_458.f_9 == joaat("POSSE_VERSUS") && Local_458.f_1 == 16) && func_302()) && !func_137(512))
	{
		func_381();
		return true;
	}
	if (Local_458.f_9 == joaat("POSSE_VERSUS") && func_382(Global_34))
	{
		func_383(&(Local_458.f_1271), 1);
		return true;
	}
	if ((Local_458.f_9 == joaat("POSSE_VERSUS") && func_384(&(Local_458.f_1271))) && func_385(&(Local_458.f_1271)) < 2f)
	{
		return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	return func_386(*uParam0, 1);
}

void func_162(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1956200.f_1565.f_117.f_12 = iParam13;
	func_387(&(Global_1956200.f_1565.f_117), Param1, Param1.f_1);
	func_388(&(Global_1956200.f_1565.f_117), Param1.f_2, Param1.f_3);
	func_389(&(Global_1956200.f_1565.f_117), Param1.f_4, Param1.f_5);
	func_390(&(Global_1956200.f_1565.f_117), Param1.f_6, Param1.f_7);
	func_391(&(Global_1956200.f_1565.f_117), Param1.f_8, Param1.f_9);
	func_392(&(Global_1956200.f_1565.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_393(uParam0);
}

void func_163(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_164(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_394(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_393(uParam0);
}

void func_165(var uParam0, int iParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = iParam1;
}

void func_166(var uParam0, int iParam1)
{
	uParam0->f_2 = 1;
	uParam0->f_21 = iParam1;
}

void func_167(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_395(uParam0, Param1, iParam4);
		func_170(115);
	}
	else
	{
		Global_1139381.f_4854 = { *uParam0 };
		Global_1139381.f_4854.f_13 = { Param1 };
		func_171(115);
	}
}

void func_168()
{
	bool bVar0;

	bVar0 = false;
	if (func_396(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 0, 0) > 0)
	{
		bVar0 = true;
	}
	INVENTORY::_0x644CCB76A76CFBD6(1, 1, 1, 1, 1, 1);
	func_397(1);
	func_398(1);
	if (bVar0)
	{
		func_399(joaat("UPGRADE_OFFHAND_HOLSTER"), 1, 752097756);
		WEAPON::_0x83B8D50EB9446BBA(Global_34, 1);
	}
	if (Local_458.f_1 == 15)
	{
		if (!func_399(201475512, 1, 752097756))
		{
		}
	}
	func_43(512);
	func_400();
}

bool func_169(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_401(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 == func_402())
	{
		return func_401(&(Global_1102219.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1296859.f_22[iParam1])
	{
		return func_401(&(Global_1100469[iParam1 /*53*/].f_4), iVar0, 5);
	}
	return false;
}

int func_170(int iParam0)
{
	if (func_403(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)
{
	if (func_404(&(Global_1102219.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_62 = PLAYER::GET_PLAYER_INDEX();
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		uParam0->f_5[iVar0] = 255;
		iVar0++;
	}
}

void func_173(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_174(var uParam0, int iParam1)
{
	PED::_0x6569F31A01B4C097(uParam0, 1, iParam1);
	PED::_0x6569F31A01B4C097(uParam0, 0, iParam1);
	PED::_0x6569F31A01B4C097(uParam0, 4, iParam1);
}

void func_175(int iParam0)
{
	if (func_405(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 || iParam0);
}

void func_176(int iParam0)
{
	if (!func_406(iParam0))
	{
		return;
	}
	Global_1102219.f_26.f_9 = (Global_1102219.f_26.f_9 - (Global_1102219.f_26.f_9 && iParam0));
}

int func_177()
{
	return 10208;
}

void func_178(var uParam0)
{
	if (func_407(&(uParam0->f_2), 1))
	{
		return;
	}
	*uParam0 = 0;
	uParam0->f_3 = joaat("STANDARD");
	uParam0->f_29 = 0;
	func_408(&(uParam0->f_2), 1);
}

bool func_179(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686.f_636.f_601;
		case 3:
			return Global_1071686.f_636.f_2103;
		case 4:
			return Global_1071686.f_636.f_12605;
		case 5:
			return Global_1071686.f_636.f_12907;
		case 6:
			return Global_1071686.f_636.f_15909;
		case 7:
			return Global_1071686.f_636.f_16511;
		case 8:
			return Global_1071686.f_636.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_181(int iParam0, int iParam1)
{
	return func_78(Local_265[iParam1 /*6*/].f_1, iParam0);
}

bool func_182(int iParam0)
{
	return func_78(Local_215.f_13, iParam0);
}

bool func_183()
{
	return true;
}

void func_184(int iParam0)
{
	func_149(&(Local_215.f_13), iParam0);
}

void func_185()
{
}

void func_186(int iParam0)
{
	Local_215 = iParam0;
}

bool func_187()
{
	return true;
}

bool func_188(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_78(Local_265[iVar0 /*6*/].f_1, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_189(var uParam0, bool bParam1)
{
	if (bParam1 || !func_161(uParam0))
	{
		func_206(uParam0);
	}
}

void func_190()
{
	if (!func_407(&(Local_14.f_2), 2))
	{
		if (func_409(&Local_14, &Local_141))
		{
			func_408(&(Local_14.f_2), 2);
		}
	}
}

int func_191(var uParam0)
{
	if (!func_161(uParam0))
	{
		return 0;
	}
	if (func_410(uParam0))
	{
		return uParam0->f_2;
	}
	return func_411(uParam0->f_1);
}

int func_192()
{
	return 10000;
}

int func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && Local_265[iVar2 /*6*/] >= iParam0)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_194(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_412(uParam0, 1);
	func_413(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_195()
{
	return 3000;
}

bool func_196()
{
	if (!func_414(&(Local_14.f_18), Local_14.f_11, &(Local_14.f_15), &(Local_14.f_9), &(Local_14.f_24)))
	{
		return false;
	}
	func_408(&(Local_14.f_2), 32);
	return true;
}

void func_197()
{
	if (!func_161(&(Local_215.f_4)))
	{
		func_189(&(Local_215.f_4), 0);
	}
}

void func_198(bool bParam0, int iParam1)
{
	if (!bParam0 && !func_415(2, 30))
	{
		return;
	}
	func_417(func_416(iParam1));
}

void func_199(bool bParam0)
{
	int iVar0;

	if (!bParam0 && !func_415(2, 60))
	{
		return;
	}
	Local_215.f_14++;
	iVar0 = func_193(2);
	Local_215.f_15 = (Local_215.f_15 + iVar0);
}

void func_200()
{
}

void func_201()
{
	func_199(1);
	func_418();
	func_186(6);
}

void func_202(bool bParam0)
{
	int iVar0;

	if (!func_182(64))
	{
		if (Local_458.f_1388 == joaat("STANDARD") && (Local_458.f_9 == joaat("STANDARD") || Local_458.f_9 == joaat("THEMED")))
		{
			iVar0 = func_419(2);
			if (iVar0 <= 1)
			{
				func_184(64);
				if (bParam0)
				{
					func_184(128);
				}
			}
		}
		else if ((Local_458.f_1388 == joaat("ALL_ALLY_STANDARD") && Local_458.f_9 == joaat("STANDARD")) && Local_458.f_3 == joaat("HUNTING"))
		{
			func_184(64);
			if (bParam0)
			{
				func_184(128);
			}
		}
	}
}

void func_203()
{
	if (Local_458.f_9 == joaat("COOP") || Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return;
	}
	if (Local_458.f_13.f_11.f_2 == 0)
	{
		return;
	}
	if (func_319(&(Local_458.f_13), 0) > 0f && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_458.f_13.f_211[0 /*23*/].f_14))
	{
		func_420(Local_458.f_13.f_211[0 /*23*/].f_14);
	}
}

bool func_204()
{
	if (MISC::GET_GAME_TIMER() < (Local_141.f_4 + func_421(Local_14)))
	{
		return false;
	}
	Local_141.f_4 = MISC::GET_GAME_TIMER();
	switch (Local_14)
	{
		case 0:
			if (func_422())
			{
				func_423(&Local_14, 1, &(Local_14.f_1));
			}
			break;
		case 1:
			if (func_424())
			{
				func_423(&Local_14, 2, &(Local_14.f_1));
			}
			break;
		case 2:
			if (func_425())
			{
				return true;
			}
			break;
	}
	return false;
}

int func_205()
{
	if (!func_161(&(Local_215.f_4)))
	{
		return 0;
	}
	return func_191(&(Local_215.f_4));
}

void func_206(var uParam0)
{
	func_194(uParam0, 0);
}

void func_207()
{
	bool bVar0;

	if (Local_458.f_9 == joaat("COOP"))
	{
		func_426(&bVar0);
		if (bVar0)
		{
			func_184(256);
		}
	}
	else if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		if (Local_215.f_12 != 1 && Local_215.f_12 != 4)
		{
			func_427();
			func_417(0);
		}
	}
	else
	{
		func_427();
		if (func_182(2048))
		{
			func_417(0);
		}
	}
}

bool func_208()
{
	func_174(Global_34, 0);
	PED::_0x6569F31A01B4C097(Global_34, 11, 0);
	return true;
}

bool func_209()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

void func_210(int iParam0)
{
	func_149(&(Local_458.f_1336), iParam0);
}

void func_211(int iParam0)
{
	func_428(&(Local_458.f_1336), iParam0);
}

bool func_212()
{
	switch (Local_458.f_1)
	{
		case 15:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return func_429();
		default:
			break;
	}
	return false;
}

void func_213()
{
	Global_1139381.f_5560.f_22 = MISC::GET_FRAME_COUNT();
}

bool func_214()
{
	switch (Local_458.f_1)
	{
		case 12:
			return true;
		case 8:
			return true;
		case 9:
			return true;
		case 10:
			return true;
		case 11:
			return true;
		case 13:
			return true;
		case 14:
			return true;
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

void func_215(int iParam0)
{
	if (!func_430(Global_1139381.f_5560.f_97, iParam0))
	{
		func_149(&(Global_1139381.f_5560.f_97), iParam0);
	}
}

bool func_216(int iParam0)
{
	switch (Local_458.f_1)
	{
		case 16:
		case 17:
			if (iParam0 == 0)
			{
				return true;
			}
			break;
		case 1:
			return func_431(iParam0);
	}
	return false;
}

void func_217(int iParam0)
{
	if (!func_432(iParam0))
	{
		return;
	}
	Global_1139381.f_5693.f_10[iParam0] = MISC::GET_FRAME_COUNT();
}

int func_218()
{
	return Global_1108365.f_34.f_772;
}

void func_219(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_73(Param1))
		{
			return;
		}
		if (func_433(Param1, 1))
		{
			return;
		}
		if (func_434(Param1))
		{
			return;
		}
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_435(iVar0);
	if (Global_1108365.f_34.f_353[iVar0 /*6*/] && Global_1108365.f_34.f_353[iVar0 /*6*/].f_5 == -1)
	{
		return;
	}
	if (!func_363(Param1) || !bParam3)
	{
		Global_1108365.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_5 = 5;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_4 = Global_1296859.f_21;
		if (bParam4)
		{
			Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108365.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		}
		Global_1108365.f_34.f_546[iVar0 /*7*/] = { func_436(iParam0) };
	}
	else
	{
		Global_1108365.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_5 = -1;
		Global_1108365.f_34.f_353[iVar0 /*6*/].f_4 = Global_1296859.f_21;
		Global_1108365.f_34.f_546[iVar0 /*7*/] = { func_436(iParam0) };
		if (bParam4)
		{
			Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
	}
	if (Global_1108365.f_34[iVar0 /*11*/].f_6)
	{
		func_437(iVar0);
	}
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		func_438(1);
	}
	func_438(0);
	MISC::SET_BIT(&(Global_1957959.f_1), 0);
}

void func_221(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 58:
			func_439(iParam0);
			break;
		case 3:
			func_440(iParam0);
			break;
	}
}

void func_222(int iParam0)
{
	struct<10> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	if ((iVar12 == -116590068 && func_441(&(Local_458.f_1363))) && func_442(&(Local_458.f_1363), &Var0))
	{
		func_443(&(Local_458.f_1363));
		Local_458.f_1283++;
		Local_458.f_1284 = (Local_458.f_1284 + Var0.f_8);
		Local_458.f_1286 = (Local_458.f_1286 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_458.f_1, Local_458.f_3, &iVar13))
			{
				func_444(func_47(joaat("CASH_WON"), iVar13), Var0.f_8);
			}
		}
	}
	if ((iVar12 == -2069558689 && func_441(&(Local_458.f_1367))) && func_442(&(Local_458.f_1367), &Var0))
	{
		func_443(&(Local_458.f_1367));
		Local_458.f_1283++;
		Local_458.f_1284 = (Local_458.f_1284 + Var0.f_8);
		Local_458.f_1286 = (Local_458.f_1286 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_458.f_1, Local_458.f_3, &iVar14))
			{
				func_444(func_47(joaat("CASH_WON"), iVar14), Var0.f_8);
			}
		}
	}
	if ((iVar12 == 1172622856 && func_441(&(Local_458.f_1371))) && func_442(&(Local_458.f_1371), &Var0))
	{
		func_443(&(Local_458.f_1371));
		Local_458.f_1283++;
		Local_458.f_1284 = (Local_458.f_1284 + Var0.f_8);
		Local_458.f_1286 = (Local_458.f_1286 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_458.f_1, Local_458.f_3, &iVar15))
			{
				func_444(func_47(joaat("CASH_WON"), iVar15), Var0.f_8);
			}
		}
	}
	if ((((((((iVar12 == -309190573 || iVar12 == 1440367028) || iVar12 == -697003817) || iVar12 == -252981337) || iVar12 == -926779719) || iVar12 == 1387750829) || iVar12 == 1519614621) || iVar12 == -1207291076) || ((iVar12 == -245502319 && func_441(&(Local_458.f_1375))) && func_442(&(Local_458.f_1375), &Var0)))
	{
		func_443(&(Local_458.f_1375));
		Local_458.f_1283++;
	}
	if (((iVar12 != 0 && iVar12 == Local_458.f_1383) && func_441(&(Local_458.f_1379))) && func_442(&(Local_458.f_1379), &Var0))
	{
		func_443(&(Local_458.f_1379));
		Local_458.f_1283++;
		Local_458.f_1285 = (Local_458.f_1285 + Var0.f_9);
		if (Var0.f_9 > 0)
		{
			if (func_46(Local_458.f_1, Local_458.f_3, &iVar16))
			{
				func_444(func_47(joaat("GOLD_WON"), iVar16), Var0.f_9);
			}
		}
	}
}

void func_223()
{
	func_445();
	func_446();
	func_224(Local_215);
}

void func_224(int iParam0)
{
	Local_458.f_10 = iParam0;
}

void func_225()
{
	if (!func_415(1, 30))
	{
		return;
	}
	func_52();
}

bool func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;

	iVar0 = 1;
	HUD::_TEXT_DATABASE_REQUEST(func_352());
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_352()))
	{
		iVar0 = 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(&uParam0);
		if (!HUD::_TEXT_DATABASE_HAS_LOADED(&uParam0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char[] func_227(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

char* func_228()
{
	return "LIVE";
}

bool func_229(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			return true;
		}
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return false;
}

bool func_230(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return true;
}

bool func_231()
{
	int iVar0;

	STREAMING::REQUEST_MODEL(joaat("S_TREASUREHEARTLANDS02X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_TREASUREHEARTLANDS01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_COINSTACK02"), false);
	STREAMING::REQUEST_MODEL(joaat("S_TWOFOLDMAP01X"), false);
	if (((!STREAMING::HAS_MODEL_LOADED(joaat("S_TREASUREHEARTLANDS02X")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_TREASUREHEARTLANDS01X"))) || !STREAMING::HAS_MODEL_LOADED(joaat("P_COINSTACK02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_TWOFOLDMAP01X")))
	{
		return false;
	}
	iVar0 = 2;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) < iVar0)
	{
		return false;
	}
	return true;
}

void func_232(int iParam0, int iParam1)
{
	func_149(&(Local_265[iParam1 /*6*/].f_1), iParam0);
}

bool func_233()
{
	return true;
}

void func_234()
{
}

void func_235()
{
	func_225();
	func_447();
	func_448();
	func_449();
	func_450();
	func_451();
	func_452();
	func_274();
	func_453();
	if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		func_454();
		func_455();
	}
	else
	{
		func_456();
	}
	func_457();
}

void func_236()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<8> Var5;
	struct<8> Var13;
	struct<8> Var21;
	struct<8> Var29;
	char cVar37[64];

	NETWORK::_0x236905C700FDB54D();
	if (!func_158(Local_458.f_1333))
	{
		bVar0 = true;
		if (Local_458.f_9 == joaat("POSSE_VERSUS") && Local_265[Local_458.f_1333 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_129(1, bVar0);
		return;
	}
	if (func_161(&(Local_215.f_1)))
	{
		iVar1 = func_191(&(Local_215.f_1));
		iVar2 = (Local_458.f_1269 - iVar1);
		iVar3 = (iVar2 / 1000);
		if (iVar3 < 21)
		{
			func_249();
		}
		if (func_458())
		{
			func_459(&(Local_458.f_1006), iVar2, 0, -1, 0);
			if (iVar3 < 4)
			{
				if (!func_65(16))
				{
					func_210(16);
					GRAPHICS::ANIMPOSTFX_PLAY(func_56());
					func_460(&(Local_458.f_1261));
				}
				if (iVar3 < 1)
				{
					iVar3 = 1;
				}
			}
		}
	}
	if (!func_296(Local_458.f_1289))
	{
		func_461(0, "", -1, 0);
	}
	if (((func_65(16) || !func_462(255)) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_461(0, "", -1, 0);
	}
	else if (((func_68(Local_458.f_1397) || (func_68(Local_458.f_1400) && func_463(Global_35, Local_458.f_1397) <= Local_458.f_1294)) || (!func_68(Local_458.f_1400) && func_463(Global_35, Local_458.f_1400) <= Local_458.f_1294)) || !func_464(Local_458.f_1))
	{
		if (Local_458.f_1267 != 4)
		{
			if (Local_458.f_9 == joaat("POSSE_VERSUS"))
			{
				sVar4 = func_465();
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					func_461(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_POSSE_VERSUS", &(Local_458.f_1339)), -1, 0);
				}
				else
				{
					func_461(4, sVar4, -1, 0);
				}
			}
			else
			{
				Var5 = { Local_458.f_1347 };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
				{
					Var5 = { Local_458.f_1339 };
				}
				if (func_65(1048576))
				{
					func_461(4, MISC::_CREATE_VAR_STRING(2, "FME_OBJECTIVE_WAIT_ST"), -1, 0);
				}
				else if (Local_458.f_1 == 1)
				{
					func_461(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_CHALLENGES", &Var5), -1, 0);
				}
				else
				{
					func_461(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT", &Var5), -1, 0);
				}
			}
		}
	}
	else if ((func_137(131072) && !func_137(1048576)) && func_330(Local_458.f_1297))
	{
		if (Local_458.f_1267 != 2)
		{
			func_461(2, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_FAST_TRAVEL_POSSE_VERSUS", &(Local_458.f_1339)), 7500, 0);
			func_43(1048576);
		}
	}
	else if (Local_458.f_1267 != 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_466()))
		{
			func_461(3, func_466(), -1, 0);
		}
		else if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
			func_461(3, "FME_OBJECTIVE_ENTER_AREA_POSSE_VERSUS", -1, 0);
		}
		else
		{
			func_461(3, "FME_OBJECTIVE_ENTER_AREA", -1, 0);
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Local_458.f_1326))
	{
		if (!func_68(Local_458.f_1397) && func_464(Local_458.f_1))
		{
			func_467(&(Local_458.f_1326));
		}
	}
	if (!func_458())
	{
		return;
	}
	if (!func_137(2))
	{
		if (((((func_48(func_468(joaat("MP_TUTORIAL_FME_SCORE_RULES"))) >= func_469() || Local_458.f_9 != joaat("STANDARD")) || Local_458.f_9 != joaat("THEMED")) || func_470()) || !GANG::_0x0F99F6436528A089(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))) || GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) < 2)
		{
			func_43(2);
		}
		else if (func_471(Local_458.f_1290))
		{
			Var13 = { Local_458.f_1347 };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
			{
				Var13 = { Local_458.f_1339 };
			}
			Local_458.f_1290 = func_472(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE", &Var13));
			func_444(func_468(joaat("MP_TUTORIAL_FME_SCORE_RULES")), 1);
			func_43(2);
		}
	}
	else if (!func_137(4))
	{
		if (Local_458.f_1278 >= func_469())
		{
			func_43(4);
		}
		else if (func_471(Local_458.f_1290))
		{
			Var21 = { func_473(Local_458.f_1, Local_458.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
			{
				Local_458.f_1290 = func_472(&Var21);
			}
			func_43(4);
		}
	}
	else if (!func_137(8))
	{
		if (Local_458.f_1278 >= func_469())
		{
			func_43(8);
		}
		else if (func_471(Local_458.f_1290))
		{
			Var29 = { func_474(Local_458.f_1, Local_458.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
			{
				Local_458.f_1290 = func_472(&Var29);
			}
			func_43(8);
		}
	}
	else if (!func_137(16))
	{
		if (func_137(8388608) && func_471(Local_458.f_1290))
		{
			StringCopy(&cVar37, func_475(), 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar37))
			{
				Local_458.f_1290 = func_472(&cVar37);
			}
			func_43(16);
		}
	}
}

int func_237()
{
	if (Global_1071686.f_28662.f_65.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_238()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1071686.f_28662.f_108);
	if (iVar1 < Global_1901947.f_1.f_39)
	{
		return 0;
	}
	return 1;
}

void func_239()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	func_476(1, 0, 0);
	func_63(0);
	func_43(2097152);
	func_477(&vVar0, &uVar3, &iVar4);
	if (!func_68(vVar0) && !iVar4 == -1)
	{
		if ((!func_137(134217728) && !func_478(Local_458.f_1, Local_458.f_3)) && func_479(Local_458.f_1, Local_458.f_3))
		{
			func_480(1, 0);
		}
		func_481(vVar0, uVar3, 1);
	}
	else
	{
		func_482(1, 1);
	}
}

bool func_240(int iParam0)
{
	return (Global_1572887.f_106.f_15 && iParam0) != 0;
}

void func_241(int iParam0)
{
	func_483(&(Global_1572887.f_106.f_15), iParam0);
}

void func_242(bool bParam0)
{
	if (Global_1071686.f_28773.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1071686.f_28773.f_1 == 0)
	{
		return;
	}
	func_483(&(Global_1071686.f_28773.f_2), 2);
}

void func_243(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686.f_28662.f_65.f_28 = 1;
		Global_1071686.f_28662.f_65.f_29 = iParam3;
		Global_1071686.f_28662.f_65.f_26 = iParam6;
		Global_1071686.f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1071686.f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686.f_28662.f_65.f_30 = 1;
		Global_1071686.f_28662.f_65.f_33 = !bParam1;
		Global_1071686.f_28662.f_65.f_31 = iParam2;
		Global_1071686.f_28662.f_65.f_32 = iParam4;
		Global_1071686.f_28662.f_65.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1071686.f_28662.f_65.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1071686.f_28662.f_65.f_8), 18);
		}
	}
}

void func_244()
{
	float fVar0;
	float fVar1;

	if (Local_458.f_9 != joaat("POSSE_VERSUS") || !func_464(Local_458.f_1))
	{
		return;
	}
	if ((!func_158(Local_458.f_1333) || !func_137(131072)) || func_68(Local_458.f_1397))
	{
		func_484();
		return;
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || PED::_0xB655DB7582AEC805(Global_34)) || func_485()) || Global_1915715.f_20644)
	{
		func_484();
		return;
	}
	fVar0 = func_463(Global_35, Local_458.f_1397);
	fVar1 = (Local_458.f_1295 + 35f);
	if (Local_458.f_10 > 3)
	{
		if (func_137(262144) || (Local_458.f_1294 > 0f && fVar0 <= fVar1))
		{
			func_338(131072);
			func_484();
			return;
		}
	}
	if (fVar0 < fVar1)
	{
		func_484();
		return;
	}
	if (!func_330(Local_458.f_1297) && !PED::_IS_PED_CARRYING(Global_34))
	{
		Local_458.f_1297 = func_486("FM_FAST_TRAVEL", joaat("INPUT_CONTEXT_Y"), Global_34, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		if (!func_137(524288))
		{
			func_43(524288);
		}
	}
	if (func_330(Local_458.f_1297))
	{
		if (PED::_IS_PED_CARRYING(Global_34))
		{
			if (func_487(Local_458.f_1297, 0))
			{
				func_335(&(Local_458.f_1297), 0, 1);
			}
		}
		else
		{
			if (!func_487(Local_458.f_1297, 0))
			{
				func_334(Local_458.f_1297, 1, 1, 1);
			}
			if (func_488(Local_458.f_1297, 0))
			{
				func_482(1, 1);
				func_43(262144);
			}
		}
		if (Local_458.f_1267 == 2 && func_489(Local_458.f_1289))
		{
			func_490(Local_458.f_1297, 0, 1);
		}
		else
		{
			func_490(Local_458.f_1297, 1, 1);
		}
	}
}

void func_245()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_158(Local_458.f_1333))
	{
		return;
	}
	if (Local_458.f_9 != joaat("STANDARD") && Local_458.f_9 != joaat("THEMED"))
	{
		return;
	}
	if (func_68(Local_458.f_1400))
	{
		return;
	}
	if (!func_491() > 0f)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_458.f_1328))
	{
		Local_458.f_1328 = MAP::_BLIP_ADD_FOR_RADIUS(-188007767, Local_458.f_1400, func_491());
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_458.f_1328, Local_458.f_1400);
	}
	if (func_161(&(Local_458.f_1308)) && func_191(&(Local_458.f_1308)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_458.f_1261) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_1261.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_1261.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_492()))
		{
			func_304(&(Local_458.f_1308));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_62(255)) || func_296(Local_458.f_1288)) || func_161(&(Local_458.f_1308)))
	{
		func_340(4);
		func_493();
		func_257(1);
		return;
	}
	if (func_494())
	{
		func_495(4);
		if (!func_161(&(Local_458.f_1305)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_120(), true, 0);
			func_461(5, "FME_OBJECTIVE_ABANDON_LOBBY_WARNING", -1, 0);
			func_206(&(Local_458.f_1305));
		}
		else
		{
			iVar0 = func_192();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_191(&(Local_458.f_1305)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_458.f_1400 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_496(&(Local_458.f_1261), cVar1, vVar2, func_491(), 1, 0, 0, 1, 0);
			if (func_191(&(Local_458.f_1305)) > iVar0)
			{
				func_497();
				func_498(Global_34, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_120(), true, 0);
					func_340(4);
					func_493();
					func_257(1);
				}
			}
		}
	}
	else
	{
		if (Local_458.f_1267 == 5)
		{
			func_206(&(Local_458.f_1308));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_120(), true, 0);
			if (func_296(Local_458.f_1290))
			{
				UIFEED::_0x2F901291EF177B02(Local_458.f_1290, 0);
			}
			func_461(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_458.f_1327))
		{
			MAP::REMOVE_BLIP(&(Local_458.f_1327));
		}
		func_340(4);
		func_493();
		if (func_65(16))
		{
			func_257(0);
		}
		else
		{
			func_257(1);
		}
	}
}

void func_246()
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	if (func_181(65536, Local_458.f_1333))
	{
		return;
	}
	iVar0 = func_499();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == joaat("WEAPON_FISHINGROD"))
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (!WEAPON::_0xF29A186ED428B552(Global_34, iVar0))
	{
		return;
	}
	WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, 0, &Var1);
	WEAPON::_GET_PED_WEAPON_INVENTORY_UID(Global_34, 1, &Var5);
	if (func_500(Var1, Var5))
	{
		func_232(65536, Local_458.f_1333);
	}
}

void func_247()
{
}

void func_248()
{
	if (func_68(Local_458.f_1400))
	{
		return;
	}
	if (Local_458.f_1267 == 5)
	{
		if (func_296(Local_458.f_1290))
		{
			UIFEED::_0x2F901291EF177B02(Local_458.f_1290, 0);
		}
		func_461(0, "", -1, 0);
	}
	func_340(4);
	func_493();
	func_257(0);
}

void func_249()
{
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return;
	}
	if (func_137(8192))
	{
		return;
	}
	if (!func_137(4194304))
	{
		NETWORK::_0xE546BDA1B3E288EE(512);
		func_43(4194304);
	}
}

void func_250(int iParam0, int iParam1)
{
	func_149(&(Global_1196898.f_78[iParam0 /*20*/].f_6), iParam1);
}

bool func_251()
{
	return true;
}

void func_252()
{
	Local_458.f_1280 = func_48(func_501(joaat("KILLS_PLAYERS")));
}

void func_253()
{
	Local_458.f_1281 = func_48(func_501(joaat("DEATHS")));
}

int func_254()
{
	if (Local_458.f_1388 == joaat("STANDARD") && func_182(64))
	{
		func_41(-1477057661);
		func_52();
		func_255();
		return 1;
	}
	return 0;
}

void func_255()
{
	switch (Local_458.f_1388)
	{
		case joaat("STANDARD"):
		case joaat("STANDARD_SEAMLESS"):
			func_502(0);
			break;
		case 142723591:
		case 1229355466:
			func_503();
			break;
		case -1893775542:
		case joaat("ALL_ALLY_NEUTRAL"):
			func_504();
			break;
		case -1477057661:
		case -1323241207:
			func_502(1);
			break;
		case joaat("ALL_ALLY_STANDARD_SEAMLESS"):
		case joaat("ALL_ALLY_STANDARD"):
			func_505(1);
			break;
	}
}

void func_256(var uParam0, bool bParam1)
{
	struct<14> Var0;

	if (uParam0->f_2 > 0)
	{
		UIFEED::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_293(uParam0);
			func_506();
		}
		func_507(uParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_508(0);
		func_509(0);
		UIFEED::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(uParam0, &Var0, 15);
	}
}

void func_257(bool bParam0)
{
	func_510(&(Local_458.f_1261), 1, bParam0);
}

void func_258()
{
	if (MAP::DOES_BLIP_EXIST(Local_458.f_1326))
	{
		MAP::REMOVE_BLIP(&(Local_458.f_1326));
	}
	if (MAP::DOES_BLIP_EXIST(Local_458.f_1327))
	{
		MAP::REMOVE_BLIP(&(Local_458.f_1327));
	}
	if (MAP::DOES_BLIP_EXIST(Local_458.f_1328))
	{
		MAP::REMOVE_BLIP(&(Local_458.f_1328));
	}
}

void func_259()
{
	if (!func_158(Local_458.f_1333))
	{
		return;
	}
}

void func_260()
{
	int iVar0;

	iVar0 = Local_458.f_1270;
	if (func_161(&(Local_215.f_4)))
	{
		iVar0 = (iVar0 - func_191(&(Local_215.f_4)));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 < 15000)
	{
		PED::SET_PED_RESET_FLAG(Global_34, 134, true);
	}
	Local_458.f_1268 = iVar0;
}

void func_261()
{
	bool bVar0;
	struct<8> Var1;
	bool bVar9;
	char cVar10[64];
	bool bVar18;
	char cVar19[64];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;

	func_287();
	if (!func_158(Local_458.f_1333))
	{
		bVar0 = true;
		if (Local_458.f_9 == joaat("POSSE_VERSUS") && Local_265[Local_458.f_1333 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_129(1, bVar0);
		return;
	}
	if (!func_65(2))
	{
		if (func_511())
		{
			func_282(func_280(), func_281(), 0, 0, 30000);
		}
		Var1 = { func_512() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringCopy(&Var1, func_513(Local_458.f_1339), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_514()))
		{
			cVar10 = { func_515(Local_458.f_1, Local_458.f_3) };
		}
		else
		{
			bVar9 = true;
		}
		if (func_182(64))
		{
			iVar27 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (GANG::_0x0F99F6436528A089(iVar27) && GANG::_0x149A2751AB66AC02(iVar27) > 1)
			{
				StringCopy(&cVar19, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 64);
				func_210(8);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_516()))
		{
			bVar18 = true;
		}
		if (bVar9 || bVar18)
		{
			if (bVar9 && bVar18)
			{
				Local_458.f_1288 = func_519(&Var1, func_514(), func_516(), func_517(), func_518());
			}
			else if (bVar9)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					Local_458.f_1288 = func_520(&Var1, func_514(), func_517(), func_518());
				}
				else
				{
					Local_458.f_1288 = func_519(&Var1, func_514(), &cVar19, func_517(), func_518());
				}
			}
			else if (bVar18)
			{
				Local_458.f_1288 = func_519(&Var1, &cVar10, func_516(), func_517(), func_518());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
		{
			Local_458.f_1288 = func_520(&Var1, &cVar10, func_517(), func_518());
		}
		else
		{
			Local_458.f_1288 = func_519(&Var1, &cVar10, &cVar19, func_517(), func_518());
		}
		func_210(2);
	}
	else if (!func_65(4))
	{
		if (func_511())
		{
			func_282(func_280(), func_281(), 0, 0, 30000);
		}
		if (!func_296(Local_458.f_1288))
		{
			func_210(4);
		}
	}
	else
	{
		func_282(func_280(), func_281(), 0, 0, 30000);
		if (((Local_458.f_1006.f_2 != 2 || Local_458.f_1006.f_1 != 2) || !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729)) || !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_13.f_11.f_2))
		{
			return;
		}
		if (!func_65(8) && func_182(64))
		{
			if (!func_296(Local_458.f_1288) && func_471(Local_458.f_1290))
			{
				iVar28 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
				if (GANG::_0x0F99F6436528A089(iVar28) && GANG::_0x149A2751AB66AC02(iVar28) > 1)
				{
					Var29 = { func_512() };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
					{
						Var29 = { Local_458.f_1339 };
					}
					Local_458.f_1288 = func_520(&Var29, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 0, 0);
				}
				func_210(8);
			}
		}
		else if (!func_137(32))
		{
			bVar37 = true;
			bVar38 = false;
			func_521(Local_458.f_1326, &bVar37, &bVar38);
			if (Local_458.f_1278 >= func_469() && !bVar38)
			{
				func_43(32);
			}
			else if (!func_296(Local_458.f_1288) && func_471(Local_458.f_1290))
			{
				if (bVar37)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_521(Local_458.f_1326, &bVar37, &bVar38)))
					{
						Local_458.f_1290 = func_472(func_521(Local_458.f_1326, &bVar37, &bVar38));
					}
					func_43(32);
				}
			}
		}
		else if (!func_137(128))
		{
			if ((func_48(func_468(joaat("MP_TUTORIAL_FME_SCORE_TIMER"))) >= 5 || !func_298(Local_458.f_1385)) || !func_522())
			{
				func_43(64);
				func_43(128);
			}
			else if (!func_137(64) && !func_523(Local_458.f_1))
			{
				func_43(64);
			}
			else if (!func_296(Local_458.f_1288) && func_471(Local_458.f_1290))
			{
				if (!func_137(64))
				{
					Local_458.f_1290 = func_472("FME_HELP_SCOREBOARD_1");
					func_43(64);
				}
				else
				{
					Local_458.f_1290 = func_472("FME_HELP_SCOREBOARD_2");
					func_444(func_468(joaat("MP_TUTORIAL_FME_SCORE_TIMER")), 1);
					func_43(128);
				}
			}
		}
		else if (!func_137(65536))
		{
			if (func_48(func_468(joaat("MP_TUTORIAL_FME_SCORE_TIED"))) >= func_469())
			{
				func_43(65536);
			}
			else if (!func_523(Local_458.f_1))
			{
				func_43(65536);
			}
			else if ((((func_288() && func_522()) && !func_296(Local_458.f_1288)) && func_471(Local_458.f_1290)) && Local_265[Local_458.f_1333 /*6*/].f_2 > 0f)
			{
				bVar39 = false;
				if (func_281() & 1024 == 1024)
				{
					bVar39 = true;
				}
				if (func_524(bVar39, 1, &iVar40))
				{
					if (!func_161(&(Local_458.f_1302)))
					{
						func_206(&(Local_458.f_1302));
					}
					else if (func_191(&(Local_458.f_1302)) >= 2000)
					{
						Local_458.f_1290 = func_472(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE_DRAW", func_526(PLAYER::GET_PLAYER_NAME(iVar40), func_525(iVar40, 1, -1, 0))));
						func_444(func_468(joaat("MP_TUTORIAL_FME_SCORE_TIED")), 1);
						func_43(65536);
					}
				}
				else if (func_161(&(Local_458.f_1302)))
				{
					func_304(&(Local_458.f_1302));
				}
			}
		}
	}
}

void func_262()
{
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return;
	}
	if (func_158(Local_458.f_1333))
	{
		func_495(16);
	}
	else
	{
		func_340(16);
	}
}

void func_263()
{
	if (func_158(Local_458.f_1333))
	{
		func_527(250);
	}
}

void func_264()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_158(Local_458.f_1333))
	{
		return;
	}
	if ((Local_458.f_9 != joaat("STANDARD") && Local_458.f_9 != joaat("THEMED")) && Local_458.f_9 != joaat("COOP"))
	{
		return;
	}
	if (func_528() == 4 || func_528() == 10)
	{
		return;
	}
	if (func_68(Local_458.f_1397))
	{
		return;
	}
	if (!func_529())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_458.f_1328))
	{
		Local_458.f_1328 = func_530();
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_458.f_1328, Local_458.f_1397);
	}
	if (func_161(&(Local_458.f_1308)) && func_191(&(Local_458.f_1308)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_458.f_1261) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_1261.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_1261.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_492()))
		{
			func_304(&(Local_458.f_1308));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_62(255)) || func_296(Local_458.f_1288)) || func_161(&(Local_458.f_1308)))
	{
		func_340(4);
		func_493();
		func_257(1);
		return;
	}
	if (func_531())
	{
		func_495(4);
		if (!MAP::DOES_BLIP_EXIST(Local_458.f_1327))
		{
			Local_458.f_1327 = MAP::_BLIP_ADD_FOR_COORD(408396114, Local_458.f_1397);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_458.f_1327, "FME_OBJECTIVE_ABANDON_BLIP_NAME");
			MAP::_BLIP_SET_MODIFIER(Local_458.f_1327, 231194138);
		}
		else
		{
			MAP::SET_BLIP_COORDS(Local_458.f_1327, Local_458.f_1397);
		}
		if (!func_161(&(Local_458.f_1305)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_120(), true, 0);
			func_461(5, "FME_OBJECTIVE_ABANDON_WARNING", -1, 0);
			func_206(&(Local_458.f_1305));
		}
		else
		{
			iVar0 = func_532();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_191(&(Local_458.f_1305)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_458.f_1397 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_496(&(Local_458.f_1261), cVar1, vVar2, Local_458.f_1295, 1, 0, 0, 1, 0);
			if (func_191(&(Local_458.f_1305)) > iVar0)
			{
				func_497();
				func_498(Global_34, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_120(), true, 0);
					func_340(4);
					func_493();
					func_257(1);
				}
			}
		}
	}
	else
	{
		if (Local_458.f_1267 == 5)
		{
			func_206(&(Local_458.f_1308));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_120(), true, 0);
			if (func_296(Local_458.f_1290))
			{
				UIFEED::_0x2F901291EF177B02(Local_458.f_1290, 0);
			}
			func_461(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_458.f_1327))
		{
			MAP::REMOVE_BLIP(&(Local_458.f_1327));
		}
		func_340(4);
		func_493();
		func_257(1);
	}
}

bool func_265()
{
	return false;
}

void func_266()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = func_48(func_501(joaat("KILLS_PLAYERS")));
	iVar0 = (iVar0 - Local_458.f_1280);
	if (iVar0 != Local_265[Local_458.f_1333 /*6*/].f_3)
	{
		Local_265[Local_458.f_1333 /*6*/].f_3 = iVar0;
	}
	iVar1 = func_48(func_501(joaat("DEATHS")));
	iVar1 = (iVar1 - Local_458.f_1281);
	if (iVar1 != Local_265[Local_458.f_1333 /*6*/].f_4)
	{
		Local_265[Local_458.f_1333 /*6*/].f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_458.f_1390;
		iVar7 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
		iVar8 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar7))
		{
			fVar2 = Local_265[iVar9 /*6*/].f_2;
			fVar3 = BUILTIN::TO_FLOAT(Local_265[iVar9 /*6*/].f_3);
			fVar4 = BUILTIN::TO_FLOAT(Local_265[iVar9 /*6*/].f_4);
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar7);
			fVar5 = BUILTIN::TO_FLOAT(Local_265[iVar9 /*6*/].f_5);
			fVar6 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8));
		}
		func_533(&(Local_458.f_13), fVar2, iVar8, &(Local_458.f_972[iVar9]), !func_158(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_458.f_1390++;
		if (Local_458.f_1390 >= 32)
		{
			Local_458.f_1390 = 0;
		}
		iVar10++;
	}
	func_534(&(Local_458.f_13));
}

void func_267()
{
	char* sVar0;
	int iVar1;

	if ((Local_458.f_9 == joaat("COOP") || Local_458.f_9 == joaat("POSSE_VERSUS")) || !func_535())
	{
		return;
	}
	if (Local_215.f_11 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_215.f_11))
	{
		if (Local_215.f_11 != Local_458.f_1005)
		{
			if (Local_458.f_1005 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_458.f_1005))
			{
				func_536(Local_458.f_1005);
			}
			if (Local_458.f_1005 == 255)
			{
			}
			Local_458.f_1005 = Local_215.f_11;
			if ((func_158(Local_458.f_1333) && !func_296(Local_458.f_1288)) && !func_65(2097152))
			{
				if (Local_458.f_1005 == PLAYER::PLAYER_ID())
				{
					iVar1 = joaat("COLOR_WHITE");
					sVar0 = "FME_GAME_UPDATE_NEW_LEADER_SELF";
				}
				else
				{
					iVar1 = func_525(Local_458.f_1005, 1, -1, 0);
					sVar0 = MISC::_CREATE_VAR_STRING(10, "FME_GAME_UPDATE_NEW_LEADER", func_526(PLAYER::GET_PLAYER_NAME(Local_458.f_1005), iVar1));
				}
				Local_458.f_1292 = func_537(sVar0, iVar1);
			}
		}
		if (Local_458.f_1005 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_458.f_1005))
		{
			func_538(Local_458.f_1005, joaat("TROPHY"));
		}
	}
}

void func_268()
{
	if (func_161(&(Local_458.f_1311)) && func_191(&(Local_458.f_1311)) > 120000)
	{
		func_304(&(Local_458.f_1311));
		func_106(0);
		func_54();
	}
}

void func_269()
{
	func_539(&Local_14, &vLocal_44, &Local_141);
	func_540(&Local_14, &(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), &Local_141);
	func_541(&Local_14, &vLocal_44, &Local_141);
	func_542(&Local_14, &Local_141);
	if (MISC::GET_GAME_TIMER() < (Local_141.f_2 + func_543(Local_141)))
	{
		return;
	}
	Local_141.f_2 = MISC::GET_GAME_TIMER();
	switch (Local_141)
	{
		case 0:
			func_423(&Local_141, 1, &(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1));
			break;
		case 1:
			if (func_544(&Local_14, &(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), &Local_141))
			{
				func_423(&Local_141, 2, &(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1));
			}
			break;
		case 2:
			if (func_545())
			{
			}
			break;
	}
}

bool func_270()
{
	return false;
}

void func_271()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = Local_265[iVar7 /*6*/].f_2;
			fVar1 = BUILTIN::TO_FLOAT(Local_265[iVar7 /*6*/].f_3);
			fVar2 = BUILTIN::TO_FLOAT(Local_265[iVar7 /*6*/].f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT(Local_265[iVar7 /*6*/].f_5);
			fVar4 = fVar1;
		}
		func_533(&(Local_458.f_13), fVar0, iVar6, &(Local_458.f_972[iVar7]), !func_158(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		iVar7++;
	}
	func_534(&(Local_458.f_13));
}

void func_272()
{
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return;
	}
	VOICE::_0x1C38C3577901AF1F();
	func_546();
}

void func_273()
{
	if (!func_158(Local_458.f_1333))
	{
		func_129(1, 1);
		return;
	}
	func_287();
	func_282(func_280(), func_281(), Local_458.f_11, Local_458.f_12, 30000);
}

void func_274()
{
	if (!func_547(2, -1))
	{
		return;
	}
	if ((func_548() != 4 && func_548() != 10) && func_548() != 0)
	{
		return;
	}
	func_549();
}

bool func_275()
{
	return func_550(256);
}

void func_276()
{
	func_551(128);
}

int func_277(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	StringCopy(&(Local_458.f_1407), func_552(iParam0), 64);
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Local_458.f_1415 = joaat("COLOR_PURE_WHITE");
	}
	else
	{
		Local_458.f_1415 = func_525(iParam0, 1, -1, 0);
	}
	return 1;
}

void func_278(var uParam0)
{
	uParam0->f_948 = 1;
}

void func_279(var uParam0)
{
	uParam0->f_949 = 1;
}

var func_280()
{
	return func_553();
}

int func_281()
{
	return 113;
}

void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;

	Local_458.f_11 = iParam2;
	Local_458.f_12 = iParam3;
	iVar0 = joaat("COLOR_BLUE");
	iVar1 = joaat("COLOR_PURE_WHITE");
	iVar2 = joaat("COLOR_RED");
	iVar3 = joaat("COLOR_PURE_WHITE");
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	if (Local_458.f_1388 == joaat("STANDARD"))
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_458.f_13.f_11.f_159), 16);
		}
	}
	else if (func_554())
	{
		iVar2 = joaat("COLOR_BLUE");
		iVar3 = joaat("COLOR_BLACK");
		iVar0 = joaat("COLOR_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_458.f_13.f_11.f_159), 16);
		}
	}
	else if (func_555())
	{
		iVar2 = joaat("COLOR_BLUE");
	}
	if (Local_458.f_1 == 8)
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_458.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_458.f_1 == 7)
	{
		iVar0 = joaat("COLOR_BLUEDARK");
		iVar2 = joaat("COLOR_BLUEDARK");
		if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_458.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_458.f_1 == 14)
	{
		iVar4 = joaat("COLOR_BLUELIGHT");
		iVar5 = joaat("COLOR_YELLOW");
		iVar6 = joaat("COLOR_BLUELIGHT");
		iVar7 = joaat("COLOR_YELLOW");
		if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_458.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_458.f_1 == 13)
	{
		iVar4 = joaat("COLOR_WHITE");
		iVar5 = joaat("COLOR_WHITE");
		iVar6 = joaat("COLOR_WHITE");
		iVar7 = joaat("COLOR_WHITE");
		if (!MISC::IS_BIT_SET(Local_458.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_458.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_458.f_1 == 6 || Local_458.f_1 == 5)
	{
		if ((func_319(&(Local_458.f_13), 0) > 0f && Local_458.f_13.f_211[0 /*23*/].f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_458.f_13.f_211[0 /*23*/].f_14))
		{
			if (Local_458.f_13.f_211[0 /*23*/].f_14 == PLAYER::PLAYER_ID())
			{
				if ((((func_319(&(Local_458.f_13), 1) > 0f && Local_458.f_13.f_211[1 /*23*/].f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_458.f_13.f_211[1 /*23*/].f_14)) && GANG::_0x81FB74C83C2ED69F(Local_458.f_13.f_211[1 /*23*/].f_14)) && !func_556(Local_458.f_13.f_211[1 /*23*/].f_14, 1))
				{
					iVar2 = joaat("COLOR_BLUE");
				}
			}
			else if (GANG::_0x81FB74C83C2ED69F(Local_458.f_13.f_211[0 /*23*/].f_14) && !func_556(Local_458.f_13.f_211[0 /*23*/].f_14, 1))
			{
				iVar2 = joaat("COLOR_BLUE");
			}
		}
	}
	uVar8 = 1;
	switch (Local_458.f_1385)
	{
		case joaat("TIMER"):
			func_459(&(Local_458.f_1006), iParam0, 0, iParam4, func_557());
			break;
		case 1310067901:
			func_558(&(Local_458.f_1006), &(Local_458.f_13), &uVar8, iParam1, 1);
			break;
		case joaat("LEADERBOARD"):
			func_558(&(Local_458.f_1006), &(Local_458.f_13), &uVar8, iParam1 | 256, 1);
			break;
		case -2065086408:
			func_559(&(Local_458.f_1006), &(Local_458.f_13), &uVar8, iParam0, 0, iParam4, func_557(), iParam1 | 2048, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 1619021308:
			func_560(&(Local_458.f_1006), &(Local_458.f_13), &uVar8, iParam0, 0, iParam4, func_557(), iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 524681:
			func_561(&(Local_458.f_1006), &(Local_458.f_1021), iParam0, 0, iParam4, func_557(), Local_458.f_1260, 0, 0, 0, 0);
			break;
		case -1828147615:
			func_562(&(Local_458.f_1006), &(Local_458.f_1021), &(Local_458.f_13), &uVar8, iParam0, 0, iParam4, func_557(), joaat("DELIVER"), 0, iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 227643027:
			func_563(&(Local_458.f_1006), &(Local_458.f_1021), &(Local_458.f_13), iParam0, &uVar8, 0, iParam4, func_557(), joaat("DELIVER"), 0, 0, 1, 0, iParam1, 1, joaat("COLOR_BLUE"), joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iVar4, iVar5, iVar6, iVar7);
			break;
		case 1086838518:
			func_558(&(Local_458.f_1006), &(Local_458.f_13), &uVar8, iParam1, 1);
			func_561(&(Local_458.f_1006), &(Local_458.f_1021), iParam0, 0, iParam4, func_557(), Local_458.f_1260, 0, 0, 0, 0);
			break;
	}
}

void func_283()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	struct<5> Var9;
	vector3 vVar14;

	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return;
	}
	iVar0 = Local_215.f_10;
	if (func_182(256))
	{
		iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (GANG::_0x0F99F6436528A089(iVar1))
		{
			iVar2 = GANG::_0x4BE6C13A45CCA8EC(iVar1);
			if (iVar2 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar0 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (!func_564())
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			}
			else
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_34, false, false) };
			}
			fVar7 = 0f;
			bVar8 = true;
			if (!func_565(&vVar4, &fVar7, &bVar8))
			{
				if (((func_36(&Var9, Local_458.f_1) && func_44(&Var9)) && func_45(&Var9, Local_458.f_2)) && func_566(&Var9))
				{
					func_146(Var9, 2060397848, &vVar4, 1);
					func_145(Var9, -185561597, &fVar7, 1);
				}
			}
			Local_458.f_1403 = { vVar4 };
			Local_458.f_1417 = PED::CLONE_PED(iVar3, 0f, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_458.f_1417))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_458.f_1417))
				{
					PED::RESURRECT_PED(Local_458.f_1417);
				}
				else
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_458.f_1417, 100, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_458.f_1417, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_458.f_1417, false, true);
				ENTITY::SET_ENTITY_COORDS(Local_458.f_1417, vVar4, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Local_458.f_1417, fVar7);
				if (bVar8)
				{
					ENTITY::_0x9587913B9E772D29(Local_458.f_1417, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_458.f_1417, true);
				ENTITY::SET_ENTITY_COLLISION(Local_458.f_1417, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_458.f_1417, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_458.f_1417, false);
				PED::CLEAR_PED_DECORATIONS(Local_458.f_1417);
				PED::_0x2208438012482A1A(Local_458.f_1417, true, true);
				if (func_567())
				{
					Local_458.f_1416 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (CAM::DOES_CAM_EXIST(Local_458.f_1416))
					{
						vVar14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_458.f_1417, true, false), ENTITY::GET_ENTITY_HEADING(Local_458.f_1417), 0.3f, 2f, 0.3f) };
						CAM::SET_CAM_COORD(Local_458.f_1416, vVar14);
						CAM::POINT_CAM_AT_ENTITY(Local_458.f_1416, Local_458.f_1417, 0.3f, 0f, 0.3f, true);
						CAM::SET_CAM_FOV(Local_458.f_1416, 35f);
						ENTITY::SET_ENTITY_HEADING(Local_458.f_1417, func_568(vVar4, vVar14, 1));
					}
				}
			}
		}
	}
}

void func_284()
{
	if (func_137(268435456))
	{
		return;
	}
	if (Local_215.f_12 == 0)
	{
		func_569();
		if (Local_458.f_9 == joaat("COOP"))
		{
			if (func_182(256))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
			if (func_137(32768))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_215.f_10 == PLAYER::PLAYER_ID() || func_137(8192))
		{
			func_43(4096);
		}
		else
		{
			if (Local_265[Local_458.f_1333 /*6*/].f_2 <= 0f)
			{
				func_570((func_193(2) - 1));
			}
			func_43(16384);
		}
		if (func_137(4096) || func_137(8192))
		{
			func_571(Local_458.f_1, Local_458.f_3, Local_458.f_1334);
		}
		else if (func_137(16384))
		{
			func_572(Local_458.f_1, Local_458.f_3, Local_458.f_1334);
		}
		func_573();
	}
	if (Local_215.f_12 == 4)
	{
		func_43(16384);
	}
	func_43(268435456);
}

void func_285()
{
}

void func_286()
{
}

void func_287()
{
	if ((func_158(Local_458.f_1333) && func_298(Local_458.f_1385)) && Local_215.f_12 == 0)
	{
		if (!func_18(Local_458, 4096))
		{
			func_250(Local_458, 4096);
		}
		if (!func_574())
		{
			func_250(Local_458, 16384);
		}
	}
	else
	{
		if (func_18(Local_458, 4096))
		{
			func_575(Local_458, 4096);
		}
		if (func_18(Local_458, 16384))
		{
			func_575(Local_458, 16384);
		}
	}
}

bool func_288()
{
	return func_18(Local_458, 4096);
}

bool func_289()
{
	switch (Local_458.f_1)
	{
		case 8:
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

bool func_290()
{
	return false;
}

void func_291()
{
	func_576(&(Local_458.f_1021), 1, 0);
	func_577(&(Local_458.f_13));
	func_256(&(Local_458.f_1006), 1);
}

bool func_292()
{
	struct<8> Var0;
	char cVar8[64];
	struct<8> Var16;
	char cVar24[64];
	bool bVar32;
	struct<8> Var33;
	char cVar41[64];

	if (func_62(255))
	{
		return false;
	}
	UIFEED::_0xDD1232B332CBB9E7(11, 1, 0);
	if (func_578())
	{
		return true;
	}
	Var0 = { func_512() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_458.f_1347 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_458.f_1339 };
		}
	}
	if (Local_215.f_12 != 0)
	{
		StringCopy(&cVar8, func_579(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			if (Local_458.f_9 == joaat("POSSE_VERSUS"))
			{
				StringCopy(&cVar8, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_322()))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
			{
				Local_458.f_1288 = func_520(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_322(), func_580(), func_581());
			}
			else
			{
				Local_458.f_1288 = func_520(&cVar8, func_322(), func_580(), func_581());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			Local_458.f_1288 = func_520(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_582(Local_215.f_12), func_580(), func_581());
		}
		else
		{
			Local_458.f_1288 = func_520(&cVar8, func_582(Local_215.f_12), func_580(), func_581());
		}
	}
	else if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		Local_458.f_1288 = func_583(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_580(), func_581());
	}
	else if (func_137(4096))
	{
		Var16 = { func_584() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
		{
			StringCopy(&Var16, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
		}
		StringCopy(&cVar24, func_585(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar24))
		{
			Local_458.f_1288 = func_520(&Var16, func_320(func_319(&(Local_458.f_13), 0)), func_580(), func_581());
		}
		else
		{
			Local_458.f_1288 = func_519(&Var16, func_320(func_319(&(Local_458.f_13), 0)), &cVar24, func_580(), func_581());
		}
	}
	else
	{
		bVar32 = false;
		Var33 = { func_586() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
		{
			if (!func_181(4096, Local_458.f_1333) && Local_458.f_1334 >= 0)
			{
				bVar32 = true;
			}
			else if (Local_458.f_9 == joaat("POSSE_VERSUS"))
			{
				StringCopy(&Var33, func_579(), 64);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
				{
					StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
				}
			}
			else
			{
				StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER", 64);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_323(Local_458.f_1407, Local_458.f_1415, func_319(&(Local_458.f_13), 0))))
		{
			if (bVar32)
			{
				Local_458.f_1288 = func_583(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_587(Local_458.f_1334)), func_580(), func_581());
			}
			else
			{
				Local_458.f_1288 = func_583(&Var33, func_580(), func_581());
			}
		}
		else
		{
			StringCopy(&cVar41, func_585(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar41))
			{
				if (bVar32)
				{
					Local_458.f_1288 = func_520(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_587(Local_458.f_1334)), func_323(Local_458.f_1407, Local_458.f_1415, func_319(&(Local_458.f_13), 0)), func_580(), func_581());
				}
				else
				{
					Local_458.f_1288 = func_520(&Var33, func_323(Local_458.f_1407, Local_458.f_1415, func_319(&(Local_458.f_13), 0)), func_580(), func_581());
				}
			}
			else if (bVar32)
			{
				Local_458.f_1288 = func_519(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_587(Local_458.f_1334)), func_323(Local_458.f_1407, Local_458.f_1415, func_319(&(Local_458.f_13), 0)), &cVar41, func_580(), func_581());
			}
			else
			{
				Local_458.f_1288 = func_519(&Var33, func_323(Local_458.f_1407, Local_458.f_1415, func_319(&(Local_458.f_13), 0)), &cVar41, func_580(), func_581());
			}
		}
	}
	return true;
}

void func_293(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_11))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

int func_294()
{
	return 7000;
}

bool func_295()
{
	vector3 vVar0;
	bool bVar3;

	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_458.f_1417))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_458.f_1417, true, false) };
	if (func_68(vVar0))
	{
		return true;
	}
	if (func_62(255))
	{
		return false;
	}
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x387AD749E3B69B70(vVar0, func_588(Local_458.f_1416), 60f, 0);
		return false;
	}
	bVar3 = true;
	if (!STREAMING::_0x0909F71B5C070797())
	{
		bVar3 = false;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar0);
	if (!STREAMING::_HAS_COLLISION_LOADED_AT_COORD(vVar0))
	{
		bVar3 = false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	if (!ENTITY::_0x6BFBDC46139C45AB(vVar0))
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		return false;
	}
	if (!AUDIO::_0xE368E8422C860BA7(func_123(), func_124(), -2))
	{
		bVar3 = false;
	}
	if (!AUDIO::_0xE368E8422C860BA7(func_125(), func_126(), -2))
	{
		bVar3 = false;
	}
	if (!func_589())
	{
		bVar3 = false;
	}
	return bVar3;
}

bool func_296(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_590(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_297()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((((!func_65(65536) && Local_458.f_9 == joaat("POSSE_VERSUS")) && func_288()) && func_522()) && func_471(Local_458.f_1290))
	{
		bVar0 = false;
		if (func_281() & 1024 == 1024)
		{
			bVar0 = true;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= (Local_458.f_1334 - 1))
		{
			iVar1 = Local_458.f_13.f_211[iVar2 /*23*/].f_14;
			if (func_591(iVar1, bVar0, 0))
			{
				Local_458.f_1290 = func_472("FME_HELP_SCORE_SURPASS");
				func_210(65536);
			}
			else
			{
				iVar2++;
			}
		}
	}
}

bool func_298(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TIMER"):
			return false;
		default:
			break;
	}
	return true;
}

bool func_299()
{
	return false;
}

bool func_300()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_301()
{
	int iVar0;

	iVar0 = UIFEED::_0xC17F69E1418CD11F(7);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_302()
{
	return (func_592() && func_593());
}

void func_303()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

void func_304(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_305()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::_GET_MOUNT_OF_PLAYER(iVar1);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_VISIBLE(iVar2)) && func_594(iVar2, Local_458.f_1403, 1) < 10f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_306(vector3 vParam0, float fParam3)
{
	Global_1572887.f_106.f_80 = { vParam0 };
	Global_1572887.f_106.f_83 = fParam3;
}

void func_307()
{
	return;
}

void func_308()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(false);
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, false);
			}
		}
		iVar1++;
	}
}

void func_309()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_458.f_1338))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_458.f_1417))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_458.f_1338, ENTITY::GET_ENTITY_COORDS(Local_458.f_1417, true, false), ENTITY::GET_ENTITY_ROTATION(Local_458.f_1417, 2), 2);
	ANIMSCENE::START_ANIM_SCENE(Local_458.f_1338);
}

bool func_310()
{
	return false;
}

int func_311()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
	{
		case 0:
			return joaat("KIT_EMOTE_ACTION_SHOOTHIP_1");
		case 1:
			return joaat("KIT_EMOTE_ACTION_SPIT_1");
		case 2:
			return joaat("KIT_EMOTE_GREET_THUMBSUP_1");
		case 3:
			return joaat("KIT_EMOTE_GREET_WAVENEAR_1");
		case 4:
			return joaat("KIT_EMOTE_REACTION_NOD_HEAD_1");
		case 5:
			return joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1");
		case 6:
			return joaat("KIT_EMOTE_TAUNT_UP_YOURS_1");
		case 7:
			return joaat("KIT_EMOTE_TAUNT_YOUSTINK_1");
		default:
			break;
	}
	return joaat("KIT_EMOTE_GREET_THUMBSUP_1");
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_EMOTE_ACTION_SHOOTHIP_1"):
			return 1500;
		case joaat("KIT_EMOTE_ACTION_SPIT_1"):
			return 1800;
		case joaat("KIT_EMOTE_GREET_THUMBSUP_1"):
			return 1500;
		case joaat("KIT_EMOTE_GREET_WAVENEAR_1"):
			return 1500;
		case joaat("KIT_EMOTE_REACTION_NOD_HEAD_1"):
			return 1800;
		case joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"):
			return 1800;
		case joaat("KIT_EMOTE_TAUNT_UP_YOURS_1"):
			return 1400;
		case joaat("KIT_EMOTE_TAUNT_YOUSTINK_1"):
			return 1800;
		default:
			break;
	}
	return 1500;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_EMOTE_ACTION_SPIT_1"):
		case joaat("KIT_EMOTE_ACTION_SHOOTHIP_1"):
		case joaat("KIT_EMOTE_ACTION_FIST_PUMP_1"):
		case joaat("KIT_EMOTE_ACTION_POINT_1"):
		case joaat("KIT_EMOTE_ACTION_BLOW_KISS_1"):
			return 1;
		case joaat("KIT_EMOTE_GREET_WAVENEAR_1"):
		case joaat("KIT_EMOTE_GREET_THUMBSUP_1"):
			return 3;
		case joaat("KIT_EMOTE_REACTION_NOD_HEAD_1"):
		case joaat("KIT_EMOTE_REACTION_SHAKEHEAD_1"):
		case joaat("KIT_EMOTE_REACTION_SHOT_1"):
		case joaat("KIT_EMOTE_REACTION_YEEHAW_1"):
		case joaat("KIT_EMOTE_REACTION_POINTLAUGH_1"):
			return 0;
		case joaat("KIT_EMOTE_TAUNT_YOUSTINK_1"):
		case -23808358:
		case joaat("KIT_EMOTE_TAUNT_UP_YOURS_1"):
		case joaat("KIT_EMOTE_TAUNT_PROVOKE_1"):
			return 2;
		default:
			break;
	}
	return -1;
}

void func_314(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	if (!func_595(iParam1))
	{
		return;
	}
	TASK::_TASK_EMOTE(iParam0, iParam5, iParam2, iParam1, bParam3, bParam4, false, false, bParam6);
}

char* func_315()
{
	return "";
}

char* func_316()
{
	return "";
}

char* func_317()
{
	return "";
}

char* func_318()
{
	return "";
}

float func_319(var uParam0, int iParam1)
{
	return uParam0->f_211[iParam1 /*23*/].f_5;
}

char* func_320(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_TH_END_TREAS_FOUND_WIN");
}

void func_321(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[0]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[0], sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[1]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[1], sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[2]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[2], sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_6[3]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[3], sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

char* func_322()
{
	return "";
}

char* func_323(var uParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_TH_END_TREAS_FOUND_LOSE");
}

void func_324(int iParam0)
{
}

bool func_325()
{
	return false;
}

bool func_326(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return true;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_230(uParam0);
		return false;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return true;
}

bool func_327()
{
	return false;
}

int func_328()
{
	return joaat("LEADERBOARD");
}

char* func_329(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_330(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951255[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3);
}

int func_331(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_596(iVar0, 2))
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
		func_597(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_332(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_330(iParam0))
	{
		return;
	}
	iVar0 = func_598(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1951255[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1951255[iVar0 /*23*/].f_3, sParam1);
}

bool func_333(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_330(iParam0))
	{
		return false;
	}
	iVar0 = func_598(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1951255[iVar0 /*23*/].f_3);
}

void func_334(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_330(iParam0))
	{
		return;
	}
	iVar0 = func_598(iParam0);
	if (bParam1)
	{
		func_599(iParam0, 4);
		if (bParam3)
		{
			func_600(iVar0, 1);
		}
		func_601(iVar0, 1);
	}
	else
	{
		func_602(iParam0, 4);
		func_601(iVar0, 0);
	}
}

void func_335(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_330(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_598(*uParam0);
	if (Global_1951255[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_603(iVar0);
	*uParam0 = 0;
}

bool func_336()
{
	return true;
}

bool func_337(bool bParam0)
{
	if (!func_159(joaat("FREEMODE"), bParam0))
	{
		return false;
	}
	return true;
}

void func_338(int iParam0)
{
	func_428(&(Local_458.f_1335), iParam0);
}

void func_339(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_604(&(Global_1139381.f_4796), bParam1);
		func_170(117);
	}
	else
	{
		func_171(117);
	}
}

void func_340(int iParam0)
{
	if (func_605(Global_1903131, iParam0))
	{
		func_606(&Global_1903131, iParam0);
	}
}

void func_341(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	func_607(iVar0, iParam0);
	func_608(iVar0, iParam0);
}

bool func_342()
{
	return func_609(256);
}

void func_343()
{
	if (func_609(256))
	{
		func_610(256);
	}
}

void func_344(int iParam0, int iParam1)
{
	func_428(&(Local_265[iParam1 /*6*/].f_1), iParam0);
}

bool func_345(int iParam0)
{
	int iVar0;

	if (!GANG::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	iVar0 = GANG::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (func_611(iVar0, 0, 1))
	{
		return false;
	}
	if (func_612(iVar0, 32))
	{
		return true;
	}
	return false;
}

void func_346(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_342())
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (!func_612(PLAYER::PLAYER_ID(), 32))
		{
			func_613(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_ON");
				func_614(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_615(iParam0, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_612(PLAYER::PLAYER_ID(), 32))
	{
		func_616(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_OFF");
			func_614(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_615(iParam0, GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		}
	}
}

void func_347()
{
	func_170(92);
}

void func_348(bool bParam0)
{
	if (bParam0)
	{
		func_171(49);
	}
	else
	{
		func_170(49);
	}
}

void func_349(bool bParam0)
{
	if (bParam0)
	{
		func_171(109);
		if (!Global_1296859.f_12)
		{
			func_617(16);
		}
	}
	else
	{
		func_170(109);
		if (!Global_1296859.f_12)
		{
			func_617(16);
		}
	}
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_351(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_618(&Global_1940258, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_619(&Global_1940258, 8388608);
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

char* func_352()
{
	return "FMUI";
}

void func_353()
{
	if (!func_181(65536, Local_458.f_1333))
	{
		return;
	}
	if (!func_181(32768, Local_458.f_1333))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_500(Local_458.f_1441, Local_458.f_1445))
	{
		func_344(32768, Local_458.f_1333);
	}
}

void func_354()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_1406))
	{
		func_620(Local_458.f_1406);
	}
}

void func_355()
{
	if (func_296(Local_458.f_1292))
	{
		UIFEED::_0x2F901291EF177B02(Local_458.f_1292, 0);
	}
}

void func_356()
{
	func_335(&(Local_458.f_1297), 1, 1);
	func_335(&(Local_458.f_1298), 1, 1);
}

void func_357()
{
	if (func_296(Local_458.f_1290))
	{
		UIFEED::_0x2F901291EF177B02(Local_458.f_1290, 0);
	}
}

void func_358()
{
	if (func_296(Local_458.f_1288))
	{
		UIFEED::_0x2F901291EF177B02(Local_458.f_1288, 0);
	}
}

void func_359()
{
	if (func_296(Local_458.f_1289))
	{
		UIFEED::_0x2F901291EF177B02(Local_458.f_1289, 0);
	}
	Local_458.f_1289 = 0;
	Local_458.f_1267 = 0;
}

void func_360()
{
	if (func_296(Local_458.f_1291))
	{
		UIFEED::_0x2F901291EF177B02(Local_458.f_1291, 0);
	}
}

void func_361()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_536(iVar0);
		iVar0++;
	}
}

bool func_362(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_621(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_363(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_621(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_364(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_363(Param0) && !func_362(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_622(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_621(Param0) == 3)
		{
			func_623(1, -1706799532);
		}
		else if (func_621(Param0) == 4)
		{
			func_623(0, -1706799532);
		}
	}
	if ((func_621(Param0) == 3 || func_621(Param0) == 1) || ((bParam5 && func_621(Param0) == 4) && STATS::_0x01F4D242765C6B24(func_622(Param0))))
	{
		if (iParam3 != -1)
		{
			func_624(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_624(Param0, 2, iParam4, 255, 0);
		}
	}
	func_625(Param0, 0);
	if (func_74(func_375(0), Param0))
	{
		func_351(1);
		func_626(0);
		func_627(0);
		func_628(1);
	}
	func_629(Param0);
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_630(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_365(int iParam0, struct<2> Param1)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_631(Param1, &Var0);
	func_632(0);
	func_633(1);
	if (func_634(Global_1196898.f_78[iParam0 /*20*/].f_3) == joaat("POSSE_VERSUS"))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_POSSE_VERSUS"));
		STATS::_0xE5A680A5D8B1F687(0);
	}
	else
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_FREE_ROAM_EVENT"));
	}
}

void func_366(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_483(&(Global_1194053.f_3), 32);
		func_483(&(Global_1194053.f_4), 12);
		Global_1194053.f_498 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_483(&(Global_1194053.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1194053.f_5[5] = 0;
		func_483(&(Global_1194053.f_5[5]), 1);
	}
	Global_1194053.f_5[3] = 0;
	func_483(&(Global_1194053.f_5[3]), 1);
	iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!GANG::_0xD6F6ACF4392187FB(iVar1))
	{
		func_483(&(Global_1194053.f_5[3]), 6);
		return;
	}
	if (!GANG::_0x0F99F6436528A089(iVar1))
	{
		func_483(&(Global_1194053.f_5[3]), 6);
		return;
	}
	GANG::_0x0A04A07BC3074EDB(iParam0);
}

void func_367(int iParam0)
{
	func_149(&(Global_1071686.f_28662.f_22.f_1), iParam0);
}

void func_368(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_369(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1489866873;
		case 1:
			return -197735539;
		case 2:
			return 473445396;
		case 3:
			return 380893688;
		case 4:
			return 1904003662;
		case 5:
			return -1790671069;
		case 6:
			return -726641051;
		case 7:
			return -1993968532;
		case 8:
			return 2007146056;
		case 9:
			return 772630146;
		case 10:
			return -771926219;
		case 11:
			return 1870000396;
		case 12:
			return 316778596;
		case 13:
			return 31911167;
		case 14:
			return -298537006;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_370(var uParam0, int iParam1)
{
	if (DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, func_635(iParam1)))
	{
	}
	return 1;
}

bool func_371(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9)
{
	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return false;
	}
	if (bParam9)
	{
		*fParam6 = func_636(*fParam6, fParam7, fParam8);
	}
	return true;
}

bool func_372(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return false;
	}
	if (bParam9)
	{
		*iParam6 = func_637(*iParam6, iParam7, iParam8);
	}
	return true;
}

bool func_373(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_2 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam2, uParam0))
	{
		return false;
	}
	return true;
}

bool func_374(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0.x = *uParam0;
	vVar0.f_2 = 473445396;
	*uParam1 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
	if (*uParam1 >= 100)
	{
		*uParam1 = 99;
	}
	return *uParam1 > 0;
}

struct<2> func_375(int iParam0)
{
	return Global_1900736.f_1[iParam0 /*2*/];
}

int func_376()
{
	return Global_1301323.f_150;
}

bool func_377(int iParam0)
{
	return (Global_1301323.f_288.f_2 && iParam0) != 0;
}

int func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER");
		case 2:
			return joaat("PERSONA_HONOR_ACTION__MURDER");
		case 3:
			return joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER");
		case 4:
			return joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER");
		case 5:
			return joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE");
		case 6:
			return joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS");
		case 7:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER");
		case 8:
			return joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED");
		case 9:
			return joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER");
		case 10:
			return joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER");
		case 11:
			return joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT");
		case 12:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE");
		case 13:
			return joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS");
		case 14:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI");
		case 15:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI");
		case 16:
			return joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER");
		case 17:
			return joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER");
		case 18:
			return joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER");
		case 19:
			return joaat("PERSONA_HONOR_ACTION__TRAMPLE");
		case 20:
			return joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES");
		case 21:
			return joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION");
		case 22:
			return joaat("PERSONA_HONOR_ACTION__GRIEFING");
		case 23:
			return joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION");
		case 24:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL");
		case 25:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL");
		case 26:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL");
		case 27:
			return joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP");
		case 28:
			return joaat("PERSONA_HONOR_ACTION__RUSTLING");
		case 29:
			return joaat("PERSONA_HONOR_ACTION__HERDING_STEAL");
		case 30:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG");
		case 31:
			return joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW");
		case 32:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG");
		case 33:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE");
		case 34:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN");
		case 35:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN");
		case 36:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY");
		case 37:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE");
		case 38:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY");
		case 39:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE");
		case 40:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY");
		case 41:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE");
		case 42:
			return joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY");
		case 43:
			return joaat("PERSONA_HONOR_ACTION__LOOTING");
		case 44:
			return joaat("PERSONA_HONOR_ACTION__THEFT");
		case 45:
			return joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY");
		case 46:
			return joaat("PERSONA_HONOR_ACTION__ARSON");
		case 47:
			return joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW");
		case 48:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT");
		case 49:
			return joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL");
		case 50:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL");
		case 51:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL");
		case 52:
			return joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL");
		case 53:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL");
		case 54:
			return joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT");
		case 55:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT");
		case 56:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER");
		case 57:
			return joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL");
		case 58:
			return 1723535349;
		case 59:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER");
		case 60:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD");
		case 61:
			return joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER");
		case 62:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT");
		case 63:
			return joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD");
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE");
		case 68:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER");
		case 69:
			return joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI");
		case 70:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE");
		case 71:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN");
		case 72:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL");
		case 73:
			return joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER");
		case 74:
			return joaat("PERSONA_HONOR_ACTION__RESOURCEFUL");
		case 75:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT");
		case 76:
			return joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH");
		case 77:
			return joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE");
		case 78:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL");
		case 79:
			return joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP");
		case 80:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS");
		case 81:
			return joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER");
		case 82:
			return joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS");
		case 83:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE");
		case 84:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN");
		case 85:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN");
		case 86:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY");
		case 87:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE");
		case 88:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY");
		case 89:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE");
		case 90:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY");
		case 91:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE");
		case 92:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY");
		case 93:
			return joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE");
		case 94:
			return joaat("PERSONA_HONOR_ACTION__MERCY_KILL");
		case 95:
			return joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED");
		case 96:
			return joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE");
		case 97:
			return joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE");
		case 98:
			return joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL");
		case 99:
			return joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST");
		case 100:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST");
		case 101:
			return joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN");
		case 102:
			return joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE");
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE");
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_379(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1139381.f_3876.f_2[func_380(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_638(iParam0);
	}
	Global_1139381.f_3876.f_2[func_380(iParam0, 1) /*4*/] = bParam1;
}

int func_380(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
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

int func_381()
{
	if (func_302())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (func_639())
			{
				func_640();
				func_641();
				func_642();
			}
			else if (func_643(Global_34, 0, 0, 0) == joaat("WEAPON_FISHINGROD"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

bool func_382(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

void func_383(var uParam0, bool bParam1)
{
	if (bParam1 || !func_384(uParam0))
	{
		func_644(uParam0);
	}
}

bool func_384(var uParam0)
{
	return func_386(*uParam0, 1);
}

float func_385(var uParam0)
{
	if (!func_384(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_645(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_646() - uParam0->f_1);
}

bool func_386(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_387(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = uParam2;
}

void func_388(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
}

void func_389(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_4 = uParam1;
	uParam0->f_5 = uParam2;
}

void func_390(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = uParam1;
	uParam0->f_7 = uParam2;
}

void func_391(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_9 = uParam2;
}

void func_392(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
}

void func_393(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

bool func_394(int iParam0)
{
	return func_401(&(Global_1956200.f_1565), iParam0, 1);
}

void func_395(var uParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<2> Var5;

	func_647(uParam0, 84);
	if (!func_648(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_73(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if (((((((((((((((((((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Mission_Controller")) <= 0 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Race_Controller")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Deathmatch_Controller")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("mp_intro")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_archery")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_challenges")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_condor_egg")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_dead_drop")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_escaped_convicts")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_golden_hat")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_hot_property")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_king_of_the_castle")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_king_of_the_rails")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_round_up")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_supply_train")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_treasure_hunt")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_wreckage")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_animal_tagging")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_wildlife_photographer")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_protect_legendary_animal")) <= 0)
	{
		return;
	}
	if (Global_1139381.f_4796)
	{
		func_604(&(Global_1139381.f_4796), 1);
	}
	func_649(&(Global_1139381.f_4796));
	func_650(uParam0);
	func_651();
	func_652(0);
	Global_1139381.f_4796 = { *uParam0 };
	Global_1139381.f_4796.f_13 = { Param1 };
	Global_1139381.f_4796 = 1;
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Global_17411.f_55.f_61[0 /*4*/])))
	{
		Var1 = { func_653(0, 1, 0, -1) };
	}
	func_657(&(Global_1139381.f_4796), func_654(&Var1, 0), func_655(&Var1, 0), -882137232, func_656(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_159(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_658();
		}
	}
	if (bParam3)
	{
		if (func_659(0) != 3)
		{
			func_660(1, uParam0->f_57);
			func_661(16777216);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1139381.f_4796.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_662(&Var5);
		if (!func_169(115, 255))
		{
			func_663();
		}
	}
	if (uParam0->f_3)
	{
		func_664(uParam0);
		func_665();
		func_666(0);
	}
	if (uParam0->f_6)
	{
		func_666(3);
	}
	if (uParam0->f_4)
	{
		func_666(1);
		func_667(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_668(uParam0->f_25.f_3, 1);
		func_669(uParam0->f_25.f_4, 1);
		func_670(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_671();
	}
	if (uParam0->f_5)
	{
		func_666(2);
		func_672(0, uParam0->f_25.f_6, 1);
		func_672(2, uParam0->f_25.f_7, 1);
		func_672(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_666(4);
	}
	if (uParam0->f_12)
	{
		func_666(5);
		func_673(uParam0->f_34[0 /*3*/], uParam0->f_34[0 /*3*/].f_1, 0);
		func_673(uParam0->f_34[1 /*3*/], uParam0->f_34[1 /*3*/].f_1, 1);
		func_673(uParam0->f_34[2 /*3*/], uParam0->f_34[2 /*3*/].f_1, 2);
		func_673(uParam0->f_34[3 /*3*/], uParam0->f_34[3 /*3*/].f_1, 3);
		func_674();
	}
	if (uParam0->f_8)
	{
		func_666(6);
		func_675(Global_1956200.f_1565.f_117);
	}
	else if (uParam0->f_4)
	{
		func_675(Global_1956200.f_1549);
	}
	else if (bParam3)
	{
		func_675(Global_1956200.f_1549);
	}
}

int func_396(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_676(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_659(bParam1), iParam0, iParam3);
}

void func_397(int iParam0)
{
	struct<4> Var0;

	Var0 = { func_678(joaat("WARDROBE"), func_677(1), 1034665895, 1) };
	INVENTORY::_0x3112ADB9D5F3426B(&Var0, iParam0);
	func_679(27, 0, 2, 0, 0);
}

void func_398(int iParam0)
{
	struct<4> Var0;

	func_680(1);
	Var0 = { func_678(joaat("KIT_ROLE_NATURALIST_SAMPLE_KIT"), func_677(1), 1784584921, 1) };
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		INVENTORY::_0x3112ADB9D5F3426B(&Var0, iParam0);
	}
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_682(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_683(iParam0, iParam1, iParam2);
	}
	Var1 = { func_684(iParam0, 0, 1) };
	Var6 = { func_678(iParam0, Var1, Var1.f_4, 0) };
	return func_685(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_400()
{
	func_171(119);
}

bool func_401(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_402()
{
	return Global_1102219.f_3672;
}

bool func_403(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_404(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_405(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) == iParam0;
}

bool func_406(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_407(var uParam0, int iParam1)
{
	return func_605(*uParam0, iParam1);
}

void func_408(var uParam0, int iParam1)
{
	func_483(uParam0, iParam1);
}

bool func_409(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (!func_407(&(uParam0->f_2), 16))
	{
		uParam0->f_14 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam1->f_71);
		func_408(&(uParam0->f_2), 16);
	}
	if (!func_686(uParam0, uParam1))
	{
		return false;
	}
	uVar0 = func_687(uParam0->f_11, 0f, 0f, 0f, 50f, 50f, 50f, joaat("VOLCYLINDER"), 0, 56);
	iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
	if (iVar1 == 0)
	{
		return true;
	}
	if (iVar1 < uParam0->f_7)
	{
		uParam0->f_7 = iVar1;
		uParam0->f_8 = uParam0->f_14;
	}
	if (uParam0->f_6 >= uParam1->f_71)
	{
		uParam0->f_14 = uParam0->f_8;
		if (func_686(uParam0, uParam1))
		{
			return true;
		}
		return false;
	}
	uParam0->f_6++;
	uParam0->f_14 = (uParam0->f_14 + 1 % uParam1->f_71);
	return false;
}

bool func_410(var uParam0)
{
	return func_386(*uParam0, 2);
}

int func_411(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_412(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_414(var uParam0, vector3 vParam1, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar14;

	if (func_68(vParam1))
	{
		return false;
	}
	iVar0 = func_688(*uParam5);
	if (*uParam6 >= iVar0)
	{
		return true;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[*uParam6]))
	{
		*uParam6++;
		return false;
	}
	iVar1 = func_689(*uParam5, *uParam6);
	vVar2 = { func_690(*uParam5, iVar1) };
	vVar5 = { func_691(*uParam5, iVar1) };
	iVar8 = func_692(*uParam5, iVar1);
	if (iVar8 == 0)
	{
		return false;
	}
	if (!func_693(uParam0[*uParam6], iVar8, vParam1 + vVar2, 1, 0))
	{
		return false;
	}
	iVar9 = NETWORK::NET_TO_ENT((*uParam0)[*uParam6]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		return false;
	}
	ENTITY::SET_ENTITY_ROTATION(iVar9, vVar5, 2, false);
	fVar10 = BUILTIN::VDIST2(vVar2 + vParam1, vParam1);
	vVar11 = { func_694(*uParam4) };
	ENTITY::SET_ENTITY_HEADING(iVar9, *uParam4);
	vVar14 = { vParam1 + vVar11 * Vector(fVar10, fVar10, fVar10) };
	ENTITY::SET_ENTITY_COORDS(iVar9, vVar14, false, false, true, true);
	*uParam6++;
	return false;
}

bool func_415(int iParam0, int iParam1)
{
	Local_458.f_1329[iParam0]++;
	if (Local_458.f_1329[iParam0] >= iParam1)
	{
		Local_458.f_1329[iParam0] = 0;
		return true;
	}
	return false;
}

int func_416(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		iVar0 = Local_458.f_6;
		if (!GANG::_0xD6F6ACF4392187FB(iVar0))
		{
			return 1;
		}
		iVar1 = GANG::_0x4BE6C13A45CCA8EC(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			return 1;
		}
	}
	iVar2 = func_193(2);
	if (iVar2 < Local_458.f_1275)
	{
		return 3;
	}
	if (iParam0 > 0 && iVar2 < iParam0)
	{
		return 3;
	}
	if (Local_458.f_1274 > 1 && func_419(2) < Local_458.f_1274)
	{
		return 2;
	}
	return 0;
}

void func_417(int iParam0)
{
	if (Local_215.f_12 != iParam0)
	{
		Local_215.f_12 = iParam0;
	}
}

void func_418()
{
}

int func_419(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_265[iVar4 /*6*/] >= iParam0)
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar1 = GANG::_0x901E0DC25080C8B9(iVar3);
				if (((!GANG::_0xD6F6ACF4392187FB(iVar1) || !GANG::_0x0F99F6436528A089(iVar1)) || GANG::_0x149A2751AB66AC02(iVar1) <= 1) || GANG::_0x424B17A7DC5C90BC(iVar3))
				{
					iVar0++;
				}
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_420(int iParam0)
{
	if (Local_215.f_11 != iParam0)
	{
		Local_215.f_11 = iParam0;
	}
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1000;
		case 3:
			return 1000;
		case 4:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_422()
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(5))
	{
		return false;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(5);
	return true;
}

void func_423(int iParam0, int iParam1, var uParam2)
{
	func_696(uParam2, func_695(*iParam0));
	*iParam0 = iParam1;
}

bool func_424()
{
	if (!func_407(&(Local_14.f_2), 2))
	{
		if (func_409(&Local_14, &Local_141))
		{
			func_408(&(Local_14.f_2), 2);
		}
		return false;
	}
	if (!func_407(&(Local_14.f_2), 8))
	{
		func_697(&Local_14, &Local_141);
	}
	if (!func_407(&(Local_14.f_2), 32))
	{
		if (func_414(&(Local_14.f_18), Local_14.f_11, &(Local_14.f_15), &(Local_14.f_9), &(Local_14.f_24)))
		{
			func_408(&(Local_14.f_2), 32);
		}
		return false;
	}
	func_698(&(Local_14.f_25), 0);
	return true;
}

bool func_425()
{
	if (func_699(&vLocal_44, 4, &(Local_14.f_28)))
	{
		func_700(&(Local_14.f_25));
		Local_14.f_29 = 1;
		return true;
	}
	return false;
}

void func_426(var uParam0)
{
	*uParam0 = 0;
}

void func_427()
{
	if (Local_14.f_28 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_14.f_28))
	{
		func_701(Local_14.f_28);
	}
}

void func_428(var uParam0, int iParam1)
{
	func_702(uParam0, iParam1);
}

int func_429()
{
	return 0;
}

bool func_430(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

int func_431(int iParam0)
{
	return 0;
}

bool func_432(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_433(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_621(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_434(struct<2> Param0)
{
	return func_621(Param0) == 7;
}

void func_435(int iParam0)
{
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1108365.f_34.f_353[iParam0 /*6*/].f_1))
	{
		return;
	}
	if (!Global_1108365.f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1108365.f_34.f_353[iParam0 /*6*/].f_1))
	{
		func_703(iParam0);
		return;
	}
	if (Global_1108365.f_34.f_353[iParam0 /*6*/].f_5 != -1)
	{
		if ((Global_1296859.f_21 - Global_1108365.f_34.f_353[iParam0 /*6*/].f_4) > Global_1108365.f_34.f_353[iParam0 /*6*/].f_5)
		{
			func_703(iParam0);
		}
		return;
	}
	if (func_363(Global_1108365.f_34.f_353[iParam0 /*6*/].f_2))
	{
		return;
	}
	if (!func_73(Global_1108365.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_703(iParam0);
		return;
	}
	if (!func_363(Global_1108365.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_703(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108365.f_34.f_546[iParam0 /*7*/])) != Global_1108365.f_34.f_353[iParam0 /*6*/].f_1)
	{
		func_703(iParam0);
		return;
	}
}

struct<7> func_436(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

void func_437(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (Global_1108365.f_34.f_353[iParam0 /*6*/])
	{
		func_435(iParam0);
	}
	if (!Global_1108365.f_34[iParam0 /*11*/].f_6)
	{
		return;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_704(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_704(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108365.f_34.f_546[iParam0 /*7*/])) != iVar0)
	{
		func_704(iParam0);
		return;
	}
	if (GANG::_0x81FB74C83C2ED69F(iVar0))
	{
		func_705(iVar0, 0);
		return;
	}
	if (Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66)
	{
		func_705(iVar0, 0);
		return;
	}
	if (Global_1288736[iParam0 /*67*/].f_66)
	{
		func_705(iVar0, 0);
		return;
	}
	if (func_706(iParam0))
	{
		func_705(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1108365.f_34[iParam0 /*11*/].f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_705(iVar0, 0);
		return;
	}
}

void func_438(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_707(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1904087.f_496[iVar0]), iVar1);
}

void func_439(int iParam0)
{
	struct<10> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_4 != Local_458)
	{
		return;
	}
	switch (Var0.f_5)
	{
		case 1:
			func_708(Var0.f_6, Var0.f_9);
			break;
	}
}

void func_440(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_1 == PLAYER::PLAYER_ID())
	{
		switch (Var0.f_4)
		{
			case 5:
				if (Local_458.f_9 != joaat("POSSE_VERSUS"))
				{
					func_709();
				}
				break;
		}
	}
}

bool func_441(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_442(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_443(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_444(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_445()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0xB16223CB7DA965F0(iVar0))
	{
		PLAYER::_0xAE637BB8EF017875(iVar0, 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(iVar0))
	{
		PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
	}
	if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		if (func_485())
		{
			func_710();
		}
		if (func_711())
		{
			func_712();
		}
		if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("ABILITIES")) || UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("ABILITIES")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("ABILITIES"));
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_FRONTEND_ACTIVE(false);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && PED::_0xB655DB7582AEC805(Global_34))
		{
			func_498(Global_34, 0, 0);
		}
	}
	func_249();
	func_107();
	func_109();
	func_129(0, 1);
	func_130(1);
	func_272();
	func_250(Local_458, 4);
}

void func_446()
{
	func_713(&(Local_141.f_46), &(Local_141.f_57));
}

void func_447()
{
	int iVar0;
	int iVar1;

	if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
		return;
	}
	if (Local_265[Local_458.f_1333 /*6*/] != 1)
	{
		func_354();
		return;
	}
	if ((GANG::_0xD6F6ACF4392187FB(Local_458.f_6) && GANG::_0x9BE7DCB22D32CCBE(Local_458.f_6, PLAYER::PLAYER_ID())) && !func_714())
	{
		if (func_715(Local_458, Local_458.f_7, Local_458.f_3))
		{
			func_716(1);
			func_354();
		}
		return;
	}
	iVar0 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!GANG::_0xD6F6ACF4392187FB(iVar0) || (GANG::_0x149A2751AB66AC02(iVar0) == 1 && !func_717()))
	{
		return;
	}
	if (GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (((!func_65(1) && func_718(Local_458)) && !func_719()) && func_471(Local_458.f_1290))
		{
			Local_458.f_1406 = func_720(Local_458, Local_458.f_1, Local_458.f_3, Local_458.f_7);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_458.f_1406))
			{
				if (func_721())
				{
					Local_458.f_1290 = func_472("FME_HELP_RULES_POSSE_VERSUS");
				}
				func_722(Local_458, Local_458.f_7);
				func_210(1);
			}
		}
	}
	else
	{
		iVar1 = GANG::_0x4BE6C13A45CCA8EC(iVar0);
		if (((iVar1 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && func_723(Local_458, 64, iVar1)) && func_715(Local_458, Local_458.f_7, Local_458.f_3))
		{
			if (func_724(0))
			{
				func_726(func_725(), 0);
			}
			func_716(1);
			func_354();
		}
	}
}

void func_448()
{
	float fVar0;

	if (!func_158(Local_458.f_1333))
	{
		return;
	}
	if (!func_68(Local_458.f_1397))
	{
		if (!ENTITY::_0x6BFBDC46139C45AB(Local_458.f_1397))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_458.f_1397);
		}
		fVar0 = Local_458.f_1295;
		if (fVar0 > 512f)
		{
			fVar0 = (512f - 1f);
		}
		PATHFIND::_0xCF213A5FC3ABFC08(Local_458.f_1397, Local_458.f_1397.f_1, fVar0);
	}
}

void func_449()
{
	if (func_158(Local_458.f_1333) && (Local_458.f_1388 == -1477057661 || !func_727()))
	{
		func_728();
	}
	else
	{
		func_110();
	}
}

void func_450()
{
	if (func_158(Local_458.f_1333))
	{
		func_729();
	}
	else
	{
		func_111();
	}
}

void func_451()
{
	var uVar0;
	var uVar30;
	vector3 vVar39;
	float fVar42;
	var uVar43;
	var uVar44;
	vector3 vVar45;
	var uVar48;
	int iVar49;

	if (!func_158(Local_458.f_1333) || !func_730(Local_458))
	{
		func_109();
		return;
	}
	else
	{
		func_731();
	}
	if ((func_137(1) && func_732(255)) && func_733(255))
	{
		vVar39 = { Local_458.f_1397 };
		if (func_68(vVar39))
		{
			vVar39 = { Global_35 };
		}
		if (Local_458.f_10 < 4)
		{
			func_477(&vVar45, &uVar48, &iVar49);
			if ((func_137(1073741824 /* Float: 2f */) && !func_68(vVar45)) && !iVar49 == -1)
			{
				if ((!func_137(134217728) && !func_478(Local_458.f_1, Local_458.f_3)) && func_479(Local_458.f_1, Local_458.f_3))
				{
					func_480(1, 0);
				}
				func_734(vVar45, uVar48, 0f, 0f, 0f, 0);
				return;
			}
			else
			{
				fVar42 = Local_458.f_1294;
				func_735(&uVar43, &uVar44, fVar42);
			}
		}
		else
		{
			fVar42 = Local_458.f_1295;
			func_736(Local_458.f_1, Local_458.f_2, &uVar43, &uVar44, fVar42);
		}
		fVar42 = (fVar42 - 20f);
		func_737(Local_458.f_1, Local_458.f_3, vVar39, uVar43, uVar44, fVar42, &uVar0, &uVar30);
		func_738(fVar42, &uVar0, &uVar30);
		func_739(&uVar0, &(Local_458.f_1393), &(Local_458.f_1394));
		func_740(&uVar0, &uVar30);
	}
}

void func_452()
{
	switch (Local_458.f_1388)
	{
		case joaat("STANDARD"):
		case joaat("STANDARD_SEAMLESS"):
			func_741(0);
			break;
		case -1477057661:
		case -1323241207:
			func_742();
			func_741(1);
			break;
		case joaat("ALL_ALLY_STANDARD_SEAMLESS"):
		case joaat("ALL_ALLY_STANDARD"):
			func_743(1);
			break;
		case 142723591:
		case 1229355466:
			func_744();
			break;
		case -1893775542:
		case joaat("ALL_ALLY_NEUTRAL"):
			func_745();
			break;
	}
}

void func_453()
{
}

void func_454()
{
	int iVar0;

	iVar0 = func_177();
	POPULATION::_0xF45E46DEECF7DF6E(iVar0, 0, 0, -1, -1);
	if (iVar0 & 2016 == 2016)
	{
		PED::_0xC0258742B034DFAF(0f);
		PED::_0xDB48E99F8E064E56(0f);
	}
	if (iVar0 & 8192 == 8192)
	{
		PED::_0xBA0980B5C0A11924(0f);
		PED::_0x28CB6391ACEDD9DB(0f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_455()
{
	if (!func_158(Local_458.f_1333))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		WEAPON::_0x78030C7867D8B9B6(Global_34, 0);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Global_34, false);
	}
}

void func_456()
{
	if (!func_158(Local_458.f_1333))
	{
		return;
	}
	if (Local_458.f_1391 < 0)
	{
		Local_458.f_1391 = 0;
		func_746(20f);
		return;
	}
	func_747(Local_458.f_1391, 10f);
	Local_458.f_1391++;
	if (Local_458.f_1391 >= 32)
	{
		Local_458.f_1391 = 0;
	}
}

void func_457()
{
}

bool func_458()
{
	return true;
}

void func_459(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	bool bVar0;

	if ((func_748(uParam0, &bVar0) && func_749(uParam0)) && func_750(uParam0, -1700692449, &bVar0))
	{
		func_751(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_256(uParam0, 1);
	}
}

void func_460(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_5, func_752(), func_753(), 1);
	}
}

int func_461(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_458.f_1289 == 0 || !func_296(Local_458.f_1289))
	{
		func_359();
	}
	if (iParam0 >= 5 && (func_296(Local_458.f_1288) && !bParam3))
	{
		func_359();
		return 0;
	}
	if (Local_458.f_1267 == 5 && iParam0 >= 5)
	{
		return 0;
	}
	if (Local_458.f_1267 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			func_359();
		}
		else
		{
			Local_458.f_1289 = func_754(sParam1, iParam2, 0, 0, 1);
		}
		Local_458.f_1267 = iParam0;
		return 1;
	}
	return 0;
}

bool func_462(int iParam0)
{
	return !func_62(iParam0);
}

float func_463(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_464(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return false;
		default:
			break;
	}
	return true;
}

char* func_465()
{
	return "";
}

char* func_466()
{
	return "";
}

void func_467(var uParam0)
{
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		if (Local_458.f_1294 <= 0f)
		{
			*uParam0 = MAP::_BLIP_ADD_FOR_COORD(408396114, Local_458.f_1397);
		}
		else
		{
			*uParam0 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, Local_458.f_1397, Local_458.f_1294);
			MAP::_BLIP_SET_MODIFIER(*uParam0, 453264060);
		}
	}
	else if (Local_458.f_1294 <= 0f)
	{
		*uParam0 = MAP::_BLIP_ADD_FOR_COORD(618936128, Local_458.f_1397);
	}
	else
	{
		*uParam0 = MAP::_BLIP_ADD_FOR_RADIUS(-47499173, Local_458.f_1397, Local_458.f_1294);
		MAP::_BLIP_SET_MODIFIER(*uParam0, 453264060);
	}
	MAP::SET_BLIP_SPRITE(*uParam0, joaat("BLIP_OBJECTIVE"), true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, &(Local_458.f_1339));
}

struct<2> func_468(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_469()
{
	return 2147483647;
}

bool func_470()
{
	return false;
}

bool func_471(int iParam0)
{
	if (func_300())
	{
		return false;
	}
	else if (func_296(iParam0))
	{
		return false;
	}
	else if (func_296(Local_458.f_1288))
	{
		return false;
	}
	else if (func_62(255))
	{
		return false;
	}
	else if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	return true;
}

var func_472(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_755(sParam0, 10000, 0, 0, 0, 1);
}

struct<8> func_473(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 1777884256, &Var0, 0);
	}
	return Var0;
}

struct<8> func_474(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, -1996633489, &Var0, 0);
	}
	return Var0;
}

char* func_475()
{
	return "";
}

void func_476(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_756())
	{
		if (func_757(255))
		{
			if (!func_169(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_758(Global_1893587.f_2) && func_759(Global_1893587.f_2))
		{
			func_760(Global_1893587.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893587.f_7 = iParam1;
				func_761(16);
			}
		}
		else if (func_758(Global_1893587.f_2) && !func_762(Global_1893587.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1893587.f_7 = 0;
		func_763(16);
		func_764(bParam2);
		if (bVar0)
		{
			func_763(1);
		}
	}
}

void func_477(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*uParam2 = -1;
	*uParam2 = func_765(Local_458.f_1, Local_458.f_2);
	if (*uParam2 == -1)
	{
	}
	else if (*uParam2 > Local_458.f_1277)
	{
	}
	else if (*uParam2 < (Local_458.f_1277 - 1))
	{
	}
	if (!*uParam2 == -1)
	{
		*uParam0 = { func_766(Local_458.f_1, Local_458.f_2, Local_458.f_1420) };
		*uParam1 = func_767(Local_458.f_1, Local_458.f_2, Local_458.f_1420);
	}
}

bool func_478(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_768(&Var1))
	{
		func_42(Var1, 1509074216, &iVar0, 0);
	}
	return iVar0;
}

bool func_479(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_768(&Var1))
	{
		func_42(Var1, 2121037717, &iVar0, 0);
	}
	return iVar0;
}

void func_480(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_171(66);
		if (bParam1)
		{
			func_171(69);
		}
	}
	else
	{
		func_170(66);
		func_170(69);
	}
}

void func_481(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_769(vParam0, uParam3))
	{
		func_482(1, bParam4);
	}
}

void func_482(bool bParam0, bool bParam1)
{
	if (func_770(255) == 4)
	{
		return;
	}
	if (func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_170(0);
	}
	else
	{
		if (bParam1)
		{
			func_771(0, 0, 0, 1);
		}
		func_171(0);
		func_772(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = 0f;
		Global_1102219.f_3849.f_5 = 1;
		Global_1102219.f_3849.f_16 = 0;
		Global_1102219.f_3849.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102219.f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219.f_3849.f_17 = { Global_1901947.f_50.f_1, Global_1901947.f_50.f_1, Global_1901947.f_50.f_1 };
		Global_1102219.f_3849.f_17.f_9 = joaat("VOLSPHERE");
		func_773(&(Global_1102219.f_3888));
		Global_1102219.f_3888.f_6 = { Global_1102219.f_3849.f_17.f_6 };
		Global_1102219.f_3888 = Global_1102219.f_3849;
		Global_1102219.f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219.f_26.f_3341 = 0;
			Global_1102219.f_26.f_3342 = 0;
		}
	}
	func_774(Global_1102219.f_3849, 36);
	func_775(Global_1102219.f_3888, 36);
}

void func_483(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_484()
{
	func_335(&(Local_458.f_1297), 1, 1);
}

bool func_485()
{
	return Global_1896738.f_382;
}

int func_486(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
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
		if (func_596(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951255[iVar0 /*23*/].f_11 && iParam1 == Global_1951255[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951255[iVar0 /*23*/])
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
				func_597(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

bool func_487(int iParam0, bool bParam1)
{
	if (bParam1 && !func_330(iParam0))
	{
		return false;
	}
	return !func_596(iParam0, 4);
}

bool func_488(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_330(iParam0))
	{
		return false;
	}
	iVar0 = func_598(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		if (Global_1951255[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(Global_1951255[iVar0 /*23*/].f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(Global_1951255[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951255[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951255[iVar0 /*23*/].f_18) * (1f - Global_1951255[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951255[iVar0 /*23*/].f_21 = iVar1;
			Global_1951255[iVar0 /*23*/].f_22 = uVar2;
		}
	}
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1951255[iVar0 /*23*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951255[iVar0 /*23*/].f_3);
}

bool func_489(int iParam0)
{
	int iVar0;

	if (func_590(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_490(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_330(iParam0))
	{
		return;
	}
	iVar0 = func_598(iParam0);
	func_600(iVar0, bParam1);
}

float func_491()
{
	return Local_458.f_1294;
}

char* func_492()
{
	return "MP_OutofAreaDirectional";
}

void func_493()
{
	if (func_161(&(Local_458.f_1305)))
	{
		func_304(&(Local_458.f_1305));
	}
}

bool func_494()
{
	float fVar0;

	fVar0 = func_463(Global_35, Local_458.f_1400);
	if (fVar0 >= Local_458.f_1294)
	{
		return true;
	}
	return false;
}

void func_495(int iParam0)
{
	if (!func_605(Global_1903131, iParam0))
	{
		func_483(&Global_1903131, iParam0);
	}
}

int func_496(var uParam0, char* sParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;

	if (func_776(uParam0, sParam1, &bVar0, bParam6, vParam2, fParam5, iParam10))
	{
		func_777(uParam0, sParam1, bParam7, bParam8, bParam9);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_510(uParam0, 1, 1);
	}
	return iVar1;
}

void func_497()
{
	if (!func_778(64))
	{
		func_779(64);
	}
}

void func_498(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_499()
{
	return 0;
}

bool func_500(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		bVar0 = true;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&uParam4))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		WEAPON::_0xEC1F85DA51D3D6C4(PLAYER::PLAYER_PED_ID(), &uParam0, &uParam4);
		return true;
	}
	return false;
}

struct<2> func_501(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_502(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_780(bParam0, iVar0);
		iVar0++;
	}
}

void func_503()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_781(iVar0);
		iVar0++;
	}
}

void func_504()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_782(iVar0);
		iVar0++;
	}
}

void func_505(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_783(iVar0, bParam0);
		iVar0++;
	}
}

void func_506()
{
	AUDIO::_0x9D746964E0CF2C5F(func_557(), func_784());
	AUDIO::_0x9D746964E0CF2C5F(func_785(), func_784());
	AUDIO::_0x9D746964E0CF2C5F(func_786(), func_784());
	AUDIO::_0x9D746964E0CF2C5F(func_787(), func_784());
	AUDIO::_0x9D746964E0CF2C5F(func_752(), func_753());
	AUDIO::_0x9D746964E0CF2C5F(func_788(), func_789());
}

void func_507(var uParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1546991729);
	}
}

void func_508(int iParam0)
{
	if (Global_1903133.f_1 != iParam0)
	{
		Global_1903133.f_1 = iParam0;
	}
}

void func_509(int iParam0)
{
	Global_1903133 = iParam0;
}

void func_510(var uParam0, bool bParam1, bool bParam2)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(190275865);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (bParam2)
	{
		if (uParam0->f_4 >= 0)
		{
			if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
			{
				AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
			}
			AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
			uParam0->f_4 = -1;
		}
		if (uParam0->f_5 >= 0)
		{
			if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_5))
			{
				AUDIO::_0x3210BCB36AF7621B(uParam0->f_5);
			}
			AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
			uParam0->f_5 = -1;
		}
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_492()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_492());
			HUD::_DISPLAY_HUD_COMPONENT(-2124237476);
			GRAPHICS::_0x981C7D863980FA51();
		}
	}
}

bool func_511()
{
	switch (Local_458.f_1)
	{
		case 8:
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

struct<8> func_512()
{
	struct<8> Var0;

	return Var0;
}

char* func_513(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_514()
{
	return "";
}

struct<8> func_515(int iParam0, var uParam1)
{
	char cVar0[64];
	struct<5> Var8;

	StringCopy(&cVar0, "", 64);
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_143(&Var8))
	{
		func_144(Var8, 1220434501, &cVar0, 0);
	}
	return cVar0;
}

char* func_516()
{
	return "";
}

char* func_517()
{
	return func_790();
}

char* func_518()
{
	return func_791();
}

var func_519(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	return func_792(sParam0, sParam1, sParam2, func_294(), sParam4, sParam3, 0, 1, 1, 1);
}

var func_520(char* sParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	return func_793(sParam0, cParam1, func_294(), sParam3, sParam2, 0, 1, 1);
}

char* func_521(var uParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 1;
	*bParam2 = 0;
	return "";
}

bool func_522()
{
	if (func_281() & 64 == 64)
	{
		return false;
	}
	return true;
}

bool func_523(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			return false;
		default:
			break;
	}
	return true;
}

bool func_524(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_591(*iParam2, bParam0, bParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_525(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return joaat("COLOR_POSSE_NEUTRAL");
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	iVar2 = iParam0;
	if (func_363(func_375(0)) && func_630(func_375(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1071686.f_21416.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_794(iParam0);
			if (iVar6 == joaat("COLOR_NET_PLAYER2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_795(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_78(Global_1071686.f_21416.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return joaat("COLOR_WINNING_PLAYER");
	}
	iVar7 = func_796(iParam0, 1);
	if (!bVar0)
	{
		if (func_797(iParam0, bParam1))
		{
			return func_795(iParam0);
		}
		else if (func_798(iParam0, bParam1))
		{
			if (func_556(iParam0, bParam1))
			{
				return joaat("COLOR_POSSE_ENEMY");
			}
			else
			{
				if (iVar7 > 5)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 3)
				{
					return joaat("COLOR_NOTORIETY_HIGH");
				}
				else if (iVar7 > 1)
				{
					return joaat("COLOR_NOTORIETY_MEDIUM");
				}
				return joaat("COLOR_NOTORIETY_LOW");
			}
		}
	}
	else if (bVar1)
	{
		return func_794(iParam0);
	}
	else if (func_797(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_800(func_799(func_375(0)), 1) == 395262693)
		{
			return func_795(iParam0);
		}
		else
		{
			return func_795(iParam0);
		}
	}
	else if (func_798(iParam0, bParam1))
	{
		return joaat("COLOR_POSSE_ENEMY");
	}
	return joaat("COLOR_FRIENDLY");
}

char* func_526(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_801(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_527(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738.f_3948 = MISC::GET_GAME_TIMER();
	Global_1896738.f_3948.f_1 = iParam0;
}

int func_528()
{
	return Global_1102219.f_26.f_11;
}

bool func_529()
{
	return Local_458.f_1295 > 0f;
}

int func_530()
{
	return MAP::_BLIP_ADD_FOR_RADIUS(-188007767, Local_458.f_1397, Local_458.f_1295);
}

bool func_531()
{
	float fVar0;

	fVar0 = func_463(Global_35, Local_458.f_1397);
	if (fVar0 >= Local_458.f_1295)
	{
		return true;
	}
	return false;
}

int func_532()
{
	return 10000;
}

int func_533(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && uParam0->f_211[*uParam3 /*23*/].f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_211[*uParam3 /*23*/].f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_211[*uParam3 /*23*/].f_14))
		{
			func_802(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || uParam0->f_211[iVar0 /*23*/].f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_211[iVar0 /*23*/].f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_211[iVar0 /*23*/].f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (uParam0->f_211[iVar1 /*23*/].f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_211[iVar1 /*23*/].f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_211[iVar1 /*23*/].f_14))
				{
					func_279(uParam0);
					func_802(uParam0, iVar1);
				}
			}
			if (uParam0->f_211[iVar1 /*23*/].f_14 == iParam2)
			{
				func_279(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if (uParam0->f_211[iVar1 /*23*/].f_14 == 255 && iVar0 == -1)
			{
				func_279(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_279(uParam0);
			func_802(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if ((uParam0->f_211[iVar0 /*23*/].f_5 != fParam1 || uParam0->f_211[iVar0 /*23*/].f_1 != fParam5) || uParam0->f_211[iVar0 /*23*/].f_2 != fParam6)
			{
				func_278(uParam0);
			}
			uParam0->f_211[iVar0 /*23*/].f_14 = iParam2;
			uParam0->f_211[iVar0 /*23*/].f_5 = fParam1;
			uParam0->f_211[iVar0 /*23*/].f_1 = fParam5;
			uParam0->f_211[iVar0 /*23*/].f_2 = fParam6;
			uParam0->f_211[iVar0 /*23*/].f_3 = fParam8;
			uParam0->f_211[iVar0 /*23*/].f_4 = fParam9;
			uParam0->f_211[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_534(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_211), uParam0->f_211, 23, 5, 2, 1, 3, 2, 0, 4, 2, 0, 0, 0, 0);
}

bool func_535()
{
	return true;
}

void func_536(int iParam0)
{
	if (Global_1071686.f_21952[iParam0 /*18*/].f_5 != 0)
	{
		Global_1071686.f_21952[iParam0 /*18*/].f_5 = 0;
		func_803(iParam0);
	}
}

var func_537(char* sParam0, int iParam1)
{
	return func_804(sParam0, iParam1, -2, 0, 0, 0, 1);
}

void func_538(int iParam0, int iParam1)
{
	if (Global_1071686.f_21952[iParam0 /*18*/].f_5 != iParam1)
	{
		Global_1071686.f_21952[iParam0 /*18*/].f_5 = iParam1;
		func_803(iParam0);
	}
}

void func_539(var uParam0, var uParam1, var uParam2)
{
	if (func_805(&(uParam0->f_1), 8))
	{
		if (MAP::DOES_BLIP_EXIST(uParam2->f_46))
		{
			MAP::REMOVE_BLIP(&(uParam2->f_46));
		}
		if (MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			MAP::REMOVE_BLIP(&(uParam2->f_57));
		}
		return;
	}
	func_806(uParam0, uParam1, uParam2);
	func_807(uParam0, uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], uParam2);
}

void func_540(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 != 2)
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (SCRIPTS::GET_NUMBER_OF_EVENTS(1) - 1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar1);
		switch (iVar0)
		{
			case -1315570756:
				func_808(iVar1, uParam2);
				break;
		}
		iVar1++;
	}
	func_809(iVar1, uParam0, uParam1, uParam2);
}

void func_541(var uParam0, var uParam1, var uParam2)
{
	if (!func_810(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/])->f_2), 64))
	{
		return;
	}
	if (func_805(&(uParam0->f_1), 8))
	{
		func_811(&(uParam2->f_60), &(uParam2->f_61));
		return;
	}
	func_812(&(uParam2->f_61));
}

void func_542(var uParam0, var uParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(uParam1->f_62), joaat("OPEN")))
	{
		func_813(&(uParam1->f_45), 128);
	}
	if (!PED::_IS_PED_USING_SCENARIO_POINT(PLAYER::GET_PLAYER_PED(uParam1->f_62), uParam1->f_60) && func_814(&(uParam1->f_45), 128))
	{
		func_815(uParam0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::GET_PLAYER_PED(uParam1->f_62), func_817(uParam0->f_9, func_689(uParam0->f_9, (func_816(uParam0->f_9) + uParam1->f_73)))))
	{
		iVar0 = NETWORK::NET_TO_OBJ(uParam0->f_18[(func_816(uParam0->f_9) + uParam1->f_73)]);
		OBJECT::DELETE_OBJECT(&iVar0);
		uParam1->f_73++;
	}
}

int func_543(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 1000;
		case 4:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_544(var uParam0, var uParam1, int iParam2)
{
	if (!func_407(&(uParam0->f_2), 32))
	{
		return false;
	}
	if (func_68(uParam0->f_11))
	{
		return false;
	}
	if (!func_810(&(uParam1->f_2), 64))
	{
		if (func_818(&(uParam0->f_18), &(iParam2->f_60), uParam0->f_11, &(uParam0->f_15), &(uParam0->f_9)))
		{
			func_819(&(uParam1->f_2), 64);
		}
	}
	return (func_805(&(uParam0->f_1), 2) && func_810(&(uParam1->f_2), 64));
}

bool func_545()
{
	func_820(&Local_141);
	func_821(&(vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), &Local_141);
	func_822(&(Local_141.f_58), &(Local_141.f_72), &(Local_141.f_62));
	return func_805(&(Local_14.f_1), 8);
}

void func_546()
{
	if (Local_458.f_9 == joaat("POSSE_VERSUS"))
	{
		return;
	}
	func_823();
	func_824();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
	if (func_825() && func_826())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && TASK::_0x038B1F1674F0E242(Global_34))
		{
			TASK::CLEAR_PED_TASKS(Global_34, true, false);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	}
}

bool func_547(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Local_458.f_1333;
	}
	if ((((func_65(131072) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1))) && Local_265[iParam1 /*6*/] >= iParam0) && Local_265[iParam1 /*6*/].f_4 >= 1) && (func_528() == 4 || func_528() == 10))
	{
		return true;
	}
	return false;
}

int func_548()
{
	return Global_1102219.f_26.f_12;
}

void func_549()
{
}

bool func_550(int iParam0)
{
	return func_78(Global_1301321, iParam0);
}

void func_551(int iParam0)
{
	func_149(&Global_1301321, iParam0);
}

char* func_552(int iParam0)
{
	int iVar0;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_827(iVar0);
}

var func_553()
{
	return Local_458.f_1268;
}

bool func_554()
{
	switch (Local_458.f_1388)
	{
		case -1893775542:
		case -1323241207:
		case joaat("ALL_ALLY_STANDARD_SEAMLESS"):
		case joaat("STANDARD_SEAMLESS"):
		case 142723591:
			return true;
		default:
			break;
	}
	return false;
}

bool func_555()
{
	switch (Local_458.f_1388)
	{
		case joaat("ALL_ALLY_NEUTRAL"):
		case 1229355466:
		case joaat("ALL_ALLY_STANDARD"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_556(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_828(iParam0))
	{
		return false;
	}
	if (func_829(iParam0))
	{
		return false;
	}
	if (func_830(iParam0))
	{
		return true;
	}
	return func_831(iParam0);
}

char* func_557()
{
	return "Match_End_Timer";
}

void func_558(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;

	iParam3 |= 8;
	if (func_748(uParam0, &bVar0) && func_832(uParam0, uParam1, iParam3, joaat("COLOR_BLUE"), joaat("COLOR_RED"), joaat("COLOR_WHITE"), joaat("COLOR_WHITE"), iParam4))
	{
		func_833(uParam1, uParam2, iParam3 | 8, joaat("COLOR_BLUE"), joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam4);
	}
	if (bVar0)
	{
		func_577(uParam1);
		func_256(uParam0, 1);
	}
}

void func_559(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_748(uParam0, &bVar0) && func_749(uParam0)) && func_832(uParam0, uParam1, iParam7 | 8, joaat("COLOR_BLUE"), joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam12)) && func_750(uParam0, -1700692449, &bVar0))
	{
		func_751(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_833(uParam1, uParam2, iParam7 | 8, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_577(uParam1);
		func_256(uParam0, 1);
	}
}

void func_560(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_748(uParam0, &bVar0) && func_749(uParam0)) && func_832(uParam0, uParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12)) && func_750(uParam0, 1133052843, &bVar0))
	{
		func_751(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_833(uParam1, uParam2, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_577(uParam1);
		func_256(uParam0, 1);
	}
}

void func_561(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_748(uParam0, &bVar0) && func_749(uParam0)) && func_834(uParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_750(uParam0, -213385216, &bVar0))
	{
		func_751(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_835(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_576(uParam1, 0, 0);
		func_256(uParam0, 1);
	}
}

void func_562(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam9 != 0)
	{
		iVar1 = -1;
	}
	if ((((func_748(uParam0, &bVar0) && func_749(uParam0)) && func_834(uParam0, uParam1, iParam9, 0, 0, 0, 0)) && func_832(uParam0, uParam2, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15)) && func_750(uParam0, 1133052843, &bVar0))
	{
		func_751(uParam0, iParam4, bParam5, iParam6, sParam7);
		func_835(uParam1, iParam8, 0, 0, 0, iVar1, 0);
		func_833(uParam2, uParam3, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15);
	}
	if (bVar0)
	{
		func_577(uParam2);
		func_576(uParam1, 0, 0);
		func_256(uParam0, 1);
	}
}

void func_563(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (iParam9 != 0)
	{
		iVar1 = -1;
	}
	if (iParam19 != 0)
	{
		iVar1 |= 1;
	}
	if (iParam20 != 0)
	{
		iVar1 |= 2;
	}
	iVar2 = 0;
	if (iParam21 != 0)
	{
		iVar2 |= 1;
	}
	if (iParam22 != 0)
	{
		iVar2 |= 2;
	}
	if ((((func_748(uParam0, &bVar0) && func_749(uParam0)) && func_834(uParam0, uParam1, iParam9, iParam19, iParam20, iParam21, iParam22)) && func_832(uParam0, uParam2, iParam13 | 8, joaat("COLOR_BLUE"), joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam14)) && func_750(uParam0, 774310187, &bVar0))
	{
		func_751(uParam0, iParam3, bParam5, iParam6, sParam7);
		func_835(uParam1, iParam8, bParam10, bParam11, bParam12, iVar1, iVar2);
		func_833(uParam2, uParam4, iParam13 | 8, iParam15, iParam16, iParam17, iParam18, iParam14);
	}
	if (bVar0)
	{
		func_576(uParam1, 0, 0);
		func_256(uParam0, 1);
		func_577(uParam2);
	}
}

bool func_564()
{
	return false;
}

bool func_565(var uParam0, float fParam1, bool bParam2)
{
	return false;
}

bool func_566(var uParam0)
{
	uParam0->f_2 = -171261332;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_567()
{
	return true;
}

float func_568(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_569()
{
	func_570(Local_458.f_972[Local_458.f_1333]);
}

void func_570(int iParam0)
{
	if (iParam0 == -1)
	{
		func_232(4096, Local_458.f_1333);
		iParam0 = (func_193(2) - 1);
	}
	Local_458.f_1334 = iParam0;
}

void func_571(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_634(iParam0);
	if (iVar0 == joaat("POSSE_VERSUS"))
	{
		func_444(func_47(joaat("WINS"), joaat("POSSE_VERSUS")), 1);
		if (iParam2 == 0)
		{
			func_444(func_501(joaat("PLACED_TOP_POSSE_VERSUS")), 1);
		}
	}
	else
	{
		func_444(func_47(joaat("WINS"), joaat("FME")), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_444(func_501(joaat("PLACED_TOP_FME")), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_444(func_47(joaat("WINS"), iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_444(func_47(joaat("PODIUM_FINISHES"), iVar1), 1);
		}
	}
}

void func_572(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_634(iParam0);
	if (iVar0 == joaat("POSSE_VERSUS"))
	{
		func_444(func_47(joaat("LOSSES"), joaat("POSSE_VERSUS")), 1);
		if (iParam2 == 0)
		{
			func_444(func_501(joaat("PLACED_TOP_POSSE_VERSUS")), 1);
		}
	}
	else
	{
		func_444(func_47(joaat("LOSSES"), joaat("FME")), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_444(func_501(joaat("PLACED_TOP_FME")), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_444(func_47(joaat("LOSSES"), iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_444(func_47(joaat("PODIUM_FINISHES"), iVar1), 1);
		}
	}
}

int func_573()
{
	struct<2> Var0;
	struct<2> Var13;
	struct<2> Var26;
	int iVar39;
	struct<2> Var40;

	if (!func_836())
	{
		return 1;
	}
	if (Local_458.f_9 != joaat("POSSE_VERSUS") && !func_137(8192))
	{
		if (Local_458.f_1 != 9)
		{
			Var0.f_1 = 11;
			func_837(&Var0, Local_458.f_1334);
			func_838(&Var0);
			func_839(&Var0, Local_215.f_4);
			func_840(&Var0);
			func_841(-116590068, &(Local_458.f_1363), &Var0, 0, 255, 0, 0);
			Local_458.f_1282++;
			Var13.f_1 = 11;
			func_843(&Var13, func_842());
			func_837(&Var13, Local_458.f_1334);
			func_838(&Var13);
			func_839(&Var13, Local_215.f_4);
			func_840(&Var13);
			func_841(-2069558689, &(Local_458.f_1367), &Var13, 0, 255, 0, 0);
			Local_458.f_1282++;
			Var26.f_1 = 11;
			func_838(&Var26);
			func_844(&Var26, Local_215.f_4);
			func_845(&Var26);
			func_846(&Var26, Local_458.f_1334);
			func_847(&Var26);
			func_840(&Var26);
			func_841(1172622856, &(Local_458.f_1371), &Var26, 0, 255, 0, 0);
			Local_458.f_1282++;
		}
		iVar39 = func_848(Local_215.f_4);
		Var40.f_1 = 11;
		func_840(&Var40);
		if (iVar39 != 0)
		{
			func_841(iVar39, &(Local_458.f_1379), &Var40, 0, 255, 0, 0);
			Local_458.f_1383 = iVar39;
			Local_458.f_1282++;
		}
	}
	func_849();
	return 1;
}

bool func_574()
{
	return true;
}

void func_575(int iParam0, int iParam1)
{
	func_428(&(Global_1196898.f_78[iParam0 /*20*/].f_6), iParam1);
}

void func_576(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if (((*uParam0)[0 /*34*/] != 0 || bParam2) || ((uParam0[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*uParam0)[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = (uParam0[iVar40 /*34*/])->f_23;
				uVar35 = (uParam0[iVar40 /*34*/])->f_25;
				uVar36 = (uParam0[iVar40 /*34*/])->f_26;
				uVar37 = (uParam0[iVar40 /*34*/])->f_27;
				uVar38 = (uParam0[iVar40 /*34*/])->f_28;
				uVar39 = (uParam0[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY(uParam0[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				(uParam0[iVar40 /*34*/])->f_23 = uVar34;
				(uParam0[iVar40 /*34*/])->f_25 = uVar35;
				(uParam0[iVar40 /*34*/])->f_26 = uVar36;
				(uParam0[iVar40 /*34*/])->f_27 = uVar37;
				(uParam0[iVar40 /*34*/])->f_28 = uVar38;
				(uParam0[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_577(var uParam0)
{
	struct<200> Var0;
	struct<15> Var200;
	int iVar223;

	if (uParam0->f_11.f_2 != 0)
	{
		func_850(&(uParam0->f_11));
		func_851(uParam0);
		func_852(&(uParam0->f_11), 1);
		Global_1940144.f_110 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var200.f_1 = -1082130432;
		Var200.f_2 = -1082130432;
		Var200.f_3 = -1082130432;
		Var200.f_4 = -1082130432;
		Var200.f_5 = -1082130432;
		Var200.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar223 = 0;
		while (iVar223 <= 31)
		{
			MISC::_COPY_MEMORY(&(uParam0->f_211[iVar223 /*23*/]), &Var200, 23);
			iVar223++;
		}
		uParam0->f_949 = 0;
	}
}

bool func_578()
{
	return false;
}

char* func_579()
{
	return "";
}

char* func_580()
{
	return func_853();
}

char* func_581()
{
	return func_854();
}

char* func_582(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FME_SHARD_OUTRO_PRIMARY_INVALID_GANG";
		case 2:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_GANGS";
		case 3:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_PLAYERS";
		default:
			break;
	}
	return "FME_SHARD_OUTRO_PRIMARY_EXPIRED";
}

var func_583(char* sParam0, char* sParam1, char* sParam2)
{
	return func_855(sParam0, func_294(), sParam2, sParam1, 0, 1);
}

struct<8> func_584()
{
	struct<8> Var0;

	return Var0;
}

char* func_585()
{
	return "";
}

struct<8> func_586()
{
	struct<8> Var0;

	return Var0;
}

char* func_587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FM_PLACE_1";
		case 1:
			return "FM_PLACE_2";
		case 2:
			return "FM_PLACE_3";
		case 3:
			return "FM_PLACE_4";
		case 4:
			return "FM_PLACE_5";
		case 5:
			return "FM_PLACE_6";
		case 6:
			return "FM_PLACE_7";
		case 7:
			return "FM_PLACE_8";
		case 8:
			return "FM_PLACE_9";
		case 9:
			return "FM_PLACE_10";
		case 10:
			return "FM_PLACE_11";
		case 11:
			return "FM_PLACE_12";
		case 12:
			return "FM_PLACE_13";
		case 13:
			return "FM_PLACE_14";
		case 14:
			return "FM_PLACE_15";
		case 15:
			return "FM_PLACE_16";
		case 16:
			return "FM_PLACE_17";
		case 17:
			return "FM_PLACE_18";
		case 18:
			return "FM_PLACE_19";
		case 19:
			return "FM_PLACE_20";
		case 20:
			return "FM_PLACE_21";
		case 21:
			return "FM_PLACE_22";
		case 22:
			return "FM_PLACE_23";
		case 23:
			return "FM_PLACE_24";
		case 24:
			return "FM_PLACE_25";
		case 25:
			return "FM_PLACE_26";
		case 26:
			return "FM_PLACE_27";
		case 27:
			return "FM_PLACE_28";
		case 28:
			return "FM_PLACE_29";
		case 29:
			return "FM_PLACE_30";
		case 30:
			return "FM_PLACE_31";
		case 31:
			return "FM_PLACE_32";
		default:
			break;
	}
	return "";
}

Vector3 func_588(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_856((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_589()
{
	return true;
}

bool func_590(int iParam0)
{
	return iParam0 != 0;
}

bool func_591(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (((iParam0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0)) && iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (bParam1)
			{
				if (Local_265[Local_458.f_1333 /*6*/].f_2 == Local_265[iVar0 /*6*/].f_2 && (!bParam2 || Local_265[Local_458.f_1333 /*6*/].f_5 > Local_265[iVar0 /*6*/].f_5))
				{
					return true;
				}
			}
			else if (BUILTIN::FLOOR(Local_265[Local_458.f_1333 /*6*/].f_2) == BUILTIN::FLOOR(Local_265[iVar0 /*6*/].f_2) && (!bParam2 || Local_265[Local_458.f_1333 /*6*/].f_5 > Local_265[iVar0 /*6*/].f_5))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_592()
{
	return Global_1940258.f_38 == joaat("WEAPON_FISHINGROD");
}

bool func_593()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1903071, false))
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FISHING_CORE")) > 0)
	{
		return true;
	}
	if (func_23() == 0 && NETWORK::_NETWORK_IS_SCRIPT_ACTIVE_HASH(joaat("FISHING_CORE"), -1, true, 0))
	{
		return true;
	}
	return false;
}

float func_594(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_595(int iParam0)
{
	switch (func_857(iParam0))
	{
		case -2101244071:
		case -1070622585:
		case -1057349201:
		case -569548732:
		case 874188557:
			return true;
	}
	return false;
}

bool func_596(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951255[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_597(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951255[iParam0 /*23*/].f_4 = iParam1;
	Global_1951255[iParam0 /*23*/] = iParam4;
	Global_1951255[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951255[iParam0 /*23*/].f_2 = iParam5;
	Global_1951255[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951255[iParam0 /*23*/].f_9 = fParam9;
	Global_1951255[iParam0 /*23*/].f_10 = iParam10;
	Global_1951255[iParam0 /*23*/].f_11 = iParam11;
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_5 = iParam12;
	Global_1951255[iParam0 /*23*/].f_1 = 2;
	Global_1951255[iParam0 /*23*/].f_17 = -1;
	Global_1951255[iParam0 /*23*/].f_18 = iParam16;
	Global_1951255[iParam0 /*23*/].f_19 = iParam15;
	Global_1951255[iParam0 /*23*/].f_20 = bParam25;
	Global_1951255[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951255[iParam0 /*23*/].f_21 = MISC::_GET_SYSTEM_TIME();
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
	Global_1951255[iParam0 /*23*/].f_3 = iVar0;
	func_600(iParam0, 1);
	func_601(iParam0, 1);
	func_602(iParam0, 128);
}

int func_598(int iParam0)
{
	return iParam0;
}

void func_599(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 - (Global_1951255[iParam0 /*23*/].f_1 && iParam1));
}

void func_600(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		if (Global_1951255[iParam0 /*23*/].f_5 == 5 && !func_596(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1951255[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_601(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1951255[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_602(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951255[iParam0 /*23*/].f_1 = (Global_1951255[iParam0 /*23*/].f_1 || iParam1);
}

void func_603(int iParam0)
{
	if (!func_858(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1951255[iParam0 /*23*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1951255[iParam0 /*23*/].f_3);
	}
	Global_1951255[iParam0 /*23*/].f_4 = 0;
	Global_1951255[iParam0 /*23*/] = 1;
	Global_1951255[iParam0 /*23*/].f_16 = 0;
	Global_1951255[iParam0 /*23*/].f_1 = 0;
	Global_1951255[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951255[iParam0 /*23*/].f_9 = 0f;
	Global_1951255[iParam0 /*23*/].f_10 = 0;
	Global_1951255[iParam0 /*23*/].f_11 = 0;
	Global_1951255[iParam0 /*23*/].f_2 = 1;
	Global_1951255[iParam0 /*23*/].f_15 = -1f;
}

void func_604(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_648(uParam0))
	{
		return;
	}
	iVar0 = Global_1296859.f_8;
	func_859();
	func_652(0);
	if (uParam0->f_1)
	{
		func_860(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_337(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_658();
		}
	}
	if (uParam0->f_12)
	{
		func_861();
	}
	if (uParam0->f_8)
	{
		func_862(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_675(func_863());
	}
	else if (uParam0->f_4)
	{
		func_864();
		func_862(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_675(Global_1956200.f_1549);
	}
	if (uParam0->f_3)
	{
		func_865();
	}
	if (bParam1)
	{
		func_660(0, 0);
		func_866();
	}
	func_649(&(Global_1139381.f_4796));
}

bool func_605(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_606(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_607(int iParam0, int iParam1)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_458.f_1387), iParam1))
	{
		func_867(iParam0);
		if (Local_458.f_9 != joaat("POSSE_VERSUS"))
		{
			func_868(iParam1, 0);
		}
		SCRIPTS::_0xD426E2E3288469D6(&(Local_458.f_1387), iParam1);
	}
}

void func_608(int iParam0, int iParam1)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_458.f_1386), iParam1))
	{
		func_869(iParam0);
		func_870(iParam0);
		func_871(iParam0);
		if (Local_458.f_9 != joaat("POSSE_VERSUS"))
		{
			func_868(iParam1, 0);
		}
		SCRIPTS::_0xD426E2E3288469D6(&(Local_458.f_1386), iParam1);
	}
	if (func_137(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			func_343();
			func_338(33554432);
			if (func_137(67108864))
			{
				func_346(1, 0, 1);
				func_338(67108864);
			}
		}
	}
}

bool func_609(int iParam0)
{
	return func_605(Global_1194053.f_3, iParam0);
}

void func_610(int iParam0)
{
	func_606(&(Global_1194053.f_3), iParam0);
}

bool func_611(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((Global_1100469[iVar0 /*53*/].f_48 == 2 || (bParam1 && Global_1100469[iVar0 /*53*/].f_48 == 1)) || (bParam2 && Global_1100469[iVar0 /*53*/].f_48 == 3));
}

bool func_612(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_78(Global_1071686.f_21416.f_1[iParam0 /*8*/].f_7, iParam1);
}

void func_613(int iParam0)
{
	if (!func_78(Global_1071686.f_21416.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_149(&(Global_1071686.f_21416.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

var func_614(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = UIFEED::_SHOW_SIMPLE_RIGHT_TEXT(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_615(int iParam0, int iParam1)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	struct<11> Var52;
	struct<7> Var63;
	int iVar70;

	iVar50 = GANG::_0xD1BF325C8252A982(iParam1, &Var0);
	Var63 = { func_872() };
	iVar70 = 0;
	while (iVar70 <= (iVar50 - 1))
	{
		if ((func_873(Var0[iVar70 /*7*/]) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0[iVar70 /*7*/]), &Var63)) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var0[iVar70 /*7*/])))
		{
			iVar51 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar70 /*7*/]));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar51))
			{
				Var52.f_4 = 7;
				Var52.f_5 = iParam1;
				Var52.f_10 = iParam0;
				func_874(&Var52, iVar51);
			}
		}
		iVar70++;
	}
}

void func_616(int iParam0)
{
	if (func_78(Global_1071686.f_21416.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_428(&(Global_1071686.f_21416.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

bool func_617(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1146212.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212.f_2165 >= 21)
	{
		return false;
	}
	Global_1146212.f_2143[Global_1146212.f_2165] = iParam0;
	Global_1146212.f_2165++;
	return true;
}

void func_618(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_619(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_620(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940311.f_242.f_5, iParam0);
	func_875(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_876((Global_1940311.f_242.f_1186 - 1));
}

int func_621(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_877(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686.f_19550.f_1[iVar0 /*3*/].f_2;
}

int func_622(struct<2> Param0)
{
	return func_878(Param0);
}

int func_623(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102219.f_16)
	{
		return 0;
	}
	if (!func_879())
	{
		return 0;
	}
	if (!func_17())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_880(&Global_0, 8);
	}
	func_880(&Global_0, 1);
	return 1;
}

void func_624(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	iVar0 = func_881(func_630(Param0));
	iVar1 = func_622(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_23() == 0)
	{
		Var2 = Global_265377.f_124517.f_71.f_17;
		func_882(Param0, &Var2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	STATS::_0xD5910ECF81A2278C(iVar0, iVar1, iParam2, &Var2);
}

void func_625(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_883(Param0);
	}
	else
	{
		func_884(Param0, iParam2);
	}
	func_885();
}

void func_626(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_886(iVar0, 1);
		if ((iVar1 == joaat("CRIME_MURDER_PLAYER") || iVar1 == joaat("CRIME_MURDER_PLAYER_HORSE")) || iVar1 == joaat("CRIME_TRAMPLE_PLAYER"))
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_887(cVar2);
			}
			else
			{
				func_888();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_627(bool bParam0)
{
	if (!bParam0 && func_889(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_628(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_629(struct<2> Param0)
{
	return func_891(func_890(Param0));
}

int func_630(var uParam0, var uParam1)
{
	return uParam0;
}

int func_631(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_892(Param0);
	if (func_892(Param0) < 0)
	{
		return 0;
	}
	func_893(iVar0, uParam2);
	return 1;
}

void func_632(bool bParam0)
{
	int iVar0;

	if (Global_1900688.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688.f_2 == 4 && Global_1900688.f_12 != Global_1900688.f_13) && !bParam0)
	{
		Global_1900688.f_1 = Global_1900688.f_2;
		Global_1900688.f_12 = Global_1900688.f_13;
		func_894(iVar0, Global_1900688.f_12);
	}
	else
	{
		Global_1900688.f_1 = 0;
		Global_1900688.f_7 = iVar0;
		Global_1900688.f_8 = func_895();
		Global_1900688.f_9 = func_896(Global_1893587.f_2);
		Global_1900688.f_11 = func_897(Global_1896622.f_41);
		if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
		{
			func_898(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
		else if (Global_1900688.f_11 != -1)
		{
			func_898(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
		}
		else
		{
			func_898(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
		}
	}
	Global_1900688.f_2 = 0;
}

void func_633(int iParam0)
{
	if (Global_1194053.f_440 != 2)
	{
		return;
	}
	if (Global_1194053.f_440.f_1 == 0)
	{
		return;
	}
	Global_1194053.f_440.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
}

int func_634(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1196898.f_1[iParam0 /*4*/];
}

char* func_635(int iParam0)
{
	switch (iParam0)
	{
		case -1489866873:
			return "EventData/location(id=%x)";
		case -197735539:
			return "EventData/location(id=%x)/variation(id=%x)/tuningData";
		case 380893688:
			return "EventData/location(id=%x)/TreasureLocations/treasureLocation(%i)";
		case 473445396:
			return "EventData/location(id=%x)/TreasureLocations/treasureLocation";
		case 1904003662:
			return "EventData/location(id=%x)/TreasureLocations";
		case -1790671069:
			return "treasureLocation(%i)";
		case -726641051:
			return ":fInitialSearchRadius";
		case -1993968532:
			return ":fFullyNarrowedRadius";
		case 2007146056:
			return ":iActionsToFullyNarrow";
		case 772630146:
			return ":iEventDuration";
		case -771926219:
			return ":vEventCenter";
		case 1870000396:
			return ":idx";
		case 316778596:
			return ":pos";
		case 31911167:
			return ":ori";
		case -298537006:
			return ":type";
		default:
			break;
	}
	return "";
}

float func_636(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_637(int iParam0, int iParam1, int iParam2)
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

void func_638(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_899(&(Global_1139381.f_3876.f_2[func_380(iParam0, 1) /*4*/]));
}

bool func_639()
{
	if ((Global_1903071.f_35 == 1 && Global_1903071.f_5 >= 2) && Global_1903071.f_5 != 9)
	{
		return true;
	}
	return false;
}

void func_640()
{
	if (func_900())
	{
		func_901(8);
	}
}

void func_641()
{
	if (func_902())
	{
		func_901(16);
	}
}

void func_642()
{
	if (func_903())
	{
		func_901(32);
	}
}

int func_643(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
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

void func_644(var uParam0)
{
	func_904(uParam0, 0f);
}

bool func_645(var uParam0)
{
	return func_386(*uParam0, 2);
}

float func_646()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_647(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_905(&(uParam0->f_16), 84);
	}
}

bool func_648(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	else if (uParam0->f_10)
	{
		return true;
	}
	else if (uParam0->f_9)
	{
		return true;
	}
	else if (uParam0->f_4)
	{
		return true;
	}
	else if (uParam0->f_5)
	{
		return true;
	}
	else if (uParam0->f_3)
	{
		return true;
	}
	else if (uParam0->f_8)
	{
		return true;
	}
	else if (uParam0->f_6)
	{
		return true;
	}
	else if (uParam0->f_7)
	{
		return true;
	}
	else if (uParam0->f_11)
	{
		return true;
	}
	else if (uParam0->f_2)
	{
		return true;
	}
	else if (uParam0->f_12)
	{
		return true;
	}
	return false;
}

void func_649(var uParam0)
{
	func_906(uParam0);
	func_907(&(uParam0->f_16));
	func_908(&(uParam0->f_21));
	func_909(&(uParam0->f_22));
	func_910(&(uParam0->f_25));
	func_911(&(uParam0->f_47));
	func_912(&(uParam0->f_51));
	func_913(&(uParam0->f_54));
	func_914(&(uParam0->f_57));
}

void func_650(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_164(uParam0, 1);
	}
}

void func_651()
{
	func_915();
	func_916();
	func_862(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
}

void func_652(bool bParam0)
{
	int iVar0;

	if (!bParam0 && Global_1956200.f_1431.f_108)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 0))
	{
		Global_1956200.f_1431.f_108.f_1 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 0);
	}
	else
	{
		Global_1956200.f_1431.f_108.f_1 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 1))
	{
		Global_1956200.f_1431.f_108.f_3 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 1);
	}
	else
	{
		Global_1956200.f_1431.f_108.f_3 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 2))
	{
		Global_1956200.f_1431.f_108.f_2 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 2);
	}
	else
	{
		Global_1956200.f_1431.f_108.f_2 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 0))
	{
		Global_1956200.f_1431.f_108.f_4 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 0);
	}
	else
	{
		Global_1956200.f_1431.f_108.f_4 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 1))
	{
		Global_1956200.f_1431.f_108.f_6 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 1);
	}
	else
	{
		Global_1956200.f_1431.f_108.f_6 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 2))
	{
		Global_1956200.f_1431.f_108.f_5 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 2);
	}
	else
	{
		Global_1956200.f_1431.f_108.f_5 = 0f;
	}
	Global_1956200.f_1431.f_108 = 1;
}

struct<4> func_653(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_917(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_918() };
		if (func_919() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_920(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_921(PLAYER::PLAYER_ID());
	}
	bVar33 = func_922(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_923(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(&(Global_17411.f_55.f_61[iVar34 /*4*/])))
		{
			Var0 = { Global_17411.f_55.f_61[iVar34 /*4*/] };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_924();
		}
		if (!func_925(&Var0, 0))
		{
			Var35 = { func_926(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_654(var uParam0, int iParam1)
{
	func_927(uParam0, iParam1, 0);
	return Global_1904087.f_11;
}

var func_655(var uParam0, int iParam1)
{
	func_927(uParam0, iParam1, 0);
	return Global_1904087.f_22;
}

int func_656(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_927(uParam0, iParam1, 1))
	{
	}
	if (!func_928(&Global_1904087))
	{
		return 0;
	}
	iVar0 = func_929(Global_1904087.f_11, Global_1904087.f_23);
	return iVar0;
}

void func_657(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = iParam4;
}

void func_658()
{
	func_930(&(Global_1139381.f_3876.f_480));
}

int func_659(bool bParam0)
{
	if (func_23() == -1)
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

void func_660(int iParam0, int iParam1)
{
	INVENTORY::_0xA6AA9F56BC6CFF58(iParam0, iParam1);
	func_931(&(Global_1293346.f_12));
	func_931(&(Global_1293346.f_16));
}

void func_661(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

int func_662(var uParam0)
{
	var uVar0;

	if (!func_932(32))
	{
		func_933(&(Global_1952637.f_2365));
		func_661(32);
	}
	if (uParam0->f_1 == 0)
	{
		if (!func_934(*uParam0))
		{
			if (func_932(32))
			{
				func_860(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_935(&(Global_1952637.f_2365));
		if (!func_936(&(Global_1952637.f_1556), *uParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_932(32))
			{
				func_860(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_937(&(Global_1952637.f_1556));
	}
	func_679(33, Global_1139381.f_4779.f_4, 0, 0, 0);
	Global_1139381.f_4779.f_4 = *uParam0;
	Global_1139381.f_4779 = uParam0->f_1;
	func_679(30, 0, 0, 0, 0);
	func_679(27, 0, 0, 0, 0);
	func_679(32, Global_1139381.f_4779.f_4, 0, 0, 0);
	return 1;
}

void func_663()
{
	func_171(121);
}

void func_664(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_938(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_938(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_938(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_939(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_940(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_941(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_665()
{
	func_942();
}

int func_666(int iParam0)
{
	if (func_404(&(Global_1956200.f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_667(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	func_943(0, iParam0);
	func_943(2, iParam1);
	func_943(1, iParam2);
	iVar0 = func_944(iParam0);
	func_945(0, iVar0);
	iVar0 = func_944(iParam1);
	func_945(2, iVar0);
	iVar0 = func_944(iParam2);
	func_945(1, iVar0);
}

void func_668(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_946(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200.f_1546;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200.f_1546;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200.f_1546 = iParam0;
			break;
		case 1:
			Global_1956200.f_1565.f_136 = iParam0;
			break;
	}
}

void func_669(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_946(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200.f_1546.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200.f_1546.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200.f_1546.f_1 = iParam0;
			break;
		case 1:
			Global_1956200.f_1565.f_136.f_1 = iParam0;
			break;
	}
}

void func_670(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_946(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200.f_1546.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200.f_1546.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200.f_1546.f_2 = iParam0;
			break;
		case 1:
			Global_1956200.f_1565.f_136.f_2 = iParam0;
			break;
	}
}

void func_671()
{
	float fVar0;

	func_943(0, func_938(0, 0));
	func_943(2, func_938(2, 0));
	func_943(1, func_938(1, 0));
	fVar0 = func_947(0, 0);
	func_945(0, BUILTIN::FLOOR(fVar0));
	fVar0 = func_947(2, 0);
	func_945(2, BUILTIN::FLOOR(fVar0));
	fVar0 = func_947(1, 0);
	func_945(1, BUILTIN::FLOOR(fVar0));
}

void func_672(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_946(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1956200.f_1431.f_81 = uParam1;
			}
			else
			{
				Global_1956200.f_1565.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1956200.f_1431.f_83 = uParam1;
			}
			else
			{
				Global_1956200.f_1565.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1956200.f_1431.f_82 = uParam1;
			}
			else
			{
				Global_1956200.f_1565.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_673(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	if (!func_948(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	Global_1139381.f_4796.f_34[iParam2 /*3*/] = { vVar0 };
}

void func_674()
{
	func_949();
	func_950();
}

void func_675(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	func_951();
	func_952();
	func_953(&uParam0, iVar0);
	func_954(&uParam0, iVar0);
	func_955(&uParam0, iVar0);
	func_956(&uParam0);
	func_957();
	func_958(1);
}

bool func_676(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

struct<4> func_677(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_13 == 0)
	{
		iVar0 = func_659(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1293346))
			{
				Global_1293346 = { func_678(joaat("CHARACTER"), func_924(), -1591664384, bParam0) };
			}
			return Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_12)))
			{
				Global_1293346.f_12 = { func_678(joaat("CHARACTER"), func_924(), -1591664384, 0) };
			}
			return Global_1293346.f_12;
		}
	}
	return func_678(joaat("CHARACTER"), func_924(), -1591664384, bParam0);
}

struct<4> func_678(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_681(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_659(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_679(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_661(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_959(Var0);
}

void func_680(int iParam0)
{
	struct<4> Var0;

	Var0 = { func_678(joaat("CHARACTER_ROLE_TOKEN"), func_677(1), 1784584921, 1) };
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		INVENTORY::_0x3112ADB9D5F3426B(&Var0, iParam0);
	}
}

bool func_681(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_682(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_683(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_682(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_684(iParam0, 0, 0) };
	if (func_960(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_961(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_659(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_684(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_677(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_962(iParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_678(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			break;
		case joaat("WEAPON"):
			Var0 = { func_963(bParam1) };
			if (bParam2 && func_964(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_965(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_965(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_966(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -1591664384;
			Var0 = { func_967(bParam1) };
			switch (func_857(iParam0))
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
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_968(iParam0, -1823706425))
			{
				Var0 = { func_678(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_968(iParam0, -1483207246))
			{
				Var0 = { func_678(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1911121386))
			{
				Var0 = { func_678(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_968(iParam0, -1653629781))
			{
				Var0 = { func_678(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_969(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_968(iParam0, -1653629781))
			{
				Var0 = { func_678(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_685(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_960(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_961(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_659(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_686(var uParam0, var uParam1)
{
	struct<5> Var0;
	var uVar5;

	if (!DATAFILE::_0x603AC35FD4602C76(uParam1->f_66))
	{
		return false;
	}
	Var0 = uParam1->f_66;
	Var0.f_2 = 380893688;
	Var0.f_3 = Local_458.f_2;
	Var0.f_4 = uParam0->f_14;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	if (!func_373(&Var0, 316778596, &(uParam0->f_11)))
	{
		return false;
	}
	if (!func_371(Var0, 31911167, &(uParam0->f_15), 0f, 360f, 1))
	{
		return false;
	}
	if (!func_970(Var0, -298537006, &uVar5))
	{
		return false;
	}
	uParam0->f_9 = uVar5;
	return true;
}

var func_687(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_971() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859.f_10;
	iVar6 = Global_1296859.f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_972());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_972());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_972());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_973(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar2]))
		{
			iVar10 = Global_1296859.f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_974(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1296859.f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_770(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_975(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			return 5;
		default:
			break;
	}
	return 0;
}

int func_689(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			switch (iParam1)
			{
				case 0:
					return joaat("TH_HRT_CHEST");
				case 1:
					return joaat("TH_HRT_ROCKS");
				case 2:
					return 528696119;
				case 3:
					return -849305869;
				case 4:
					return joaat("TH_HRT_MAP");
				default:
					break;
			}
			return 0;
		}

Vector3 func_690(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			switch (iParam1)
			{
				case joaat("TH_HRT_CHEST"):
					return -0.008715f, 1.018275f, 0f;
				case joaat("TH_HRT_ROCKS"):
					return -0.008715f, 1.018275f, 0f;
				case 528696119:
					return 0.054435f, 0.980646f, 0.101269f;
				case -849305869:
					return 0.019404f, 0.978131f, 0.106024f;
				case joaat("TH_HRT_MAP"):
					return -0.081336f, 0.089546f, -1f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

Vector3 func_691(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			switch (iParam1)
			{
				case joaat("TH_HRT_CHEST"):
					return 0f, 0f, 0f;
				case joaat("TH_HRT_ROCKS"):
					return 0f, 0f, 0f;
				case 528696119:
					return 10.34671f, -4.88114f, 1.486373f;
				case -849305869:
					return 9.050551f, 0f, 0f;
				case joaat("TH_HRT_MAP"):
					return 74.73452f, -80.48813f, -72.84706f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		}

int func_692(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			switch (iParam1)
			{
				case joaat("TH_HRT_CHEST"):
					return joaat("S_TREASUREHEARTLANDS02X");
				case joaat("TH_HRT_ROCKS"):
					return joaat("S_TREASUREHEARTLANDS01X");
				case 528696119:
					return joaat("P_COINSTACK02");
				case -849305869:
					return joaat("P_COINSTACK02");
				case joaat("TH_HRT_MAP"):
					return joaat("S_TWOFOLDMAP01X");
				default:
					break;
			}
			return 0;
		}

bool func_693(var uParam0, int iParam1, vector3 vParam2, bool bParam5, var uParam6)
{
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return false;
	}
	if (!func_976(iParam1))
	{
		return false;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

Vector3 func_694(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_696(var uParam0, int iParam1)
{
	func_483(uParam0, iParam1);
}

void func_697(var uParam0, var uParam1)
{
	uParam0->f_16 = ((uParam1->f_67 - uParam1->f_68) / BUILTIN::TO_FLOAT(uParam1->f_69));
	uParam0->f_17 = (uParam0->f_16 * 0.5f);
	func_408(&(uParam0->f_2), 8);
}

void func_698(var uParam0, bool bParam1)
{
	if (bParam1 || !func_977(uParam0))
	{
		func_700(uParam0);
	}
}

bool func_699(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else if (!func_810(&((uParam0[iVar1 /*3*/])->f_2), iParam1))
		{
		}
		else
		{
			*uParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			return true;
		}
		iVar1++;
	}
	*uParam2 = 255;
	return false;
}

void func_700(var uParam0)
{
	func_978(uParam0, 0);
}

int func_701(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	Local_215.f_10 = iParam0;
	return 1;
}

void func_702(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_703(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	Global_1108365.f_34.f_353[iParam0 /*6*/] = { Var0 };
	Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 0;
}

void func_704(int iParam0)
{
	struct<11> Var0;
	struct<2> Var11;

	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28346), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
	Global_1108365.f_34[iParam0 /*11*/].f_6 = 0;
	Var0 = 4;
	Global_1108365.f_34[iParam0 /*11*/] = { Var0 };
	func_979(iParam0);
	Var11 = 255;
	Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iParam0 /*2*/] = { Var11 };
	if ((!func_980() || !func_981()) || Global_1572887.f_6)
	{
		func_614(MISC::_CREATE_VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_982(&(Global_1108365.f_34[iParam0 /*11*/].f_8), 256))
	{
		if (func_983(Global_1108365.f_34.f_774) < 2 || Global_1108365.f_34.f_778 != 255)
		{
			func_984(&(Global_1108365.f_34.f_773), 64);
		}
		else
		{
			func_984(&(Global_1108365.f_34.f_773), 32);
		}
		Global_1108365.f_34.f_774 = Global_1296859.f_21;
	}
}

void func_705(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	struct<2> Var12;
	var uVar14;
	struct<6> Var15;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365.f_34[iVar0 /*11*/].f_6)
	{
		return;
	}
	func_985(iParam0);
	func_869(iParam0);
	func_870(iParam0);
	func_986(&(Global_1108365.f_34[iVar0 /*11*/].f_8), 2);
	func_979(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108365.f_34.f_546[iVar0 /*7*/])) == iParam0 && !func_982(&(Global_1108365.f_34[iVar0 /*11*/].f_8), 256))
	{
		if (func_983(Global_1108365.f_34.f_774) < 2 || Global_1108365.f_34.f_778 != 255)
		{
			func_984(&(Global_1108365.f_34.f_773), 64);
		}
		else
		{
			func_984(&(Global_1108365.f_34.f_773), 32);
			Global_1108365.f_34.f_778 = iParam0;
		}
		Global_1108365.f_34.f_774 = Global_1296859.f_21;
		func_614(MISC::_CREATE_VAR_STRING(10, "PARLEY_TICKER_END", func_526(PLAYER::GET_PLAYER_NAME(iParam0), func_525(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	Global_1108365.f_34[iVar0 /*11*/] = { Var1 };
	Var12 = 255;
	Global_1288736[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iVar0 /*2*/] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar14, iVar0);
	Var15.f_5 = PLAYER::PLAYER_ID();
	Var15.f_4 = 5;
	func_987(&Var15, &uVar14);
}

bool func_706(int iParam0)
{
	if (Global_1288736[iParam0 /*67*/].f_66)
	{
		return Global_1288736[iParam0 /*67*/].f_66;
	}
	return Global_1108365.f_34.f_353[iParam0 /*6*/];
}

bool func_707(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

int func_708(vector3 vParam0, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!func_158(Local_458.f_1333))
	{
		return 0;
	}
	if (!func_115())
	{
		return 0;
	}
	func_988(joaat("COLOR_FREEMODE_EVENT"), &fVar0, &fVar1, &fVar2);
	GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(fVar0, fVar1, fVar2);
	if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fme_smoke_puff_tint", vParam0, 0f, 0f, 0f, fParam3, false, false, false))
	{
		return 1;
	}
	return 0;
}

void func_709()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<14> Var6;
	struct<14> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	func_989();
	iVar1 = INVENTORY::_0x80D78BDC9D88EF07(INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(Global_34), "ALL WEAPONS", -1591664384, &iVar0);
	if (iVar1 < 0 || iVar0 <= 0)
	{
		INVENTORY::_0x42A2F33A1942E865(iVar1);
		return;
	}
	if (func_990(&iVar2, &iVar3))
	{
		func_991(iVar2, iVar3, 0);
	}
	bVar4 = false;
	iVar5 = func_499();
	Var6.f_9 = -1591664384;
	Var20.f_9 = -1591664384;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	iVar34 = 0;
	while (iVar34 <= (iVar0 - 1))
	{
		Var6 = { Var20 };
		if (INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar34, &Var6))
		{
			if (iVar5 != 0 && Var6.f_4 == iVar5)
			{
				bVar4 = true;
			}
			if (WEAPON::_0x705BE297EEBDB95D(Var6.f_4) && WEAPON::_0xF29A186ED428B552(Global_34, Var6.f_4))
			{
				if (WEAPON::_IS_WEAPON_REVOLVER(Var6.f_4))
				{
					iVar37 = func_992(joaat("AMMO_REVOLVER"), 0, 0, 0);
					iVar37 = (iVar37 + func_992(joaat("AMMO_REVOLVER_EXPRESS"), 0, 0, 0));
					iVar37 = (iVar37 + func_992(joaat("AMMO_REVOLVER_EXPRESS_EXPLOSIVE"), 0, 0, 0));
					iVar37 = (iVar37 + func_992(joaat("AMMO_REVOLVER_HIGH_VELOCITY"), 0, 0, 0));
					iVar37 = (iVar37 + func_992(joaat("AMMO_REVOLVER_SPLIT_POINT"), 0, 0, 0));
					iVar35 = (iVar35 + iVar37);
				}
				else if (WEAPON::_IS_WEAPON_PISTOL(Var6.f_4))
				{
					iVar38 = func_992(joaat("AMMO_PISTOL"), 0, 0, 0);
					iVar38 = (iVar38 + func_992(joaat("AMMO_PISTOL_EXPRESS"), 0, 0, 0));
					iVar38 = (iVar38 + func_992(joaat("AMMO_PISTOL_EXPRESS_EXPLOSIVE"), 0, 0, 0));
					iVar38 = (iVar38 + func_992(joaat("AMMO_PISTOL_HIGH_VELOCITY"), 0, 0, 0));
					iVar38 = (iVar38 + func_992(joaat("AMMO_PISTOL_SPLIT_POINT"), 0, 0, 0));
					iVar35 = (iVar35 + iVar38);
				}
				else if (WEAPON::_IS_WEAPON_REPEATER(Var6.f_4))
				{
					iVar39 = func_992(joaat("AMMO_REPEATER"), 0, 0, 0);
					iVar39 = (iVar39 + func_992(joaat("AMMO_REPEATER_EXPRESS"), 0, 0, 0));
					iVar39 = (iVar39 + func_992(joaat("AMMO_REPEATER_EXPRESS_EXPLOSIVE"), 0, 0, 0));
					iVar39 = (iVar39 + func_992(joaat("AMMO_REPEATER_HIGH_VELOCITY"), 0, 0, 0));
					iVar39 = (iVar39 + func_992(joaat("AMMO_REPEATER_SPLIT_POINT"), 0, 0, 0));
					iVar36 = (iVar36 + iVar39);
				}
				else if (Var6.f_4 == joaat("WEAPON_RIFLE_VARMINT"))
				{
					iVar40 = func_992(joaat("AMMO_22"), 0, 0, 0);
					iVar40 = func_992(joaat("AMMO_22_TRANQUILIZER"), 0, 0, 0);
					iVar36 = (iVar36 + iVar40);
				}
				else if (WEAPON::_IS_WEAPON_RIFLE(Var6.f_4) || WEAPON::_IS_WEAPON_SNIPER(Var6.f_4))
				{
					iVar41 = func_992(joaat("AMMO_RIFLE"), 0, 0, 0);
					iVar41 = (iVar41 + func_992(joaat("AMMO_RIFLE_ELEPHANT"), 0, 0, 0));
					iVar41 = (iVar41 + func_992(joaat("AMMO_RIFLE_EXPRESS"), 0, 0, 0));
					iVar41 = (iVar41 + func_992(joaat("AMMO_RIFLE_EXPRESS_EXPLOSIVE"), 0, 0, 0));
					iVar41 = (iVar41 + func_992(joaat("AMMO_RIFLE_HIGH_VELOCITY"), 0, 0, 0));
					iVar41 = (iVar41 + func_992(joaat("AMMO_RIFLE_SPLIT_POINT"), 0, 0, 0));
					iVar36 = (iVar36 + iVar41);
				}
				else if (WEAPON::_IS_WEAPON_SHOTGUN(Var6.f_4))
				{
					iVar42 = func_992(joaat("AMMO_SHOTGUN"), 0, 0, 0);
					iVar42 = (iVar42 + func_992(joaat("AMMO_SHOTGUN_BUCKSHOT_INCENDIARY"), 0, 0, 0));
					iVar42 = (iVar42 + func_992(joaat("AMMO_SHOTGUN_SLUG"), 0, 0, 0));
					iVar42 = (iVar42 + func_992(joaat("AMMO_SHOTGUN_SLUG_EXPLOSIVE"), 0, 0, 0));
					if (Var6.f_4 == joaat("WEAPON_SHOTGUN_SAWEDOFF"))
					{
						iVar35 = (iVar35 + iVar42);
					}
					else
					{
						iVar36 = (iVar36 + iVar42);
					}
				}
				else if (func_993(Var6.f_4))
				{
					iVar43 = func_992(joaat("AMMO_ARROW"), 0, 0, 0);
					iVar43 = (iVar43 + func_992(joaat("AMMO_ARROW_DYNAMITE"), 0, 0, 0));
					iVar43 = (iVar43 + func_992(joaat("AMMO_ARROW_FIRE"), 0, 0, 0));
					iVar43 = (iVar43 + func_992(joaat("AMMO_ARROW_IMPROVED"), 0, 0, 0));
					iVar43 = (iVar43 + func_992(joaat("AMMO_ARROW_POISON"), 0, 0, 0));
					iVar43 = (iVar43 + func_992(joaat("AMMO_ARROW_TRACKING"), 0, 0, 0));
					iVar36 = (iVar36 + iVar43);
				}
			}
		}
		iVar34++;
	}
	if (iVar37 >= 0)
	{
		iVar44 = 30;
		if (iVar35 < iVar44)
		{
			func_991(joaat("AMMO_REVOLVER"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar38 >= 0)
	{
		iVar44 = 20;
		if (iVar35 < iVar44)
		{
			func_991(joaat("AMMO_PISTOL"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar39 >= 0)
	{
		iVar44 = 20;
		if (iVar36 < iVar44)
		{
			func_991(joaat("AMMO_REPEATER"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar41 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_991(joaat("AMMO_RIFLE"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar40 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_991(joaat("AMMO_22"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar42 >= 0)
	{
		iVar44 = 6;
		if (!WEAPON::_0xF29A186ED428B552(Global_34, joaat("WEAPON_SHOTGUN_SAWEDOFF")))
		{
			if (iVar36 < iVar44)
			{
				func_991(joaat("AMMO_SHOTGUN"), (iVar44 - iVar36), 0);
				iVar36 = iVar44;
			}
		}
		else if (iVar35 < iVar44)
		{
			func_991(joaat("AMMO_SHOTGUN"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar43 >= 0)
	{
		iVar44 = 5;
		if (iVar36 < iVar44)
		{
			func_991(joaat("AMMO_ARROW"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	if (iVar5 != 0)
	{
		if (!bVar4 || !WEAPON::_0xF29A186ED428B552(Global_34, iVar5))
		{
			if (func_994(iVar5) && !func_137(8388608))
			{
				func_43(8388608);
			}
		}
	}
}

void func_710()
{
	func_995(0);
}

bool func_711()
{
	return Global_1940311.f_1;
}

void func_712()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("SATCHEL")) > 0)
	{
		Global_1940311.f_12 = 1;
	}
}

void func_713(int* iParam0, int* iParam1)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		MAP::REMOVE_BLIP(iParam1);
	}
}

bool func_714()
{
	return (Global_1296851.f_2.f_1 == 2 || Global_1296851.f_2.f_1 == 1);
}

bool func_715(int iParam0, struct<2> Param1, var uParam3)
{
	struct<2> Var0;

	if (func_16(Param1, 0, 128))
	{
		return false;
	}
	func_722(iParam0, Param1);
	if (iParam0 == -1)
	{
		return false;
	}
	if (Global_1196898.f_78[iParam0 /*20*/].f_3 == -1)
	{
		return false;
	}
	if (func_18(iParam0, 32))
	{
		return true;
	}
	if (!func_73(Param1))
	{
		return false;
	}
	else if (!func_362(Param1))
	{
		return false;
	}
	else if (func_363(Param1))
	{
		return false;
	}
	Var0 = { func_156() };
	if (func_73(Var0) && !func_74(Var0, Param1))
	{
		if (func_157())
		{
			func_250(iParam0, 262144);
			func_996(1);
		}
		else
		{
			return false;
		}
	}
	func_997(Param1, 1, 1, 1);
	func_998(Param1, 1, 0, -1);
	func_999(2);
	func_1000(Global_1196898.f_78[iParam0 /*20*/].f_3, uParam3);
	func_250(iParam0, 32);
	func_1001(7);
	if (func_634(Global_1196898.f_78[iParam0 /*20*/].f_3) != joaat("POSSE_VERSUS"))
	{
		func_1002();
		SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_FREE_ROAM_EVENT"));
	}
	else
	{
		SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_POSSE_VERSUS"));
		STATS::_0xE5A680A5D8B1F687(1);
	}
	return true;
}

void func_716(bool bParam0)
{
	if (Local_458.f_9 == joaat("POSSE_VERSUS") && !func_133(func_132(Local_458.f_1)))
	{
		func_1003(func_132(Local_458.f_1));
		if (bParam0)
		{
			func_1004(func_132(Local_458.f_1), Local_458.f_7, -1);
		}
	}
}

bool func_717()
{
	switch (Local_458.f_1)
	{
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

bool func_718(int iParam0)
{
	return true;
}

bool func_719()
{
	return func_489(UIFEED::_0xC17F69E1418CD11F(6));
}

var func_720(int iParam0, int iParam1, var uParam2, struct<2> Param3)
{
	struct<53> Var0;
	struct<8> Var53;
	int iVar61;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = joaat("COLOR_WHITE");
	Var0.f_19 = joaat("COLOR_WHITE");
	Var0.f_23 = 300;
	Var0.f_31.f_8 = joaat("COLOR_WHITE");
	Var0.f_31.f_11 = joaat("COLOR_WHITE");
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = joaat("PLAYER_MENU");
	Var0.f_31.f_21 = 1;
	Var53 = { func_27(iParam1, uParam2) };
	Var0.f_20 = func_1005(iParam1);
	Var0.f_21 = func_1006(iParam1);
	Var0.f_24 = 6;
	Var0.f_25 = func_878(Param3);
	Var0.f_23 = 180;
	if (func_634(iParam1) != joaat("POSSE_VERSUS"))
	{
		Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE", &Var53);
		Var0.f_16 = MISC::_CREATE_VAR_STRING(2, &Var53);
		Var0.f_17 = MISC::_CREATE_VAR_STRING(2, "FME_PI_MENU_BODY");
		Var0.f_2 = joaat("COLOR_FREEMODE_EVENT");
		Var0.f_19 = joaat("COLOR_FREEMODE_EVENT");
	}
	else
	{
		iVar61 = Global_1196339.f_1[iParam0 /*26*/].f_7;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar61))
		{
			return 0;
		}
		Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var53);
		Var0.f_16 = MISC::_CREATE_VAR_STRING(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", PLAYER::GET_PLAYER_NAME(iVar61));
		Var0.f_17 = MISC::_CREATE_VAR_STRING(2, &Var53);
	}
	Var0.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_31.f_6 = func_1005(iParam1);
	Var0.f_31.f_7 = func_1006(iParam1);
	Var0.f_31.f_17 = func_122();
	Var0.f_31.f_18 = func_121();
	Var0.f_22 = 1;
	return func_1007(Var0);
}

bool func_721()
{
	switch (Local_458.f_1)
	{
		case 18:
			return true;
		default:
			break;
	}
	return false;
}

int func_722(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 16))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (func_362(Param1))
	{
		return 0;
	}
	else if (func_363(Param1))
	{
		return 0;
	}
	func_1008(Param1);
	func_250(iParam0, 16);
	return 1;
}

bool func_723(int iParam0, int iParam1, int iParam2)
{
	return func_78(Global_1196567[iParam2 /*10*/][iParam0], iParam1);
}

bool func_724(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715.f_20638;
	}
	return (Global_1915715.f_20638 || Global_1915715.f_22504.f_1);
}

int func_725()
{
	return Global_1915715.f_20241;
}

void func_726(int iParam0, bool bParam1)
{
	if (!func_1009(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1010(iParam0, 512)) || (!bParam1 && !func_1010(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1011(iParam0, 512);
	}
	else
	{
		func_1012(iParam0, 512);
	}
	if (func_1013(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_727()
{
	return true;
}

void func_728()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_34) && PED::_0x7A4E00364B5D727B(Global_34))
		{
			func_338(1024);
		}
		if (!func_137(1024))
		{
			func_349(0);
			func_43(1024);
		}
	}
}

void func_729()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_158(iVar0))
		{
			func_1014(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
		}
		iVar0++;
	}
	if (!func_137(2048))
	{
		if (Local_458.f_9 == joaat("POSSE_VERSUS"))
		{
			func_350(1);
		}
		else
		{
			func_351(0);
			LAW::_0x710448D44A64C213(0);
			LAW::_0xC805EB785824F712(0);
		}
		func_43(2048);
	}
}

bool func_730(var uParam0)
{
	return true;
}

void func_731()
{
	if (!func_137(1))
	{
		func_43(1);
	}
	if (!func_732(255))
	{
		func_348(1);
	}
}

bool func_732(int iParam0)
{
	return func_169(49, iParam0);
}

bool func_733(int iParam0)
{
	return func_169(48, iParam0);
}

int func_734(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_733(255))
	{
		func_1015(&(Global_1102219.f_3879));
		Global_1102219.f_3879.f_6 = { vParam0 };
		if (ENTITY::DOES_ENTITY_EXIST(iParam7))
		{
			Global_1102219.f_3879.f_4 = iParam7;
			Global_1102219.f_3879.f_5 = 3;
		}
		else if (!func_68(vParam4))
		{
			Global_1102219.f_3879.f_1 = { vParam4 };
			Global_1102219.f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219.f_3879 = fParam3;
			Global_1102219.f_3879.f_5 = 1;
		}
		func_1016(Global_1102219.f_3879, 36);
		func_171(4);
		func_170(48);
		return 1;
	}
	return 0;
}

int func_735(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 1f;
	*uParam1 = uParam2;
	if (*uParam1 <= *uParam0)
	{
		*uParam1 = 200f;
	}
	else if (*uParam1 > 200f)
	{
		*uParam1 = 200f;
	}
	return 1;
}

int func_736(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	*uParam2 = 1f;
	*uParam3 = uParam4;
	if (((func_36(&Var0, iParam0) && func_44(&Var0)) && func_45(&Var0, uParam1)) && func_768(&Var0))
	{
		func_145(Var0, -1963437248, uParam2, 0);
		func_145(Var0, -415053522, uParam3, 0);
	}
	if (*uParam3 <= *uParam2)
	{
		*uParam3 = 200f;
	}
	else if (*uParam3 > 200f)
	{
		*uParam3 = 200f;
	}
	return 1;
}

void func_737(int iParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	int iVar13;

	vVar0 = { vParam2 };
	if (fParam7 > fParam6)
	{
		fVar3 = (fParam7 - fParam6);
		iVar5 = 32;
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 <= 20)
		{
			vVar6 = { func_1017(vParam2, fVar3, 0f) };
			if (func_1018(&vVar6, 9999.9f))
			{
				uVar12 = func_687(vParam2, 0f, 0f, 0f, fParam6, fParam6, fParam6, joaat("VOLSPHERE"), 1, 8);
				iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&uVar12);
				if (iVar4 < iVar5)
				{
					iVar5 = iVar4;
					vVar9 = { vVar6 };
				}
			}
			iVar13++;
		}
		if (!func_68(vVar9))
		{
			vParam2 = { vVar9 };
		}
	}
	uParam8->f_5 = 2;
	uParam8->f_1 = { vVar0 };
	uParam8->f_17.f_6 = { vParam2 };
	uParam8->f_17 = { fParam6, fParam6, fParam6 };
	if (fParam6 > 15f)
	{
		uParam8->f_17 = { fParam6, fParam6, 15f };
	}
	uParam8->f_17.f_9 = joaat("VOLSPHERE");
	uParam8->f_6.f_6 = { vParam2 };
	uParam8->f_6 = { fParam5, fParam5, fParam5 };
	if (fParam5 > 15f)
	{
		uParam8->f_6 = { fParam5, fParam5, 15f };
	}
	uParam8->f_6.f_9 = joaat("VOLSPHERE");
	uParam8->f_16 = 1;
	uParam9->f_5 = 2;
	uParam9->f_1 = { vVar0 };
	uParam9->f_6 = { vParam2 };
	NETWORK::_0xEB6027FD1B4600D5(9, 1, 2f);
	NETWORK::_0xEB6027FD1B4600D5(7, 1, 2f);
	NETWORK::_0xEB6027FD1B4600D5(15, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(13, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(19, 1, 0.05f);
	NETWORK::_0x44D59EC597BBF348(1, 0);
	NETWORK::_0x44D59EC597BBF348(2, 1);
	NETWORK::_0x44D59EC597BBF348(3, 0);
	func_1019(1);
	if (((!func_137(134217728) && !func_547(2, -1)) && !func_478(iParam0, uParam1)) && func_479(iParam0, uParam1))
	{
		func_480(1, 0);
	}
}

void func_738(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;

	func_174(Global_34, 1);
	PED::_0x6569F31A01B4C097(Global_34, 11, 1);
	vVar0 = { Local_141.f_51 };
	fVar5 = (Local_141.f_67 - vLocal_44[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]);
	fVar3 = 25f;
	fVar4 = 7.5f;
	uParam1->f_17 = { (fVar5 + fVar3), (fVar5 + fVar3), (fVar5 + fVar3) };
	uParam1->f_17.f_6 = { vVar0 };
	uParam1->f_6 = { (fVar5 + fVar4), (fVar5 + fVar4), (fVar5 + fVar4) };
	uParam1->f_6.f_6 = { vVar0 };
}

void func_739(var uParam0, var uParam1, var uParam2)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam2))
	{
		VOLUME::_DELETE_VOLUME(*uParam2);
	}
	if (!func_68(uParam0->f_17))
	{
		*uParam2 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_17.f_6, 0f, 0f, 0f, uParam0->f_17);
		NETWORK::_0x405DDEFB1F531B18(*uParam2, 1, 0, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		VOLUME::_DELETE_VOLUME(*uParam1);
	}
	if (!func_68(uParam0->f_6))
	{
		*uParam1 = VOLUME::_CREATE_VOLUME_SPHERE(uParam0->f_6.f_6, 0f, 0f, 0f, uParam0->f_6);
		NETWORK::_0x405DDEFB1F531B18(*uParam1, 0, 0, 0);
	}
	NETWORK::_0x59577799F6AE2F34(1f);
}

void func_740(var uParam0, var uParam1)
{
	func_1020(*uParam0, *uParam1, 0, 0, 1);
}

void func_741(bool bParam0)
{
	func_780(bParam0, Local_458.f_1389);
	Local_458.f_1389++;
	if (Local_458.f_1389 >= 32)
	{
		Local_458.f_1389 = 0;
	}
}

void func_742()
{
	func_483(&(Global_1071686.f_22973.f_3), 4);
}

void func_743(bool bParam0)
{
	func_1021();
	func_783(Local_458.f_1389, bParam0);
	Local_458.f_1389++;
	if (Local_458.f_1389 >= 32)
	{
		Local_458.f_1389 = 0;
	}
}

void func_744()
{
	func_1021();
	func_781(Local_458.f_1389);
	Local_458.f_1389++;
	if (Local_458.f_1389 >= 32)
	{
		Local_458.f_1389 = 0;
	}
}

void func_745()
{
	func_1021();
	func_782(Local_458.f_1389);
	Local_458.f_1389++;
	if (Local_458.f_1389 >= 32)
	{
		Local_458.f_1389 = 0;
	}
}

void func_746(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam0);
		}
		iVar1++;
	}
}

void func_747(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (func_158(iVar1))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam1);
		}
	}
}

int func_748(var uParam0, bool bParam1)
{
	if (!func_1022())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1023())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_509(1);
				func_1024(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1025())
			{
				return 0;
			}
			func_1024(uParam0, 2);
			break;
	}
	Global_1940144.f_110 = 1;
	return 1;
}

int func_749(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1026(uParam0->f_5, &(uParam0->f_6), 0);
		func_1026(uParam0->f_5, &(uParam0->f_7), 1);
		func_1026(uParam0->f_5, &(uParam0->f_8), 37);
		func_1027(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_750(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_1028(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_1028(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1028(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_1028(uParam0, 4);
			}
			else
			{
				func_1028(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_1028(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_751(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1029(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1030(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1027(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1031(uParam0, iParam1, sParam4);
	func_1032(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

char* func_752()
{
	return "321_Countdown";
}

char* func_753()
{
	return "HUD_MP_FREE_MODE";
}

var func_754(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_1033(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

var func_755(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_756()
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return Global_1071686.f_4;
}

bool func_757(int iParam0)
{
	return func_169(27, iParam0);
}

bool func_758(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_759(int iParam0)
{
	if (!func_758(iParam0))
	{
		return false;
	}
	return func_762(iParam0, 8);
}

void func_760(int iParam0, int iParam1)
{
	if (!func_758(iParam0))
	{
		return;
	}
	Global_1887339[iParam0 /*36*/].f_20 = iParam1;
}

void func_761(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

bool func_762(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		return (Global_8123[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1071686.f_19674[iParam0 /*11*/] && iParam1) != 0;
}

void func_763(int iParam0)
{
	Global_1893587 = (Global_1893587 - (Global_1893587 && iParam0));
}

bool func_764(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_762(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1887339[iVar1 /*36*/].f_27)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1887339[iVar1 /*36*/].f_27));
			}
		}
		if (Global_1887339[iVar1 /*36*/].f_10 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1887339[iVar1 /*36*/].f_10, false))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1887339[iVar1 /*36*/].f_10, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(Global_1887339[iVar1 /*36*/].f_10))
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1887339[iVar1 /*36*/].f_10);
				}
			}
			else if (func_762(iVar1, 2))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1887339[iVar1 /*36*/].f_27), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(Global_1887339[iVar1 /*36*/].f_27)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1887339[iVar1 /*36*/].f_10))
			{
				Global_1887339[iVar1 /*36*/].f_10 = 0;
				func_1034(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_762(iVar1, 1))
			{
				func_1034(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_765(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1035(&Var1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
	}
	return iVar0;
}

Vector3 func_766(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	vVar0 = { 0f, 0f, 0f };
	if (((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1)) && func_1035(&Var3))
	{
		if (func_1036(&Var3, uParam2))
		{
			if (func_146(Var3, 2060397848, &vVar0, 1))
			{
			}
		}
	}
	return vVar0;
}

var func_767(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	struct<5> Var1;

	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1035(&Var1))
	{
		if (func_1036(&Var1, uParam2))
		{
			if (func_145(Var1, -185561597, &uVar0, 1))
			{
			}
		}
	}
	return uVar0;
}

bool func_768(var uParam0)
{
	uParam0->f_2 = 670816652;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_769(vector3 vParam0, var uParam3)
{
	if (func_68(vParam0))
	{
		return false;
	}
	if (func_770(255) == 4)
	{
		return false;
	}
	if (func_169(4, 255))
	{
	}
	func_171(4);
	func_1015(&(Global_1102219.f_3879));
	Global_1102219.f_3879.f_6 = { vParam0 };
	Global_1102219.f_3879 = uParam3;
	Global_1102219.f_3879.f_5 = 1;
	Global_1102219.f_26.f_3341 = 0;
	Global_1102219.f_26.f_3342 = 0;
	func_1016(Global_1102219.f_3879, 36);
	return true;
}

int func_770(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1296859.f_22[iParam0])
	{
		return Global_1100469[iParam0 /*53*/].f_1;
	}
	return 26;
}

void func_771(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_1037(iParam0);
	if (!func_1038(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_1039(128) && !func_1040(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_1041() == 4)
	{
		func_170(18);
	}
	func_175(1024);
}

void func_772(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_773(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_774(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_775(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_776(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	int iVar0;

	if (!func_1022() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		*bParam2 = 1;
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MPCountdown");
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Timer", MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_68(vParam4)) && fParam7 > 0f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(func_492());
			HUD::_HIDE_HUD_COMPONENT(-2124237476);
			fParam7 = func_636(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam8))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				GRAPHICS::_0x735762E8D7573E42(1, iVar0, 5f);
				VOLUME::_DELETE_VOLUME(iVar0);
			}
			else
			{
				GRAPHICS::_0x735762E8D7573E42(1, iParam8, 5f);
			}
		}
	}
	return true;
}

void func_777(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "GEIRON_RACE_GO"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
					{
						AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
					}
					AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_460(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = AUDIO::GET_SOUND_ID();
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_4, func_787(), func_784(), 1);
				AUDIO::_0x503703EC1781B7D6(uParam0->f_4, "Time", BUILTIN::TO_FLOAT(iParam1));
			}
		}
	}
}

bool func_778(int iParam0)
{
	return (Global_1102219.f_3520 && iParam0) != 0;
}

void func_779(int iParam0)
{
	if (!func_778(iParam0))
	{
		Global_1102219.f_3520 = (Global_1102219.f_3520 || iParam0);
	}
}

void func_780(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_158(Local_458.f_1333))
	{
		func_341(iParam1);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_458.f_9 != joaat("POSSE_VERSUS") || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_158(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (!bParam0)
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar0))
				{
					func_607(iVar0, iParam1);
				}
				else
				{
					func_1042(iVar0, iParam1);
				}
			}
			else
			{
				func_1042(iVar0, iParam1);
			}
		}
		else
		{
			func_607(iVar0, iParam1);
		}
	}
	else
	{
		func_607(iVar0, iParam1);
	}
}

void func_781(int iParam0)
{
	int iVar0;

	if (!func_158(Local_458.f_1333))
	{
		func_341(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_458.f_9 != joaat("POSSE_VERSUS") || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_158(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (GANG::_0x81FB74C83C2ED69F(iVar0))
			{
				func_608(iVar0, iParam0);
				if (!func_181(8192, Local_458.f_1333))
				{
					if (func_345(Global_1296859.f_15))
					{
						func_346(0, 0, 0);
						func_232(8192, Local_458.f_1333);
					}
				}
				if (!func_181(16384, Local_458.f_1333))
				{
					if (!func_342())
					{
						func_1043();
						func_232(16384, Local_458.f_1333);
					}
				}
			}
			else
			{
				func_1044(iVar0, iParam0);
			}
		}
		else
		{
			func_608(iVar0, iParam0);
		}
	}
	else
	{
		func_608(iVar0, iParam0);
	}
}

void func_782(int iParam0)
{
	int iVar0;

	if (!func_158(Local_458.f_1333))
	{
		func_341(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_458.f_9 != joaat("POSSE_VERSUS") || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_158(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (GANG::_0x81FB74C83C2ED69F(iVar0))
			{
				func_608(iVar0, iParam0);
				if (!func_181(8192, Local_458.f_1333))
				{
					if (func_345(Global_1296859.f_15))
					{
						func_346(0, 0, 0);
						func_232(8192, Local_458.f_1333);
					}
				}
				if (!func_181(16384, Local_458.f_1333))
				{
					if (!func_342())
					{
						func_1043();
						func_232(16384, Local_458.f_1333);
					}
				}
			}
			else
			{
				func_1045(iVar0, iParam0);
			}
		}
		else
		{
			func_608(iVar0, iParam0);
		}
	}
	else
	{
		func_608(iVar0, iParam0);
	}
}

void func_783(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_158(Local_458.f_1333))
	{
		func_341(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_458.f_9 != joaat("POSSE_VERSUS") || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_158(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (GANG::_0x81FB74C83C2ED69F(iVar0))
			{
				func_608(iVar0, iParam0);
				if (!func_181(8192, Local_458.f_1333))
				{
					if (func_345(Global_1296859.f_15))
					{
						func_346(0, 0, 0);
						func_232(8192, Local_458.f_1333);
					}
				}
				if (!func_181(16384, Local_458.f_1333))
				{
					if (!func_342())
					{
						func_1043();
						func_232(16384, Local_458.f_1333);
					}
				}
			}
			else
			{
				func_1046(iVar0, iParam0, bParam1);
			}
		}
		else
		{
			func_608(iVar0, iParam0);
		}
	}
	else
	{
		func_608(iVar0, iParam0);
	}
}

char* func_784()
{
	return "RDRO_Countdown_Sounds";
}

char* func_785()
{
	return "Round_End_Timer";
}

char* func_786()
{
	return "10S";
}

char* func_787()
{
	return "Out_Of_Bounds";
}

char* func_788()
{
	return "target_spawn";
}

char* func_789()
{
	return "MP005_OBHELT_sounds";
}

char* func_790()
{
	return "match_start";
}

char* func_791()
{
	return "rdro_gamemode_generic_sounds";
}

var func_792(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	uVar20 = UIFEED::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

var func_793(char* sParam0, char[4] cParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = cParam1;
	uVar20 = UIFEED::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

int func_794(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return joaat("COLOR_NET_PLAYER3");
		case 1:
			return joaat("COLOR_NET_PLAYER4");
		case 2:
			return joaat("COLOR_NET_PLAYER5");
		case 3:
			return joaat("COLOR_NET_PLAYER6");
		case 4:
			return joaat("COLOR_NET_PLAYER7");
		case 5:
			return joaat("COLOR_NET_PLAYER8");
		case 6:
			return joaat("COLOR_NET_PLAYER9");
		case 7:
			return joaat("COLOR_NET_PLAYER10");
		case 8:
			return joaat("COLOR_NET_PLAYER11");
		default:
			break;
	}
	return joaat("COLOR_NET_PLAYER2");
}

int func_795(int iParam0)
{
	if (GANG::_0x901E0DC25080C8B9(iParam0) != Global_1296859.f_15 && !func_77())
	{
		return joaat("COLOR_POSSE_NEUTRAL");
	}
	return joaat("COLOR_POSSE_ALLY");
}

int func_796(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_1047(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1100469[iVar3 /*53*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947.f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947.f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947.f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947.f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947.f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947.f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_797(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1296859.f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1296859.f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1296859.f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_0x81FB74C83C2ED69F(iParam0))
	{
		return true;
	}
	return false;
}

bool func_798(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28349), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28350), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_829(iParam0))
	{
		return true;
	}
	return !func_797(iParam0, 0);
}

int func_799(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1048(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_800(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_801(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_802(var uParam0, int iParam1)
{
	uParam0->f_211[iParam1 /*23*/].f_14 = 255;
	uParam0->f_211[iParam1 /*23*/].f_5 = -1f;
	uParam0->f_211[iParam1 /*23*/].f_1 = -1f;
	uParam0->f_211[iParam1 /*23*/].f_2 = -1f;
}

void func_803(int iParam0)
{
	if (!func_1049(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21416.f_260), iParam0);
	}
}

var func_804(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = UIFEED::_0x8D1249BD28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

bool func_805(var uParam0, int iParam1)
{
	return func_605(*uParam0, iParam1);
}

void func_806(var uParam0, var uParam1, var uParam2)
{
	if (func_68(uParam2->f_51))
	{
		func_713(&(uParam2->f_46), &(uParam2->f_57));
	}
	func_1050(uParam0, uParam1, uParam2);
}

void func_807(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	if (func_158(Local_458.f_1333) && !func_814(&(uParam2->f_45), 256))
	{
		if (((!func_300() && !func_296(Local_458.f_1288)) && !func_62(255)) && CAM::IS_SCREEN_FADED_IN())
		{
			func_472(func_1051(joaat("STANDARD")));
			func_813(&(uParam2->f_45), 256);
		}
	}
	if (!func_814(&(uParam2->f_45), 4) && func_814(&(uParam2->f_45), 1))
	{
		if (!func_300())
		{
			func_472(func_1052(joaat("STANDARD")));
			func_813(&(uParam2->f_45), 4);
		}
	}
	if (*uParam0 != 2)
	{
		return;
	}
	bVar0 = func_1053();
	iVar1 = UIFEED::_0xC17F69E1418CD11F(3);
	if (*uParam1 >= (uParam2->f_67 - uParam2->f_68))
	{
		if (iVar1 == uParam2->f_65 && bVar0)
		{
			return;
		}
		UIFEED::_0x2F901291EF177B02(iVar1, 0);
		uParam2->f_65 = func_754(func_1054(uParam0->f_3, 1), -1, 0, 0, 1);
		return;
	}
	if (iVar1 == uParam2->f_64 && bVar0)
	{
		return;
	}
	UIFEED::_0x2F901291EF177B02(iVar1, 0);
	uParam2->f_64 = func_754(func_1054(uParam0->f_3, 0), -1, 0, 0, 1);
	return;
}

void func_808(int iParam0, var uParam1)
{
	struct<4> Var0;
	struct<25> Var32;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	Var32.f_3 = 255;
	Var32.f_4 = -1;
	Var32.f_5 = joaat("REL_NO_RELATIONSHIP");
	Var32.f_6.f_3 = 255;
	Var32.f_6.f_4 = -1;
	Var32.f_6.f_5 = joaat("REL_NO_RELATIONSHIP");
	Var32.f_12.f_3 = 255;
	Var32.f_12.f_4 = -1;
	Var32.f_12.f_5 = joaat("REL_NO_RELATIONSHIP");
	Var32.f_18.f_3 = 255;
	Var32.f_18.f_4 = -1;
	Var32.f_18.f_5 = joaat("REL_NO_RELATIONSHIP");
	Var32.f_24.f_3 = 255;
	Var32.f_24.f_4 = -1;
	Var32.f_24.f_5 = joaat("REL_NO_RELATIONSHIP");
	func_1055(&Var0, &Var32);
	if (!Var0.f_3)
	{
		return;
	}
	if (Var32.f_18 != 1)
	{
		return;
	}
	func_1056(&(uParam1->f_9), Var32.f_18.f_3);
}

void func_809(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if ((MISC::GET_GAME_TIMER() - uParam3->f_43) < 5000)
	{
		return;
	}
	if (func_382(Global_34))
	{
		iVar0 = func_1057(Global_34);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			bVar2 = true;
			iVar1 = func_1058(&(uParam3->f_9), iVar0);
			if (iVar1 == 255)
			{
			}
		}
	}
	fVar3 = 0f;
	if (bVar2)
	{
		if (func_1059(&(uParam3->f_5), iVar1, &(uParam3->f_42)))
		{
			fVar3 = uParam1->f_17;
			func_813(&(uParam3->f_45), 1);
			func_1061(func_1060(1, 0));
		}
		else
		{
			fVar3 = uParam1->f_16;
			func_1061(func_1060(1, 1));
		}
		*uParam2 = func_1062(*uParam2, fVar3, (uParam3->f_67 - uParam3->f_68));
		uParam3->f_59 = MISC::GET_GAME_TIMER();
		uParam3->f_43 = MISC::GET_GAME_TIMER();
		func_813(&(uParam3->f_45), 16);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(2023426995, uParam3->f_51);
		return;
	}
}

bool func_810(var uParam0, int iParam1)
{
	return func_605(*uParam0, iParam1);
}

void func_811(var uParam0, var uParam1)
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return;
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		return;
	}
	*uParam1 = func_1063(TASK::_GET_SCENARIO_POINT_COORDS(*uParam0, true), 5f, 5f, 5f);
}

void func_812(var uParam0)
{
	if (!PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		return;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, false);
}

void func_813(var uParam0, int iParam1)
{
	func_483(uParam0, iParam1);
}

bool func_814(var uParam0, int iParam1)
{
	return func_605(*uParam0, iParam1);
}

void func_815(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_816(uParam0->f_9);
	iVar1 = 0;
	while (iVar1 <= ((func_688(uParam0->f_9) - iVar2) - 1))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_18[(iVar2 + iVar1)]))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_OBJ(uParam0->f_18[(iVar2 + iVar1)]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
			}
			else
			{
				OBJECT::DELETE_OBJECT(&iVar0);
			}
		}
		iVar1++;
	}
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			return 2;
		default:
			break;
	}
	return 0;
}

int func_817(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			switch (iParam1)
			{
				case joaat("TH_HRT_CHEST"):
					return 0;
				case joaat("TH_HRT_ROCKS"):
					return 0;
				case 528696119:
					return joaat("LOOT1");
				case -849305869:
					return joaat("LOOT3");
				case joaat("TH_HRT_MAP"):
					return joaat("MAP");
				default:
					break;
			}
			return 0;
		}

bool func_818(var uParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_68(vParam2))
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam1))
	{
		*uParam1 = TASK::CREATE_SCENARIO_POINT(joaat("MP_FME_TH_ROCK_PILE_NO_PROPS"), vParam2, 0, 0, 0, 1);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam1))
	{
		return false;
	}
	TASK::_SET_SCENARIO_POINT_HEADING(*uParam1, *uParam5, true);
	iVar0 = func_688(*uParam6);
	iVar3 = 0;
	while (iVar3 <= (iVar0 - 1))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar3]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_ENT((*uParam0)[iVar3]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				iVar2 = func_689(*uParam6, iVar3);
				TASK::_0x8360C47380B6F351(*uParam1, iVar1, func_1064(*uParam6, iVar2), 0);
				if (iVar3 > func_816(*uParam6))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
				}
			}
		}
		iVar3++;
	}
	return true;
}

void func_819(var uParam0, int iParam1)
{
	func_483(uParam0, iParam1);
}

void func_820(int iParam0)
{
	if (!func_814(&(iParam0->f_45), 16))
	{
		return;
	}
	MAP::_0x9C113883487FD53C(-1943724816, 0);
	if (iParam0->f_59 > (MISC::GET_GAME_TIMER() - 5000))
	{
		func_1065(&(iParam0->f_45), 16);
	}
}

void func_821(var uParam0, int iParam1)
{
	int iVar0;

	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam1->f_60))
	{
		return;
	}
	iVar0 = TASK::_GET_PED_USING_SCENARIO_POINT(iParam1->f_60);
	if (iVar0 == PLAYER::GET_PLAYER_PED(iParam1->f_62))
	{
		func_819(&(uParam0->f_2), 4);
	}
}

void func_822(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(*uParam1);
	if (iVar0 == *uParam2)
	{
		*uParam1 = func_1066(*uParam1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		*uParam1 = func_1066(*uParam1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		*uParam1 = func_1066(*uParam1);
		return;
	}
	if (GANG::_0x81FB74C83C2ED69F(iVar0))
	{
		func_867(iVar0);
	}
	else
	{
		func_1067(iVar0);
		SCRIPTS::_0x31010318BA9897AC(uParam0, *uParam1);
	}
	*uParam1 = func_1066(*uParam1);
}

void func_823()
{
	if (MISC::IS_BIT_SET(Global_1958009, 4))
	{
	}
	else
	{
		MISC::SET_BIT(&Global_1958009, 0);
	}
}

void func_824()
{
	if (func_550(2))
	{
	}
	else
	{
		func_551(8);
	}
}

int func_825()
{
	if (func_302())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (func_639())
			{
				func_640();
				func_641();
				func_642();
			}
			else if (func_643(Global_34, 0, 0, 0) == joaat("WEAPON_FISHINGROD"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

int func_826()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (func_643(Global_34, 0, 0, 1) == joaat("WEAPON_KIT_CAMERA") || func_643(Global_34, 0, 0, 1) == joaat("WEAPON_KIT_CAMERA_ADVANCED"))
		{
			func_1068(0);
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(func_643(Global_34, 0, 0, 1)))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
	}
	return 1;
}

char* func_827(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_169(40, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1102219.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102219.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1296859.f_22[iParam0])
	{
		return sVar0;
	}
	if (func_169(40, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1100469[iParam0 /*53*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1100469[iParam0 /*53*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1296859.f_154[iParam0]);
}

bool func_828(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_829(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_830(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_831(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_1069(iParam0);
		return false;
	}
	if (func_830(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 2)
		{
			func_1070(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1296859.f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 2);
}

int func_832(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_950 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		if (!func_605(iParam2, 8))
		{
			bVar0 = func_605(iParam2, 128);
			func_1071(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_605(iParam2, 4))
		{
			func_1072(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_833(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12[8];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	bVar0 = func_605(iParam2, 8);
	bVar1 = func_605(iParam2, 128);
	bVar2 = func_605(iParam2, 1024);
	bVar3 = func_605(iParam2, 4096);
	bVar4 = func_605(iParam2, 8192);
	bVar5 = func_605(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = PLAYER::PLAYER_ID();
	if (bVar3)
	{
		if (uParam0->f_950 != MISC::_SHOULD_USE_METRIC_WEIGHT())
		{
			func_278(uParam0);
			func_279(uParam0);
			uParam0->f_950 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_950 != MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2())
		{
			func_278(uParam0);
			func_279(uParam0);
			uParam0->f_950 = MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		}
	}
	if (uParam0->f_949 || uParam0->f_948)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if (uParam0->f_211[iVar11 /*23*/].f_14 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_211[iVar11 /*23*/].f_14))
			{
				if (bVar6)
				{
					iVar9 = uParam0->f_211[iVar11 /*23*/];
					if (iVar9 == PLAYER::GET_PLAYER_TEAM(iVar22))
					{
						fVar7 = (*uParam1)[iVar9];
					}
					else if ((*uParam1)[iVar9] > fVar8)
					{
						fVar8 = (*uParam1)[iVar9];
					}
				}
				else if (uParam0->f_211[iVar11 /*23*/].f_14 == PLAYER::PLAYER_ID())
				{
					fVar7 = uParam0->f_211[iVar11 /*23*/].f_5;
				}
				else if (!bVar10)
				{
					fVar8 = uParam0->f_211[iVar11 /*23*/].f_5;
					bVar10 = true;
				}
				StringCopy(&(uParam0->f_211[iVar11 /*23*/].f_14.f_1), PLAYER::GET_PLAYER_NAME(uParam0->f_211[iVar11 /*23*/].f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_1073(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_949);
		}
		if (uParam0->f_948)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_211[iVar24 /*23*/].f_14 == PLAYER::PLAYER_ID())
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_1074(&(uParam0->f_11), &(uParam0->f_211), PLAYER::GET_PLAYER_TEAM(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_948 = 0;
		}
	}
	if (bVar5)
	{
		MISC::SET_BIT(&(uParam0->f_11.f_158), 18);
	}
	if (!func_605(iParam2, 4))
	{
		func_1075(&(uParam0->f_11), &(uParam0->f_211), &iVar22, uParam0->f_949, &iVar12, bVar6, 0, 0);
		uParam0->f_949 = 0;
	}
}

int func_834(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((uParam1[0 /*34*/])->f_21 == 0)
	{
		func_1076(uParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1076(uParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1076(uParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1076(uParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1076(uParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1076(uParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1076(uParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

void func_835(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;

	func_1077(iParam1, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = MISC::IS_BIT_SET(iParam5, iVar0);
		bVar9 = MISC::IS_BIT_SET(iParam6, iVar0);
		func_1078(uParam0, iVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

bool func_836()
{
	return true;
}

int func_837(int iParam0, int iParam1)
{
	int iVar0;

	if (func_470())
	{
		if (iParam1 == 0)
		{
			iVar0 = -1455480431;
		}
		else
		{
			iVar0 = -1109114584;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 655389023;
				break;
			case 1:
				iVar0 = 1019649227;
				break;
			case 2:
				iVar0 = 1260992912;
				break;
			case 3:
				iVar0 = -536255662;
				break;
			case 4:
				iVar0 = -1127015194;
				break;
			case 5:
				iVar0 = 57485849;
				break;
			case 6:
				iVar0 = -774781213;
				break;
			case 7:
				iVar0 = -1840855094;
				break;
			case 8:
				iVar0 = -1619762651;
				break;
			case 9:
				iVar0 = -275856840;
				break;
			case 10:
				iVar0 = 215350470;
				break;
			case 11:
				iVar0 = -620553951;
				break;
			case 12:
				iVar0 = -328156164;
				break;
			case 13:
				iVar0 = -1231466418;
				break;
			case 14:
				iVar0 = -431706200;
				break;
			case 15:
				iVar0 = -1333836770;
				break;
			case 16:
				iVar0 = -1047402941;
				break;
			case 17:
				iVar0 = -1882979672;
				break;
			case 18:
				iVar0 = -1387053626;
				break;
			case 19:
				iVar0 = -126757306;
				break;
			case 20:
				iVar0 = 112423625;
				break;
			case 21:
				iVar0 = -586342531;
				break;
			case 22:
				iVar0 = -318128266;
				break;
			case 23:
				iVar0 = 993582035;
				break;
			case 24:
				iVar0 = 1031725151;
				break;
			case 25:
				iVar0 = 333745451;
				break;
			case 26:
				iVar0 = 1127607177;
				break;
			case 27:
				iVar0 = 293013516;
				break;
			case 28:
				iVar0 = 601533651;
				break;
			case 29:
				iVar0 = 675034810;
				break;
			case 30:
				iVar0 = -75703208;
				break;
			case 31:
				iVar0 = -1516162910;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_838(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (GANG::_0xD6F6ACF4392187FB(iVar1) && GANG::_0x149A2751AB66AC02(iVar1) >= 2)
	{
		iVar0 = -849580004;
	}
	else
	{
		iVar0 = -1481994377;
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_839(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_161(&uParam1))
	{
		iVar2 = func_191(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_636(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = -1872051906;
			break;
		case 1:
			iVar0 = -1500385908;
			break;
		case 2:
			iVar0 = 1941932008;
			break;
		case 3:
			iVar0 = -2122898601;
			break;
		case 4:
			iVar0 = 1281472813;
			break;
		case 5:
			iVar0 = 1646781625;
			break;
		case 6:
			iVar0 = 714864034;
			break;
		case 7:
			iVar0 = 947753317;
			break;
		case 8:
			iVar0 = 122171131;
			break;
		case 9:
			iVar0 = 351980128;
			break;
		case 10:
			iVar0 = -1855497387;
			break;
		case 11:
			iVar0 = 2006853571;
			break;
		case 12:
			iVar0 = 745345378;
			break;
		case 13:
			iVar0 = -1556611338;
			break;
		case 14:
			iVar0 = 600768562;
			break;
		case 15:
			iVar0 = -1685459034;
			break;
		case 16:
			iVar0 = 1352522191;
			break;
		case 17:
			iVar0 = 911910217;
			break;
		case 18:
			iVar0 = -483131655;
			break;
		case 19:
			iVar0 = -789489036;
			break;
		case 20:
			iVar0 = -748172699;
			break;
		case 21:
			iVar0 = 103067614;
			break;
		case 22:
			iVar0 = -281116142;
			break;
		case 23:
			iVar0 = 562587301;
			break;
		case 24:
			iVar0 = 1303756567;
			break;
		case 25:
			iVar0 = 928027213;
			break;
		case 26:
			iVar0 = 1747874824;
			break;
		case 27:
			iVar0 = 1407470452;
			break;
		case 28:
			iVar0 = 1706094329;
			break;
		case 29:
			iVar0 = 1339147067;
			break;
		case 30:
			iVar0 = -1631493579;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_840(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if ((func_36(&Var1, Local_458.f_1) && func_37(&Var1)) && func_38(&Var1, Local_458.f_3))
	{
		if (func_40(Var1, -75980337, &uVar6, 0))
		{
			iVar0 = uVar6;
		}
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	else if (Local_458.f_9 != joaat("POSSE_VERSUS"))
	{
	}
	return 0;
}

int func_841(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_1080(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

int func_842()
{
	int iVar0;

	if (Local_215.f_14 == 0)
	{
		return func_193(2);
	}
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(Local_215.f_15) / BUILTIN::TO_FLOAT(Local_215.f_14)));
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	else if (iVar0 > 32)
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_843(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -531721699;
			break;
		case 3:
			iVar0 = -205801225;
			break;
		case 4:
			iVar0 = 82926434;
			break;
		case 5:
			iVar0 = -1518330831;
			break;
		case 6:
			iVar0 = -1825441899;
			break;
		case 7:
			iVar0 = -2114300634;
			break;
		case 8:
			iVar0 = 1874374819;
			break;
		case 9:
			iVar0 = -562721249;
			break;
		case 10:
			iVar0 = -393525148;
			break;
		case 11:
			iVar0 = -799991824;
			break;
		case 12:
			iVar0 = -1968206678;
			break;
		case 13:
			iVar0 = -124786579;
			break;
		case 14:
			iVar0 = -1489812047;
			break;
		case 15:
			iVar0 = -1796759270;
			break;
		case 16:
			iVar0 = 1936350748;
			break;
		case 17:
			iVar0 = 1461200248;
			break;
		case 18:
			iVar0 = 267982647;
			break;
		case 19:
			iVar0 = 2106487396;
			break;
		case 20:
			iVar0 = 1385930779;
			break;
		case 21:
			iVar0 = 1364762005;
			break;
		case 22:
			iVar0 = -1236703371;
			break;
		case 23:
			iVar0 = -1526020872;
			break;
		case 24:
			iVar0 = -1713000786;
			break;
		case 25:
			iVar0 = -2019554781;
			break;
		case 26:
			iVar0 = -847604265;
			break;
		case 27:
			iVar0 = -81759966;
			break;
		case 28:
			iVar0 = -790684508;
			break;
		case 29:
			iVar0 = -22677455;
			break;
		case 30:
			iVar0 = 949545730;
			break;
		case 31:
			iVar0 = 720785341;
			break;
		case 32:
			iVar0 = 519387067;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_844(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_161(&uParam1))
	{
		iVar2 = func_191(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_636(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = 358499753;
			break;
		case 1:
			iVar0 = 1552831472;
			break;
		case 2:
			iVar0 = -120419182;
			break;
		case 3:
			iVar0 = 913639430;
			break;
		case 4:
			iVar0 = 1152853130;
			break;
		case 5:
			iVar0 = 191312355;
			break;
		case 6:
			iVar0 = 1765469585;
			break;
		case 7:
			iVar0 = 769947357;
			break;
		case 8:
			iVar0 = -73297320;
			break;
		case 9:
			iVar0 = -765444138;
			break;
		case 10:
			iVar0 = -509454489;
			break;
		case 11:
			iVar0 = -720355773;
			break;
		case 12:
			iVar0 = -1018389828;
			break;
		case 13:
			iVar0 = -146537754;
			break;
		case 14:
			iVar0 = 686548533;
			break;
		case 15:
			iVar0 = 1576456266;
			break;
		case 16:
			iVar0 = 197667822;
			break;
		case 17:
			iVar0 = 1117395345;
			break;
		case 18:
			iVar0 = 1953955146;
			break;
		case 19:
			iVar0 = -1457494368;
			break;
		case 20:
			iVar0 = 864221171;
			break;
		case 21:
			iVar0 = -1985403838;
			break;
		case 22:
			iVar0 = -1746157369;
			break;
		case 23:
			iVar0 = 1846570253;
			break;
		case 24:
			iVar0 = 2086930872;
			break;
		case 25:
			iVar0 = -567915205;
			break;
		case 26:
			iVar0 = -328996426;
			break;
		case 27:
			iVar0 = -1299089902;
			break;
		case 28:
			iVar0 = -1056697609;
			break;
		case 29:
			iVar0 = 658366309;
			break;
		case 30:
			iVar0 = 825941725;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_845(int iParam0)
{
	int iVar0;

	if (func_470())
	{
		iVar0 = -1633060422;
	}
	else
	{
		iVar0 = -794388871;
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_846(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		iVar0 = 2035179919;
	}
	else
	{
		iVar0 = 815649725;
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!GANG::_0xD6F6ACF4392187FB(iVar1))
	{
		iVar0 = 1549099924;
	}
	else
	{
		iVar2 = GANG::_0x149A2751AB66AC02(iVar1);
		switch (iVar2)
		{
			case 1:
				iVar0 = 1549099924;
				break;
			case 2:
				iVar0 = -173468095;
				break;
			case 3:
				iVar0 = 133642973;
				break;
			case 4:
				iVar0 = -1086838432;
				break;
			case 5:
				iVar0 = 290147717;
				break;
			case 6:
				iVar0 = -624566149;
				break;
			case 7:
				iVar0 = -1392573202;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1079(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_848(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_161(&uParam0))
	{
		iVar1 = func_191(&uParam0);
		iVar0 = BUILTIN::FLOOR(func_636(((BUILTIN::TO_FLOAT(iVar1) / 1000f) / 60f), 0f, 30f));
	}
	iVar2 = 0;
	if (iVar0 < 3)
	{
		iVar2 = 0;
	}
	else if (iVar0 < 6)
	{
		iVar2 = -2125467258;
	}
	else if (iVar0 < 9)
	{
		iVar2 = -663248944;
	}
	else if (iVar0 < 12)
	{
		iVar2 = -613374526;
	}
	else if (iVar0 < 15)
	{
		iVar2 = 1035797597;
	}
	else if (iVar0 < 20)
	{
		iVar2 = -1335170629;
	}
	else if (iVar0 < 25)
	{
		iVar2 = 1620069667;
	}
	else if (iVar0 < 30)
	{
		iVar2 = -209226873;
	}
	else
	{
		iVar2 = 110270613;
	}
	return iVar2;
}

int func_849()
{
	return 0;
}

void func_850(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
}

void func_851(var uParam0)
{
	int iVar0;
	var uVar1;

	if ((*uParam0)[0 /*5*/] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*uParam0)[iVar0 /*5*/]);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar0 /*5*/])->f_1);
			iVar0++;
		}
		uVar1 = 2;
		MISC::_COPY_MEMORY(uParam0, &uVar1, 11);
	}
}

void func_852(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_APP_BY_HASH(joaat("LEADERBOARDS"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_143[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_143[iVar0]);
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_1081(&(uParam0->f_162));
	}
	func_508(0);
}

char* func_853()
{
	return "match_end";
}

char* func_854()
{
	return "RDRO_Adversary_Sounds";
}

var func_855(char* sParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = sParam2;
	Var0.f_2 = sParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = UIFEED::_0x860DDFE97CC94DF0(&Var0, &Var13, iParam5);
	return uVar20;
}

Vector3 func_856(vector3 vParam0)
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

int func_857(int iParam0)
{
	struct<2> Var0;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_858(int iParam0)
{
	return func_596(iParam0, 2);
}

void func_859()
{
	if (!func_169(132, 255))
	{
		return;
	}
}

void func_860(int iParam0, bool bParam1)
{
	if (!func_932(32))
	{
		return;
	}
	func_679(33, Global_1139381.f_4779.f_4, 0, 0, 0);
	func_1082(32);
	func_1083();
	Global_1139381.f_4779.f_4 = 0;
	Global_1139381.f_4779 = 0;
	func_937(&(Global_1952637.f_2365));
	func_935(&(Global_1952637.f_2365));
	func_1084(4);
	if (bParam1)
	{
		func_1085(iParam0, 1, 1, 0);
	}
	func_679(27, 0, 131074, 0, 0);
	func_679(34, 0, 131072, 0, 0);
}

void func_861()
{
	func_1086();
	func_1087();
}

void func_862(float fParam0)
{
	Global_1956200.f_1561.f_3 = fParam0;
}

struct<12> func_863()
{
	struct<12> Var0;
	int iVar12;
	int iVar13;

	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	iVar12 = PLAYER::PLAYER_PED_ID();
	iVar13 = PLAYER::PLAYER_ID();
	switch (Global_1956200.f_1565.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1956200.f_1565.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1956200.f_1565.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1956200.f_1565.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1956200.f_1565.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1956200.f_1565.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1956200.f_1565.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = ENTITY::GET_ENTITY_HEALTH(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = PED::_GET_PED_STAMINA(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = PLAYER::_0xA81D24AE0AF99A5E(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1088(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1088(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1088(2, 2);
			break;
	}
	return Var0;
}

void func_864()
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;

	uVar0 = func_1089(joaat("DIST"), joaat("SPRINTING"));
	Global_1956200.f_1431.f_74.f_2 = uVar0;
	uVar1 = func_1089(joaat("TIME"), joaat("SWIMMING_NOT_DROWNING"));
	Global_1956200.f_1431.f_74.f_3 = uVar1;
	fVar2 = func_1089(joaat("DIST_DRIVING_TYPE"), joaat("ROWINGBOAT"));
	fVar3 = func_1089(joaat("DIST_DRIVING_TYPE"), joaat("CANOE"));
	Global_1956200.f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_1090(joaat("HATSHOTS"));
	Global_1956200.f_1431.f_74.f_5 = uVar4;
}

void func_865()
{
	MISC::_0xD2D74F89DF844A50(&(Global_1956200.f_1565));
}

void func_866()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return;
	}
	WEAPON::_0xC395355843BE134B(Global_34);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, false, 0, true))
	{
		if ((((iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0)) || iVar0 == joaat("WEAPON_KIT_CAMERA")) || iVar0 == joaat("WEAPON_KIT_CAMERA_ADVANCED")) || iVar0 == joaat("WEAPON_KIT_DETECTOR"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
	}
}

void func_867(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28345), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28345), iParam0);
		if (func_831(iParam0))
		{
			func_1069(iParam0);
		}
	}
}

void func_868(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21689.f_259), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_21689.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21689.f_259), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_21689.f_259), iParam0);
		func_803(iParam0);
	}
}

void func_869(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_28346), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28346), iParam0);
		if (func_975(iParam0))
		{
			func_1069(iParam0);
		}
	}
}

void func_870(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
}

void func_871(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28348), iParam0);
}

struct<7> func_872()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

bool func_873(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_874(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 6, &uVar0);
}

void func_875(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_1091(91));
	if (func_590(iVar0))
	{
		UIFEED::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_876(int iParam0)
{
	Global_1940311.f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1940311.f_242.f_1186), 0));
}

int func_877(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1071686.f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1048(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686.f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1048(Global_1071686.f_19550.f_1[iVar8 /*3*/], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_878(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1048(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_879()
{
	return !Global_1572887.f_9;
}

void func_880(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_881(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("UNLOCK_GROUP__MISSION_STORY");
		case 3:
			return joaat("UNLOCK_GROUP__MISSION_PROCEDURAL");
		case 4:
			return joaat("UNLOCK_GROUP__MISSION_FETCH");
		case 5:
			return joaat("UNLOCK_GROUP__MISSION_MINIGAME");
		case 8:
			return 634321112;
		case 7:
			return joaat("UNLOCK_GROUP__MISSION_UGC");
		case 6:
			return joaat("UNLOCK_GROUP__MISSION_FREE_MODE_EVENT");
		default:
			break;
	}
	return 0;
}

void func_882(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = GANG::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_630(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1092(func_799(Param0));
			iVar5 = func_1093(iVar4);
			if (!func_1094(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107216.f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0 /*42*/];
}

int func_883(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_877(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1095(iVar0);
}

int func_884(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1071686.f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1048(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686.f_19550 == 0)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686.f_19550)
	{
		func_1048(Global_1071686.f_19550.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1096(iVar9);
			Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686.f_19550 < 31)
	{
		iVar9 = Global_1071686.f_19550;
		Global_1071686.f_19550.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1071686.f_19550++;
		if (Global_1071686.f_19550 > 32)
		{
			Global_1071686.f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_885()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (func_1048(Global_1071686.f_19550.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_886(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CRIME_ARSON");
		case 1:
			return joaat("CRIME_ASSAULT");
		case 2:
			return joaat("CRIME_ASSAULT_ANIMAL");
		case 3:
			return joaat("CRIME_ASSAULT_CORPSE");
		case 4:
			return joaat("CRIME_ASSAULT_HORSE");
		case 5:
			return joaat("CRIME_ASSAULT_LAW");
		case 6:
			return joaat("CRIME_ASSAULT_LIVESTOCK");
		case 7:
			return joaat("CRIME_BANK_ROBBERY");
		case 8:
			return joaat("CRIME_BURGLARY");
		case 9:
			return joaat("CRIME_CHEATING");
		case 10:
			return joaat("CRIME_DISTURBANCE");
		case 11:
			return joaat("CRIME_EXPLOSION");
		case 12:
			return joaat("CRIME_GRAVE_ROBBERY");
		case 13:
			return joaat("CRIME_HASSLE");
		case 14:
			return joaat("CRIME_HIT_AND_RUN");
		case 15:
			return joaat("CRIME_HIT_AND_RUN_LAW");
		case 16:
			return joaat("CRIME_INTIMIDATION");
		case 17:
			return joaat("CRIME_JACK_HORSE");
		case 18:
			return joaat("CRIME_JACK_VEHICLE");
		case 19:
			return joaat("CRIME_JAIL_BREAK");
		case 20:
			return joaat("CRIME_KIDNAPPING");
		case 21:
			return joaat("CRIME_KIDNAPPING_LAW");
		case 22:
			return joaat("CRIME_LASSO_ASSAULT");
		case 23:
			return joaat("CRIME_LAW_IS_THREATENED");
		case 24:
			return joaat("CRIME_LOITERING");
		case 25:
			return joaat("CRIME_LOOTING");
		case 26:
			return joaat("CRIME_MURDER");
		case 27:
			return joaat("CRIME_MURDER_ANIMAL");
		case 28:
			return joaat("CRIME_MURDER_HORSE");
		case 29:
			return joaat("CRIME_MURDER_LAW");
		case 30:
			return joaat("CRIME_MURDER_LIVESTOCK");
		case 31:
			return joaat("CRIME_PROPERTY_DESTRUCTION");
		case 32:
			return joaat("CRIME_RESIST_ARREST");
		case 33:
			return joaat("CRIME_ROBBERY");
		case 34:
			return joaat("CRIME_STAGECOACH_ROBBERY");
		case 35:
			return joaat("CRIME_STOLEN_GOODS");
		case 36:
			return joaat("CRIME_THEFT");
		case 37:
			return joaat("CRIME_THEFT_HORSE");
		case 38:
			return joaat("CRIME_THEFT_LIVESTOCK");
		case 39:
			return joaat("CRIME_THEFT_VEHICLE");
		case 40:
			return joaat("CRIME_THREATEN");
		case 41:
			return joaat("CRIME_THREATEN_LAW");
		case 42:
			return joaat("CRIME_TRAIN_ROBBERY");
		case 43:
			return joaat("CRIME_TRAMPLE");
		case 44:
			return joaat("CRIME_TRAMPLE_LAW");
		case 45:
			return joaat("CRIME_TRESPASSING");
		case 46:
			return joaat("CRIME_UNARMED_ASSAULT");
		case 47:
			return joaat("CRIME_VANDALISM");
		case 48:
			return joaat("CRIME_VANDALISM_VEHICLE");
		case 49:
			return joaat("CRIME_VEHICLE_DESTRUCTION");
		case 50:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_HIGH");
		case 51:
			return joaat("CRIME_WANTED_LEVEL_UP_DEBUG_LOW");
		case 52:
			return joaat("CRIME_ACCOMPLICE");
		case 53:
			return joaat("CRIME_EXPLOSION_POISON");
		case 54:
			return joaat("CRIME_MURDER_PLAYER");
		case 55:
			return joaat("CRIME_MURDER_PLAYER_HORSE");
		case 56:
			return joaat("CRIME_SELF_DEFENCE");
		case 57:
			return joaat("CRIME_TRAMPLE_PLAYER");
		case 58:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_887(char[12] cParam0)
{
	Global_1939161.f_75.f_67 = { cParam0 };
}

void func_888()
{
	StringCopy(&(Global_1939161.f_75.f_67), "", 24);
}

bool func_889(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1097(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1098(iVar1))
	{
		if (Global_1071686.f_19648.f_24 && !func_1099(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1071686.f_19648[iVar1], iVar2) || MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_39.f_110[iVar1], iVar2);
}

int func_890(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(Global_1900736.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_891(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736.f_66 == 1)
	{
		Global_1900736.f_66 = 0;
		func_1100(&(Global_1900736.f_1[0 /*2*/]));
		return 1;
	}
	func_1100(&(Global_1900736.f_1[iParam0 /*2*/]));
	Global_1900736.f_66 = (Global_1900736.f_66 - 1);
	func_1101(iParam0, Global_1900736.f_66);
	return 1;
}

int func_892(struct<2> Param0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (func_74(Global_1196205[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_893(int iParam0, var uParam1)
{
	func_1102(uParam1, iParam0);
	if (Global_1196205.f_129 > 0)
	{
		if (Global_1196205.f_130 == iParam0)
		{
			func_1103(0);
		}
	}
	func_1104();
}

void func_894(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_895()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_898(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_899(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

bool func_900()
{
	return Global_1903071.f_5 == 6;
}

void func_901(int iParam0)
{
	if (!func_1105(iParam0))
	{
		func_149(&(Global_1903071.f_2), iParam0);
	}
}

bool func_902()
{
	return Global_1903071.f_5 == 7;
}

bool func_903()
{
	return Global_1903071.f_5 == 12;
}

void func_904(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_646() - fParam1);
	func_412(uParam0, 1);
	func_413(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_905(var uParam0, int iParam1)
{
}

void func_906(var uParam0)
{
	struct<16> Var0;

	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_907(var uParam0)
{
	struct<5> Var0;

	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_908(var uParam0)
{
	var uVar0;

	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_909(var uParam0)
{
	vector3 vVar0;

	vVar0 = 1;
	vVar0.f_1 = -1082130432;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_910(var uParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_911(var uParam0)
{
	struct<4> Var0;

	*uParam0 = { Var0 };
}

void func_912(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_913(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_914(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_915()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1956200.f_1565.f_117.f_13 = BUILTIN::FLOOR(PLAYER::_GET_PLAYER_HEALTH(iVar0));
	Global_1956200.f_1565.f_117.f_14 = PLAYER::_0xDF66A37936D5F3D9(iVar0);
	Global_1956200.f_1565.f_117.f_15 = PLAYER::_GET_PLAYER_STAMINA(iVar0);
}

void func_916()
{
	Global_1956200.f_1565.f_117.f_16 = func_1088(0, 2);
	Global_1956200.f_1565.f_117.f_17 = func_1088(1, 2);
	Global_1956200.f_1565.f_117.f_18 = func_1088(2, 2);
}

bool func_917(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_1106(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_1107(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1108(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1109(&Var45, &Var0, 0))
				{
					if (func_1110(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_1111(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_1111(iVar43);
	}
	return false;
}

struct<4> func_918()
{
	return Global_1291734.f_11.f_310;
}

bool func_919()
{
	return Global_1291734.f_11.f_318 > Global_1296859.f_21;
}

void func_920(var uParam0, bool bParam1)
{
	Global_1291734.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734.f_11.f_318 = Global_1296859.f_21 + 10;
	}
}

int func_921(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_1112(iParam0);
	bVar1 = func_16(func_1113(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_922(int iParam0)
{
	return func_1114(&(Global_3145858.f_6), iParam0);
}

int func_923(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_924()
{
	struct<4> Var0;

	return Var0;
}

bool func_925(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_1106(0, -1591664384, -1591664384, -1591664384, joaat("CI_CATEGORY_HORSE"), 0, 0) };
	if (func_1107(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1108(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1109(&Var45, &Var0, 0))
				{
					if (func_1110(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_1111(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_1111(iVar43);
	}
	return false;
}

struct<4> func_926(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_1115("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1108(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_1111(iVar0);
	return Var2;
}

bool func_927(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_1116(&Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1117(uParam0, &Global_1904087, &(Global_1904087.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1118(uParam0, &Global_1904087, &(Global_1904087.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_928(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (uParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_929(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_1119(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

void func_930(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1120(uParam0[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_931(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_932(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_933(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1952637.f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1952637.f_1675.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_934(var uParam0)
{
	struct<4> Var0;

	Var0 = func_1121(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	return DATAFILE::_0xED4413CEE1BF142C(&Var0);
}

void func_935(var uParam0)
{
	int iVar0;

	Global_1952637.f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1556.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_936(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_1121(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1123(uParam0, func_1122(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1124(-1);
		}
		if (DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1122(iVar0);
		}
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1125(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_1126(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1127(iVar3) && func_1128(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1130(uParam0, iVar11, func_1129(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[iVar1 /*3*/] == Global_1952637.f_83[iVar1 /*12*/]) && func_1129(uParam0->f_1[34 /*3*/]) == 0) && !func_932(32)) && !func_932(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_1132(-1293064293, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
						func_1133(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_937(var uParam0)
{
	int iVar0;

	Global_1952637.f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1952637.f_1675.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_938(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2)
	{
		iParam1 = func_946(1);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = Global_1956200.f_1431.f_50[iParam0];
			break;
		case 1:
			iVar0 = Global_1956200.f_1565.f_2.f_50[iParam0];
			break;
	}
	return iVar0 + 4;
}

int func_939(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_946(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546;
		case 1:
			return Global_1956200.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

int func_940(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_946(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_1;
		case 1:
			return Global_1956200.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

int func_941(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_946(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200.f_1546.f_2;
		case 1:
			return Global_1956200.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_942()
{
	MISC::_COPY_MEMORY(&(Global_1956200.f_1565.f_2), &(Global_1956200.f_1431), 115);
	Global_1956200.f_1565.f_2.f_6[0 /*3*/] = func_1088(0, 0);
	Global_1956200.f_1565.f_2.f_6[0 /*3*/].f_2 = 0;
	Global_1956200.f_1565.f_2.f_6[0 /*3*/].f_1 = -15;
	Global_1956200.f_1565.f_2.f_6[1 /*3*/] = func_1088(1, 0);
	Global_1956200.f_1565.f_2.f_6[1 /*3*/].f_2 = 0;
	Global_1956200.f_1565.f_2.f_6[1 /*3*/].f_1 = -15;
	Global_1956200.f_1565.f_2.f_6[2 /*3*/] = func_1088(2, 0);
	Global_1956200.f_1565.f_2.f_6[2 /*3*/].f_2 = 0;
	Global_1956200.f_1565.f_2.f_6[2 /*3*/].f_1 = -15;
}

void func_943(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(Global_1296859.f_8) != 3)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_1134(iParam0);
	iVar1 = func_1135(iVar0, func_677(0), -1311702610, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_399(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1136(iVar0, iVar3, -142743235, 0, 0);
	}
}

int func_944(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

void func_945(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(Global_1296859.f_8) != 3)
	{
		return;
	}
	iVar0 = func_1137(iParam0);
	iVar1 = func_1135(iVar0, func_677(0), joaat("SLOTID_PROGRESSION"), 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_399(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1136(iVar0, iVar3, -142743235, 0, 0);
	}
	func_1138(iParam0, BUILTIN::TO_FLOAT(iParam1), 1);
}

int func_946(int iParam0)
{
	return func_1139(func_394(iParam0));
}

float func_947(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_946(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_26[iParam0];
		case 1:
			return Global_1956200.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

bool func_948(int iParam0, int iParam1)
{
	return func_1141(func_1140(iParam0), iParam1);
}

void func_949()
{
	func_1142(0);
	func_1142(1);
	func_1142(2);
	func_1142(3);
}

void func_950()
{
	func_1143(0);
	func_1143(1);
	func_1143(2);
	func_1143(3);
}

void func_951()
{
	if (func_1144(2))
	{
		func_1145(0);
	}
	else
	{
		func_1145(1);
	}
	func_1146(1);
	PLAYER::_0x7146CF430965927C(15, true);
	PLAYER::_0x7146CF430965927C(16, true);
}

void func_952()
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_947(iVar1, 2);
		func_1138(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_953(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_939(2);
	iVar2 = iVar0;
	iVar3 = -1;
	if (func_1147())
	{
		func_1148(iParam1);
		return;
	}
	PED::_0x7FF72DE061DF55E2(iParam1, 0, BUILTIN::TO_FLOAT(iVar0));
	if (func_23() == 0)
	{
		iVar1 = BUILTIN::ROUND(PED::_0x89BFDF6D53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, true);
			func_1149(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1149(iVar3, 0);
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, true);
				func_1149(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_954(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (func_1147())
	{
		return;
	}
	iVar0 = func_941(2);
	fVar1 = -1f;
	PED::_0x7FF72DE061DF55E2(iParam1, 1, BUILTIN::TO_FLOAT(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = PED::_GET_PED_MAX_STAMINA(iParam1);
			func_1150(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1150(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1150(fVar1, 0);
			}
			else
			{
				fVar1 = PED::_GET_PED_MAX_STAMINA(iParam1);
				func_1150(fVar1, 0);
			}
			break;
	}
}

void func_955(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (func_1147())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_940(2);
	fVar2 = -1f;
	PED::_0x7FF72DE061DF55E2(iParam1, 2, BUILTIN::TO_FLOAT(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1152(func_1151());
			break;
		case 0:
			fVar2 = PLAYER::_0x029884FB65821B07(iVar0);
			func_1152(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1152(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1152(fVar2);
			}
			else
			{
				fVar2 = PLAYER::_0x029884FB65821B07(iVar0);
				func_1152(fVar2);
			}
			break;
	}
	func_862(0f);
}

void func_956(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1153(iVar1))
		{
			iVar2 = func_1154(iVar1);
			fVar0 = func_1155(uParam0, iVar2);
			func_1156(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1157();
}

void func_957()
{
	if (Global_1956200.f_1431.f_108.f_1 != 0f)
	{
		func_1158(0, Global_1956200.f_1431.f_108.f_1, 0, 0);
		Global_1956200.f_1431.f_108.f_1 = 0f;
	}
	if (Global_1956200.f_1431.f_108.f_3 != 0f)
	{
		func_1158(1, Global_1956200.f_1431.f_108.f_3, 0, 0);
		Global_1956200.f_1431.f_108.f_3 = 0f;
	}
	if (Global_1956200.f_1431.f_108.f_2 != 0f)
	{
		func_1158(2, Global_1956200.f_1431.f_108.f_2, 0, 0);
		Global_1956200.f_1431.f_108.f_2 = 0f;
	}
	if (Global_1956200.f_1431.f_108.f_4 != 0f)
	{
		func_1158(19, Global_1956200.f_1431.f_108.f_4, 0, 0);
		Global_1956200.f_1431.f_108.f_4 = 0f;
	}
	if (Global_1956200.f_1431.f_108.f_6 != 0f)
	{
		func_1158(18, Global_1956200.f_1431.f_108.f_6, 0, 0);
		Global_1956200.f_1431.f_108.f_6 = 0f;
	}
	if (Global_1956200.f_1431.f_108.f_5 != 0f)
	{
		func_1158(20, Global_1956200.f_1431.f_108.f_5, 0, 0);
		Global_1956200.f_1431.f_108.f_5 = 0f;
	}
	func_1159();
}

void func_958(int iParam0)
{
	Global_1956200.f_1431.f_3 = iParam0;
}

void func_959(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1952637.f_918 >= 25)
			{
				return;
			}
			if (func_1160(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_918)
				{
					iVar1 = ((Global_1952637.f_923 + iVar0) % 25);
					if ((Global_1952637.f_736[iVar1 /*4*/] == Param0 && Global_1952637.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1161(Param0);
			Global_1952637.f_736[Global_1952637.f_924 /*4*/] = { Param0 };
			Global_1952637.f_918++;
			Global_1952637.f_924 = (Global_1952637.f_924 + 1 % 25);
			func_661(8);
			break;
		case 24:
		case 25:
			if (Global_1952637.f_919 >= 25)
			{
				return;
			}
			if (func_1160(Param0))
			{
				return;
			}
			func_1161(Param0);
			Global_1952637.f_635[Global_1952637.f_919 /*4*/] = { Param0 };
			Global_1952637.f_919++;
			func_661(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637.f_920 >= 20)
			{
				return;
			}
			if (func_1160(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637.f_920)
				{
					iVar1 = ((Global_1952637.f_921 + iVar0) % 20);
					if ((Global_1952637.f_837[iVar1 /*4*/] == Param0 && Global_1952637.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1952637.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1161(Param0);
			Global_1952637.f_837[Global_1952637.f_922 /*4*/] = { Param0 };
			Global_1952637.f_920++;
			Global_1952637.f_922 = (Global_1952637.f_922 + 1 % 20);
			func_661(8);
			break;
			break;
	}
}

bool func_960(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_1162(&iParam0);
	if (!func_681(iParam0, 0) && !func_1164(func_1163(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_682(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam3 = true;
	}
	if (func_1165(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_963(0) };
		Var4.f_9 = -1591664384;
		if (!func_965(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return false;
		}
		else if (func_966(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return false;
		}
		if (func_964(iParam0, 1))
		{
			if (!func_965(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return false;
			}
			else if (func_966(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1166(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_1135(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_961(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_659(bParam0));
}

int func_962(int iParam0)
{
	vector3 vVar0;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_963(bool bParam0)
{
	int iVar0;

	iVar0 = func_659(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_4)))
		{
			Global_1293346.f_4 = { func_678(923904168, func_677(bParam0), -740156546, bParam0) };
		}
		return Global_1293346.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_16)))
		{
			Global_1293346.f_16 = { func_678(923904168, func_677(bParam0), -740156546, 0) };
		}
		return Global_1293346.f_16;
	}
	return func_678(923904168, func_677(bParam0), -740156546, 0);
}

bool func_964(int iParam0, bool bParam1)
{
	if (func_857(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_1167();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_965(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1135(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_966(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1168(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_967(bool bParam0)
{
	int iVar0;

	iVar0 = func_659(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1293346.f_8)))
		{
			Global_1293346.f_8 = { func_678(271701509, func_677(bParam0), 12999093, 0) };
		}
		return Global_1293346.f_8;
	}
	return func_678(271701509, func_677(bParam0), 12999093, 0);
}

bool func_968(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_857(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_1169(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_969(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1170(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_970(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6)
{
	vParam0.f_2 = iParam5;
	if (!DATAFILE::_DATAFILE_GET_HASH(uParam6, &vParam0))
	{
		return false;
	}
	return true;
}

int func_971()
{
	return Global_1051252.f_12;
}

char* func_972()
{
	return "unnamed";
}

int func_973(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_974(int iParam0)
{
	if (Global_1572887.f_13 == -1)
	{
		return false;
	}
	return func_169(36, iParam0);
}

bool func_975(int iParam0)
{
	if (func_828(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) != 1)
		{
			func_1171(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1296859.f_10, iParam0) == 1;
}

bool func_976(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_977(var uParam0)
{
	return func_386(*uParam0, 1);
}

void func_978(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_1172() - iParam1);
	func_412(uParam0, 1);
	func_413(uParam0, 2);
	uParam0->f_2 = 0;
}

void func_979(int iParam0)
{
	if (Global_1071686.f_21689[iParam0 /*8*/].f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1071686.f_21689[iParam0 /*8*/]))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Global_1071686.f_21689[iParam0 /*8*/], Global_1071686.f_21689[iParam0 /*8*/].f_5);
		}
		Global_1071686.f_21689[iParam0 /*8*/].f_5 = 0;
		func_803(iParam0);
	}
}

bool func_980()
{
	return func_605(Global_1572887.f_7, 1);
}

bool func_981()
{
	return (Global_1572887.f_106.f_75 >= 14 && Global_1572887.f_106.f_75 < 21);
}

bool func_982(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_983(int iParam0)
{
	return (Global_1296859.f_21 - iParam0);
}

void func_984(var uParam0, int iParam1)
{
	if (func_982(uParam0, iParam1))
	{
		return;
	}
	func_149(uParam0, iParam1);
}

void func_985(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365.f_34[iVar0 /*11*/].f_10 = 0;
}

void func_986(var uParam0, int iParam1)
{
	func_428(uParam0, iParam1);
}

void func_987(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 18, uParam1);
}

void func_988(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;

	HUD::_GET_COLOR_FROM_NAME(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 255f;
	*uParam1 = (BUILTIN::TO_FLOAT(iVar0) / fVar4);
	*uParam2 = (BUILTIN::TO_FLOAT(iVar1) / fVar4);
	*uParam3 = (BUILTIN::TO_FLOAT(iVar2) / fVar4);
}

void func_989()
{
	func_1173();
	func_1174();
}

bool func_990(int iParam0, int iParam1)
{
	return false;
}

int func_991(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_992(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		return 0;
	}
	iVar1 = (iParam1 - iVar0);
	return func_1175(iParam0, iVar1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
}

int func_992(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_962(iParam0);
	if (iVar1 == joaat("AMMO") || (bParam1 && iVar1 == joaat("WEAPON")))
	{
		iVar2 = func_1176(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("WEAPON"))
	{
		return func_1177(iParam0, 0);
	}
	if (func_682(iParam0, joaat("DEFAULT")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_659(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_1178(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_659(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_993(int iParam0)
{
	return WEAPON::_IS_WEAPON_BOW(iParam0);
}

bool func_994(int iParam0)
{
	bool bVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = true;
	if (func_1179(iParam0))
	{
		bVar0 = false;
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bVar0, false, 0, true, 0.5f, 1f, 752097756, false, 0f, false);
	func_1180(iParam0);
	return true;
}

void func_995(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738.f_382)
		{
			Global_1896738.f_382 = bParam0;
		}
	}
	else if (Global_1896738.f_382)
	{
		Global_1896738.f_382 = bParam0;
	}
}

int func_996(int iParam0)
{
	if (func_1181())
	{
		return 0;
	}
	if (!func_157())
	{
		return 0;
	}
	if (func_1182())
	{
		func_1183(2);
	}
	else
	{
		func_1183(1);
	}
	func_1184(iParam0);
	return 1;
}

void func_997(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_73(Param0))
	{
		return;
	}
	if (!func_362(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1185(Param0);
	}
	if (!func_73(func_375(0)))
	{
		func_625(Param0, 3);
		func_351(bParam3);
		func_626(!bParam4);
		func_1186(Param0, -1);
		if (bParam2 && !func_1187(2))
		{
			func_880(&Global_0, 1024);
		}
		func_628(1);
	}
	else
	{
		func_1186(Param0, -1);
		func_625(Param0, 4);
		func_1188(Param0, 0);
	}
	Global_1051252.f_45.f_1 = 1;
	iVar0 = func_630(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1189(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_998(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_892(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_878(Param0);
	Var0.f_3 = iParam3;
	func_1190(&Var0, bParam2, iParam4);
	return 1;
}

void func_999(int iParam0)
{
	if (Global_1194053.f_440 != 2)
	{
		return;
	}
	if (Global_1194053.f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053.f_440.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

void func_1000(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_634(iParam0);
	if (iVar0 == joaat("POSSE_VERSUS"))
	{
		func_444(func_47(joaat("ATTEMPTS"), joaat("POSSE_VERSUS")), 1);
	}
	else
	{
		func_444(func_47(joaat("ATTEMPTS"), joaat("FME")), 1);
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_444(func_47(joaat("ATTEMPTS"), iVar1), 1);
	}
}

void func_1001(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900688.f_1 == 2 || Global_1900688.f_1 == 5) || Global_1900688.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_896(Global_1893587.f_2);
	Global_1900688.f_1 = 3;
	Global_1900688.f_2 = 0;
	Global_1900688.f_7 = iVar0;
	Global_1900688.f_8 = iParam0;
	Global_1900688.f_9 = iVar1;
	if (Global_1900688.f_9 != -1 && Global_1900688.f_9 != 0)
	{
		func_898(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_9);
	}
	else if (Global_1900688.f_11 != -1)
	{
		func_898(Global_1900688.f_7, Global_1900688.f_8, Global_1900688.f_11);
	}
}

void func_1002()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_1191(1048576, PLAYER::PLAYER_ID()) || Global_1296851.f_2.f_1 == 2)
		{
			func_1192();
		}
	}
	if (LAW::_GET_WANTED_INTENSITY_FOR_PLAYER(Global_1296859.f_10) > 0)
	{
		if (func_1193())
		{
			func_1194();
		}
		func_1195();
	}
}

void func_1003(int iParam0)
{
	if (Global_1108365.f_935.f_28 != iParam0)
	{
		Global_1108365.f_935.f_28 = iParam0;
	}
}

int func_1004(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_1196(iParam0, Param1, iParam3);
	return 1;
}

int func_1005(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = joaat("TOAST_FME");
	if (func_36(&Var1, iParam0) && func_143(&Var1))
	{
		func_40(Var1, -1641329203, &iVar0, 0);
	}
	return iVar0;
}

var func_1006(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0) && func_143(&Var1))
	{
		func_40(Var1, -1268019774, &uVar0, 0);
	}
	return uVar0;
}

var func_1007(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_1197();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940311.f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940311.f_242.f_1188, 64);
	func_1198(&(Global_1940311.f_242.f_14[iVar0 /*39*/]), Global_1940311.f_242.f_4, cVar3, Param0);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(84), Global_1940311.f_242.f_1188);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(85), true);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(86), false);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(74), Param0.f_30);
	if (Param0.f_30)
	{
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(72), Param0.f_29);
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(75), Param0.f_28);
	}
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(87), Param0.f_24);
	iVar15 = 0;
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940311.f_242.f_14[iVar0 /*39*/], 707094655, iVar15);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(50), Param0.f_25);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(51), Param0.f_25.f_1);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(88), Param0.f_25.f_2);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(89), iVar2);
	Global_1940311.f_242.f_14[iVar0 /*39*/].f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(90), Param0.f_22);
	func_876(Global_1940311.f_242.f_1186 + 1);
	if (Global_1940311.f_242.f_1188 == 2147483647)
	{
		Global_1940311.f_242.f_1188 = 0;
	}
	if (func_1199(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = Global_1940311.f_242.f_14[iVar0 /*39*/];
		iVar16 = func_1200(&(Param0.f_31));
		Global_1940311.f_242.f_14[iVar0 /*39*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/], func_1091(91), iVar16);
	}
	iVar17 = func_1201();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1940311.f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940311.f_242.f_5, 0, "pm_invite_item", Global_1940311.f_242.f_14[iVar0 /*39*/]);
	}
	return Global_1940311.f_242.f_14[iVar0 /*39*/];
}

int func_1008(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1202(Param0))
	{
		return -1;
	}
	iVar1 = func_1203(Param0);
	if (iVar1 >= 0)
	{
		func_1204(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900806;
		Global_1900807[iVar0 /*2*/] = { Param0 };
		Global_1900838[iVar0 /*2*/] = { Var2 };
		func_1204(Param0, 1);
		Global_1900806++;
		if (Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

bool func_1009(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_1010(int iParam0, int iParam1)
{
	if (!func_1009(iParam0))
	{
		return false;
	}
	if (func_23() == -1)
	{
		return (Global_1915715.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_1011(int iParam0, int iParam1)
{
	if (!func_1009(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_6 = (Global_1915715.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_1012(int iParam0, int iParam1)
{
	if (!func_1009(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		Global_1915715.f_3[iParam0 /*447*/].f_6 = (Global_1915715.f_3[iParam0 /*447*/].f_6 - (Global_1915715.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051439.f_72[iParam0 /*75*/].f_1 = (Global_1051439.f_72[iParam0 /*75*/].f_1 - (Global_1051439.f_72[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_1013(int iParam0)
{
	if (func_1205())
	{
		if (Global_1915715.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_1014(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	Global_1071686.f_21416.f_1[iParam0 /*8*/].f_4 = MISC::GET_FRAME_COUNT();
}

void func_1015(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_1016(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

Vector3 func_1017(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_1206(vParam0, fParam3, fParam4);
}

bool func_1018(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return true;
	}
	return false;
}

void func_1019(bool bParam0)
{
	if (bParam0)
	{
		func_171(64);
	}
	else
	{
		func_170(64);
	}
}

int func_1020(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_733(255))
	{
		if ((Param0.f_17.f_9 != joaat("VOLBOX") && Param0.f_17.f_9 != joaat("VOLSPHERE")) && Param0.f_17.f_9 != joaat("VOLCYLINDER"))
		{
			Param0.f_17.f_9 = joaat("VOLSPHERE");
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != joaat("VOLBOX") && Param0.f_6.f_9 != joaat("VOLSPHERE")) && Param0.f_6.f_9 != joaat("VOLCYLINDER"))
			{
				Param0.f_6.f_9 = joaat("VOLSPHERE");
			}
		}
		func_772(&(Global_1102219.f_3849));
		Global_1102219.f_3849 = { Param0 };
		func_773(&(Global_1102219.f_3888));
		Global_1102219.f_3888 = { Param30 };
		Global_1102219.f_3919 = iParam39;
		Global_1102219.f_3920 = iParam40;
		Global_1102219.f_3921 = iParam41;
		func_774(Global_1102219.f_3849, 36);
		func_775(Global_1102219.f_3888, 36);
		func_170(48);
		return 1;
	}
	return 0;
}

void func_1021()
{
	func_483(&(Global_1071686.f_22973.f_3), 128);
}

bool func_1022()
{
	return true;
}

bool func_1023()
{
	return (!Global_1903133 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903133.f_2)) >= 5);
}

void func_1024(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

bool func_1025()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_557(), func_784(), -2) || !AUDIO::_0xE368E8422C860BA7(func_785(), func_784(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_786(), func_784(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_1207(), func_784(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_787(), func_784(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_752(), func_753(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_788(), func_789(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1026(var uParam0, var uParam1, int iParam2)
{
	switch (func_1208(iParam2))
	{
		case 0:
			func_1209(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1210(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1211(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1212(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_1213(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1027(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_1028(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1029(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_637((iVar5 / 60), 0, 180);
	iVar7 = func_637((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_1030(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1031(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 10000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_786()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_786(), func_784(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_784(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 10f, sParam2, func_784());
			}
		}
	}
	else
	{
		func_293(uParam0);
	}
}

void func_1032(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_1207(), func_784(), 1);
	}
}

var func_1033(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1034(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/] = (Global_8123[iParam0 /*11*/] - (Global_8123[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1071686.f_19674[iParam0 /*11*/] = (Global_1071686.f_19674[iParam0 /*11*/] - (Global_1071686.f_19674[iParam0 /*11*/] && iParam1));
}

bool func_1035(var uParam0)
{
	uParam0->f_2 = 1648302374;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_1036(var uParam0, var uParam1)
{
	uParam0->f_2 = 1950557689;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_1037(int iParam0)
{
	Global_1102219.f_26.f_12 = iParam0;
}

bool func_1038(int iParam0)
{
	return (Global_1102219.f_26.f_7 && iParam0) != 0;
}

bool func_1039(int iParam0)
{
	return (Global_1102219.f_26.f_9 && iParam0) != 0;
}

bool func_1040(int iParam0)
{
	return (Global_1102219.f_4[Global_1106305[iParam0 /*2*/]] && Global_1106305[iParam0 /*2*/].f_1) == Global_1106305[iParam0 /*2*/].f_1;
}

int func_1041()
{
	if (Global_1102219 <= 5)
	{
		return Global_1102219;
	}
	if (Global_1102219 <= 22)
	{
		return 4;
	}
	if (Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_1042(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_458.f_1387), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1067(iParam0);
			if (Local_458.f_9 != joaat("POSSE_VERSUS"))
			{
				func_868(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_458.f_1387), iParam1);
		}
	}
}

void func_1043()
{
	if (!func_609(256))
	{
		func_1214(256);
	}
}

void func_1044(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_458.f_1386), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1215(iParam0);
			if (Local_458.f_9 != joaat("POSSE_VERSUS"))
			{
				func_868(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_458.f_1386), iParam1);
		}
	}
	if (!func_137(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_345(GANG::_0x901E0DC25080C8B9(iParam0)))
			{
				func_346(0, 0, 1);
				func_43(67108864);
			}
			func_1043();
			func_43(33554432);
		}
	}
}

void func_1045(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_458.f_1386), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1215(iParam0);
			if (!GANG::_0x81FB74C83C2ED69F(iParam0))
			{
				func_1216(iParam0);
			}
			if (Local_458.f_9 != joaat("POSSE_VERSUS"))
			{
				func_868(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_458.f_1386), iParam1);
		}
	}
	if (!func_137(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_345(GANG::_0x901E0DC25080C8B9(iParam0)))
			{
				func_346(0, 0, 1);
				func_43(67108864);
			}
			func_1043();
			func_43(33554432);
		}
	}
}

void func_1046(int iParam0, int iParam1, bool bParam2)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_458.f_1386), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1215(iParam0);
			if (bParam2)
			{
				if ((func_182(64) || !GANG::_0x81FB74C83C2ED69F(iParam0)) || Local_458.f_1388 == -1477057661)
				{
					func_1217(iParam0);
				}
			}
			else if (!GANG::_0x81FB74C83C2ED69F(iParam0))
			{
				func_1216(iParam0);
			}
			if (Local_458.f_9 != joaat("POSSE_VERSUS"))
			{
				func_868(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_458.f_1386), iParam1);
		}
	}
	if (!func_137(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_345(GANG::_0x901E0DC25080C8B9(iParam0)))
			{
				func_346(0, 0, 1);
				func_43(67108864);
			}
			func_1043();
			func_43(33554432);
		}
	}
}

float func_1047(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1139381.f_5560)
	{
		return 0f;
	}
	if (iParam0 == Global_1296859.f_154[Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::_0x149A2751AB66AC02(GANG::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && Global_1100469[iVar0 /*53*/].f_18 >= Global_1100469[iVar0 /*53*/].f_45)
	{
		return Global_1100469[iVar0 /*53*/].f_18;
	}
	return Global_1100469[iVar0 /*53*/].f_45;
}

bool func_1048(struct<2> Param0, var uParam2)
{
	if (!func_73(Param0))
	{
		return false;
	}
	func_1218(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::_COPY_MEMORY(uParam2, &(Global_1071686.f_636.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1049(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1071686.f_21416.f_260), iParam0);
}

void func_1050(var uParam0, var uParam1, var uParam2)
{
	func_1219(uParam0, uParam1, uParam2);
	func_1220(uParam0, uParam1, uParam2);
}

char* func_1051(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VAR_RULE_MSG_INVALID";
		case joaat("STANDARD"):
			return "FME_TH_RULE_MSG_STD";
		default:
			break;
	}
	return "";
}

char* func_1052(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VAR_NARROW_HELP_MSG_INVALID";
		case joaat("STANDARD"):
			return "FME_TH_NARROW_HELP_MSG_STD";
		default:
			break;
	}
	return "";
}

bool func_1053()
{
	return func_590(UIFEED::_0xC17F69E1418CD11F(3));
}

char* func_1054(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "VAR_OBJ_MSG_INVALID";
		case joaat("STANDARD"):
			switch (iParam1)
			{
				case -1:
					return "STD_OBJ_MSG_INVALID";
				case 0:
					return "FME_TH_OBJ_MSG_NARROW";
				case 1:
					return "FME_TH_OBJ_MSG_FIND";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1055(var uParam0, var uParam1)
{
	if (func_1221(uParam0, uParam1))
	{
		uParam1->f_63 = func_1222(uParam1);
	}
}

void func_1056(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam1))
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam1);
	iVar1 = iVar0;
	iVar2 = PLAYER::GET_PLAYER_PED(iParam1);
	(*uParam0)[iVar1] = func_1223(iVar2);
}

int func_1057(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_1058(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 255;
	}
	iVar1 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if ((*uParam0)[iVar4] == iParam1)
			{
				return iVar1;
			}
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				iVar3 = func_1223(iVar2);
				if (iVar3 == iParam1)
				{
					return iVar1;
				}
			}
		}
		iVar4++;
	}
	return 255;
}

bool func_1059(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	(*uParam0)[*uParam2] = iParam1;
	*uParam2 = (*uParam2 + 1 % 3);
	return false;
}

char* func_1060(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return "FME_TH_LOOTED_FULL";
		}
		else
		{
			return "FME_TH_LOOTED_PARTIAL";
		}
	}
	else if (bParam1)
	{
		return "FM_TH_GANGMATE_LOOTED_FULL_PIECE";
	}
	else
	{
		return "FM_TH_GANGMATE_LOOTED_PARTIAL_PIECE";
	}
	return "";
}

var func_1061(char* sParam0)
{
	char* sVar0;
	var uVar1;

	sVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	uVar1 = func_614(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

float func_1062(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	fVar0 = (fParam0 + fParam1);
	if (fVar0 > fParam2)
	{
		fVar0 = fParam2;
	}
	return fVar0;
}

int func_1063(vector3 vParam0, vector3 vParam3)
{
	return PED::ADD_SCENARIO_BLOCKING_AREA((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

char* func_1064(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONTAINER_ROCKS"):
			switch (iParam1)
			{
				case joaat("TH_HRT_CHEST"):
					return "CHEST";
				case joaat("TH_HRT_ROCKS"):
					return "ROCKS";
				case 528696119:
					return "OBJECT1";
				case -849305869:
					return "OBJECT2";
				case joaat("TH_HRT_MAP"):
					return "OBJECT3";
				default:
					break;
			}
			return "";
		}

void func_1065(var uParam0, int iParam1)
{
	func_606(uParam0, iParam1);
}

int func_1066(int iParam0)
{
	return (iParam0 + 1 % 32);
}

void func_1067(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28345), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28346), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28347), iParam0);
	if (!func_831(iParam0))
	{
		func_1070(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1068(bool bParam0)
{
	if (func_1224())
	{
		Global_1958008 = 1;
	}
	if (func_1225(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && (Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA") || Global_1940258.f_38 == joaat("WEAPON_KIT_CAMERA_ADVANCED")))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1940258.f_38 = joaat("WEAPON_UNARMED");
	}
}

void func_1069(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_1226(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 0;
}

void func_1070(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_1227(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1296859.f_22[iVar0])
		{
			func_1069(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1071686.f_21416.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1296859 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_1070(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_1228(&Var6, uVar4);
		}
	}
}

int func_1071(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	if ((*uParam1)[0 /*5*/] == 0)
	{
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, "score");
		func_1210(uVar0, uParam1[0 /*5*/], 2, "0");
		func_1210(uVar0, uParam1[1 /*5*/], 8, "0");
		bVar1 = !func_605(iParam2, 16);
		bVar2 = !func_605(iParam2, 32);
		func_1213(uVar0, &((uParam1[0 /*5*/])->f_3), 5, bVar1, 0);
		func_1209(uVar0, &((uParam1[0 /*5*/])->f_1), 3, iParam4);
		func_1209(uVar0, &((uParam1[0 /*5*/])->f_2), 4, iParam6);
		func_1213(uVar0, &((uParam1[1 /*5*/])->f_3), 11, bVar2, 0);
		func_1209(uVar0, &((uParam1[1 /*5*/])->f_1), 9, iParam5);
		func_1209(uVar0, &((uParam1[1 /*5*/])->f_2), 10, iParam7);
	}
	return 1;
}

int func_1072(var uParam0, int iParam1, int iParam2)
{
	if (func_605(iParam1, 262144))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 6);
	}
	else if (func_605(iParam1, 65536))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 3);
	}
	else if (func_605(iParam1, 131072))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 4);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	else if (func_605(iParam1, 1048576))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 6);
	}
	if (func_605(iParam1, 64))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 0);
	}
	if (func_605(iParam1, 2048))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 7);
	}
	if (func_605(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		MISC::SET_BIT(&(uParam0->f_11.f_159), 31);
	}
	if (func_605(iParam1, 4096))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 9);
	}
	if (func_605(iParam1, 16384))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_605(iParam1, 4194304))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 11);
	}
	if (func_605(iParam1, 8388608))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 12);
	}
	if (func_605(iParam1, 8192))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 10);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_605(iParam1, 32768))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 22);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 23);
	}
	if (func_605(iParam1, 524288))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 7);
	}
	if (func_605(iParam1, 2097152))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_160), 9);
	}
	if (func_605(iParam1, 16777216))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 0);
		MISC::SET_BIT(&(uParam0->f_11.f_160), 13);
	}
	func_1229(&(uParam0->f_11));
	func_279(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_951)))
	{
		func_1230(&(uParam0->f_11), &(uParam0->f_951));
	}
	return 1;
}

void func_1073(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	char cVar0[32];
	char cVar4[32];
	char cVar8[32];
	var uVar12;
	char cVar16[32];
	char cVar20[32];
	char cVar24[32];
	var uVar28;
	bool bVar32;
	bool bVar33;

	if ((uParam0[0 /*5*/])->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_1231(fParam2), 32);
			func_1030((*uParam0)[0 /*5*/], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_1232(fParam2), 32);
			func_1030((*uParam0)[0 /*5*/], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam2, 2), 32);
			func_1030((*uParam0)[0 /*5*/], &cVar8);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam2), "%i", &uVar12);
			func_1030((*uParam0)[0 /*5*/], &uVar12);
		}
		(uParam0[0 /*5*/])->f_4 = fParam2;
	}
	if ((uParam0[1 /*5*/])->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_1231(fParam3), 32);
			func_1030((*uParam0)[1 /*5*/], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_1232(fParam3), 32);
			func_1030((*uParam0)[1 /*5*/], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, MISC::_0x2B6846401D68E563(fParam3, 2), 32);
			func_1030((*uParam0)[1 /*5*/], &cVar24);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam3), "%i", &uVar28);
			func_1030((*uParam0)[1 /*5*/], &uVar28);
		}
		(uParam0[1 /*5*/])->f_4 = fParam3;
	}
	bVar32 = !func_605(iParam1, 16);
	bVar33 = !func_605(iParam1, 32);
	func_1233((uParam0[0 /*5*/])->f_1, iParam7);
	func_1233((uParam0[0 /*5*/])->f_2, iParam9);
	func_1027((uParam0[0 /*5*/])->f_3, bVar32);
	func_1233((uParam0[1 /*5*/])->f_1, iParam8);
	func_1233((uParam0[1 /*5*/])->f_2, iParam10);
	func_1027((uParam0[1 /*5*/])->f_3, bVar33);
}

void func_1074(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_1234(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_1235(uParam0, uParam1, bParam3, iParam2, iParam4, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam6);
}

void func_1075(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = -1;
	if (!MISC::IS_BIT_SET(uParam0->f_159, 1))
	{
		iVar2 = PLAYER::GET_PLAYER_TEAM(*iParam2);
		iVar3 = func_1236();
		bVar4 = func_1237();
		bVar5 = func_1238();
		bVar6 = MISC::IS_BIT_SET(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1940144.f_111)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1940144.f_111;
			bParam3 = true;
		}
		func_1239(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!MISC::IS_BIT_SET(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_158, 0))
					{
						func_1229(uParam0);
						func_1240(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						MISC::SET_BIT(&(uParam0->f_158), 0);
					}
					else
					{
						func_1074(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					MISC::CLEAR_BIT(&(uParam0->f_158), 13);
					MISC::SET_BIT(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_158), 13);
			}
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), true);
			MISC::CLEAR_BIT(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1940144.f_5 = 0;
			}
		}
		else
		{
			if (!Global_1940144.f_111)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), false);
			}
			if (bParam3)
			{
				func_1074(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1940144.f_111)
			{
				func_1241(uParam0, uParam1);
				func_1242(uParam0, uParam1, 0);
			}
		}
		if (!Global_1940144.f_111)
		{
			if ((MISC::IS_BIT_SET(uParam0->f_158, 1) || MISC::IS_BIT_SET(uParam0->f_158, 13)) || uParam0->f_199 < 2)
			{
				func_1243(uParam0, 1);
			}
			func_1244(uParam0);
		}
	}
}

void func_1076(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = joaat("COLOR_PURE_WHITE");
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, sParam3);
	func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_4), 21, 0);
	func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_5), 20, 0);
	func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_7), 23, 0);
	func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_8), 22, 0);
	func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_9), 24, 0);
	func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25);
	}
	else
	{
		func_1209((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25, iParam5);
	}
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_1), 17);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_3), 19);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_10), 26);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_11), 27);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_20), 16);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_21), 14);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_22), 15);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_12), 29);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_13), 28);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_14), 30);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_15), 31);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_16), 32);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_17), 33);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_18), 34);
	func_1026((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_19), 35);
}

void func_1077(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			*iParam1 = func_1245();
			*uParam2 = func_1245();
			*iParam3 = func_1245();
			*uParam4 = func_1245();
			*uParam5 = func_1246();
			*uParam6 = func_1245();
			*uParam7 = func_1245();
			break;
		case joaat("DELIVER"):
			*iParam1 = func_1247();
			*uParam2 = func_1247();
			*iParam3 = func_1245();
			*uParam4 = func_1246();
			*uParam5 = func_1246();
			*uParam6 = func_1245();
			*uParam7 = func_1245();
			break;
		case joaat("DEFEND"):
			*iParam1 = func_1246();
			*uParam2 = func_1247();
			*iParam3 = func_1245();
			*uParam4 = func_1246();
			*uParam5 = func_1246();
			*uParam6 = func_1245();
			*uParam7 = func_1245();
			break;
		case joaat("COLLECT"):
			*iParam1 = func_1245();
			*uParam2 = func_1245();
			*iParam3 = func_1246();
			*uParam4 = func_1245();
			*uParam5 = func_1246();
			*uParam6 = func_1245();
			*uParam7 = func_1245();
			break;
	}
}

void func_1078(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = (uParam0[iParam1 /*34*/])->f_25;
	iVar6 = (uParam0[iParam1 /*34*/])->f_26;
	iVar9 = (uParam0[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1247();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1247();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1247();
			iVar2 = func_1247();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1245();
			iVar2 = func_1245();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1027((uParam0[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1248(uParam0, iParam1);
		func_1027((uParam0[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = (uParam0[iParam1 /*34*/])->f_29;
		if ((uParam0[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1249((uParam0[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1030((uParam0[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1030((uParam0[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1233((uParam0[iParam1 /*34*/])->f_2, iVar2);
			}
			func_1250((uParam0[iParam1 /*34*/])->f_1, fVar10);
			func_1027((uParam0[iParam1 /*34*/])->f_10, 0);
			func_1027((uParam0[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1027((uParam0[iParam1 /*34*/])->f_10, 1);
			func_1027((uParam0[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1233((uParam0[iParam1 /*34*/])->f_6, iVar0);
			}
			func_1233((uParam0[iParam1 /*34*/])->f_4, iVar5);
			func_1233((uParam0[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1233((uParam0[iParam1 /*34*/])->f_14, iVar1);
			func_1030((uParam0[iParam1 /*34*/])->f_12, sVar7);
			func_1030((uParam0[iParam1 /*34*/])->f_13, sVar8);
			func_1027((uParam0[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1027((uParam0[iParam1 /*34*/])->f_15, 0);
		}
		func_1027((uParam0[iParam1 /*34*/])->f_16, (uParam0[iParam1 /*34*/])->f_30);
	}
}

void func_1079(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

int func_1080(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1079(iParam2, -372840566);
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
	func_1251(uParam1, iParam0, Var3);
	return 1;
}

void func_1081(var uParam0)
{
	int iVar0;

	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_1082(int iParam0)
{
	Global_1952637 = (Global_1952637 - (Global_1952637 && iParam0));
}

void func_1083()
{
	Global_1952637.f_3467 = 0;
	Global_1952637.f_3467.f_1 = 0;
	Global_1952637.f_3467.f_8 = 0;
	Global_1952637.f_3467.f_2 = 0;
	Global_1952637.f_3467.f_3[0] = 0;
	Global_1952637.f_3467.f_3[1] = 0;
	Global_1952637.f_3467.f_3[2] = 0;
	Global_1952637.f_3467.f_3[3] = 0;
	Global_1952637.f_3467.f_9 = 0;
	Global_1952637.f_3467.f_10 = 0;
	Global_1952637.f_3467.f_11 = 0;
	if (Global_1952637.f_3467.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1952637.f_3467.f_13);
	}
	Global_1952637.f_3467.f_12 = 0;
	func_1082(32768);
	func_1252(1108822547, 8, 6);
}

void func_1084(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1253(iVar0, iParam0))
		{
			func_1254(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1085(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637.f_2843 != 0)
	{
		func_1255(Global_1952637.f_2843);
		func_1256(0);
		Global_1952637.f_2843 = 0;
	}
	else if (iParam3 != 0 && func_1257(iParam3))
	{
		func_1258(0);
	}
	if (func_932(32768))
	{
		func_1259(1108822547);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_1260(Global_1952637.f_1675.f_1[1 /*3*/], -1811760631, &(Global_1952637.f_1058), &(Global_1952637.f_1058.f_9), 1);
		func_1260(Global_1952637.f_1675.f_1[4 /*3*/], -2118203104, &(Global_1952637.f_1058), &(Global_1952637.f_1058.f_9), 1);
		func_679(2, 0, iVar0, 0, 0);
		func_679(4, 0, 0, 0, 0);
		func_679(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_679(2, 0, iVar0, iParam0, 0);
	}
	func_1261();
}

void func_1086()
{
	func_1262(0);
	func_1262(1);
	func_1262(2);
	func_1262(3);
}

void func_1087()
{
	func_1263(0);
	func_1263(1);
	func_1263(2);
	func_1263(3);
}

float func_1088(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_946(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956200.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

var func_1089(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_47(iParam0, iParam1) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

var func_1090(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_501(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

char* func_1091(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

int func_1092(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1264(&Var1, iParam0))
	{
		iVar0 = ((func_1265() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1093(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1257541[iParam0 /*5*/].f_2;
}

bool func_1094(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_1095(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1071686.f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686.f_19550 < 32)
	{
		Global_1071686.f_19550.f_1[Global_1071686.f_19550 /*3*/] = { vVar1 };
	}
	Global_1071686.f_19550 = (Global_1071686.f_19550 - 1);
	if (Global_1071686.f_19550 < 0)
	{
		Global_1071686.f_19550 = 0;
	}
	return 1;
}

int func_1096(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1071686.f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1071686.f_19550.f_1[iVar0 + 1 /*3*/] = { Global_1071686.f_19550.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1071686.f_19550.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1071686.f_19550++;
	if (Global_1071686.f_19550 > 32)
	{
		Global_1071686.f_19550 = 32;
	}
	return 1;
}

int func_1097(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_1098(int iParam0)
{
	int iVar0;

	iVar0 = func_1266(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1099(int iParam0)
{
	if (iParam0 == joaat("WS_MP_HIDEOUT_CLEMENS_COVE"))
	{
		return true;
	}
	return false;
}

void func_1100(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1101(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1267((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1267(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(Global_1900736.f_1[0 /*2*/]))
	{
		func_625(Global_1900736.f_1[0 /*2*/], 3);
	}
}

void func_1102(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1196205.f_129 <= 0)
	{
		Global_1196205.f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1196205.f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1196205.f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1196205.f_129 == 1)
	{
		*uParam0 = { Global_1196205[0 /*4*/] };
		Global_1196205[0 /*4*/] = { Var0 };
		Global_1196205.f_129 = 0;
		return;
	}
	*uParam0 = { Global_1196205[iParam1 /*4*/] };
	Global_1196205.f_129 = (Global_1196205.f_129 - 1);
	iVar4 = (Global_1196205.f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		Global_1196205[iVar5 /*4*/] = { Global_1196205[iVar5 + 1 /*4*/] };
		Global_1196205[iVar5 + 1 /*4*/] = { Var0 };
		iVar5++;
	}
}

void func_1103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205.f_129)
	{
		return;
	}
	Global_1196205.f_130 = iParam0;
	Global_1196205.f_131 = Global_1196205[iParam0 /*4*/];
}

void func_1104()
{
	if (Global_1196205.f_131 == 0)
	{
		return;
	}
	Global_1196205.f_130 = func_1268(Global_1196205.f_131);
	if (Global_1196205.f_130 < 0)
	{
		Global_1196205.f_131 = 0;
	}
}

bool func_1105(int iParam0)
{
	return func_78(Global_1903071.f_2, iParam0);
}

struct<14> func_1106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_1107(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_659(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1108(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_1109(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_659(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_1110(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1111(int iParam0)
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

int func_1112(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*70*/].f_1.f_21.f_2;
	iVar1 = func_1269(iVar0);
	iVar2 = func_1270(iVar0, iVar1);
	return iVar2;
}

struct<2> func_1113()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_1114(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_1115(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_659(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_1116(var uParam0)
{
	func_931(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_924() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_1117(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1109(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_1271(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_1118(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1272(uParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_1273(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

int func_1119(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

void func_1120(var uParam0)
{
	struct<7> Var0;

	*uParam0 = { Var0 };
}

int func_1121(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1131();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		return -1806335803;
	}
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		return -971050805;
	}
	return 0;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1123(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1274(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_1275(iVar0, iParam1))
			{
				vVar4 = { func_1276(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1952637.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1253(iVar0, 4))
				{
					func_1254(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1277(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1952637.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_1124(int iParam0)
{
	func_1278(&(Global_1952637.f_2897), iParam0);
}

int func_1125(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

void func_1126(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_1125(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_1125(iParam0, 1) /*12*/].f_11 || iParam1);
}

int func_1127(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1952637.f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1279(&(Global_1952637.f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1128(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

int func_1129(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_1130(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_1280(uParam0->f_1[34 /*3*/], -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1253(iVar0, 16);
		if (bVar1)
		{
			func_1254(iVar0, 16, 9);
		}
		if (Global_1952637.f_83[iVar0 /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_1281(iVar0, iParam3);
			}
			if (!bParam2 && func_1129(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_1275(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_1133(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_1281(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_1133(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1131()
{
	return Global_1952637.f_1;
}

int func_1132(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	iVar2 = 0;
	Var3 = { func_1106(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_1107(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1282(iVar0, iVar1, iParam1);
		}
		func_1111(iVar0);
	}
	return iVar2;
}

void func_1133(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = iParam1;
	bVar1 = func_1283(iVar0, 1);
	if (bParam3 && func_1280(uParam0->f_1[iParam2 /*3*/], 343781202))
	{
		func_1284(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_1285(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_1286(uParam0, iVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_1287(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_1288(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_1289(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_1290(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_1291(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_1292(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_1293(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1294(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_1295(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_1296(uParam0, bVar1, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_1297(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_1298(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1299(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_1300(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_1301(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_1134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("UPGRADE_HEALTH_TANK_1");
		case 1:
			return joaat("UPGRADE_STAMINA_TANK_1");
		case 2:
			return joaat("UPGRADE_DEADEYE_TANK_1");
		default:
			break;
	}
	return joaat("UPGRADE_HEALTH_TANK_1");
}

int func_1135(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_682(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_678(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_659(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_659(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1136(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_681(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_682(iParam0, joaat("DEFAULT"));
	if (iVar0 != 0)
	{
		return func_1302(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_684(iParam0, bParam4, 0) };
	Var6 = { func_678(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1303(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_1137(int iParam0)
{
	if (!func_1304(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP_HEALTH");
		case 2:
			return joaat("CHARACTER_XP_DEADEYE");
		case 1:
			return joaat("CHARACTER_XP_STAMINA");
		default:
			break;
	}
	return 0;
}

int func_1138(int iParam0, float fParam1, int iParam2)
{
	if (!func_1305(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_946(2);
	}
	func_1306(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1296859.f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1296859.f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_1139(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1140(int iParam0)
{
	if (!func_1307(iParam0))
	{
		return 0;
	}
	return Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_1;
}

bool func_1141(int iParam0, int iParam1)
{
	if (iParam0 == joaat("DEADEYE"))
	{
		return func_1309(iParam1);
	}
	else
	{
		return !func_1309(iParam1);
	}
	return false;
}

void func_1142(int iParam0)
{
	struct<33> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1311(func_1310(iParam0, 1), &Var0, 2, -1);
	func_1312(&Var0, iParam0, 0);
}

void func_1143(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1313(Global_1139381.f_4796.f_34[iParam0 /*3*/], &Var0, 0, -1);
	func_1314(Var0, iParam0, 0);
}

bool func_1144(int iParam0)
{
	return func_401(&(Global_1956200.f_1753), iParam0, 1);
}

void func_1145(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_1144(2))
		{
			func_1315(2);
		}
		if (PLAYER::_0x6614F9039BD31931(iVar0, 34, 0))
		{
			PLAYER::_0x0751D461F06E41CE(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_1144(2))
		{
			func_1316(2);
		}
		if (!PLAYER::_0x6614F9039BD31931(iVar0, 34, 0))
		{
			PLAYER::_0x0751D461F06E41CE(iVar0, 34, 0, 1);
		}
	}
	PLAYER::_0xA63FCAD3A6FEC6D2(iVar0, bParam0);
	PLAYER::_0x7146CF430965927C(27, bParam0);
}

void func_1146(bool bParam0)
{
	if (bParam0)
	{
		if (func_1144(1))
		{
			func_1315(1);
		}
	}
	else if (!func_1144(1))
	{
		func_1316(1);
	}
}

bool func_1147()
{
	return (Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1952637.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE"));
}

void func_1148(int iParam0)
{
	int iVar0;

	iVar0 = 100;
	switch (func_1131())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	PED::_0x7FF72DE061DF55E2(iParam0, 0, 1f);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar0);
}

void func_1149(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iParam1, iParam0, 0);
}

void func_1150(float fParam0, int iParam1)
{
	float fVar0;

	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - PED::_GET_PED_STAMINA(iParam1));
	PED::_CHARGE_PED_STAMINA(iParam1, fVar0);
}

float func_1151()
{
	return Global_1956200.f_1561.f_3;
}

void func_1152(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - PLAYER::_0xDF66A37936D5F3D9(iVar0));
	func_1317(fVar2, 0, 1);
}

bool func_1153(int iParam0)
{
	return func_1304(iParam0);
}

int func_1154(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_1155(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	iVar1 = func_1318(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1088(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_1088(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return BUILTIN::TO_FLOAT(100);
		case 3:
			return func_1319(uParam0, iParam1);
	}
	return -1f;
}

void func_1156(int iParam0, float fParam1)
{
	func_1320(iParam0, fParam1);
	func_1321(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1157()
{
	func_1322();
	func_1323();
	func_1324();
	func_1325();
}

int func_1158(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_1326(iParam0, fParam1, bParam2, bParam3);
}

void func_1159()
{
	Global_1956200.f_1431.f_108 = 0;
	Global_1956200.f_1431.f_108.f_1 = 0f;
	Global_1956200.f_1431.f_108.f_3 = 0f;
	Global_1956200.f_1431.f_108.f_2 = 0f;
	Global_1956200.f_1431.f_108.f_4 = 0f;
	Global_1956200.f_1431.f_108.f_6 = 0f;
	Global_1956200.f_1431.f_108.f_5 = 0f;
}

bool func_1160(int iParam0)
{
	return Global_1952637.f_595[iParam0] > 0;
}

void func_1161(int iParam0)
{
	Global_1952637.f_595[iParam0]++;
}

int func_1162(int iParam0)
{
	if (!func_681(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1327(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1163(int iParam0)
{
	return iParam0;
}

bool func_1164(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_1165(int iParam0)
{
	return func_962(iParam0) == joaat("WEAPON");
}

int func_1166(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_681(iParam0, 0) && !func_1164(func_1163(iParam0), 2))
	{
		return 0;
	}
	if (func_962(iParam0) == joaat("FEE"))
	{
		return -1;
	}
	if (!bParam2 && func_682(iParam0, joaat("DEFAULT")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_659(bParam3), iParam0);
}

bool func_1167()
{
	return (func_396(joaat("UPGRADE_OFFHAND_HOLSTER"), 0, 0, 0) > 0 && func_1328(func_678(joaat("WARDROBE"), func_677(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1168(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_659(0);
	*uParam1 = { func_678(iParam0, func_963(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_1169(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("DEFAULT")) == -1925887917)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

bool func_1170(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_659(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_1171(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_16 != 0 || Global_1572887.f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1296859.f_22[iVar0])
	{
		func_1069(iParam0);
		return;
	}
	if (Global_1071686.f_21416.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1226(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1071686.f_21416.f_1[iVar0 /*8*/] = 1;
}

int func_1172()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_1173()
{
	if (func_181(32768, Local_458.f_1333))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	WEAPON::_0xB7E52A058B07C7E2(PLAYER::PLAYER_PED_ID(), &(Local_458.f_1441), &(Local_458.f_1445));
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_458.f_1441)))
	{
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_458.f_1445)))
	{
	}
	func_232(32768, Local_458.f_1333);
}

void func_1174()
{
	if (func_181(131072, Local_458.f_1333))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!WEAPON::_GET_PED_WEAPON_INVENTORY_UID(PLAYER::PLAYER_PED_ID(), 10, &(Local_458.f_1437)))
	{
		return;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_458.f_1437)))
	{
	}
	func_232(131072, Local_458.f_1333);
}

int func_1175(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (!func_1329(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1330(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1331(iParam0, bParam2);
	iVar2 = 0;
	if (func_962(iParam0) == joaat("CLOTHING"))
	{
		if (!func_1280(iParam0, 866047851) && !func_1280(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_1332(iParam0, 8388608) && !func_1333(27))
	{
		func_1334(27);
	}
	func_1335(iParam0);
	if (!bVar3)
	{
		if (func_1280(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_1337(func_1336(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_23() == -1)
				{
					func_1338(iVar1);
				}
				if (func_961(0) && func_1339(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1340(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_399(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_962(iParam0) == joaat("WEAPON"))
		{
			if (!func_1341(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_962(iParam0) == joaat("AMMO") && func_676(iParam0))
		{
			if (!func_1342(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1280(iParam0, -103750053))
		{
			func_444(func_468(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_444(func_47(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_1280(iParam0, -121341956) && !func_1280(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR"))
			{
				func_1343(536, 0);
			}
			if (func_1280(iParam0, -2017733358) || func_1280(iParam0, -1369131378))
			{
			}
		}
		else if (func_1280(iParam0, -136654233))
		{
			if (func_1280(iParam0, -1021472396))
			{
			}
		}
		else if (func_1280(iParam0, -1466706512) && func_1280(iParam0, 1147021565))
		{
			func_1343(519, 0);
		}
		else if (func_1280(iParam0, 1147021565) && func_1280(iParam0, -524514947))
		{
		}
		else if (func_1280(iParam0, 554195525))
		{
		}
		else if (func_1280(iParam0, 589988438))
		{
			if (func_1344())
			{
				func_1345(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1280(iParam0, 787083290) && func_1280(iParam0, 949916894))
		{
			func_1346(iParam0);
		}
		else if (func_1280(iParam0, -1718133314))
		{
			func_1347(iParam0);
		}
		else if (func_1280(iParam0, -1738650224))
		{
			func_1348(iParam0);
		}
		else if (func_1280(iParam0, -1112814642) && func_1280(iParam0, 949916894))
		{
			func_1349(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1940144.f_21 = 0;
		}
		else if (func_1280(iParam0, 1841149704))
		{
			func_1350();
		}
		else if (func_1280(iParam0, -1979000645))
		{
		}
		else if (func_1280(iParam0, 606799272))
		{
		}
		else if (func_1280(iParam0, -1112814642) && func_1280(iParam0, -1697809989))
		{
		}
		else if (func_1280(iParam0, -2017733358) || func_1280(iParam0, -1369131378))
		{
		}
		else if (func_1280(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_1280(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_1351(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_1175(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_1351(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_1175(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_1351(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_1175(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_1351(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_1175(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_1351(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_1175(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_1351(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_1175(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1280(iParam0, -839724752) && func_1332(iParam0, 4))
		{
		}
		else if (func_1280(iParam0, 1399091007))
		{
			func_1352(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("REWARD_ABANDONED_LOOT_MALE");
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_1354(272, func_1353(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_1354(270, func_1353(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_1354(271, func_1353(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_1355(685, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_1355(685, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_1355(685, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_1355(685, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_1355(686, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940311.f_10903 + 60000))
				{
					func_1355(686, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1940311.f_10903 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_1343(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_1343(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_1333(1))
				{
					func_1343(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_1343(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_23() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_1343(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_1356(&iVar5);
		if (!func_399(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_961(0))
		{
			return 1;
		}
		if (func_962(iParam0) == joaat("CLOTHING"))
		{
			func_1357(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_961(0) && !func_1358())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_1175(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_1359(iVar2, 0);
		}
	}
	Var30 = { func_1360(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_1361(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1280(iParam0, -839724752))
		{
			func_1362(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_1363(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_1176(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_962(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_1280(iParam0, 1399091007))
	{
		func_1364(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1177(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1106(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1365(&Var0, func_963(0));
	}
	if (!func_1107(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1111(iVar14);
	return uVar15;
}

struct<4> func_1178(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_684(iParam0, bParam1, 0) };
	return func_678(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_1179(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_FISHINGROD"):
		case joaat("WEAPON_KIT_CAMERA"):
		case joaat("OBJECT_4"):
		case joaat("OBJECT_3"):
		case joaat("WEAPON_KIT_CAMERA_ADVANCED"):
		case joaat("OBJECT_2"):
		case joaat("OBJECT_1"):
			return true;
		default:
			break;
	}
	return false;
}

void func_1180(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<10> Var16;
	struct<22> Var30;

	Var2 = { func_1106(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (!func_1107(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var16.f_9 = -1591664384;
	if (!func_1108(&Var16, 0, iVar0, iVar1))
	{
		func_1111(iVar0);
		return;
	}
	Var30.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_659(0), &Var16, &Var30, 22, 1))
	{
		func_1111(iVar0);
		return;
	}
	if (!Var30.f_21)
	{
		Var30.f_21 = 1;
		if (!INVENTORY::_0xD80A8854DB5CFBA5(func_659(0), &Var16, &Var30, 22))
		{
		}
	}
	func_1111(iVar0);
}

bool func_1181()
{
	return func_1366() != 0;
}

bool func_1182()
{
	int iVar0;

	iVar0 = func_1367();
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_1183(int iParam0)
{
	Global_1301323.f_288 = iParam0;
}

void func_1184(int iParam0)
{
	Global_1301323.f_288.f_1 = iParam0;
}

void func_1185(struct<2> Param0)
{
	struct<32> Var0;

	if (func_622(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_622(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_622(Param0), Global_265377.f_124517.f_71.f_17);
		if (func_1189(Param0, &Var0))
		{
			if (Var0.f_29 == joaat("RACE_IMPROMPTU"))
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("RACE"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1186(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_890(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736.f_66;
	func_1368(Param0, iVar0);
	Global_1900736.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736.f_66)
	{
		return iVar0;
	}
	func_1101(iVar0, iParam2);
	return iParam2;
}

bool func_1187(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_1188(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_890(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1369(Param0, func_375(0), iParam2))
	{
		func_625(func_375(0), 3);
		func_625(func_375(iVar0), 4);
		return 0;
	}
	func_1101(iVar0, 0);
	func_625(func_375(0), 3);
	func_625(func_375(1), 4);
	return 1;
}

bool func_1189(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_1048(Param0, &vVar0);
	if (func_1370(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1190(var uParam0, bool bParam1, int iParam2)
{
	func_1371(uParam0, iParam2);
	if (Global_1196205.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1103(func_892(uParam0->f_1));
	}
	else
	{
		func_1104();
	}
}

bool func_1191(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219.f_3 && iParam0) != 0;
	}
	return (Global_1100469[iParam1 /*53*/].f_3 && iParam0) != 0;
}

void func_1192()
{
	int iVar0;

	if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_10))
	{
		return;
	}
	iVar0 = func_1372();
	if (iVar0 > 0)
	{
		func_1373(-1228177771, iVar0, 0);
	}
}

bool func_1193()
{
	return (func_1374(Global_1296859.f_10, 1, 0, 1) && func_1375() > 0);
}

void func_1194()
{
	int iVar0;

	if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_10))
	{
		return;
	}
	iVar0 = func_1375();
	if (iVar0 > 0)
	{
		func_1376(iVar0, 0, -142743235, 0);
	}
}

void func_1195()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::_0x062B4A4A3396351D(iVar0);
	func_1377();
}

void func_1196(int iParam0, struct<2> Param1, int iParam3)
{
	int iVar0;

	if (func_73(Global_1109340.f_193[Global_1296859 /*8*/].f_2.f_1))
	{
		return;
	}
	if (Global_1109340.f_193[Global_1296859 /*8*/].f_2 != -1 && Global_1109340.f_193[Global_1296859 /*8*/].f_2 != iParam0)
	{
		return;
	}
	Global_1109340.f_193[Global_1296859 /*8*/].f_2 = iParam0;
	Global_1109340.f_193[Global_1296859 /*8*/].f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		Global_1109340.f_193[Global_1296859 /*8*/].f_2.f_3 = iParam3;
	}
	iVar0 = func_1378(Global_1296859.f_10);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1379(6);
	}
}

int func_1197()
{
	int iVar0;
	int iVar1;
	struct<39> Var2;
	int iVar41;

	iVar1 = Global_1296859.f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { Global_1940311.f_242.f_14[iVar0 /*39*/] };
		iVar41 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_1380(Var2))
			{
				func_620(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_1381();
}

void func_1198(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_1382(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1091(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1091(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(6), Param10.f_21);
}

bool func_1199(var uParam0)
{
	return true;
}

int func_1200(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896738.f_384)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_1384(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_1385(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_1386(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_1387(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_1388(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_1389(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_1390(func_1383(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1383(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_1201()
{
	return Global_1940311.f_242.f_1185;
}

bool func_1202(struct<2> Param0)
{
	return func_621(Param0) == 0;
}

int func_1203(struct<2> Param0)
{
	int iVar0;

	if (Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900806 - 1))
	{
		if (func_74(Global_1900807[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1204(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1202(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1391(Param0);
	}
	func_625(Param0, 1);
	bParam2 = bParam2;
}

bool func_1205()
{
	return (Global_1915715.f_20637 || Global_1915715.f_22504.f_1);
}

Vector3 func_1206(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1392(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

char* func_1207()
{
	return "countdown_final_thud";
}

int func_1208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1209(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1393(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_1394(iParam2), iParam3);
}

void func_1210(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1395(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_1394(iParam2), sParam3);
}

void func_1211(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1396(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_1394(iParam2), iParam3);
}

void func_1212(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1397(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_1394(iParam2), fParam3);
}

void func_1213(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_1398(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_1394(iParam2), bParam3);
}

void func_1214(int iParam0)
{
	func_483(&(Global_1194053.f_3), iParam0);
}

void func_1215(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28345), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28346), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28347), iParam0);
	if (!func_975(iParam0))
	{
		func_1171(iParam0);
	}
}

void func_1216(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28349), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28348), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28350), iParam0);
}

void func_1217(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28349), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1071686.f_28350), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1071686.f_28348), iParam0);
}

void func_1218(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

void func_1219(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	fVar1 = (uParam2->f_67 - (*uParam1)[iVar0 /*3*/]);
	if (!MAP::DOES_BLIP_EXIST(uParam2->f_46))
	{
		uParam2->f_46 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, uParam2->f_51, fVar1);
	}
	if ((*uParam1)[iVar0 /*3*/] == uParam2->f_63)
	{
		return;
	}
	vVar2 = { func_1399(uParam2->f_51, uParam0->f_11, uParam2->f_68, ((*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] - uParam2->f_63), uParam2->f_67) };
	if (fVar1 <= uParam2->f_68)
	{
		fVar1 = uParam2->f_68;
	}
	MAP::SET_BLIP_COORDS(uParam2->f_46, vVar2);
	MAP::SET_BLIP_SCALE(uParam2->f_46, fVar1);
	uParam2->f_51 = { vVar2 };
	uParam2->f_63 = (*uParam1)[iVar0 /*3*/];
}

void func_1220(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 != 2)
	{
		if (!MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			return;
		}
		MAP::REMOVE_BLIP(&(uParam2->f_57));
	}
	if (func_68(uParam0->f_11))
	{
		return;
	}
	if (func_1400(uParam0, uParam1, uParam2))
	{
		if (MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			return;
		}
		uParam2->f_57 = MAP::_BLIP_ADD_FOR_COORD(-661723027, uParam0->f_11);
		MAP::SET_BLIP_SPRITE(uParam2->f_57, joaat("BLIP_MP_GAME_TREASURE_HUNT"), true);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam2->f_57, func_1401());
	}
	else
	{
		if (!MAP::DOES_BLIP_EXIST(uParam2->f_57))
		{
			return;
		}
		MAP::REMOVE_BLIP(&(uParam2->f_57));
	}
}

bool func_1221(var uParam0, var uParam1)
{
	bool bVar0;

	func_1402(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_1403(uParam1);
	if (!func_1404(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_1405(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == joaat("WEAPON_FALL"))
	{
		if ((*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == joaat("WEAPON_DROWNING"))
	{
		if ((*uParam0 != uParam0->f_1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1)) && ENTITY::IS_ENTITY_A_PED(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == joaat("WEAPON_DROWNING_IN_VEHICLE"))
	{
		return true;
	}
	if (!func_1404(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_1405(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_1222(var uParam0)
{
	int iVar0;

	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == joaat("WEAPON_FALL") && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == joaat("WEAPON_DROWNING") || uParam0->f_30.f_5 == joaat("WEAPON_DROWNING_IN_VEHICLE")) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == joaat("WEAPON_POISON"))
	{
		if (Global_1940085.f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_1406(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_1407(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_1408(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

int func_1223(int iParam0)
{
	return iParam0;
}

bool func_1224()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("NET_ADVANCED_CAMERA")) > 0)
	{
		return true;
	}
	return false;
}

bool func_1225(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939493[iVar0 /*16*/].f_10)))
		{
			func_1409(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1226(int iParam0)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_1227(int iParam0, int iParam1, int iParam2)
{
	if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		}
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1071686.f_21416.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1071686.f_21416.f_1[iParam0 /*8*/].f_2 = Global_1296859.f_21;
		return true;
	}
	return false;
}

void func_1228(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_1410(*uParam0);
}

void func_1229(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_1230(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_1231(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

char* func_1232(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FM_PERCENT", BUILTIN::FLOOR((fParam0 * 100f)));
}

void func_1233(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_1234(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1940144.f_111)
	{
		func_1411(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1241(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1412(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1413(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_1414(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar8 = iVar7 == (uParam1[iVar0 /*23*/])->f_14;
				iVar9 = func_1415(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1416(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_1417());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_1418((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1419())
					{
						if (func_1420((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_1421((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_1422(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_1423(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", MISC::_0x2B6846401D68E563((uParam1[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_1424(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_1425(uParam1[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_1426(iVar2))
					{
						iVar11 = uParam0->f_159;
						if ((uParam1[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_1427(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563(func_1425(uParam1[iVar0 /*23*/], uParam0->f_159), func_1428(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_1424(uParam1[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_1426(iVar3))
					{
						sVar6 = func_1029(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_1424(uParam1[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_1423(uParam0->f_159)) && !func_1430(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563(func_1424(uParam1[iVar0 /*23*/], uParam0->f_159), func_1428(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_1231(func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", func_1029(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_1427(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_0x2B6846401D68E563(func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_1428(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", joaat("COLOR_YELLOW"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_1235(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1940144.f_111)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_1431(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_1432(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_1433(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_1434(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_1412(&((uParam1[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_1433(uParam0->f_2, uParam0->f_143[iVar0], "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_1431(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_1435(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_1433(uParam0->f_2, uParam0->f_3[iVar19], "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == (*uParam1)[iVar2 /*23*/] && func_1412(&((uParam1[iVar2 /*23*/])->f_14)))
						{
							func_1433(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_1412(&((uParam1[iVar2 /*23*/])->f_14)))
			{
				func_1433(uParam0->f_2, uParam0->f_12[iVar2], "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_1433(uParam0->f_2, uParam0->f_12[iVar20], "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_1236()
{
	if (Global_1940144.f_20)
	{
		if (Global_1940144.f_5 == 1)
		{
			return 1;
		}
		if (Global_1940144.f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_1237()
{
	if (Global_1102219.f_26.f_3440.f_4 && !func_1419())
	{
		Global_1102219.f_26.f_3440.f_4 = 0;
	}
	return Global_1102219.f_26.f_3440.f_4;
}

bool func_1238()
{
	return (func_778(2) && func_1436());
}

void func_1239(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_158, 17))
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 22))
		{
			Global_1940144.f_112 = 1;
		}
		else
		{
			Global_1940144.f_112 = 0;
		}
		MISC::SET_BIT(&(uParam0->f_158), 17);
	}
	if (Global_1940144.f_111)
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((uParam1[iVar0 /*23*/])->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1240(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_1437(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_1235(uParam0, uParam1, bParam5, iParam6, iParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_1241(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_1412(&((uParam1[iVar0 /*23*/])->f_14)))
		{
			func_1438(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0 = (iVar0 + 1);
	}
}

void func_1242(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((uParam1[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_1413(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_1243(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1439(16);
	switch (uParam0->f_199)
	{
		case 0:
			func_508(1);
			func_1440(&(uParam0->f_199), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_1440(&(uParam0->f_199), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("LEADERBOARDS"), func_1441(bParam1));
			if (iVar1 == 0)
			{
				func_1440(&(uParam0->f_199), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
			{
				func_1440(&(uParam0->f_199), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("LEADERBOARDS"), func_1442());
				func_1440(&(uParam0->f_199), 4);
			}
			else if (func_1443())
			{
				func_1440(&(uParam0->f_199), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("LEADERBOARDS")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("LEADERBOARDS"));
					func_1440(&(uParam0->f_199), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_1440(&(uParam0->f_199), 1);
			}
			else
			{
				func_1440(&(uParam0->f_199), 6);
			}
			break;
		case 6:
			func_852(uParam0, bParam1);
			break;
	}
}

void func_1244(var uParam0)
{
	func_1444(&(uParam0->f_162));
	if ((MISC::IS_BIT_SET(uParam0->f_158, 14) || MISC::IS_BIT_SET(uParam0->f_158, 15)) || MISC::IS_BIT_SET(uParam0->f_158, 16))
	{
		return;
	}
	func_1445(&(uParam0->f_162), 0);
	MISC::SET_BIT(&(uParam0->f_158), 14);
}

int func_1245()
{
	return joaat("COLOR_MP_OBJECTIVE_ENEMY");
}

int func_1246()
{
	return joaat("COLOR_MP_OBJECTIVE_FRIENDLY");
}

int func_1247()
{
	return joaat("COLOR_MP_OBJECTIVE_NEUTRAL");
}

void func_1248(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_161(&((uParam0[iParam1 /*34*/])->f_31));
	iVar1 = (uParam0[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_189(&((uParam0[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_191(&((uParam0[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_304(&((uParam0[iParam1 /*34*/])->f_31));
	}
	func_1027((uParam0[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1027((uParam0[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1027((uParam0[iParam1 /*34*/])->f_19, iVar1 == 3);
}

bool func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1250(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

void func_1251(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_441(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2011 < 20)
	{
		Global_1293346.f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2011.f_1[iVar0 /*24*/] = { Global_1293346.f_2011.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1293346.f_2011.f_1[(Global_1293346.f_2011 - 1) /*24*/] = { Var1 };
}

void func_1252(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[func_1125(iParam0, 1) /*12*/].f_11 = (Global_1952637.f_83[func_1125(iParam0, 1) /*12*/].f_11 - (Global_1952637.f_83[func_1125(iParam0, 1) /*12*/].f_11 && iParam1));
}

bool func_1253(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_1254(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 - (Global_1952637.f_83[iParam0 /*12*/].f_11 && iParam1));
}

int func_1255(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1952637.f_2843.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1952637.f_2843.f_2 = 0;
		Global_1952637.f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1952637.f_2843.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637.f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1446(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637.f_2843.f_2 = (Global_1952637.f_2843.f_2 - (Global_1952637.f_2843.f_2 && Global_1952637.f_2843.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1447(iVar1, Global_1952637.f_2843.f_43[iVar0 /*2*/].f_1))
		{
			func_1448(iVar1, Global_1952637.f_2843.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1952637.f_2843.f_1 = (Global_1952637.f_2843.f_1 - 1);
	Global_1952637.f_2843.f_43[iVar0 /*2*/] = { Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/] };
	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/].f_1 = 0;
	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/] = 0;
	return 1;
}

bool func_1256(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1285(iVar0, 1);
		if (!func_1449(iVar2, 2))
		{
		}
		else if (Global_1952637.f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_1281(iVar0, 0);
				func_1450(&(Global_1952637.f_2897.f_2[(Global_1952637.f_2897 - 1) /*2*/]), 1, 6);
			}
			func_1252(iVar2, 3, 6);
			Global_1952637.f_2764[iVar0 /*2*/] = 0;
			Global_1952637.f_2764[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_1257(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = Global_1952637.f_1675.f_1[34 /*3*/];
	if ((((func_1129(iVar0) != 0 && iParam0 != joaat("MPC_HIDE_ACTION_GLOVES")) && iParam0 != joaat("MPC_HIDE_ACTION_HAT")) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return 0;
	}
	if (func_1280(iVar0, -166674229))
	{
		return 0;
	}
	return func_1451(iParam0);
}

int func_1258(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1952637.f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1285(iVar0, 1);
		if (func_1449(iVar2, 2))
		{
		}
		else if (Global_1952637.f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_1452(iVar0) == -1)
			{
				func_1281(iVar0, 0);
				func_1450(&(Global_1952637.f_2897.f_2[(Global_1952637.f_2897 - 1) /*2*/]), 2, 6);
			}
			func_1126(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_1259(int iParam0)
{
	func_1126(iParam0, 8, 6);
}

int func_1260(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_1453(&(Global_1952637.f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_1454(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_1455(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_1456(uParam3, iParam1);
	bVar2 = func_1457(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1458(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1459(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_1460(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (uParam3[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_1461(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1462(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_1460(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(uParam3[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_1261()
{
	Global_1952637.f_1057 = 0;
}

void func_1262(int iParam0)
{
	struct<33> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1313(Global_1139381.f_4796.f_34[iParam0 /*3*/], &Var0, 2, -1);
	func_1312(&Var0, iParam0, 0);
}

void func_1263(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1311(func_1310(iParam0, 1), &Var0, 0, -1);
	func_1314(Var0, iParam0, 0);
}

bool func_1264(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541.f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1265()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1257541.f_8863;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_1266(int iParam0)
{
	return func_1463(iParam0) + 30;
}

void func_1267(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900736.f_1[iParam0 /*2*/] };
	Global_1900736.f_1[iParam0 /*2*/] = { Global_1900736.f_1[iParam1 /*2*/] };
	Global_1900736.f_1[iParam1 /*2*/] = { Var0 };
}

int func_1268(int iParam0)
{
	int iVar0;

	if (Global_1196205.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205.f_129)
	{
		if (Global_1196205[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1269(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288.f_40400;
}

int func_1270(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_1464(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_1271(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_1465(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_1272(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	iVar0 = func_659(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_1273(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

bool func_1274(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1275(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_1276(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return Global_17411.f_55.f_644.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

void func_1277(int iParam0, int iParam1, int iParam2)
{
	Global_1952637.f_83[iParam0 /*12*/].f_11 = (Global_1952637.f_83[iParam0 /*12*/].f_11 || iParam1);
}

void func_1278(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1952637.f_2897.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1466(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1466(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1450(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1952637.f_2897.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1952637.f_2897.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1279(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1280(int iParam0, int iParam1)
{
	if (!func_681(iParam0, 0))
	{
		return func_1467(func_1163(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_1281(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1468(&(Global_1952637.f_2897), iParam0, iParam1);
}

int func_1282(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_1108(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (PED::_GET_PED_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE") && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_1129(Var1.f_4) != 0)
			{
			}
			else if (func_1280(Var1.f_4, -166674229))
			{
			}
			else if (func_1280(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_857(Var1.f_4);
				if (func_1470(iParam2, func_1469(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

bool func_1283(int iParam0, bool bParam1)
{
	if (!func_681(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE") || iParam0 == joaat("CLOTHING_ITEM_BEARD_NONE")))
	{
		return false;
	}
	if (func_1280(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

void func_1284(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar7;
	int iVar8;

	Var0 = func_1121(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		return;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var0))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_1125(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("COMPONENT")))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1952637.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_1281(iVar8, 0);
			}
		}
	}
}

int func_1285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return 735520874;
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1286(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
	iVar0 = 10;
	iVar1 = func_857(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 119907797)
	{
		if (func_1280(iParam1, 458991572))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_1280(iParam1, -93469181))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_1280(uParam0->f_1[iVar0 /*3*/], -1446529222) && func_1280(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam1, -93469181)) && func_1280(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

void func_1287(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("BASE");
	}
}

void func_1288(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_1283(iVar1, 0) && func_1280(iVar1, -180472385))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_857(iVar1) == 2086043523) && func_1280(iParam1, -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

void func_1289(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_857(iParam2))
	{
		case -525676072:
			func_1471(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1472(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1290(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_857(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_1281(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_857(iParam2) == 81053684 || func_1280(iParam2, 160827531))
	{
		func_1473(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_1280(iParam2, -180472385) && !func_1283(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	if (func_1280(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_1281(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_1281(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		func_1281(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_1281(iVar0, iParam3);
		}
	}
}

void func_1291(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 12;
	iVar1 = 0;
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	if (joaat("NECKTIES") == PED::_GET_PED_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_1280(iParam2, 1872585553)) || func_857(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_1283(uParam0->f_1[iVar0 /*3*/], 0) && func_1280(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_1283(uParam0->f_1[iVar0 /*3*/], 0) && func_1280(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_857(iVar2) == 1759215194 && func_857(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0 /*3*/] = func_1474(iParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam4);
	}
	else if (func_1475(iVar2, bParam1, iVar1))
	{
		iVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_857(iVar2) == 912453393 && func_1476(32))
		{
			iVar3 |= 1;
		}
		if (func_1280(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_1132(Global_1952637.f_83[iVar0 /*12*/].f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = iVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam4);
			func_1299(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_1283(uParam0->f_1[iVar0 /*3*/], 0))
	{
		return;
	}
	func_1281(iVar0, iParam4);
	if (uParam0->f_1[iParam3 /*3*/].f_1 == -1539589426 || uParam0->f_1[iParam3 /*3*/].f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3 /*3*/].f_1 == 0 || uParam0->f_1[iParam3 /*3*/].f_1 == joaat("BASE"))
	{
		if (func_1477(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3 /*3*/].f_1 = -1539589426;
			return;
		}
	}
	if (func_1477(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3 /*3*/].f_1 = 1334603721;
	}
}

void func_1292(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

void func_1293(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_857(iParam2))
	{
		case 698653232:
			func_1478(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_1479(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1294(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_857(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1480(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_1481(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1295(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 18;
	if (func_857(uParam0->f_1[iVar0 /*3*/]) == 912453393)
	{
		func_1281(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1281(iVar0, iParam3);
		if (uParam0->f_1[iVar0 /*3*/].f_1 == -1539589426 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE"))
		{
			if (func_1477(uParam0->f_1[iVar0 /*3*/], iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
				return;
			}
		}
		if (func_1477(uParam0->f_1[iVar0 /*3*/], iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1334603721;
		}
	}
}

void func_1296(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(uParam0->f_1[iVar0 /*3*/], 1537768121))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
}

void func_1297(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_1482(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_1280(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_1283(uParam0->f_1[iVar0 /*3*/], 0) && func_1280(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

void func_1298(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(uParam0->f_1[iVar0 /*3*/], 358628372))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
}

void func_1299(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_857(iParam2))
	{
		case 1759215194:
			func_1483(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1484(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_1485(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_1486(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1487(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_1488(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1300(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_857(iParam2))
	{
		case 1769055947:
			func_1489(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_1490(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1301(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		func_1491(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_1280(iParam2, 813132419) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_857(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	if ((func_1280(iParam2, -1650340550) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/]) && func_857(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_1280(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

int func_1302(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<16> Var65;
	struct<17> Var81;

	if (func_1492(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_682(iParam0, joaat("DEFAULT"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_961(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1493(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_1494(iParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_1495(joaat("USE"), &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = iParam3;
			Var81.f_7 = iParam2;
			func_1496(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_659(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_1303(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return false;
	}
	if (func_1492(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_969(*uParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_961(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_23() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1495(joaat("USE"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1496(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_659(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1304(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1305(int iParam0)
{
	if (func_1304(iParam0))
	{
		return true;
	}
	else if (func_1497(iParam0))
	{
		return true;
	}
	return false;
}

void func_1306(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_946(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

bool func_1307(int iParam0)
{
	int iVar0;

	iVar0 = func_1308(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

int func_1308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("NET_PLAYER_ABILITY__STRANGE_MEDICINE"):
			return 18;
		case joaat("NET_PLAYER_ABILITY__FOCUS_FIRE"):
			return 5;
		case joaat("NET_PLAYER_ABILITY__NECESSITY_BREEDS"):
			return 10;
		case joaat("NET_PLAYER_ABILITY__THE_GIFT_OF_FOCUS"):
			return 20;
		case joaat("NET_PLAYER_ABILITY__RIDE_LIKE_THE_WIND"):
			return 33;
		case joaat("NET_PLAYER_ABILITY__FOOL_ME_ONCE"):
			return 32;
		case joaat("NET_PLAYER_ABILITY__GUNSLINGERS_CHOICE"):
			return 34;
		case joaat("NET_PLAYER_ABILITY__COME_BACK_STRONGER"):
			return 3;
		case joaat("NET_PLAYER_ABILITY__WINNING_STREAK"):
			return 24;
		case joaat("NET_PLAYER_ABILITY__KICK_IN_THE_BUTT"):
			return 26;
		case joaat("NET_PLAYER_ABILITY__PEAK_CONDITION"):
			return 14;
		case joaat("NET_PLAYER_ABILITY__THE_SHORT_GAME"):
			return 21;
		case joaat("NET_PLAYER_ABILITY__OVERRIDE_REVENGE_SLOW_TIME"):
			return 25;
		case joaat("NET_PLAYER_ABILITY__IRON_LUNG"):
			return 30;
		case joaat("NET_PLAYER_ABILITY__THE_UNBLINKING_EYE"):
			return 22;
		case 0:
			return 0;
		case joaat("NET_PLAYER_ABILITY__FRIENDS_FOR_LIFE"):
			return 31;
		case joaat("NET_PLAYER_ABILITY__NEVER_WITHOUT_ONE"):
			return 11;
		case joaat("NET_PLAYER_ABILITY__OF_SINGLE_PURPOSE"):
			return 12;
		case joaat("NET_PLAYER_ABILITY__A_MOMENT_TO_RECUPERATE"):
			return 1;
		case joaat("NET_PLAYER_ABILITY__SLIPPERY_BASTARD"):
			return 16;
		case joaat("NET_PLAYER_ABILITY__PAINT_IT_BLACK"):
			return 13;
		case joaat("NET_PLAYER_ABILITY__TAKE_THE_PAIN_AWAY"):
			return 19;
		case joaat("NET_PLAYER_ABILITY__EYE_FOR_AN_EYE"):
			return 4;
		case joaat("NET_PLAYER_ABILITY__COLD_BLOODED"):
			return 2;
		case joaat("NET_PLAYER_ABILITY__HUNKER_DOWN"):
			return 8;
		case joaat("NET_PLAYER_ABILITY__QUITE_AN_INSPIRATION"):
			return 15;
		case joaat("NET_PLAYER_ABILITY__TO_FIGHT_ANOTHER_DAY"):
			return 23;
		case joaat("NET_PLAYER_ABILITY__HORSEMAN"):
			return 7;
		case joaat("NET_PLAYER_ABILITY__LIVE_FOR_THE_FIGHT"):
			return 27;
		case joaat("NET_PLAYER_ABILITY__HANGMAN"):
			return 6;
		case joaat("NET_PLAYER_ABILITY__STRENGTH_IN_NUMBERS"):
			return 29;
		case joaat("NET_PLAYER_ABILITY__SLOW_AND_STEADY"):
			return 17;
		case joaat("NET_PLAYER_ABILITY__LANDONS_PATIENCE"):
			return 9;
		case joaat("NET_PLAYER_ABILITY__SHARPSHOOTER"):
			return 28;
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

bool func_1309(int iParam0)
{
	if (!func_1498(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

int func_1310(int iParam0, bool bParam1)
{
	struct<4> Var0;

	Var0 = { func_677(bParam1) };
	return func_1500(Var0, func_1499(iParam0), 0, bParam1);
}

int func_1311(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1501())
	{
		return 0;
	}
	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	return func_1503(func_1502(iParam0), uParam1, iParam2, iParam3);
}

int func_1312(var uParam0, int iParam1, bool bParam2)
{
	if (!func_1498(iParam1))
	{
		return 0;
	}
	if (func_1504(uParam0))
	{
		func_1505();
	}
	func_1506(iParam1);
	if (bParam2 && func_1507())
	{
		return 0;
	}
	func_1508(iParam1);
	func_1509(uParam0);
	func_1510(iParam1, uParam0, 1);
	return 1;
}

bool func_1313(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1501())
	{
		return false;
	}
	return func_1503(iParam0, uParam1, iParam2, iParam3);
}

int func_1314(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, int iParam34, bool bParam35)
{
	if (!func_1498(iParam34))
	{
		return 0;
	}
	func_1511(&uParam0, iParam34);
	if (bParam35 && func_1507())
	{
		return 0;
	}
	func_1512(&uParam0, iParam34);
	func_1509(&uParam0);
	func_1510(iParam34, &uParam0, 1);
	return 1;
}

int func_1315(int iParam0)
{
	if (func_403(&(Global_1956200.f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1316(int iParam0)
{
	if (func_404(&(Global_1956200.f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1317(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1513(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_1318(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_10;
		case 2:
			return uParam0->f_6;
		default:
			break;
	}
	return 1;
}

float func_1319(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_3;
		case 1:
			return uParam0->f_11;
		case 2:
			return uParam0->f_7;
		default:
			break;
	}
	return 0f;
}

void func_1320(int iParam0, float fParam1)
{
	Global_17411.f_55.f_2439.f_24[iParam0 /*3*/] = fParam1;
}

int func_1321(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_946(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1514(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1515(iParam0, 7000, iParam5);
		}
		func_1516(iVar0, iParam0, fParam1);
		func_1517(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

void func_1322()
{
	if (!Global_1956200.f_1431.f_85)
	{
		return;
	}
	Global_1956200.f_1431.f_85 = 0;
}

void func_1323()
{
	if (!Global_1956200.f_1431.f_92)
	{
		return;
	}
	Global_1956200.f_1431.f_92 = 0;
}

void func_1324()
{
	if (!Global_1956200.f_1431.f_89)
	{
		return;
	}
	Global_1956200.f_1431.f_89 = 0;
}

void func_1325()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	sVar0 = func_1518();
	sVar1 = func_1519();
	bVar2 = (((Global_1956200.f_1431.f_89 && Global_1956200.f_1431.f_92) || (Global_1956200.f_1431.f_89 && Global_1956200.f_1431.f_85)) || (Global_1956200.f_1431.f_85 && Global_1956200.f_1431.f_92));
	bVar3 = (Global_1956200.f_1431.f_89 || Global_1956200.f_1431.f_85);
	if (Global_1956200.f_1431.f_92 && !func_1520())
	{
		if (!Global_1956200.f_1431.f_93)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
			Global_1956200.f_1431.f_93 = 1;
		}
	}
	else if (Global_1956200.f_1431.f_93)
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sVar0);
		Global_1956200.f_1431.f_93 = 0;
	}
	if (bVar3)
	{
		fVar4 = ((MISC::GET_FRAME_TIME() * 1000f) / 2000f);
		fVar5 = (1f * fVar4);
		fVar6 = (-1f * fVar4);
		if (bVar2)
		{
			Global_1956200.f_1431.f_95 = (Global_1956200.f_1431.f_95 + fVar5);
			Global_1956200.f_1431.f_91 = (Global_1956200.f_1431.f_91 + fVar6);
			Global_1956200.f_1431.f_87 = (Global_1956200.f_1431.f_87 + fVar6);
		}
		else if (Global_1956200.f_1431.f_89)
		{
			Global_1956200.f_1431.f_95 = (Global_1956200.f_1431.f_95 + fVar6);
			Global_1956200.f_1431.f_91 = (Global_1956200.f_1431.f_91 + fVar5);
			Global_1956200.f_1431.f_87 = (Global_1956200.f_1431.f_87 + fVar6);
		}
		else if (Global_1956200.f_1431.f_85)
		{
			Global_1956200.f_1431.f_95 = (Global_1956200.f_1431.f_95 + fVar6);
			Global_1956200.f_1431.f_91 = (Global_1956200.f_1431.f_91 + fVar6);
			Global_1956200.f_1431.f_87 = (Global_1956200.f_1431.f_87 + fVar5);
		}
		Global_1956200.f_1431.f_95 = func_636(Global_1956200.f_1431.f_95, 0f, 1f);
		Global_1956200.f_1431.f_87 = func_636(Global_1956200.f_1431.f_87, 0f, 1f);
		Global_1956200.f_1431.f_91 = func_636(Global_1956200.f_1431.f_91, 0f, 1f);
		if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1) && !func_1147())
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
		}
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 1, Global_1956200.f_1431.f_91);
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 2, Global_1956200.f_1431.f_87);
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 3, Global_1956200.f_1431.f_95);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
	{
		Global_1956200.f_1431.f_95 = 0f;
		Global_1956200.f_1431.f_91 = 0f;
		Global_1956200.f_1431.f_87 = 0f;
		GRAPHICS::_0xC5CB91D65852ED7E(sVar1);
	}
	if (Global_1956200.f_1431.f_88)
	{
		fVar7 = PLAYER::_GET_PLAYER_HEALTH(Global_1296859.f_154[Global_1296859]);
		fVar8 = (IntToFloat(PED::GET_PED_MAX_HEALTH(Global_1296859.f_8)) * 0.1f);
		func_1521(fVar7, fVar8);
	}
	else
	{
		func_1522();
	}
}

int func_1326(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1304(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1523(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1524(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1523(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1525(joaat("STATUS_EFFECT__TRACKING"));
			func_1526(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1523(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1527(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1525(joaat("STATUS_EFFECT__POISON"));
			func_1528(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_1528(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_1528(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17411.f_55.f_2439.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1327(int iParam0)
{
	return func_1280(iParam0, 1279601681);
}

int func_1328(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1529(&uParam0, iParam4, bParam5, iParam6);
}

bool func_1329(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_1165(iParam0) && func_1530(iParam0))
		{
			func_1531(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_1330(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1532(iParam0, iParam1);
	Var0 = { func_684(iParam0, 0, 1) };
	iVar5 = func_1166(iParam0, &Var0, 0, 0);
	iVar6 = func_396(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1280(iParam0, -2051813666))
		{
			func_1343(674, 1);
		}
		else if (func_23() == -1)
		{
			func_1343(673, 0);
		}
	}
	if (func_960(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1331(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1533())
	{
		return;
	}
	switch (func_1534(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940144.f_70.f_5 = 1;
			Global_1940144.f_70.f_6 = 0;
			Global_1940144.f_70.f_1 = iParam0;
			break;
	}
}

bool func_1332(int iParam0, int iParam1)
{
	if (!func_681(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_1333(int iParam0)
{
	if (!func_1535(iParam0))
	{
		return false;
	}
	return func_1536(iParam0);
}

void func_1334(int iParam0)
{
	if (!func_1535(iParam0))
	{
		return;
	}
	func_1537(iParam0);
	func_1538(iParam0);
}

void func_1335(int iParam0)
{
	if (func_1280(iParam0, -1522723129))
	{
		func_1539(-848633709, 0, 255, 0, 0);
	}
	else if (func_1280(iParam0, -283942357))
	{
		func_1539(-981153234, 0, 255, 0, 0);
	}
	else if (func_1280(iParam0, 683680997))
	{
		func_1539(-756350192, 0, 255, 0, 0);
	}
	else if (func_1280(iParam0, 1307628809))
	{
		func_1539(603094518, 0, 255, 0, 0);
	}
}

int func_1336(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_BOLAS"):
			iVar0 = joaat("WEAPON_THROWN_BOLAS");
			break;
		case joaat("AMMO_POISONBOTTLE"):
			iVar0 = joaat("WEAPON_THROWN_POISONBOTTLE");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_681(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1540(iVar0) || func_1541(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1337(int iParam0, bool bParam1)
{
	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_1338(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != -1)
	{
		return;
	}
	if (!func_1542(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_1339(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		Var0 = { func_684(iParam0, 0, 1) };
		if (func_965(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_966(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_678(iParam0, Var0, Var0.f_4, 0) };
				func_1303(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_961(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_1340(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
		func_1543(iParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_1340(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_676(iParam0))
	{
		return false;
	}
	if (!func_961(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_1341(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_1337(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_1338(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1544(iVar0);
			}
		}
		if (!func_960(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1531(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1545(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_1339(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
			{
				func_1339(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(iVar0))
			{
				func_1339(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_1546())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1547(iVar0))
				{
					func_1339(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1339(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_1548(Global_34, 2, 0, 1);
				if ((((func_1542(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_1351(joaat("UPGRADE_OFFHAND_HOLSTER"), 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_1542(iVar7) && func_1351(joaat("UPGRADE_OFFHAND_HOLSTER"), 1))
				{
					if (!func_1339(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1339(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1339(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_1343(515, 1);
	}
	return true;
}

bool func_1342(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_676(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_1542(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1354(func_1549(iParam0), func_1353(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_961(0))
	{
		if (func_1340(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_399(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1343(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1550(iParam0, &iVar0, &iVar1);
	if (!func_1551(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1552(iVar0, iVar1);
}

bool func_1344()
{
	return false;
}

int func_1345(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_23() == 0)
	{
		func_1359(iParam0, 0);
		return 0;
	}
	iVar0 = func_1553(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1554(iVar0, sParam4, iParam5, 0);
	}
	func_1555(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_1346(int iParam0)
{
}

void func_1347(int iParam0)
{
}

void func_1348(int iParam0)
{
}

void func_1349(int iParam0)
{
}

void func_1350()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

bool func_1351(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_681(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_962(iParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_1556(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_1557(iParam0))
			{
				return true;
			}
			break;
	}
	return func_992(iParam0, 0, 0, 0) >= iParam1;
}

void func_1352(int iParam0, int iParam1)
{
	var uVar0;

	func_1364(iParam0, iParam1, &uVar0);
}

int func_1353(int iParam0)
{
	int iVar0;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1558(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_1354(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1550(iParam0, &iVar0, &iVar1);
	if (!func_1551(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1559(iParam0, 1024))
	{
		return;
	}
	func_1552(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_1355(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1550(iParam0, &iVar0, &iVar1);
	if (!func_1551(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1559(iParam0, 1024))
	{
		return;
	}
	func_1552(iVar0, iVar1);
	Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904651.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_1356(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

void func_1357(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
}

bool func_1358()
{
	if (INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_1359(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_1560(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_1561(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_1360(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_681(iParam0, 0))
	{
		return Var0;
	}
	if (func_1280(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_1280(iParam0, -537818634))
			{
				return func_501(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_501(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_1280(iParam0, -537818634))
	{
		return func_501(joaat("MEDICINE_ITEMS"));
	}
	if (func_1280(iParam0, 2084895747))
	{
		return func_501(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_1361(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_1362(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1562(Global_1903071.f_37);
	func_1564(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1563(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1363(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_681(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_1565() || bParam6)
	{
		func_1566(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1567(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1567(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1332(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_962(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if (((((((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER")) && iParam0 != joaat("AMMO_HATCHET_HUNTER")) && iParam0 != joaat("AMMO_TOMAHAWK_ANCIENT")) && iParam0 != joaat("AMMO_BOLAS")) && iParam0 != joaat("AMMO_POISONBOTTLE")) && iParam0 != joaat("AMMO_MOONSHINEJUG_MP"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	iVar12 = func_857(iParam0);
	if (((((((iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION")) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1568(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = joaat("COLOR_GREYMID");
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_1280(iParam0, 474910316))
	{
		sVar17 = func_1569(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	if (func_1280(iParam0, 1816585950))
	{
		iVar13 = joaat("COLOR_OBJECTIVE");
	}
	if (func_1570(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = joaat("COLOR_YELLOW");
		}
		else
		{
			iVar13 = joaat("COLOR_YELLOWDARK");
		}
	}
	iVar18 = func_1353(iParam0);
	if ((func_1571(iVar12) && func_1280(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1572(iParam0);
	}
	else if (func_962(iParam0) == joaat("CLOTHING"))
	{
		iVar19 = func_1573(iParam0);
		if (func_681(iVar19, 0))
		{
			iVar18 = func_1353(iVar19);
		}
	}
	if (func_1574(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_1575(iParam0, -915411861, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_801(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != joaat("CLOTHING_ITEM_HAIR_NONE")) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != joaat("CLOTHING_ITEM_M_BEARD_STUBBLE")) && iParam0 != joaat("CLOTHING_ITEM_BEARD_NONE"))) || (iVar12 == 252325943 && iParam0 != joaat("CLOTHING_BLEND_LIPSTICK_NONE"))) || (iVar12 == -636562458 && iParam0 != joaat("CLOTHING_BLEND_EYESHADOW_NONE")))
	{
		sVar21 = MISC::_CREATE_VAR_STRING(0, func_1576(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_1577(iParam0, &cVar22))
		{
			sVar21 = func_1383(func_1578(cVar22), joaat("COLOR_PURE_WHITE"));
		}
	}
	func_1564(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_1364(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

void func_1365(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1366()
{
	return Global_1301323.f_288;
}

int func_1367()
{
	return Global_1301323.f_150.f_4;
}

void func_1368(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1100(&(Global_1900736.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900736.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_998(Param0, 0, 1, -1);
}

bool func_1369(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_73(Param0))
	{
		return false;
	}
	if (!func_73(Param2))
	{
		return true;
	}
	iVar0 = func_630(Param0);
	iVar1 = func_630(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1370(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1579(iParam0))
	{
		return false;
	}
	if (func_1580(iParam0, uParam1, &uVar0))
	{
		func_1581(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1371(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1196205.f_129 >= 32)
	{
		Global_1196205.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1196205[Global_1196205.f_129 /*4*/] = { *uParam0 };
		Global_1196205.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1196205[iVar1 /*4*/] };
		Global_1196205[iVar1 /*4*/] = { Global_1196205[iVar1 + 1 /*4*/] };
		Global_1196205[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1196205[iParam1 /*4*/] = { *uParam0 };
	Global_1196205.f_129++;
}

int func_1372()
{
	int iVar0;

	iVar0 = Global_1296851.f_2.f_4;
	if (!func_1582(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1373(int iParam0, int iParam1, int iParam2)
{
	return func_1583(iParam0, iParam1, iParam2);
}

int func_1374(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1584(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_13 != -1)
	{
		if (iParam0 == Global_1296859.f_10)
		{
			if (!Global_1296859.f_11)
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

int func_1375()
{
	int iVar0;

	iVar0 = func_1585(120839576, 59806960, 1, 0, 1, 0);
	if (!func_1582(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1376(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<17> Var22;

	iVar0 = -1;
	Var1 = { func_684(joaat("CURRENCY_CASH"), 1, 0) };
	Var6 = { func_1586(joaat("CURRENCY_CASH"), Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_1495(joaat("USE"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_1496(iVar0, Var22);
	}
	return iVar0;
}

void func_1377()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1587(iVar0))
		{
			func_1588(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

int func_1378(int iParam0)
{
	return Global_1109340.f_193[iParam0 /*8*/];
}

void func_1379(int iParam0)
{
	Global_1109340.f_193[Global_1296859 /*8*/] = iParam0;
	func_700(&(Global_1108365.f_935.f_30));
}

bool func_1380(struct<38> Param0, var uParam38)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Param0.f_37))
	{
		return DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

int func_1381()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[0 /*39*/].f_25);
	iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[0 /*39*/].f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/].f_25);
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1940311.f_242.f_14[iVar0 /*39*/].f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_620(Global_1940311.f_242.f_14[iVar3 /*39*/]);
	return iVar3;
}

void func_1382(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1091(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1091(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1091(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1091(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("IB_SELECT");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1091(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1091(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1091(66), Param10.f_15);
}

char* func_1383(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_801(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_1384(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1385(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_1386(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_1387(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_1388(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1389(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1390(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_1391(struct<2> Param0)
{
	if (func_622(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_622(Param0)))
	{
		STATS::_0x99230691875FC218(func_630(Param0), func_622(Param0), Global_35);
	}
}

Vector3 func_1392(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_1393(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1246();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_1245();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return joaat("RPG_TEXTURES");
		case 22:
			return joaat("RPG_AGITATION");
		case 24:
			return joaat("COLOR_ENEMY");
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_1245();
		case 30:
			return func_1245();
		default:
			break;
	}
	return 0;
}

char* func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1396(int iParam0)
{
	return 0;
}

float func_1397(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1398(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

Vector3 func_1399(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = func_463(vParam0, vParam3);
	if (fVar0 <= fParam6)
	{
		return vParam0;
	}
	if ((fParam8 - fParam6) <= fParam7)
	{
		return vParam0;
	}
	vVar1 = { vParam3 - vParam0 };
	vVar1 = { func_856(vVar1) };
	return vParam0 + vVar1 * Vector(fParam7, fParam7, fParam7);
}

bool func_1400(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (PLAYER::IS_PLAYER_DEAD(uParam2->f_62))
	{
		func_1589(&((uParam1[iVar0 /*3*/])->f_2), 128);
	}
	vVar1 = { func_1590(uParam2->f_62) };
	fVar4 = func_463(vVar1, uParam0->f_11);
	if (fVar4 <= 5f)
	{
		func_819(&((uParam1[iVar0 /*3*/])->f_2), 128);
		return true;
	}
	else
	{
		func_1589(&((uParam1[iVar0 /*3*/])->f_2), 128);
	}
	iVar8 = func_1591();
	iVar9 = 0;
	while (iVar9 <= (iVar8 - 1))
	{
		iVar5 = func_1592(iVar9);
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5);
			iVar7 = iVar6;
			if (func_810(&((uParam1[iVar7 /*3*/])->f_2), 128))
			{
				return true;
			}
		}
		iVar9++;
	}
	return false;
}

char* func_1401()
{
	return "FME_TH_BLIP_NAME";
}

void func_1402(var uParam0)
{
	struct<32> Var0;

	func_1593(uParam0);
	func_1593(&(uParam0->f_6));
	func_1593(&(uParam0->f_12));
	func_1593(&(uParam0->f_18));
	func_1593(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_1403(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = PLAYER::PLAYER_ID();
	uParam0->f_2 = PLAYER::GET_PLAYER_PED(uParam0->f_3);
	uParam0->f_1 = func_1223(uParam0->f_2);
	uParam0->f_4 = PLAYER::GET_PLAYER_TEAM(uParam0->f_3);
	uParam0->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2);
	return 1;
}

bool func_1404(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			*uParam1 = 1;
		}
		else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (PED::IS_PED_HUMAN(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		*uParam1 = 4;
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam1->f_2);
			uParam1->f_4 = PLAYER::GET_PLAYER_TEAM(uParam1->f_3);
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = joaat("REL_NO_RELATIONSHIP");
			break;
	}
	return true;
}

bool func_1405(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_1404(PED::_GET_RIDER_OF_MOUNT(uParam0->f_2, false), uParam1);
		case 4:
			return func_1404(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_1406(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || NETWORK::_0xFE53B1F8D43F19BF(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
				return 9;
			case 2:
				return 9;
			case 3:
				return 9;
			case 4:
				return 7;
			case 6:
				return 7;
			case 5:
				return 4;
			case 7:
				return 4;
			case 0:
				return 4;
			default:
				break;
		}
		return 4;
	}
	return 0;
}

int func_1407(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	if (uParam0->f_18 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 == 4)
	{
		return 18;
	}
	if (uParam0->f_18 == 6)
	{
		return 17;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_6.f_5, uParam0->f_18.f_5);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uParam0->f_12.f_5, uParam0->f_18.f_5);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_18.f_1))
	{
		if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1)))
		{
			return 19;
		}
	}
	if (LAW::_0x40851BCC33ACD9AB(uParam0->f_18.f_2))
	{
		return 11;
	}
	if (((!PED::IS_PED_HUMAN(uParam0->f_18.f_2) && !PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(uParam0->f_18.f_1))) && FLOCK::_0xF8B48A361DC388AE(uParam0->f_18.f_2) == 2) && FLOCK::_0x3B005FF0538ED2A9(uParam0->f_18.f_2) == 1)
	{
		return 16;
	}
	switch (uParam0->f_18.f_5)
	{
		case joaat("REL_CIVMALE"):
			return 10;
		case joaat("REL_CIVFEMALE"):
			return 10;
		case joaat("REL_CIVNATIVE"):
			return 10;
		case joaat("REL_DOMESTICATED_ANIMAL"):
			if (FLOCK::_0x3B005FF0538ED2A9(uParam0->f_18.f_2) == 1)
			{
				return 14;
			}
			return 10;
		case joaat("REL_HEN_ANIMAL"):
			return 10;
		case joaat("REL_COP"):
			return 11;
		case joaat("REL_GUAMA_LAW"):
			return 11;
		case joaat("REL_PINKERTONS"):
			return 11;
		case joaat("REL_WILD_ANIMAL"):
			return 14;
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return 14;
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return 15;
		case joaat("REL_ALLIGATOR"):
			return 15;
		case joaat("REL_BOAR"):
			return 15;
		case joaat("REL_PLAYER_ENEMY"):
			return 12;
		case joaat("REL_CRIMINALS"):
			return 12;
		case joaat("REL_GUNSLINGERS"):
			return 12;
		case joaat("REL_GANG_DUTCHS"):
			return 12;
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 12;
		case joaat("REL_GANG_CREOLE"):
			return 12;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 12;
		case joaat("REL_GANG_SMUGGLERS"):
			return 12;
		case joaat("REL_GANG_ODRISCOLL"):
			return 12;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 12;
		case joaat("REL_NETWORK_FREE_AGENT"):
			return 20;
		case joaat("REL_GT_FFA"):
			return 20;
		case joaat("REL_GT_TEAM_0"):
			return 20;
		case joaat("REL_GT_TEAM_1"):
			return 20;
		case joaat("REL_GT_TEAM_2"):
			return 20;
		case joaat("REL_GT_TEAM_3"):
			return 20;
		case joaat("REL_GT_TEAM_4"):
			return 20;
		case joaat("REL_GT_TEAM_5"):
			return 20;
		case joaat("REL_GT_TEAM_6"):
			return 20;
		case joaat("REL_GT_TEAM_7"):
			return 20;
		case joaat("REL_PLAYER_COP"):
			return 20;
		case joaat("REL_PLAYER_0"):
			return 20;
		case joaat("REL_PLAYER_1"):
			return 20;
		case joaat("REL_PLAYER_2"):
			return 20;
		case joaat("REL_PLAYER_3"):
			return 20;
		case joaat("REL_PLAYER_4"):
			return 20;
		case joaat("REL_PLAYER_5"):
			return 20;
		case joaat("REL_PLAYER_6"):
			return 20;
		case joaat("REL_PLAYER_7"):
			return 20;
		case joaat("REL_PLAYER_8"):
			return 20;
		case joaat("REL_PLAYER_9"):
			return 20;
		case joaat("REL_PLAYER_10"):
			return 20;
		case joaat("REL_PLAYER_11"):
			return 20;
		case joaat("REL_PLAYER_12"):
			return 20;
		case joaat("REL_PLAYER_13"):
			return 20;
		case joaat("REL_PLAYER_14"):
			return 20;
		case joaat("REL_PLAYER_15"):
			return 20;
		case joaat("REL_PLAYER_16"):
			return 20;
		case joaat("REL_PLAYER_17"):
			return 20;
		case joaat("REL_PLAYER_18"):
			return 20;
		case joaat("REL_PLAYER_19"):
			return 20;
		case joaat("REL_PLAYER_20"):
			return 20;
		case joaat("REL_PLAYER_21"):
			return 20;
		case joaat("REL_PLAYER_22"):
			return 20;
		case joaat("REL_PLAYER_23"):
			return 20;
		case joaat("REL_PLAYER_24"):
			return 20;
		case joaat("REL_PLAYER_25"):
			return 20;
		case joaat("REL_PLAYER_26"):
			return 20;
		case joaat("REL_PLAYER_27"):
			return 20;
		case joaat("REL_PLAYER_28"):
			return 20;
		case joaat("REL_PLAYER_29"):
			return 20;
		case joaat("REL_PLAYER_30"):
			return 20;
		case joaat("REL_PLAYER_31"):
			return 20;
		default:
			break;
	}
	switch (iVar1)
	{
		case 1:
			return 10;
		case 2:
			return 10;
		case 3:
			return 10;
		case 4:
			return 12;
		case 6:
			return 12;
		case 5:
			return 13;
		case 7:
			return 13;
		case 0:
			return 13;
		default:
			break;
	}
	return 13;
	return 0;
}

int func_1408(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_6 == 1)
	{
		return 0;
	}
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = false;
	if (uParam0->f_12 == 2 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar3 = uParam0->f_12.f_5;
		iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar3, uParam0->f_18.f_5);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_12.f_2))
		{
			bVar1 = true;
		}
	}
	else if (uParam0->f_6 != 1 && uParam0->f_6 != 0)
	{
		bVar0 = true;
		iVar3 = uParam0->f_6.f_5;
		iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar3, uParam0->f_18.f_5);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_2) && LAW::_0x40851BCC33ACD9AB(uParam0->f_6.f_2))
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	if (bVar1)
	{
		return 22;
	}
	switch (iVar3)
	{
		case joaat("REL_CIVMALE"):
			return 21;
		case joaat("REL_CIVFEMALE"):
			return 21;
		case joaat("REL_CIVNATIVE"):
			return 21;
		case joaat("REL_DOMESTICATED_ANIMAL"):
			return 21;
		case joaat("REL_HEN_ANIMAL"):
			return 21;
		case joaat("REL_COP"):
			return 22;
		case joaat("REL_GUAMA_LAW"):
			return 22;
		case joaat("REL_PINKERTONS"):
			return 22;
		case joaat("REL_WILD_ANIMAL"):
			return 25;
		case joaat("REL_WILD_ANIMAL_BIRD"):
			return 25;
		case joaat("REL_WILD_ANIMAL_PREDATOR"):
			return 26;
		case joaat("REL_ALLIGATOR"):
			return 26;
		case joaat("REL_BOAR"):
			return 26;
		case joaat("REL_PLAYER_ENEMY"):
			return 23;
		case joaat("REL_CRIMINALS"):
			return 23;
		case joaat("REL_GUNSLINGERS"):
			return 23;
		case joaat("REL_GANG_DUTCHS"):
			return 23;
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 23;
		case joaat("REL_GANG_CREOLE"):
			return 23;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 23;
		case joaat("REL_GANG_SMUGGLERS"):
			return 23;
		case joaat("REL_GANG_ODRISCOLL"):
			return 23;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 23;
		case joaat("REL_NETWORK_FREE_AGENT"):
			return 27;
		case joaat("REL_GT_FFA"):
			return 27;
		case joaat("REL_GT_TEAM_0"):
			return 27;
		case joaat("REL_GT_TEAM_1"):
			return 27;
		case joaat("REL_GT_TEAM_2"):
			return 27;
		case joaat("REL_GT_TEAM_3"):
			return 27;
		case joaat("REL_GT_TEAM_4"):
			return 27;
		case joaat("REL_GT_TEAM_5"):
			return 27;
		case joaat("REL_GT_TEAM_6"):
			return 27;
		case joaat("REL_GT_TEAM_7"):
			return 27;
		case joaat("REL_PLAYER_COP"):
			return 27;
		case joaat("REL_PLAYER_0"):
			return 27;
		case joaat("REL_PLAYER_1"):
			return 27;
		case joaat("REL_PLAYER_2"):
			return 27;
		case joaat("REL_PLAYER_3"):
			return 27;
		case joaat("REL_PLAYER_4"):
			return 27;
		case joaat("REL_PLAYER_5"):
			return 27;
		case joaat("REL_PLAYER_6"):
			return 27;
		case joaat("REL_PLAYER_7"):
			return 27;
		case joaat("REL_PLAYER_8"):
			return 27;
		case joaat("REL_PLAYER_9"):
			return 27;
		case joaat("REL_PLAYER_10"):
			return 27;
		case joaat("REL_PLAYER_11"):
			return 27;
		case joaat("REL_PLAYER_12"):
			return 27;
		case joaat("REL_PLAYER_13"):
			return 27;
		case joaat("REL_PLAYER_14"):
			return 27;
		case joaat("REL_PLAYER_15"):
			return 27;
		case joaat("REL_PLAYER_16"):
			return 27;
		case joaat("REL_PLAYER_17"):
			return 27;
		case joaat("REL_PLAYER_18"):
			return 27;
		case joaat("REL_PLAYER_19"):
			return 27;
		case joaat("REL_PLAYER_20"):
			return 27;
		case joaat("REL_PLAYER_21"):
			return 27;
		case joaat("REL_PLAYER_22"):
			return 27;
		case joaat("REL_PLAYER_23"):
			return 27;
		case joaat("REL_PLAYER_24"):
			return 27;
		case joaat("REL_PLAYER_25"):
			return 27;
		case joaat("REL_PLAYER_26"):
			return 27;
		case joaat("REL_PLAYER_27"):
			return 27;
		case joaat("REL_PLAYER_28"):
			return 27;
		case joaat("REL_PLAYER_29"):
			return 27;
		case joaat("REL_PLAYER_30"):
			return 27;
		case joaat("REL_PLAYER_31"):
			return 27;
		default:
			break;
	}
	switch (iVar2)
	{
		case 1:
			return 21;
		case 2:
			return 21;
		case 3:
			return 21;
		case 4:
			return 23;
		case 6:
			return 23;
		case 5:
			return 24;
		case 7:
			return 24;
		case 0:
			return 24;
		default:
			break;
	}
	return 24;
	return 0;
}

void func_1409(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939493[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939493[iParam0 /*16*/] = { Var0 };
	Global_1939493.f_161 = (Global_1939493.f_161 - 1);
	if (Global_1939493.f_161 < 0)
	{
		Global_1939493.f_161 = 0;
	}
}

void func_1410(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_1411(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_1594() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if ((uParam1[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if ((uParam1[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_8);
						}
					}
					else if ((uParam1[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[(*uParam1)[iVar0 /*23*/]] = (fVar25[(*uParam1)[iVar0 /*23*/]] + (uParam1[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_1431(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_1432(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						Var14 = { func_1595(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var14);
						iVar44 = func_1596(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar44);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_0x2B6846401D68E563(fVar25[iVar43], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1434(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_1412(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar22);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == (uParam1[iVar1 /*23*/])->f_14;
						iVar46 = func_1415(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_1429(uParam1[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_1424(uParam1[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_1425(uParam1[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_1426(iVar4))
								{
									iVar48 = uParam0->f_159;
									if ((uParam1[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_1427(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_1425(uParam1[iVar1 /*23*/], uParam0->f_159), func_1428(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_1231((uParam1[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563((uParam1[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_1412(var uParam0)
{
	if (*uParam0 != 255)
	{
		return true;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return true;
	}
	return false;
}

void func_1413(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == (uParam1[iParam2 /*23*/])->f_14;
	iVar0 = func_1415(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1[iParam2 /*23*/])->f_14) && VOICE::_0x919AF2D93E9AA89D((uParam1[iParam2 /*23*/])->f_14))
	{
		bVar3 = VOICE::_0xEF6F2A35FAAF2ED7((uParam1[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowBlip", true);
	}
}

int func_1414(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if ((*uParam0)[iParam1 /*23*/] == (*uParam0)[iVar0 /*23*/] && func_1412(&((uParam0[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_1415(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_1597((*uParam1)[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_525((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_525((uParam1[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_1416(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch ((uParam1[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iParam2], "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iParam2], "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_12[iParam2], "CrossColor", iParam4);
	}
}

char* func_1417()
{
	return "RSN";
}

char* func_1418(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1145091[iParam0 /*35*/]);
}

bool func_1419()
{
	if (Global_1102219.f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219.f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219.f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_1039(2048))
	{
		return true;
	}
	if (func_1038(1))
	{
		return true;
	}
	if (Global_1102219.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_1420(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_1598()));
	return iParam0 == iVar0;
}

char* func_1421(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(joaat("MP_PLAYINGSTYLES"), iParam0);
	}
	return "";
}

bool func_1422(int iParam0)
{
	if ((func_1423(iParam0) || func_1430(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return false;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return true;
	}
	return false;
}

bool func_1423(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

float func_1424(var uParam0, int iParam1)
{
	if (func_1599())
	{
		func_1600(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_1422(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_1425(var uParam0, int iParam1)
{
	if (func_1599())
	{
		return func_1600(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

bool func_1426(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return true;
	}
	return false;
}

char* func_1427(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1029(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::_GET_LABEL_TEXT("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return HUD::_GET_LABEL_TEXT("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return HUD::_GET_LABEL_TEXT("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1029(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_1029(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_1601(&cVar0);
}

int func_1428(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

char* func_1429(var uParam0, int iParam1, int iParam2)
{
	if (func_1599())
	{
		func_1600(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_1423(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_1430(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_1431(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = (*iParam0)[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && (*uParam1)[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = (*uParam1)[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_1432(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == (*uParam2)[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_1433(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_1434(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_1412(&((uParam0[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_1435(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar13;
	float fVar14;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar5);
		cVar5 = { func_1595(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == (*uParam1)[iVar1 /*23*/] && func_1412(&((uParam1[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if ((uParam1[iVar1 /*23*/])->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + (uParam1[iVar1 /*23*/])->f_6);
					}
					if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar3 = (fVar3 + (uParam1[iVar1 /*23*/])->f_1);
					}
					if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + (uParam1[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if ((uParam1[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar2 = (fVar2 + (uParam1[iVar1 /*23*/])->f_1);
					}
					if ((uParam1[iVar1 /*23*/])->f_2 != -1f)
					{
						fVar3 = (fVar3 + (uParam1[iVar1 /*23*/])->f_2);
					}
					if ((uParam1[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + (uParam1[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_1594() == 0)
				{
					fVar4 = BUILTIN::TO_FLOAT(Global_1050975[iVar0]);
				}
			}
		}
		iVar13 = func_1596(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "HeadingColor", iVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Heading", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else if (func_1422(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar14, uParam0->f_151));
		}
		else if (func_1423(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat1Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat1", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat2", MISC::_0x2B6846401D68E563(fVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3[iVar0], "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[iVar0], "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_1436()
{
	return func_778(4);
}

void func_1437(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_1599())
		{
			func_1602(uParam0);
		}
		else
		{
			func_1603(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_143[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_143[iVar0], "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", func_1604());
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iVar0], "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_12[iVar0], "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_12[iVar0], "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_12[iVar0], "ShowOverlay", false);
		func_1438(uParam0, &((uParam1[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_1599())
	{
		func_1605(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_1234(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_1438(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	if (func_1606() > 0)
	{
		return;
	}
	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_1607(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		uParam0->f_45[iParam2 /*3*/][0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarDictionary", &cVar0);
		uParam0->f_45[iParam2 /*3*/][1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_12[iParam2], "AvatarTexture", &cVar8);
	}
}

bool func_1439(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_1440(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1441(bool bParam0)
{
	if (bParam0)
	{
		return joaat("LEADERBOARD");
	}
	return -987928333;
}

int func_1442()
{
	return 205122612;
}

bool func_1443()
{
	if (Global_1940144.f_20 && Global_1940144.f_5 == 1)
	{
		return true;
	}
	return false;
}

void func_1444(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[128];

	if (uParam0->f_36 == 0 && uParam0->f_33 == uParam0->f_34)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
		if (uParam0->f_36 != 0)
		{
			func_1608(uParam0, uParam0->f_36, 0);
			uParam0->f_36 = 0;
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1609(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			MISC::SET_BIT(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_1610(iVar0, 1);
			MISC::SET_BIT(&(uParam0->f_36), iVar0);
			break;
		case 2:
			func_1610(iVar0, 1);
			MISC::SET_BIT(&(uParam0->f_36), iVar0);
			break;
		case 0:
			break;
	}
}

void func_1445(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1611(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

int func_1446(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_2843.f_1)
	{
		if (Global_1952637.f_2843.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1447(int iParam0, var uParam1)
{
	return (Global_1952637.f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_1448(int iParam0, var uParam1)
{
	Global_1952637.f_2843.f_3[iParam0] = (Global_1952637.f_2843.f_3[iParam0] - (Global_1952637.f_2843.f_3[iParam0] && uParam1));
}

bool func_1449(int iParam0, int iParam1)
{
	return (Global_1952637.f_83[func_1125(iParam0, 1) /*12*/].f_11 && iParam1) != 0;
}

void func_1450(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1451(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	Var2 = -961687407;
	if (func_23() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -2008906477))
	{
		return 0;
	}
	iVar1 = func_1612(iParam0);
	func_1613(iVar0, iVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_1613(iVar0, iVar1);
		}
	}
	return 1;
}

int func_1452(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1952637.f_2897)
	{
		if (Global_1952637.f_2897.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1453(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1454(int iParam0)
{
	if (iParam0 == joaat("CLOTHING_ITEM_M_BEARD_STUBBLE"))
	{
		return -236468550;
	}
	return joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE");
}

int func_1455(int iParam0)
{
	if (iParam0 == joaat("CLOTHING_ITEM_HAIR_NONE"))
	{
		return 1687431937;
	}
	else if (func_1280(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_1280(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_1280(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_1456(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*18*/])->f_1 == -1 || (uParam0[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1457(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 241235545;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 1827902148;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 1301555144;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -2056583192;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 1015239729;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -340627321;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -875805376;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -768760704;
		case joaat("CLOTHING_BLEND_FACIAL_HAIR_NONE"):
			return -2118203104;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
		case -643819742:
			return -559080197;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -1180698265;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -487028314;
		case 1687431937:
			return -1811760631;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_1458(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1456(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[iVar0 /*18*/])->f_2);
	func_1459(uParam0, uParam1, iVar0);
	return 1;
}

void func_1459(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[iVar0 + 1 /*18*/]) };
			(uParam1[iVar0 /*18*/])->f_2 = ((uParam1[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_1460(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("ID");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_1614(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_1615(uParam0, bParam3);
	}
	return true;
}

void func_1461(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_1453(uParam0, 1) || func_1453(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_1616(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1456(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(uParam1[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_1617(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (uParam1[iVar0 /*18*/])->f_2;
			*(uParam1[iVar0 /*18*/]) = { *uParam2 };
			func_1618(uParam0, uParam1[iVar0 /*18*/], 1);
		}
	}
}

int func_1462(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_1460(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(uParam1[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((uParam1[iVar18 /*18*/])->f_1 < (uParam1[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *(uParam1[iVar18 /*18*/]) };
			*(uParam1[iVar18 /*18*/]) = { *(uParam1[(iVar18 - 1) /*18*/]) };
			*(uParam1[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_1463(int iParam0)
{
	return iParam0 * 31;
}

bool func_1464(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1465(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return joaat("BREED_BRETON_REDROAN");
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return joaat("BREED_BRETON_SORREL");
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return joaat("BREED_BRETON_GRULLODUN");
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return joaat("BREED_BRETON_SEALBROWN");
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return joaat("BREED_BRETON_MEALYDAPPLEBAY");
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return joaat("BREED_BRETON_STEELGREY");
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return joaat("BREED_CRIOLLO_BLUEROANOVERO");
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return joaat("BREED_CRIOLLO_DUN");
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return joaat("BREED_CRIOLLO_SORRELOVERO");
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return joaat("BREED_CRIOLLO_BAYFRAMEOVERO");
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return joaat("BREED_CRIOLLO_MARBLESABINO");
		case joaat("A_C_HORSE_GYPSYCOB_PIEBALD"):
			return joaat("BREED_GYPSYCOB_PIEBALD");
		case joaat("A_C_HORSE_GYPSYCOB_WHITEBLAGDON"):
			return joaat("BREED_GYPSYCOB_WHITEBLAGDON");
		case joaat("A_C_HORSE_GYPSYCOB_PALOMINOBLAGDON"):
			return joaat("BREED_GYPSYCOB_PALOMINOBLAGDON");
		case joaat("A_C_HORSE_GYPSYCOB_SKEWBALD"):
			return joaat("BREED_GYPSYCOB_SKEWBALD");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDBAY"):
			return joaat("BREED_GYPSYCOB_SPLASHEDBAY");
		case joaat("A_C_HORSE_GYPSYCOB_SPLASHEDPIEBALD"):
			return joaat("BREED_GYPSYCOB_SPLASHEDPIEBALD");
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return joaat("BREED_KLADRUBER_BLACK");
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return joaat("BREED_KLADRUBER_WHITE");
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return joaat("BREED_KLADRUBER_CREMELLO");
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return joaat("BREED_KLADRUBER_GREY");
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return joaat("BREED_KLADRUBER_DAPPLEROSEGREY");
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return joaat("BREED_KLADRUBER_SILVER");
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return joaat("BREED_NORFOLKROADSTER_BLACK");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return joaat("BREED_NORFOLKROADSTER_PIEBALDROAN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return joaat("BREED_NORFOLKROADSTER_ROSEGREY");
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN");
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR");
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	return 0;
}

bool func_1466(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_1467(int iParam0, int iParam1)
{
	if (!func_1164(iParam0, 2))
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

void func_1468(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_1619(uParam0, 1))
	{
		func_1620(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1952637.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1952637.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_1469(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1470(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1471(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_1280(iVar1, 160827531) || func_857(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
}

void func_1472(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(uParam0->f_1[iVar0 /*3*/], -93469181))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
}

void func_1473(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_857(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
}

int func_1474(int iParam0)
{
	var uVar0;
	var uVar1;

	func_1279(&uVar1, 9044914, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&uVar1);
	while (DATAFILE::_0xED4413CEE1BF142C(&uVar1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_1475(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_857(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_1476(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_1477(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, 1))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1478(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, -1527414429)) && !func_1280(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430 || uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721) && func_1280(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_1281(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
			func_1281(iVar0, iParam3);
		}
	}
}

void func_1479(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_1280(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_1281(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_857(iVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_1281(iParam2, iParam3);
			}
		}
	}
}

void func_1480(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 16;
	func_1281(iVar0, iParam3);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1281(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
		{
			func_1281(iVar0, iParam3);
			func_1295(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, -1527414429)) && !func_1280(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

void func_1481(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1281(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && !func_1280(uParam0->f_1[iVar0 /*3*/], -1303648999))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, 675650051))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

bool func_1482(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_1125(iParam0, 1) /*3*/] != Global_1952637.f_83[func_1125(iParam0, 1) /*12*/];
}

void func_1483(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1281(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_1281(iVar0, iParam1);
	}
}

void func_1484(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar3 = 1;
	}
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_857(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1132(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_1281(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, -1473580422))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_1280(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_1477(uParam0->f_1[iVar0 /*3*/], iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_857(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_1280(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
				func_1281(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_857(iVar1) == 1868067663 && func_1280(iParam2, -1016441646))
		{
			func_1621(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_1281(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_857(uParam0->f_1[iVar0 /*3*/]))
	{
		func_1281(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, -1650340550))
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_857(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam3);
		}
	}
}

void func_1485(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/] && func_857(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[iVar0 /*3*/] = func_1132(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_1280(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_1491(uParam0, iParam3, 1, 0);
		}
		else if (func_1280(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
	func_1281(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iVar1, 1090938458)) && func_1280(iParam2, 475297062))
	{
		func_1621(uParam0, iVar0, iParam3);
	}
}

void func_1486(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	func_1281(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1952637.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_1132(Global_1952637.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (iVar1 != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iVar1, 353024991))
	{
		func_1621(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && 1769055947 == func_857(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
}

void func_1487(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_857(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_857(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != joaat("BASE"))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
				func_1281(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_1281(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_1280(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_1491(uParam0, iParam3, 1, 0);
		}
		else if (func_1280(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		}
	}
}

void func_1488(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		func_1621(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		if (func_1280(uParam0->f_1[iVar0 /*3*/], -2093434733))
		{
			func_1491(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
			func_1281(iVar0, iParam2);
		}
	}
}

void func_1489(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = joaat("BASE");
		func_1281(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/] && func_1280(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		iVar1 = uParam0->f_1[iVar0 /*3*/];
		if (912453393 == func_857(iVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -2081918609;
			func_1281(iVar0, iParam3);
		}
	}
}

void func_1490(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_1280(iParam2, -1278198125) && uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam3);
	}
}

void func_1491(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1952637.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_857(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1952637.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_1281(iVar0, iParam1);
	}
}

bool func_1492(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1493(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_682(iParam2, joaat("DEFAULT"));
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_1622(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_1494(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_678(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1495(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1623(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			return func_1625(func_1624(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1626(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1496(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_1497(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1498(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

int func_1499(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

int func_1500(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1627(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1501()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1139381.f_8);
}

int func_1502(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == Global_1139381.f_11.f_1562[iVar0 /*46*/].f_2)
		{
			return Global_1139381.f_11.f_1562[iVar0 /*46*/];
		}
		iVar0++;
	}
	return 0;
}

int func_1503(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;

	if (iParam2 == 2)
	{
		bVar0 = func_1628() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1307(iParam0))
	{
		func_1629(uParam1);
		return 0;
	}
	*uParam1 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/];
	uParam1->f_2 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_2;
	uParam1->f_1 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_1;
	uParam1->f_8 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_3;
	uParam1->f_16 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_4;
	uParam1->f_32 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_7;
	uParam1->f_33 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_8;
	if (!func_681(uParam1->f_2, 0))
	{
		func_1629(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1307(*uParam1))
	{
		func_1629(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1507())
		{
			uParam1->f_19 = func_1630(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_5;
			uParam1->f_10 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_6;
			if (func_1498(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381.f_4796.f_34[uParam1->f_19 /*3*/].f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_1631(*uParam1);
			iVar3 = func_1499(uParam1->f_19);
			uParam1->f_3 = { func_678(uParam1->f_2, func_677(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_1632(uParam1);
			uParam1->f_13 = func_1633(uParam1);
			uParam1->f_15 = func_1634(uParam1);
			uParam1->f_20 = func_1635(uParam1);
			uParam1->f_22 = func_1636(uParam1);
			uParam1->f_14 = func_1637(uParam1);
			uParam1->f_23 = func_1638(uParam1);
			uParam1->f_24 = func_1639(uParam1);
			uParam1->f_25 = func_1640(uParam1);
			uParam1->f_26 = func_1641(uParam1);
			uParam1->f_27 = func_1642(uParam1);
			uParam1->f_29 = func_1643(uParam1);
			uParam1->f_30 = func_1644(uParam1);
			uParam1->f_31 = func_1645(uParam1);
			iVar4 = -915411861;
			if (uParam1->f_27)
			{
				iVar4 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_1646(Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_2, iVar4);
			}
			else
			{
				uParam1->f_17 = func_1647(uParam1->f_13, iVar4);
			}
			uParam1->f_18 = func_1646(Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_3;
				uParam1->f_10 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_6;
			}
			else
			{
				func_1648(uParam1);
			}
		}
	}
	else
	{
		iVar5 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940311.f_1433.f_8));
		uParam1->f_9 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_3;
		uParam1->f_10 = Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_6;
		if (NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
		{
			uParam1->f_19 = func_1649(*uParam1, iVar5);
			if (func_1498(uParam1->f_19))
			{
				vVar6 = { Global_1145091[iVar5 /*35*/].f_10[uParam1->f_19 /*3*/] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_1650(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1651(uParam1);
	uParam1->f_12 = func_1652(Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/], uParam1);
	return 1;
}

bool func_1504(var uParam0)
{
	return uParam0->f_1 == joaat("DEADEYE");
}

void func_1505()
{
	PLAYER::_0xAE4BCC79C587EBBF(Global_1296859.f_154[Global_1296859], 0f, 0);
	PLAYER::_0x4D1699543B1C023C(Global_1296859.f_154[Global_1296859], 0f);
	PLAYER::_0xB783F75940B23014(Global_1296859.f_154[Global_1296859], 0f);
	PLAYER::_0x6B5DDFB967E5073D(Global_1296859.f_154[Global_1296859], 0);
	if (PLAYER::_0xB16223CB7DA965F0(Global_1296859.f_154[Global_1296859]))
	{
		PLAYER::_0xAE637BB8EF017875(Global_1296859.f_154[Global_1296859], 1);
	}
	PLAYER::_0x95EE1DEE1DCD9070(Global_1296859.f_154[Global_1296859], 0);
}

void func_1506(int iParam0)
{
	struct<33> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1511(&Var0, iParam0);
}

bool func_1507()
{
	return (func_394(0) && func_394(5));
}

void func_1508(int iParam0)
{
	int iVar0;

	iVar0 = func_1653(iParam0);
	func_1654(iVar0);
}

void func_1509(var uParam0)
{
	bool bVar0;
	int iVar1;

	func_1655(&(Global_1940311.f_1433.f_4189.f_37[func_1308(*uParam0, 1) /*44*/]), uParam0);
	bVar0 = func_1656(*uParam0);
	iVar1 = UIAPPS::_0x96FD694FE5BE55DC(joaat("ABILITIES"));
	if (bVar0)
	{
		if (iVar1 == 756463805)
		{
			func_1657(*uParam0);
			return;
		}
		else
		{
			func_1658(&(Global_1940311.f_1433.f_4189.f_1936), *uParam0);
			func_1659(*uParam0);
		}
	}
}

void func_1510(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_1660(iParam0, 1);
	if (!func_1313(iVar0, uParam1, 0, -1))
	{
		func_1629(uParam1);
	}
	func_1661(iParam0, &(Global_1940311.f_1433.f_4189.f_1579[iParam0 /*54*/]), *uParam1);
	if (bParam2 && func_1662(iParam0))
	{
		func_1663(&(Global_1940311.f_1433.f_4189.f_1985), uParam1, iParam0);
	}
}

void func_1511(var uParam0, int iParam1)
{
	Global_1139381.f_4621.f_36[iParam1 /*3*/] = *uParam0;
	Global_1139381.f_4621.f_36[iParam1 /*3*/].f_1 = uParam0->f_13;
}

void func_1512(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1307(*uParam0))
	{
		return;
	}
	if (!func_1664(uParam0->f_13))
	{
		return;
	}
	if (func_1504(uParam0))
	{
		func_1665(uParam0);
	}
	iVar0 = func_1653(iParam1);
	iVar1 = Global_1139381.f_11.f_1562[func_1308(*uParam0, 1) /*46*/].f_9[uParam0->f_13 /*12*/].f_10;
	func_1666(iVar0, iVar1);
}

bool func_1513(int iParam0)
{
	float fVar0;

	fVar0 = (func_1667(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

bool func_1514(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1668(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1515(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_946(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1516(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1669(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1670(iParam1), fParam2, -1);
	}
}

void func_1517(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_946(2);
	}
	uVar0 = Global_1296859.f_21;
	func_1671(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1672(iParam0, uVar0, iParam3);
	}
}

char* func_1518()
{
	return "PlayerRPGCoreDeadEye";
}

char* func_1519()
{
	return "PlayerRPGCore";
}

bool func_1520()
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
		{
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1521(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerHealthLow");
	}
	GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerHealthLow", fVar1);
}

void func_1522()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("PlayerHealthLow");
	}
}

char* func_1523(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1524(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_939(2);
	func_1673(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1525(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1146212.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1146212.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_1674(iVar0, 1);
		if (Global_1146212.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_1654(iVar0);
			Global_1146212.f_47689.f_1.f_42 = (Global_1146212.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1146212.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1146212.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_1526(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_941(2);
	func_1675(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1527(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_940(2);
	func_1317(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_1528(int iParam0, bool bParam1, bool bParam2)
{
	func_1321(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_1529(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1676(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1530(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return false;
	}
	if (func_1332(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_960(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_1351(iParam0, 1);
}

void func_1531(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_962(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_1337(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_1541(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, false) && func_992(iParam0, 0, 0, 0) == 0))
		{
			if (func_23() == -1)
			{
				func_1338(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1363(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1532(int iParam0, int iParam1)
{
	if (func_1280(iParam0, 58855631))
	{
		func_1575(iParam0, -915411861, iParam1, 1);
	}
}

bool func_1533()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_1677(Global_34, 1369124074)) && !func_1677(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_1534(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

bool func_1535(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1536(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_39.f_3643[iVar1], iVar2);
}

void func_1537(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_39.f_3643[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_1538(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1678(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1679(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1679(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1679(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_1680(1);
			break;
		case 33:
			func_1681(1);
			break;
		case 34:
			func_1682(1);
			break;
		case 35:
			break;
		case 36:
			func_1683(0);
			break;
		case 37:
			func_1684(0);
			break;
		case 38:
			func_1685(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_1686() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1390("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_1343(677, 0);
			break;
		case 3:
			if (func_1686() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1390("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_1343(678, 0);
			break;
		case 4:
			if (func_1686() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1390("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_1343(679, 0);
			break;
		case 5:
			if (func_1686() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1390("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_1343(680, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_23() == -1)
			{
				if (!func_1351(1013902307, 1))
				{
					func_399(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_1351(1013902307, 1))
				{
					func_399(1013902307, 1, 752097756);
				}
				if (!func_1351(142640135, 1))
				{
					func_399(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_1351(786809402, 1))
				{
					func_399(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_1351(786809402, 1))
				{
					func_399(786809402, 1, 752097756);
				}
				if (!func_1351(-518019409, 1))
				{
					func_399(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940258.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_1539(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1080(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_1540(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1541(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1542(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

void func_1543(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar2 = func_1687(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

void func_1544(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1940258.f_6)
	{
		return;
	}
	if (WEAPON::_IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_1688();
	func_1689(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_1545(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_993(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_1546()
{
	return false;
}

bool func_1547(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_1548(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1549(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_1333(49))
			{
				if (!func_1333(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_1333(50))
			{
				if (!func_1333(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_1550(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1551(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_1690(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1691(iParam0))
	{
		return false;
	}
	if (func_1692(iParam0))
	{
		return false;
	}
	if ((Global_1900736.f_67 && !func_1559(iParam0, 1)) || func_1187(32768))
	{
		if (!func_1559(iParam0, 262144) || !Global_1904651.f_8686)
		{
			return false;
		}
	}
	if (!func_1693())
	{
		return false;
	}
	return true;
}

void func_1552(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904651[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904651[iParam0] = uVar0;
}

int func_1553(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_23() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1351(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_681(iVar25, 0) && func_1280(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1554(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1694(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1564(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_1555(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1695() || func_1696())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1564(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_1564(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_444(func_501(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_1556(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_681(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258.f_6)
	{
		return false;
	}
	iVar0 = func_1176(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1115("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1108(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1542(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_1111(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1111(iVar1);
	}
	return false;
}

bool func_1557(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_681(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_857(iParam0);
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
	iVar1 = func_1457(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1697(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1698(iParam0);
	iVar2 = func_1697(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == Global_17411.f_55.f_644.f_1354.f_5[iVar2 /*17*/];
}

int func_1558(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_1559(int iParam0, int iParam1)
{
	return (Global_1904651.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_1560(var uParam0, int iParam1)
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
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[iVar1] == joaat("LOOTER_PED_IS_FEMALE"))
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[iVar1] == joaat("LOOT_TYPE_SKINNING"))
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_RUINED")) || uParam0->f_1[iVar1] == joaat("FISHING_RESULT_LEGENDARY"))
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

int func_1561(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1699(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_1700(uParam2, iParam0, Var1);
	return 1;
}

char* func_1562(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1563(int iParam0)
{
	var uVar0;

	if (!func_1701(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_1564(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1702(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1565()
{
	return !Global_1913504;
}

void func_1566(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913504.f_3)
	{
		if ((((Global_1913504.f_4[iVar0 /*6*/] == iParam0 && Global_1913504.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913504.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913504.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913504.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913504.f_4[iVar0 /*6*/].f_1 = (Global_1913504.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504.f_3 < 19)
	{
		Global_1913504.f_4[Global_1913504.f_3 /*6*/] = iParam0;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_1 = iParam1;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_2 = bParam2;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_3 = bParam3;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_4 = bParam4;
		Global_1913504.f_4[Global_1913504.f_3 /*6*/].f_5 = bParam5;
		Global_1913504.f_3++;
	}
}

char* func_1567(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1568(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_1569(int iParam0)
{
	if (func_1280(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_1280(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1280(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_1280(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_1280(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_1280(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_1280(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_1280(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_1280(iParam0, -352095726) || func_1280(iParam0, -2014783736)) || func_1280(iParam0, -545064757)) || func_1280(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_1570(int iParam0)
{
	if (func_1280(iParam0, -189374246))
	{
		if (((func_1703(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_ALBINO")) || func_1703(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_MELANISTIC"))) || func_1703(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_PATTERNED"))) || func_1703(iParam0, joaat("CI_TAG_FOLDER_ANIMAL_SAMPLES_LEGENDARY_RED_BLONDE")))
		{
			return true;
		}
	}
	if (func_1280(iParam0, -753854379) || func_1280(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_1571(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_1572(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_1573(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = func_1704(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1705(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_1706(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar13, &iVar14) && func_1707(iVar14))
			{
				func_1708(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_1708(iVar11);
	}
	return 0;
}

bool func_1574(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_1575(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_681(iParam0, 0) && !func_1164(func_1163(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1576(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1709(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_1577(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_681(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_1710(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_1711(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_1712(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_1578(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1579(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1580(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1713(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1581(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1714(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1715(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1716(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1717(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1718(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1719(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

bool func_1582(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		return func_1720(iParam0);
	}
	return iParam0 <= func_1721();
}

int func_1583(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1248240.f_8903.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1248240.f_8903.f_99;
		iVar1 = Global_1248240.f_8903.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (Global_1248240.f_8903.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1248240.f_8903.f_99;
	Global_1248240.f_8903.f_16[iVar2 /*8*/] = iParam0;
	Global_1248240.f_8903.f_16[iVar2 /*8*/].f_5 = iParam2;
	Global_1248240.f_8903.f_16[iVar2 /*8*/].f_6 = iParam1;
	Global_1248240.f_8903.f_97++;
	Global_1248240.f_8903.f_99 = (Global_1248240.f_8903.f_99 + 1 % 10);
	return iVar2;
}

int func_1584(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258.f_12)
	{
		if ((bParam2 || Global_1940258.f_13 > 0) || Global_1940258.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258.f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258.f_14 > 0 || (bParam2 && Global_1940258.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258.f_7)
		{
			if (bParam2 || Global_1940258.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1585(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_1722(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1723(iParam0))
	{
		return func_1725(func_1724(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1726(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @204; //curOff = 188
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

struct<16> func_1586(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_678(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_682(iParam0, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_924() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1587(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_1588(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_1587(iParam0))
	{
		return;
	}
	func_1727(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_758(iVar0))
		{
			if (func_1729(func_1728(iVar0, 1, 1)) == iParam0)
			{
				func_1730(iVar0, 0);
				func_1731(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1732(iVar1))
		{
			if (func_1733(iVar1) == iParam0)
			{
				func_1734(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_1589(var uParam0, int iParam1)
{
	func_606(uParam0, iParam1);
}

Vector3 func_1590(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

var func_1591()
{
	return Global_1102219.f_3673;
}

int func_1592(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102219.f_3675[iParam0];
}

void func_1593(var uParam0)
{
	struct<6> Var0;

	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = joaat("REL_NO_RELATIONSHIP");
	*uParam0 = { Var0 };
}

int func_1594()
{
	int iVar0;

	if (func_1439(16))
	{
		iVar0 = Global_1050050.f_12;
	}
	else
	{
		iVar0 = func_1735();
	}
	return iVar0;
}

struct<8> func_1595(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1050984[iParam0 /*8*/])))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return Global_1050984[iParam0 /*8*/];
}

int func_1596(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_1597(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_1597(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return joaat("COLOR_NET_PLAYER3");
				case 1:
					return joaat("COLOR_NET_PLAYER4");
				case 2:
					return joaat("COLOR_NET_PLAYER5");
				case 3:
					return joaat("COLOR_NET_PLAYER6");
				case 4:
					return joaat("COLOR_NET_PLAYER7");
				case 5:
					return joaat("COLOR_NET_PLAYER8");
				case 6:
					return joaat("COLOR_NET_PLAYER9");
				case 7:
					return joaat("COLOR_NET_PLAYER10");
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			return joaat("COLOR_NET_PLAYER1");
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return joaat("COLOR_WHITE");
		}
		else
		{
			return joaat("COLOR_NET_PLAYER1");
		}
	}
	return joaat("COLOR_NET_PLAYER2");
}

var func_1598()
{
	return Global_1102219.f_26.f_3341;
}

bool func_1599()
{
	return Global_1048583;
}

float func_1600(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_1601(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

void func_1602(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_1736(uParam0->f_159, uParam0->f_160);
	sVar1 = func_1737(uParam0->f_159, uParam0->f_160);
	sVar2 = func_1738(uParam0->f_159, uParam0->f_160);
	sVar3 = func_1739();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

void func_1603(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1430(uParam0->f_159) || func_1423(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", "");
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", joaat("COLOR_WHITE"));
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_1736(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_1423(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
		}
	}
	if (!func_1423(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_1737(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_1738(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_1604()
{
	return 1;
}

void func_1605(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	char* sVar7;
	float fVar8;

	if (Global_1940144.f_111)
	{
		func_1740(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1241(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1412(&((uParam1[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1413(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", func_1414(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "Position", iVar1);
				}
				bVar3 = iVar2 == (uParam1[iVar0 /*23*/])->f_14;
				iVar4 = func_1415(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1416(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Gamertag", &((uParam1[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "GamertagColor", iVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "CrewTag", func_1417());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Rank", func_1418((uParam1[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1419())
					{
						if (func_1420((uParam1[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat0", func_1421((uParam1[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_1425(uParam1[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_1424(uParam1[iVar0 /*23*/], uParam0->f_159);
				sVar7 = func_1429(uParam1[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_1741(uParam1[iVar0 /*23*/]);
				if (Global_1049283[0 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (Global_1049283[1 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (Global_1049283[2 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Stat3", MISC::_0x2B6846401D68E563(sVar7, 0));
				}
				if (Global_1049283[3 /*3*/].f_2 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_12[iVar0], "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && (uParam1[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_12[iVar0], "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", joaat("COLOR_YELLOW"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_12[iVar0], "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

int func_1606()
{
	return Global_1139381.f_5079.f_325;
}

struct<16> func_1607(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_1609(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_1610(iVar16, 1);
			break;
		case 2:
			func_1610(iVar16, 1);
			func_1742(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

void func_1608(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1611(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

int func_1609(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1743(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_1744(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1745(iParam1, iParam2, 0);
						return 1;
					}
					func_1746(iParam1, iParam2, iVar1);
					func_1745(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1747(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1745(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1745(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1745(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1747(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1745(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_IS_STRING_SPACE(sVar12))
					{
						return 3;
					}
					func_1745(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1747(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1745(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1610(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_1743(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1746(iParam0, iParam1, 0);
			func_1745(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1747(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_1745(iParam0, iParam1, 0);
			break;
	}
}

void func_1611(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_1748(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_1748(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
					{
					}
					else if (Global_1296859.f_154[iVar3] == Global_1296859.f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, Global_1296859.f_154[iVar3]);
					}
					iVar3++;
				}
				func_1749(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1748(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1296859.f_154[iVar3]))
						{
						}
						else if (Global_1296859.f_154[iVar3] == Global_1296859.f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, Global_1296859.f_154[iVar3]);
						}
						iVar3++;
					}
					func_1749(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_1612(int iParam0)
{
	int iVar0;

	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/] = iParam0;
	iVar0 = Global_1952637.f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637.f_2843.f_2 = (Global_1952637.f_2843.f_2 || iVar0);
	Global_1952637.f_2843.f_43[Global_1952637.f_2843.f_1 /*2*/].f_1 = iVar0;
	Global_1952637.f_2843.f_1++;
	return iVar0;
}

void func_1613(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1750(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_1280(Global_1952637.f_1675.f_1[iVar0 /*3*/], 343781202))
	{
		iVar1 = func_1751(Global_1952637.f_1675.f_1[iVar0 /*3*/], 1108822547);
		if (1388798186 == func_857(iVar1))
		{
			func_1752(10, iParam1);
		}
	}
	func_1752(iVar0, iParam1);
}

bool func_1614(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("ALBEDO")))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("NORMAL")))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("MATERIAL")))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_1753(iVar0);
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("ID");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_1615(var uParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;
	int iVar18;
	struct<4> Var19;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_1754(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_678(joaat("WARDROBE"), func_677(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_1328(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_1755(func_678(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_1756(Var1.f_16);
}

void func_1616(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_1617(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && (uParam1[(iParam2 - 1) /*18*/])->f_1 > (uParam1[iParam2 /*18*/])->f_1)
	{
		func_1757(uParam0, uParam1);
	}
	else
	{
		func_1758(uParam0, uParam1[iParam2 /*18*/]);
	}
}

void func_1618(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
}

bool func_1619(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1620(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1621(var uParam0, int iParam1, int iParam2)
{
	if (func_1280(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_1284(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1952637.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_1281(iParam1, iParam2);
	}
}

bool func_1622(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_1759(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_924() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

bool func_1623(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("USE"))
	{
		if ((func_1760(uParam1->f_8, iParam0, uVar0, 2048) || func_1760(uParam1->f_8, iParam0, uVar0, 32768)) || func_1760(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1760(uParam1->f_8, iParam0, uVar0, 4) || func_1760(uParam1->f_8, iParam0, uVar0, 256)) || func_1760(uParam1->f_8, iParam0, uVar0, 65536)) || func_1760(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SPEND"))
	{
		if (((func_1760(uParam1->f_8, iParam0, uVar0, 1) || func_1760(uParam1->f_8, iParam0, uVar0, 8)) || func_1760(uParam1->f_8, iParam0, uVar0, 65536)) || func_1760(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == joaat("SELL"))
	{
		if (((func_1760(uParam1->f_8, iParam0, uVar0, 1) || func_1760(uParam1->f_8, iParam0, uVar0, 16)) || func_1760(uParam1->f_8, iParam0, uVar0, 2)) || func_1760(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1760(uParam1->f_8, iParam0, uVar0, 8) || func_1760(uParam1->f_8, iParam0, uVar0, 4096)) || func_1760(uParam1->f_8, iParam0, uVar0, 256)) || func_1760(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1624(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1625(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1761(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1761(iParam1, 2, 0, 0);
	return -1;
}

int func_1626(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1761(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_1627(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_659(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_1628()
{
	return Global_1940311.f_1433.f_4189.f_2083;
}

void func_1629(var uParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1648(&Var0);
	*uParam0 = { Var0 };
}

int func_1630(int iParam0)
{
	int iVar0;

	if (!func_1507())
	{
		return -1;
	}
	if (!func_1307(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1139381.f_4796.f_34[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1631(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1307(iParam0))
	{
		return -1;
	}
	iVar2 = func_1762(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_1499(iVar0);
		if (func_1763(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1632(var uParam0)
{
	if (!func_1764(*uParam0))
	{
		return false;
	}
	if (func_1635(uParam0))
	{
		return true;
	}
	return UNLOCK::_UNLOCK_IS_UNLOCKED(uParam0->f_2);
}

int func_1633(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;

	if (!func_1307(*uParam0))
	{
		return -1;
	}
	if (!func_681(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_1765(iVar1);
		Var2 = { func_678(iVar6, uParam0->f_3, 1635590003, 1) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1634(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;

	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_1307(*uParam0))
	{
		return -1;
	}
	if (!func_681(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_1765(iVar2);
		Var3 = { func_678(iVar7, uParam0->f_3, 1635590003, 1) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
		}
		else
		{
			iVar8 = func_1766(iVar2);
			iVar0 = func_1135(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_1635(var uParam0)
{
	return func_1767(uParam0->f_2, 1);
}

int func_1636(var uParam0)
{
	int iVar0;

	if (!func_1307(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1310(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1637(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_1638(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_1768(uParam0));
}

int func_1639(var uParam0)
{
	return 0;
}

var func_1640(var uParam0)
{
	return (uParam0->f_24 || uParam0->f_23);
}

bool func_1641(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1769(uParam0)) && func_1770(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1642(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1769(uParam0)) && func_1771(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1643(var uParam0)
{
	return (((!uParam0->f_20 && func_1769(uParam0)) && !uParam0->f_26) && !uParam0->f_27);
}

int func_1644(var uParam0)
{
	return 0;
}

var func_1645(var uParam0)
{
	return (((uParam0->f_30 || uParam0->f_29) || uParam0->f_26) || uParam0->f_27);
}

int func_1646(int iParam0, int iParam1)
{
	return func_1585(iParam0, iParam1, 1, 0, 1, 0);
}

int func_1647(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1765(iParam0 + 1);
	return func_1646(iVar0, iParam1);
}

void func_1648(var uParam0)
{
	uParam0->f_9 = joaat("ABILITY_CARD_BACK");
	uParam0->f_10 = joaat("ABILITY_CARDS");
}

int func_1649(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	if (!func_1307(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1145091[iVar1 /*35*/].f_10[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1650(var uParam0, int iParam1)
{
	return func_605(*uParam0, iParam1);
}

char* func_1651(var uParam0)
{
	return MISC::_CREATE_VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::_CREATE_VAR_STRING(0, uParam0->f_8), MISC::_CREATE_VAR_STRING(2, func_1772(uParam0->f_13)));
}

char* func_1652(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_1664(uParam46->f_13))
	{
		return "NULL";
	}
	return MISC::_CREATE_VAR_STRING(0, Param0.f_9[uParam46->f_13 /*12*/].f_11);
}

int func_1653(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar0 = (iVar0 + iParam0 * 32);
	iVar0 = (iVar0 + Global_1296859);
	iVar1 = func_1773(iVar0, 1);
	if (func_1774(iVar1))
	{
		return iVar1;
	}
	return 0;
}

int func_1654(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1774(iParam0))
	{
		return 0;
	}
	iVar0 = func_1674(iParam0, 1);
	if (!func_1775(Global_1146212.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_1776(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1146212.f_35859[iVar3 /*6*/][iVar4];
		switch (func_1777(iParam0, iVar1))
		{
			case 0:
				func_1778(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212.f_35859.f_11700)
				{
					if (Global_1146212.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1146212.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1778(iVar1, iParam0, iVar4);
						func_1779(&(Global_1146212.f_35859.f_9503[iVar5 /*3*/]));
						Global_1146212.f_35859.f_11700 = (Global_1146212.f_35859.f_11700 - 1);
						Global_1146212.f_35859.f_9503[iVar5 /*3*/] = { Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/] };
						func_1779(&(Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1780(iVar1, 1);
				func_1781(iVar2, -1);
				if (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1782(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212.f_35859.f_9502)
					{
						if (Global_1146212.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212.f_35859.f_9302[iVar6] = -1;
							Global_1146212.f_35859.f_9502 = (Global_1146212.f_35859.f_9502 - 1);
							Global_1146212.f_35859.f_9302[iVar6] = Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502];
							Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212.f_35859.f_919[iVar0 /*12*/] = -1;
			func_1783(&(Global_1146212.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

void func_1655(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_1784(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_1504(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_1785(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_1786(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, (!uParam1->f_14 && func_1787(4)));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_1788(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_1789(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_1790(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_1791(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, (uParam1->f_31 && func_1791(uParam1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, (uParam1->f_25 && func_1791(uParam1)));
	if (uParam1->f_26)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_329(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1792(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_329(func_1793(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1792(func_1794(uParam1->f_17)));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_1795(uParam1->f_16));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_1796(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

bool func_1656(int iParam0)
{
	return func_1797() == iParam0;
}

void func_1657(int iParam0)
{
	struct<34> Var0;
	struct<34> Var34;
	int iVar68;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_1313(iParam0, &Var0, 2, iVar68);
		func_1798(&(Global_1940311.f_1433.f_4189.f_1797[iVar68 /*46*/]), Var0);
		if (func_1799(iVar68))
		{
			func_1800(&(Global_1940311.f_1433.f_4189.f_2034), Var0);
		}
		iVar68++;
	}
}

void func_1658(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	int iVar0;

	func_1655(uParam0, &Param1);
	iVar0 = func_1796(Param1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1801(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1802(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1803(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1804(&Param1));
}

void func_1659(struct<34> Param0)
{
	int iVar0;

	if (!func_1805())
	{
		return;
	}
	iVar0 = func_1628();
	if (func_1507())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_4189.f_5, true);
	}
	else if (iVar0 == 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_4189.f_5, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940311.f_1433.f_4189.f_5, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940311.f_1433.f_4189.f_4, func_1806(Param0));
}

int func_1660(int iParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1507())
	{
		return Global_1139381.f_4796.f_34[iParam0 /*3*/];
	}
	iVar0 = func_1499(iParam0);
	Var1 = { func_677(bParam1) };
	iVar5 = func_1500(Var1, iVar0, 0, bParam1);
	if (!func_1807(iVar5))
	{
		return 0;
	}
	return func_1502(iVar5);
}

void func_1661(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bool bVar0;

	bVar0 = func_1808(iParam0);
	if (func_1507())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_1655(uParam1, &Param2);
		return;
	}
	func_1655(uParam1, &Param2);
	if (bVar0)
	{
		func_1809(&(Global_1139381.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	else
	{
		func_1810(&(Global_1139381.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_1811()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_1811()) && func_1787(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_1811()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_1811()) && func_1787(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_1795(func_1812(iParam0)));
}

bool func_1662(int iParam0)
{
	return Global_1940311.f_1433.f_4189.f_2086 == iParam0;
}

void func_1663(var uParam0, var uParam1, int iParam2)
{
	func_1813(iParam2, uParam1);
	func_1655(uParam0, uParam1);
}

bool func_1664(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

int func_1665(var uParam0)
{
	int iVar0;

	if (!func_1307(*uParam0))
	{
		return 0;
	}
	iVar0 = func_1308(*uParam0, 1);
	func_1505();
	PLAYER::_0x6B5DDFB967E5073D(Global_1296859.f_154[Global_1296859], Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/]);
	if (PLAYER::_0x32348719DCED2969(Global_1296859.f_154[Global_1296859]))
	{
		if (func_1144(0))
		{
			PLAYER::_0x83FCD6921FC8FD05(Global_1296859.f_154[Global_1296859], 6);
		}
		else
		{
			PLAYER::_0x83FCD6921FC8FD05(Global_1296859.f_154[Global_1296859], 7);
		}
	}
	PLAYER::_0x7146CF430965927C(23, !Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_1);
	PLAYER::_0x7146CF430965927C(22, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_2);
	PLAYER::_0x7146CF430965927C(21, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_2);
	PLAYER::_0x7146CF430965927C(7, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_3);
	PLAYER::_0x7146CF430965927C(12, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_4);
	PLAYER::_0x7146CF430965927C(8, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_5);
	PLAYER::_0x7146CF430965927C(18, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_6);
	PLAYER::_0x7146CF430965927C(9, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_7);
	PLAYER::_0x7146CF430965927C(10, Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_8);
	PLAYER::_0x7146CF430965927C(14, !Global_1139381.f_11.f_1562[iVar0 /*46*/].f_9[uParam0->f_13 /*12*/].f_9);
	PLAYER::_0x95EE1DEE1DCD9070(Global_1296859.f_154[Global_1296859], 1);
	return 1;
}

int func_1666(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_1774(iParam0))
	{
		return 0;
	}
	iVar0 = func_1674(iParam0, 1);
	if (!func_1775(iParam1))
	{
		return 0;
	}
	iVar1 = func_1776(iParam1, 1);
	if (Global_1146212.f_35859.f_919[iVar0 /*12*/] == iParam1)
	{
		return 1;
	}
	if (func_1775(Global_1146212.f_35859.f_919[iVar0 /*12*/]))
	{
		func_1654(iParam0);
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859[iVar1 /*6*/].f_5)
	{
		iVar2 = Global_1146212.f_35859[iVar1 /*6*/][iVar4];
		iVar3 = func_1780(iVar2, 1);
		switch (func_1814(iParam0, iVar2))
		{
			case 0:
				func_1815(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/] = iVar2;
				Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1146212.f_35859.f_9503[Global_1146212.f_35859.f_11700 /*3*/].f_2 = iVar4;
				Global_1146212.f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212.f_35859.f_3116[iVar3 /*31*/].f_29 <= 0)
				{
					Global_1146212.f_35859.f_9302[Global_1146212.f_35859.f_9502] = iVar2;
					Global_1146212.f_35859.f_9502++;
				}
				func_1781(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

float func_1667(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1816(2)));
}

int func_1668(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_1669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1671(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_946(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1672(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_946(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956200.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_1673(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_1674(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

void func_1675(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859.f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHARGE_PED_STAMINA(iParam1, fParam0);
}

bool func_1676(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_659(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1170(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1677(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1678(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1679(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1956200.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956200.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956200.f_5.f_7, iParam0);
		if (iVar0 == Global_1956200.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956200.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956200.f_5.f_14[iParam0 /*102*/]);
}

void func_1680(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_1681(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_1682(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_1683(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_1684(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1685(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

bool func_1686()
{
	return true;
	if (Global_1572887.f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

int func_1687(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1688()
{
	return Global_1902818;
}

void func_1689(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1817(*iParam0);
	iVar1 = func_1818(*iParam0);
	iVar2 = func_1819(*iParam0);
	iVar3 = func_1820(*iParam0);
	iVar4 = func_1821(*iParam0);
	iVar5 = func_1822(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1823(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1823(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1824(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1690(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17411.f_2565[iParam0], iParam1);
}

bool func_1691(int iParam0)
{
	if (func_1559(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_1692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_39.f_3534[iVar0 /*3*/]);
			if (Global_39.f_3534[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1693()
{
	if (!func_17())
	{
		return false;
	}
	return Global_1904651.f_8684;
}

void func_1694(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1825())
	{
		Global_1913504.f_125 = MISC::GET_GAME_TIMER();
		Global_1913504.f_126 = iParam1;
	}
	Global_1913504.f_127 = (Global_1913504.f_127 + iParam0);
}

bool func_1695()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_1696()
{
	return DLC::IS_DLC_PRESENT(joaat("DLC_ULTIMATEEDITION"));
}

int func_1697(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1698(int iParam0)
{
	int iVar0;

	iVar0 = func_857(iParam0);
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

void func_1699(var uParam0)
{
	func_1560(uParam0, joaat("MULTIPLAYER_GAME"));
	if (func_1131() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_1560(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_1560(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1700(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_441(uParam0))
	{
		return;
	}
	if (Global_1293346.f_2538 < 20)
	{
		Global_1293346.f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_2538.f_1[iVar0 /*22*/] = { Global_1293346.f_2538.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1293346.f_2538.f_1[(Global_1293346.f_2538 - 1) /*22*/] = { Var1 };
}

bool func_1701(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_1702(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_1703(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

int func_1704(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_681(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_1705(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_1706(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1707(int iParam0)
{
	if (!func_681(iParam0, 0))
	{
	}
	if (func_1280(iParam0, -393037696))
	{
		return 1;
	}
	return 0;
}

int func_1708(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1709(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_1710(int iParam0)
{
	int iVar0;

	if (!func_681(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1353(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

bool func_1711(int iParam0)
{
	if (func_857(iParam0) == -126813555 || func_857(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

char* func_1712(int iParam0)
{
	int iVar0;

	if (!func_681(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1572(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_1713(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_FETCH");
			break;
		case 5:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 6:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 7:
			iVar0 = joaat("MISSION_UGC");
			break;
		case 8:
			iVar0 = joaat("MISSION_BEAT");
			break;
		case 9:
			iVar0 = joaat("PROPERTY");
			break;
		case 10:
			iVar0 = joaat("RECIPE");
			break;
		case 11:
			iVar0 = joaat("TITLE");
			break;
		case 12:
			iVar0 = joaat("SHOP");
			break;
		case 13:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 14:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_1714(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1826(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1715(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1716(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1717(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1718(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1719(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_1720(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_1721()
{
	if (func_23() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_1722(int iParam0, int iParam1)
{
	if (!func_681(iParam0, 0))
	{
		return false;
	}
	if (func_1723(iParam0))
	{
		return func_1827(func_1724(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

bool func_1723(int iParam0)
{
	if (func_1280(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_1724(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_681(iParam0, 0))
	{
		return func_1828(func_1163(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_1725(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_1829(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR")) || Var0[iVar32 /*2*/] == joaat("CHARACTER_ROLE_TOKEN"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_1726(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_681(iParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_1830(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1727(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1587(iParam0))
	{
		return;
	}
	if (func_1831(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1832(iParam0, 1);
	}
	else
	{
		func_1833(iParam0, 1);
	}
	func_1834(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1733(iVar0) == iParam0)
		{
			func_1734(iVar0, 0);
		}
		iVar0++;
	}
}

int func_1728(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_1835(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 111:
			if (func_1835(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			if (func_23() != -1 && func_1836() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
			{
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			}
			else
			{
				return joaat("LAW_REGION_SAINT_DENIS");
			}
			break;
		case 66:
			return joaat("LAW_REGION_MANICATO");
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 40:
			if (!bParam1 || func_23() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_1333(44))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 98:
			if (func_23() != -1)
			{
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			}
			else
			{
				return joaat("LAW_REGION_VAN_HORN");
			}
			break;
		case 70:
			return joaat("LAW_REGION_CORNWALL");
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 33:
			return joaat("LAW_REGION_SISIKA");
		case 87:
			if (func_23() != -1)
			{
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			}
			else
			{
				return joaat("LAW_REGION_BUTCHER_CREEK");
			}
			break;
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 60:
			if (func_23() != -1)
			{
				return joaat("LAW_REGION_GRIZZLIES");
			}
			else
			{
				return joaat("LAW_REGION_WAPITI");
			}
			break;
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 136:
			if (func_23() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (!bParam1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_1333(44))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
	}
	if (bParam2)
	{
		iVar0 = func_1837(iParam0);
		if (iVar0 != -1)
		{
			return func_1838(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_1730(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_758(iParam0))
	{
		return;
	}
	bVar0 = func_762(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_1839(iParam0, func_1688());
			func_1840(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1034(iParam0, 67108864);
		func_1839(iParam0, -15);
	}
	func_1841(iParam0);
}

void func_1731(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_758(iParam0))
	{
		return;
	}
	if (func_1842(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1887339[iParam0 /*36*/].f_6))
	{
		iVar0 = Global_1887339[iParam0 /*36*/].f_6;
	}
	else
	{
		iVar0 = func_1843(iParam0);
	}
	bVar1 = func_762(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1844(iParam0);
		if (iParam2 > iVar2)
		{
			func_1845(iParam0, func_1688());
			func_1846(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1840(iParam0, 33554432);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_1034(iParam0, 33554432);
		func_1845(iParam0, -15);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1847(iParam0);
}

bool func_1732(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_1733(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1734(int iParam0, bool bParam1)
{
	if (!func_1732(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1848(iParam0, 1);
	}
	else
	{
		if (func_1849(iParam0))
		{
			return;
		}
		func_1850(iParam0, 1);
	}
	func_1851(iParam0, bParam1);
}

int func_1735()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_MISSION_CONTROLLER")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FM_DEATHMATCH_CONTROLLER")) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_1736(int iParam0, int iParam1)
{
	if (func_1599())
	{
		return func_1852(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_PHOTOS_TAKEN");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::_CREATE_VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_1737(int iParam0, int iParam1)
{
	if (func_1599())
	{
		return func_1852(1);
	}
	else if (func_1423(iParam0) || func_1430(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_BEST_PHOTO");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::_GET_LABEL_TEXT("UIC_LB_TIME");
		}
		else
		{
			return func_1853(iParam0);
		}
	}
	else if (func_1422(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
}

char* func_1738(int iParam0, int iParam1)
{
	if (func_1599())
	{
		return func_1852(2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::_GET_LABEL_TEXT("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam1, 11))
	{
		return MISC::_CREATE_VAR_STRING(2, "FME_AT_SCORE_TAG");
	}
	else if (MISC::IS_BIT_SET(iParam1, 12))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WP_LEADERBOARD_POINTS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam1, 13))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_1853(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_1430(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_1423(iParam0) && !func_1430(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_SCORE");
}

char* func_1739()
{
	if (func_1599())
	{
		return func_1852(3);
	}
	return "";
}

void func_1740(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = Global_1049309[0 /*3*/].f_2 == -1128715836;
	bVar17 = Global_1049309[0 /*3*/].f_2 == 1691389412;
	bVar18 = Global_1049309[0 /*3*/].f_2 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar2], "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar2], "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_1594() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050975[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if ((*uParam1)[iVar0 /*23*/] != -1 && (*uParam1)[iVar0 /*23*/] < 8)
				{
					if (func_1854(uParam1[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[(*uParam1)[iVar0 /*23*/]] = (fVar21[(*uParam1)[iVar0 /*23*/]] + func_1854(uParam1[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_1431(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_1432(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						Var7 = { func_1595(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &Var7);
						iVar40 = func_1596(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", MISC::_0x2B6846401D68E563(fVar21[iVar39], uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1434(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_1412(&((uParam1[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Position", &cVar15);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "Gamertag", &((uParam1[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == (uParam1[iVar1 /*23*/])->f_14;
						iVar42 = func_1415(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_143[iVar3], "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_1854(uParam1[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_143[iVar3], "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_1741(var uParam0)
{
	if (func_1599())
	{
		func_1600(uParam0, 3);
	}
	return -1f;
}

void func_1742(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_1608(uParam0, iVar1, iParam2);
}

int func_1743(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1];
}

int func_1744(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1745(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1139381.f_5079[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_1746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1139381.f_5079[iParam0 /*10*/][iParam1] = iParam2;
}

int func_1747(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1139381.f_5079[iParam0 /*10*/][iParam1];
}

void func_1748(vector3 vParam0)
{
	if (Global_1139381.f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	Global_1139381.f_5079.f_326[Global_1139381.f_5079.f_324 /*3*/] = { vParam0 };
	Global_1139381.f_5079.f_324 = (Global_1139381.f_5079.f_324 + 1 % 50);
	Global_1139381.f_5079.f_325++;
}

void func_1749(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

bool func_1750(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_857(func_1855(iVar0)) != 81053684 && !func_1280(func_1855(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_1280(func_1855(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_857(func_1855(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_857(func_1855(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_857(func_1855(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_1280(func_1855(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_1125(iVar0, 1);
	return true;
}

int func_1751(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	iVar0 = func_1121(0);
	func_1279(&(Global_1952637.f_1043), iVar0, iParam0, 1409451727, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1952637.f_1043));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1952637.f_1043)))
	{
		return 0;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1952637.f_1043), joaat("COMPONENT")))
	{
		return 0;
	}
	return uVar1;
}

void func_1752(int iParam0, int iParam1)
{
	Global_1952637.f_2843.f_3[iParam0] = (Global_1952637.f_2843.f_3[iParam0] || iParam1);
}

int func_1753(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1754(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

struct<17> func_1755(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_659(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1856(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

float func_1756(int iParam0)
{
	return (BUILTIN::TO_FLOAT(iParam0) / 10000f);
}

void func_1757(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((uParam1[iVar0 /*18*/])->f_1 < (uParam1[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, (uParam1[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *(uParam1[iVar0 /*18*/]) };
			*(uParam1[iVar0 /*18*/]) = { *(uParam1[(iVar0 - 1) /*18*/]) };
			*(uParam1[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_1758(uParam0, uParam1[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_1758(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_1618(uParam0, uParam1, 0);
}

bool func_1759(var uParam0)
{
	if (!func_1857(uParam0))
	{
		return false;
	}
	return INVENTORY::_0x0137C77A2EC64536(uParam0);
}

int func_1760(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (func_78(uParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1761(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346.f_20)
	{
		if (Global_1293346.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1293346.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_1858(iParam0, iParam1, iParam2, iParam3);
}

int func_1762(int iParam0)
{
	if (!func_1307(iParam0))
	{
		return 0;
	}
	return Global_1139381.f_11.f_1562[func_1308(iParam0, 1) /*46*/].f_2;
}

bool func_1763(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;

	if (!func_1807(iParam0))
	{
		return false;
	}
	Var0 = { func_677(bParam2) };
	if (func_1135(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_1764(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_1280(vParam0.z, 216050813))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
		{
			return false;
		}
	}
	return true;
}

int func_1765(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1859(iVar0);
}

int func_1766(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1860(iVar0);
}

int func_1767(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_1807(iParam0))
	{
		return 0;
	}
	Var0 = { func_677(bParam1) };
	if (func_1135(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1135(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1135(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1135(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1135(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_1768(var uParam0)
{
	return uParam0->f_15 >= func_1796(uParam0->f_13);
}

bool func_1769(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_VISIBLE(uParam0->f_2);
}

bool func_1770(int iParam0, var uParam1)
{
	*uParam1 = func_1861(iParam0, 1);
	return *uParam1 != 0;
}

bool func_1771(int iParam0, var uParam1)
{
	*uParam1 = func_1862(iParam0, 1, 0);
	return *uParam1 != 0;
}

char* func_1772(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1863(iVar0);
}

int func_1773(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -126580932;
		case 1:
			return 0;
		case 2:
			return 698214003;
		case 3:
			return 780689752;
		case 4:
			return 1698995037;
		case 5:
			return 408582472;
		case 6:
			return -1100659165;
		case 7:
			return -1248720641;
		case 8:
			return -286632741;
		case 9:
			return 956867472;
		case 10:
			return 1036630721;
		case 11:
			return 1138017610;
		case 12:
			return -33431232;
		case 13:
			return -2101912686;
		case 14:
			return 846387993;
		case 15:
			return -1840995238;
		case 16:
			return 1585362808;
		case 17:
			return -425216802;
		case 18:
			return -1722264360;
		case 19:
			return -1288042557;
		case 20:
			return 1828803907;
		case 21:
			return -343572565;
		case 22:
			return 1095779900;
		case 23:
			return 1444077748;
		case 24:
			return 952755846;
		case 25:
			return 420477860;
		case 26:
			return 2132307595;
		case 27:
			return -1919393558;
		case 28:
			return 1374979106;
		case 29:
			return 114587291;
		case 30:
			return -900877140;
		case 31:
			return -660114191;
		case 32:
			return -1767662471;
		case 33:
			return 878491929;
		case 34:
			return 398279342;
		case 35:
			return 550487527;
		case 36:
			return 713106899;
		case 37:
			return -1719665775;
		case 38:
			return -1170784825;
		case 39:
			return -1010031245;
		case 40:
			return -29822088;
		case 41:
			return 1323028278;
		case 42:
			return 797908556;
		case 43:
			return 1907663129;
		case 44:
			return -60432888;
		case 45:
			return -1209874968;
		case 46:
			return 1078589127;
		case 47:
			return -1525233154;
		case 48:
			return 1278022357;
		case 49:
			return -1729554078;
		case 50:
			return -1480068681;
		case 51:
			return 926420921;
		case 52:
			return 1195903441;
		case 53:
			return -649929946;
		case 54:
			return 1829805500;
		case 55:
			return -1855662261;
		case 56:
			return 111084081;
		case 57:
			return 149216078;
		case 58:
			return -1920464018;
		case 59:
			return 659100749;
		case 60:
			return -1378468884;
		case 61:
			return -1575244501;
		case 62:
			return -1786033368;
		case 63:
			return 1899963938;
		case 64:
			return -1525401254;
		case 65:
			return 666050502;
		case 66:
			return 887717126;
		case 67:
			return -885646667;
		case 68:
			return 946848176;
		case 69:
			return 2110112797;
		case 70:
			return -1543433893;
		case 71:
			return -587737142;
		case 72:
			return -1697567574;
		case 73:
			return 1554410187;
		case 74:
			return -1551628748;
		case 75:
			return 1801131110;
		case 76:
			return -1431848307;
		case 77:
			return -979738281;
		case 78:
			return -837774766;
		case 79:
			return -1223791123;
		case 80:
			return -1181880939;
		case 81:
			return 180714777;
		case 82:
			return -521477124;
		case 83:
			return 1156950836;
		case 84:
			return 1498983922;
		case 85:
			return -1089821002;
		case 86:
			return -1767968552;
		case 87:
			return 1052684812;
		case 88:
			return -1835722213;
		case 89:
			return -1229834518;
		case 90:
			return -392183396;
		case 91:
			return 839199173;
		case 92:
			return -1080696981;
		case 93:
			return 509781427;
		case 94:
			return -1491472827;
		case 95:
			return 1075856357;
		case 96:
			return 1806354060;
		case 97:
			return 268103762;
		case 98:
			return 54499763;
		case 99:
			return -47513954;
		case 100:
			return 173401469;
		case 101:
			return 1830494920;
		case 102:
			return -56802666;
		case 103:
			return -415437740;
		case 104:
			return -1465202595;
		case 105:
			return -233204301;
		case 106:
			return -1790318144;
		case 107:
			return -1716981503;
		case 108:
			return -1729980669;
		case 109:
			return -1727526861;
		case 110:
			return -920221586;
		case 111:
			return -931294997;
		case 112:
			return -1486927560;
		case 113:
			return 852774198;
		case 114:
			return -885737328;
		case 115:
			return 1769731136;
		case 116:
			return -1459368569;
		case 117:
			return -1291022662;
		case 118:
			return 638586808;
		case 119:
			return 2096770678;
		case 120:
			return -1605880447;
		case 121:
			return -1539337723;
		case 122:
			return -117284255;
		case 123:
			return -636552746;
		case 124:
			return -1993903481;
		case 125:
			return 791791441;
		case 126:
			return 1903067887;
		case 127:
			return -1927422497;
		case 128:
			return 2040423027;
		case 129:
			return 1838787462;
		case 130:
			return 2050123975;
		case 131:
			return 1811663962;
		case 132:
			return -711254121;
		case 133:
			return -35033037;
		case 134:
			return 955999834;
		case 135:
			return -481051896;
		case 136:
			return -1935700575;
		case 137:
			return -1125028284;
		case 138:
			return -267135864;
		case 139:
			return -751329575;
		case 140:
			return 1037792287;
		case 141:
			return 798283666;
		case 142:
			return -1970041458;
		case 143:
			return -203268054;
		case 144:
			return -415250715;
		case 145:
			return -799500009;
		case 146:
			return 1405624312;
		case 147:
			return -1123356036;
		case 148:
			return -1478178768;
		case 149:
			return 168336706;
		case 150:
			return 807983049;
		case 151:
			return 1636352616;
		case 152:
			return 1110815339;
		case 153:
			return -1197630873;
		case 154:
			return 1213703;
		case 155:
			return -1418298797;
		case 156:
			return 1900141702;
		case 157:
			return -992423055;
		case 158:
			return 320758674;
		case 159:
			return -546870456;
		case 160:
			return 2119170919;
		case 161:
			return 1547488310;
		case 162:
			return 1449867002;
		case 163:
			return -46116991;
		case 164:
			return 1281707602;
		case 165:
			return 1865781806;
		case 166:
			return -1631930150;
		case 167:
			return -2059285007;
		case 168:
			return 456199285;
		case 169:
			return -340578116;
		case 170:
			return 362862598;
		case 171:
			return -1391865428;
		case 172:
			return -1084890102;
		case 173:
			return -1857550353;
		case 174:
			return -1629969648;
		case 175:
			return 576694808;
		case 176:
			return -2006026692;
		case 177:
			return -161625840;
		case 178:
			return 1662680949;
		case 179:
			return 352539363;
		case 180:
			return -1196069774;
		case 181:
			return -1685270562;
		case 182:
			return -813902658;
		case 183:
			return 282858309;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1774(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1775(int iParam0)
{
	int iVar0;

	iVar0 = func_1776(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_1777(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1864(iParam0);
	iVar1 = Global_1296859;
	iVar2 = func_1780(iParam1, 1);
	switch (Global_1146212.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1778(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1774(iParam1))
	{
		return 0;
	}
	if (!func_1865(iParam0))
	{
		return 0;
	}
	iVar0 = func_1780(iParam0, 1);
	func_1866(iParam0, iParam1, iParam2);
	if (func_1867(Global_1146212.f_35859.f_3116[iVar0 /*31*/]) && func_1868(iParam0, Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1869(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1870(vVar1))
		{
			if (func_1871(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1872(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1873(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1873(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1779(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1780(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_1781(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1782(int iParam0, int iParam1)
{
	Global_1146212.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1783(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

int func_1784(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return func_1874(iParam0, iVar0);
}

bool func_1785(var uParam0)
{
	return (uParam0->f_20 && !uParam0->f_22);
}

char* func_1786(var uParam0)
{
	if (uParam0->f_26 || uParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

bool func_1787(int iParam0)
{
	int iVar0;

	iVar0 = func_1875();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

char* func_1788(var uParam0)
{
	if (uParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1789(var uParam0)
{
	return (uParam0->f_29 || uParam0->f_23);
}

bool func_1790(var uParam0)
{
	return (!func_1789(uParam0) && (uParam0->f_30 || uParam0->f_24));
}

int func_1791(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (func_1789(uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_1582(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1790(uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_1876(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1792(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_329(iParam0);
}

int func_1793(int iParam0)
{
	return (iParam0 / 100);
}

int func_1794(int iParam0)
{
	return (iParam0 % 100);
}

var func_1795(int iParam0)
{
	struct<4> Var0;

	if (iParam0 <= -1)
	{
		return "";
	}
	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return func_1877(Var0);
}

int func_1796(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1878(iVar0);
}

int func_1797()
{
	return Global_1940311.f_1433.f_4189.f_2084;
}

void func_1798(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1655(uParam0, &uParam1);
}

bool func_1799(int iParam0)
{
	return func_1879() == iParam0;
}

void func_1800(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1655(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1801(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1802(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1803(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1804(&uParam1));
}

char* func_1801(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_1802(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_1803(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_1804(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_1805()
{
	return UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("ABILITIES"));
}

char* func_1806(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_526(func_1880(), joaat("COLOR_PURE_WHITE"));
	if (func_1507())
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_1628() == 1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_1805())
	{
		return "INVALID";
	}
	iVar1 = UIAPPS::_0x96FD694FE5BE55DC(joaat("ABILITIES"));
	if (iVar1 == 1738917854)
	{
		return func_1882(func_1881());
	}
	else if (iVar1 == -477213344)
	{
		return func_1883(&uParam0);
	}
	else if (iVar1 == 756463805)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

bool func_1807(int iParam0)
{
	int iVar0;

	iVar0 = func_962(iParam0);
	if ((iVar0 == joaat("ABILITY_CARD") || iVar0 == joaat("PASSIVE_CARD")) || iVar0 == joaat("ACTIVE_CARD"))
	{
		return true;
	}
	return false;
}

bool func_1808(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_DEADEYE"));
		case 1:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_0"));
		case 2:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_1"));
		case 3:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_2"));
		default:
			break;
	}
	return false;
}

void func_1809(var uParam0, int iParam1)
{
	func_483(uParam0, iParam1);
}

void func_1810(var uParam0, int iParam1)
{
	func_606(uParam0, iParam1);
}

bool func_1811()
{
	return func_1628() == 0;
}

int func_1812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

void func_1813(int iParam0, var uParam1)
{
	if (!func_1307(*uParam1))
	{
		uParam1->f_11 = func_1884(iParam0);
		uParam1->f_12 = func_1885(iParam0);
	}
}

int func_1814(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1864(iParam0);
	iVar1 = Global_1296859;
	iVar2 = func_1780(iParam1, 1);
	switch (Global_1146212.f_35859.f_3116[iVar2 /*31*/])
	{
		case joaat("ON_ENABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1815(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_1774(iParam1))
	{
		return 0;
	}
	if (!func_1865(iParam0))
	{
		return 0;
	}
	iVar0 = func_1780(iParam0, 1);
	if (!func_1886(iParam2))
	{
		return 0;
	}
	bVar1 = func_1867(Global_1146212.f_35859.f_3116[iVar0 /*31*/]);
	if (bVar1 && func_1887(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar2 = { func_1888(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (!func_1866(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_1871(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_1872(Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_1816(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_939(2) * 2;
		case 1:
			return func_941(2) * 2;
		case 2:
			return func_940(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1817(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1889(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1818(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1819(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1820(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1821(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1822(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1823(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_1824(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1890(iParam0, iParam6);
	func_1891(iParam0, iParam5);
	func_1892(iParam0, iParam4);
	func_1893(iParam0, iParam3);
	func_1894(iParam0, iParam2);
	func_1895(iParam0, iParam1);
}

bool func_1825()
{
	return Global_1913504.f_127 == 0;
}

bool func_1826(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1896(iParam0, uParam1, &uVar0))
	{
		func_1897(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1827(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1898(iParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1899(iParam0, iParam1);
	}
	return true;
}

int func_1828(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1164(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_1829(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1898(iParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_1900(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1830(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_857((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1831(int iParam0, int iParam1)
{
	if (!func_1587(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_190[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1071686.f_21325[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_1832(int iParam0, int iParam1)
{
	if (!func_1587(iParam0))
	{
		return;
	}
	if (!func_1831(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_190[iParam0 /*12*/].f_5 = (Global_39.f_190[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1071686.f_21325[iParam0 /*12*/].f_5 = (Global_1071686.f_21325[iParam0 /*12*/].f_5 || iParam1);
}

void func_1833(int iParam0, int iParam1)
{
	if (!func_1587(iParam0))
	{
		return;
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_190[iParam0 /*12*/].f_5 = (Global_39.f_190[iParam0 /*12*/].f_5 - (Global_39.f_190[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1071686.f_21325[iParam0 /*12*/].f_5 = (Global_1071686.f_21325[iParam0 /*12*/].f_5 - (Global_1071686.f_21325[iParam0 /*12*/].f_5 && iParam1));
}

void func_1834(int iParam0, bool bParam1)
{
	if (!func_1587(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1902(func_1901(iParam0));
	}
	else
	{
		func_1903(func_1901(iParam0));
	}
}

bool func_1835(int iParam0)
{
	if (!func_758(iParam0))
	{
		return false;
	}
	return func_762(iParam0, 33554432);
}

int func_1836()
{
	return Global_1939161.f_26;
}

int func_1837(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_1838(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_23() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_1333(44))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_23() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_1333(44))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_23() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_1333(44))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

void func_1839(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1071686.f_19674[iParam0 /*11*/].f_2 = iParam1;
}

void func_1840(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/] = (Global_8123[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1071686.f_19674[iParam0 /*11*/] = (Global_1071686.f_19674[iParam0 /*11*/] || iParam1);
	}
}

void func_1841(int iParam0)
{
	if (!func_758(iParam0))
	{
		return;
	}
	if (func_1904(iParam0))
	{
		func_1905(iParam0);
	}
	else
	{
		func_1906(iParam0);
	}
}

bool func_1842(int iParam0)
{
	if (!func_758(iParam0))
	{
		return false;
	}
	return func_762(iParam0, 16777216);
}

int func_1843(int iParam0)
{
	if (!func_758(iParam0))
	{
		return 0;
	}
	return Global_1887339[iParam0 /*36*/].f_4;
}

int func_1844(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_758(iParam0))
	{
		return 0;
	}
	iVar0 = func_1907(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_1909(func_1908(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_1845(int iParam0, int iParam1)
{
	if (Global_1572887.f_13 == -1)
	{
		Global_8123[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1071686.f_19674[iParam0 /*11*/].f_1 = iParam1;
}

void func_1846(int iParam0, int iParam1)
{
	if (!func_758(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8123[iParam0 /*11*/].f_3 = iParam1;
}

void func_1847(int iParam0)
{
	if (!func_758(iParam0))
	{
		return;
	}
	if (func_1835(iParam0) && func_1910(iParam0))
	{
		func_1902(func_1911(iParam0, 0));
	}
	else
	{
		func_1903(func_1911(iParam0, 0));
	}
}

void func_1848(int iParam0, int iParam1)
{
	if (!func_1732(iParam0))
	{
		return;
	}
	if (!func_1912(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] || iParam1);
		return;
	}
	Global_1071686.f_21398[iParam0] = (Global_1071686.f_21398[iParam0] || iParam1);
}

bool func_1849(int iParam0)
{
	if (!func_1732(iParam0))
	{
		return false;
	}
	return func_1912(iParam0, 2);
}

void func_1850(int iParam0, int iParam1)
{
	if (!func_1732(iParam0))
	{
		return;
	}
	if (Global_1572887.f_13 == -1)
	{
		Global_39.f_263[iParam0] = (Global_39.f_263[iParam0] - (Global_39.f_263[iParam0] && iParam1));
		return;
	}
	Global_1071686.f_21398[iParam0] = (Global_1071686.f_21398[iParam0] - (Global_1071686.f_21398[iParam0] && iParam1));
}

void func_1851(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1732(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_1913(iParam0);
	if (bParam1)
	{
		func_1902(iVar0);
	}
	else
	{
		func_1903(iVar0);
	}
}

char* func_1852(int iParam0)
{
	if (Global_3145858.f_61343[iParam0 /*3*/].f_1 > -1)
	{
		if (func_1914(Global_3145858.f_61343[iParam0 /*3*/].f_1))
		{
			return MISC::_CREATE_VAR_STRING(2, &(Global_3145858.f_52528[Global_3145858.f_61343[iParam0 /*3*/].f_1 /*18*/]));
		}
		return func_1915(&(Global_3145858.f_52528[Global_3145858.f_61343[iParam0 /*3*/].f_1 /*18*/]));
	}
	return "";
}

char* func_1853(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CPCO");
	}
	return "";
}

float func_1854(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

int func_1855(int iParam0)
{
	return Global_1952637.f_1675.f_1[func_1125(iParam0, 1) /*3*/];
}

struct<16> func_1856(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_682(uParam0->f_4, joaat("DEFAULT"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_924() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1857(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1858(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346.f_20 < 20)
	{
		Global_1293346.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1293346.f_20.f_1[iVar0 /*21*/] = { Global_1293346.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_1916(&(Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/]));
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/] = iParam0;
	Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1293346.f_20.f_1[(Global_1293346.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_1859(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_1860(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_1861(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1917(iVar0, 1, 0);
		if (!func_1726(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1918(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_992(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1862(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1917(iVar0, 0, 1);
		if (!func_1726(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1919(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_992(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH") || Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_CASH")) || (!bParam2 && Var9[iVar41 /*2*/] == joaat("CURRENCY_GOLD_BAR")))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

char* func_1863(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_1864(int iParam0)
{
	if (func_1920(iParam0))
	{
		return (func_1921(iParam0) % 32);
	}
	return Global_1296859;
}

bool func_1865(int iParam0)
{
	int iVar0;

	iVar0 = func_1780(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_1866(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1674(iParam1, 1);
	iVar1 = func_1780(iParam0, 1);
	iVar2 = func_1776(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	if (!Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1922(iVar3, 1);
		if (!func_1923(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 - func_1924(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1925(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1926(iVar6))
		{
		}
		else
		{
			iVar8 = func_1927(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1] = (Global_1146212.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1146212.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&(Global_1146212.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1928(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_1867(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1868(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1865(iParam0))
	{
		return false;
	}
	if (!func_1929(iParam1))
	{
		return false;
	}
	iVar0 = func_1930(iParam1, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1869(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1931(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1146212.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1870(vector3 vParam0)
{
	if (!func_1865(vParam0.x))
	{
		return false;
	}
	if (!func_1774(vParam0.y))
	{
		return false;
	}
	if (!func_1886(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1871(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1674(iParam1, 1);
	iVar1 = func_1780(iParam0, 1);
	iVar2 = func_1776(Global_1146212.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1146212.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1296859.f_21;
	if (Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1146212.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1922(iVar3, 1);
		if (!func_1923(iVar3))
		{
		}
		else
		{
			Global_1146212.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1146212.f_2169[iVar5 /*205*/].f_201 = (Global_1146212.f_2169[iVar5 /*205*/].f_201 + func_1924(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1932(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1926(iVar6))
		{
		}
		else if (!func_1933(&(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1927(iVar6, 1);
			Global_1146212.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_0xE84AAC1B22A73E99(&(Global_1146212.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1146212.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1146212.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1934(iVar6);
			}
		}
		iVar7++;
	}
	func_1935(Global_1146212.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1872(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1929(iParam0))
	{
		return;
	}
	iVar0 = func_1930(iParam0, 1);
	if (!func_1865(iParam1))
	{
		return;
	}
	if (!func_1774(iParam2))
	{
		return;
	}
	if (!func_1886(iParam3))
	{
		return;
	}
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1873(int iParam0)
{
	int iVar0;

	if (!func_1929(iParam0))
	{
		return;
	}
	iVar0 = func_1930(iParam0, 1);
	Global_1146212.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1146212.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

int func_1874(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DEADEYE"):
			switch (iParam1)
			{
				case 0:
					return joaat("ABILITY_CARD_DEAD_EYE_TIER_1");
				case 1:
					return joaat("ABILITY_CARD_DEAD_EYE_TIER_2");
				case 2:
					return joaat("ABILITY_CARD_DEAD_EYE_TIER_3");
				default:
					break;
			}
			break;
		case joaat("COMBAT"):
			switch (iParam1)
			{
				case 0:
					return joaat("ABILITY_CARD_COMBAT_TIER_1");
				case 1:
					return joaat("ABILITY_CARD_COMBAT_TIER_2");
				case 2:
					return joaat("ABILITY_CARD_COMBAT_TIER_3");
				default:
					break;
			}
			break;
		case joaat("DEFENSE"):
			switch (iParam1)
			{
				case 0:
					return joaat("ABILITY_CARD_DEFENSE_TIER_1");
				case 1:
					return joaat("ABILITY_CARD_DEFENSE_TIER_2");
				case 2:
					return joaat("ABILITY_CARD_DEFENSE_TIER_3");
				default:
					break;
			}
			break;
		case joaat("RECOVERY"):
			switch (iParam1)
			{
				case 0:
					return joaat("ABILITY_CARD_RECOVERY_TIER_1");
				case 1:
					return joaat("ABILITY_CARD_RECOVERY_TIER_2");
				case 2:
					return joaat("ABILITY_CARD_RECOVERY_TIER_3");
				default:
					break;
			}
			break;
	}
	return joaat("COLOR_WHITE");
}

int func_1875()
{
	return Global_1139381.f_4621.f_155;
}

bool func_1876(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

char* func_1877(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1139381.f_11.f_1562.f_1647[0];
		case 1:
			return Global_1139381.f_11.f_1562.f_1647[1];
		default:
			break;
	}
	return -1;
}

int func_1879()
{
	return Global_1940311.f_1433.f_4189.f_2087;
}

char* func_1880()
{
	return func_1578(Global_1940311.f_1433.f_8.f_7);
}

int func_1881()
{
	return Global_1940311.f_1433.f_4189.f_2086;
}

char* func_1882(int iParam0)
{
	if (!func_1808(iParam0))
	{
		if (func_1309(iParam0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_1812(iParam0));
		}
	}
	else if (!func_1936(iParam0, 1))
	{
		if (func_1309(iParam0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_1309(iParam0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_1883(var uParam0)
{
	if (func_1937(uParam0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_1938(uParam0->f_2, 1));
	}
	else if (uParam0->f_26 || uParam0->f_27)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_29)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_23)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

char* func_1884(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_1885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

bool func_1886(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_1887(int iParam0)
{
	int iVar0;

	if (!func_1929(iParam0))
	{
		return false;
	}
	iVar0 = func_1939(iParam0);
	if (!func_1865(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_1888(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_1929(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_1930(iParam0, 1);
	return Global_1146212.f_35859.f_9286[iVar3 /*3*/];
}

int func_1889(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1890(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_1891(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1892(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1818(*iParam0);
	iVar1 = func_1817(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1823(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1893(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1894(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1895(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_1896(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1713(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1897(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

bool func_1898(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

bool func_1899(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

void func_1900(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if (*uParam2)[iVar0 /*2*/] == joaat("CURRENCY_GOLD_BAR")
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 100f))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_857((*uParam2)[iVar0 /*2*/]) != -829303394)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_1901(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

void func_1902(int iParam0)
{
	int iVar0;

	if (func_1940(iParam0) == 62)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_1941(iParam0) == 4 || func_1941(iParam0) == 12) || func_1733(func_1941(iParam0)) == 4) || (func_1912(func_1941(iParam0), 8) && ((func_1941(iParam0) == 2 || func_1941(iParam0) == 0) || func_1941(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_1903(int iParam0)
{
	if (func_1940(iParam0) == 62)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

bool func_1904(int iParam0)
{
	if (!func_758(iParam0))
	{
		return false;
	}
	return func_762(iParam0, 67108864);
}

void func_1905(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1942(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1943(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_1906(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_1942(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1943(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_1907(int iParam0)
{
	if (!func_758(iParam0))
	{
		return 0;
	}
	if (func_1842(iParam0))
	{
		return -1;
	}
	return Global_8123[iParam0 /*11*/].f_3;
}

int func_1908(int iParam0)
{
	if (!func_758(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_13 == -1)
	{
		return Global_8123[iParam0 /*11*/].f_1;
	}
	return Global_1071686.f_19674[iParam0 /*11*/].f_1;
}

int func_1909(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_1944(iParam0))
	{
		return 0;
	}
	func_1945(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

bool func_1910(int iParam0)
{
	if (!func_758(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_1911(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 30:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 29:
			return joaat("REGION_BGV_OLD_MAN_JONES");
		case 31:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 32:
			return joaat("REGION_BLU_COPPERHEAD");
		case 33:
			return joaat("REGION_BLU_SISIKA");
		case 34:
			return joaat("REGION_BLU_TRAVELLING_SALESMAN");
		case 35:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 36:
			return joaat("REGION_CML_DINO_LADY");
		case 37:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 38:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 39:
			return joaat("REGION_GRT_BEECHERS");
		case 40:
			return joaat("REGION_GRT_BLACKWATER");
		case 41:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 42:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 43:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 53:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 54:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 44:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 55:
			return joaat("REGION_GRZ_COHUTTA");
		case 45:
			return joaat("REGION_GRZ_COLTER");
		case 56:
			return joaat("REGION_GRZ_COTORRA_SPRINGS");
		case 46:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 57:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 47:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 48:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 49:
			return joaat("REGION_GRZ_MOUNT_HAGEN_PEAK");
		case 50:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 51:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 58:
			return joaat("REGION_GRZ_THELOFT");
		case 59:
			return joaat("REGION_GRE_VETERAN");
		case 60:
			return joaat("REGION_GRZ_WAPITI");
		case 52:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 61:
			return joaat("REGION_GRZ_TRAVELLING_SALESMAN");
		case 62:
			return joaat("REGION_GUA_AGUASDULCES");
		case 63:
			return joaat("REGION_GUA_CAMP");
		case 64:
			return joaat("REGION_GUA_CINCOTORRES");
		case 65:
			return joaat("REGION_GUA_LACAPILLA");
		case 66:
			return joaat("REGION_GUA_MANICATO");
		case 67:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 69:
			return joaat("REGION_HRT_CARMODYDELL");
		case 70:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 71:
			return joaat("REGION_HRT_CROP_FARM");
		case 72:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 73:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 74:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 75:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 76:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 77:
			return joaat("REGION_HRT_LARNEDSOD");
		case 78:
			return joaat("REGION_HRT_LOONY_CULT");
		case 79:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 80:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 83:
			return joaat("REGION_ROA_ANNESBURG");
		case 84:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 68:
			return joaat("REGION_ROA_BEECHERS_C");
		case 85:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 86:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 87:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 88:
			return joaat("REGION_ROA_DOVERHILL");
		case 89:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 90:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 91:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 92:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 93:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 94:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 95:
			return joaat("REGION_ROA_TRAPPER");
		case 97:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 98:
			return joaat("REGION_ROA_VANHORNPOST");
		case 96:
			return joaat("REGION_ROA_OLD_MAN_JONES");
		case 99:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 100:
			return joaat("REGION_SCM_BULGERGLADE");
		case 101:
			return joaat("REGION_SCM_CALIGAHALL");
		case 102:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 103:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 104:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 105:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 106:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 107:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 108:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 109:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 110:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 111:
			return joaat("REGION_SCM_RHODES");
		case 112:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 113:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 115:
			return joaat("REGION_TAL_COCHINAY");
		case 116:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 117:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 118:
			return joaat("REGION_TAL_TANNERSREACH");
		case 114:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 119:
			return joaat("REGION_TAL_TRAPPER");
		case 135:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 136:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 137:
			return joaat("REGION_HEN_TRAVELLING_SALESMAN");
		case 138:
			return -1573562784;
		case 127:
			return joaat("REGION_CHO_ARMADILLO");
		case 128:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 129:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 131:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 130:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 132:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 133:
			return joaat("REGION_CHO_TRAVELLING_SALESMAN");
		case 134:
			return 1869665995;
		case 120:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 121:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 122:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 123:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 124:
			return joaat("REGION_RIO_FORT_MERCER");
		case 125:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 126:
			return joaat("REGION_RIO_TRAVELLING_SALESMAN");
		case 139:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	if (bParam1)
	{
		return joaat("WILDERNESS");
	}
	return 0;
}

bool func_1912(int iParam0, int iParam1)
{
	if (!func_1732(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_13 == -1)
	{
		return (Global_39.f_263[iParam0] && iParam1) != 0;
	}
	return (Global_1071686.f_21398[iParam0] && iParam1) != 0;
}

int func_1913(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

bool func_1914(int iParam0)
{
	return func_430(Global_3145858.f_52528[iParam0 /*18*/].f_17, 0);
}

var func_1915(var uParam0)
{
	return uParam0;
}

void func_1916(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1946(&(uParam0->f_4));
}

int func_1917(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_1918(int iParam0)
{
	return func_857(iParam0) == 1946043663;
}

bool func_1919(int iParam0)
{
	return func_857(iParam0) == -126813555;
}

bool func_1920(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1921(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (func_1920(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1947(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1948(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1949(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1950(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1951(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1952(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1922(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
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

bool func_1923(int iParam0)
{
	int iVar0;

	iVar0 = func_1922(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1924(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1953(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1925(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1923(iParam0))
	{
		return;
	}
	iVar0 = func_1922(iParam0, 1);
	if (!func_617(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_1954(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1955(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] != Global_1146212.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1146212.f_47561[iVar1 /*25*/].f_23 = (Global_1146212.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1146212.f_47561[iVar1 /*25*/][iVar2] = Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23];
			Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1926(int iParam0)
{
	int iVar0;

	iVar0 = func_1927(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1927(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_1928(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1956();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1957();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_REMOVE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_0xC5CB91D65852ED7E(func_1958(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1958(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1958(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(5);
			func_1343(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_0xC5CB91D65852ED7E(func_1958(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_0x442B4347B6EC36E8(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0x3FC4C027FD0936F4(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1960(func_1959(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0xAF4D239B8903FCBE();
			PLAYER::_0x768E81AE285A4B67(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 1);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 1f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1961();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_617(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_617(16);
			break;
	}
}

bool func_1929(int iParam0)
{
	int iVar0;

	iVar0 = func_1930(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1930(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
			return 2;
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

int func_1931(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1939(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212.f_35859.f_11700)
	{
		iVar64 = func_1780(Global_1146212.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1146212.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1146212.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1962(Global_1146212.f_35859.f_9503[iVar65 /*3*/], Global_1146212.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_1963(Global_1146212.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

void func_1932(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1923(iParam0))
	{
		return;
	}
	iVar0 = func_1922(iParam0, 1);
	if (!func_617(Global_1146212.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1146212.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_1954(Global_1146212.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1955(Global_1146212.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1146212[Global_1146212.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1146212.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1146212.f_47561[iVar1 /*25*/][iVar2] == Global_1146212.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1146212.f_47561[iVar1 /*25*/][Global_1146212.f_47561[iVar1 /*25*/].f_23] = Global_1146212.f_2169[iVar0 /*205*/];
	Global_1146212.f_47561[iVar1 /*25*/].f_23++;
}

bool func_1933(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1964(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1934(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1956();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1957();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1958(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1958(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1958(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_0xFB6E111908502871(5);
			func_1343(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1958(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_0xFB6E111908502871(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_0x5F8E0303C229C84B(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_1959(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1965(iParam0, 0));
			func_1966(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1965(iParam0, 1));
			func_1966(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1965(iParam0, 2));
			func_1966(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1965(iParam0, 3));
			func_1966(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1959(iParam0);
			func_1966(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1959(iParam0);
			func_1966(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_0x768E81AE285A4B67(iVar1, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_0x249CD6B7285536F2(0f, 2f, 2f);
			PLAYER::_0x768E81AE285A4B67(iVar1, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_0xCE285A4413B00B7F(iVar1, 0);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_0xDFC85C5199045026(iVar1, 0.5f);
			PLAYER::_0x6FA957D1B55941C1(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1967();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_617(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_617(16);
			break;
	}
}

void func_1935(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1968(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1969(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_ENTITY(sVar0, Global_1296859.f_8, sVar1, false, 0, 0);
}

bool func_1936(int iParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	bool bVar6;

	iVar0 = func_1499(iParam0);
	Var1 = { func_677(bParam1) };
	iVar5 = func_1970(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

bool func_1937(var uParam0)
{
	return (!uParam0->f_20 && !func_1769(uParam0));
}

int func_1938(int iParam0, bool bParam1)
{
	struct<2> Var0;

	if (!func_681(iParam0, 0))
	{
		return -1;
	}
	UNLOCK::_0x7C1C2062CFAD06FE(iParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_1280(iParam0, 81450561) || func_1280(iParam0, 1342455455))
	{
		return -1;
	}
	switch (Var0)
	{
		case joaat("CHARACTER_RANK_TRADER"):
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
		case joaat("CHARACTER_RANK_COLLECTOR"):
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case joaat("CHARACTER_RANK_INTRO"):
			return 1;
		case joaat("CHARACTER_RANK"):
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

int func_1939(int iParam0)
{
	int iVar0;

	if (!func_1929(iParam0))
	{
		return -1;
	}
	iVar0 = func_1930(iParam0, 1);
	return Global_1146212.f_35859.f_9286[iVar0 /*3*/];
}

int func_1940(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 30;
		case joaat("REGION_BGV_OLD_MAN_JONES"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 31;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 32;
		case joaat("REGION_BLU_SISIKA"):
			return 33;
		case joaat("REGION_BLU_TRAVELLING_SALESMAN"):
			return 34;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 35;
		case joaat("REGION_CML_DINO_LADY"):
			return 36;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 37;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 38;
		case joaat("REGION_GRT_BEECHERS"):
			return 39;
		case joaat("REGION_GRT_BLACKWATER"):
			return 40;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 41;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 42;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 43;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 53;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 54;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 44;
		case joaat("REGION_GRZ_COHUTTA"):
			return 55;
		case joaat("REGION_GRZ_COLTER"):
			return 45;
		case joaat("REGION_GRZ_COTORRA_SPRINGS"):
			return 56;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 46;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 57;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 47;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 48;
		case joaat("REGION_GRZ_MOUNT_HAGEN_PEAK"):
			return 49;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 50;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 51;
		case joaat("REGION_GRZ_THELOFT"):
			return 58;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 59;
		case joaat("REGION_GRZ_WAPITI"):
			return 60;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 52;
		case joaat("REGION_GRZ_TRAVELLING_SALESMAN"):
			return 61;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 62;
		case joaat("REGION_GUA_CAMP"):
			return 63;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 64;
		case joaat("REGION_GUA_LACAPILLA"):
			return 65;
		case joaat("REGION_GUA_MANICATO"):
			return 66;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 67;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 69;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 70;
		case joaat("REGION_HRT_CROP_FARM"):
			return 71;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 72;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 73;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 74;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 75;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 76;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 77;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 78;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 79;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 80;
		case joaat("REGION_HRT_VALENTINE"):
			return 81;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 82;
		case joaat("REGION_ROA_ANNESBURG"):
			return 83;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 68;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 84;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 85;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 86;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 87;
		case joaat("REGION_ROA_DOVERHILL"):
			return 88;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 89;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 90;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 91;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 92;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 93;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 94;
		case joaat("REGION_ROA_TRAPPER"):
			return 95;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 97;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 98;
		case joaat("REGION_ROA_OLD_MAN_JONES"):
			return 96;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 99;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 100;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 101;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 102;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 103;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 104;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 107;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 108;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 109;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 105;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 106;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 110;
		case joaat("REGION_SCM_RHODES"):
			return 111;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 112;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 113;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 114;
		case joaat("REGION_TAL_COCHINAY"):
			return 115;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 116;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 117;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 118;
		case joaat("REGION_TAL_TRAPPER"):
			return 119;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 135;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 136;
		case joaat("REGION_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case -1573562784:
			return 138;
		case joaat("REGION_CHO_ARMADILLO"):
			return 127;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 128;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 129;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 131;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 130;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 132;
		case joaat("REGION_CHO_TRAVELLING_SALESMAN"):
			return 133;
		case 1869665995:
			return 134;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 120;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 121;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 122;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 123;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 124;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 125;
		case joaat("REGION_RIO_TRAVELLING_SALESMAN"):
			return 126;
		case joaat("REGION_CENTRALUNIONRR"):
			return 139;
		default:
			break;
	}
	return -1;
}

int func_1941(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_1942(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1943(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1944(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1822(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1821(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1820(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1817(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1818(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1819(iParam0);
	if (iVar5 < 1 || iVar5 > func_1823(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1945(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1971(func_1688(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_1946(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

bool func_1947(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1948(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1949(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1950(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1951(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1952(int iParam0)
{
	int iVar0;

	iVar0 = func_1674(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1953(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1972(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_FLOAT(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1954(int iParam0)
{
	int iVar0;

	iVar0 = func_1955(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1955(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_1956()
{
	bool bVar0;
	bool bVar1;

	if (Global_1146212.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 550, bVar0);
	if (Global_1146212.f_21645[4 /*209*/].f_208)
	{
		if (!func_78(Global_1298536[Global_1296859 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 556, bVar1);
}

void func_1957()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1146212.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 263, bVar0);
}

char* func_1958(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1959(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
		default:
			break;
	}
	return 0;
}

void func_1960(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1193972[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1193972[iVar0 /*8*/].f_7 = 1;
			Global_1193972[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_1961()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, false);
	PED::_0x801917E7D7BCE418(Global_1296859.f_8);
}

bool func_1962(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1865(iParam0))
	{
		return false;
	}
	iVar0 = func_1780(iParam0, 1);
	iVar2 = Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1867(Global_1146212.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1146212.f_35859.f_9286[func_1930(iVar2, 1) /*3*/];
		Var4 = { func_1963(iVar3) };
		if (iVar3 != iParam0 && Global_1146212.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1146212.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1973() && !func_1974())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1973())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1864(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1864(iParam1);
			if (iVar1 == Global_1296859)
			{
				return false;
			}
			if (!GANG::_0x424B17A7DC5C90BC(Global_1296859.f_154[Global_1296859]))
			{
				return false;
			}
			if (!GANG::_0x81FB74C83C2ED69F(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_1864(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1296859 && !func_975(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (!func_1191(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956200.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1864(iParam1);
			if (!NETWORK::_NETWORK_IS_PLAYER_INDEX_VALID(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			if (PED::_0x0C31C51168E80365(Global_1296859.f_8) != PLAYER::GET_PLAYER_PED(Global_1296859.f_154[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1963(int iParam0)
{
	int iVar0;

	iVar0 = func_1780(iParam0, 1);
	return Global_1146212.f_35859.f_3116[iVar0 /*31*/];
}

bool func_1964(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1972(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::_NETWORK_TRY_ACCESS_TUNABLE_BOOL(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1965(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1966(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1193972[iVar0 /*8*/]) && !Global_1193972[iVar0 /*8*/].f_6)
		{
			Global_1193972[iVar0 /*8*/].f_5 = iParam0;
			Global_1193972[iVar0 /*8*/].f_1 = iParam1;
			Global_1193972[iVar0 /*8*/].f_2 = iParam2;
			Global_1193972[iVar0 /*8*/].f_3 = iParam3;
			Global_1193972[iVar0 /*8*/].f_4 = iParam4;
			Global_1193972[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1967()
{
	PED::SET_PED_CONFIG_FLAG(Global_1296859.f_8, 305, true);
	PED::_0x05CE6AF4DF071D23(Global_1296859.f_8, 0.7f);
}

char* func_1968(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1969(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

int func_1970(var uParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_659(bParam2), uParam0, bParam1);
}

void func_1971(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_1975(iParam0, iParam1, 1))
	{
		iVar0 = func_1818(iParam1);
		iVar1 = func_1817(iParam0);
		iVar2 = (func_1817(iParam0) - func_1817(iParam1));
		iVar3 = (func_1818(iParam0) - func_1818(iParam1));
		iVar4 = (func_1819(iParam0) - func_1819(iParam1));
		iVar5 = (func_1820(iParam0) - func_1820(iParam1));
		iVar6 = (func_1821(iParam0) - func_1821(iParam1));
		iVar7 = (func_1822(iParam0) - func_1822(iParam1));
	}
	else
	{
		iVar0 = func_1818(iParam0);
		iVar1 = func_1817(iParam1);
		iVar2 = (func_1817(iParam1) - func_1817(iParam0));
		iVar3 = (func_1818(iParam1) - func_1818(iParam0));
		iVar4 = (func_1819(iParam1) - func_1819(iParam0));
		iVar5 = (func_1820(iParam1) - func_1820(iParam0));
		iVar6 = (func_1821(iParam1) - func_1821(iParam0));
		iVar7 = (func_1822(iParam1) - func_1822(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_1823(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_1976(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_1972(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = joaat("NAME");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("NAME")))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_0x44B3A36933AC009C(&iVar7, &Var0, joaat("TYPE"));
		uParam2->f_10.f_3 = func_1977(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_10), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_0xB2B42607F7867576(&(uParam2->f_10.f_1), &Var0, joaat("DEFAULT")))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_10.f_2), &Var0, joaat("DEFAULT")))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_14), &Var0, joaat("MIN"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_14.f_1), &Var0, joaat("MIN"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_14.f_2), &Var0, joaat("MIN"));
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_0x52FC26D2D2FC2987(&(uParam2->f_18), &Var0, joaat("MAX"));
				break;
			case 1:
				DATAFILE::_0xB2B42607F7867576(&(uParam2->f_18.f_1), &Var0, joaat("MAX"));
				break;
			case 2:
				DATAFILE::_0xA63CD20F19B961AB(&(uParam2->f_18.f_2), &Var0, joaat("MAX"));
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1973()
{
	return Global_1572887.f_6;
}

bool func_1974()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_73(func_375(0)))
	{
		return false;
	}
	if (Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_1464(Global_524288.f_40400))
	{
		return true;
	}
	return false;
}

bool func_1975(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1944(iParam1) || !func_1944(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_1976(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_1977(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

