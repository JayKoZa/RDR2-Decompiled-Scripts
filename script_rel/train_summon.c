#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	var uLocal_2 = 0;
	char[] cLocal_3[8] = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	vector3 vLocal_11 = { 0f, 0f, 0f };
	vector3 vLocal_14 = { 0f, 0f, 0f };
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_3(iVar0, 16384);
		iVar0++;
	}
	if (iLocal_18 != -1)
	{
		func_4(iLocal_18);
		func_3(iLocal_18, 1024);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	return 1;
}

int func_2()
{
	int iVar0;

	if (func_5())
	{
		func_6(6);
	}
	switch (iLocal_0)
	{
		case 0:
			iLocal_1 = func_7();
			if (!func_8(iLocal_1))
			{
				func_6(6);
				return 0;
			}
			iLocal_18 = func_9(iLocal_1);
			func_10(iLocal_18);
			func_11(iLocal_18, 1024);
			func_3(iLocal_18, 2);
			if (func_12(iLocal_1, &uLocal_2, &cLocal_3, &vLocal_11, &uLocal_17, &iLocal_20))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				func_6(1);
			}
			else
			{
				func_6(6);
				return 0;
			}
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				iLocal_19 = TASK::CREATE_SCENARIO_POINT(uLocal_2, vLocal_11, uLocal_17, 0, 0, 0);
				TASK::_0x5AF19B6CC2115D34(iLocal_19, 23, 1);
				TASK::_0x5AF19B6CC2115D34(iLocal_19, 25, 1);
				return 0;
			}
			if (!func_13(Global_35, -76381094))
			{
				MISC::CLEAR_AREA(vLocal_11, 2f, 2442122);
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_19, &cLocal_3, 0, 0, 1, 0, 0, -1082130432, 0);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (iVar0 != iLocal_18)
					{
						func_14(iVar0);
						func_11(iVar0, 16384);
					}
					iVar0++;
				}
				CLOCK::SET_CLOCK_TIME(iLocal_20, 0, 0);
				func_15(vLocal_11, 150f, 0);
				PED::_0x4759CC730F947C81();
				func_6(2);
			}
			break;
		case 2:
			if (PED::_0x0EE3F0D7FECCC54F())
			{
				func_6(3);
			}
			break;
		case 3:
			vLocal_14 = { func_16(iLocal_1) };
			if (func_17(vLocal_14))
			{
				func_6(6);
				return 0;
			}
			if (!VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iLocal_18 /*373*/])->f_1))
			{
				func_6(6);
				return 0;
			}
			VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_18 /*373*/])->f_1, vLocal_14, func_18(iLocal_1));
			iLocal_21 = MISC::GET_GAME_TIMER() + 15000;
			func_6(4);
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iLocal_18 /*373*/])->f_1)))
			{
				if (iLocal_21 > MISC::GET_GAME_TIMER())
				{
					VEHICLE::_0xD0BA1853D76683C8(((*Global_1425371)[iLocal_18 /*373*/])->f_1, vLocal_14, func_18(iLocal_1));
					return 0;
				}
			}
			VEHICLE::_0xA7966807953A18EE(((*Global_1425371)[iLocal_18 /*373*/])->f_1, 4f);
			VEHICLE::_0x34BCF6209B9668A7(((*Global_1425371)[iLocal_18 /*373*/])->f_1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_19(iLocal_1), 1065353216);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_20(1870112085 /* GXTEntry: "Train Ticket" */, 1, -142743235, 0, 0);
			func_6(5);
			break;
		case 5:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_19))
			{
				if (PED::_0x9C54041BB66BCF9E(Global_35, iLocal_19))
				{
					return 0;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iLocal_18 /*373*/])->f_1)))
			{
				return 0;
			}
			func_6(6);
			break;
		case 6:
			return func_1();
	}
	return 0;
}

