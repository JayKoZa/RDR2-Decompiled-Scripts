#region Local Var
	struct<7> Local_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&ScriptParam_0, &Local_0);
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		func_1(&ScriptParam_0, &Local_0);
	}
	while (func_2(&ScriptParam_0, &Local_0))
	{
		switch (Local_0)
		{
			case 0:
				if (func_3(&ScriptParam_0, &Local_0))
				{
					func_4(&Local_0, 1);
				}
				break;
			case 1:
				if (func_5(&ScriptParam_0, &Local_0))
				{
					func_4(&Local_0, 2);
				}
				break;
			case 2:
				if (func_6(&ScriptParam_0, &Local_0))
				{
					func_4(&Local_0, 3);
				}
				break;
			case 3:
				if (func_7(&ScriptParam_0, &Local_0))
				{
					if (Local_0.f_3 >= Local_0.f_4)
					{
						func_8(&Local_0);
						func_4(&Local_0, 4);
					}
					else
					{
						Local_0.f_6 = 0;
						func_4(&Local_0, 2);
					}
				}
				break;
			case 4:
				func_1(&ScriptParam_0, &Local_0);
				func_4(&Local_0, 5);
				break;
			case 5:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&ScriptParam_0, &Local_0);
}

void func_1(var uParam0, var uParam1)
{
	func_8(uParam1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam1->f_7);
		PLAYER::_0xDC5E09D012D759C4(uParam1->f_7, uParam1->f_7, 0);
	}
	if (ENTITY::_0x1FF441D7954F8709(uParam1->f_8))
	{
		ENTITY::_0xD2B9C78537ED5759(uParam1->f_8);
	}
	SCRIPTS::_0xE7282390542F570D(*uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(uParam0->f_1))
	{
		return 0;
	}
	if (func_9(0, 0, 1))
	{
		return 0;
	}
	return 1;
}

int func_3(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_10(uParam0) };
	if (!TASK::_0x841475AC96E794D1(&(iParam1->f_9[0])))
	{
		iParam1->f_9[0] = TASK::CREATE_SCENARIO_POINT(-1843735114, vVar0 - Vector(0f, 0.3f, 0f), 0f, 0, 0, 0);
	}
	STREAMING::REQUEST_MODEL(func_11(), false);
	iParam1->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iParam1->f_1 = func_12(uParam0->f_1);
	return 1;
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_5(var uParam0, int iParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(func_11()))
	{
		return 0;
	}
	return 1;
}

int func_6(var uParam0, int iParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		vVar0 = { func_13(uParam0) };
		if (!func_14(vVar0))
		{
			iParam1->f_6 = OBJECT::CREATE_OBJECT(func_11(), vVar0, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		return 0;
	}
	if (iParam1->f_1 != -1 && !func_15(iParam1, 1065353216 /* Float: 1f */))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam1->f_7, 0);
		PLAYER::_0x6ECFC621A168424C(iParam1->f_7, iParam1->f_7, 0);
	}
	return 1;
}

int func_7(var uParam0, int iParam1)
{
	struct<2> Var0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	if (func_16(149706141 /* GXTEntry: "Crayfish" */) && !iParam1->f_5)
	{
		iParam1->f_3++;
		iParam1->f_5 = 1;
	}
	if (iParam1->f_5 && func_17())
	{
		iParam1->f_5 = 0;
		func_19(1798104140, joaat("a_c_crawfish_01"), func_18(PLAYER::PLAYER_ID()), 1, 1);
		Var0 = { func_20(-717883113, 1798104140) };
		STATS::_0x6A0184E904CDF25E(&Var0, 1);
		return 1;
	}
	return 0;
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		iVar1 = iVar0;
		if (TASK::_0x841475AC96E794D1(&(uParam0->f_9[iVar1])))
		{
			TASK::_0x81948DFE4F5A0283(&(uParam0->f_9[iVar1]));
		}
		iVar0++;
	}
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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
		if (func_21())
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
		iVar0 = func_22(&(Global_1898164->f_1[0 /*5*/]));
		if (func_23(iVar0) && func_24(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_25(&(Global_1898164->f_1[0 /*5*/])))
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

Vector3 func_10(var uParam0)
{
	if (TASK::_0x841475AC96E794D1(uParam0->f_1))
	{
		return TASK::_0xA8452DD321607029(uParam0->f_1, 1);
	}
	return 0f, 0f, 0f;
}

int func_11()
{
	return joaat("p_crayfish01x");
}

int func_12(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (!TASK::_0x841475AC96E794D1(uParam0))
	{
		return -1;
	}
	vVar0 = { TASK::_0xA8452DD321607029(uParam0, 1) };
	fVar5 = 9999999f;
	fVar6 = 9999999f;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (17 - 1))
	{
		iVar3 = iVar7;
		fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_26(iVar3), true);
		if (fVar5 < fVar6)
		{
			fVar6 = fVar5;
			iVar4 = iVar3;
		}
		iVar7++;
	}
	return iVar4;
}

