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
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
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
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	fLocal_17 = 7f;
	fLocal_18 = 0f;
	fLocal_19 = 0f;
	fLocal_20 = 100f;
	fLocal_21 = 100f;
	fLocal_22 = 0f;
	func_1();
	func_2();
	func_3();
	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(-128f, 153f, 92.509f, 0f, 0f, 0f, 7.5f, 7.5f, 10f);
	if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1554291097))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1554291097, true);
	}
	PATHFIND::_0xD17672447692478E(iVar0, 0);
	bVar1 = true;
	while (bVar1)
	{
		if (func_4() == -1)
		{
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (func_5(1, 1))
			{
				bVar1 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_6();
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
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { fLocal_17, fLocal_18, fLocal_19 };
	vVar3 = { fLocal_20, fLocal_21, fLocal_22 };
	FLOCK::_0xF2CCA7B68CFAB2B9(904876610, 725.8305f, -468.8784f, 149f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	func_7(iLocal_23);
	iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_7(iLocal_24);
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("HRT_volCornwall_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_26, 557.5f, 585f, 120f, 0f, 0f, -16f, 60f, 100f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_26, 495f, 650f, 120f, 0f, 0f, 0f, 80f, 80f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_26, 582.5f, 695f, 120f, 0f, 0f, 0f, 25f, 25f, 15f);
	if (func_8())
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_26, 2238463, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_26, 2238463, 0, 0, -1, -1, 0);
	}
	else
	{
		func_9(iLocal_26, 0, 0);
	}
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1120f, 432.5f, 94.789f, 0f, 0f, 45f, 150f, 135f, 20f, "m_volCropFarm_Restriction");
	func_7(iLocal_27);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(892.5f, 260f, 102.5f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volLarnedSod_Restriction");
	func_7(iLocal_28);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-62.5f, -397.5f, 75f, 0f, 0f, 0f, 25f, 25f, 15f, "m_volSouthernShack_Restriction");
	func_9(iLocal_29, 0, 0);
	iLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-340.7f, -349.1f, 127.9f, 0f, 0f, 0f, 50f, 50f, 50f, "m_volFlatneckStation_Restriction");
	func_10(iLocal_30);
	iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volValentine_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -205f, 670f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -330f, 795f, 115f, 0f, 0f, 0f, 125f, 125f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -205f, 820f, 130f, 0f, 0f, -55f, 125f, 50f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -385f, 655f, 115f, 0f, 0f, 0f, 100f, 100f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -390f, 920f, 115f, 0f, 0f, 0f, 60f, 60f, 15f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -250f, 935f, 130f, 0f, 0f, 0f, 70f, 70f, 20f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_31, -330f, 970f, 125f, 0f, 0f, 0f, 60f, 60f, 15f);
	func_11(iLocal_31);
	iLocal_33 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(311.33f, 301.2739f, 147.3381f, 0f, 0f, 0f, 25f, 25f, 50f, "m_volGiantRock_Restriction1");
	POPULATION::_0xB56D41A694E42E86(iLocal_33, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_33, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_33);
	iLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(295.4558f, 335.8347f, 144.3733f, 0f, 0f, 0f, 7f, 7f, 5f, "m_volGiantRock_Restriction2");
	POPULATION::_0xB56D41A694E42E86(iLocal_34, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_34, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_34);
	iLocal_35 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(372.3861f, 149.449f, 144.5227f, 0f, 0f, 27.75f, 37.75f, 44.75f, 21.5f, "m_volGiantRock_Restriction3");
	POPULATION::_0xB56D41A694E42E86(iLocal_35, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_35, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iLocal_35);
	iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1520f, 440f, 92.5f, 0f, 0f, 0f, 20f, 50f, 10f, "m_volER_Trainstation_Restriction");
	func_7(iLocal_32);
	iLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-838f, 343f, 95.5f, 0f, 0f, 0f, 80f, 50f, 44f, "m_volDownesRanch_Restriction");
	func_9(iLocal_36, 0, 0);
	iLocal_37 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1416.5f, 321.5f, 93f, 0f, 0f, -21f, 70f, 80f, 25f, "m_volEmeraldRanch_Restriction");
	func_12(iLocal_37, 0, 0);
	iLocal_38 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1185.274f, -101.3631f, 105f, 0f, 0f, 0f, 15f, 10f, 30f, "m_volRuinsNorthOfHorseShop_Restriction");
	func_9(iLocal_38, 0, 0);
	iLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIsland_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_39, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_39, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_39, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_13(iLocal_39, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-435.5f, 498f, 107f, 0f, 0f, -7f, 27f, 17f, 20f, "m_volCastorsPond_Restriction");
	func_12(iLocal_25, 0, 0);
	iLocal_40 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_40, -61.78288f, 1236.599f, 171.7316f, 0f, 0f, 30.49994f, 17.57404f, 11.67279f, 13.05081f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_40, -26.60302f, 1223.117f, 175.0363f, 0f, 0f, 0f, 17.60465f, 14.42418f, 5.206519f);
	func_14(iLocal_40, 0, 0);
	iLocal_41 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBardsCrossing_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_41, -730.6474f, -548.0654f, 77.02292f, 0f, 0f, 27f, 353.0691f, 8.967957f, 13.35221f);
	VOLUME::_0x39816F6F94F385AD(iLocal_41, -892.4706f, -627.4682f, 77.26994f, 0f, 0f, 18.91964f, 20.99991f, 7.632857f, 11.3815f);
	func_14(iLocal_41, 0, 0);
	iLocal_42 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLimpany_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -344.2052f, -155.7421f, 51.92712f, 0f, 0f, -25.599f, 7.007796f, 12.39152f, 9.160034f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -326.2495f, -151.1143f, 51.75295f, 0f, 0f, -40.79212f, 9.133691f, 7.226022f, 8.362908f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -337.7838f, -123.2315f, 49.78259f, 0f, 0f, -30.27581f, 12.47807f, 6.990203f, 9.129834f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -368.2776f, -141.5811f, 49.43251f, 0f, 0f, -25.07936f, 8.474558f, 7.734136f, 6.674875f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -381.1944f, -138.4523f, 48.6927f, 0f, 0f, -26.4314f, 10.54735f, 16.19453f, 11.17168f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -359.6013f, -115.6031f, 48.09516f, 0f, 0f, -36.89244f, 15.66171f, 18.04947f, 13.86367f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -317.6271f, -131.9343f, 51.76871f, 0f, 0f, 0f, 6.531308f, 7.349917f, 8.040896f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -314.7265f, -105.8513f, 50.30021f, 0f, 0f, 33.49742f, 11.55198f, 8.022533f, 6.21626f);
	VOLUME::_0x39816F6F94F385AD(iLocal_42, -372.8026f, -109.9615f, 47.05131f, 0f, 0f, -34.51117f, 5.588199f, 6.904874f, 7.632836f);
	func_12(iLocal_42, 0, 0);
	iLocal_43 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBurnedSettlement_Restriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_43, -355f, -132.5f, 50f, 0f, 0f, -20f, 50f, 30f, 25f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_43, -320f, -115f, 50f, 0f, 0f, 0f, 20f, 20f, 25f);
	func_9(iLocal_43, 0, 0);
	iLocal_44 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFishermansShack_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_44, 343.054f, -669.0029f, 42.165f, 0f, 0f, -31.01126f, 11.02041f, 15.73973f, 10.95584f);
	VOLUME::_0x39816F6F94F385AD(iLocal_44, 338.9478f, -681.7498f, 43.02779f, 0f, 0f, -31.24687f, 3.800817f, 10.34941f, 9.244935f);
	func_14(iLocal_44, 0, 0);
}

int func_4()
{
	return Global_1572887->f_13;
}

int func_5(bool bParam0, bool bParam1)
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

void func_6()
{
	FLOCK::_0xFB16F08F47B83B4C(904876610);
}

void func_7(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 231, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, iParam0);
}

int func_8()
{
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_10(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
}

void func_11(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_13(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_14(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_15(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_15(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

