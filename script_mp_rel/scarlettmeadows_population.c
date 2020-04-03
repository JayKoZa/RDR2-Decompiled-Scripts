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
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	char* sLocal_33 = NULL;
	char* sLocal_34 = NULL;
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
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBraithwaites_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1147.5f, -1930f, 55f, 0f, 0f, 0f, 425f, 225f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 997.5f, -2037.5f, 55f, 0f, 0f, -32f, 100f, 75f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 980f, -1420f, 55f, 0f, 0f, 0f, 185f, 75f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 995f, -1532.5f, 55f, 0f, 0f, 0f, 250f, 150f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1102.5f, -1525f, 55f, 0f, 0f, -58f, 275f, 100f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1110f, -1712.5f, 55f, 0f, 0f, 0f, 350f, 210f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1275f, -1730f, 55f, 0f, 0f, -70f, 225f, 100f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 1275f, -1730f, 55f, 0f, 0f, -70f, 225f, 100f, 35f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 905f, -1795f, 52f, 0f, 0f, 0f, 60f, 60f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 895f, -1900f, 52f, 0f, 0f, 0f, 85f, 85f, 20f);
	func_8(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1765f, -1365f, 50f, 0f, 0f, 20f, 30f, 30f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1752.5f, -1332.5f, 50f, 0f, 0f, 7f, 100f, 150f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1850f, -1330f, 50f, 0f, 0f, 169f, 150f, 250f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1650f, -1465f, 50f, 0f, 0f, 26f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1647.5f, -1377.5f, 50f, 0f, 0f, 9f, 200f, 100f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1592.5f, -1282.5f, 50f, 0f, 0f, -2f, 100f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1660f, -1300f, 50f, 0f, 0f, 50f, 100f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1705f, -1532.5f, 50f, 0f, 0f, 53f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1810f, -1485f, 50f, 0f, 0f, 115f, 250f, 175f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1927.5f, -1447.5f, 50f, 0f, 0f, 146f, 150f, 175f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1975f, -1342.5f, 50f, 0f, 0f, 170f, 150f, 125f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1750f, -1582.5f, 50f, 0f, 0f, 86f, 100f, 75f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, 1977.5f, -1300f, 50f, 0f, 0f, 147f, 135f, 100f, 40f);
	func_8(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1325f, -2285f, 35f, 0f, 0f, 0f, 55f, 55f, 20f, "m_volCatfishJacksons_Restriction");
	func_9(iLocal_20);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volDairyFarm_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 1415f, -850.5f, 61f, 0f, 0f, 6f, 115f, 75f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 1450f, -897.5f, 61f, 0f, 0f, -50f, 75f, 60f, 35f);
	func_9(iLocal_21);
	iLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1622.5f, -365f, 62f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLonniesShack_Restriction");
	func_9(iLocal_22);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPondHutCrops_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1055f, -985f, 55f, 0f, 0f, -68f, 100f, 50f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1112.5f, -945f, 55f, 0f, 0f, 10f, 100f, 50f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1160f, -975f, 55f, 0f, 0f, -44f, 100f, 50f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1110f, -997.5f, 55f, 0f, 0f, 6f, 130f, 75f, 35f);
	func_9(iLocal_23);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRedBarnCrops_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 990f, -1102.5f, 55f, 0f, 0f, 0f, 125f, 75f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 977.5f, -1060f, 55f, 0f, 0f, 0f, 100f, 75f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 980f, -1127.5f, 55f, 0f, 0f, -34f, 75f, 75f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1040f, -1145f, 55f, 0f, 0f, 12f, 115f, 50f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1040f, -1080f, 55f, 0f, 0f, -54f, 110f, 50f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1057.5f, -1120f, 72f, 0f, 0f, -62f, 20f, 40f, 35f);
	func_9(iLocal_24);
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volYellowShackFarm_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, 1422.5f, -1605f, 60f, 0f, 0f, -25f, 110f, 40f, 35f);
	VOLUME::_0x39816F6F94F385AD(iLocal_26, 1435f, -1640f, 60f, 0f, 0f, -5f, 60f, 35f, 35f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_18, 1462.5f, -1580f, 55f, 0f, 0f, 0f, 35f, 35f, 25f);
	func_9(iLocal_26);
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volKudzu_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, 1783.37f, -403.6557f, 50f, 0f, 0f, 0f, 15f, 15f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, 1705.752f, -407.7098f, 50f, 0f, 0f, 0f, 8f, 8f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, 1743.89f, -412.7235f, 50f, 0f, 0f, 0f, 10f, 10f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, 1702.182f, -385.1766f, 50f, 0f, 0f, 0f, 10f, 10f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, 1777.543f, -470.4852f, 50f, 0f, 0f, 0f, 10f, 10f, 10f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_27, 1741.846f, -463.6705f, 50f, 0f, 0f, 0f, 5f, 5f, 10f);
	func_10(iLocal_27, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRhodes_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, 1366.531f, -1244.176f, 86f, 0f, 0f, 24.99999f, 35f, 45f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1446.545f, -1321.94f, 86f, 0f, 0f, -25f, 50f, 60f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1419.169f, -1296.982f, 86f, 0f, 0f, 18f, 70f, 75f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1431.117f, -1384.831f, 86f, 0f, 0f, -27f, 85f, 80f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1321.099f, -1341.149f, 86f, 0f, 0f, -41.5f, 290f, 100f, 40f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, 1341.175f, -1189.345f, 86f, 0f, 0f, -13f, 35f, 40f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, 1284.103f, -1229.042f, 86f, 0f, 0f, -24f, 50f, 50f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, 1310.193f, -1148.451f, 86f, 0f, 0f, -24f, 40f, 40f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1345.968f, -1315.79f, 86f, 0f, 0f, 30f, 100f, 150f, 40f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_25, 1394.818f, -1142.353f, 86f, 0f, 0f, 0f, 50f, 45f, 20f);
	func_11(iLocal_25, 0, 0);
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50f, 0f, 0f, 71.44212f, 52.13922f, 102.3606f, 40f, "m_volMeatFacotryRestriction");
	func_11(iLocal_28, 0, 0);
	iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_29, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_29, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_12(iLocal_29, 0, 0);
	iLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0f, 0f, -39f, 61f, 40f, 30f, "m_volShadyBelleCampRestriction");
	func_11(iLocal_30, 0, 0);
	iLocal_31 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1134.166f, -977.606f, 70.21151f, 0f, 0f, -36.63845f, 15.33205f, 13.64743f, 11.36453f, "m_volLoveShackRestriction");
	func_13(iLocal_31, 0, 0);
	iLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volScarlettMeadowsHorseShop_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_32, 1199.7f, -218.2492f, 108f, 0f, 0f, 18f, 55f, 27f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, 1168.627f, -181.7328f, 108f, 0f, 0f, 12f, 15f, 22f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, 1209.28f, -192.7986f, 108f, 0f, 0f, 21f, 20f, 20f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_32, 1192.431f, -209.9298f, 108f, 0f, 0f, 45f, 38f, 27f, 30f);
	func_11(iLocal_32, 0, 0);
}

void func_3()
{
}

void func_4()
{
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
	LAW::_REMOVE_GUARD_ZONE(sLocal_33);
	LAW::_REMOVE_GUARD_ZONE(sLocal_34);
}

void func_8(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_9(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_14(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_14(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_14(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_13(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_14(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_14(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

