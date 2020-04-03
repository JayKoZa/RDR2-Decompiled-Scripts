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
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	char* sLocal_23 = NULL;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1();
	func_2();
	func_3();
	func_4();
	bVar0 = true;
	while (bVar0)
	{
		if (func_5() == -1)
		{
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (func_6(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_7();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volOldFortWallace_Restriction");
	func_8(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 576.5f, 1692.5f, 190f, 0f, 0f, -45f, 40f, 22f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 565f, 1713f, 190f, 0f, 0f, 0f, 33f, 33f, 15f);
	func_9(iLocal_18, 0, 0);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_19, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	func_10(iLocal_19, 0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_11(iLocal_20);
}

void func_3()
{
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 343.4911f, 1484.906f, 183.6585f, 0f, 0f, 125.4594f, 50.44129f, 27.58693f, 15.20348f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 366.8338f, 1481.555f, 183.3052f, 0f, 0f, 70.84903f, 9.450991f, 11.24788f, 14.86582f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 361.6927f, 1499.326f, 183.0759f, 0f, 0f, 14.50761f, 15.72725f, 35.53953f, 16.71587f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 327.8768f, 1483.835f, 182.8865f, 0f, 0f, -11.76057f, 17.00056f, 10.34268f, 16.34857f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 319.2722f, 1495.286f, 184.5413f, 0f, 0f, -53.96134f, 23.05555f, 18.03384f, 21.16078f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 320.7645f, 1509.291f, 188.6127f, 0f, 0f, -25.21897f, 4.516489f, 7.110216f, 18.25474f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 324.6142f, 1502.853f, 184.9036f, 0f, 0f, -24.95285f, 14.96967f, 13.84794f, 21.22798f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 350.3736f, 1501.781f, 184.2531f, 0f, 0f, 33.49929f, 9.61958f, 30.69061f, 13.84341f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 352.1387f, 1513.729f, 182.7722f, 0f, 0f, 24.7492f, 10.80241f, 11.25904f, 15.89185f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 355.6973f, 1518.419f, 184.7034f, 0f, 0f, 0f, 1.984145f, 5.500231f, 12.25786f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 357.9312f, 1517.985f, 184.7034f, 0f, 0f, -16.95034f, 4.391377f, 5.500231f, 12.25786f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 362.5482f, 1516.343f, 182.8423f, 0f, 0f, 0f, 3.488632f, 3.541783f, 9.602388f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 366.5602f, 1473.809f, 182.5569f, 0f, 0f, 0f, 4f, 4f, 7.516581f);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_22, iLocal_21);
	VOLUME::_0xBCE668AAF83608BE(iLocal_22, 345.1969f, 1487.955f, 182.5569f, 0f, 0f, 0f, 63.65347f, 68.76788f, 13.83329f);
	sLocal_23 = "OLD_FORT_WALLACE";
	LAW::_CREATE_GUARD_ZONE(sLocal_23);
	LAW::_0x8C598A930F471938(sLocal_23, iLocal_22);
	LAW::_0xA1B0E6301E2E02A6(sLocal_23, iLocal_21);
	LAW::_0x35815F372D43E1E5(sLocal_23, iLocal_21);
	LAW::_0xAD3E07C37A7C1ADC(sLocal_23, iLocal_21);
	LAW::_SET_GUARD_ZONE_POSITION(sLocal_23, 346.9555f, 1488.217f, 182.0683f);
	LAW::_0xA8A74AA79FB67159(sLocal_23, iLocal_21);
}

void func_4()
{
	func_12(160425541, 1);
	func_12(-1127035680, 1);
}

int func_5()
{
	return Global_1572887->f_13;
}

int func_6(bool bParam0, bool bParam1)
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

void func_7()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_23);
}

void func_8(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_13(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_13(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

void func_12(int iParam0, int iParam1)
{
	func_14(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_13(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_14(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_15(iParam0, 0, 0);
	if (func_16(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_17(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_18(iParam0, 1);
			}
			else
			{
				func_19(iParam0, 1);
			}
		}
		else
		{
			func_20(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_21())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_16(int iParam0)
{
	if (func_22(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_17(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_16(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (func_16(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (func_16(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_20(int iParam0, bool bParam1)
{
	if (func_16(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_21()
{
	return 1;
}

bool func_22(int iParam0)
{
	return iParam0 != 0;
}

