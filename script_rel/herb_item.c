#region Local Var
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	int iVar5;
	bool bVar6;

	iVar0 = ScriptParam_0.f_1;
	bVar1 = ScriptParam_0.f_3;
	bVar2 = ScriptParam_0.f_4;
	iVar5 = func_1(&iVar0);
	bVar6 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var3, 3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (func_3(Global_35, 0) != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("weapon_unarmed"), 0);
	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			func_2(&Var3, 3);
		}
		switch (func_4(&Var3))
		{
			case 0:
				if (func_3(Global_35, 0) != joaat("weapon_unarmed"))
				{
				}
				else
				{
					func_2(&Var3, 1);
				}
				break;
			case 1:
				func_5(iVar5);
				func_6(iVar0);
				Var3.f_1 = MISC::GET_GAME_TIMER();
				func_7(iVar5, 1);
				func_2(&Var3, 2);
				break;
			case 2:
				if (bVar2)
				{
					if ((MISC::GET_GAME_TIMER() - Var3.f_1) > 5500)
					{
						bVar6 = func_8(ScriptParam_0);
						func_9(iVar5, 1, !bVar6);
						if (bVar1)
						{
							func_10(iVar5, bVar6, 1, 0);
						}
						if (bVar6)
						{
							func_12(209, func_11(iVar5), 1);
						}
						func_2(&Var3, 3);
					}
				}
				else
				{
					func_2(&Var3, 3);
				}
				break;
			case 3:
				func_13();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(int iParam0)
{
	switch (*iParam0)
	{
		case 1433048902: /* GXTEntry: "Ginseng" */
			return 2;
		case -1602657245: /* GXTEntry: "Bay Bolete" */
			return 4;
		case -1991037110: /* GXTEntry: "Blackberry" */
			return 5;
		case 1047281747: /* GXTEntry: "Currant" */
			return 6;
		case -398744080: /* GXTEntry: "Burdock Root" */
			return 7;
		case -1066874997: /* GXTEntry: "Chanterelle" */
			return 8;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
			return 11;
		case 2064962445: /* GXTEntry: "Creeping Thyme" */
			return 12;
		case -1620920647: /* GXTEntry: "English Mace" */
			return 15;
		case -1664530975: /* GXTEntry: "Evergreen Huckleberry" */
			return 16;
		case -597058368: /* GXTEntry: "Indian Tobacco" */
			return 20;
		case 128702355: /* GXTEntry: "Milkweed" */
			return 23;
		case -2051332199: /* GXTEntry: "Oleander Sage" */
			return 26;
		case 546981776: /* GXTEntry: "Oregano" */
			return 27;
		case -2013384490: /* GXTEntry: "Parasol Mushroom" */
			return 28;
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			return 29;
		case -746674788: /* GXTEntry: "Ram\'s Head" */
			return 31;
		case 599861917: /* GXTEntry: "Raspberry" */
			return 33;
		case -1781387050: /* GXTEntry: "Sage" */
			return 34;
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			return 37;
		case -90546043: /* GXTEntry: "Violet Snowdrop" */
			return 38;
		case 1216456215: /* GXTEntry: "Wild Carrot" */
			return 39;
		case 746300881: /* GXTEntry: "Wild Feverfew" */
			return 40;
		case -435006002: /* GXTEntry: "Wild Mint" */
			return 41;
		case -624139784: /* GXTEntry: "Wintergreen Berry" */
			return 42;
		case -529638012: /* GXTEntry: "Yarrow" */
			return 43;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 1;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 9;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 10;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 14;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 17;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 21;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 22;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 24;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 25;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 30;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 32;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 35;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 36;
	}
	return 0;
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_3(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_4(var uParam0)
{
	return *uParam0;
}

void func_5(int iParam0)
{
	var uVar0;

	uVar0 = func_16(MISC::_CREATE_VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::_CREATE_VAR_STRING(0, func_15(func_14(iParam0))), 1), "", 0, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	(*Global_1913500)[iParam0 /*4*/] = uVar0;
}

void func_6(int iParam0)
{
	if (!func_17(iParam0, 0))
	{
	}
}

void func_7(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_18(-372368982, func_11(iParam0)) };
	STATS::_0x6A0184E904CDF25E(&Var0, iParam1);
	func_20(func_19(106002964), iParam1);
}

int func_8(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	uVar0 = Param0.f_1;
	bVar1 = Param0.f_3;
	bVar2 = Param0.f_4;
	iVar3 = func_1(&uVar0);
	if (!bVar2 || func_21(iVar3))
	{
		return 0;
	}
	iVar4 = func_22(iVar3);
	if ((!bVar1 || !func_17(iVar4, 0)) || func_23(iVar4))
	{
		return 0;
	}
	return 1;
}

void func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_14(iParam0);
	iVar1 = func_1(&iVar0);
	if (iVar1 != iParam0)
	{
		func_24(iVar1, 4);
	}
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_21(iParam0))
	{
		return;
	}
	func_24(iParam0, 4);
	func_26(iParam0, bParam1);
	if (!func_27(iParam0))
	{
		func_28(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

void func_10(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_25(iParam0))
	{
		return;
	}
	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117 /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return 1660962977 /* GXTEntry: "American Ginseng" */;
		case 4:
			return -131409450 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1487527516 /* GXTEntry: "Blackberry" */;
		case 6:
			return 561629573 /* GXTEntry: "Blackcurrant" */;
		case 7:
			return 1829679323 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -618617794 /* GXTEntry: "Chanterelles" */;
		case 11:
			return 653458791 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 437319607 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1519488075 /* GXTEntry: "Desert Sage" */;
		case 15:
			return 1014445254 /* GXTEntry: "English Mace" */;
		case 16:
			return 224814421 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1012187868 /* GXTEntry: "Golden Currant" */;
		case 19:
			return -1040706491 /* GXTEntry: "Hummingbird Sage" */;
		case 20:
			return -1910627346 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return -1812487593 /* GXTEntry: "Milkweed" */;
		case 26:
			return 1983971282 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 1561519041 /* GXTEntry: "Oregano" */;
		case 28:
			return -980496853 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return -1738887126 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return 424771379 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 787316814 /* GXTEntry: "Red Raspberry" */;
		case 34:
			return 984616481 /* GXTEntry: "Red Sage" */;
		case 37:
			return 1078285403 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -262897007 /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return 1288848815 /* GXTEntry: "Wild Mint" */;
		case 42:
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return 170272501 /* GXTEntry: "Yarrow" */;
		case 1:
			return 2056650000 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -1195354638 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return 1077596967 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return -2145199848 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 752824478 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return -819513569 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1906968775 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return -135434663 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return 920123680 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 150470908 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -1665125257 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 1587928307 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return -1738925422 /* GXTEntry: "Spider Orchid" */;
	}
	return 0;
}

void func_12(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_34(iParam0, 1024))
	{
		return;
	}
	func_35(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_13()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 3:
			return 1433048902 /* GXTEntry: "Ginseng" */;
		case 4:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 6:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 7:
			return -398744080 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 11:
			return -2085219828 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 15:
			return -1620920647 /* GXTEntry: "English Mace" */;
		case 16:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 18:
			return 1047281747 /* GXTEntry: "Currant" */;
		case 19:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 20:
			return -597058368 /* GXTEntry: "Indian Tobacco" */;
		case 23:
			return 128702355 /* GXTEntry: "Milkweed" */;
		case 26:
			return -2051332199 /* GXTEntry: "Oleander Sage" */;
		case 27:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 28:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 29:
			return 228922461 /* GXTEntry: "Prairie Poppy" */;
		case 31:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 33:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 34:
			return -1781387050 /* GXTEntry: "Sage" */;
		case 37:
			return 2006811763 /* GXTEntry: "Vanilla Flower" */;
		case 38:
			return -90546043 /* GXTEntry: "Violet Snowdrop" */;
		case 39:
			return 1216456215 /* GXTEntry: "Wild Carrot" */;
		case 40:
			return 746300881 /* GXTEntry: "Wild Feverfew" */;
		case 41:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 42:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		case 43:
			return -529638012 /* GXTEntry: "Yarrow" */;
		case 1:
			return -651064726 /* GXTEntry: "Acuna\'s Star Orchid" */;
		case 9:
			return -404270094 /* GXTEntry: "Cigar Orchid" */;
		case 10:
			return -1521783510 /* GXTEntry: "Clamshell Orchid" */;
		case 14:
			return 1714875242 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
		case 17:
			return 2093126853 /* GXTEntry: "Ghost Orchid" */;
		case 21:
			return 728781265 /* GXTEntry: "Lady of the Night Orchid" */;
		case 22:
			return 1794857344 /* GXTEntry: "Lady Slipper Orchid" */;
		case 24:
			return 1952409553 /* GXTEntry: "Moccasin Flower Orchid" */;
		case 25:
			return -150591160 /* GXTEntry: "Night Scented Orchid" */;
		case 30:
			return 1019229063 /* GXTEntry: "Queen\'s Orchid" */;
		case 32:
			return -323969289 /* GXTEntry: "Rat Tail Orchid" */;
		case 35:
			return 927763737 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
		case 36:
			return 1504361882 /* GXTEntry: "Spider Orchid" */;
		default:
			break;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

var func_16(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_36(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

struct<2> func_18(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	return Var0;
}

struct<2> func_19(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_20(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_21(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	return func_37(iParam0, 4, 1);
}

int func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779 /* GXTEntry: "Special Health Cure" */;
		case 3:
			return -755485480 /* GXTEntry: "Potent Health Cure" */;
		case 6:
			return 747460826 /* GXTEntry: "Special Horse Stimulant" */;
		case 7:
			return 1627068364 /* GXTEntry: "Horse Reviver" */;
		case 13:
			return -1067476102 /* GXTEntry: "Potent Bitters" */;
		case 15:
			return -1080874779 /* GXTEntry: "Special Health Cure" */;
		case 18:
			return -801397594 /* GXTEntry: "Potent Horse Stimulant" */;
		case 19:
			return 730856618 /* GXTEntry: "Potent Miracle Tonic" */;
		case 20:
			return -486559882 /* GXTEntry: "Potent Snake Oil" */;
		case 23:
			return -1976480343 /* GXTEntry: "Special Miracle Tonic" */;
		case 26:
			return 1895068170 /* GXTEntry: "Cover Scent Lotion" */;
		case 29:
			return -1067476102 /* GXTEntry: "Potent Bitters" */;
		case 34:
			return 1566032147 /* GXTEntry: "Special Bitters" */;
		case 38:
			return 2036955137 /* GXTEntry: "Potent Herbivore Bait" */;
		case 40:
			return 1566032147 /* GXTEntry: "Special Bitters" */;
		case 43:
			return -755485480 /* GXTEntry: "Potent Health Cure" */;
	}
	return 0;
}

int func_23(int iParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_38(iParam0, Var1, 1))
			{
				return 1;
			}
		}
		iVar48++;
	}
	return 0;
}

void func_24(int iParam0, int iParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_39() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_25(int iParam0)
{
	return !iParam0 <= 0;
}

void func_26(int iParam0, bool bParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_40(iParam0))
	{
		return;
	}
	func_24(iParam0, 2);
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

int func_27(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	return func_37(iParam0, 1, 1);
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_27(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_41(iParam0);
	}
	if (!bParam1)
	{
		if (func_39() != -1)
		{
		}
		else
		{
			func_42(iParam0);
		}
	}
	func_24(iParam0, 1);
	if (func_39() == -1)
	{
		func_44(iParam0, func_43());
	}
	func_26(iParam0, 1);
	if (bParam2)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

int func_29(int iParam0, bool bParam1, bool bParam2)
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
		if (func_45())
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
		iVar0 = func_46(&(Global_1898164->f_1[0 /*5*/]));
		if (func_47(iVar0) && func_48(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_49(&(Global_1898164->f_1[0 /*5*/])))
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

void func_30(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_50(&Global_0, 8);
	}
	if (!func_51() || func_39() != -1)
	{
		return;
	}
	func_50(&Global_0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_38(iParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_38(iParam0, Var2, 1))
				{
					if (func_52(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_52(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_53(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_54(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_55(iParam0))
	{
		return 0;
	}
	if (func_56(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_34(iParam0, 1)) || func_57(32768))
	{
		if (!func_34(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_58())
	{
		return 0;
	}
	return 1;
}

bool func_34(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_35(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_36(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

bool func_37(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_25(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36637[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_39() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return 0;
	}
	if (!func_59(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

int func_39()
{
	return Global_1572887->f_12;
}

int func_40(int iParam0)
{
	if (!func_25(iParam0))
	{
		return 0;
	}
	return func_37(iParam0, 2, 1);
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_42(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_53(210, 0);
			break;
		case 16:
			func_53(211, 0);
			break;
		case 33:
			func_53(212, 0);
			break;
		case 42:
			func_53(213, 0);
			break;
		case 2:
			func_53(214, 0);
			break;
		case 3:
			func_53(215, 0);
			break;
		case 43:
			func_53(216, 0);
			break;
		case 15:
			func_53(217, 0);
			break;
		case 23:
			func_53(218, 0);
			break;
		case 37:
			func_53(219, 0);
			break;
		case 26:
			func_53(220, 0);
			break;
		case 13:
			func_53(221, 0);
			break;
		case 19:
			func_53(222, 0);
			break;
		case 34:
			func_53(223, 0);
			break;
		case 38:
			func_53(224, 0);
			break;
		case 40:
			func_53(225, 0);
			break;
		case 7:
			func_53(226, 0);
			break;
		case 20:
			func_53(227, 0);
			break;
		case 18:
			func_53(228, 0);
			break;
		case 6:
			func_53(229, 0);
			break;
		case 29:
			func_53(230, 0);
			break;
		case 39:
			func_53(231, 0);
			break;
		case 11:
			break;
		case 4:
			func_53(233, 0);
			break;
		case 8:
			func_53(234, 0);
			break;
		case 28:
			func_53(235, 0);
			break;
		case 31:
			func_53(236, 0);
			break;
		case 12:
			func_53(237, 0);
			break;
		case 27:
			func_53(238, 0);
			break;
		case 41:
			func_53(239, 0);
			break;
	}
}

int func_43()
{
	if (func_39() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
			{
				func_60(1849379570, 0);
			}
			else
			{
				func_60(961286348, 0);
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				func_60(-837750081, 0);
			}
			else
			{
				func_60(340939753, 0);
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				func_60(-342875345, 0);
			}
			else
			{
				func_60(-1349311606, 0);
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				func_60(-1083564345, 0);
			}
			else
			{
				func_60(833225684, 0);
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				func_60(-363984637, 0);
			}
			else
			{
				func_60(1254542371, 0);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				func_60(205335377, 0);
			}
			else
			{
				func_60(637367741, 0);
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				func_60(-1389317844, 0);
			}
			else
			{
				func_60(-556895345, 0);
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				func_60(-1907629529, 0);
			}
			else
			{
				func_60(1599606732, 0);
			}
			break;
		case 39:
			if (iParam1 == 1)
			{
				func_60(240007023, 0);
			}
			else
			{
				func_60(-1520210138, 0);
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				func_60(1312152388, 0);
			}
			else
			{
				func_60(-9418953, 0);
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				func_60(545314598, 0);
			}
			else
			{
				func_60(1529839790, 0);
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				func_60(1230485961, 0);
			}
			else
			{
				func_60(-1579920715, 0);
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				func_60(-201902289, 0);
			}
			else
			{
				func_60(1415616009, 0);
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				func_60(-564622057, 0);
			}
			else
			{
				func_60(-1442109431, 0);
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				func_60(-1303190422, 0);
			}
			else
			{
				func_60(-1299326860, 0);
			}
			break;
		case 15:
			if (iParam1 == 1)
			{
				func_60(-88060354, 0);
			}
			else
			{
				func_60(-366222423, 0);
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				func_60(1312248008, 0);
			}
			else
			{
				func_60(621868532, 0);
			}
			break;
		case 17:
			if (iParam1 == 1)
			{
				func_60(428446588, 0);
			}
			else
			{
				func_60(-1730302202, 0);
			}
			break;
		case 18:
			if (iParam1 == 1)
			{
				func_60(37692363, 0);
			}
			else
			{
				func_60(629404512, 0);
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				func_60(877023893, 0);
			}
			else
			{
				func_60(122486811, 0);
			}
			break;
		case 19:
			if (iParam1 == 1)
			{
				func_60(-706642783, 0);
			}
			else
			{
				func_60(621155065, 0);
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				func_60(-918250703, 0);
			}
			else
			{
				func_60(1945953943, 0);
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				func_60(722815515, 0);
			}
			else
			{
				func_60(-80758135, 0);
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				func_60(1053305061, 0);
			}
			else
			{
				func_60(1789349782, 0);
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				func_60(1024520106, 0);
			}
			else
			{
				func_60(1105521253, 0);
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				func_60(1140872184, 0);
			}
			else
			{
				func_60(-237709193, 0);
			}
			break;
		case 24:
			if (iParam1 == 1)
			{
				func_60(-1590595690, 0);
			}
			else
			{
				func_60(1836601784, 0);
			}
			break;
		case 25:
			if (iParam1 == 1)
			{
				func_60(1164380735, 0);
			}
			else
			{
				func_60(-1984992129, 0);
			}
			break;
		case 26:
			if (iParam1 == 1)
			{
				func_60(301696279, 0);
			}
			else
			{
				func_60(152181092, 0);
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				func_60(-415970359, 0);
			}
			else
			{
				func_60(839837681, 0);
			}
			break;
		case 28:
			if (iParam1 == 1)
			{
				func_60(1669531798, 0);
			}
			else
			{
				func_60(1602454819, 0);
			}
			break;
		case 29:
			if (iParam1 == 1)
			{
				func_60(-977383775, 0);
			}
			else
			{
				func_60(-1875435665, 0);
			}
			break;
		case 30:
			if (iParam1 == 1)
			{
				func_60(1183317680, 0);
			}
			else
			{
				func_60(-247145433, 0);
			}
			break;
		case 31:
			if (iParam1 == 1)
			{
				func_60(667332266, 0);
			}
			else
			{
				func_60(-368365640, 0);
			}
			break;
		case 33:
			if (iParam1 == 1)
			{
				func_60(-1578905205, 0);
			}
			else
			{
				func_60(946087658, 0);
			}
			break;
		case 32:
			if (iParam1 == 1)
			{
				func_60(-448931053, 0);
			}
			else
			{
				func_60(-421010414, 0);
			}
			break;
		case 34:
			if (iParam1 == 1)
			{
				func_60(-1162930163, 0);
			}
			else
			{
				func_60(-1228311530, 0);
			}
			break;
		case 35:
			if (iParam1 == 1)
			{
				func_60(1004123602, 0);
			}
			else
			{
				func_60(1321329534, 0);
			}
			break;
		case 36:
			if (iParam1 == 1)
			{
				func_60(281748406, 0);
			}
			else
			{
				func_60(-173822042, 0);
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				func_60(-1351305881, 0);
			}
			else
			{
				func_60(-1650817073, 0);
			}
			break;
		case 38:
			if (iParam1 == 1)
			{
				func_60(-1644190131, 0);
			}
			else
			{
				func_60(844678349, 0);
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				func_60(-926127573, 0);
			}
			else
			{
				func_60(-1260559150, 0);
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				func_60(758690400, 0);
			}
			else
			{
				func_60(1430679359, 0);
			}
			break;
		default:
			break;
	}
}

int func_45()
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

int func_46(int iParam0)
{
	if (!func_49(iParam0))
	{
		return -1;
	}
	return func_62(func_61(iParam0));
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_48(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_49(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_50(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_51()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_52(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_39() != -1)
	{
		return false;
	}
	if (func_59(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_53(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_35(iVar0, iVar1);
}

bool func_54(int iParam0, int iParam1)
{
	if (func_39() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_55(int iParam0)
{
	if (func_39() != -1)
	{
		if (func_34(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_34(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_34(iParam0, 65536) && !func_34(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_34(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_34(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_57(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_58()
{
	return Global_1905944->f_5694;
}

int func_59(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_17(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return 0;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_60(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_63(iParam0, 0);
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
		func_64(1);
		Global_40.f_11922[0] = iParam0;
	}
}

int func_61(int iParam0)
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

int func_62(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_63(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_65(1);
	}
}

void func_64(int iParam0)
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
			func_63(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_65(1);
	}
}

void func_65(bool bParam0)
{
	if (bParam0)
	{
		func_66(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_67(&(Global_40.f_12018.f_42), 1);
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