Vector3 func_13(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_10(uParam0) };
	fVar3 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, 1))
	{
		vVar0.f_2 = (fVar3 + 0.1f);
		return vVar0;
	}
	return 0f, 0f, 0f;
}

int func_14(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1)
{
	if (iParam0->f_8 == 0)
	{
		iParam0->f_8 = ENTITY::_0x6F3068258A499E52(func_27(iParam0->f_1), func_26(iParam0->f_1), 11);
	}
	else if (ENTITY::_0x1FF441D7954F8709(iParam0->f_8))
	{
		iParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iParam0->f_8));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		return 0;
	}
	return 1;
}

int func_16(int iParam0)
{
	vector3 vVar0;
	int iVar10;

	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

int func_17()
{
	if (TASK::_0xD04241BBF6D03A5E(Global_35) == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_18(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_19(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(iParam0, vParam2);
	iVar1 = iVar0;
	if (iVar1 != 0 && !MAP::_0x3F81EA4275D39D6F(iVar1))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar1);
	}
	if (bParam5 && -153407852 != iParam0)
	{
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(iParam0, iParam6);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_40.f_39 == joaat("player_zero"))
		{
			iVar2 = func_28(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				func_29(iVar2, 0);
			}
		}
		else
		{
			iVar2 = func_28(iParam0, iParam1, 1);
			if (iVar2 != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(iVar2))
				{
					iVar2 = func_28(iParam0, iParam1, 0);
					if (iVar2 != 0)
					{
						func_29(iVar2, 0);
					}
				}
			}
		}
	}
}

struct<2> func_20(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_21()
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

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return -1;
	}
	return func_31(func_30(iParam0));
}