void func_3(int iParam0, int iParam1)
{
	if (!func_21(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (&Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

void func_4(int iParam0)
{
	func_3(iParam0, 16);
}

int func_5()
{
	if (func_22() != -1)
	{
		return 1;
	}
	if (func_23(0, 0, 1))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0)
{
	iLocal_0 = iParam0;
}

int func_7()
{
	return Global_1894899->f_2;
}

int func_8(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 23:
			return 1;
		case 28:
			return 1;
		case 69:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 78:
			return 1;
		case 105:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (!func_21(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1))
	{
		return 0;
	}
	func_11(iParam0, 16);
	return VEHICLE::_0x6E585A616ABB8401(((*Global_1425371)[iParam0 /*373*/])->f_1);
}

void func_11(int iParam0, int iParam1)
{
	if (!func_21(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

int func_12(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5)
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 2682.599f, -1458.432f, 45.757f };
			*uParam4 = -155f;
			*iParam5 = 20;
			return 1;
		case 23:
			*uParam1 = -781832595;
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_RAILING_MALE_C", 64);
			*uParam3 = { -1099.38f, -578.48f, 81.4f };
			*uParam4 = 138.954f;
			*iParam5 = 11;
			return 1;
		case 28:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -1304.61f, 402.07f, 94.88f };
			*uParam4 = -155f;
			*iParam5 = 16;
			return 1;
		case 69:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1520.34f, 437.09f, 90.18f };
			*uParam4 = -90f;
			*iParam5 = 8;
			return 1;
		case 75:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { -346.205f, -368.456f, 87.519f };
			*uParam4 = -65.272f;
			*iParam5 = 22;
			return 1;
		case 76:
			*uParam1 = 421625586;
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", 64);
			*uParam3 = { -167.44f, 638.81f, 113.03f };
			*uParam4 = -126.192f;
			*iParam5 = 6;
			return 1;
		case 78:
			*uParam1 = 421625586;
			StringCopy(sParam2, "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_MALE_D", 64);
			*uParam3 = { 2941.49f, 1274.77f, 43.64f };
			*uParam4 = 156.696f;
			*iParam5 = 14;
			return 1;
		case 105:
			*uParam1 = -229964281;
			StringCopy(sParam2, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 64);
			*uParam3 = { 1214.081f, -1293.024f, 76.372f };
			*uParam4 = 90.766f;
			*iParam5 = 2;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_13(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(((*Global_1425371)[iParam0 /*373*/])->f_1);
		((*Global_1425371)[iParam0 /*373*/])->f_1 = 0;
	}
	return 1;
}

void func_15(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

Vector3 func_16(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 2613.5f, -1477.1f, 45.1f;
		case 23:
			return -1154.2f, -535.7f, 86.4f;
		case 28:
			return -1276.9f, 486.7f, 92.7f;
		case 69:
			return 1529.7f, 530.7f, 89.4f;
		case 75:
			return -353f, -356.1f, 86.4f;
		case 76:
			return -200.5f, 562.7f, 112.8f;
		case 78:
			return 2886.5f, 1213.8f, 44.1f;
		case 105:
			return 1192.5f, -1277.5f, 75.6f;
	}
	return 0f, 0f, 0f;
}

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 23:
		case 28:
		case 75:
		case 76:
		case 78:
		case 105:
			return 0;
		case 69:
			return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -67.5789f;
		case 23:
			return -80.0869f;
		case 28:
			return -61.4596f;
		case 69:
			return 0.5378f;
		case 75:
			return 138.6132f;
		case 76:
			return -85f;
		case 78:
			return 13.9649f;
		case 105:
			return -10f;
	}
	return 0f;
}

int func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_25(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_26(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var5 = { func_27(iParam0, Var0, Var0.f_4, bParam4) };
	return func_28(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_21(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_22()
{
	return Global_1572887->f_12;
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_29())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_30(&(Global_1898164->f_1[0 /*5*/]));
		if (func_31(iVar0) && func_32(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_33(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_24(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<5> func_25(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_34(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_35(iParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_27(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_36(bParam1) };
			if (iParam2 && func_37(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_38(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_38(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_39(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_40(bParam1) };
			switch (func_41(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_42(iParam0, -1823706425))
			{
				Var0 = { func_27(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_42(iParam0, -1483207246))
			{
				Var0 = { func_27(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_43(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (func_44(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_45(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_46(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_27(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_24(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_46(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_44(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_43(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_45(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_46(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_29()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0)
{
	if (!func_33(iParam0))
	{
		return -1;
	}
	return func_48(func_47(iParam0));
}

bool func_31(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_33(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

struct<4> func_34(bool bParam0)
{
	return func_27(joaat("character"), func_49(), -1591664384, bParam0);
}

int func_35(int iParam0)
{
	vector3 vVar0;

	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_36(bool bParam0)
{
	int iVar0;

	iVar0 = func_46(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_27(923904168, func_34(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_27(923904168, func_34(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_27(923904168, func_34(bParam0), -740156546, 0);
}

int func_37(int iParam0, bool bParam1)
{
	if (func_41(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_50(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_38(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_51(iParam0, *uParam1, iParam2, iParam3) > 0;
}

int func_39(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_52(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_40(bool bParam0)
{
	int iVar0;

	iVar0 = func_46(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_27(271701509, func_34(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_27(271701509, func_34(bParam0), 12999093, 0);
}

int func_41(int iParam0)
{
	struct<2> Var0;

	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_42(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_41(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_43(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_46(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(bool bParam0)
{
	if (func_22() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_46(bParam0));
}

int func_46(bool bParam0)
{
	if (func_22() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_47(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_48(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

struct<4> func_49()
{
	struct<4> Var0;

	return Var0;
}

int func_50(int iParam0, bool bParam1)
{
	if (func_53(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_46(bParam1), iParam0, 0);
}

int func_51(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_24(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_27(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_46(bParam6), &Var0, 0);
	return uVar4;
}

int func_52(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_46(0);
	*uParam1 = { func_27(iParam0, func_36(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

bool func_53(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

