#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> Local_3 = { 0, 0 } ;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	uLocal_11 = ScriptParam_0;
	iLocal_10 = ScriptParam_0.f_1;
	if (func_1() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (func_2(0) != 10)
		{
		}
		else
		{
			func_3(&Local_3);
		}
	}
	if (func_1() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_3(&Local_3);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_10))
	{
		func_3(&Local_3);
	}
	Local_3.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_10, 1) };
	if (func_4(&Local_3))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_10, 0);
		func_3(&Local_3);
	}
	else
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_10, 1);
	}
	while (func_5())
	{
		if (func_6())
		{
			func_3(&Local_3);
		}
		if (func_7(&Local_3))
		{
			func_3(&Local_3);
		}
		BUILTIN::WAIT(0);
	}
	func_3(&Local_3);
}

int func_1()
{
	return Global_1572887->f_12;
}

int func_2(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_3(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_5));
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_11);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_4(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_8(Local_3.f_1, ((*Global_1913500)[iVar0 /*4*/])->f_1, 1056964608 /* Float: 0.5f */, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_5()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_3(&Local_3);
		return 0;
	}
	return 1;
}

int func_6()
{
	if (Global_1572887->f_12 == -1)
	{
		if (PED::IS_PED_INJURED(Global_35))
		{
			return 1;
		}
	}
	else if (Global_1225638->f_12)
	{
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	switch (func_9(uParam0))
	{
		case 0:
			iLocal_12 = func_10();
			func_11(uParam0, 1);
			break;
		case 1:
			if (func_12(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_5));
				}
				func_13(uParam0->f_1);
				return 1;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_14(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::_BLIP_ADD_FOR_COORD(1425226969, uParam0->f_1);
				func_14(uParam0);
			}
			break;
	}
	return 0;
}

int func_8(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(var uParam0)
{
	return *uParam0;
}

int func_10()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_16(func_15(iVar0), 1, 0))
		{
			iVar1 = (iVar1 + func_17(func_15(iVar0), 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_12(var uParam0)
{
	if (1.414214f >= BUILTIN::VDIST(uParam0->f_1, Global_36) && iLocal_12 < func_10())
	{
		return 1;
	}
	return 0;
}

void func_13(vector3 vParam0)
{
	Global_1913677 = (&Global_1913677 % 10);
	((*Global_1913500)[&Global_1913677 /*4*/])->f_1 = { vParam0 };
	Global_1913677 = &Global_1913677 + 1;
}

void func_14(var uParam0)
{
	MAP::_BLIP_SET_MODIFIER(uParam0->f_5, 287065609);
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1602657245 /* GXTEntry: "Bay Bolete" */;
		case 1:
			return -1991037110 /* GXTEntry: "Blackberry" */;
		case 2:
			return -1066874997 /* GXTEntry: "Chanterelle" */;
		case 3:
			return 2064962445 /* GXTEntry: "Creeping Thyme" */;
		case 4:
			return -1664530975 /* GXTEntry: "Evergreen Huckleberry" */;
		case 5:
			return 546981776 /* GXTEntry: "Oregano" */;
		case 6:
			return -2013384490 /* GXTEntry: "Parasol Mushroom" */;
		case 7:
			return -746674788 /* GXTEntry: "Ram\'s Head" */;
		case 8:
			return 599861917 /* GXTEntry: "Raspberry" */;
		case 9:
			return -435006002 /* GXTEntry: "Wild Mint" */;
		case 10:
			return -624139784 /* GXTEntry: "Wintergreen Berry" */;
		default:
			break;
	}
	return 0;
}

bool func_16(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_18(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_20(iParam0, 1))
		{
			return false;
		}
	}
	return func_17(iParam0, 0, bParam2) >= iParam1;
}

int func_17(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		iVar1 = func_21(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_22(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_23(bParam2), iParam0, 0);
	return uVar2;
}

int func_18(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_19(int iParam0)
{
	vector3 vVar0;

	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_20(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_21(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_24("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_25(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_26(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_27(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_27(iVar1);
	}
	return 0;
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_18(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_28(iParam0, 1399091007))
	{
		func_29(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_22(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_30(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_32(&Var0, func_31(0));
	}
	if (!func_33(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_27(iVar14);
	return uVar15;
}

int func_23(bool bParam0)
{
	if (func_1() == -1)
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

int func_24(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_23(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_27(int iParam0)
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

int func_28(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_29(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	return Var0;
}

struct<4> func_31(bool bParam0)
{
	int iVar0;

	iVar0 = func_23(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_35(923904168, func_34(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_35(923904168, func_34(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_35(923904168, func_34(bParam0), -740156546, 0);
}

void func_32(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_33(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_23(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

struct<4> func_34(bool bParam0)
{
	return func_35(joaat("character"), func_36(), -1591664384, bParam0);
}

struct<4> func_35(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_18(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_23(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_36()
{
	struct<4> Var0;

	return Var0;
}

