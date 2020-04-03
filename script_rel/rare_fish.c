#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	vector3 vLocal_16 = { 0f, 0f, 0f };
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_19 = ScriptParam_0;
	uLocal_20 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
	{
		func_2(&uLocal_14);
	}
	if (!TASK::_0x841475AC96E794D1(ScriptParam_0.f_1))
	{
		func_2(&uLocal_14);
	}
	iLocal_21 = func_3();
	vLocal_16 = { TASK::_0xA8452DD321607029(uLocal_20, 1) };
	if (iLocal_21 == 560825326)
	{
		if (!func_4(21))
		{
			if (!func_5(687859577))
			{
				func_2(&uLocal_14);
			}
		}
	}
	if (iLocal_21 == 858269539 && !func_6(148))
	{
		func_2(&uLocal_14);
	}
	if (func_7(iLocal_21))
	{
		func_2(&uLocal_14);
	}
	if (func_8() && func_9() == 0)
	{
		func_2(&uLocal_14);
	}
	while (func_10())
	{
		if (func_11())
		{
			func_2(&uLocal_14);
		}
		if (func_12() == 654481153)
		{
			if (func_13(&uLocal_14))
			{
				func_2(&uLocal_14);
			}
		}
		else if (func_14(0, 0, 1))
		{
			func_2(&uLocal_14);
		}
		else if (func_13(&uLocal_14))
		{
			func_2(&uLocal_14);
		}
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_14);
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	int iVar0;

	if (TASK::_0x841475AC96E794D1(uLocal_20))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(uLocal_20));
	}
	return COLLECTION::_0x126CBEBBA46693CF(iVar0, -940661134, 0);
}

