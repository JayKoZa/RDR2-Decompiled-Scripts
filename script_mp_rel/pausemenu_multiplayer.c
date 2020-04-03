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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	switch (ScriptParam_0)
	{
		case 2:
			if (ScriptParam_0.f_1 == -821438348 || ScriptParam_0.f_1 == -968517323)
			{
				if (!NETWORK::_0x2A8112A974DE1EF6())
				{
					return;
				}
				CAM::DO_SCREEN_FADE_OUT(0);
				func_1(0);
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (ScriptParam_0.f_1 == -1214041525 || ScriptParam_0.f_1 == -118730902)
			{
				if (!NETWORK::_0x2A8112A974DE1EF6())
				{
					return;
				}
				func_1(1);
				CAM::DO_SCREEN_FADE_OUT(0);
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (ScriptParam_0.f_1 != 745042118)
			{
				if (ScriptParam_0.f_1 == 173068202)
				{
					if (!NETWORK::_0x2A8112A974DE1EF6())
					{
						return;
					}
					if (func_2())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
						HUD::SET_FRONTEND_ACTIVE(false);
					}
				}
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_3();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			break;
		default:
			break;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	func_4(68);
	if (bParam0)
	{
		func_5(joaat("freeroam"), 16);
	}
	else
	{
		func_5(joaat("freeroam"), 0);
	}
	func_6(3);
}

int func_2()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0x595F028698072DD9(-1))
		{
			NETWORK::_0x5C497525F803486B();
			return 0;
		}
	}
	func_4(68);
	func_5(joaat("mission_creator"), 2);
	func_6(3);
	return 1;
}

void func_3()
{
	func_4(4);
	func_6(2);
	func_5(joaat("single_player"), 0);
}

void func_4(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_5(int iParam0, int iParam1)
{
	Global_1572887->f_387 = iParam0;
	Global_1572887->f_387.f_1 = iParam1;
	func_7();
}

void func_6(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_7()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887->f_387.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 30)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887->f_387.f_2 != -1)
	{
	}
	if (Global_1572887->f_387.f_3 != -1)
	{
	}
	if (Global_1572887->f_387.f_4 != -1)
	{
	}
	if (Global_1572887->f_387.f_5 != -1)
	{
	}
	if (Global_1572887->f_387.f_6 != -1)
	{
	}
	if (Global_1572887->f_387.f_8 != 0)
	{
	}
}