bool func_23(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_24(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_25(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

Vector3 func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2027.162f, -1722.432f, 40.62656f;
		case 1:
			return 2045.327f, -1785.859f, 40.69251f;
		case 2:
			return 2021.431f, -1789.314f, 40.40718f;
		case 3:
			return 2087.09f, -1859.742f, 40.49999f;
		case 4:
			return 2058.266f, -1866.586f, 40.5274f;
		case 5:
			return 2042.225f, -1885.971f, 40.49999f;
		case 6:
			return 1672.345f, -826.9699f, 39.77722f;
		case 7:
			return 1710.503f, -850.5192f, 40.24175f;
		case 8:
			return 1693.874f, -942.7992f, 40.27774f;
		case 9:
			return 1756.451f, -1017.704f, 40.73364f;
		case 10:
			return 2339.37f, -544.2522f, 40.72062f;
		case 11:
			return 2301.896f, -515.7421f, 40.62392f;
		case 12:
			return 2253.715f, -549.9788f, 40.5689f;
		case 13:
			return 2281.221f, -640.3717f, 40.46832f;
		case 14:
			return 2215.952f, -679.2456f, 40.62037f;
		case 15:
			return 2176.255f, -693.6794f, 40.68019f;
		case 16:
			return 2258.821f, -720.3987f, 40.47908f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1007485139;
		case 1:
			return -1588164913;
		case 2:
			return -1350423696;
		case 3:
			return 1711671480;
		case 4:
			return -949094404;
		case 5:
			return 32115079;
		case 6:
			return -735160262;
		case 7:
			return 300773746;
		case 8:
			return 93567835;
		case 9:
			return 2126789874;
		case 10:
			return 1334348844;
		case 11:
			return -1301023018;
		case 12:
			return 1098115085;
		case 13:
			return 143309779;
		case 14:
			return 596329535;
		case 15:
			return -1265664648;
		case 16:
			return -1918684699;
		default:
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -43987615: /* GXTEntry: "Armadillo" */
			if (iParam2 == 1)
			{
				return 1492383232;
			}
			else
			{
				return 1650496317;
			}
			break;
		case 597440621: /* GXTEntry: "Badger" */
			if (iParam2 == 1)
			{
				return -1286175387;
			}
			else
			{
				return 1230228733;
			}
			break;
		case 783089120: /* GXTEntry: "Bat" */
			if (iParam2 == 1)
			{
				return 1809539044;
			}
			else
			{
				return 580480085;
			}
			break;
		case -577478188:
			if (iParam2 == 1)
			{
				return -942035227;
			}
			else
			{
				return -293044453;
			}
			break;
		case 1596431305:
			if (iParam2 == 1)
			{
				return 2042596528;
			}
			else
			{
				return 1794983091;
			}
			break;
		case 1781233743:
			if (iParam2 == 1)
			{
				return 1572569346;
			}
			else
			{
				return 693604975;
			}
			break;
		case 1297902195: /* GXTEntry: "Beaver" */
			if (iParam2 == 1)
			{
				return 131817274;
			}
			else
			{
				return 672937471;
			}
			break;
		case 636730081:
			if (iParam2 == 1)
			{
				return 1242287574;
			}
			else
			{
				return 134380709;
			}
			break;
		case 1516275256: /* GXTEntry: "Blue Jay" */
			if (iParam2 == 1)
			{
				return 307977329;
			}
			else
			{
				return 1537431448;
			}
			break;
		case 640966621: /* GXTEntry: "Boar" */
			if (iParam2 == 1)
			{
				return -1057583634;
			}
			else
			{
				return -2020447749;
			}
			break;
		case 950257367:
			if (iParam2 == 1)
			{
				return 1389918783;
			}
			else
			{
				return 889056371;
			}
			break;
		case -1055552242: /* GXTEntry: "Buck" */
			if (iParam2 == 1)
			{
				return -343448109;
			}
			else
			{
				return 1668029447;
			}
			break;
		case -1894468643:
			if (iParam2 == 1)
			{
				return 1656842182;
			}
			else
			{
				return 1931087823;
			}
			break;
		case 1489890323: /* GXTEntry: "Bison" */
			if (iParam2 == 1)
			{
				return -1372774793;
			}
			else
			{
				return -1351907036;
			}
			break;
		case 2111267495:
			if (iParam2 == 1)
			{
				return 1156953242;
			}
			else
			{
				return 610597621;
			}
			break;
		case -1550790546:
			if (iParam2 == 1)
			{
				return -32053405;
			}
			else
			{
				return 9629595;
			}
			break;
		case 1028084064:
			if (iParam2 == 1)
			{
				return -1017879199;
			}
			else
			{
				return -2050618352;
			}
			break;
		case -1327130182:
			if (iParam2 == 1)
			{
				return -434550098;
			}
			else
			{
				return 9729636;
			}
			break;
		case -375262254:
			if (iParam2 == 1)
			{
				return 2118461462;
			}
			else
			{
				return 143111533;
			}
			break;
		case 1339926283: /* GXTEntry: "Bullfrog" */
			if (iParam2 == 1)
			{
				return 485264164;
			}
			else
			{
				return 1903408805;
			}
			break;
		case -1847199476: /* GXTEntry: "Californian Condor" */
			if (iParam2 == 1)
			{
				return -793902754;
			}
			else
			{
				return -1775711449;
			}
			break;
		case 1075520399: /* GXTEntry: "Cardinal" */
			if (iParam2 == 1)
			{
				return 813908083;
			}
			else
			{
				return -131999783;
			}
			break;
		case 285816029: /* GXTEntry: "Cat" */
			if (iParam2 == 1)
			{
				return -795386435;
			}
			else
			{
				return -1130778534;
			}
			break;
		case -1273168083: /* GXTEntry: "Cedar Waxwing" */
			if (iParam2 == 1)
			{
				return -1403844320;
			}
			else
			{
				return -169402166;
			}
			break;
		case 2059272711: /* GXTEntry: "Chicken" */
			if (iParam2 == 1)
			{
				return -1214387853;
			}
			else
			{
				return -417846746;
			}
			break;
		case -943371758: /* GXTEntry: "Chicken" */
			if (iParam2 == 1)
			{
				return -464805063;
			}
			else
			{
				return -579171441;
			}
			break;
		case 1190285160:
			if (iParam2 == 1)
			{
				return -226045789;
			}
			else
			{
				return 5946766;
			}
			break;
		case -674936781:
			if (iParam2 == 1)
			{
				return 1410377796;
			}
			else
			{
				return -1029515674;
			}
			break;
		case -2045434273: /* GXTEntry: "Chipmunk" */
			if (iParam2 == 1)
			{
				return -649439051;
			}
			else
			{
				return -1928771048;
			}
			break;
		case 1677450645: /* GXTEntry: "Cormorant" */
			if (iParam2 == 1)
			{
				return -2020193361;
			}
			else
			{
				return -862429230;
			}
			break;
		case -2069413633:
			if (iParam2 == 1)
			{
				return -348617231;
			}
			else
			{
				return 521981365;
			}
			break;
		case -1071812884: /* GXTEntry: "Cougar" */
			if (iParam2 == 1)
			{
				return 1454394111;
			}
			else
			{
				return 1226381245;
			}
			break;
		case -973690007:
			if (iParam2 == 1)
			{
				return -1923426107;
			}
			else
			{
				return -448286600;
			}
			break;
		case -1204752482: /* GXTEntry: "Cow" */
			if (iParam2 == 1)
			{
				return 57563439;
			}
			else
			{
				return -1554080546;
			}
			break;
		case -564442545: /* GXTEntry: "Coyote" */
			if (iParam2 == 1)
			{
				return -819941571;
			}
			else
			{
				return 316239633;
			}
			break;
		case 1210759497:
			if (iParam2 == 1)
			{
				return -692709560;
			}
			else
			{
				return 375187125;
			}
			break;
		case 1220494366: /* GXTEntry: "Crab" */
			if (iParam2 == 1)
			{
				return 461155911;
			}
			else
			{
				return -1730432737;
			}
			break;
		case -1923720634: /* GXTEntry: "Crane" */
			if (iParam2 == 1)
			{
				return 686577545;
			}
			else
			{
				return -1716975259;
			}
			break;
		case -1136838805:
			if (iParam2 == 1)
			{
				return 485763523;
			}
			else
			{
				return 485763523;
			}
			break;
		case 1798104140:
			if (iParam2 == 1)
			{
				return -75693912;
			}
			else
			{
				return -1341709095;
			}
			break;
		case 613321581: /* GXTEntry: "Crow" */
			if (iParam2 == 1)
			{
				return -1015255528;
			}
			else
			{
				return -155163817;
			}
			break;
		case -510702611: /* GXTEntry: "Deer" */
			if (iParam2 == 1)
			{
				return -258389058;
			}
			else
			{
				return -1731672932;
			}
			break;
		case 926603386:
			if (iParam2 == 1)
			{
				return -446346500;
			}
			else
			{
				return 198039826;
			}
			break;
		case -603666995:
			if (iParam2 == 1)
			{
				return 520531156;
			}
			else
			{
				return 656647598;
			}
			break;
		case -1322848328:
			if (iParam2 == 1)
			{
				return 400831909;
			}
			else
			{
				return -480293444;
			}
			break;
		case -1632170653:
			if (iParam2 == 1)
			{
				return -1472809340;
			}
			else
			{
				return 1556846539;
			}
			break;
		case -1121883739:
			if (iParam2 == 1)
			{
				return 87879371;
			}
			else
			{
				return 295404488;
			}
			break;
		case 1901047439:
			if (iParam2 == 1)
			{
				return -1495248197;
			}
			else
			{
				return -1142160290;
			}
			break;
		case 268285362: /* GXTEntry: "Dog" */
			if (iParam2 == 1)
			{
				return -1508240671;
			}
			else
			{
				return -2028019941;
			}
			break;
		case 1742105665:
			if (iParam2 == 1)
			{
				return 1447842081;
			}
			else
			{
				return 763061508;
			}
			break;
		case 1938765490:
			if (iParam2 == 1)
			{
				return -1738549803;
			}
			else
			{
				return 857577510;
			}
			break;
		case -1986096416:
			if (iParam2 == 1)
			{
				return 550175583;
			}
			else
			{
				return -1327208188;
			}
			break;
		case 1509241437: /* GXTEntry: "Dog" */
			if (iParam2 == 1)
			{
				return -387470951;
			}
			else
			{
				return -1152146286;
			}
			break;
		case 784496698:
			if (iParam2 == 1)
			{
				return -1298327432;
			}
			else
			{
				return -1577268469;
			}
			break;
		case 520240957: /* GXTEntry: "Donkey" */
			if (iParam2 == 1)
			{
				return 699060141;
			}
			else
			{
				return -1134590040;
			}
			break;
		case -1350246467: /* GXTEntry: "Duck" */
			if (iParam2 == 1)
			{
				return 2074298125;
			}
			else
			{
				return 1088082550;
			}
			break;
		case -2146232868:
			if (iParam2 == 1)
			{
				return -846557197;
			}
			else
			{
				return 288657650;
			}
			break;
		case 2104011353: /* GXTEntry: "Eagle" */
			if (iParam2 == 1)
			{
				return -1715622829;
			}
			else
			{
				return 224959159;
			}
			break;
		case -1673415831:
			if (iParam2 == 1)
			{
				return 685004063;
			}
			else
			{
				return -1620359805;
			}
			break;
		case 1157397403: /* GXTEntry: "Egret" */
			if (iParam2 == 1)
			{
				return 1487535595;
			}
			else
			{
				return -2106943688;
			}
			break;
		case 1374755253:
			if (iParam2 == 1)
			{
				return -619722845;
			}
			else
			{
				return -756184090;
			}
			break;
		case -1203519405:
			if (iParam2 == 1)
			{
				return -167138074;
			}
			else
			{
				return -1952853624;
			}
			break;
		case -74829863: /* GXTEntry: "Elk" */
			if (iParam2 == 1)
			{
				return 1858396134;
			}
			else
			{
				return 1199311657;
			}
			break;
		case 702805627:
			if (iParam2 == 1)
			{
				return -379754949;
			}
			else
			{
				return 1123829079;
			}
			break;
		case 1895708243:
			if (iParam2 == 1)
			{
				return 683897188;
			}
			else
			{
				return -1313726941;
			}
			break;
		case -1003674917: /* GXTEntry: "Fox" */
			if (iParam2 == 1)
			{
				return -81484335;
			}
			else
			{
				return -745750690;
			}
			break;
		case -487429551:
			if (iParam2 == 1)
			{
				return 375272656;
			}
			else
			{
				return 1614204576;
			}
			break;
		case -853417084:
			if (iParam2 == 1)
			{
				return -27841655;
			}
			else
			{
				return -1052853383;
			}
			break;
		case 225698625:
			if (iParam2 == 1)
			{
				return 744375830;
			}
			else
			{
				return -635519364;
			}
			break;
		case -1472826885: /* GXTEntry: "Alligator" */
			if (iParam2 == 1)
			{
				return 1374191339;
			}
			else
			{
				return 1057046493;
			}
			break;
		case 1044478494:
			if (iParam2 == 1)
			{
				return -567700941;
			}
			else
			{
				return 1133767006;
			}
			break;
		case 1735171971: /* GXTEntry: "Lizard" */
			if (iParam2 == 1)
			{
				return -475041877;
			}
			else
			{
				return -973375568;
			}
			break;
		case 365206122: /* GXTEntry: "Goat" */
			if (iParam2 == 1)
			{
				return 1251901266;
			}
			else
			{
				return 594965829;
			}
			break;
		case 731537518: /* GXTEntry: "Goose" */
			if (iParam2 == 1)
			{
				return 332185718;
			}
			else
			{
				return 752876761;
			}
			break;
		case 1859834293:
			if (iParam2 == 1)
			{
				return 761968766;
			}
			else
			{
				return -258263292;
			}
			break;
		case 524696643: /* GXTEntry: "Hawk" */
			if (iParam2 == 1)
			{
				return 1345814727;
			}
			else
			{
				return -2056520757;
			}
			break;
		case 132914876:
			if (iParam2 == 1)
			{
				return 774728556;
			}
			else
			{
				return 1695964169;
			}
			break;
		case 768271981: /* GXTEntry: "Heron" */
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -1245666683:
			if (iParam2 == 1)
			{
				return 2098251339;
			}
			else
			{
				return -1973755393;
			}
			break;
		case -153407852: /* GXTEntry: "Horse" */
			if (((iParam1 == joaat("a_c_horse_americanpaint_overo") || iParam1 == 1792770814) || iParam1 == joaat("a_c_horse_americanpaint_tobiano")) || iParam1 == -1963397600)
			{
				if (iParam2 == 1)
				{
					return -1510715495;
				}
				else
				{
					return -1041460807;
				}
			}
			else if (((iParam1 == -1250098797 || iParam1 == -318278790) || iParam1 == 55096099) || iParam1 == -458397856)
			{
				if (iParam2 == 1)
				{
					return 216313122;
				}
				else
				{
					return -1276302204;
				}
			}
			else if ((iParam1 == -444610976 || iParam1 == 705691988) || iParam1 == 746627200)
			{
				if (iParam2 == 1)
				{
					return 1058013054;
				}
				else
				{
					return 1875597076;
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_appaloosa_blanket") || iParam1 == joaat("a_c_horse_appaloosa_leopard")) || iParam1 == -1554827654) || iParam1 == -1029277326) || iParam1 == 604357666)
			{
				if (iParam2 == 1)
				{
					return -1860934580;
				}
				else
				{
					return 1323745903;
				}
			}
			else if ((((iParam1 == joaat("a_c_horse_arabian_black") || iParam1 == 1496579364) || iParam1 == -403470324) || iParam1 == 1576849913) || iParam1 == joaat("a_c_horse_arabian_white"))
			{
				if (iParam2 == 1)
				{
					return 987087298;
				}
				else
				{
					return -1712290350;
				}
			}
			else if ((iParam1 == joaat("a_c_horse_ardennes_bayroan") || iParam1 == joaat("a_c_horse_ardennes_irongreyroan")) || iParam1 == -635239558)
			{
				if (iParam2 == 1)
				{
					return 679982833;
				}
				else
				{
					return 224251658;
				}
			}
			else if (iParam1 == joaat("a_c_horse_belgian_blondchestnut") || iParam1 == joaat("a_c_horse_belgian_mealychestnut"))
			{
				if (iParam2 == 1)
				{
					return -2035377496;
				}
				else
				{
					return 1602284249;
				}
			}
			else if ((iParam1 == 687445866 || iParam1 == 861505058) || iParam1 == 1593035738)
			{
				if (iParam2 == 1)
				{
					return -1314354161;
				}
				else
				{
					return -1111688425;
				}
			}
			else if ((iParam1 == -819697512 || iParam1 == 1705182311) || iParam1 == -78273782)
			{
				if (iParam2 == 1)
				{
					return -697129350;
				}
				else
				{
					return 932507108;
				}
			}
			else if ((((iParam1 == -247265944 || iParam1 == -1516219602) || iParam1 == -1265030920) || iParam1 == 2024948086) || iParam1 == 1696286663)
			{
				if (iParam2 == 1)
				{
					return 14437037;
				}
				else
				{
					return 1726324950;
				}
			}
			else if (iParam1 == -1342159303 || iParam1 == joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"))
			{
				if (iParam2 == 1)
				{
					return 1127400536;
				}
				else
				{
					return 400087036;
				}
			}
			else if ((((iParam1 == 2030804811 || iParam1 == 1230359523) || iParam1 == -1063137731) || iParam1 == -1038436471) || iParam1 == 96930969)
			{
				if (iParam2 == 1)
				{
					return 1521891022;
				}
				else
				{
					return -830234017;
				}
			}
			else if ((iParam1 == -1180427609 || iParam1 == 43825738) || iParam1 == joaat("a_c_horse_mustang_wildbay"))
			{
				if (iParam2 == 1)
				{
					return -1778106987;
				}
				else
				{
					return 629235125;
				}
			}
			else if ((iParam1 == joaat("a_c_horse_nokota_blueroan") || iParam1 == 107013696) || iParam1 == -1261814606)
			{
				if (iParam2 == 1)
				{
					return -322859267;
				}
				else
				{
					return -1148415148;
				}
			}
			else if ((iParam1 == 1066034872 || iParam1 == 36009259) || iParam1 == joaat("a_c_horse_shire_ravenblack"))
			{
				if (iParam2 == 1)
				{
					return -1903961111;
				}
				else
				{
					return 909878123;
				}
			}
			else if (iParam1 == -1693870200 || iParam1 == -1599683008)
			{
				if (iParam2 == 1)
				{
					return -2144737275;
				}
				else
				{
					return -703064617;
				}
			}
			else if ((((((iParam1 == 1072019803 || iParam1 == 1074477367) || iParam1 == -85890205) || iParam1 == 1048964673) || iParam1 == 446670976) || iParam1 == -727455979) || iParam1 == -1667789645)
			{
				if (iParam2 == 1)
				{
					return 79953388;
				}
				else
				{
					return 1080521142;
				}
			}
			else if ((((iParam1 == 2120708491 || iParam1 == -1924405794) || iParam1 == -526169133) || iParam1 == joaat("a_c_horse_thoroughbred_dapplegrey")) || iParam1 == 900144280)
			{
				if (iParam2 == 1)
				{
					return -509693556;
				}
				else
				{
					return -47591742;
				}
			}
			else if ((iParam1 == 1133837220 || iParam1 == joaat("a_c_horse_turkoman_gold")) || iParam1 == -1604180548)
			{
				if (iParam2 == 1)
				{
					return 375495976;
				}
				else
				{
					return -389560008;
				}
			}
			break;
		case 843200239: /* GXTEntry: "Iguana" */
			if (iParam2 == 1)
			{
				return 382483842;
			}
			else
			{
				return -1387469655;
			}
			break;
		case -557089338:
			if (iParam2 == 1)
			{
				return -652731287;
			}
			else
			{
				return 363304543;
			}
			break;
		case -409730157: /* GXTEntry: "Javelina" */
			if (iParam2 == 1)
			{
				return 293802921;
			}
			else
			{
				return 263724736;
			}
			break;
		case -1453172462: /* GXTEntry: "Loon" */
			if (iParam2 == 1)
			{
				return -650983350;
			}
			else
			{
				return 248268932;
			}
			break;
		case 2084223993:
			if (iParam2 == 1)
			{
				return 581279313;
			}
			else
			{
				return -1986670648;
			}
			break;
		case 1449149245:
			if (iParam2 == 1)
			{
				return 853339335;
			}
			else
			{
				return 476264216;
			}
			break;
		case 230694645:
			if (iParam2 == 1)
			{
				return 840856104;
			}
			else
			{
				return 161687222;
			}
			break;
		case -1998732171:
			if (iParam2 == 1)
			{
				return -679944843;
			}
			else
			{
				return -439780870;
			}
			break;
		case 732517695:
			if (iParam2 == 1)
			{
				return -507978028;
			}
			else
			{
				return -2138925351;
			}
			break;
		case 1053713682: /* GXTEntry: "Muskrat" */
			if (iParam2 == 1)
			{
				return 2067853128;
			}
			else
			{
				return -999327272;
			}
			break;
		case 562612880: /* GXTEntry: "Oriole" */
			if (iParam2 == 1)
			{
				return -720653445;
			}
			else
			{
				return 1465762044;
			}
			break;
		case 1488906430:
			if (iParam2 == 1)
			{
				return 1604791730;
			}
			else
			{
				return 382211197;
			}
			break;
		case -1002311676:
		case 313926162: /* GXTEntry: "Owl" */
			if (iParam2 == 1)
			{
				return 452746646;
			}
			else
			{
				return 1669886296;
			}
			break;
		case 1434063188:
			if (iParam2 == 1)
			{
				return -979220810;
			}
			else
			{
				return 443311725;
			}
			break;
		case 1296784312: /* GXTEntry: "Ox" */
			if (iParam2 == 1)
			{
				return 861034445;
			}
			else
			{
				return 391521677;
			}
			break;
		case -1192335484:
			if (iParam2 == 1)
			{
				return 1634138500;
			}
			else
			{
				return -1585573547;
			}
			break;
		case 184430925: /* GXTEntry: "Panther" */
			if (iParam2 == 1)
			{
				return -788140186;
			}
			else
			{
				return -1011875654;
			}
			break;
		case 1631667828:
			if (iParam2 == 1)
			{
				return -135187727;
			}
			else
			{
				return -662462270;
			}
			break;
		case 1623821606: /* GXTEntry: "Parrot" */
			if (iParam2 == 1)
			{
				return -1381490234;
			}
			else
			{
				return 401969671;
			}
			break;
		case 631108475:
			if (iParam2 == 1)
			{
				return -203045456;
			}
			else
			{
				return -1205233107;
			}
			break;
		case -679868805:
			if (iParam2 == 1)
			{
				return -1876437153;
			}
			else
			{
				return -570692178;
			}
			break;
		case -454952368: /* GXTEntry: "Pelican" */
			if (iParam2 == 1)
			{
				return -1239951197;
			}
			else
			{
				return -535907352;
			}
			break;
		case 512575690:
			if (iParam2 == 1)
			{
				return -2099611916;
			}
			else
			{
				return 1961649296;
			}
			break;
		case -1315516671: /* GXTEntry: "Pheasant" */
			if (iParam2 == 1)
			{
				return 1966613758;
			}
			else
			{
				return -1333865097;
			}
			break;
		case -2032722392:
			if (iParam2 == 1)
			{
				return 1914577480;
			}
			else
			{
				return 1328558441;
			}
			break;
		case 238849077: /* GXTEntry: "Pig" */
			if (iParam2 == 1)
			{
				return 1883720795;
			}
			else
			{
				return -1369680592;
			}
			break;
		case -812395905:
			if (iParam2 == 1)
			{
				return 387520892;
			}
			else
			{
				return -1903848769;
			}
			break;
		case 1252173965:
			if (iParam2 == 1)
			{
				return -323196703;
			}
			else
			{
				return -1097366344;
			}
			break;
		case 1948286917: /* GXTEntry: "Pigeon" */
			if (iParam2 == 1)
			{
				return -624807541;
			}
			else
			{
				return 1875235996;
			}
			break;
		case 886717998:
			if (iParam2 == 1)
			{
				return -615644963;
			}
			else
			{
				return -823139835;
			}
			break;
		case -905573570: /* GXTEntry: "Opossum" */
			if (iParam2 == 1)
			{
				return 1706508339;
			}
			else
			{
				return -138305935;
			}
			break;
		case -10873946: /* GXTEntry: "Pronghorn" */
			if (iParam2 == 1)
			{
				return -2103370865;
			}
			else
			{
				return 1443679495;
			}
			break;
		case -1850027464:
			if (iParam2 == 1)
			{
				return -633158514;
			}
			else
			{
				return 1018532190;
			}
			break;
		case -1559343651:
			if (iParam2 == 1)
			{
				return -918953360;
			}
			else
			{
				return -660080832;
			}
			break;
		case -908129790:
			if (iParam2 == 1)
			{
				return -1349222587;
			}
			else
			{
				return 1557946994;
			}
			break;
		case -756458312: /* GXTEntry: "Quail" */
			if (iParam2 == 1)
			{
				return 2023710928;
			}
			else
			{
				return 1977250026;
			}
			break;
		case -1523680261: /* GXTEntry: "Rabbit" */
			if (iParam2 == 1)
			{
				return 1566791262;
			}
			else
			{
				return -966619756;
			}
			break;
		case 915670869: /* GXTEntry: "Raccoon" */
			if (iParam2 == 1)
			{
				return -1644328077;
			}
			else
			{
				return -576645995;
			}
			break;
		case 1241049848:
			if (iParam2 == 1)
			{
				return 797754095;
			}
			else
			{
				return -2058983692;
			}
			break;
		case 1642062303:
			if (iParam2 == 1)
			{
				return -1659756524;
			}
			else
			{
				return 655563396;
			}
			break;
		case -868889795:
			if (iParam2 == 1)
			{
				return 631588480;
			}
			else
			{
				return 1964441958;
			}
			break;
		case -245437166:
			if (iParam2 == 1)
			{
				return -325679307;
			}
			else
			{
				return 1238941576;
			}
			break;
		case -587357648:
			if (iParam2 == 1)
			{
				return -526737116;
			}
			else
			{
				return -2067439289;
			}
			break;
		case 1161966186:
			if (iParam2 == 1)
			{
				return 2096415373;
			}
			else
			{
				return 389722302;
			}
			break;
		case -795241033:
			if (iParam2 == 1)
			{
				return 1154535482;
			}
			else
			{
				return 1974479168;
			}
			break;
		case -366264193:
			if (iParam2 == 1)
			{
				return 989198786;
			}
			else
			{
				return -355707420;
			}
			break;
		case -705312705: /* GXTEntry: "Rat" */
			if (iParam2 == 1)
			{
				return -1917262038;
			}
			else
			{
				return -887338500;
			}
			break;
		case -1592962144: /* GXTEntry: "Raven" */
			if (iParam2 == 1)
			{
				return -1387399089;
			}
			else
			{
				return 2126380116;
			}
			break;
		case 886059398: /* GXTEntry: "Bird" */
			if (iParam2 == 1)
			{
				return -93072263;
			}
			else
			{
				return -1354818991;
			}
			break;
		case 2018874380: /* GXTEntry: "Robin" */
			if (iParam2 == 1)
			{
				return 515905092;
			}
			else
			{
				return -2141961689;
			}
			break;
		case -1467886026:
		case -262717989: /* GXTEntry: "Rooster" */
		case 1100342668:
			if (iParam2 == 1)
			{
				return -1304404966;
			}
			else
			{
				return -338768354;
			}
			break;
		case -1181288733: /* GXTEntry: "Spoonbill" */
			if (iParam2 == 1)
			{
				return -1675867359;
			}
			else
			{
				return 922834860;
			}
			break;
		case 1398366530:
			if (iParam2 == 1)
			{
				return 2136163397;
			}
			else
			{
				return -2053685963;
			}
			break;
		case 1145409805:
			if (iParam2 == 1)
			{
				return -1506726199;
			}
			else
			{
				return -1570463396;
			}
			break;
		case 733223128:
			if (iParam2 == 1)
			{
				return 1487282350;
			}
			else
			{
				return 1316963652;
			}
			break;
		case -1427844561: /* GXTEntry: "Sheep" */
			if (iParam2 == 1)
			{
				return -411919020;
			}
			else
			{
				return -1656161562;
			}
			break;
		case -998653403: /* GXTEntry: "Skunk" */
			if (iParam2 == 1)
			{
				return -777288672;
			}
			else
			{
				return -1653716830;
			}
			break;
		case -547357240: /* GXTEntry: "Snake" */
		case 491620790:
		case 888613388:
			if (iParam2 == 1)
			{
				return 1341689645;
			}
			else
			{
				return -2059037310;
			}
			break;
		case -764925634: /* GXTEntry: "Snake" */
		case -518676029:
		case -21336386:
			if (iParam2 == 1)
			{
				return 2110273088;
			}
			else
			{
				return -1256102478;
			}
			break;
		case -946474842: /* GXTEntry: "Black-tailed Rattlesnake" */
			if (iParam2 == 1)
			{
				return -1288369533;
			}
			else
			{
				return -1810346437;
			}
			break;
		case -1363455176:
			if (iParam2 == 1)
			{
				return 559815433;
			}
			else
			{
				return 545602543;
			}
			break;
		case 234935858:
			if (iParam2 == 1)
			{
				return 977951227;
			}
			else
			{
				return 1629707044;
			}
			break;
		case 395345271: /* GXTEntry: "Songbird" */
			if (iParam2 == 1)
			{
				return 89462976;
			}
			else
			{
				return 1295654965;
			}
			break;
		case -1049737813:
			if (iParam2 == 1)
			{
				return -1909301662;
			}
			else
			{
				return 1069740553;
			}
			break;
		case -143561573: /* GXTEntry: "Sparrow" */
			if (iParam2 == 1)
			{
				return -1139750351;
			}
			else
			{
				return -449932244;
			}
			break;
		case -1099435331:
			if (iParam2 == 1)
			{
				return 184175481;
			}
			else
			{
				return 1863951382;
			}
			break;
		case -2058116954:
			if (iParam2 == 1)
			{
				return 1164479228;
			}
			else
			{
				return 465359925;
			}
			break;
		case -581264978: /* GXTEntry: "Squirrel" */
			if (iParam2 == 1)
			{
				return 935639802;
			}
			else
			{
				return 768799230;
			}
			break;
		case -1851619259:
			if (iParam2 == 1)
			{
				return 633525360;
			}
			else
			{
				return -312751742;
			}
			break;
		case -1055590463:
			if (iParam2 == 1)
			{
				return 746264043;
			}
			else
			{
				return 942504103;
			}
			break;
		case 725092441: /* GXTEntry: "Toad" */
		case 1202456973:
			if (iParam2 == 1)
			{
				return -1751536989;
			}
			else
			{
				return -334051008;
			}
			break;
		case -2087684184: /* GXTEntry: "Turkey" */
			if (iParam2 == 1)
			{
				return 1612083342;
			}
			else
			{
				return -1360421905;
			}
			break;
		case -1771094723:
			if (iParam2 == 1)
			{
				return 500704149;
			}
			else
			{
				return 1603220402;
			}
			break;
		case -117895552:
			if (iParam2 == 1)
			{
				return 311774207;
			}
			else
			{
				return 1761303658;
			}
			break;
		case 288450344:
			if (iParam2 == 1)
			{
				return 2390170;
			}
			else
			{
				return -1827589699;
			}
			break;
		case -1914955935:
			if (iParam2 == 1)
			{
				return -1372762125;
			}
			else
			{
				return -1302010630;
			}
			break;
		case 848629876: /* GXTEntry: "Vulture" */
			if (iParam2 == 1)
			{
				return -1819285714;
			}
			else
			{
				return -1310085735;
			}
			break;
		case -439919843: /* GXTEntry: "Wolf" */
			if (iParam2 == 1)
			{
				return 781175185;
			}
			else
			{
				return -1866392966;
			}
			break;
		case -377162693:
			if (iParam2 == 1)
			{
				return -436635592;
			}
			else
			{
				return 1489728350;
			}
			break;
		case 330512330:
			if (iParam2 == 1)
			{
				return -971017472;
			}
			else
			{
				return 760166198;
			}
			break;
		case 595771513:
			if (iParam2 == 1)
			{
				return -1925555109;
			}
			else
			{
				return -1518144336;
			}
			break;
		case -391309265:
			if (iParam2 == 1)
			{
				return -856016756;
			}
			else
			{
				return -463149499;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_29(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_33(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_30(int iParam0)
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

int func_31(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_32(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_34(1);
	}
}

void func_33(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_32(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_34(1);
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		func_35(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_36(&(Global_40.f_12018.f_42), 1);
	}
}

void func_35(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_36(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