bool func_4(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_15(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

bool func_5(int iParam0)
{
	int iVar0;

	iVar0 = func_17(func_16(), iParam0);
	return func_18(iVar0) > 0;
}

int func_6(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_19(iParam0))
	{
		return 0;
	}
	return func_20(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

bool func_7(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_8()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_9()
{
	if (!func_15(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_15(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_15(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_15(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_15(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_15(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_15(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_10()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(&uLocal_14);
		return 0;
	}
	return 1;
}

int func_11()
{
	if (PED::IS_PED_INJURED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	return Global_1391438->f_414;
}

int func_13(var uParam0)
{
	switch (func_21(uParam0))
	{
		case 0:
			if (func_22(iLocal_21))
			{
				func_2(uParam0);
			}
			else
			{
				func_23(uParam0, 1);
			}
			break;
		case 1:
			if (func_24(16))
			{
				iLocal_22 = 100;
			}
			else
			{
				iLocal_22 = 50;
			}
			if (func_25(Global_35, vLocal_16, 0) < IntToFloat(iLocal_22))
			{
				if (iLocal_21 == 858269539 || iLocal_21 == 560825326)
				{
					if (!func_4(21) && !func_5(687859577))
					{
					}
					else
					{
						func_26();
					}
				}
				else
				{
					func_26();
				}
				func_23(uParam0, 2);
			}
			break;
		case 2:
			func_27(iLocal_21);
			if (func_28(iLocal_21))
			{
				if (!func_30(func_29(iLocal_21)))
				{
					MAP::_0xD8C7162AB2E2AF45(func_31(iLocal_21));
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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
		if (func_32())
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
		iVar0 = func_33(&(Global_1898164->f_1[0 /*5*/]));
		if (func_19(iVar0) && func_34(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_35(&(Global_1898164->f_1[0 /*5*/])))
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

int func_15(int iParam0, bool bParam1)
{
	switch (func_36(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var func_16()
{
	return Global_40.f_4283;
}

int func_17(var uParam0, int iParam1)
{
	if (iParam1 == -1891229662)
	{
		return func_38(0, func_37(iParam1, 1), 11, 2116153146);
	}
	return func_38(0, func_37(iParam1, 1), 11, iParam1);
}

int func_18(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_39(iParam0) & 2147418112, 16);
}

bool func_19(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_20(int iParam0)
{
	int iVar0;

	iVar0 = func_36(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_21(var uParam0)
{
	return *uParam0;
}

bool func_22(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_24(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

float func_25(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_26()
{
	if (func_8())
	{
		if (func_40(0) && !func_40(41))
		{
			func_41(380, 1);
		}
		else
		{
			func_41(379, 1);
		}
	}
}

void func_27(int iParam0)
{
	if (!func_7(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case -1261163843:
		case -963523016:
		case -138366827:
		case 1053540370:
		case 1362715885:
		case 1667205433:
		case 1972645282:
			return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 1972645282:
			return -1409326024;
		case 1362715885:
			return -946988203;
		case 1053540370:
			return -646136018;
		case 1667205433:
			return -641744968;
		case -138366827:
			return 1764383959;
		case -1261163843:
			return 317501533;
		case -963523016:
			return 817753087;
		default:
			break;
	}
	return 0;
}

bool func_30(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case -642026005:
			return 1791726215;
		case -940584364:
			return -1553566002;
		case 1972645282:
			return -528070704;
		case 1667205433:
			return 1214218277;
		case 1362715885:
			return -1424874851;
		case 1053540370:
			return -414895106;
		case -1100103852:
			return -1560294747;
		case -1409869209:
			return 1937997726;
		case -1760235357:
			return 505929754;
		case -138366827:
			return -312076753;
		case -1261163843:
			return 235447783;
		case -963523016:
			return 1793239293;
		case 560825326:
			return -1142443514;
		default:
			break;
	}
	return 0;
}

int func_32()
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

int func_33(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return func_43(func_42(iParam0));
}

bool func_34(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_35(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_36(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return func_44(iParam0);
}

int func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1894360593:
			return 1;
		case -1891229662:
			return 10;
		case -1348173149:
			return 17;
		case -1220302226:
			return 14;
		case -839878969:
			return 7;
		case -709866131:
			return 16;
		case -668333238:
			return 11;
		case -589165916:
			return 0;
		case -360730635:
			return 8;
		case -103573613:
			return 4;
		case 99378894:
			return 12;
		case 194099983:
			return 9;
		case 581819093:
			return 2;
		case 673012160:
			return 13;
		case 687859577:
			return 3;
		case 1202375449:
			return 5;
		case 2038046186:
			return 6;
		case 2061320468:
			return 15;
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

int func_38(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_45())
	{
		iVar2 = func_45();
	}
	iVar5 = func_46(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_42(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_42(iVar6) == 0)
			{
				return func_47(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_42(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_42(iVar6) == 0)
			{
				return func_47(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_47(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_39(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

int func_40(int iParam0)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_19(iParam0))
	{
		return 0;
	}
	return func_15(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

void func_41(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_48(iParam0, &iVar0, &iVar1);
	if (!func_49(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_50(iVar0, iVar1);
}

int func_42(int iParam0)
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

int func_43(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_44(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_51(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_45()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_52(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_45())
	{
		return -1;
	}
	iVar0 = func_46(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_53(iVar1, 0);
	func_54(iVar1, 0);
	func_55(iVar1, 0);
	func_56(iVar1, 0);
	func_57(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_58(iVar1, iParam4);
	}
	return iVar1;
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_49(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_59(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_60(iParam0))
	{
		return 0;
	}
	if (func_61(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_62(iParam0, 1)) || func_63(32768))
	{
		if (!func_62(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_64())
	{
		return 0;
	}
	return 1;
}

void func_50(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_52(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_53(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_65(iParam0);
	}
	else
	{
		func_66(iParam0, iParam1);
	}
	func_67();
}

void func_54(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_55(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_56(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_57(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_58(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

bool func_59(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_60(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_62(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_62(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_62(iParam0, 65536) && !func_62(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_62(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_62(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_62(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_63(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_64()
{
	return Global_1905944->f_5694;
}

int func_65(int iParam0)
{
	int iVar0;

	iVar0 = func_51(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_68(iVar0);
}

int func_66(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_69(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_68(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_69(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

